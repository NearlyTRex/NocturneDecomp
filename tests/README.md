# Tests

The pytest suite for the Python tooling: the Ghidra scripts and standalone tools in
`scripts/Python`, plus `cmake/collect_sources.py` and `recreation/cmake/tidy.py`. The C and C++
tests are CTest's; see [docs/testing.md](../docs/testing.md).

## Running

```bash
python3 -m venv .venv
.venv/bin/pip install --require-hashes --no-deps -r requirements-dev.txt
.venv/bin/pip install --no-deps --no-build-isolation -e .

# Everything, the way CI runs it
.venv/bin/pytest -q -c tests/pytest.ini --rootdir=. -n auto --dist loadfile tests/unit

# With the coverage floor
.venv/bin/coverage run -m pytest -q -c tests/pytest.ini --rootdir=. -n auto --dist loadfile tests/unit
.venv/bin/coverage combine && .venv/bin/coverage report --fail-under 100
```

The rootdir has to be the repository; `conftest.py` stops the run when it is not. After editing
`requirements-dev.in`, recompile the lock with the command at its top.

## Layout

Test files mirror the path of the code they cover:

```text
scripts/Python/make_icns.py                      → tests/unit/scripts/Python/test_make_icns.py
scripts/Python/ghidra_annotations/util/label.py  → tests/unit/scripts/Python/ghidra_annotations/util/test_label.py
cmake/collect_sources.py                         → tests/unit/cmake/test_collect_sources.py
```

`unit/` needs nothing outside the process. `integration/`, once it exists, holds the tests that
drive a real headless Ghidra; they are marked `requires_ghidra` and skip without pyghidra and
`GHIDRA_INSTALL_DIR`. CI runs `unit/` only.

The scripts are imported by name, as they import each other: `conftest.py` puts
`scripts/Python` on the path, and `pylintrc` tells pylint the same.

## Files not yet covered

Coverage started from nothing, so the files without tests yet are listed twice in
`pyproject.toml`: in `[tool.coverage.run] omit`, which keeps them out of the 100% floor, and in
`[tool.ruff.lint.per-file-ignores]`, which keeps them out of the lint. A file leaves both lists in
the change that adds its tests and clears its lint. `unit/meta/test_uncovered_lists.py` checks the
two lists agree and name only files that exist. Nothing is ever added to them.

## The meta suite

`unit/meta/test_testrex.py` runs pytest-testrex's rules over every test file: a test that
checks nothing, a file in the wrong place, a duplicated helper and any pylint message all fail
the run. `[tool.testrex]` in `pyproject.toml` configures it.
