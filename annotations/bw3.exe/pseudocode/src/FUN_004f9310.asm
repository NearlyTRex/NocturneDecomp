; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004f9310(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e2b90
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

    PUSH EBX                            ; 004f9310
        ;   Label: FUN_004f9310
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f9311
    TEST byte ptr [ESP + 0xc],0x4       ; 004f9315
    JNZ 0x004f936d                      ; 004f931a
        ;   XREF to: 004f936d (CONDITIONAL_JUMP)  ; LAB_004f936d
    PUSH 0x0                            ; 004f931c
    ADD EBX,0x385c                      ; 004f931e
    PUSH EBX                            ; 004f9324
    CALL FUN_00410370                   ; 004f9325
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined FUN_00410370()
    ADD ESP,0x8                         ; 004f932a
    PUSH 0x0                            ; 004f932d
    SUB EAX,0x954                       ; 004f932f
    PUSH EAX                            ; 004f9334
    CALL FUN_0043f900                   ; 004f9335
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f900()
    ADD ESP,0x8                         ; 004f933a
    PUSH 0x0                            ; 004f933d
    SUB EAX,0x2db0                      ; 004f933f
    PUSH EAX                            ; 004f9344
    CALL FUN_0054bf80                   ; 004f9345
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0054bf80()
    ADD ESP,0x8                         ; 004f934a
    PUSH 0x1                            ; 004f934d
    LEA EBX,[EAX + 0xfffffea8]          ; 004f934f
    PUSH EBX                            ; 004f9355
    CALL FUN_00408770                   ; 004f9356
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 004f935b
    MOV DL,byte ptr [ESP + 0xc]         ; 004f935e
    MOV EBX,EAX                         ; 004f9362
    TEST DL,0x2                         ; 004f9364
    JNZ 0x004f9388                      ; 004f9367
        ;   XREF to: 004f9388 (CONDITIONAL_JUMP)  ; LAB_004f9388
    MOV EAX,EBX                         ; 004f9369
    POP EBX                             ; 004f936b
    RET                                 ; 004f936c
    PUSH 0x5e2b90                       ; 004f936d | DAT_005e2b90
        ;   Label: LAB_004f936d
    PUSH EBX                            ; 004f9372
    CALL FUN_005a308f                   ; 004f9373
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 004f9378
    PUSH EAX                            ; 004f937b
    CALL FUN_005a30b6                   ; 004f937c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 004f9381
    MOV EAX,EBX                         ; 004f9384
    POP EBX                             ; 004f9386
    RET                                 ; 004f9387
    PUSH EAX                            ; 004f9388
        ;   Label: LAB_004f9388
    CALL FUN_005a30c4                   ; 004f9389
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 004f938e
    MOV EAX,EBX                         ; 004f9391
    POP EBX                             ; 004f9393
    RET                                 ; 004f9394

