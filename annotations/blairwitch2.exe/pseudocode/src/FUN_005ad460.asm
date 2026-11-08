; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005ad460(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00600f64
;   undefined4 DAT_00601050
;
; Called Functions:
;   FUN_00408930
;   FUN_005a8100
;   FUN_005a8220
;   FUN_005b1c70
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ad460
        ;   Label: FUN_005ad460
    PUSH ESI                            ; 005ad461
    MOV EBX,dword ptr [ESP + 0xc]       ; 005ad462
    TEST byte ptr [ESP + 0x10],0x4      ; 005ad466
    JNZ 0x005ad4c3                      ; 005ad46b
        ;   XREF to: 005ad4c3 (CONDITIONAL_JUMP)  ; LAB_005ad4c3
    PUSH 0x0                            ; 005ad46d
    LEA ESI,[EBX + 0x154]               ; 005ad46f
    PUSH ESI                            ; 005ad475
    MOV dword ptr [EBX + 0x2b0],0x600f64 ; 005ad476 | DAT_00600f64
    CALL FUN_005a8100                   ; 005ad480
        ;   XREF to: 005a8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005a8100()
    ADD ESP,0x8                         ; 005ad485
    PUSH ESI                            ; 005ad488
    CALL FUN_005a8220                   ; 005ad489
        ;   XREF to: 005a8220 (UNCONDITIONAL_CALL)  ; undefined FUN_005a8220()
    ADD ESP,0x4                         ; 005ad48e
    PUSH 0x0                            ; 005ad491
    ADD EBX,0x4f0                       ; 005ad493
    PUSH EBX                            ; 005ad499
    CALL FUN_005b1c70                   ; 005ad49a
        ;   XREF to: 005b1c70 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1c70()
    ADD ESP,0x8                         ; 005ad49f
    PUSH 0x1                            ; 005ad4a2
    LEA EBX,[EAX + 0xfffffb10]          ; 005ad4a4
    PUSH EBX                            ; 005ad4aa
    CALL FUN_00408930                   ; 005ad4ab
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 005ad4b0
    MOV DL,byte ptr [ESP + 0x10]        ; 005ad4b3
    MOV EBX,EAX                         ; 005ad4b7
    TEST DL,0x2                         ; 005ad4b9
    JNZ 0x005ad4df                      ; 005ad4bc
        ;   XREF to: 005ad4df (CONDITIONAL_JUMP)  ; LAB_005ad4df
    MOV EAX,EBX                         ; 005ad4be
    POP ESI                             ; 005ad4c0
    POP EBX                             ; 005ad4c1
    RET                                 ; 005ad4c2
    PUSH 0x601050                       ; 005ad4c3 | DAT_00601050
        ;   Label: LAB_005ad4c3
    PUSH EBX                            ; 005ad4c8
    CALL FUN_005b7fa7                   ; 005ad4c9
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 005ad4ce
    PUSH EAX                            ; 005ad4d1
    CALL FUN_005b7fce                   ; 005ad4d2
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 005ad4d7
    MOV EAX,EBX                         ; 005ad4da
    POP ESI                             ; 005ad4dc
    POP EBX                             ; 005ad4dd
    RET                                 ; 005ad4de
    PUSH EAX                            ; 005ad4df
        ;   Label: LAB_005ad4df
    CALL FUN_005b7fdc                   ; 005ad4e0
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 005ad4e5
    MOV EAX,EBX                         ; 005ad4e8
    POP ESI                             ; 005ad4ea
    POP EBX                             ; 005ad4eb
    RET                                 ; 005ad4ec

