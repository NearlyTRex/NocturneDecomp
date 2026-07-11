; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00571630(void)
;
;
; XREF[1]:
;   FUN_005717d8 at 00571835
;
; Called Functions:
;   FUN_00571564
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571630
        ;   Label: FUN_00571630
    PUSH 0x4                            ; 00571631
    CALL FUN_00571564                   ; 00571633
        ;   XREF to: 00571564 (UNCONDITIONAL_CALL)  ; undefined FUN_00571564()
    ADD ESP,0x4                         ; 00571638
    PUSH 0x7                            ; 0057163b
    MOV EBX,EAX                         ; 0057163d
    CALL FUN_00571564                   ; 0057163f
        ;   XREF to: 00571564 (UNCONDITIONAL_CALL)  ; undefined FUN_00571564()
    ADD ESP,0x4                         ; 00571644
    CMP EBX,0x2                         ; 00571647
    JZ 0x00571651                       ; 0057164a
        ;   XREF to: 00571651 (CONDITIONAL_JUMP)  ; LAB_00571651
    CMP EBX,0x3                         ; 0057164c
    JNZ 0x0057165b                      ; 0057164f
        ;   XREF to: 0057165b (CONDITIONAL_JUMP)  ; LAB_0057165b
    CMP EAX,0x2                         ; 00571651
        ;   Label: LAB_00571651
    JZ 0x00571662                       ; 00571654
        ;   XREF to: 00571662 (CONDITIONAL_JUMP)  ; LAB_00571662
    CMP EAX,0x3                         ; 00571656
    JZ 0x00571662                       ; 00571659
        ;   XREF to: 00571662 (CONDITIONAL_JUMP)  ; LAB_00571662
    MOV EAX,0x1                         ; 0057165b
        ;   Label: LAB_0057165b
    POP EBX                             ; 00571660
    RET                                 ; 00571661
    XOR EAX,EAX                         ; 00571662
        ;   Label: LAB_00571662
    POP EBX                             ; 00571664
    RET                                 ; 00571665

