; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderDecalPoly_FUN_0046a270(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLPrimitivePoly * Stack[0x8]:4   poly
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_water.cpp_CWater_render_FUN_005862e0 at 00586908
;
; Referenced Globals:
;   undefined4 DAT_01ba5c84
;   undefined4 DAT_01ba5c88
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403970
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046a270
        ;   Label: engine_drender.cpp_CDemonRenderer_renderDecalPoly_FUN_0046a270
    PUSH EBP                            ; 0046a271
    SUB ESP,0x4                         ; 0046a272
    MOV EBX,dword ptr [ESP + 0x10]      ; 0046a275
    CMP dword ptr [EBX + 0xc],0x0       ; 0046a279
    JNZ 0x0046a301                      ; 0046a27d
        ;   XREF to: 0046a301 (CONDITIONAL_JUMP)  ; LAB_0046a301
    PUSH EDI                            ; 0046a283
        ;   Label: LAB_0046a283
    PUSH ESI                            ; 0046a284
    MOV ECX,dword ptr [EBX + 0x4]       ; 0046a285
    TEST ECX,ECX                        ; 0046a288
    JZ 0x0046a31a                       ; 0046a28a
        ;   XREF to: 0046a31a (CONDITIONAL_JUMP)  ; LAB_0046a31a
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0046a290
    MOV EDI,dword ptr [EDX + 0x4]       ; 0046a294
    XOR EAX,EAX                         ; 0046a297
    TEST EDI,EDI                        ; 0046a299
    JLE 0x0046a2c0                      ; 0046a29b
        ;   XREF to: 0046a2c0 (CONDITIONAL_JUMP)  ; LAB_0046a2c0
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0046a29d
    XOR EDX,EDX                         ; 0046a2a1
    MOV ESI,dword ptr [ECX + 0x18]      ; 0046a2a3
        ;   Label: LAB_0046a2a3
    MOV dword ptr [EDX + 0x1ba5c84],ESI ; 0046a2a6 | DAT_01ba5c84 | DAT_01ba5c88
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0046a2ac
    ADD EDX,0x4                         ; 0046a2b0
    INC EAX                             ; 0046a2b3
    MOV EBP,dword ptr [ESI + 0x4]       ; 0046a2b4
    ADD ECX,0xc                         ; 0046a2b7
    CMP EAX,EBP                         ; 0046a2ba
    JL 0x0046a2a3                       ; 0046a2bc
        ;   XREF to: 0046a2a3 (CONDITIONAL_JUMP)  ; LAB_0046a2a3
    MOV EAX,EAX                         ; 0046a2be
    CMP dword ptr [EBX + 0x4],0x0       ; 0046a2c0
        ;   Label: LAB_0046a2c0
    JZ 0x0046a373                       ; 0046a2c4
        ;   XREF to: 0046a373 (CONDITIONAL_JUMP)  ; LAB_0046a373
    XOR EBP,EBP                         ; 0046a2ca
    MOV EDI,0x46e936                    ; 0046a2cc
    MOV dword ptr [0x01c38b54],EBP      ; 0046a2d1 | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EBP      ; 0046a2d7 | DAT_01c38b58
    MOV dword ptr [0x01c35e6c],EDI      ; 0046a2dd | DAT_01c35e6c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046a2e3
        ;   Label: LAB_0046a2e3
    PUSH 0x1ba5c84                      ; 0046a2e7 | DAT_01ba5c84
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046a2ec
    PUSH EDX                            ; 0046a2ef
    PUSH EBX                            ; 0046a2f0
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590 ; 0046a2f1
        ;   XREF to: 00469590 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0046a2f6
    POP ESI                             ; 0046a2f9
    POP EDI                             ; 0046a2fa
    ADD ESP,0x4                         ; 0046a2fb
        ;   Label: LAB_0046a2fb
    POP EBP                             ; 0046a2fe
    POP EBX                             ; 0046a2ff
    RET                                 ; 0046a300
    MOV EAX,dword ptr [ESP + 0x14]      ; 0046a301
        ;   Label: LAB_0046a301
    ADD EAX,0x8                         ; 0046a305
    PUSH EAX                            ; 0046a308
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 0046a309
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403970()
    ADD ESP,0x4                         ; 0046a30e
    TEST EAX,EAX                        ; 0046a311
    JZ 0x0046a2fb                       ; 0046a313
        ;   XREF to: 0046a2fb (CONDITIONAL_JUMP)  ; LAB_0046a2fb
    JMP 0x0046a283                      ; 0046a315
        ;   XREF to: 0046a283 (UNCONDITIONAL_JUMP)  ; LAB_0046a283
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046a31a
        ;   Label: LAB_0046a31a
    CMP dword ptr [EAX + 0x4],0x0       ; 0046a31e
    JLE 0x0046a2c0                      ; 0046a322
        ;   XREF to: 0046a2c0 (CONDITIONAL_JUMP)  ; LAB_0046a2c0
    XOR EDX,EDX                         ; 0046a324
    MOV EDI,dword ptr [EBX + 0x20]      ; 0046a326
        ;   Label: LAB_0046a326
    MOV ESI,dword ptr [EAX + 0x18]      ; 0046a329
    TEST EDI,EDI                        ; 0046a32c
    JZ 0x0046a34e                       ; 0046a32e
        ;   XREF to: 0046a34e (CONDITIONAL_JUMP)  ; LAB_0046a34e
    MOV dword ptr [EDX + 0x1ba5c84],ESI ; 0046a330 | DAT_01ba5c84 | DAT_01ba5c88
        ;   Label: LAB_0046a330
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0046a336
    ADD EAX,0xc                         ; 0046a33a
    INC ECX                             ; 0046a33d
    MOV EBP,dword ptr [ESI + 0x4]       ; 0046a33e
    ADD EDX,0x4                         ; 0046a341
    CMP ECX,EBP                         ; 0046a344
    JGE 0x0046a2c0                      ; 0046a346
        ;   XREF to: 0046a2c0 (CONDITIONAL_JUMP)  ; LAB_0046a2c0
    JMP 0x0046a326                      ; 0046a34c
        ;   XREF to: 0046a326 (UNCONDITIONAL_JUMP)  ; LAB_0046a326
    IMUL EDI,ESI,0x30                   ; 0046a34e
        ;   Label: LAB_0046a34e
    MOV dword ptr [ESP + 0x8],EDI       ; 0046a351
    MOV EBP,dword ptr [ESP + 0x8]       ; 0046a355
    MOV EDI,dword ptr [EBX]             ; 0046a359
    ADD EBP,EDI                         ; 0046a35b
    MOV EDI,dword ptr [EAX + 0x1c]      ; 0046a35d
    MOV dword ptr [EBP + 0x18],EDI      ; 0046a360
    MOV EDI,dword ptr [ESP + 0x8]       ; 0046a363
    MOV EBP,dword ptr [EBX]             ; 0046a367
    ADD EBP,EDI                         ; 0046a369
    MOV EDI,dword ptr [EAX + 0x20]      ; 0046a36b
    MOV dword ptr [EBP + 0x1c],EDI      ; 0046a36e
    JMP 0x0046a330                      ; 0046a371
        ;   XREF to: 0046a330 (UNCONDITIONAL_JUMP)  ; LAB_0046a330
    MOV ECX,0x41                        ; 0046a373
        ;   Label: LAB_0046a373
    MOV ESI,0x6                         ; 0046a378
    MOV EDX,0x46f89d                    ; 0046a37d
    MOV dword ptr [0x01c38b54],ECX      ; 0046a382 | DAT_01c38b54
    MOV dword ptr [0x01c38b58],ESI      ; 0046a388 | DAT_01c38b58
    MOV dword ptr [0x01c35e6c],EDX      ; 0046a38e | DAT_01c35e6c
    JMP 0x0046a2e3                      ; 0046a394
        ;   XREF to: 0046a2e3 (UNCONDITIONAL_JUMP)  ; LAB_0046a2e3

