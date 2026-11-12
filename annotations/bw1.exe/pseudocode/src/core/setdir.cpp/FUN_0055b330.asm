; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_setdir_cpp_FUN_0055b330(CDemonSet *param_1)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_setdir.cpp_FUN_0055b220 at 0055b244
;
; Referenced Globals:
;   undefined4 DAT_0061255c
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01c4480c
;   undefined4 DAT_01c44810
;   undefined4 DAT_020b28f4
;   undefined4 DAT_020b28f8
;   undefined4 DAT_020b28f9
;   undefined4 DAT_020b29f4
;
; Called Functions:
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0054e3c0
;   engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_00483780
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0
;   engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_00483e40
;   engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00483530
;   engine_drender.cpp_FUN_004839b0
;   engine_drender.cpp_FUN_00483c10
;   engine_drender.cpp_popViewport_FUN_00483c40
;   engine_special.cpp_clearZBufferNative_FUN_0057dca4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055b330
        ;   Label: core_setdir.cpp_FUN_0055b330
    PUSH ESI                            ; 0055b331
    PUSH EDI                            ; 0055b332
    PUSH EBP                            ; 0055b333
    SUB ESP,0x14                        ; 0055b334
    MOV EDX,dword ptr [0x00612560]      ; 0055b337 | DAT_00612560
    PUSH EDX                            ; 0055b33d | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 0055b33e
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0055b343
    PUSH 0x0                            ; 0055b346
    MOV ECX,dword ptr [0x00612560]      ; 0055b348 | DAT_00612560
    PUSH ECX                            ; 0055b34e | DAT_01bc120c
    MOV dword ptr [ESP + 0x8],EAX       ; 0055b34f
    CALL engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_00483e40 ; 0055b353
        ;   XREF to: 00483e40 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_00483e40(CDemonRenderer * this_ptr, int value)
    ADD ESP,0x8                         ; 0055b358
    PUSH 0x30                           ; 0055b35b
    PUSH 0x40                           ; 0055b35d
    PUSH 0x0                            ; 0055b35f
    PUSH 0x0                            ; 0055b361
    MOV EBX,dword ptr [0x00612560]      ; 0055b363 | DAT_00612560
    PUSH EBX                            ; 0055b369 | DAT_01bc120c
    CALL engine_drender.cpp_FUN_00483c10 ; 0055b36a
        ;   XREF to: 00483c10 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_00483c10()
    ADD ESP,0x14                        ; 0055b36f
    MOV EAX,dword ptr [ESP + 0x28]      ; 0055b372
    MOV ESI,dword ptr [EAX]             ; 0055b376
    XOR EBP,EBP                         ; 0055b378
    TEST ESI,ESI                        ; 0055b37a
    JLE 0x0055b48d                      ; 0055b37c
        ;   XREF to: 0055b48d (CONDITIONAL_JUMP)  ; LAB_0055b48d
    ADD EAX,0x4                         ; 0055b382
    MOV dword ptr [ESP + 0x4],EAX       ; 0055b385
    MOV EAX,dword ptr [ESP + 0x28]      ; 0055b389
    ADD EAX,0x110                       ; 0055b38d
    MOV dword ptr [ESP + 0x8],EAX       ; 0055b392
    MOV EAX,dword ptr [ESP + 0x28]      ; 0055b396
    MOV EBX,0x20b28f4                   ; 0055b39a
    ADD EAX,0x104                       ; 0055b39f
    MOV dword ptr [ESP + 0xc],EBX       ; 0055b3a4
    MOV dword ptr [ESP + 0x10],EAX      ; 0055b3a8
    IMUL EBX,EBP,0x1a4                  ; 0055b3ac
        ;   Label: LAB_0055b3ac
    MOV EDI,dword ptr [ESP + 0x10]      ; 0055b3b2
    PUSH EDI                            ; 0055b3b6
    MOV EAX,[0x0061255c]                ; 0055b3b7 | DAT_0061255c
    PUSH EAX                            ; 0055b3bc | DAT_01bc120c
    MOV ESI,dword ptr [ESP + 0xc]       ; 0055b3bd
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0 ; 0055b3c1
        ;   XREF to: 004834b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0(CDemonRenderer * this_ptr, CVector3f * point_ptr)
    ADD ESP,0x8                         ; 0055b3c6
    ADD EBX,ESI                         ; 0055b3c9
    MOV EDX,dword ptr [0x0061255c]      ; 0055b3cb | DAT_0061255c
    PUSH dword ptr [EBX + 0x144]        ; 0055b3d1
    PUSH EDX                            ; 0055b3d7 | DAT_01bc120c
    CALL engine_drender.cpp_FUN_004839b0 ; 0055b3d8
        ;   XREF to: 004839b0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_004839b0()
    ADD ESP,0x8                         ; 0055b3dd
    MOV ECX,dword ptr [ESP + 0x8]       ; 0055b3e0
    PUSH ECX                            ; 0055b3e4
    MOV EBX,dword ptr [0x0061255c]      ; 0055b3e5 | DAT_0061255c
    PUSH EBX                            ; 0055b3eb | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00483530 ; 0055b3ec
        ;   XREF to: 00483530 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00483530(CDemonRenderer * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0055b3f1
    PUSH 0x268e8f4                      ; 0055b3f4
    MOV ESI,dword ptr [0x0061255c]      ; 0055b3f9 | DAT_0061255c
    PUSH ESI                            ; 0055b3ff | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_00483780 ; 0055b400
        ;   XREF to: 00483780 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_00483780(CDemonRenderer * this_ptr, CVector3i * input_point)
    ADD ESP,0x8                         ; 0055b405
    CALL engine_special.cpp_clearZBufferNative_FUN_0057dca4 ; 0055b408
        ;   XREF to: 0057dca4 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearZBufferNative_FUN_0057dca4()
    PUSH 0x0                            ; 0055b40d
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0055b40f
    PUSH 0x461c3f9a                     ; 0055b413
    PUSH EDI                            ; 0055b418
    CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0054e3c0 ; 0055b419
        ;   XREF to: 0054e3c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0054e3c0(CDemonSet * this_ptr, float frustum_param, int render_mode)
    ADD ESP,0xc                         ; 0055b41e
    XOR EBX,EBX                         ; 0055b421
    MOV EDX,dword ptr [ESP + 0xc]       ; 0055b423
    MOV ECX,0x100                       ; 0055b427
        ;   Label: LAB_0055b427
    MOV EDI,EDX                         ; 0055b42c
    MOV ESI,dword ptr [EBX + 0x1c4480c] ; 0055b42e | DAT_01c4480c | DAT_01c44810
    PUSH EDI                            ; 0055b434
    MOV EAX,ECX                         ; 0055b435
    SHR ECX,0x2                         ; 0055b437
    MOVSD.REP ES:EDI,ESI                ; 0055b43a | DAT_020b28f4 | DAT_020b28f8 | DAT_020b29f4
    MOV CL,AL                           ; 0055b43c
    AND CL,0x3                          ; 0055b43e
    MOVSB.REP ES:EDI,ESI                ; 0055b441 | DAT_020b28f8 | DAT_020b28f9
    POP EDI                             ; 0055b443
    ADD EBX,0x4                         ; 0055b444
    ADD EDX,0x100                       ; 0055b447
    CMP EBX,0xc0                        ; 0055b44d
    JNZ 0x0055b427                      ; 0055b453
        ;   XREF to: 0055b427 (CONDITIONAL_JUMP)  ; LAB_0055b427
    MOV EDI,dword ptr [ESP + 0xc]       ; 0055b455
    MOV EAX,dword ptr [ESP + 0x8]       ; 0055b459
    MOV EDX,dword ptr [ESP + 0x10]      ; 0055b45d
    INC EBP                             ; 0055b461
    ADD EAX,0x1a4                       ; 0055b462
    ADD EDI,0x3000                      ; 0055b467
    MOV dword ptr [ESP + 0x8],EAX       ; 0055b46d
    MOV EAX,dword ptr [ESP + 0x28]      ; 0055b471
    ADD EDX,0x1a4                       ; 0055b475
    MOV dword ptr [ESP + 0xc],EDI       ; 0055b47b
    MOV ECX,dword ptr [EAX]             ; 0055b47f
    MOV dword ptr [ESP + 0x10],EDX      ; 0055b481
    CMP EBP,ECX                         ; 0055b485
    JL 0x0055b3ac                       ; 0055b487
        ;   XREF to: 0055b3ac (CONDITIONAL_JUMP)  ; LAB_0055b3ac
    MOV EBP,dword ptr [0x00612560]      ; 0055b48d | DAT_00612560
        ;   Label: LAB_0055b48d
    PUSH EBP                            ; 0055b493 | DAT_01bc120c
    CALL engine_drender.cpp_popViewport_FUN_00483c40 ; 0055b494
        ;   XREF to: 00483c40 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_popViewport_FUN_00483c40()
    ADD ESP,0x4                         ; 0055b499
    MOV EAX,dword ptr [ESP]             ; 0055b49c
    PUSH EAX                            ; 0055b49f
    MOV EDX,dword ptr [0x00612560]      ; 0055b4a0 | DAT_00612560
    PUSH EDX                            ; 0055b4a6 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_00483e40 ; 0055b4a7
        ;   XREF to: 00483e40 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_00483e40(CDemonRenderer * this_ptr, int value)
    ADD ESP,0x8                         ; 0055b4ac
    ADD ESP,0x14                        ; 0055b4af
    POP EBP                             ; 0055b4b2
    POP EDI                             ; 0055b4b3
    POP ESI                             ; 0055b4b4
    POP EBX                             ; 0055b4b5
    RET                                 ; 0055b4b6

