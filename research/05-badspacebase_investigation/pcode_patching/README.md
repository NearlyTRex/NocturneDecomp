# P-code Patching Implementation

This directory contains the implementation files for injecting custom P-code into Ghidra's decompiler.

## Files

| File | Description |
|------|-------------|
| `pcode_patch_final.patch` | Unified diff to apply to Ghidra source |
| `DecompileCallback_patched.java` | Complete modified Java file |
| `ExportFunctionPcode.java` | Ghidra script to export function P-code |
| `example.pcode` | Example patch file with format documentation |

## How It Works

The implementation intercepts P-code generation in `DecompileCallback.getPcode()` before the P-code is sent to the decompiler. If a patch file exists for the instruction address, the patched P-code is returned instead of the SLEIGH-generated P-code.

```
Normal flow:
  Instruction → SLEIGH → P-code → Decompiler

Patched flow:
  Instruction → Check patch file → [if exists] Patched P-code → Decompiler
                                 → [if not] SLEIGH → P-code → Decompiler
```

## Installation

### 1. Clone Ghidra Source

```bash
git clone https://github.com/NationalSecurityAgency/ghidra.git
cd ghidra
```

### 2. Apply Patch

```bash
git apply /path/to/pcode_patch_final.patch
```

Or manually replace the file:
```bash
cp DecompileCallback_patched.java \
   Ghidra/Features/Decompiler/src/main/java/ghidra/app/decompiler/DecompileCallback.java
```

### 3. Build Ghidra

```bash
gradle prepdev
gradle buildGhidra
```

### 4. Create Patch Directory

```bash
mkdir -p ~/.ghidra_pcode_patches
```

## Usage

### Two Patch Modes

The system supports two types of patch files:

1. **Instruction-level**: `<address>.pcode` - Patches a single instruction
2. **Function-level**: `func_<entry>.pcode` - Patches multiple instructions in a function

### Workflow: Export → Edit → Re-decompile

The recommended workflow for fixing BADSPACEBASE:

1. **Export** the function's P-code using `ExportFunctionPcode.java`
2. **Edit** the exported file to fix problematic instructions
3. **Save** to `~/.ghidra_pcode_patches/func_<entry>.pcode`
4. **Re-decompile** the function - patches are auto-loaded

### Function-Level Patching (Recommended)

Export a function's P-code, then edit the file:

```bash
# Exported file: func_00510000.pcode
~/.ghidra_pcode_patches/func_00510000.pcode
```

The file format uses `@<address>` to mark each instruction:

```
# Function: checkAndCalibrateGamepad
# Entry: 00510000

@00510000  # PUSH EBP
COPY (unique,0x3000,4) = (register,0x10,4)
INT_SUB (register,0x10,4) = (register,0x10,4), (const,0x4,4)
STORE (const,0x1b1,4), (register,0x10,4), (register,0x14,4)

@00510001  # MOV EBP, ESP
COPY (register,0x14,4) = (register,0x10,4)

@00510456  # MOV EAX, [EBP-0x8]  <-- FIXED
INT_ADD (unique,0x1000,4) = (register,0x14,4), (const,0xfffffff8,4)
LOAD (register,0x0,4) = (const,0x1b1,4), (unique,0x1000,4)
```

Only instructions with `@<address>` blocks will be patched - others use normal SLEIGH P-code.

### Instruction-Level Patching

Create a file named `<address>.pcode` in `~/.ghidra_pcode_patches/`:

```bash
# For instruction at address 00510456
cat > ~/.ghidra_pcode_patches/00510456.pcode << 'EOF'
# Fix ESP-relative to EBP-relative
INT_ADD (unique,0x10000,4) = (register,0x14,4), (const,0xfffffff8,4)
LOAD (register,0x0,4) = (const,0x1b1,4), (unique,0x10000,4)
EOF
```

Then re-decompile the function in Ghidra.

### Script-Based Patching

```java
// In a Ghidra script
import ghidra.app.decompiler.DecompileCallback;

// Register patch
Address addr = toAddr(0x00510456);
PcodeOp[] pcode = buildPcode(...);
DecompileCallback.registerPatch(addr, pcode);

// Clear patch
DecompileCallback.clearPatch(addr);

// Clear all
DecompileCallback.clearAllPatches();

// Reload from disk
DecompileCallback.reloadPatches();
```

### Custom Patch Directory

Set via Java property:
```bash
ghidraRun -Dghidra.pcode.patch.dir=/custom/path/
```

## Patch File Format

See `example.pcode` for detailed format documentation.

Quick reference:
```
# Comment
OPCODE (output) = (input1), (input2), ...

# Varnode format: (space, offset, size)
# Spaces: register, const, unique, ram, stack

# x86 registers:
# EAX=0x0, ECX=0x4, EDX=0x8, EBX=0xc
# ESP=0x10, EBP=0x14, ESI=0x18, EDI=0x1c
```

## Limitations

1. **Address format must match**: The filename must match exactly how Ghidra displays the address (typically no "0x" prefix)

2. **Complete replacement**: The patch replaces ALL P-code for the instruction, not just part of it

3. **No validation**: Invalid P-code may crash the decompiler or produce garbage

4. **Static cache**: Patches are cached in memory; use `reloadPatches()` to refresh

## Testing

1. Create a simple patch for a known instruction
2. View the Ghidra console for "Applied P-code patch for..." message
3. Verify the decompiler output changes appropriately
