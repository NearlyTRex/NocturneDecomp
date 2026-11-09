; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_console_cpp_FUN_004421d0(CConsole *this_ptr)
;
; Parameters:
; CConsole *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_console.cpp_CConsole_writeChar_FUN_004420c0 at 0044215c
;
; Called Functions:
;   crt_memory.c_memset_FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004421d0
        ;   Label: engine_console.cpp_FUN_004421d0
    PUSH ESI                            ; 004421d1
    PUSH EDI                            ; 004421d2
    PUSH EBP                            ; 004421d3
    SUB ESP,0x4                         ; 004421d4
    MOV EDX,dword ptr [ESP + 0x18]      ; 004421d7
    ADD EDX,0x8                         ; 004421db
    XOR EBP,EBP                         ; 004421de
    MOV dword ptr [ESP],EDX             ; 004421e0
    LEA EBX,[EDX + 0x50]                ; 004421e3
    MOV ECX,dword ptr [ESP + 0x18]      ; 004421e6
        ;   Label: LAB_004421e6
    MOV ECX,dword ptr [ECX + 0xfb4]     ; 004421ea
    DEC ECX                             ; 004421f0
    CMP EBP,ECX                         ; 004421f1
    JL 0x00442224                       ; 004421f3
        ;   XREF to: 00442224 (CONDITIONAL_JUMP)  ; LAB_00442224
    MOV EDX,dword ptr [ESP + 0x18]      ; 004421f5
    MOV EBX,dword ptr [EDX + 0xfb0]     ; 004421f9
    LEA EDX,[ECX*0x4 + 0x0]             ; 004421ff
    MOV ESI,dword ptr [ESP]             ; 00442206
    ADD EDX,ECX                         ; 00442209
    PUSH EBX                            ; 0044220b
    SHL EDX,0x4                         ; 0044220c
    PUSH 0x0                            ; 0044220f
    ADD EDX,ESI                         ; 00442211
    PUSH EDX                            ; 00442213
    CALL crt_memory.c_memset_FUN_005a28f0 ; 00442214
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00442219
    ADD ESP,0x4                         ; 0044221c
    POP EBP                             ; 0044221f
    POP EDI                             ; 00442220
    POP ESI                             ; 00442221
    POP EBX                             ; 00442222
    RET                                 ; 00442223
    MOV ECX,dword ptr [ESP + 0x18]      ; 00442224
        ;   Label: LAB_00442224
    MOV ESI,EBX                         ; 00442228
    MOV EDI,EDX                         ; 0044222a
    MOV ECX,dword ptr [ECX + 0xfb0]     ; 0044222c
    INC EBP                             ; 00442232
    PUSH EDI                            ; 00442233
    MOV EAX,ECX                         ; 00442234
    SHR ECX,0x2                         ; 00442236
    MOVSD.REP ES:EDI,ESI                ; 00442239
    MOV CL,AL                           ; 0044223b
    AND CL,0x3                          ; 0044223d
    MOVSB.REP ES:EDI,ESI                ; 00442240
    POP EDI                             ; 00442242
    ADD EDX,0x50                        ; 00442243
    ADD EBX,0x50                        ; 00442246
    JMP 0x004421e6                      ; 00442249
        ;   XREF to: 004421e6 (UNCONDITIONAL_JUMP)  ; LAB_004421e6

