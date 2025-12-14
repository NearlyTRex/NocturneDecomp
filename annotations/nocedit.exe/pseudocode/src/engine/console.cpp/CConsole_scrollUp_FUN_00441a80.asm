; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_console.cpp_CConsole_scrollUp_FUN_00441a80(CConsole * this_ptr)
;
; Parameters:
; CConsole *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_console.cpp_CConsole_writeChar_FUN_00441970 at 00441a0c
;
; Called Functions:
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441a80
        ;   Label: engine_console.cpp_CConsole_scrollUp_FUN_00441a80
    PUSH ESI                            ; 00441a81
    PUSH EDI                            ; 00441a82
    PUSH EBP                            ; 00441a83
    SUB ESP,0x4                         ; 00441a84
    MOV EDX,dword ptr [ESP + 0x18]      ; 00441a87
    ADD EDX,0x4                         ; 00441a8b
    XOR EBP,EBP                         ; 00441a8e
    MOV dword ptr [ESP],EDX             ; 00441a90
    LEA EBX,[EDX + 0x50]                ; 00441a93
    MOV ECX,dword ptr [ESP + 0x18]      ; 00441a96
        ;   Label: LAB_00441a96
    MOV ECX,dword ptr [ECX + 0xfb0]     ; 00441a9a
    DEC ECX                             ; 00441aa0
    CMP EBP,ECX                         ; 00441aa1
    JL 0x00441ad4                       ; 00441aa3
        ;   XREF to: 00441ad4 (CONDITIONAL_JUMP)  ; LAB_00441ad4
    MOV EDX,dword ptr [ESP + 0x18]      ; 00441aa5
    MOV EBX,dword ptr [EDX + 0xfac]     ; 00441aa9
    LEA EDX,[ECX*0x4 + 0x0]             ; 00441aaf
    MOV ESI,dword ptr [ESP]             ; 00441ab6
    ADD EDX,ECX                         ; 00441ab9
    PUSH EBX                            ; 00441abb
    SHL EDX,0x4                         ; 00441abc
    PUSH 0x0                            ; 00441abf
    ADD EDX,ESI                         ; 00441ac1
    PUSH EDX                            ; 00441ac3
    CALL crt_memory.c_memset_FUN_005fde40 ; 00441ac4
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00441ac9
    ADD ESP,0x4                         ; 00441acc
    POP EBP                             ; 00441acf
    POP EDI                             ; 00441ad0
    POP ESI                             ; 00441ad1
    POP EBX                             ; 00441ad2
    RET                                 ; 00441ad3
    MOV ECX,dword ptr [ESP + 0x18]      ; 00441ad4
        ;   Label: LAB_00441ad4
    MOV ESI,EBX                         ; 00441ad8
    MOV EDI,EDX                         ; 00441ada
    MOV ECX,dword ptr [ECX + 0xfac]     ; 00441adc
    INC EBP                             ; 00441ae2
    PUSH EDI                            ; 00441ae3
    MOV EAX,ECX                         ; 00441ae4
    SHR ECX,0x2                         ; 00441ae6
    MOVSD.REP ES:EDI,ESI                ; 00441ae9
    MOV CL,AL                           ; 00441aeb
    AND CL,0x3                          ; 00441aed
    MOVSB.REP ES:EDI,ESI                ; 00441af0
    POP EDI                             ; 00441af2
    ADD EDX,0x50                        ; 00441af3
    ADD EBX,0x50                        ; 00441af6
    JMP 0x00441a96                      ; 00441af9
        ;   XREF to: 00441a96 (UNCONDITIONAL_JUMP)  ; LAB_00441a96

