; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bmppuzzl_cpp_processActivePuzzle_FUN_00415cd0(void)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_game.cpp_CGame_process_FUN_004d8060 at 004d844e
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 DAT_007c3978
;   undefined4 DAT_007c3980
;   undefined4 DAT_01c4353c
;   undefined4 DAT_01c43540
;   undefined4 DAT_01c43544
;   undefined4 g_CGameInstance.delta_time_float
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415cd0
        ;   Label: core_bmppuzzl.cpp_processActivePuzzle_FUN_00415cd0
    PUSH ESI                            ; 00415cd1
    PUSH EBP                            ; 00415cd2
    MOV ESI,dword ptr [0x007c3978]      ; 00415cd3 | DAT_007c3978
    TEST ESI,ESI                        ; 00415cd9
    JZ 0x00415d0a                       ; 00415cdb
        ;   XREF to: 00415d0a (CONDITIONAL_JUMP)  ; LAB_00415d0a
    XOR EBX,EBX                         ; 00415cdd
    TEST ESI,ESI                        ; 00415cdf
    JZ 0x00415d0a                       ; 00415ce1
        ;   XREF to: 00415d0a (CONDITIONAL_JUMP)  ; LAB_00415d0a
    MOV EAX,0x1                         ; 00415ce3
        ;   Label: LAB_00415ce3
    MOV CL,BL                           ; 00415ce8
    MOV EDX,dword ptr [0x007c3980]      ; 00415cea | DAT_007c3980
    SHL EAX,CL                          ; 00415cf0
    MOV ECX,dword ptr [0x01c43544]      ; 00415cf2 | DAT_01c43544
    AND EDX,EAX                         ; 00415cf8
    AND ECX,EAX                         ; 00415cfa
    CMP ECX,EDX                         ; 00415cfc
    JNZ 0x00415d14                      ; 00415cfe
        ;   XREF to: 00415d14 (CONDITIONAL_JUMP)  ; LAB_00415d14
    INC EBX                             ; 00415d00
        ;   Label: LAB_00415d00
    CMP EBX,0x3                         ; 00415d01
    JGE 0x00415d54                      ; 00415d04
        ;   XREF to: 00415d54 (CONDITIONAL_JUMP)  ; LAB_00415d54
    TEST ESI,ESI                        ; 00415d06
    JNZ 0x00415ce3                      ; 00415d08
        ;   XREF to: 00415ce3 (CONDITIONAL_JUMP)  ; LAB_00415ce3
    MOV dword ptr [0x007c3978],ESI      ; 00415d0a | DAT_007c3978
        ;   Label: LAB_00415d0a
    POP EBP                             ; 00415d10
    POP ESI                             ; 00415d11
    POP EBX                             ; 00415d12
    RET                                 ; 00415d13
    MOV EDX,dword ptr [0x01c43544]      ; 00415d14 | DAT_01c43544
        ;   Label: LAB_00415d14
    MOV ECX,dword ptr [ESI]             ; 00415d1a
    MOV dword ptr [0x007c3980],EDX      ; 00415d1c | DAT_007c3980
    TEST EAX,EDX                        ; 00415d22
    SETNZ AL                            ; 00415d24
    AND EAX,0xff                        ; 00415d27
    PUSH EAX                            ; 00415d2c
    PUSH EBX                            ; 00415d2d
    MOV EBP,dword ptr [0x01c43540]      ; 00415d2e | DAT_01c43540
    PUSH EBP                            ; 00415d34
    MOV EAX,[0x01c4353c]                ; 00415d35 | DAT_01c4353c
    PUSH EAX                            ; 00415d3a
    PUSH ESI                            ; 00415d3b
    MOV dword ptr [0x007c3978],ESI      ; 00415d3c | DAT_007c3978
    CALL dword ptr [ECX + 0x24]         ; 00415d42
    MOV ESI,dword ptr [0x007c3978]      ; 00415d45 | DAT_007c3978
    ADD ESP,0x14                        ; 00415d4b
    TEST ESI,ESI                        ; 00415d4e
    JZ 0x00415d0a                       ; 00415d50
        ;   XREF to: 00415d0a (CONDITIONAL_JUMP)  ; LAB_00415d0a
    JMP 0x00415d00                      ; 00415d52
        ;   XREF to: 00415d00 (UNCONDITIONAL_JUMP)  ; LAB_00415d00
    MOV EDX,dword ptr [0x0061d95c]      ; 00415d54 | g_CGamePtr
        ;   Label: LAB_00415d54
    SUB ESP,0x4                         ; 00415d5a
    MOV ECX,dword ptr [ESI]             ; 00415d5d
    MOV EAX,dword ptr [EDX + 0x294]     ; 00415d5f | g_CGameInstance.delta_time_float
    MOV dword ptr [ESP],EAX             ; 00415d65
    PUSH ESI                            ; 00415d68
    MOV dword ptr [0x007c3978],ESI      ; 00415d69 | DAT_007c3978
    CALL dword ptr [ECX + 0x20]         ; 00415d6f
    MOV ESI,dword ptr [0x007c3978]      ; 00415d72 | DAT_007c3978
    ADD ESP,0x8                         ; 00415d78
    MOV dword ptr [0x007c3978],ESI      ; 00415d7b | DAT_007c3978
    POP EBP                             ; 00415d81
    POP ESI                             ; 00415d82
    POP EBX                             ; 00415d83
    RET                                 ; 00415d84

