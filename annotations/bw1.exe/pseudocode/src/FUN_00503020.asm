; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00503020(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_006033b0
;
; Called Functions:
;   FUN_00408730
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00503020
        ;   Label: FUN_00503020
    MOV EBX,dword ptr [ESP + 0x8]       ; 00503021
    TEST byte ptr [ESP + 0xc],0x4       ; 00503025
    JNZ 0x00503046                      ; 0050302a
        ;   XREF to: 00503046 (CONDITIONAL_JUMP)  ; LAB_00503046
    PUSH 0x1                            ; 0050302c
    PUSH EBX                            ; 0050302e
    CALL FUN_00408730                   ; 0050302f
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 00503034
    MOV DL,byte ptr [ESP + 0xc]         ; 00503037
    MOV EBX,EAX                         ; 0050303b
    TEST DL,0x2                         ; 0050303d
    JNZ 0x00503061                      ; 00503040
        ;   XREF to: 00503061 (CONDITIONAL_JUMP)  ; LAB_00503061
    MOV EAX,EBX                         ; 00503042
    POP EBX                             ; 00503044
    RET                                 ; 00503045
    PUSH 0x6033b0                       ; 00503046 | DAT_006033b0
        ;   Label: LAB_00503046
    PUSH EBX                            ; 0050304b
    CALL FUN_005c030f                   ; 0050304c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 00503051
    PUSH EAX                            ; 00503054
    CALL FUN_005c0336                   ; 00503055
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 0050305a
    MOV EAX,EBX                         ; 0050305d
    POP EBX                             ; 0050305f
    RET                                 ; 00503060
    PUSH EAX                            ; 00503061
        ;   Label: LAB_00503061
    CALL FUN_005c0344                   ; 00503062
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 00503067
    MOV EAX,EBX                         ; 0050306a
    POP EBX                             ; 0050306c
    RET                                 ; 0050306d

