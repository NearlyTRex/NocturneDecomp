; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004d6460(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e1e50
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

    PUSH EBX                            ; 004d6460
        ;   Label: FUN_004d6460
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d6461
    TEST byte ptr [ESP + 0xc],0x4       ; 004d6465
    JNZ 0x004d64bd                      ; 004d646a
        ;   XREF to: 004d64bd (CONDITIONAL_JUMP)  ; LAB_004d64bd
    PUSH 0x0                            ; 004d646c
    ADD EBX,0x385c                      ; 004d646e
    PUSH EBX                            ; 004d6474
    CALL FUN_00410370                   ; 004d6475
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined FUN_00410370()
    ADD ESP,0x8                         ; 004d647a
    PUSH 0x0                            ; 004d647d
    SUB EAX,0x954                       ; 004d647f
    PUSH EAX                            ; 004d6484
    CALL FUN_0043f900                   ; 004d6485
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f900()
    ADD ESP,0x8                         ; 004d648a
    PUSH 0x0                            ; 004d648d
    SUB EAX,0x2db0                      ; 004d648f
    PUSH EAX                            ; 004d6494
    CALL FUN_0054bf80                   ; 004d6495
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0054bf80()
    ADD ESP,0x8                         ; 004d649a
    PUSH 0x1                            ; 004d649d
    LEA EBX,[EAX + 0xfffffea8]          ; 004d649f
    PUSH EBX                            ; 004d64a5
    CALL FUN_00408770                   ; 004d64a6
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 004d64ab
    MOV DL,byte ptr [ESP + 0xc]         ; 004d64ae
    MOV EBX,EAX                         ; 004d64b2
    TEST DL,0x2                         ; 004d64b4
    JNZ 0x004d64d8                      ; 004d64b7
        ;   XREF to: 004d64d8 (CONDITIONAL_JUMP)  ; LAB_004d64d8
    MOV EAX,EBX                         ; 004d64b9
    POP EBX                             ; 004d64bb
    RET                                 ; 004d64bc
    PUSH 0x5e1e50                       ; 004d64bd | DAT_005e1e50
        ;   Label: LAB_004d64bd
    PUSH EBX                            ; 004d64c2
    CALL FUN_005a308f                   ; 004d64c3
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 004d64c8
    PUSH EAX                            ; 004d64cb
    CALL FUN_005a30b6                   ; 004d64cc
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 004d64d1
    MOV EAX,EBX                         ; 004d64d4
    POP EBX                             ; 004d64d6
    RET                                 ; 004d64d7
    PUSH EAX                            ; 004d64d8
        ;   Label: LAB_004d64d8
    CALL FUN_005a30c4                   ; 004d64d9
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 004d64de
    MOV EAX,EBX                         ; 004d64e1
    POP EBX                             ; 004d64e3
    RET                                 ; 004d64e4

