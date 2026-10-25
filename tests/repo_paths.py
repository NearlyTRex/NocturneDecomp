# Imports
import os

# Where things are, for the tests and their helpers. Kept out of conftest.py:
# more than one conftest.py sits on the import path, so `from conftest import`
# would depend on which one Python finds first.
TESTS_DIR = os.path.dirname(os.path.abspath(__file__))
REPO_ROOT = os.path.dirname(TESTS_DIR)
SCRIPTS_DIR = os.path.join(REPO_ROOT, "scripts", "Python")
