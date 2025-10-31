# Ghidra script to find potential undiscovered functions
# Searches for function prologues and compiler padding patterns
# @author 
# @category Annotations

from ghidra.program.model.address import *
from ghidra.program.model.listing import *
from ghidra.program.model.mem import *
from ghidra.util.task import ConsoleTaskMonitor
from java.io import FileWriter, PrintWriter

def find_potential_functions():
    """
    Find potential undiscovered functions by searching for:
    1. Function prologues
    2. Compiler padding patterns
    """
    
    program = getCurrentProgram()
    listing = program.getListing()
    memory = program.getMemory()
    
    results = []
    
    # Common function prologue patterns (x86/x86-64)
    prologue_patterns = [
        # Standard function prologue: push ebp; mov ebp, esp
        [0x55, 0x8B, 0xEC],  # push ebp; mov ebp, esp
        [0x55, 0x89, 0xE5],  # push ebp; mov ebp, esp (AT&T syntax equivalent)
        
        # 64-bit prologues
        [0x55, 0x48, 0x89, 0xE5],  # push rbp; mov rbp, rsp
        [0x48, 0x89, 0xE5],        # mov rbp, rsp (without push)
        
        # Stack frame setup variations
        [0x55, 0x8B, 0xEC, 0x83, 0xEC],  # push ebp; mov ebp, esp; sub esp, imm8
        [0x55, 0x8B, 0xEC, 0x81, 0xEC],  # push ebp; mov ebp, esp; sub esp, imm32
        
        # Some compilers use different patterns
        [0x56, 0x57],  # push esi; push edi
        [0x53, 0x56, 0x57],  # push ebx; push esi; push edi
    ]
    
    # Compiler padding patterns
    padding_patterns = [
        # LEA with no displacement (NOP equivalents) - all variations
        [0x8D, 0x80, 0x00, 0x00, 0x00, 0x00],  # lea eax, [eax+00000000]
        [0x8D, 0x89, 0x00, 0x00, 0x00, 0x00],  # lea ecx, [ecx+00000000]
        [0x8D, 0x92, 0x00, 0x00, 0x00, 0x00],  # lea edx, [edx+00000000]
        [0x8D, 0x9B, 0x00, 0x00, 0x00, 0x00],  # lea ebx, [ebx+00000000]
        [0x8D, 0xA4, 0x24, 0x00, 0x00, 0x00, 0x00],  # lea esp, [esp+00000000]
        [0x8D, 0xB6, 0x00, 0x00, 0x00, 0x00],  # lea esi, [esi+00000000]
        [0x8D, 0xBF, 0x00, 0x00, 0x00, 0x00],  # lea edi, [edi+00000000]
        
        # Short LEA forms
        [0x8D, 0x40, 0x00],                     # lea eax, [eax+00]
        [0x8D, 0x49, 0x00],                     # lea ecx, [ecx+00]
        [0x8D, 0x52, 0x00],                     # lea edx, [edx+00] 
        [0x8D, 0x5B, 0x00],                     # lea ebx, [ebx+00]
        [0x8D, 0x64, 0x24, 0x00],               # lea esp, [esp+00]
        [0x8D, 0x76, 0x00],                     # lea esi, [esi+00]
        [0x8D, 0x7F, 0x00],                     # lea edi, [edi+00]
        
        # MOV reg, reg (NOP equivalents) - all variations
        [0x8B, 0xC0],  # mov eax, eax
        [0x8B, 0xC9],  # mov ecx, ecx
        [0x8B, 0xD2],  # mov edx, edx
        [0x8B, 0xDB],  # mov ebx, ebx
        [0x8B, 0xE4],  # mov esp, esp
        [0x8B, 0xF6],  # mov esi, esi
        [0x8B, 0xFF],  # mov edi, edi
        
        # Single byte NOPs and padding
        [0x90],        # nop
        [0xCC],        # int 3
        
        # Multi-byte NOPs
        [0x66, 0x90],                           # 2-byte NOP
        [0x0F, 0x1F, 0x00],                     # 3-byte NOP
        [0x0F, 0x1F, 0x40, 0x00],               # 4-byte NOP
        [0x0F, 0x1F, 0x44, 0x00, 0x00],         # 5-byte NOP
        [0x66, 0x0F, 0x1F, 0x44, 0x00, 0x00],   # 6-byte NOP
        [0x0F, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00],  # 7-byte NOP
        
        # Common padding sequences
        [0xCC, 0xCC, 0xCC],  # Multiple INT 3
        [0x90, 0x90, 0x90],  # Multiple NOPs
    ]
    
    # Get all memory blocks
    memory_blocks = memory.getBlocks()
    
    for block in memory_blocks:
        if not block.isExecute():
            continue
            
        print("Scanning block: {} ({} - {})".format(
            block.getName(), 
            block.getStart(), 
            block.getEnd()
        ))
        
        block_start = block.getStart()
        block_end = block.getEnd()
        
        # Scan for prologue patterns
        current_addr = block_start
        while current_addr.compareTo(block_end) < 0:
            try:
                # Check if this address is already in a defined function
                func = listing.getFunctionContaining(current_addr)
                if func is not None:
                    # Skip to end of function
                    current_addr = func.getBody().getMaxAddress().add(1)
                    continue
                
                # Check for prologue patterns
                for pattern in prologue_patterns:
                    if matches_pattern_at_address(memory, current_addr, pattern):
                        # Look ahead to see if this looks like a real function
                        if looks_like_function_start(memory, listing, current_addr):
                            results.append({
                                'address': current_addr,
                                'type': 'PROLOGUE',
                                'pattern': pattern,
                                'confidence': 'HIGH'
                            })
                            break
                
                # Check for padding patterns that might indicate function boundaries
                padding_result = detect_padding_sequence(memory, current_addr, padding_patterns)
                if padding_result:
                    # Check if there's a potential function after the padding
                    next_addr = padding_result['end_addr']
                    if next_addr.compareTo(block_end) < 0:
                        for pattern in prologue_patterns:
                            if matches_pattern_at_address(memory, next_addr, pattern):
                                results.append({
                                    'address': next_addr,
                                    'type': 'AFTER_PADDING',
                                    'pattern': pattern,
                                    'confidence': 'MEDIUM',
                                    'padding_start': current_addr,
                                    'padding_length': padding_result['total_bytes'],
                                    'padding_details': padding_result['instructions']
                                })
                                break
                
                # Also check for specific compiler padding sequences
                specific_padding = detect_specific_padding_sequences(memory, current_addr)
                if specific_padding:
                    next_addr = specific_padding['end_addr']
                    if next_addr.compareTo(block_end) < 0:
                        for pattern in prologue_patterns:
                            if matches_pattern_at_address(memory, next_addr, pattern):
                                results.append({
                                    'address': next_addr,
                                    'type': 'AFTER_SPECIFIC_PADDING',
                                    'pattern': pattern,
                                    'confidence': 'HIGH',
                                    'padding_start': current_addr,
                                    'padding_sequence': specific_padding['sequence']
                                })
                                break
                
                current_addr = current_addr.add(1)
                
            except Exception as e:
                print("Error at {}: {}".format(current_addr, str(e)))
                current_addr = current_addr.add(1)
    
    return results

