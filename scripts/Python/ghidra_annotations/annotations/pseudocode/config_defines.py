# Build-configuration defines for static analysis tools.
#
# Every NOCTURNE_* toggle has a numeric default in <pseudocode>/shims/config/.
# cppcheck does not read them without the full include path, so on its own it
# enumerates each #if combination and gives up past 12 (toomanyconfigs).
# Passing the defaults as -D makes it check the one configuration the build
# compiles.
#
# Pure Python with no package imports, so test_suspects.py can load it by path.

import os
import re

_DEFINE_RE = re.compile(
    r'^\s*#\s*define\s+(NOCTURNE_\w+)\s+(-?\d+)\s*$', re.MULTILINE)


def config_define_flags(pseudocode_dir):
    """Return -DNAME=VALUE flags for the defaults under shims/config/.

    A macro defined more than once is left out, since its value depends on
    context. Returns [] when the program has no shim config.
    """
    config_dir = os.path.join(pseudocode_dir, 'shims', 'config')
    if not os.path.isdir(config_dir):
        return []

    values = {}
    for name in sorted(os.listdir(config_dir)):
        if not name.endswith('.h'):
            continue
        with open(os.path.join(config_dir, name), encoding='utf-8',
                  errors='replace') as f:
            for m in _DEFINE_RE.finditer(f.read()):
                values.setdefault(m.group(1), []).append(m.group(2))

    return ['-D%s=%s' % (macro, vals[0])
            for macro, vals in sorted(values.items()) if len(vals) == 1]


def pseudocode_dir_for(path):
    """Return the enclosing <program>/pseudocode directory of path, or None."""
    d = os.path.dirname(os.path.abspath(path))
    while True:
        if os.path.basename(d) == 'pseudocode':
            return d
        parent = os.path.dirname(d)
        if parent == d:
            return None
        d = parent
