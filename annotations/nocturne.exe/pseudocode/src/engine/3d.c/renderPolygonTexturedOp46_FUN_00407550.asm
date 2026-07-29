; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedOp46_FUN_00407550(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
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
;   engine_clipper.c_FUN_00432cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00407550
        ;   Label: engine_3d.c_renderPolygonTexturedOp46_FUN_00407550
    PUSH ESI                            ; 00407551
    PUSH EBP                            ; 00407552
    MOV EBX,dword ptr [ESP + 0x10]      ; 00407553
    LEA ESI,[EBX + 0x18]                ; 00407557
    LEA EAX,[EBX + 0x8]                 ; 0040755a
    PUSH EAX                            ; 0040755d
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 0040755e
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00404610(SClipPlane * plane)
    ADD ESP,0x4                         ; 00407563
    TEST EAX,EAX                        ; 00407566
    JZ 0x004075a8                       ; 00407568
        ;   XREF to: 004075a8 (CONDITIONAL_JUMP)  ; LAB_004075a8
    CMP dword ptr [0x01c03948],0x0      ; 0040756a | DAT_01c03948
    JNZ 0x004075c3                      ; 00407571
        ;   XREF to: 004075c3 (CONDITIONAL_JUMP)  ; LAB_004075c3
    CMP dword ptr [0x005b7624],0x20     ; 00407573 | DAT_005b7624
    JNZ 0x004075b7                      ; 0040757a
        ;   XREF to: 004075b7 (CONDITIONAL_JUMP)  ; LAB_004075b7
    MOV dword ptr [0x01c00c7c],0x5300ec ; 0040757c | DAT_01c00c7c
    PUSH EDI                            ; 00407586
        ;   Label: LAB_00407586
    MOV EDI,0x1                         ; 00407587
    PUSH ESI                            ; 0040758c
    MOV EAX,dword ptr [EBX + 0x4]       ; 0040758d
    XOR EBP,EBP                         ; 00407590
    PUSH EAX                            ; 00407592
    MOV dword ptr [0x01c039a0],EDI      ; 00407593 | DAT_01c039a0
    MOV dword ptr [0x01c039a4],EBP      ; 00407599 | DAT_01c039a4
    CALL engine_clipper.c_FUN_00432cd0  ; 0040759f
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_FUN_00432cd0()
    ADD ESP,0x8                         ; 004075a4
    POP EDI                             ; 004075a7
    MOV EAX,dword ptr [EBX + 0x4]       ; 004075a8
        ;   Label: LAB_004075a8
    ADD EBX,0x18                        ; 004075ab
    SHL EAX,0x2                         ; 004075ae
    ADD EAX,EBX                         ; 004075b1
    POP EBP                             ; 004075b3
    POP ESI                             ; 004075b4
    POP EBX                             ; 004075b5
    RET                                 ; 004075b6
    MOV dword ptr [0x01c00c7c],0x530322 ; 004075b7 | DAT_01c00c7c
        ;   Label: LAB_004075b7
    JMP 0x00407586                      ; 004075c1
        ;   XREF to: 00407586 (UNCONDITIONAL_JUMP)  ; LAB_00407586
    CMP dword ptr [0x005b7624],0x20     ; 004075c3 | DAT_005b7624
        ;   Label: LAB_004075c3
    JNZ 0x004075d8                      ; 004075ca
        ;   XREF to: 004075d8 (CONDITIONAL_JUMP)  ; LAB_004075d8
    MOV dword ptr [0x01c00c7c],0x52f031 ; 004075cc | DAT_01c00c7c
    JMP 0x00407586                      ; 004075d6
        ;   XREF to: 00407586 (UNCONDITIONAL_JUMP)  ; LAB_00407586
    MOV dword ptr [0x01c00c7c],0x52f823 ; 004075d8 | DAT_01c00c7c
        ;   Label: LAB_004075d8
    JMP 0x00407586                      ; 004075e2
        ;   XREF to: 00407586 (UNCONDITIONAL_JUMP)  ; LAB_00407586

