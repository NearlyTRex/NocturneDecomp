; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_actor.cpp_crc32ProcessByte_FUN_0040ce30(uint * crc_state, byte input_byte)
;
; Parameters:
; uint *           Stack[0x4]:4   crc_state
; byte             Stack[0x8]:1   input_byte
;
; XREF[3]:
;   core_actor.cpp_crc32ProcessBuffer_FUN_0040cf10 at 0040cf2b
;   core_actor.cpp_crc32ProcessString_FUN_0040cf90 at 0040cfa7
;   core_script.cpp_CalculateCRC_FUN_00560d80 at 00560db2
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040ce30
        ;   Label: core_actor.cpp_crc32ProcessByte_FUN_0040ce30
    XOR EDX,EDX                         ; 0040ce34
    MOV DL,byte ptr [ESP + 0x8]         ; 0040ce36
    MOV ECX,dword ptr [EAX]             ; 0040ce3a
    SHL EDX,0x18                        ; 0040ce3c
    XOR ECX,EDX                         ; 0040ce3f
    MOV dword ptr [EAX],ECX             ; 0040ce41
    TEST byte ptr [EAX + 0x3],0x80      ; 0040ce43
    JZ 0x0040ced7                       ; 0040ce47 | LAB_0040ced7
        ;   XREF to: 0040ced7 (CONDITIONAL_JUMP)
    LEA EDX,[ECX + ECX*0x1]             ; 0040ce4d
    XOR EDX,0x4c11db7                   ; 0040ce50
    MOV dword ptr [EAX],EDX             ; 0040ce56
        ;   Label: LAB_0040ce56
    TEST byte ptr [EAX + 0x3],0x80      ; 0040ce58
    JZ 0x0040cedf                       ; 0040ce5c | LAB_0040cedf
        ;   XREF to: 0040cedf (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EAX]             ; 0040ce62
    ADD EDX,EDX                         ; 0040ce64
    XOR EDX,0x4c11db7                   ; 0040ce66
    MOV dword ptr [EAX],EDX             ; 0040ce6c
        ;   Label: LAB_0040ce6c
    TEST byte ptr [EAX + 0x3],0x80      ; 0040ce6e
    JZ 0x0040cee5                       ; 0040ce72 | LAB_0040cee5
        ;   XREF to: 0040cee5 (CONDITIONAL_JUMP)
    ADD EDX,EDX                         ; 0040ce78
    XOR EDX,0x4c11db7                   ; 0040ce7a
    MOV dword ptr [EAX],EDX             ; 0040ce80
        ;   Label: LAB_0040ce80
    TEST byte ptr [EAX + 0x3],0x80      ; 0040ce82
    JZ 0x0040cee9                       ; 0040ce86 | LAB_0040cee9
        ;   XREF to: 0040cee9 (CONDITIONAL_JUMP)
    ADD EDX,EDX                         ; 0040ce88
    XOR EDX,0x4c11db7                   ; 0040ce8a
    MOV dword ptr [EAX],EDX             ; 0040ce90
        ;   Label: LAB_0040ce90
    TEST byte ptr [EAX + 0x3],0x80      ; 0040ce92
    JZ 0x0040ceed                       ; 0040ce96 | LAB_0040ceed
        ;   XREF to: 0040ceed (CONDITIONAL_JUMP)
    ADD EDX,EDX                         ; 0040ce98
    XOR EDX,0x4c11db7                   ; 0040ce9a
    MOV dword ptr [EAX],EDX             ; 0040cea0
        ;   Label: LAB_0040cea0
    TEST byte ptr [EAX + 0x3],0x80      ; 0040cea2
    JZ 0x0040cef1                       ; 0040cea6 | LAB_0040cef1
        ;   XREF to: 0040cef1 (CONDITIONAL_JUMP)
    ADD EDX,EDX                         ; 0040cea8
    XOR EDX,0x4c11db7                   ; 0040ceaa
    MOV dword ptr [EAX],EDX             ; 0040ceb0
        ;   Label: LAB_0040ceb0
    TEST byte ptr [EAX + 0x3],0x80      ; 0040ceb2
    JZ 0x0040cef5                       ; 0040ceb6 | LAB_0040cef5
        ;   XREF to: 0040cef5 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EAX]             ; 0040ceb8
    ADD EDX,EDX                         ; 0040ceba
    XOR EDX,0x4c11db7                   ; 0040cebc
    MOV dword ptr [EAX],EDX             ; 0040cec2
        ;   Label: LAB_0040cec2
    TEST byte ptr [EAX + 0x3],0x80      ; 0040cec4
    JZ 0x0040cefb                       ; 0040cec8 | LAB_0040cefb
        ;   XREF to: 0040cefb (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EAX]             ; 0040ceca
    ADD EDX,EDX                         ; 0040cecc
    XOR EDX,0x4c11db7                   ; 0040cece
    MOV dword ptr [EAX],EDX             ; 0040ced4
    RET                                 ; 0040ced6
    LEA EDX,[ECX + ECX*0x1]             ; 0040ced7
        ;   Label: LAB_0040ced7
    JMP 0x0040ce56                      ; 0040ceda | LAB_0040ce56
        ;   XREF to: 0040ce56 (UNCONDITIONAL_JUMP)
    MOV EDX,dword ptr [EAX]             ; 0040cedf
        ;   Label: LAB_0040cedf
    ADD EDX,EDX                         ; 0040cee1
    JMP 0x0040ce6c                      ; 0040cee3 | LAB_0040ce6c
        ;   XREF to: 0040ce6c (UNCONDITIONAL_JUMP)
    ADD EDX,EDX                         ; 0040cee5
        ;   Label: LAB_0040cee5
    JMP 0x0040ce80                      ; 0040cee7 | LAB_0040ce80
        ;   XREF to: 0040ce80 (UNCONDITIONAL_JUMP)
    ADD EDX,EDX                         ; 0040cee9
        ;   Label: LAB_0040cee9
    JMP 0x0040ce90                      ; 0040ceeb | LAB_0040ce90
        ;   XREF to: 0040ce90 (UNCONDITIONAL_JUMP)
    ADD EDX,EDX                         ; 0040ceed
        ;   Label: LAB_0040ceed
    JMP 0x0040cea0                      ; 0040ceef | LAB_0040cea0
        ;   XREF to: 0040cea0 (UNCONDITIONAL_JUMP)
    ADD EDX,EDX                         ; 0040cef1
        ;   Label: LAB_0040cef1
    JMP 0x0040ceb0                      ; 0040cef3 | LAB_0040ceb0
        ;   XREF to: 0040ceb0 (UNCONDITIONAL_JUMP)
    MOV EDX,dword ptr [EAX]             ; 0040cef5
        ;   Label: LAB_0040cef5
    ADD EDX,EDX                         ; 0040cef7
    JMP 0x0040cec2                      ; 0040cef9 | LAB_0040cec2
        ;   XREF to: 0040cec2 (UNCONDITIONAL_JUMP)
    MOV EDX,dword ptr [EAX]             ; 0040cefb
        ;   Label: LAB_0040cefb
    ADD EDX,EDX                         ; 0040cefd
    MOV dword ptr [EAX],EDX             ; 0040ceff
    RET                                 ; 0040cf01

