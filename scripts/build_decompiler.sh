#!/bin/bash
# Build the Ghidra decompiler C++ component and copy to Tools/Ghidra
#
# Usage:
#   ./scripts/build_decompiler.sh          # Build and copy
#   ./scripts/build_decompiler.sh --debug  # Build with debug logging enabled

set -e

GHIDRA_SRC="$HOME/Repositories/Ghidra"
GHIDRA_DEST="$HOME/Tools/Ghidra/lib/Ghidra/Features/Decompiler/os/linux_x86_64"
DECOMPILER_SRC="$GHIDRA_SRC/Ghidra/Features/Decompiler/src/decompile/cpp"
DEBUG_HEADER="$DECOMPILER_SRC/decomp_dbg.hh"

# Colors for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
NC='\033[0m' # No Color

echo -e "${YELLOW}=== Ghidra Decompiler Build Script ===${NC}"

# Check for --debug flag
ENABLE_DEBUG=false
if [[ "$1" == "--debug" ]]; then
    ENABLE_DEBUG=true
    echo -e "${YELLOW}Debug logging: ENABLED${NC}"
else
    echo -e "${YELLOW}Debug logging: disabled (use --debug to enable)${NC}"
fi

# Toggle debug logging in decomp_dbg.hh
if [ -f "$DEBUG_HEADER" ]; then
    if $ENABLE_DEBUG; then
        # Enable debug logging
        sed -i 's|^// #define DECOMP_DEBUG_ENABLED|#define DECOMP_DEBUG_ENABLED|' "$DEBUG_HEADER"
        sed -i 's|^//#define DECOMP_DEBUG_ENABLED|#define DECOMP_DEBUG_ENABLED|' "$DEBUG_HEADER"
    else
        # Disable debug logging (comment it out)
        sed -i 's|^#define DECOMP_DEBUG_ENABLED|// #define DECOMP_DEBUG_ENABLED|' "$DEBUG_HEADER"
    fi
fi

# Build
echo -e "${YELLOW}Building decompiler...${NC}"
cd "$GHIDRA_SRC"

if ./gradlew decompileLinux_x86_64Executable 2>&1 | tee /tmp/decompiler_build.log | tail -20; then
    echo -e "${GREEN}Build successful!${NC}"
else
    echo -e "${RED}Build failed! See /tmp/decompiler_build.log for details${NC}"
    exit 1
fi

# Find the built binary
BUILD_BINARY="$GHIDRA_SRC/Ghidra/Features/Decompiler/build/os/linux_x86_64/decompile"

if [ ! -f "$BUILD_BINARY" ]; then
    echo -e "${RED}Error: Built binary not found at $BUILD_BINARY${NC}"
    exit 1
fi

# Copy to destination
echo -e "${YELLOW}Copying to $GHIDRA_DEST...${NC}"
mkdir -p "$GHIDRA_DEST"
cp "$BUILD_BINARY" "$GHIDRA_DEST/decompile"

# Show result
echo -e "${GREEN}Done!${NC}"
ls -la "$GHIDRA_DEST/decompile"

# Clear debug log if it exists
if [ -f "/tmp/decomp_debug.log" ]; then
    rm -f /tmp/decomp_debug.log
    echo -e "${YELLOW}Cleared /tmp/decomp_debug.log${NC}"
fi

echo ""
echo -e "${GREEN}Decompiler ready. Run tests with:${NC}"
echo "  python3 scripts/Python/test_decompile_scenarios.py 0x<address>"
if $ENABLE_DEBUG; then
    echo ""
    echo -e "${YELLOW}Debug log will be at: /tmp/decomp_debug.log${NC}"
fi
