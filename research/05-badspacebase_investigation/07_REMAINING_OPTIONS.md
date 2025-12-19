# Remaining Options

Options that haven't been fully explored or implemented.

---

## 1. Severity-Based Triage

### Approach
Classify BADSPACEBASE functions by severity and handle each category differently.

### Classification System

| Severity | Criteria | Action |
|----------|----------|--------|
| **Mild** | Only BADSPACEBASE declaration; logic correct | JSON replacement |
| **Moderate** | Some `in_stack_*` variables; core logic intact | JSON + minor edits |
| **Severe** | Missing arguments, wrong variables, broken logic | Manual rewrite or skip |
| **Critical** | Completely unusable output | Assembly-only analysis |

### Detection Heuristics

**Mild indicators**:
- Only pattern: `BADSPACEBASE_ESP`
- No `in_stack_*` variables
- All function arguments present
- Variables used consistently

**Severe indicators**:
- `in_stack_*` with positive offsets
- sprintf/printf with wrong argument count
- Same stack offset as multiple variables
- Control flow artifacts

### Implementation

```python
# Skeleton classifier
def classify_badspacebase(pseudocode_file, json_file):
    code = read_file(pseudocode_file)

    has_badspacebase = "BADSPACEBASE" in code
    has_in_stack = "in_stack_" in code

    # Count sprintf/printf arguments
    sprintf_calls = find_sprintf_calls(code)
    missing_args = check_missing_varargs(sprintf_calls)

    if not has_badspacebase:
        return "none"
    elif has_in_stack or missing_args:
        return "severe"
    else:
        return "mild"
```

### Action Items
1. Write classification script
2. Run on all 1,621 affected functions
3. Generate report: X mild, Y moderate, Z severe
4. Apply JSON fixes to mild cases
5. Prioritize severe cases for manual review

---

## 2. Manual Pseudocode Rewrite

### When Appropriate
- Function is critical to understanding game logic
- Assembly is analyzable by human
- Incorrect decompilation actively misleads readers

### Process

1. **Read assembly listing** in Ghidra
2. **Track ESP manually** through the function
   - Note ESP after each PUSH, POP, CALL, SUB ESP, ADD ESP
3. **Identify actual local variables**
   - Map each `[ESP+X]` at each instruction to absolute stack offset
4. **Write corrected pseudocode**
   - Use proper variable names
   - Include all function arguments
5. **Mark as manually corrected**
   ```json
   {
     "manually_corrected": true,
     "correction_date": "2025-12-18",
     "notes": "ESP tracking verified against assembly"
   }
   ```

### Priority Functions
- Game save/load
- Input handling
- Core game loop
- Player character logic
- Enemy AI entry points

---

## 3. Binary Patching Tool

### Concept
Modify the binary to use EBP-relative addressing instead of ESP-relative.

### Transformation

**Before (Watcom ESP-relative)**:
```asm
sub esp, 0x214
mov eax, [esp+0x20c]    ; Local variable
push ebx
mov ecx, [esp+0x210]    ; Same local, different offset!
```

**After (EBP-relative)**:
```asm
push ebp
mov ebp, esp
sub esp, 0x214
mov eax, [ebp-0x8]      ; Local variable
push ebx
mov ecx, [ebp-0x8]      ; Same local, same offset!
```

### Challenges

| Challenge | Difficulty |
|-----------|------------|
| Rewrite all ESP-relative instructions | High |
| Recalculate all offsets | High |
| Handle variable ESP-relative offsets | High |
| Expand code sections if needed | Medium |
| Preserve all control flow | High |
| Handle calling conventions | Medium |

### Possible Approach

1. **Identify target functions** - List BADSPACEBASE functions
2. **Analyze each function**:
   - Find all ESP-relative accesses
   - Compute absolute stack offset for each
3. **Generate patched code**:
   - Add `push ebp; mov ebp, esp` prologue
   - Convert `[esp+X]` to `[ebp-Y]` where Y is computed
   - Add `mov esp, ebp; pop ebp` epilogue
4. **Apply patches** - Write to copy of binary
5. **Re-import** in Ghidra

### Tools That Might Help
- Capstone disassembler
- Keystone assembler
- LIEF binary manipulation
- Custom Python script

### Verdict
**Would definitely work** but requires significant development effort. Consider if severity triage shows many critical functions.

---

## 4. Alternative Decompilers

### IDA Pro + Hex-Rays

**Pros**:
- Industry standard
- Reportedly better ESP tracking
- Large user community

**Cons**:
- Commercial license (expensive)
- Different workflow from Ghidra
- Would need to redo all annotations

**Evaluation**: Purchase evaluation license, test on 10 BADSPACEBASE functions.

### RetDec

**Pros**:
- Open source
- Different architecture (might handle ESP differently)

**Cons**:
- Less mature than Ghidra
- May have own issues

**Evaluation**: Quick test on sample functions.

### Binary Ninja

**Pros**:
- Modern design
- Good API

**Cons**:
- Commercial
- Smaller community

---

## 5. Ghidra Decompiler C++ Modifications

**See [05_DECOMPILER_CPP_CHANGES.md](05_DECOMPILER_CPP_CHANGES.md) for detailed analysis.**

### Summary
Most promising technical solution. Would require:
1. Understanding Ghidra's ESP tracking code
2. Implementing better heuristics for indirect calls
3. Testing extensively
4. Maintaining fork or contributing upstream

### Effort Estimate
- Learning codebase: High
- Implementation: Medium-High
- Testing: High
- Maintenance: Ongoing

---

## 6. Hybrid Approach

### Concept
Combine multiple partial solutions for best overall result.

### Proposed Workflow

```
1. Run severity classifier
   ↓
2. Mild cases → JSON replacement (automated)
   ↓
3. Moderate cases → JSON + review (semi-automated)
   ↓
4. Severe cases → Priority queue for manual rewrite
   ↓
5. Critical cases → Flag as "assembly only"
```

### Benefits
- Handles easy cases automatically
- Focuses manual effort where needed
- Tracks progress quantitatively

### Implementation Steps
1. Write classifier script
2. Apply JSON fixes to mild cases
3. Generate severity report
4. Create manual rewrite queue
5. Track completion metrics

---

## Recommendations

### Immediate Actions (Low Effort)
1. Write severity classification script
2. Run on all functions, generate report
3. Apply JSON fixes to all mild cases

### Medium-Term (Moderate Effort)
4. Manual rewrite of top 20 severe functions
5. Document patterns for faster manual analysis
6. Create templates for common function types

### Long-Term (High Effort)
7. Evaluate Ghidra decompiler modifications
8. Consider binary patching tool if needed
9. Track Ghidra updates for relevant fixes
