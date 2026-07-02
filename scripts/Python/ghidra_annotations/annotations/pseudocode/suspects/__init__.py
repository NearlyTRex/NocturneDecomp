# suspects package — split from the former ~9.2k-line suspects.py module.
# The former single module is now five theme submodules; this __init__ re-exports
# their public names so `from ...suspects import X` keeps working unchanged for
# __init__.py, exporter.py, test_suspects.py and the regression scripts.
#
# Import order is dependency-safe: _common and _structtypes first, then the
# theme detector modules that build on them.

from ghidra_annotations.annotations.pseudocode.suspects._common import *  # noqa: F401,F403
from ghidra_annotations.annotations.pseudocode.suspects._structtypes import *  # noqa: F401,F403
from ghidra_annotations.annotations.pseudocode.suspects.assembly import *  # noqa: F401,F403
from ghidra_annotations.annotations.pseudocode.suspects.stack import *  # noqa: F401,F403
from ghidra_annotations.annotations.pseudocode.suspects.content import *  # noqa: F401,F403