def matches_pattern_at_address(memory, address, pattern):
    """Check if the given pattern matches at the specified address"""
    try:
        for i, byte_val in enumerate(pattern):
            addr = address.add(i)
            if memory.getByte(addr) != byte_val:
                return False
        return True
    except:
        return False

def detect_padding_sequence(memory, start_addr, padding_patterns):
    """Detect consecutive padding instructions and return detailed info"""
    instructions = []
    current_addr = start_addr
    total_bytes = 0
    
    try:
        while True:
            found_padding = False
            for pattern in padding_patterns:
                if matches_pattern_at_address(memory, current_addr, pattern):
                    instructions.append({
                        'address': current_addr,
                        'pattern': pattern,
                        'bytes': len(pattern)
                    })
                    total_bytes += len(pattern)
                    current_addr = current_addr.add(len(pattern))
                    found_padding = True
                    break
            
            if not found_padding:
                break
                
            # Prevent infinite loops and ensure minimum padding
            if len(instructions) > 50:
                break
                
    except:
        pass
    
    # Only return if we found significant padding
    if len(instructions) >= 2 and total_bytes >= 6:
        return {
            'end_addr': current_addr,
            'total_bytes': total_bytes,
            'instructions': instructions
        }
    
    return None

def detect_specific_padding_sequences(memory, start_addr):
    """Detect specific common compiler padding sequences"""
    # Common MSVC padding sequence: LEA EAX,[EAX+00000000]; LEA EDX,[EDX+00]; MOV EBX,EBX
    sequences = [
        {
            'name': 'MSVC_COMMON',
            'patterns': [
                [0x8D, 0x80, 0x00, 0x00, 0x00, 0x00],  # lea eax, [eax+00000000]
                [0x8D, 0x52, 0x00],                     # lea edx, [edx+00]
                [0x8B, 0xDB]                            # mov ebx, ebx
            ]
        },
        {
            'name': 'MSVC_ALT1',
            'patterns': [
                [0x8D, 0x80, 0x00, 0x00, 0x00, 0x00],  # lea eax, [eax+00000000]
                [0x8D, 0x49, 0x00],                     # lea ecx, [ecx+00]
                [0x8B, 0xD2]                            # mov edx, edx
            ]
        },
        {
            'name': 'MSVC_ALT2',
            'patterns': [
                [0x8D, 0x89, 0x00, 0x00, 0x00, 0x00],  # lea ecx, [ecx+00000000]
                [0x8D, 0x52, 0x00],                     # lea edx, [edx+00]
                [0x8B, 0xDB]                            # mov ebx, ebx
            ]
        },
        # Add more specific sequences as needed
    ]
    
    try:
        for seq in sequences:
            current_addr = start_addr
            matched_patterns = []
            
            for pattern in seq['patterns']:
                if matches_pattern_at_address(memory, current_addr, pattern):
                    matched_patterns.append({
                        'address': current_addr,
                        'pattern': pattern
                    })
                    current_addr = current_addr.add(len(pattern))
                else:
                    break
            
            # If all patterns in sequence matched
            if len(matched_patterns) == len(seq['patterns']):
                return {
                    'end_addr': current_addr,
                    'sequence': seq['name'],
                    'patterns': matched_patterns
                }
                
    except:
        pass
    
    return None

