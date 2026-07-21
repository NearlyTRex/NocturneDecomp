; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_3d_c_renderPolygonFogTexturedDepthWriteOp44_FUN_00407410(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01c00c7c
;   undefined4 DAT_01c03948
;   undefined4 DAT_01c039a0
;   undefined4 DAT_01c039a4
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   FUN_00432cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00407410
        ;   Label: engine_3d.c_renderPolygonFogTexturedDepthWriteOp44_FUN_00407410
    PUSH ESI                            ; 00407411
    PUSH EBP                            ; 00407412
    MOV EBX,dword ptr [ESP + 0x10]      ; 00407413
    LEA ESI,[EBX + 0x18]                ; 00407417
    LEA EAX,[EBX + 0x8]                 ; 0040741a
    PUSH EAX                            ; 0040741d
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 0040741e
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00404610()
    ADD ESP,0x4                         ; 00407423
    TEST EAX,EAX                        ; 00407426
    JZ 0x0040746b                       ; 00407428
        ;   XREF to: 0040746b (CONDITIONAL_JUMP)  ; LAB_0040746b
    CMP dword ptr [0x01c03948],0x0      ; 0040742a | DAT_01c03948
    JNZ 0x00407486                      ; 00407431
        ;   XREF to: 00407486 (CONDITIONAL_JUMP)  ; LAB_00407486
    CMP dword ptr [0x005b7624],0x20     ; 00407433 | DAT_005b7624
    JNZ 0x0040747a                      ; 0040743a
        ;   XREF to: 0040747a (CONDITIONAL_JUMP)  ; LAB_0040747a
    MOV dword ptr [0x01c00c7c],0x5300ec ; 0040743c | DAT_01c00c7c | LAB_005300ec
    PUSH EDI                            ; 00407446
        ;   Label: LAB_00407446
    MOV EDI,0x85                        ; 00407447
    PUSH ESI                            ; 0040744c
    MOV EAX,dword ptr [EBX + 0x4]       ; 0040744d
    MOV EBP,0x1                         ; 00407450
    PUSH EAX                            ; 00407455
    MOV dword ptr [0x01c039a0],EDI      ; 00407456 | DAT_01c039a0
    MOV dword ptr [0x01c039a4],EBP      ; 0040745c | DAT_01c039a4
    CALL FUN_00432cd0                   ; 00407462
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00432cd0()
    ADD ESP,0x8                         ; 00407467
    POP EDI                             ; 0040746a
    MOV EAX,dword ptr [EBX + 0x4]       ; 0040746b
        ;   Label: LAB_0040746b
    ADD EBX,0x18                        ; 0040746e
    SHL EAX,0x2                         ; 00407471
    ADD EAX,EBX                         ; 00407474
    POP EBP                             ; 00407476
    POP ESI                             ; 00407477
    POP EBX                             ; 00407478
    RET                                 ; 00407479
    MOV dword ptr [0x01c00c7c],0x530322 ; 0040747a | DAT_01c00c7c | LAB_00530322
        ;   Label: LAB_0040747a
    JMP 0x00407446                      ; 00407484
        ;   XREF to: 00407446 (UNCONDITIONAL_JUMP)  ; LAB_00407446
    CMP dword ptr [0x005b7624],0x20     ; 00407486 | DAT_005b7624
        ;   Label: LAB_00407486
    JNZ 0x0040749b                      ; 0040748d
        ;   XREF to: 0040749b (CONDITIONAL_JUMP)  ; LAB_0040749b
    MOV dword ptr [0x01c00c7c],0x52f031 ; 0040748f | DAT_01c00c7c | LAB_0052f031
    JMP 0x00407446                      ; 00407499
        ;   XREF to: 00407446 (UNCONDITIONAL_JUMP)  ; LAB_00407446
    MOV dword ptr [0x01c00c7c],0x52f823 ; 0040749b | DAT_01c00c7c | LAB_0052f823
        ;   Label: LAB_0040749b
    JMP 0x00407446                      ; 004074a5
        ;   XREF to: 00407446 (UNCONDITIONAL_JUMP)  ; LAB_00407446

