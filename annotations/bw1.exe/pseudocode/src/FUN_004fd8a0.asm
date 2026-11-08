; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004fd8a0(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00602ce0
;
; Called Functions:
;   FUN_00408730
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fd8a0
        ;   Label: FUN_004fd8a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004fd8a1
    TEST byte ptr [ESP + 0xc],0x4       ; 004fd8a5
    JNZ 0x004fd8c6                      ; 004fd8aa
        ;   XREF to: 004fd8c6 (CONDITIONAL_JUMP)  ; LAB_004fd8c6
    PUSH 0x1                            ; 004fd8ac
    PUSH EBX                            ; 004fd8ae
    CALL FUN_00408730                   ; 004fd8af
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 004fd8b4
    MOV DL,byte ptr [ESP + 0xc]         ; 004fd8b7
    MOV EBX,EAX                         ; 004fd8bb
    TEST DL,0x2                         ; 004fd8bd
    JNZ 0x004fd8e1                      ; 004fd8c0
        ;   XREF to: 004fd8e1 (CONDITIONAL_JUMP)  ; LAB_004fd8e1
    MOV EAX,EBX                         ; 004fd8c2
    POP EBX                             ; 004fd8c4
    RET                                 ; 004fd8c5
    PUSH 0x602ce0                       ; 004fd8c6 | DAT_00602ce0
        ;   Label: LAB_004fd8c6
    PUSH EBX                            ; 004fd8cb
    CALL FUN_005c030f                   ; 004fd8cc
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 004fd8d1
    PUSH EAX                            ; 004fd8d4
    CALL FUN_005c0336                   ; 004fd8d5
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 004fd8da
    MOV EAX,EBX                         ; 004fd8dd
    POP EBX                             ; 004fd8df
    RET                                 ; 004fd8e0
    PUSH EAX                            ; 004fd8e1
        ;   Label: LAB_004fd8e1
    CALL FUN_005c0344                   ; 004fd8e2
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 004fd8e7
    MOV EAX,EBX                         ; 004fd8ea
    POP EBX                             ; 004fd8ec
    RET                                 ; 004fd8ed

