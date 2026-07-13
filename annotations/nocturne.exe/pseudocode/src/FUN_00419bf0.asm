; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00419bf0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   FUN_00426440
;   FUN_00461090
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x005ae704]      ; 00419bf0 | DAT_005ae704
        ;   Label: FUN_00419bf0
    PUSH EDX                            ; 00419bf6 | DAT_01b4d738
    CALL FUN_00461090                   ; 00419bf7
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; undefined FUN_00461090()
    ADD ESP,0x4                         ; 00419bfc
    TEST EAX,EAX                        ; 00419bff
    JNZ 0x00419c04                      ; 00419c01
        ;   XREF to: 00419c04 (CONDITIONAL_JUMP)  ; LAB_00419c04
    RET                                 ; 00419c03
    MOV ECX,dword ptr [ESP + 0x4]       ; 00419c04
        ;   Label: LAB_00419c04
    PUSH ECX                            ; 00419c08
    CALL FUN_00426440                   ; 00419c09
        ;   XREF to: 00426440 (UNCONDITIONAL_CALL)  ; undefined FUN_00426440()
    ADD ESP,0x4                         ; 00419c0e
    RET                                 ; 00419c11

