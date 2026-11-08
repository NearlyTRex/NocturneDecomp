; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004a7480(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e0050
;
; Called Functions:
;   FUN_00408770
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a7480
        ;   Label: FUN_004a7480
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a7481
    TEST byte ptr [ESP + 0xc],0x4       ; 004a7485
    JNZ 0x004a74bd                      ; 004a748a
        ;   XREF to: 004a74bd (CONDITIONAL_JUMP)  ; LAB_004a74bd
    PUSH 0x1                            ; 004a748c
    ADD EBX,0x340                       ; 004a748e
    PUSH EBX                            ; 004a7494
    CALL FUN_00408770                   ; 004a7495
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 004a749a
    PUSH 0x1                            ; 004a749d
    LEA EBX,[EAX + 0xfffffcc0]          ; 004a749f
    PUSH EBX                            ; 004a74a5
    CALL FUN_00408770                   ; 004a74a6
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 004a74ab
    MOV DL,byte ptr [ESP + 0xc]         ; 004a74ae
    MOV EBX,EAX                         ; 004a74b2
    TEST DL,0x2                         ; 004a74b4
    JNZ 0x004a74d8                      ; 004a74b7
        ;   XREF to: 004a74d8 (CONDITIONAL_JUMP)  ; LAB_004a74d8
    MOV EAX,EBX                         ; 004a74b9
    POP EBX                             ; 004a74bb
    RET                                 ; 004a74bc
    PUSH 0x5e0050                       ; 004a74bd | DAT_005e0050
        ;   Label: LAB_004a74bd
    PUSH EBX                            ; 004a74c2
    CALL FUN_005a308f                   ; 004a74c3
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 004a74c8
    PUSH EAX                            ; 004a74cb
    CALL FUN_005a30b6                   ; 004a74cc
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 004a74d1
    MOV EAX,EBX                         ; 004a74d4
    POP EBX                             ; 004a74d6
    RET                                 ; 004a74d7
    PUSH EAX                            ; 004a74d8
        ;   Label: LAB_004a74d8
    CALL FUN_005a30c4                   ; 004a74d9
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 004a74de
    MOV EAX,EBX                         ; 004a74e1
    POP EBX                             ; 004a74e3
    RET                                 ; 004a74e4

