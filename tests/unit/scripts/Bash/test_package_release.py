# Imports
import os
import tarfile

# Third-party imports
import pytest

# Local imports
from shell_helpers import link_programs, run_script, stub, stub_calls

pytestmark = pytest.mark.requires_binary("bash", "sed", "cp", "tar", "mkdir", "rm", "dirname", "basename")

PRESET = "exe-linux-x86_64"
STEM = f"nocturne-1.2.3-{PRESET}"


# A checkout to package: the version, the shipped text files, and a configured build
@pytest.fixture
def checkout(tmp_path):
    root = tmp_path / "checkout"
    root.mkdir()
    (root / "CMakeLists.txt").write_text("project(NocturneDecomp VERSION 1.2.3 LANGUAGES C CXX)\n", encoding = "utf-8")
    for name in ("LICENSE", "THIRD_PARTY_NOTICES.txt", "README.md", "gamecontrollerdb.txt",
                 "gamecontrollerdb.license.txt"):
        (root / name).write_text(name, encoding = "utf-8")
    stub(root, "build.sh")
    return root


def configure(checkout, preset = PRESET, version_ok = True, **manifest):
    build = checkout / "build" / preset
    build.mkdir(parents = True)
    binary = stub(build, "nocturne", 'echo "NocturneDecomp 1.2.3 (test)"' if version_ok else "exit 1")
    lines = {"binary": str(binary), "format": "tar.gz", **manifest}
    text = "".join(f"{key}={value}\n" for key, values in lines.items()
                   for value in (values if isinstance(values, list) else [values]))
    (build / "package.txt").write_text(text, encoding = "utf-8")
    return build


def env_for(checkout, bin_dir = None, path = None):
    env = {**os.environ, "NOCTURNE_SOURCE_DIR": str(checkout)}
    if bin_dir is not None:
        env["PATH"] = f"{bin_dir}{os.pathsep}{env['PATH']}"
    if path is not None:
        env["PATH"] = str(path)
    return env


def package(shell_traced_env, checkout, *args, **env_args):
    return run_script("package_release.sh", *args, env = shell_traced_env(env_for(checkout, **env_args)))


def members(archive):
    with tarfile.open(archive) as tar:
        return {member.name: member for member in tar.getmembers()}


def read_member(archive, name):
    with tarfile.open(archive) as tar:
        return tar.extractfile(name).read().decode("utf-8")


def test_packages_the_binary_its_libraries_and_the_shipped_files(checkout, shell_traced_env):
    build = configure(checkout, runtime = [])
    versioned = build / "libSDL2-2.0.so.0.3000.0"
    versioned.write_text("sdl", encoding = "utf-8")
    os.symlink(versioned.name, build / "libSDL2-2.0.so.0")
    configure_text = (build / "package.txt").read_text(encoding = "utf-8")
    (build / "package.txt").write_text(configure_text + f"runtime={build}/libSDL2-2.0.so.0\nignored=x\n",
                                       encoding = "utf-8")
    result = package(shell_traced_env, checkout, "--no-build", PRESET)
    archive = checkout / "dist" / f"{STEM}.tar.gz"
    assert result.returncode == 0
    assert result.stdout == f"package_release.sh: {archive}\n"
    names = members(archive)
    assert sorted(names) == [STEM] + [f"{STEM}/{name}" for name in sorted(
        ["nocturne", "libSDL2-2.0.so.0", "LICENSE", "THIRD_PARTY_NOTICES.txt", "README.md",
         "gamecontrollerdb.txt", "gamecontrollerdb.license.txt", "VERSION.txt"])]
    assert names[f"{STEM}/libSDL2-2.0.so.0"].isfile()
    assert read_member(archive, f"{STEM}/VERSION.txt") == "NocturneDecomp 1.2.3 (test)\n"
    assert not (checkout / "dist" / STEM).exists()


def test_builds_each_preset_first_unless_told_not_to(checkout, shell_traced_env):
    configure(checkout)
    stub(checkout, "build.sh", 'echo "SKIP_REGEN=$SKIP_REGEN" >> "$(dirname "$0")/calls.log"')
    result = package(shell_traced_env, checkout)
    assert result.stdout.startswith(f"package_release.sh: building {PRESET}\n")
    assert stub_calls(checkout) == [f"build.sh {PRESET}", "SKIP_REGEN=1"]


