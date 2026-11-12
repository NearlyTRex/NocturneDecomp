; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bmppuzzl_cpp_FUN_00411a90(void)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_game.cpp_CGame_process_FUN_004bf4b0 at 004bf89e
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 DAT_007dffb4
;   undefined4 DAT_007dffbc
;   undefined4 DAT_01c5fadc
;   undefined4 DAT_01c5fae0
;   undefined4 DAT_01c5fae4
;   undefined4 g_CGameInstance.delta_time_float
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00411a90
        ;   Label: core_bmppuzzl.cpp_FUN_00411a90
    PUSH ESI                            ; 00411a91
    PUSH EBP                            ; 00411a92
    MOV ESI,dword ptr [0x007dffb4]      ; 00411a93 | DAT_007dffb4
    TEST ESI,ESI                        ; 00411a99
    JZ 0x00411aca                       ; 00411a9b
        ;   XREF to: 00411aca (CONDITIONAL_JUMP)  ; LAB_00411aca
    XOR EBX,EBX                         ; 00411a9d
    TEST ESI,ESI                        ; 00411a9f
    JZ 0x00411aca                       ; 00411aa1
        ;   XREF to: 00411aca (CONDITIONAL_JUMP)  ; LAB_00411aca
    MOV EAX,0x1                         ; 00411aa3
        ;   Label: LAB_00411aa3
    MOV CL,BL                           ; 00411aa8
    MOV EDX,dword ptr [0x007dffbc]      ; 00411aaa | DAT_007dffbc
    SHL EAX,CL                          ; 00411ab0
    MOV ECX,dword ptr [0x01c5fae4]      ; 00411ab2 | DAT_01c5fae4
    AND EDX,EAX                         ; 00411ab8
    AND ECX,EAX                         ; 00411aba
    CMP ECX,EDX                         ; 00411abc
    JNZ 0x00411ad4                      ; 00411abe
        ;   XREF to: 00411ad4 (CONDITIONAL_JUMP)  ; LAB_00411ad4
    INC EBX                             ; 00411ac0
        ;   Label: LAB_00411ac0
    CMP EBX,0x3                         ; 00411ac1
    JGE 0x00411b14                      ; 00411ac4
        ;   XREF to: 00411b14 (CONDITIONAL_JUMP)  ; LAB_00411b14
    TEST ESI,ESI                        ; 00411ac6
    JNZ 0x00411aa3                      ; 00411ac8
        ;   XREF to: 00411aa3 (CONDITIONAL_JUMP)  ; LAB_00411aa3
    MOV dword ptr [0x007dffb4],ESI      ; 00411aca | DAT_007dffb4
        ;   Label: LAB_00411aca
    POP EBP                             ; 00411ad0
    POP ESI                             ; 00411ad1
    POP EBX                             ; 00411ad2
    RET                                 ; 00411ad3
    MOV EDX,dword ptr [0x01c5fae4]      ; 00411ad4 | DAT_01c5fae4
        ;   Label: LAB_00411ad4
    MOV ECX,dword ptr [ESI]             ; 00411ada
    MOV dword ptr [0x007dffbc],EDX      ; 00411adc | DAT_007dffbc
    TEST EAX,EDX                        ; 00411ae2
    SETNZ AL                            ; 00411ae4
    AND EAX,0xff                        ; 00411ae7
    PUSH EAX                            ; 00411aec
    PUSH EBX                            ; 00411aed
    MOV EBP,dword ptr [0x01c5fae0]      ; 00411aee | DAT_01c5fae0
    PUSH EBP                            ; 00411af4
    MOV EAX,[0x01c5fadc]                ; 00411af5 | DAT_01c5fadc
    PUSH EAX                            ; 00411afa
    PUSH ESI                            ; 00411afb
    MOV dword ptr [0x007dffb4],ESI      ; 00411afc | DAT_007dffb4
    CALL dword ptr [ECX + 0x24]         ; 00411b02
    MOV ESI,dword ptr [0x007dffb4]      ; 00411b05 | DAT_007dffb4
    ADD ESP,0x14                        ; 00411b0b
    TEST ESI,ESI                        ; 00411b0e
    JZ 0x00411aca                       ; 00411b10
        ;   XREF to: 00411aca (CONDITIONAL_JUMP)  ; LAB_00411aca
    JMP 0x00411ac0                      ; 00411b12
        ;   XREF to: 00411ac0 (UNCONDITIONAL_JUMP)  ; LAB_00411ac0
    MOV EDX,dword ptr [0x005fe9dc]      ; 00411b14 | g_CGamePtr
        ;   Label: LAB_00411b14
    SUB ESP,0x4                         ; 00411b1a
    MOV ECX,dword ptr [ESI]             ; 00411b1d
    MOV EAX,dword ptr [EDX + 0x314]     ; 00411b1f | g_CGameInstance.delta_time_float
    MOV dword ptr [ESP],EAX             ; 00411b25
    PUSH ESI                            ; 00411b28
    MOV dword ptr [0x007dffb4],ESI      ; 00411b29 | DAT_007dffb4
    CALL dword ptr [ECX + 0x20]         ; 00411b2f
    MOV ESI,dword ptr [0x007dffb4]      ; 00411b32 | DAT_007dffb4
    ADD ESP,0x8                         ; 00411b38
    MOV dword ptr [0x007dffb4],ESI      ; 00411b3b | DAT_007dffb4
    POP EBP                             ; 00411b41
    POP ESI                             ; 00411b42
    POP EBX                             ; 00411b43
    RET                                 ; 00411b44

