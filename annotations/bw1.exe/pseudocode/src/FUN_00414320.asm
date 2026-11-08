; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00414320(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fc2d0
;
; Called Functions:
;   FUN_00408730
;   FUN_0040ee30
;   FUN_00441ca0
;   FUN_005673f0
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414320
        ;   Label: FUN_00414320
    MOV EBX,dword ptr [ESP + 0x8]       ; 00414321
    TEST byte ptr [ESP + 0xc],0x4       ; 00414325
    JNZ 0x0041437d                      ; 0041432a
        ;   XREF to: 0041437d (CONDITIONAL_JUMP)  ; LAB_0041437d
    PUSH 0x0                            ; 0041432c
    ADD EBX,0x35dc                      ; 0041432e
    PUSH EBX                            ; 00414334
    CALL FUN_0040ee30                   ; 00414335
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ee30()
    ADD ESP,0x8                         ; 0041433a
    PUSH 0x0                            ; 0041433d
    SUB EAX,0x93c                       ; 0041433f
    PUSH EAX                            ; 00414344
    CALL FUN_00441ca0                   ; 00414345
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ca0()
    ADD ESP,0x8                         ; 0041434a
    PUSH 0x0                            ; 0041434d
    SUB EAX,0x2b48                      ; 0041434f
    PUSH EAX                            ; 00414354
    CALL FUN_005673f0                   ; 00414355
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005673f0()
    ADD ESP,0x8                         ; 0041435a
    PUSH 0x1                            ; 0041435d
    LEA EBX,[EAX + 0xfffffea8]          ; 0041435f
    PUSH EBX                            ; 00414365
    CALL FUN_00408730                   ; 00414366
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 0041436b
    MOV DL,byte ptr [ESP + 0xc]         ; 0041436e
    MOV EBX,EAX                         ; 00414372
    TEST DL,0x2                         ; 00414374
    JNZ 0x00414398                      ; 00414377
        ;   XREF to: 00414398 (CONDITIONAL_JUMP)  ; LAB_00414398
    MOV EAX,EBX                         ; 00414379
    POP EBX                             ; 0041437b
    RET                                 ; 0041437c
    PUSH 0x5fc2d0                       ; 0041437d | DAT_005fc2d0
        ;   Label: LAB_0041437d
    PUSH EBX                            ; 00414382
    CALL FUN_005c030f                   ; 00414383
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 00414388
    PUSH EAX                            ; 0041438b
    CALL FUN_005c0336                   ; 0041438c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 00414391
    MOV EAX,EBX                         ; 00414394
    POP EBX                             ; 00414396
    RET                                 ; 00414397
    PUSH EAX                            ; 00414398
        ;   Label: LAB_00414398
    CALL FUN_005c0344                   ; 00414399
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 0041439e
    MOV EAX,EBX                         ; 004143a1
    POP EBX                             ; 004143a3
    RET                                 ; 004143a4

