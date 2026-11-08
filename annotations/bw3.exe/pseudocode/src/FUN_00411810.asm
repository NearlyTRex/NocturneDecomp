; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00411810(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00556230
;   FUN_0057af40
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00411810
        ;   Label: FUN_00411810
    PUSH EDX                            ; 00411814
    CALL FUN_0057af40                   ; 00411815
        ;   XREF to: 0057af40 (UNCONDITIONAL_CALL)  ; undefined FUN_0057af40()
    ADD ESP,0x4                         ; 0041181a
    PUSH 0x5b6552                       ; 0041181d
    CALL FUN_00556230                   ; 00411822
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined FUN_00556230()
    ADD ESP,0x4                         ; 00411827
    PUSH 0x5b6560                       ; 0041182a
    CALL FUN_00556230                   ; 0041182f
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined FUN_00556230()
    ADD ESP,0x4                         ; 00411834
    PUSH 0x5b656d                       ; 00411837
    CALL FUN_00556230                   ; 0041183c
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined FUN_00556230()
    ADD ESP,0x4                         ; 00411841
    PUSH 0x5b657a                       ; 00411844
    CALL FUN_00556230                   ; 00411849
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined FUN_00556230()
    ADD ESP,0x4                         ; 0041184e
    PUSH 0x5b6587                       ; 00411851
    CALL FUN_00556230                   ; 00411856
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined FUN_00556230()
    ADD ESP,0x4                         ; 0041185b
    PUSH 0x5b6594                       ; 0041185e
    CALL FUN_00556230                   ; 00411863
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined FUN_00556230()
    ADD ESP,0x4                         ; 00411868
    PUSH 0x5b65a1                       ; 0041186b
    CALL FUN_00556230                   ; 00411870
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined FUN_00556230()
    ADD ESP,0x4                         ; 00411875
    PUSH 0x5b65ac                       ; 00411878
    CALL FUN_00556230                   ; 0041187d
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined FUN_00556230()
    ADD ESP,0x4                         ; 00411882
    RET                                 ; 00411885

