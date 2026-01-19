# Generic JSON file cache manager for pseudocode export
# Provides preload/load/set operations with caching to avoid repeated file I/O

"""
JsonCacheManager provides a unified caching mechanism for JSON configuration files
used during pseudocode export. It eliminates the duplicated "preload + load + set cache"
pattern found across proto.py, callfixups.py, transforms.py, and decompiler_fixes.py.

Features:
- Preload global JSON files before cleanup (preserves data through cleanup phase)
- Preload per-function JSON files via recursive directory scan
- Cache-first lookup with disk I/O fallback
- Type validation for loaded data

Usage:
    # Create manager for per-function data stored under a JSON key
    proto_cache = JsonCacheManager('proto_overrides', json_key='proto_overrides',
                                    default_factory=list, type_check=list)

    # Preload global file
    data = proto_cache.preload_global(pseudocode_dir, 'proto_overrides.json')

    # Preload per-function files from src/ directory
    proto_cache.preload_directory(src_dir)

    # Load for specific function (uses cache, falls back to disk)
    overrides = proto_cache.load_for_function(json_path)

    # Manually set cache entry
    proto_cache.set_cache(json_path, overrides)
"""

import os
import json
from ghidra_annotations.util.log import log_info


class JsonCacheManager:
    """Generic JSON file cache manager with preload/load/set operations."""

    def __init__(self, cache_name, json_key=None, default_factory=list, type_check=None):
        """Initialize the cache manager.

        Args:
            cache_name: Name for logging (e.g., 'proto_overrides')
            json_key: Key to extract from JSON (None = root-level array/object)
            default_factory: Factory for default value (list or dict)
            type_check: Optional type to validate (list or dict)
        """
        self.cache_name = cache_name
        self.json_key = json_key
        self.default_factory = default_factory
        self.type_check = type_check

        # Global file cache
        self._global_cache = None
        self._global_path = None

        # Per-function file cache
        self._cache = {}
        self._cache_dir = None

    def preload_global(self, directory, filename):
        """Load global config file before cleanup.

        This caches the existing configuration so it can be preserved
        after the cleanup phase deletes the file.

        Note: Global files are expected to have root-level data (array or object),
        not nested under a key. The json_key is only used for per-function files.

        Args:
            directory: The directory containing the JSON file
            filename: The JSON filename

        Returns:
            Cached data, or empty default if not found
        """
        json_path = os.path.join(directory, filename)
        self._global_path = json_path
        self._global_cache = self.default_factory()

        if os.path.exists(json_path):
            try:
                with open(json_path, 'r') as f:
                    data = json.load(f)

                # Global files use root-level data (no key extraction)
                # Type validation
                if self.type_check is not None and not isinstance(data, self.type_check):
                    data = self.default_factory()

                self._global_cache = data
                count = len(data) if hasattr(data, '__len__') else 1
                log_info("Preloaded %d %s from %s" % (count, self.cache_name, json_path))
            except Exception as e:
                log_info("Could not preload %s: %s" % (filename, str(e)))

        return self._global_cache

    def preload_directory(self, base_dir):
        """Recursively preload all JSON files from directory.

        Call this once before processing functions to cache all configurations.
        Recursively scans all subdirectories.

        Args:
            base_dir: Directory containing function JSON files
        """
        self._cache = {}
        self._cache_dir = base_dir

        if not base_dir or not os.path.exists(base_dir):
            return

        try:
            for root, dirs, files in os.walk(base_dir):
                for filename in files:
                    if filename.endswith('.json'):
                        json_path = os.path.join(root, filename)
                        try:
                            with open(json_path, 'r') as f:
                                data = json.load(f)

                            # Extract from key if specified
                            if self.json_key is not None:
                                extracted = data.get(self.json_key)
                            else:
                                extracted = data

                            # Type validation
                            if self.type_check is not None:
                                if not isinstance(extracted, self.type_check):
                                    continue

                            if extracted:
                                count = len(extracted) if hasattr(extracted, '__len__') else 1
                                log_info("Preloaded %d %s from %s" % (count, self.cache_name, json_path))
                                self._cache[json_path] = extracted
                        except Exception:
                            pass
        except Exception:
            pass

    def load_for_function(self, json_path):
        """Load config from function JSON with cache fallback.

        Uses cache if preload_directory was called, otherwise falls back to disk I/O.

        Args:
            json_path: Path to the function's JSON file

        Returns:
            Configuration data, or empty default if none found
        """
        if not json_path:
            return self.default_factory()

        # Use cache if available
        if json_path in self._cache:
            return self._cache[json_path]

        # Fallback to file I/O (handles cache misses and path mismatches)
        if not os.path.exists(json_path):
            return self.default_factory()

        try:
            with open(json_path, 'r') as f:
                data = json.load(f)

            # Extract from key if specified
            if self.json_key is not None:
                extracted = data.get(self.json_key)
            else:
                extracted = data

            # Type validation
            if self.type_check is not None:
                if not isinstance(extracted, self.type_check):
                    return self.default_factory()

            if extracted:
                return extracted
        except Exception:
            pass

        return self.default_factory()

    def set_cache(self, json_path, data):
        """Set cache entry.

        Args:
            json_path: Path to the JSON file
            data: Data to cache
        """
        self._cache[json_path] = data

    def get_global_cache(self):
        """Get global cache contents.

        Returns:
            Cached global data, or empty default if none
        """
        return self._global_cache if self._global_cache is not None else self.default_factory()

    def get_global_path(self):
        """Get path to global config file.

        Returns:
            Path string or None
        """
        return self._global_path

    def clear(self):
        """Clear all caches."""
        self._global_cache = None
        self._global_path = None
        self._cache = {}
        self._cache_dir = None

    def iter_cached_items(self):
        """Iterate over cached per-function entries.

        Yields:
            Tuples of (json_path, data) for each cached entry
        """
        for json_path, data in self._cache.items():
            yield json_path, data
