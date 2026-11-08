; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004af630(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e0660
;
; Called Functions:
;   FUN_0057aed0
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004af630
        ;   Label: FUN_004af630
    MOV EBX,dword ptr [ESP + 0x8]       ; 004af631
    TEST byte ptr [ESP + 0xc],0x4       ; 004af635
    JNZ 0x004af656                      ; 004af63a
        ;   XREF to: 004af656 (CONDITIONAL_JUMP)  ; LAB_004af656
    PUSH 0x1                            ; 004af63c
    PUSH EBX                            ; 004af63e
    CALL FUN_0057aed0                   ; 004af63f
        ;   XREF to: 0057aed0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057aed0()
    ADD ESP,0x8                         ; 004af644
    MOV DL,byte ptr [ESP + 0xc]         ; 004af647
    MOV EBX,EAX                         ; 004af64b
    TEST DL,0x2                         ; 004af64d
    JNZ 0x004af671                      ; 004af650
        ;   XREF to: 004af671 (CONDITIONAL_JUMP)  ; LAB_004af671
    MOV EAX,EBX                         ; 004af652
    POP EBX                             ; 004af654
    RET                                 ; 004af655
    PUSH 0x5e0660                       ; 004af656 | DAT_005e0660
        ;   Label: LAB_004af656
    PUSH EBX                            ; 004af65b
    CALL FUN_005a308f                   ; 004af65c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 004af661
    PUSH EAX                            ; 004af664
    CALL FUN_005a30b6                   ; 004af665
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 004af66a
    MOV EAX,EBX                         ; 004af66d
    POP EBX                             ; 004af66f
    RET                                 ; 004af670
    PUSH EAX                            ; 004af671
        ;   Label: LAB_004af671
    CALL FUN_005a30c4                   ; 004af672
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 004af677
    MOV EAX,EBX                         ; 004af67a
    POP EBX                             ; 004af67c
    RET                                 ; 004af67d

