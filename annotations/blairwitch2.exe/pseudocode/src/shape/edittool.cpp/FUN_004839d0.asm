; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004839d0(int *param_1,int param_2,int param_3)
;
;
; XREF[4]:
;   FUN_00483c30 at 00483c64
;   FUN_00483cb0 at 00483cea
;   FUN_00483e10 at 00483e48
;   FUN_004b6170 at 004b6ad2
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005d2937
;   TerminatedCString s_CPickList_enableItem_inv_005d294d
;   TerminatedCString s_shape_edittool_cpp_005d2973
;   TerminatedCString s_Out_of_memory_005d2989
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;   FUN_005b8ce0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004839d0
        ;   Label: FUN_004839d0
    PUSH ESI                            ; 004839d1
    PUSH EDI                            ; 004839d2
    PUSH EBP                            ; 004839d3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004839d4
    MOV ESI,dword ptr [ESP + 0x18]      ; 004839d8
    TEST ESI,ESI                        ; 004839dc
    JL 0x004839e4                       ; 004839de
        ;   XREF to: 004839e4 (CONDITIONAL_JUMP)  ; LAB_004839e4
    CMP ESI,dword ptr [EBX]             ; 004839e0
    JL 0x00483a07                       ; 004839e2
        ;   XREF to: 00483a07 (CONDITIONAL_JUMP)  ; LAB_00483a07
    MOV ECX,0x5d2937                    ; 004839e4 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_004839e4
    MOV EDI,0x10eb                      ; 004839e9
    PUSH 0x5d294d                       ; 004839ee | = "CPickList::enableItem - invalid index"
    MOV dword ptr [0x01d046a0],ECX      ; 004839f3 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 004839f9 | DAT_01d046a4
    CALL FUN_004e4500                   ; 004839ff
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00483a04
    CMP ESI,dword ptr [EBX + 0x1ac]     ; 00483a07
        ;   Label: LAB_00483a07
    JL 0x00483a83                       ; 00483a0d
        ;   XREF to: 00483a83 (CONDITIONAL_JUMP)  ; LAB_00483a83
    CMP dword ptr [ESP + 0x1c],0x0      ; 00483a13
    JNZ 0x00483a99                      ; 00483a18
        ;   XREF to: 00483a99 (CONDITIONAL_JUMP)  ; LAB_00483a99
    MOV EAX,dword ptr [EBX]             ; 00483a1e
    SHL EAX,0x2                         ; 00483a20
    PUSH EAX                            ; 00483a23
    MOV EDX,dword ptr [EBX + 0x1b0]     ; 00483a24
    PUSH EDX                            ; 00483a2a
    CALL FUN_005b8ce0                   ; 00483a2b
        ;   XREF to: 005b8ce0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8ce0()
    ADD ESP,0x8                         ; 00483a30
    MOV dword ptr [EBX + 0x1b0],EAX     ; 00483a33
    TEST EAX,EAX                        ; 00483a39
    JZ 0x00483a5e                       ; 00483a3b
        ;   XREF to: 00483a5e (CONDITIONAL_JUMP)  ; LAB_00483a5e
    MOV EDX,dword ptr [EBX]             ; 00483a3d
        ;   Label: LAB_00483a3d
    MOV EAX,dword ptr [EBX + 0x1ac]     ; 00483a3f
    CMP EAX,EDX                         ; 00483a45
    JGE 0x00483a83                      ; 00483a47
        ;   XREF to: 00483a83 (CONDITIONAL_JUMP)  ; LAB_00483a83
    MOV EDX,dword ptr [EBX + 0x1b0]     ; 00483a49
    MOV dword ptr [EDX + EAX*0x4],0x1   ; 00483a4f
    INC dword ptr [EBX + 0x1ac]         ; 00483a56
    JMP 0x00483a3d                      ; 00483a5c
        ;   XREF to: 00483a3d (UNCONDITIONAL_JUMP)  ; LAB_00483a3d
    MOV EDI,0x5d2973                    ; 00483a5e | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_00483a5e
    MOV EBP,0x10f3                      ; 00483a63
    PUSH 0x5d2989                       ; 00483a68 | = "Out of memory"
    MOV dword ptr [0x01d046a0],EDI      ; 00483a6d | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 00483a73 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00483a79
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00483a7e
    JMP 0x00483a3d                      ; 00483a81
        ;   XREF to: 00483a3d (UNCONDITIONAL_JUMP)  ; LAB_00483a3d
    CMP dword ptr [ESP + 0x1c],0x0      ; 00483a83
        ;   Label: LAB_00483a83
    SETNZ AL                            ; 00483a88
    MOV EDX,dword ptr [EBX + 0x1b0]     ; 00483a8b
    AND EAX,0xff                        ; 00483a91
    MOV dword ptr [EDX + ESI*0x4],EAX   ; 00483a96
    POP EBP                             ; 00483a99
        ;   Label: LAB_00483a99
    POP EDI                             ; 00483a9a
    POP ESI                             ; 00483a9b
    POP EBX                             ; 00483a9c
    RET                                 ; 00483a9d

