; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004446f0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005ddb40
;
; Called Functions:
;   FUN_00408770
;   FUN_00410370
;   FUN_0043f900
;   FUN_0054bf80
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004446f0
        ;   Label: FUN_004446f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004446f1
    TEST byte ptr [ESP + 0xc],0x4       ; 004446f5
    JNZ 0x0044474d                      ; 004446fa
        ;   XREF to: 0044474d (CONDITIONAL_JUMP)  ; LAB_0044474d
    PUSH 0x0                            ; 004446fc
    ADD EBX,0x385c                      ; 004446fe
    PUSH EBX                            ; 00444704
    CALL FUN_00410370                   ; 00444705
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined FUN_00410370()
    ADD ESP,0x8                         ; 0044470a
    PUSH 0x0                            ; 0044470d
    SUB EAX,0x954                       ; 0044470f
    PUSH EAX                            ; 00444714
    CALL FUN_0043f900                   ; 00444715
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f900()
    ADD ESP,0x8                         ; 0044471a
    PUSH 0x0                            ; 0044471d
    SUB EAX,0x2db0                      ; 0044471f
    PUSH EAX                            ; 00444724
    CALL FUN_0054bf80                   ; 00444725
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0054bf80()
    ADD ESP,0x8                         ; 0044472a
    PUSH 0x1                            ; 0044472d
    LEA EBX,[EAX + 0xfffffea8]          ; 0044472f
    PUSH EBX                            ; 00444735
    CALL FUN_00408770                   ; 00444736
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 0044473b
    MOV DL,byte ptr [ESP + 0xc]         ; 0044473e
    MOV EBX,EAX                         ; 00444742
    TEST DL,0x2                         ; 00444744
    JNZ 0x00444768                      ; 00444747
        ;   XREF to: 00444768 (CONDITIONAL_JUMP)  ; LAB_00444768
    MOV EAX,EBX                         ; 00444749
    POP EBX                             ; 0044474b
    RET                                 ; 0044474c
    PUSH 0x5ddb40                       ; 0044474d | DAT_005ddb40
        ;   Label: LAB_0044474d
    PUSH EBX                            ; 00444752
    CALL FUN_005a308f                   ; 00444753
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 00444758
    PUSH EAX                            ; 0044475b
    CALL FUN_005a30b6                   ; 0044475c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 00444761
    MOV EAX,EBX                         ; 00444764
    POP EBX                             ; 00444766
    RET                                 ; 00444767
    PUSH EAX                            ; 00444768
        ;   Label: LAB_00444768
    CALL FUN_005a30c4                   ; 00444769
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 0044476e
    MOV EAX,EBX                         ; 00444771
    POP EBX                             ; 00444773
    RET                                 ; 00444774

