#!/usr/bin/env python3
"""
Check type locations in exported headers against Windows SDK conventions.

This script parses the exported system headers and compares type definitions
against where they should be according to the Windows SDK.
"""

import os
import re
import sys
from collections import defaultdict

# Windows SDK type to header mappings
# Format: 'TypeName': 'correct_header.h'
WINDOWS_SDK_TYPES = {
    # mmsystem.h types
    'WAVEFORMATEX': 'mmsystem.h',
    'tWAVEFORMATEX': 'mmsystem.h',
    'LPCWAVEFORMATEX': 'mmsystem.h',
    'LPWAVEFORMATEX': 'mmsystem.h',
    'WAVEINCAPS': 'mmsystem.h',
    'WAVEOUTCAPS': 'mmsystem.h',
    'WAVEHDR': 'mmsystem.h',
    'wavehdr_tag': 'mmsystem.h',
    'HWAVEIN': 'mmsystem.h',
    'HWAVEOUT': 'mmsystem.h',
    'MMRESULT': 'mmsystem.h',
    'MMVERSION': 'mmsystem.h',
    'MCIERROR': 'mmsystem.h',
    'JOYCAPS': 'mmsystem.h',
    'JOYINFO': 'mmsystem.h',
    'JOYINFOEX': 'mmsystem.h',

    # dsound.h types
    'IDirectSound': 'dsound.h',
    'IDirectSoundBuffer': 'dsound.h',
    'IDirectSoundCapture': 'dsound.h',
    'IDirectSoundCaptureBuffer': 'dsound.h',
    'LPDIRECTSOUND': 'dsound.h',
    'LPDIRECTSOUNDBUFFER': 'dsound.h',
    'LPLPDIRECTSOUNDBUFFER': 'dsound.h',
    'DSBUFFERDESC': 'dsound.h',
    'DSCAPS': 'dsound.h',
    'DSBCAPS': 'dsound.h',

    # ddraw.h types
    'IDirectDraw': 'ddraw.h',
    'IDirectDrawSurface': 'ddraw.h',
    'IDirectDrawPalette': 'ddraw.h',
    'IDirectDrawClipper': 'ddraw.h',
    'LPDIRECTDRAW': 'ddraw.h',
    'LPDIRECTDRAWSURFACE': 'ddraw.h',
    'DDSURFACEDESC': 'ddraw.h',
    'DDPIXELFORMAT': 'ddraw.h',
    'DDCOLORKEY': 'ddraw.h',
    'DDSCAPS': 'ddraw.h',
    'PALETTEENTRY': 'ddraw.h',  # Also in wingdi.h but ddraw uses it

    # windef.h types
    'POINT': 'windef.h',
    'tagPOINT': 'windef.h',
    'RECT': 'windef.h',
    'tagRECT': 'windef.h',
    'SIZE': 'windef.h',
    'HINSTANCE': 'windef.h',
    'HMODULE': 'windef.h',
    'HWND': 'windef.h',
    'HDC': 'windef.h',
    'HGDIOBJ': 'windef.h',

    # winuser.h types
    'MSG': 'winuser.h',
    'tagMSG': 'winuser.h',
    'WNDCLASS': 'winuser.h',
    'WNDCLASSA': 'winuser.h',
    'tagWNDCLASSA': 'winuser.h',
    'WNDPROC': 'winuser.h',
    'HICON': 'winuser.h',
    'HCURSOR': 'winuser.h',
    'HMENU': 'winuser.h',

    # wingdi.h types
    'HBITMAP': 'wingdi.h',
    'HBRUSH': 'wingdi.h',
    'HFONT': 'wingdi.h',
    'HPEN': 'wingdi.h',
    'HPALETTE': 'wingdi.h',
    'HRGN': 'wingdi.h',
    'LOGFONT': 'wingdi.h',
    'BITMAPINFO': 'wingdi.h',
    'BITMAPINFOHEADER': 'wingdi.h',
    'RGBQUAD': 'wingdi.h',

    # winnt.h types
    'HANDLE': 'winnt.h',
    'CRITICAL_SECTION': 'winnt.h',
    'RTL_CRITICAL_SECTION': 'winnt.h',
    '_RTL_CRITICAL_SECTION': 'winnt.h',
    'SECURITY_ATTRIBUTES': 'winnt.h',
    'LARGE_INTEGER': 'winnt.h',
    'ULARGE_INTEGER': 'winnt.h',
    'FLOATING_SAVE_AREA': 'winnt.h',
    'CONTEXT': 'winnt.h',
    'EXCEPTION_RECORD': 'winnt.h',
    'GUID': 'winnt.h',

    # winbase.h types
    'OVERLAPPED': 'winbase.h',
    'STARTUPINFO': 'winbase.h',
    'STARTUPINFOA': 'winbase.h',
    'PROCESS_INFORMATION': 'winbase.h',
    'SYSTEMTIME': 'winbase.h',
    'FILETIME': 'winbase.h',
    'WIN32_FIND_DATA': 'winbase.h',
    'WIN32_FIND_DATAA': 'winbase.h',

    # unknwn.h (COM base)
    'IUnknown': 'unknwn.h',
    'LPUNKNOWN': 'unknwn.h',
}


