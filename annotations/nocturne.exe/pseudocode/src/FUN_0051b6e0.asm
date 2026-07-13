; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0051b6e0(int param_1,byte param_2)
;
;
; XREF[37]:
;   FUN_0040fcf0 at 0040fd59
;   FUN_004132c0 at 00413329
;   FUN_00414c60 at 00414cc9
;   FUN_00415250 at 004152b9
;   FUN_00415a30 at 00415aa9
;   FUN_0041a400 at 0041a479
;   FUN_00420f20 at 00420f89
;   FUN_00423d90 at 00423e09
;   FUN_0042b5d0 at 0042b639
;   FUN_0043c6f0 at 0043c759
;   ... and 27 more
;
; Referenced Globals:
;   undefined1* PTR_FUN_005a1ed4 = 0051b6e0
;   undefined4 DAT_005a1f00
;
; Called Functions:
;   FUN_0043f9a0
;   FUN_004e1150
;   FUN_0051b7d0
;   FUN_0056445f
;   FUN_00564486
;   FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b6e0
        ;   Label: FUN_0051b6e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0051b6e1
    TEST byte ptr [ESP + 0xc],0x4       ; 0051b6e5
    JNZ 0x0051b727                      ; 0051b6ea
        ;   XREF to: 0051b727 (CONDITIONAL_JUMP)  ; LAB_0051b727
    PUSH EBX                            ; 0051b6ec
    MOV dword ptr [EBX + 0x50],0x5a1ed4 ; 0051b6ed | PTR_FUN_005a1ed4
    CALL FUN_0051b7d0                   ; 0051b6f4
        ;   XREF to: 0051b7d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b7d0()
    ADD ESP,0x4                         ; 0051b6f9
    PUSH 0x0                            ; 0051b6fc
    ADD EBX,0x58                        ; 0051b6fe
    PUSH EBX                            ; 0051b701
    CALL FUN_0043f9a0                   ; 0051b702
        ;   XREF to: 0043f9a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f9a0()
    ADD ESP,0x8                         ; 0051b707
    PUSH 0x1                            ; 0051b70a
    LEA EBX,[EAX + -0x58]               ; 0051b70c
    PUSH EBX                            ; 0051b70f
    CALL FUN_004e1150                   ; 0051b710
        ;   XREF to: 004e1150 (UNCONDITIONAL_CALL)  ; undefined FUN_004e1150()
    ADD ESP,0x8                         ; 0051b715
    MOV DL,byte ptr [ESP + 0xc]         ; 0051b718
    MOV EBX,EAX                         ; 0051b71c
    TEST DL,0x2                         ; 0051b71e
    JNZ 0x0051b742                      ; 0051b721
        ;   XREF to: 0051b742 (CONDITIONAL_JUMP)  ; LAB_0051b742
    MOV EAX,EBX                         ; 0051b723
    POP EBX                             ; 0051b725
    RET                                 ; 0051b726
    PUSH 0x5a1f00                       ; 0051b727 | DAT_005a1f00
        ;   Label: LAB_0051b727
    PUSH EBX                            ; 0051b72c
    CALL FUN_0056445f                   ; 0051b72d
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 0051b732
    PUSH EAX                            ; 0051b735
    CALL FUN_00564486                   ; 0051b736
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 0051b73b
    MOV EAX,EBX                         ; 0051b73e
    POP EBX                             ; 0051b740
    RET                                 ; 0051b741
    PUSH EAX                            ; 0051b742
        ;   Label: LAB_0051b742
    CALL FUN_00564494                   ; 0051b743
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 0051b748
    MOV EAX,EBX                         ; 0051b74b
    POP EBX                             ; 0051b74d
    RET                                 ; 0051b74e

