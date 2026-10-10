#!/usr/bin/env python3
"""Runs clang-tidy over the recreation, skipping files a previous run found clean.

A file is checked when it is a source or test file, or a header check for a module header that
no .cpp includes directly; every other header is reported through the files that include it.
A clean result is cached under the hash of the file's preprocessed source (comments kept, so a
NOLINT edit counts), the tidy config and the clang-tidy version, so an unchanged file is skipped.
Failures are never cached.
"""

import argparse
import concurrent.futures
import hashlib
import json
import os
import re
import shlex
import subprocess
import sys
import threading
import time
from pathlib import Path

INCLUDE = re.compile(r'^\s*#\s*include\s+"([^"]+)"', re.MULTILINE)


def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--clang-tidy", required=True)
    parser.add_argument("--source-dir", type=Path, required=True)
    parser.add_argument("--build-dir", type=Path, required=True)
    parser.add_argument("--cache-dir", type=Path, help="where clean results are kept; none disables")
    parser.add_argument("-j", "--jobs", type=int, default=os.cpu_count() or 1)
    return parser.parse_args()


def included_headers(source_dir: Path) -> set[str]:
    included = set()
    for source in source_dir.rglob("*.cpp"):
        included.update(INCLUDE.findall(source.read_text(errors="replace")))
    return included


def select(entries: list[dict], source_dir: Path, build_dir: Path) -> list[dict]:
    checks = build_dir / "header_checks"
    included = included_headers(source_dir)
    chosen = []
    for entry in entries:
        path = Path(entry["file"])
        if path.is_relative_to(source_dir):
            chosen.append(entry)
        elif path.is_relative_to(checks):
            header = path.relative_to(checks).as_posix().removesuffix(".cpp")
            if not header.startswith("tests/") and header not in included:
                chosen.append(entry)
    return chosen


def compile_arguments(entry: dict) -> list[str]:
    if "arguments" in entry:
        return list(entry["arguments"])
    return shlex.split(entry["command"])


def preprocess(entry: dict) -> bytes:
    arguments = compile_arguments(entry)
    kept = [arguments[0]]
    skip = False
    for argument in arguments[1:]:
        if skip:
            skip = False
        elif argument == "-o":
            skip = True
        elif argument != "-c":
            kept.append(argument)
    result = subprocess.run(kept + ["-E", "-C", "-o", "-"], cwd=entry["directory"],
                            capture_output=True, check=True)
    return result.stdout


class Run:
    def __init__(self, args: argparse.Namespace, total: int) -> None:
        self.args = args
        self.total = total
        self.config = args.source_dir / ".clang-tidy"
        version = subprocess.run([args.clang_tidy, "--version"], capture_output=True, check=True)
        self.salt = version.stdout + self.config.read_bytes() + Path(__file__).read_bytes()
        self.lock = threading.Lock()
        self.done = 0
        self.cached = 0
        self.failed: list[str] = []
        self.timings: list[tuple[float, str]] = []
        self.used: set[str] = set()

    def report(self, status: str, name: str, seconds: float, output: str = "") -> None:
        with self.lock:
            self.done += 1
            print(f"[{self.done}/{self.total}] {status:7} {name} ({seconds:.1f}s)", flush=True)
            if output:
                print(output, end="" if output.endswith("\n") else "\n", flush=True)

    def check(self, entry: dict) -> None:
        start = time.monotonic()
        path = Path(entry["file"])
        name = (path.relative_to(self.args.source_dir) if path.is_relative_to(self.args.source_dir)
                else path.relative_to(self.args.build_dir)).as_posix()
        command = [self.args.clang_tidy, f"-p={self.args.build_dir}", "-quiet"]
        # Header checks sit in the build tree, where clang-tidy would not find the config.
        if not path.is_relative_to(self.args.source_dir):
            command.append(f"--config-file={self.config}")
        command.append(str(path))

        key = None
        if self.args.cache_dir:
            digest = hashlib.sha256(self.salt)
            digest.update(" ".join(command).encode())
            try:
                digest.update(preprocess(entry))
                key = digest.hexdigest()
            except subprocess.CalledProcessError:
                pass  # clang-tidy reports the same error below
        if key:
            marker = self.args.cache_dir / key
            with self.lock:
                self.used.add(key)
            if marker.exists():
                marker.touch()
                with self.lock:
                    self.cached += 1
                self.report("cached", name, time.monotonic() - start)
                return

        result = subprocess.run(command, capture_output=True, text=True, check=False)
        seconds = time.monotonic() - start
        with self.lock:
            self.timings.append((seconds, name))
        if result.returncode != 0 or result.stdout.strip():
            with self.lock:
                self.failed.append(name)
            self.report("FAILED", name, seconds, result.stdout + result.stderr)
            return
        if key:
            (self.args.cache_dir / key).touch()
        self.report("checked", name, seconds)

    def prune(self) -> None:
        # Every selected file ran, so anything left unused belongs to code that has changed.
        for marker in self.args.cache_dir.iterdir():
            if marker.name not in self.used:
                marker.unlink()


def main() -> int:
    args = parse_args()
    args.source_dir = args.source_dir.resolve()
    args.build_dir = args.build_dir.resolve()
    entries = json.loads((args.build_dir / "compile_commands.json").read_text())
    chosen = select(entries, args.source_dir, args.build_dir)
    if args.cache_dir:
        args.cache_dir.mkdir(parents=True, exist_ok=True)

    run = Run(args, len(chosen))
    start = time.monotonic()
    with concurrent.futures.ThreadPoolExecutor(args.jobs) as pool:
        for future in [pool.submit(run.check, entry) for entry in chosen]:
            future.result()
    if args.cache_dir:
        run.prune()

    elapsed = time.monotonic() - start
    checked = len(run.timings)
    summary = (f"clang-tidy: {len(chosen)} files, {run.cached} cached, {checked} checked, "
               f"{len(run.failed)} failed in {elapsed:.0f}s on {args.jobs} jobs")
    slowest = sorted(run.timings, reverse=True)[:5]
    print("\n" + summary)
    for seconds, name in slowest:
        print(f"  {seconds:6.1f}s  {name}")
    if run.failed:
        print("\nFailed:\n  " + "\n  ".join(sorted(run.failed)))

    # On GitHub Actions, the same on the run's summary page.
    if step_summary := os.environ.get("GITHUB_STEP_SUMMARY"):
        with open(step_summary, "a", encoding="utf-8") as out:
            out.write(f"### {summary}\n\n")
            if slowest:
                out.write("| Slowest | Seconds |\n|---|---|\n")
                out.writelines(f"| `{name}` | {seconds:.1f} |\n" for seconds, name in slowest)
            if run.failed:
                out.write("\n**Failed:**\n\n")
                out.writelines(f"- `{name}`\n" for name in sorted(run.failed))
            out.write("\n")
    return 1 if run.failed else 0


if __name__ == "__main__":
    sys.exit(main())
