; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0059a970(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e7fe0
;
; Called Functions:
;   FUN_00408770
;   FUN_00410370
;   FUN_0043f900
;   FUN_004fa8c0
;   FUN_0050ad40
;   FUN_0054bf80
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059a970
        ;   Label: FUN_0059a970
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059a971
    TEST byte ptr [ESP + 0xc],0x4       ; 0059a975
    JNZ 0x0059aa11                      ; 0059a97a
        ;   XREF to: 0059aa11 (CONDITIONAL_JUMP)  ; LAB_0059aa11
    PUSH 0x0                            ; 0059a980
    ADD EBX,0x34174                     ; 0059a982
    PUSH EBX                            ; 0059a988
    CALL FUN_004fa8c0                   ; 0059a989
        ;   XREF to: 004fa8c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fa8c0()
    ADD ESP,0x8                         ; 0059a98e
    PUSH 0x0                            ; 0059a991
    SUB EAX,0x1d0                       ; 0059a993
    PUSH EAX                            ; 0059a998
    CALL FUN_0043f900                   ; 0059a999
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f900()
    ADD ESP,0x8                         ; 0059a99e
    PUSH 0x0                            ; 0059a9a1
    SUB EAX,0x138dc                     ; 0059a9a3
    PUSH EAX                            ; 0059a9a8
    CALL FUN_0050ad40                   ; 0059a9a9
        ;   XREF to: 0050ad40 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ad40()
    ADD ESP,0x8                         ; 0059a9ae
    PUSH 0x0                            ; 0059a9b1
    SUB EAX,0x138fc                     ; 0059a9b3
    PUSH EAX                            ; 0059a9b8
    CALL FUN_0050ad40                   ; 0059a9b9
        ;   XREF to: 0050ad40 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ad40()
    ADD ESP,0x8                         ; 0059a9be
    PUSH 0x0                            ; 0059a9c1
    SUB EAX,0x9570                      ; 0059a9c3
    PUSH EAX                            ; 0059a9c8
    CALL FUN_00410370                   ; 0059a9c9
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined FUN_00410370()
    ADD ESP,0x8                         ; 0059a9ce
    PUSH 0x0                            ; 0059a9d1
    SUB EAX,0x954                       ; 0059a9d3
    PUSH EAX                            ; 0059a9d8
    CALL FUN_0043f900                   ; 0059a9d9
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f900()
    ADD ESP,0x8                         ; 0059a9de
    PUSH 0x0                            ; 0059a9e1
    SUB EAX,0x2db0                      ; 0059a9e3
    PUSH EAX                            ; 0059a9e8
    CALL FUN_0054bf80                   ; 0059a9e9
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0054bf80()
    ADD ESP,0x8                         ; 0059a9ee
    PUSH 0x1                            ; 0059a9f1
    LEA EBX,[EAX + 0xfffffea8]          ; 0059a9f3
    PUSH EBX                            ; 0059a9f9
    CALL FUN_00408770                   ; 0059a9fa
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 0059a9ff
    MOV DL,byte ptr [ESP + 0xc]         ; 0059aa02
    MOV EBX,EAX                         ; 0059aa06
    TEST DL,0x2                         ; 0059aa08
    JNZ 0x0059aa2c                      ; 0059aa0b
        ;   XREF to: 0059aa2c (CONDITIONAL_JUMP)  ; LAB_0059aa2c
    MOV EAX,EBX                         ; 0059aa0d
    POP EBX                             ; 0059aa0f
    RET                                 ; 0059aa10
    PUSH 0x5e7fe0                       ; 0059aa11 | DAT_005e7fe0
        ;   Label: LAB_0059aa11
    PUSH EBX                            ; 0059aa16
    CALL FUN_005a308f                   ; 0059aa17
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 0059aa1c
    PUSH EAX                            ; 0059aa1f
    CALL FUN_005a30b6                   ; 0059aa20
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 0059aa25
    MOV EAX,EBX                         ; 0059aa28
    POP EBX                             ; 0059aa2a
    RET                                 ; 0059aa2b
    PUSH EAX                            ; 0059aa2c
        ;   Label: LAB_0059aa2c
    CALL FUN_005a30c4                   ; 0059aa2d
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 0059aa32
    MOV EAX,EBX                         ; 0059aa35
    POP EBX                             ; 0059aa37
    RET                                 ; 0059aa38

