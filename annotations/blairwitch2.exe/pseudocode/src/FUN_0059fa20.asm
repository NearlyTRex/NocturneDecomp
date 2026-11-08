; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0059fa20(int param_1)
;
;
; XREF[3]:
;   FUN_005a1490 at 005a1495
;   FUN_005a4920 at 005a4925
;   FUN_005aa450 at 005aa455
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_0061ea5c
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_02668118
;
; Called Functions:
;   FUN_004254b0
;   FUN_0046b960
;   FUN_0059fae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059fa20
        ;   Label: FUN_0059fa20
    PUSH ESI                            ; 0059fa21
    MOV ESI,dword ptr [ESP + 0xc]       ; 0059fa22
    MOV EDX,dword ptr [ESI + 0xfc]      ; 0059fa26
    XOR EBX,EBX                         ; 0059fa2c
    TEST EDX,EDX                        ; 0059fa2e
    JNZ 0x0059fa3d                      ; 0059fa30
        ;   XREF to: 0059fa3d (CONDITIONAL_JUMP)  ; LAB_0059fa3d
    PUSH ESI                            ; 0059fa32
    CALL FUN_004254b0                   ; 0059fa33
        ;   XREF to: 004254b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004254b0()
    ADD ESP,0x4                         ; 0059fa38
    MOV EBX,EAX                         ; 0059fa3b
    MOV ECX,dword ptr [0x0060b280]      ; 0059fa3d | DAT_0060b280
        ;   Label: LAB_0059fa3d
    PUSH ECX                            ; 0059fa43 | DAT_01ba5c50
    CALL FUN_0046b960                   ; 0059fa44
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b960()
    ADD ESP,0x4                         ; 0059fa49
    TEST EAX,EAX                        ; 0059fa4c
    JNZ 0x0059fa5a                      ; 0059fa4e
        ;   XREF to: 0059fa5a (CONDITIONAL_JUMP)  ; LAB_0059fa5a
    MOV EAX,[0x0061ea5c]                ; 0059fa50 | DAT_0061ea5c
    CMP dword ptr [EAX],0x0             ; 0059fa55 | DAT_02668118
    JNZ 0x0059fa5f                      ; 0059fa58
        ;   XREF to: 0059fa5f (CONDITIONAL_JUMP)  ; LAB_0059fa5f
    MOV EAX,EBX                         ; 0059fa5a
        ;   Label: LAB_0059fa5a
    POP ESI                             ; 0059fa5c
    POP EBX                             ; 0059fa5d
    RET                                 ; 0059fa5e
    PUSH ESI                            ; 0059fa5f
        ;   Label: LAB_0059fa5f
    CALL FUN_0059fae0                   ; 0059fa60
        ;   XREF to: 0059fae0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059fae0()
    ADD ESP,0x4                         ; 0059fa65
    MOV EAX,EBX                         ; 0059fa68
    POP ESI                             ; 0059fa6a
    POP EBX                             ; 0059fa6b
    RET                                 ; 0059fa6c

