; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFogTexturedDepthOp42_FUN_004072d0(SMRGLHeaderPrimitive *prim)
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

    PUSH EBX                            ; 004072d0
        ;   Label: engine_3d.c_renderPolygonFogTexturedDepthOp42_FUN_004072d0
    PUSH ESI                            ; 004072d1
    PUSH EBP                            ; 004072d2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004072d3
    LEA ESI,[EBX + 0x18]                ; 004072d7
    LEA EAX,[EBX + 0x8]                 ; 004072da
    PUSH EAX                            ; 004072dd
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 004072de
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00404610(SClipPlane * plane)
    ADD ESP,0x4                         ; 004072e3
    TEST EAX,EAX                        ; 004072e6
    JZ 0x0040732b                       ; 004072e8
        ;   XREF to: 0040732b (CONDITIONAL_JUMP)  ; LAB_0040732b
    CMP dword ptr [0x01c03948],0x0      ; 004072ea | DAT_01c03948
    JNZ 0x00407346                      ; 004072f1
        ;   XREF to: 00407346 (CONDITIONAL_JUMP)  ; LAB_00407346
    CMP dword ptr [0x005b7624],0x20     ; 004072f3 | DAT_005b7624
    JNZ 0x0040733a                      ; 004072fa
        ;   XREF to: 0040733a (CONDITIONAL_JUMP)  ; LAB_0040733a
    MOV dword ptr [0x01c00c7c],0x5300ec ; 004072fc | DAT_01c00c7c
    PUSH EDI                            ; 00407306
        ;   Label: LAB_00407306
    MOV EDI,0xc5                        ; 00407307
    PUSH ESI                            ; 0040730c
    MOV EAX,dword ptr [EBX + 0x4]       ; 0040730d
    MOV EBP,0x1                         ; 00407310
    PUSH EAX                            ; 00407315
    MOV dword ptr [0x01c039a0],EDI      ; 00407316 | DAT_01c039a0
    MOV dword ptr [0x01c039a4],EBP      ; 0040731c | DAT_01c039a4
    CALL engine_clipper.c_FUN_00432cd0  ; 00407322
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_FUN_00432cd0()
    ADD ESP,0x8                         ; 00407327
    POP EDI                             ; 0040732a
    MOV EAX,dword ptr [EBX + 0x4]       ; 0040732b
        ;   Label: LAB_0040732b
    ADD EBX,0x18                        ; 0040732e
    SHL EAX,0x2                         ; 00407331
    ADD EAX,EBX                         ; 00407334
    POP EBP                             ; 00407336
    POP ESI                             ; 00407337
    POP EBX                             ; 00407338
    RET                                 ; 00407339
    MOV dword ptr [0x01c00c7c],0x530322 ; 0040733a | DAT_01c00c7c
        ;   Label: LAB_0040733a
    JMP 0x00407306                      ; 00407344
        ;   XREF to: 00407306 (UNCONDITIONAL_JUMP)  ; LAB_00407306
    CMP dword ptr [0x005b7624],0x20     ; 00407346 | DAT_005b7624
        ;   Label: LAB_00407346
    JNZ 0x0040735b                      ; 0040734d
        ;   XREF to: 0040735b (CONDITIONAL_JUMP)  ; LAB_0040735b
    MOV dword ptr [0x01c00c7c],0x52f031 ; 0040734f | DAT_01c00c7c
    JMP 0x00407306                      ; 00407359
        ;   XREF to: 00407306 (UNCONDITIONAL_JUMP)  ; LAB_00407306
    MOV dword ptr [0x01c00c7c],0x52f823 ; 0040735b | DAT_01c00c7c
        ;   Label: LAB_0040735b
    JMP 0x00407306                      ; 00407365
        ;   XREF to: 00407306 (UNCONDITIONAL_JUMP)  ; LAB_00407306

