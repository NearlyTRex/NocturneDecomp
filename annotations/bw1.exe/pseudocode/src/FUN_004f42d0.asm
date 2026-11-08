; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004f42d0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00602940
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

    PUSH EBX                            ; 004f42d0
        ;   Label: FUN_004f42d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f42d1
    TEST byte ptr [ESP + 0xc],0x4       ; 004f42d5
    JNZ 0x004f432d                      ; 004f42da
        ;   XREF to: 004f432d (CONDITIONAL_JUMP)  ; LAB_004f432d
    PUSH 0x0                            ; 004f42dc
    ADD EBX,0x35dc                      ; 004f42de
    PUSH EBX                            ; 004f42e4
    CALL FUN_0040ee30                   ; 004f42e5
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ee30()
    ADD ESP,0x8                         ; 004f42ea
    PUSH 0x0                            ; 004f42ed
    SUB EAX,0x93c                       ; 004f42ef
    PUSH EAX                            ; 004f42f4
    CALL FUN_00441ca0                   ; 004f42f5
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ca0()
    ADD ESP,0x8                         ; 004f42fa
    PUSH 0x0                            ; 004f42fd
    SUB EAX,0x2b48                      ; 004f42ff
    PUSH EAX                            ; 004f4304
    CALL FUN_005673f0                   ; 004f4305
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005673f0()
    ADD ESP,0x8                         ; 004f430a
    PUSH 0x1                            ; 004f430d
    LEA EBX,[EAX + 0xfffffea8]          ; 004f430f
    PUSH EBX                            ; 004f4315
    CALL FUN_00408730                   ; 004f4316
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 004f431b
    MOV DL,byte ptr [ESP + 0xc]         ; 004f431e
    MOV EBX,EAX                         ; 004f4322
    TEST DL,0x2                         ; 004f4324
    JNZ 0x004f4348                      ; 004f4327
        ;   XREF to: 004f4348 (CONDITIONAL_JUMP)  ; LAB_004f4348
    MOV EAX,EBX                         ; 004f4329
    POP EBX                             ; 004f432b
    RET                                 ; 004f432c
    PUSH 0x602940                       ; 004f432d | DAT_00602940
        ;   Label: LAB_004f432d
    PUSH EBX                            ; 004f4332
    CALL FUN_005c030f                   ; 004f4333
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 004f4338
    PUSH EAX                            ; 004f433b
    CALL FUN_005c0336                   ; 004f433c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 004f4341
    MOV EAX,EBX                         ; 004f4344
    POP EBX                             ; 004f4346
    RET                                 ; 004f4347
    PUSH EAX                            ; 004f4348
        ;   Label: LAB_004f4348
    CALL FUN_005c0344                   ; 004f4349
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 004f434e
    MOV EAX,EBX                         ; 004f4351
    POP EBX                             ; 004f4353
    RET                                 ; 004f4354

