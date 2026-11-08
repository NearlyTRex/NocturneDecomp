; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004e4270(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e2710
;
; Called Functions:
;   FUN_00408770
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e4270
        ;   Label: FUN_004e4270
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e4271
    TEST byte ptr [ESP + 0xc],0x4       ; 004e4275
    JNZ 0x004e4296                      ; 004e427a
        ;   XREF to: 004e4296 (CONDITIONAL_JUMP)  ; LAB_004e4296
    PUSH 0x1                            ; 004e427c
    PUSH EBX                            ; 004e427e
    CALL FUN_00408770                   ; 004e427f
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 004e4284
    MOV DL,byte ptr [ESP + 0xc]         ; 004e4287
    MOV EBX,EAX                         ; 004e428b
    TEST DL,0x2                         ; 004e428d
    JNZ 0x004e42b1                      ; 004e4290
        ;   XREF to: 004e42b1 (CONDITIONAL_JUMP)  ; LAB_004e42b1
    MOV EAX,EBX                         ; 004e4292
    POP EBX                             ; 004e4294
    RET                                 ; 004e4295
    PUSH 0x5e2710                       ; 004e4296 | DAT_005e2710
        ;   Label: LAB_004e4296
    PUSH EBX                            ; 004e429b
    CALL FUN_005a308f                   ; 004e429c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 004e42a1
    PUSH EAX                            ; 004e42a4
    CALL FUN_005a30b6                   ; 004e42a5
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 004e42aa
    MOV EAX,EBX                         ; 004e42ad
    POP EBX                             ; 004e42af
    RET                                 ; 004e42b0
    PUSH EAX                            ; 004e42b1
        ;   Label: LAB_004e42b1
    CALL FUN_005a30c4                   ; 004e42b2
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 004e42b7
    MOV EAX,EBX                         ; 004e42ba
    POP EBX                             ; 004e42bc
    RET                                 ; 004e42bd