def parse_header_types(header_path):
    """Parse a header file and extract all type definitions."""
    types = {
        'structs': [],
        'unions': [],
        'typedefs': [],
        'enums': [],
        'funcdefs': [],
    }

    if not os.path.exists(header_path):
        return types

    with open(header_path, 'r') as f:
        content = f.read()

    # Match struct definitions: typedef struct Name { ... } Name;
    for match in re.finditer(r'typedef\s+struct\s+(\w+)\s*\{', content):
        types['structs'].append(match.group(1))

    # Match union definitions: typedef union Name { ... } Name;
    for match in re.finditer(r'typedef\s+union\s+(\w+)\s*\{', content):
        types['unions'].append(match.group(1))

    # Match simple typedefs: typedef X Name;
    for match in re.finditer(r'typedef\s+(?:struct\s+)?(\w+)\*?\s+(\w+)\s*;', content):
        # Skip if this is a struct/union definition (has {)
        name = match.group(2)
        if name not in types['structs'] and name not in types['unions']:
            types['typedefs'].append(name)

    # Match enum definitions: typedef enum Name { ... } Name;
    for match in re.finditer(r'typedef\s+enum\s+(\w+)\s*\{', content):
        types['enums'].append(match.group(1))

    # Match function pointer typedefs: typedef RetType (*Name)(...);
    for match in re.finditer(r'typedef\s+\w+\s*\(\s*\*\s*(\w+)\s*\)', content):
        types['funcdefs'].append(match.group(1))

    return types


def main():
    # Path to system headers
    system_dir = '/home/aryie/Repositories/NocturneDecomp/annotations/nocedit.exe/pseudocode/include/system'

    if not os.path.isdir(system_dir):
        print(f"Error: Directory not found: {system_dir}")
        sys.exit(1)

    # Collect all types from all headers
    header_types = {}  # header_name -> types dict
    type_locations = {}  # type_name -> list of headers where it's defined

    for filename in os.listdir(system_dir):
        if filename.endswith('.h'):
            header_path = os.path.join(system_dir, filename)
            types = parse_header_types(header_path)
            header_types[filename] = types

            # Track where each type is defined
            for category in types.values():
                for type_name in category:
                    if type_name not in type_locations:
                        type_locations[type_name] = []
                    type_locations[type_name].append(filename)

    # Report findings
    print("=" * 70)
    print("TYPE LOCATION ANALYSIS")
    print("=" * 70)

    # Check for types in wrong locations
    print("\n## Types in Wrong Location (according to Windows SDK)")
    print("-" * 70)
    wrong_location = []
    for type_name, correct_header in WINDOWS_SDK_TYPES.items():
        if type_name in type_locations:
            actual_headers = type_locations[type_name]
            if correct_header not in actual_headers:
                wrong_location.append((type_name, correct_header, actual_headers))

    if wrong_location:
        for type_name, correct, actual in sorted(wrong_location):
            print(f"  {type_name}")
            print(f"    Expected: {correct}")
            print(f"    Found in: {', '.join(actual)}")
    else:
        print("  None found!")

    # Check for duplicate type definitions
    print("\n## Duplicate Type Definitions")
    print("-" * 70)
    duplicates = [(name, headers) for name, headers in type_locations.items() if len(headers) > 1]
    if duplicates:
        for type_name, headers in sorted(duplicates):
            print(f"  {type_name}: {', '.join(headers)}")
    else:
        print("  None found!")

    # Check for types that should be in SDK but are missing
    print("\n## Missing SDK Types")
    print("-" * 70)
    missing = []
    for type_name, correct_header in WINDOWS_SDK_TYPES.items():
        if type_name not in type_locations:
            missing.append((type_name, correct_header))

    if missing:
        for type_name, header in sorted(missing):
            print(f"  {type_name} (should be in {header})")
    else:
        print("  None found!")

    # Summary by header
    print("\n## Types Per Header")
    print("-" * 70)
    for header in sorted(header_types.keys()):
        types = header_types[header]
        total = sum(len(v) for v in types.values())
        print(f"  {header}: {total} types")
        for cat, items in types.items():
            if items:
                print(f"    {cat}: {len(items)}")

    # Check circular includes
    print("\n## Header Include Analysis")
    print("-" * 70)
    for filename in sorted(os.listdir(system_dir)):
        if filename.endswith('.h'):
            header_path = os.path.join(system_dir, filename)
            with open(header_path, 'r') as f:
                content = f.read()

            includes = re.findall(r'#include\s+"system/(\w+\.h)"', content)
            if includes:
                # Check for potential circular deps
                for inc in includes:
                    inc_path = os.path.join(system_dir, inc)
                    if os.path.exists(inc_path):
                        with open(inc_path, 'r') as f:
                            inc_content = f.read()
                        if f'#include "system/{filename}"' in inc_content:
                            print(f"  CIRCULAR: {filename} <-> {inc}")


if __name__ == '__main__':
    main()
