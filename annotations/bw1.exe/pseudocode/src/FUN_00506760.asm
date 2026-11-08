; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00506760(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00603690
;
; Called Functions:
;   FUN_00408730
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00506760
        ;   Label: FUN_00506760
    MOV EBX,dword ptr [ESP + 0x8]       ; 00506761
    TEST byte ptr [ESP + 0xc],0x4       ; 00506765
    JNZ 0x00506786                      ; 0050676a
        ;   XREF to: 00506786 (CONDITIONAL_JUMP)  ; LAB_00506786
    PUSH 0x1                            ; 0050676c
    PUSH EBX                            ; 0050676e
    CALL FUN_00408730                   ; 0050676f
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 00506774
    MOV DL,byte ptr [ESP + 0xc]         ; 00506777
    MOV EBX,EAX                         ; 0050677b
    TEST DL,0x2                         ; 0050677d
    JNZ 0x005067a1                      ; 00506780
        ;   XREF to: 005067a1 (CONDITIONAL_JUMP)  ; LAB_005067a1
    MOV EAX,EBX                         ; 00506782
    POP EBX                             ; 00506784
    RET                                 ; 00506785
    PUSH 0x603690                       ; 00506786 | DAT_00603690
        ;   Label: LAB_00506786
    PUSH EBX                            ; 0050678b
    CALL FUN_005c030f                   ; 0050678c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 00506791
    PUSH EAX                            ; 00506794
    CALL FUN_005c0336                   ; 00506795
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 0050679a
    MOV EAX,EBX                         ; 0050679d
    POP EBX                             ; 0050679f
    RET                                 ; 005067a0
    PUSH EAX                            ; 005067a1
        ;   Label: LAB_005067a1
    CALL FUN_005c0344                   ; 005067a2
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 005067a7
    MOV EAX,EBX                         ; 005067aa
    POP EBX                             ; 005067ac
    RET                                 ; 005067ad

