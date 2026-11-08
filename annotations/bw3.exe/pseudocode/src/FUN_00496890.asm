; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00496890(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005df820
;
; Called Functions:
;   FUN_00408770
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00496890
        ;   Label: FUN_00496890
    MOV EBX,dword ptr [ESP + 0x8]       ; 00496891
    TEST byte ptr [ESP + 0xc],0x4       ; 00496895
    JNZ 0x004968b6                      ; 0049689a
        ;   XREF to: 004968b6 (CONDITIONAL_JUMP)  ; LAB_004968b6
    PUSH 0x1                            ; 0049689c
    PUSH EBX                            ; 0049689e
    CALL FUN_00408770                   ; 0049689f
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 004968a4
    MOV DL,byte ptr [ESP + 0xc]         ; 004968a7
    MOV EBX,EAX                         ; 004968ab
    TEST DL,0x2                         ; 004968ad
    JNZ 0x004968d1                      ; 004968b0
        ;   XREF to: 004968d1 (CONDITIONAL_JUMP)  ; LAB_004968d1
    MOV EAX,EBX                         ; 004968b2
    POP EBX                             ; 004968b4
    RET                                 ; 004968b5
    PUSH 0x5df820                       ; 004968b6 | DAT_005df820
        ;   Label: LAB_004968b6
    PUSH EBX                            ; 004968bb
    CALL FUN_005a308f                   ; 004968bc
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 004968c1
    PUSH EAX                            ; 004968c4
    CALL FUN_005a30b6                   ; 004968c5
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 004968ca
    MOV EAX,EBX                         ; 004968cd
    POP EBX                             ; 004968cf
    RET                                 ; 004968d0
    PUSH EAX                            ; 004968d1
        ;   Label: LAB_004968d1
    CALL FUN_005a30c4                   ; 004968d2
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 004968d7
    MOV EAX,EBX                         ; 004968da
    POP EBX                             ; 004968dc
    RET                                 ; 004968dd

