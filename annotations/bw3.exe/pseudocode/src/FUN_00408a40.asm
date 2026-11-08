; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00408a40(int param_1,undefined4 param_2,undefined4 *param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_00603b28
;   undefined4 DAT_01ed2aec
;   undefined4 DAT_01ed78c8
;   undefined4 DAT_020249f0
;   undefined4 DAT_020249f4
;   undefined4 DAT_020249f8
;   undefined4 DAT_02024a0c
;
; Called Functions:
;   FUN_0040c840
;   FUN_0053bc80
;   FUN_0053e870
;   FUN_0053ea20
;   FUN_0053ec10
;   FUN_0053ec80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408a40
        ;   Label: FUN_00408a40
    PUSH ESI                            ; 00408a41
    PUSH EDI                            ; 00408a42
    PUSH EBP                            ; 00408a43
    SUB ESP,0x8                         ; 00408a44
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00408a47
    MOV EBX,dword ptr [ESP + 0x24]      ; 00408a4b
    MOV EDX,dword ptr [0x00603b28]      ; 00408a4f | DAT_00603b28
    PUSH EDX                            ; 00408a55 | DAT_01ed78c8
    CALL FUN_0053e870                   ; 00408a56
        ;   XREF to: 0053e870 (UNCONDITIONAL_CALL)  ; undefined FUN_0053e870()
    ADD ESP,0x4                         ; 00408a5b
    PUSH ESI                            ; 00408a5e
    MOV ECX,dword ptr [0x00603b28]      ; 00408a5f | DAT_00603b28
    PUSH ECX                            ; 00408a65 | DAT_01ed78c8
    CALL FUN_0053ec10                   ; 00408a66
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; undefined FUN_0053ec10()
    ADD ESP,0x8                         ; 00408a6b
    MOV EDI,dword ptr [0x00603b28]      ; 00408a6e | DAT_00603b28
    PUSH EDI                            ; 00408a74 | DAT_01ed78c8
    CALL FUN_0053ec80                   ; 00408a75
        ;   XREF to: 0053ec80 (UNCONDITIONAL_CALL)  ; undefined FUN_0053ec80()
    ADD ESP,0x4                         ; 00408a7a
    LEA EAX,[ESI + 0x20]                ; 00408a7d
    PUSH dword ptr [ESP + 0x20]         ; 00408a80
    PUSH EAX                            ; 00408a84
    MOV EBP,dword ptr [0x00603b28]      ; 00408a85 | DAT_00603b28
    PUSH EBP                            ; 00408a8b | DAT_01ed78c8
    CALL FUN_0053bc80                   ; 00408a8c
        ;   XREF to: 0053bc80 (UNCONDITIONAL_CALL)  ; undefined FUN_0053bc80()
    MOV dword ptr [ESP + 0x10],EAX      ; 00408a91
    FLD float ptr [ESP + 0x10]          ; 00408a95
    ADD ESP,0xc                         ; 00408a99
    MOV EAX,[0x01ed2aec]                ; 00408a9c | DAT_01ed2aec
    PUSH EAX                            ; 00408aa1
    MOV EAX,[0x00603b28]                ; 00408aa2 | DAT_00603b28
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 00408aa7 | DAT_02024a0c
    PUSH EDX                            ; 00408aad
    FSTP float ptr [ESP + 0x8]          ; 00408aae
    CALL FUN_0040c840                   ; 00408ab2
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 00408ab7
    MOV dword ptr [ESI + 0xdc],EAX      ; 00408aba
    TEST EBX,EBX                        ; 00408ac0
    JZ 0x00408ae2                       ; 00408ac2
        ;   XREF to: 00408ae2 (CONDITIONAL_JUMP)  ; LAB_00408ae2
    MOV EAX,[0x00603b28]                ; 00408ac4 | DAT_00603b28
    ADD EAX,0x14d128                    ; 00408ac9
    CMP EBX,EAX                         ; 00408ace
    JZ 0x00408ae2                       ; 00408ad0
        ;   XREF to: 00408ae2 (CONDITIONAL_JUMP)  ; LAB_00408ae2
    MOV EDX,dword ptr [EAX]             ; 00408ad2 | DAT_020249f0
    MOV dword ptr [EBX],EDX             ; 00408ad4
    MOV EDX,dword ptr [EAX + 0x4]       ; 00408ad6 | DAT_020249f4
    MOV dword ptr [EBX + 0x4],EDX       ; 00408ad9
    MOV EDX,dword ptr [EAX + 0x8]       ; 00408adc | DAT_020249f8
    MOV dword ptr [EBX + 0x8],EDX       ; 00408adf
    MOV ECX,dword ptr [0x00603b28]      ; 00408ae2 | DAT_00603b28
        ;   Label: LAB_00408ae2
    PUSH ECX                            ; 00408ae8 | DAT_01ed78c8
    CALL FUN_0053ea20                   ; 00408ae9
        ;   XREF to: 0053ea20 (UNCONDITIONAL_CALL)  ; undefined FUN_0053ea20()
    ADD ESP,0x4                         ; 00408aee
    MOV EAX,dword ptr [ESP]             ; 00408af1
    ADD ESP,0x8                         ; 00408af4
    POP EBP                             ; 00408af7
    POP EDI                             ; 00408af8
    POP ESI                             ; 00408af9
    POP EBX                             ; 00408afa
    RET                                 ; 00408afb

