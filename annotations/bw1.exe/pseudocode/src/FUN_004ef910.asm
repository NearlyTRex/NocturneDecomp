; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004ef910(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_006022c0
;
; Called Functions:
;   FUN_00408730
;   FUN_0040ee30
;   FUN_00441ca0
;   FUN_00533060
;   FUN_005673f0
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ef910
        ;   Label: FUN_004ef910
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ef911
    TEST byte ptr [ESP + 0xc],0x4       ; 004ef915
    JNZ 0x004ef97d                      ; 004ef91a
        ;   XREF to: 004ef97d (CONDITIONAL_JUMP)  ; LAB_004ef97d
    PUSH 0x0                            ; 004ef91c
    ADD EBX,0xc1d0                      ; 004ef91e
    PUSH EBX                            ; 004ef924
    CALL FUN_00533060                   ; 004ef925
        ;   XREF to: 00533060 (UNCONDITIONAL_CALL)  ; undefined FUN_00533060()
    ADD ESP,0x8                         ; 004ef92a
    PUSH 0x0                            ; 004ef92d
    SUB EAX,0x8bf4                      ; 004ef92f
    PUSH EAX                            ; 004ef934
    CALL FUN_0040ee30                   ; 004ef935
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ee30()
    ADD ESP,0x8                         ; 004ef93a
    PUSH 0x0                            ; 004ef93d
    SUB EAX,0x93c                       ; 004ef93f
    PUSH EAX                            ; 004ef944
    CALL FUN_00441ca0                   ; 004ef945
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ca0()
    ADD ESP,0x8                         ; 004ef94a
    PUSH 0x0                            ; 004ef94d
    SUB EAX,0x2b48                      ; 004ef94f
    PUSH EAX                            ; 004ef954
    CALL FUN_005673f0                   ; 004ef955
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005673f0()
    ADD ESP,0x8                         ; 004ef95a
    PUSH 0x1                            ; 004ef95d
    LEA EBX,[EAX + 0xfffffea8]          ; 004ef95f
    PUSH EBX                            ; 004ef965
    CALL FUN_00408730                   ; 004ef966
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 004ef96b
    MOV DL,byte ptr [ESP + 0xc]         ; 004ef96e
    MOV EBX,EAX                         ; 004ef972
    TEST DL,0x2                         ; 004ef974
    JNZ 0x004ef998                      ; 004ef977
        ;   XREF to: 004ef998 (CONDITIONAL_JUMP)  ; LAB_004ef998
    MOV EAX,EBX                         ; 004ef979
    POP EBX                             ; 004ef97b
    RET                                 ; 004ef97c
    PUSH 0x6022c0                       ; 004ef97d | DAT_006022c0
        ;   Label: LAB_004ef97d
    PUSH EBX                            ; 004ef982
    CALL FUN_005c030f                   ; 004ef983
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 004ef988
    PUSH EAX                            ; 004ef98b
    CALL FUN_005c0336                   ; 004ef98c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 004ef991
    MOV EAX,EBX                         ; 004ef994
    POP EBX                             ; 004ef996
    RET                                 ; 004ef997
    PUSH EAX                            ; 004ef998
        ;   Label: LAB_004ef998
    CALL FUN_005c0344                   ; 004ef999
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 004ef99e
    MOV EAX,EBX                         ; 004ef9a1
    POP EBX                             ; 004ef9a3
    RET                                 ; 004ef9a4

