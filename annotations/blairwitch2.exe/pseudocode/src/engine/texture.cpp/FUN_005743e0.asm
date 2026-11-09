; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_texture_cpp_FUN_005743e0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   engine_texture.cpp_FUN_00574f5c at 00574ff2
;
; Called Functions:
;   crt_memory.c_memset_FUN_005b77c0
;   crt_unknown.c_FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005743e0
        ;   Label: engine_texture.cpp_FUN_005743e0
    PUSH ESI                            ; 005743e1
    PUSH EDI                            ; 005743e2
    MOV EDI,dword ptr [ESP + 0x14]      ; 005743e3
    MOV ESI,dword ptr [EDI + 0x4]       ; 005743e7
    AND ESI,0xffff                      ; 005743ea
    LEA EBX,[ESI*0x4 + 0x0]             ; 005743f0
    SUB EBX,ESI                         ; 005743f7
    MOV ESI,EBX                         ; 005743f9
    MOV EBX,dword ptr [ESP + 0x10]      ; 005743fb
    SHL ESI,0x5                         ; 005743ff
    ADD EBX,0x4                         ; 00574402
    ADD EBX,ESI                         ; 00574405
    MOV EDX,dword ptr [EBX + 0x44]      ; 00574407
    TEST EDX,EDX                        ; 0057440a
    JNZ 0x0057447a                      ; 0057440c
        ;   XREF to: 0057447a (CONDITIONAL_JUMP)  ; LAB_0057447a
    MOV ESI,dword ptr [EBX + 0x48]      ; 0057440e
        ;   Label: LAB_0057440e
    TEST ESI,ESI                        ; 00574411
    JZ 0x0057441e                       ; 00574413
        ;   XREF to: 0057441e (CONDITIONAL_JUMP)  ; LAB_0057441e
    PUSH ESI                            ; 00574415
    CALL crt_unknown.c_FUN_005b86a0     ; 00574416
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 0057441b
    MOV EAX,dword ptr [EBX + 0x4c]      ; 0057441e
        ;   Label: LAB_0057441e
    TEST EAX,EAX                        ; 00574421
    JZ 0x0057442e                       ; 00574423
        ;   XREF to: 0057442e (CONDITIONAL_JUMP)  ; LAB_0057442e
    PUSH EAX                            ; 00574425
    CALL crt_unknown.c_FUN_005b86a0     ; 00574426
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 0057442b
    MOV ECX,dword ptr [EBX + 0x50]      ; 0057442e
        ;   Label: LAB_0057442e
    TEST ECX,ECX                        ; 00574431
    JNZ 0x00574485                      ; 00574433
        ;   XREF to: 00574485 (CONDITIONAL_JUMP)  ; LAB_00574485
    PUSH 0x60                           ; 00574435
        ;   Label: LAB_00574435
    PUSH 0x0                            ; 00574437
    PUSH EBX                            ; 00574439
    LEA ESI,[EDI + 0x8]                 ; 0057443a
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0057443d
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00574442
    LEA EDI,[EBX + 0x4]                 ; 00574445
    PUSH EDI                            ; 00574448
    MOV AL,byte ptr [ESI]               ; 00574449
        ;   Label: LAB_00574449
    MOV byte ptr [EDI],AL               ; 0057444b
    CMP AL,0x0                          ; 0057444d
    JZ 0x00574461                       ; 0057444f
        ;   XREF to: 00574461 (CONDITIONAL_JUMP)  ; LAB_00574461
    MOV AL,byte ptr [ESI + 0x1]         ; 00574451
    ADD ESI,0x2                         ; 00574454
    MOV byte ptr [EDI + 0x1],AL         ; 00574457
    ADD EDI,0x2                         ; 0057445a
    CMP AL,0x0                          ; 0057445d
    JNZ 0x00574449                      ; 0057445f
        ;   XREF to: 00574449 (CONDITIONAL_JUMP)  ; LAB_00574449
    POP EDI                             ; 00574461
        ;   Label: LAB_00574461
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00574462
    MOV dword ptr [EBX + 0x58],0x1      ; 00574466
    MOV dword ptr [EBX + 0x50],ESI      ; 0057446d
    MOV ESI,dword ptr [ESP + 0x18]      ; 00574470
    MOV dword ptr [EBX],ESI             ; 00574474
    POP EDI                             ; 00574476
    POP ESI                             ; 00574477
    POP EBX                             ; 00574478
    RET                                 ; 00574479
    PUSH EDX                            ; 0057447a
        ;   Label: LAB_0057447a
    CALL crt_unknown.c_FUN_005b86a0     ; 0057447b
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 00574480
    JMP 0x0057440e                      ; 00574483
        ;   XREF to: 0057440e (UNCONDITIONAL_JUMP)  ; LAB_0057440e
    PUSH ECX                            ; 00574485
        ;   Label: LAB_00574485
    CALL crt_unknown.c_FUN_005b86a0     ; 00574486
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 0057448b
    JMP 0x00574435                      ; 0057448e
        ;   XREF to: 00574435 (UNCONDITIONAL_JUMP)  ; LAB_00574435