def looks_like_function_start(memory, listing, address):
    """
    Heuristic to determine if an address looks like a function start.
    Checks for reasonable instruction sequences after the prologue.
    """
    try:
        # Skip prologue (assume max 10 bytes)
        check_addr = address.add(10)
        
        # Look for common function body patterns in next 20 bytes
        for i in range(20):
            try:
                addr = check_addr.add(i)
                byte_val = memory.getByte(addr)
                
                # Look for control flow instructions (good sign of function body)
                if byte_val in [0xE8, 0xE9, 0x74, 0x75, 0x7E, 0x7F]:  # call, jmp, je, jne, jle, jg
                    return True
                    
                # Look for return instruction (functions should have returns)
                if byte_val == 0xC3:  # ret
                    return True
                    
            except:
                continue
                
        return False
        
    except:
        return False

def write_results_to_file(results):
    """Write results to a text file and print to console"""
    try:
        # Get program name for filename
        program = getCurrentProgram()
        program_name = program.getName()
        
        filename = "{}_potential_functions.txt".format(program_name.replace('.', '_'))
        
        writer = PrintWriter(FileWriter(filename))
        
        # Create output content
        output_lines = []
        output_lines.append("Potential Function Discovery Results")
        output_lines.append("===================================")
        output_lines.append("Program: {}".format(program_name))
        output_lines.append("Total candidates found: {}".format(len(results)))
        output_lines.append("")
        
        # Group by type
        prologue_results = [r for r in results if r['type'] == 'PROLOGUE']
        padding_results = [r for r in results if r['type'] == 'AFTER_PADDING']
        
        if prologue_results:
            output_lines.append("FUNCTION PROLOGUES DETECTED:")
            output_lines.append("----------------------------")
            for result in sorted(prologue_results, key=lambda x: x['address'].getOffset()):
                pattern_hex = ' '.join(['{:02X}'.format(b & 0xFF) for b in result['pattern']])
                line = "Address: {} | Confidence: {} | Pattern: {}".format(
                    result['address'], 
                    result['confidence'],
                    pattern_hex
                )
                output_lines.append(line)
            output_lines.append("")
        
        if padding_results:
            output_lines.append("FUNCTIONS AFTER PADDING:")
            output_lines.append("------------------------")
            for result in sorted(padding_results, key=lambda x: x['address'].getOffset()):
                pattern_hex = ' '.join(['{:02X}'.format(b & 0xFF) for b in result['pattern']])
                line1 = "Function: {} | Confidence: {} | Pattern: {}".format(
                    result['address'],
                    result['confidence'], 
                    pattern_hex
                )
                line2 = "  Padding: {} - {} ({} bytes)".format(
                    result['padding_start'],
                    result['padding_start'].add(result['padding_length']),
                    result['padding_length']
                )
                output_lines.append(line1)
                output_lines.append(line2)
            output_lines.append("")
        
        # Summary by confidence
        high_conf = len([r for r in results if r['confidence'] == 'HIGH'])
        med_conf = len([r for r in results if r['confidence'] == 'MEDIUM'])
        
        output_lines.append("SUMMARY:")
        output_lines.append("--------")
        output_lines.append("High confidence candidates: {}".format(high_conf))
        output_lines.append("Medium confidence candidates: {}".format(med_conf))
        output_lines.append("Total candidates: {}".format(len(results)))
        
        # Write to file and print to console
        for line in output_lines:
            writer.println(line)
            print(line)  # Also print to Ghidra console
        
        writer.close()
        
        print("\nResults written to: {}".format(filename))
        return filename
        
    except Exception as e:
        print("Error writing results: {}".format(str(e)))
        return None

# Main execution
def main():
    print("Starting function discovery...")
    
    results = find_potential_functions()
    
    print("Found {} potential function candidates".format(len(results)))
    
    if results:
        output_file = write_results_to_file(results)
        print("Analysis complete. Check {} for results.".format(output_file))
    else:
        print("No potential functions found.")

if __name__ == "__main__":
    main()
