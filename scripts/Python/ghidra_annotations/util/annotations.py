import os
import sys
import json
import glob
import errno
import shutil
import hashlib
from ghidra_annotations.util.log import *
from collections import defaultdict

def clean_data(obj):
    if isinstance(obj, dict):
        return {k: clean_data(v) for k,v in obj.items() if v not in [None, "", [], {}]}
    if isinstance(obj, list):
        return [clean_data(v) for v in obj if v not in [None, "", [], {}]]
    if hasattr(obj, 'toString'):
        return str(obj)
    return obj

def make_dirs(path):
    try:
        os.makedirs(path)
    except OSError as e:
        if e.errno != errno.EEXIST or not os.path.isdir(path):
            raise

def delete_dir_contents(path):
    if not os.path.isdir(path):
        return
    for item in os.listdir(path):
        item_path = os.path.join(path, item)
        if os.path.isdir(item_path):
            shutil.rmtree(item_path)
        else:
            os.remove(item_path)

def save_json(path, data):
    make_dirs(os.path.dirname(path))
    with open(path, "w") as f:
        json.dump(data, f, indent=2, separators=(",", ":"), sort_keys=True)
        f.write('\n')

def load_json(path):
    with open(path, "r") as f:
        return json.load(f)
    return None

def save_json_file(path, filename_base, data):
    save_json(os.path.join(path, filename_base, "%s.json" % filename_base), data)

def load_json_file(path, filename_base):
    return load_json(os.path.join(path, filename_base, "%s.json" % filename_base))

def save_json_files(path, filename_base, items, addr_func, bucket_bits = 4):

    # Get the target directory
    target_dir = os.path.join(path, filename_base)

    # Before saving new files, get list of existing files
    existing_files = set()
    if os.path.exists(target_dir):
        for filename in os.listdir(target_dir):
            if filename.startswith(filename_base + "_bucket_") and filename.endswith(".json"):
                existing_files.add(filename)

    # Write metadata file
    if not items:
        metadata = {
            "bucketing_type": "address_hash",
            "bucket_bits": bucket_bits,
            "bucket_count": 2 ** bucket_bits,
            "total_items": 0,
            "files": [],
            "bucket_stats": {},
            "bucketing_version": "4.0_hash"
        }
        save_json(os.path.join(path, filename_base, "%s_buckets.json" % filename_base), metadata)

        # Clean up all existing bucket files since we have no items
        cleanup_stale_files(target_dir, filename_base, set())
        return []

    # Create buckets
    bucket_count = 2 ** bucket_bits
    buckets = {i: [] for i in range(bucket_count)}
    bucket_stats = {}

    # Distribute items based on address hash
    for item in items:
        try:
            addr = int(addr_func(item).replace("0x", ""), 16)
        except:
            # Fallback for non-hex addresses
            addr = hash(addr_func(item)) & 0xFFFFFFFF

        # Use lower bits of address for bucket selection
        # This ensures even distribution regardless of address density
        bucket_id = addr & ((1 << bucket_bits) - 1)
        buckets[bucket_id].append(item)

    # Create files
    created_files = []
    current_files = set()
    for bucket_id in range(bucket_count):
        bucket_items = buckets[bucket_id]
        if not bucket_items:
            continue

        # Generate stable filename based on bucket ID
        filename = "%s_bucket_%02x.json" % (filename_base, bucket_id)
        filepath = os.path.join(path, filename_base, filename)

        # Save json file
        current_files.add(filename)
        save_json(filepath, bucket_items)
        created_files.append(filename)

        # Calculate address range for this bucket
        addresses = []
        for item in bucket_items:
            try:
                addr = int(addr_func(item).replace("0x", ""), 16)
                addresses.append(addr)
            except:
                pass

        # Log address range
        if addresses:
            bucket_stats[filename] = {
                "count": len(bucket_items),
                "min_addr": min(addresses),
                "max_addr": max(addresses),
                "avg_addr": sum(addresses) // len(addresses),
                "bucket_id": bucket_id
            }
            log_info("Saved %d items to %s (0x%x-0x%x)" % (len(bucket_items), filename, min(addresses), max(addresses)))

    # Save metadata
    metadata = {
        "bucketing_type": "address_hash",
        "bucket_bits": bucket_bits,
        "bucket_count": bucket_count,
        "total_items": len(items),
        "files": created_files,
        "bucket_stats": bucket_stats,
        "bucketing_version": "4.0_hash"
    }

    # Write metadata file
    save_json(os.path.join(path, filename_base, "%s_buckets.json" % filename_base), metadata)

    # Clean up stale files that are no longer referenced
    cleanup_stale_files(target_dir, filename_base, current_files)
    return created_files

def cleanup_stale_files(target_dir, filename_base, current_files):

    # No such file
    if not os.path.exists(target_dir):
        return

    # Only clean up bucket files for this specific type
    removed_count = 0
    for filename in os.listdir(target_dir):
        if (filename.startswith(filename_base + "_bucket_") and filename.endswith(".json") and filename not in current_files):
            filepath = os.path.join(target_dir, filename)
            try:
                os.remove(filepath)
                log_info("Cleaned up stale file: %s" % filename)
                removed_count += 1
            except Exception as e:
                log_info("Warning: Could not remove stale file %s: %s" % (filename, str(e)))
    if removed_count > 0:
        log_info("Cleaned up %d stale %s files" % (removed_count, filename_base))

def load_json_files(path, filename_base):

    # Find metadata file
    loaded_items = []
    metadata_file = os.path.join(path, filename_base, "%s_buckets.json" % filename_base)
    if not os.path.exists(metadata_file):

        # No metadata file so do a basic search
        pattern = os.path.join(path, filename_base, "%s_*.json" % filename_base)
        files = glob.glob(pattern)
        files = [f for f in files if not f.endswith("_buckets.json")]
        for filepath in sorted(files):
            try:
                json_data = load_json(filepath)
                if json_data:
                    loaded_items.extend(json_data)
                log_info("Loaded %s items from %s" % (len(json_data), os.path.basename(filepath)))
            except:
                log_info("Warning: Could not load %s" % filepath)
        return loaded_items

    # Load metadata
    metadata = {}
    json_data = load_json(metadata_file)
    if json_data:
        metadata = json_data

    # Load all bucket files
    for filename in metadata.get("files", []):
        filepath = os.path.join(path, filename_base, filename)
        if os.path.exists(filepath):
            json_data = load_json(filepath)
            if json_data:
                loaded_items.extend(json_data)
            log_info("Loaded %s items from %s" % (len(json_data), filename))
    return loaded_items
