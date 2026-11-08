; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0040f6d0(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005db990
;
; Called Functions:
;   FUN_00408770
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f6d0
        ;   Label: FUN_0040f6d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040f6d1
    TEST byte ptr [ESP + 0xc],0x4       ; 0040f6d5
    JNZ 0x0040f6f6                      ; 0040f6da
        ;   XREF to: 0040f6f6 (CONDITIONAL_JUMP)  ; LAB_0040f6f6
    PUSH 0x1                            ; 0040f6dc
    PUSH EBX                            ; 0040f6de
    CALL FUN_00408770                   ; 0040f6df
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 0040f6e4
    MOV DL,byte ptr [ESP + 0xc]         ; 0040f6e7
    MOV EBX,EAX                         ; 0040f6eb
    TEST DL,0x2                         ; 0040f6ed
    JNZ 0x0040f711                      ; 0040f6f0
        ;   XREF to: 0040f711 (CONDITIONAL_JUMP)  ; LAB_0040f711
    MOV EAX,EBX                         ; 0040f6f2
    POP EBX                             ; 0040f6f4
    RET                                 ; 0040f6f5
    PUSH 0x5db990                       ; 0040f6f6 | DAT_005db990
        ;   Label: LAB_0040f6f6
    PUSH EBX                            ; 0040f6fb
    CALL FUN_005a308f                   ; 0040f6fc
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 0040f701
    PUSH EAX                            ; 0040f704
    CALL FUN_005a30b6                   ; 0040f705
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 0040f70a
    MOV EAX,EBX                         ; 0040f70d
    POP EBX                             ; 0040f70f
    RET                                 ; 0040f710
    PUSH EAX                            ; 0040f711
        ;   Label: LAB_0040f711
    CALL FUN_005a30c4                   ; 0040f712
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 0040f717
    MOV EAX,EBX                         ; 0040f71a
    POP EBX                             ; 0040f71c
    RET                                 ; 0040f71d

