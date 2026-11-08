; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004ea5a0(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00601cf0
;
; Called Functions:
;   FUN_00408730
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ea5a0
        ;   Label: FUN_004ea5a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ea5a1
    TEST byte ptr [ESP + 0xc],0x4       ; 004ea5a5
    JNZ 0x004ea5c6                      ; 004ea5aa
        ;   XREF to: 004ea5c6 (CONDITIONAL_JUMP)  ; LAB_004ea5c6
    PUSH 0x1                            ; 004ea5ac
    PUSH EBX                            ; 004ea5ae
    CALL FUN_00408730                   ; 004ea5af
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 004ea5b4
    MOV DL,byte ptr [ESP + 0xc]         ; 004ea5b7
    MOV EBX,EAX                         ; 004ea5bb
    TEST DL,0x2                         ; 004ea5bd
    JNZ 0x004ea5e1                      ; 004ea5c0
        ;   XREF to: 004ea5e1 (CONDITIONAL_JUMP)  ; LAB_004ea5e1
    MOV EAX,EBX                         ; 004ea5c2
    POP EBX                             ; 004ea5c4
    RET                                 ; 004ea5c5
    PUSH 0x601cf0                       ; 004ea5c6 | DAT_00601cf0
        ;   Label: LAB_004ea5c6
    PUSH EBX                            ; 004ea5cb
    CALL FUN_005c030f                   ; 004ea5cc
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 004ea5d1
    PUSH EAX                            ; 004ea5d4
    CALL FUN_005c0336                   ; 004ea5d5
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 004ea5da
    MOV EAX,EBX                         ; 004ea5dd
    POP EBX                             ; 004ea5df
    RET                                 ; 004ea5e0
    PUSH EAX                            ; 004ea5e1
        ;   Label: LAB_004ea5e1
    CALL FUN_005c0344                   ; 004ea5e2
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 004ea5e7
    MOV EAX,EBX                         ; 004ea5ea
    POP EBX                             ; 004ea5ec
    RET                                 ; 004ea5ed