def test_a_bundle_ships_whole_with_its_symlinks_and_without_loose_mappings(checkout, shell_traced_env):
    build = configure(checkout)
    app = build / "Nocturne.app"
    (app / "Contents" / "MacOS").mkdir(parents = True)
    (app / "Contents" / "MacOS" / "Nocturne").write_text("bin", encoding = "utf-8")
    os.symlink("MacOS/Nocturne", app / "Contents" / "Current")
    (build / "package.txt").write_text((build / "package.txt").read_text(encoding = "utf-8") + f"bundle={app}\n",
                                       encoding = "utf-8")
    (checkout / "README.md").unlink()
    package(shell_traced_env, checkout, "--no-build")
    names = members(checkout / "dist" / f"{STEM}.tar.gz")
    assert names[f"{STEM}/Nocturne.app/Contents/Current"].issym()
    assert f"{STEM}/Nocturne.app/Contents/MacOS/Nocturne" in names
    assert f"{STEM}/nocturne" not in names
    assert sorted(name.split("/")[1] for name in names if name.count("/") == 1) == [
        "LICENSE", "Nocturne.app", "THIRD_PARTY_NOTICES.txt", "VERSION.txt"]


def test_a_binary_that_cannot_report_itself_gets_a_version_from_the_checkout(checkout, tmp_path, shell_traced_env):
    configure(checkout, version_ok = False)
    package(shell_traced_env, checkout, "--no-build", "--out-dir", str(tmp_path / "out"))
    assert read_member(tmp_path / "out" / f"{STEM}.tar.gz", f"{STEM}/VERSION.txt") == f"NocturneDecomp 1.2.3, {PRESET}\n"


def test_a_zip_preset_is_zipped(checkout, tmp_path, shell_traced_env):
    configure(checkout, "exe-windows-x86_64", format = "zip")
    bin_dir = tmp_path / "bin"
    stub(bin_dir, "zip", 'echo "cwd=$PWD" >> "$(dirname "$0")/calls.log"')
    result = package(shell_traced_env, checkout, "--no-build", "exe-windows-x86_64", bin_dir = bin_dir)
    assert result.returncode == 0
    stem = "nocturne-1.2.3-exe-windows-x86_64"
    assert stub_calls(bin_dir) == [f"zip -qr {stem}.zip {stem}", f"cwd={checkout}/dist"]


def test_without_zip_the_archive_comes_from_7z(checkout, tmp_path, shell_traced_env):
    configure(checkout, "exe-windows-x86_64", format = "zip")
    bin_dir = tmp_path / "bin"
    link_programs(bin_dir, "bash", "sed", "cp", "mkdir", "rm", "dirname", "basename")
    stub(bin_dir, "7z")
    package(shell_traced_env, checkout, "--no-build", "exe-windows-x86_64", path = bin_dir)
    stem = "nocturne-1.2.3-exe-windows-x86_64"
    assert stub_calls(bin_dir) == [f"7z a -tzip -bso0 {stem}.zip {stem}"]


@pytest.mark.parametrize("setup, args, message", [
    ("none", ["--bogus"], "unknown option '--bogus'"),
    ("no_version", [], "could not read the version out of CMakeLists.txt"),
    ("none", ["exe-absent"], "no build directory for 'exe-absent'"),
    ("no_manifest", [], f"{PRESET} has no"),
    ("no_binary", [], f"{PRESET} produced no binary at"),
    ("bad_format", [], "unknown archive format 'rar'"),
])
def test_refuses_what_it_cannot_package(checkout, shell_traced_env, setup, args, message):
    if setup == "no_version":
        (checkout / "CMakeLists.txt").write_text("project(Other)\n", encoding = "utf-8")
    elif setup in ("no_manifest", "no_binary", "bad_format"):
        build = configure(checkout, format = "rar")
        if setup == "no_manifest":
            (build / "package.txt").unlink()
        elif setup == "no_binary":
            (build / "nocturne").unlink()
    result = package(shell_traced_env, checkout, "--no-build", *args)
    assert result.returncode == (2 if setup == "none" and args == ["--bogus"] else 1)
    assert message in result.stderr


@pytest.mark.parametrize("flag", ["-h", "--help"])
def test_help_prints_the_header_and_touches_nothing(shell_traced_env, flag):
    env = {key: value for key, value in os.environ.items() if key != "NOCTURNE_SOURCE_DIR"}
    result = run_script("package_release.sh", flag, env = shell_traced_env(env))
    assert result.returncode == 0
    assert result.stdout.startswith("package_release.sh — build a preset and wrap its output")
    assert "--no-build      package what is already in build/<preset>/" in result.stdout
