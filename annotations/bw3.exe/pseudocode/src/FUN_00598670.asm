; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00598670(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e79c0
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

    PUSH EBX                            ; 00598670
        ;   Label: FUN_00598670
    MOV EBX,dword ptr [ESP + 0x8]       ; 00598671
    TEST byte ptr [ESP + 0xc],0x4       ; 00598675
    JNZ 0x005986cd                      ; 0059867a
        ;   XREF to: 005986cd (CONDITIONAL_JUMP)  ; LAB_005986cd
    PUSH 0x0                            ; 0059867c
    ADD EBX,0x385c                      ; 0059867e
    PUSH EBX                            ; 00598684
    CALL FUN_00410370                   ; 00598685
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined FUN_00410370()
    ADD ESP,0x8                         ; 0059868a
    PUSH 0x0                            ; 0059868d
    SUB EAX,0x954                       ; 0059868f
    PUSH EAX                            ; 00598694
    CALL FUN_0043f900                   ; 00598695
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f900()
    ADD ESP,0x8                         ; 0059869a
    PUSH 0x0                            ; 0059869d
    SUB EAX,0x2db0                      ; 0059869f
    PUSH EAX                            ; 005986a4
    CALL FUN_0054bf80                   ; 005986a5
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0054bf80()
    ADD ESP,0x8                         ; 005986aa
    PUSH 0x1                            ; 005986ad
    LEA EBX,[EAX + 0xfffffea8]          ; 005986af
    PUSH EBX                            ; 005986b5
    CALL FUN_00408770                   ; 005986b6
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 005986bb
    MOV DL,byte ptr [ESP + 0xc]         ; 005986be
    MOV EBX,EAX                         ; 005986c2
    TEST DL,0x2                         ; 005986c4
    JNZ 0x005986e8                      ; 005986c7
        ;   XREF to: 005986e8 (CONDITIONAL_JUMP)  ; LAB_005986e8
    MOV EAX,EBX                         ; 005986c9
    POP EBX                             ; 005986cb
    RET                                 ; 005986cc
    PUSH 0x5e79c0                       ; 005986cd | DAT_005e79c0
        ;   Label: LAB_005986cd
    PUSH EBX                            ; 005986d2
    CALL FUN_005a308f                   ; 005986d3
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 005986d8
    PUSH EAX                            ; 005986db
    CALL FUN_005a30b6                   ; 005986dc
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 005986e1
    MOV EAX,EBX                         ; 005986e4
    POP EBX                             ; 005986e6
    RET                                 ; 005986e7
    PUSH EAX                            ; 005986e8
        ;   Label: LAB_005986e8
    CALL FUN_005a30c4                   ; 005986e9
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 005986ee
    MOV EAX,EBX                         ; 005986f1
    POP EBX                             ; 005986f3
    RET                                 ; 005986f4

