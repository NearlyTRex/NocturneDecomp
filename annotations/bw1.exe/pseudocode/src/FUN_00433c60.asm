; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00433c60(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00409c40
;   FUN_0040cf40
;   FUN_0040cf80
;   FUN_00524770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00433c60
        ;   Label: FUN_00433c60
    PUSH ESI                            ; 00433c61
    PUSH EDI                            ; 00433c62
    MOV EDI,dword ptr [ESP + 0x10]      ; 00433c63
    MOV EBX,dword ptr [ESP + 0x14]      ; 00433c67
    PUSH EBX                            ; 00433c6b
    PUSH EDI                            ; 00433c6c
    CALL FUN_00409c40                   ; 00433c6d
        ;   XREF to: 00409c40 (UNCONDITIONAL_CALL)  ; undefined FUN_00409c40()
    ADD ESP,0x8                         ; 00433c72
    PUSH dword ptr [EDI + 0x2538]       ; 00433c75
    LEA ESI,[EDI + 0x158]               ; 00433c7b
    PUSH EBX                            ; 00433c81
    ADD EDI,0x24a8                      ; 00433c82
    CALL FUN_0040cf40                   ; 00433c88
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf40()
    MOV AH,byte ptr [EDI]               ; 00433c8d
    ADD ESP,0x8                         ; 00433c8f
    TEST AH,AH                          ; 00433c92
    JNZ 0x00433c9a                      ; 00433c94
        ;   XREF to: 00433c9a (CONDITIONAL_JUMP)  ; LAB_00433c9a
    POP EDI                             ; 00433c96
    POP ESI                             ; 00433c97
    POP EBX                             ; 00433c98
    RET                                 ; 00433c99
    PUSH EDI                            ; 00433c9a
        ;   Label: LAB_00433c9a
    PUSH EBX                            ; 00433c9b
    CALL FUN_0040cf80                   ; 00433c9c
        ;   XREF to: 0040cf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf80()
    ADD ESP,0x8                         ; 00433ca1
    PUSH ESI                            ; 00433ca4
    CALL FUN_00524770                   ; 00433ca5
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    ADD ESP,0x4                         ; 00433caa
    PUSH EAX                            ; 00433cad
    PUSH EBX                            ; 00433cae
    CALL FUN_0040cf80                   ; 00433caf
        ;   XREF to: 0040cf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf80()
    ADD ESP,0x8                         ; 00433cb4
    SUB ESP,0x4                         ; 00433cb7
    MOV EAX,dword ptr [ESI + 0x8]       ; 00433cba
    MOV dword ptr [ESP],EAX             ; 00433cbd
    PUSH EBX                            ; 00433cc0
    CALL FUN_0040cf40                   ; 00433cc1
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf40()
    ADD ESP,0x8                         ; 00433cc6
    POP EDI                             ; 00433cc9
    POP ESI                             ; 00433cca
    POP EBX                             ; 00433ccb
    RET                                 ; 00433ccc

