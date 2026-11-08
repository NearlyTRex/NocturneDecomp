; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005acc00(void)
;
;
; XREF[4]:
;   FUN_004ce580 at 004cf03c
;   FUN_004d77d0 at 004d79a8
;   FUN_00582990 at 00582a4a
;   FUN_005acff0 at 005ad08e
;
; Referenced Globals:
;   TerminatedCString s_wincore_wddvmem_cpp_005f96b5
;   TerminatedCString s_closeScreenDevice_Unable_005f96cc
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_00629010
;   undefined4 DAT_0071362c
;   undefined4 DAT_01c4354c
;   undefined4 DAT_01c43550
;   undefined4 DAT_01c4480c
;   undefined4 DAT_01c50948
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_02c99308
;   undefined4 DAT_02c99314
;   ... and 1 more
;
; Called Functions:
;   FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005acc00
        ;   Label: FUN_005acc00
    CMP dword ptr [0x02c9931c],0x0      ; 005acc01 | DAT_02c9931c
    JNZ 0x005accca                      ; 005acc08
        ;   XREF to: 005accca (CONDITIONAL_JUMP)  ; LAB_005accca
    MOV ECX,dword ptr [0x01c50948]      ; 005acc0e | DAT_01c50948
    TEST ECX,ECX                        ; 005acc14
    JNZ 0x005acccc                      ; 005acc16
        ;   XREF to: 005acccc (CONDITIONAL_JUMP)  ; LAB_005acccc
    PUSH EDI                            ; 005acc1c
    PUSH ESI                            ; 005acc1d
    CMP dword ptr [0x0061b49c],0x0      ; 005acc1e | DAT_0061b49c
    JLE 0x005acc87                      ; 005acc25
        ;   XREF to: 005acc87 (CONDITIONAL_JUMP)  ; LAB_005acc87
    PUSH EBX                            ; 005acc27
    MOV EAX,[0x0061b4a0]                ; 005acc28 | DAT_0061b4a0
    MOV EDX,EAX                         ; 005acc2d
    SAR EDX,0x1f                        ; 005acc2f
    SHL EDX,0x3                         ; 005acc32
    SBB EAX,EDX                         ; 005acc35
    SAR EAX,0x3                         ; 005acc37
    MOV EDI,EAX                         ; 005acc3a
    IMUL EDX,dword ptr [0x0061b498],0x0 ; 005acc3c | DAT_0061b498
    MOV EBP,dword ptr [0x0061b498]      ; 005acc43 | DAT_0061b498
    SHL EBP,0x2                         ; 005acc49
    XOR EAX,EAX                         ; 005acc4c
    MOV ESI,dword ptr [0x0061b498]      ; 005acc4e | DAT_0061b498
        ;   Label: LAB_005acc4e
    IMUL ESI,ECX                        ; 005acc54
    IMUL ESI,EDI                        ; 005acc57
    MOV EBX,dword ptr [0x00629010]      ; 005acc5a | DAT_00629010
    ADD EBX,ESI                         ; 005acc60
    MOV dword ptr [EAX + 0x1c4354c],EBX ; 005acc62 | DAT_01c4354c | DAT_01c43550
    MOV EBX,dword ptr [0x0071362c]      ; 005acc68 | DAT_0071362c
    ADD EAX,0x4                         ; 005acc6e
    ADD EBX,EDX                         ; 005acc71
    INC ECX                             ; 005acc73
    MOV dword ptr [EAX + 0x1c44808],EBX ; 005acc74 | DAT_01c4480c
    MOV EBX,dword ptr [0x0061b49c]      ; 005acc7a | DAT_0061b49c
    ADD EDX,EBP                         ; 005acc80
    CMP ECX,EBX                         ; 005acc82
    JL 0x005acc4e                       ; 005acc84
        ;   XREF to: 005acc4e (CONDITIONAL_JUMP)  ; LAB_005acc4e
    POP EBX                             ; 005acc86
    PUSH 0x0                            ; 005acc87
        ;   Label: LAB_005acc87
    MOV EAX,[0x02c99308]                ; 005acc89 | DAT_02c99308
    PUSH EAX                            ; 005acc8e
    MOV EDX,dword ptr [EAX]             ; 005acc8f
    CALL dword ptr [EDX + 0x80]         ; 005acc91
    TEST EAX,EAX                        ; 005acc97
    JZ 0x005accbe                       ; 005acc99
        ;   XREF to: 005accbe (CONDITIONAL_JUMP)  ; LAB_005accbe
    MOV ESI,0x5f96b5                    ; 005acc9b | = "..\\wincore\\wddvmem.cpp"
    MOV EDI,0x28f                       ; 005acca0
    PUSH 0x5f96cc                       ; 005acca5 | = "closeScreenDevice - Unable to unlock"
    MOV dword ptr [0x01d1d400],ESI      ; 005accaa | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 005accb0 | DAT_01d1d404
    CALL FUN_005030e0                   ; 005accb6
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 005accbb
    MOV dword ptr [0x02c99314],0x1      ; 005accbe | DAT_02c99314
        ;   Label: LAB_005accbe
    POP ESI                             ; 005accc8
    POP EDI                             ; 005accc9
    POP EBP                             ; 005accca
        ;   Label: LAB_005accca
    RET                                 ; 005acccb
    MOV dword ptr [0x02c99314],0x1      ; 005acccc | DAT_02c99314
        ;   Label: LAB_005acccc
    POP EBP                             ; 005accd6
    RET                                 ; 005accd7

