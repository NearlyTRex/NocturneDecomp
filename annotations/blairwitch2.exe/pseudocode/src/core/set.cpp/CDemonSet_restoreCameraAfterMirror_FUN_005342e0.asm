; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0052d0e0 at 0052d28a
;   core_set.cpp_CDemonSet_renderStaticLights_FUN_0052ef80 at 0052f124
;   core_set.cpp_FUN_0052f2a0 at 0052f3f3
;   core_set.cpp_FUN_005301d0 at 005303c9
;   core_set.cpp_FUN_00530410 at 005305f2
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_020935f8
;   undefined4 DAT_02093604
;   undefined4 DAT_02093610
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_0046bc90
;   engine_drender.cpp_CDemonRenderer_setAlphaMask_FUN_0046bc70
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046afb0
;   engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0046b030
;   engine_drender.cpp_FUN_0046b4b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005342e0
        ;   Label: core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0
    PUSH ESI                            ; 005342e1
    PUSH EDI                            ; 005342e2
    PUSH 0x20935f8                      ; 005342e3 | DAT_020935f8
    MOV EDX,dword ptr [0x0060b280]      ; 005342e8 | DAT_0060b280
    PUSH EDX                            ; 005342ee | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046afb0 ; 005342ef
        ;   XREF to: 0046afb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046afb0(CDemonRenderer * this_ptr, CVector3f * point_ptr)
    ADD ESP,0x8                         ; 005342f4
    MOV ECX,dword ptr [0x0060b280]      ; 005342f7 | DAT_0060b280
    PUSH dword ptr [0x02093610]         ; 005342fd | DAT_02093610
    PUSH ECX                            ; 00534303 | DAT_01ba5c50
    CALL engine_drender.cpp_FUN_0046b4b0 ; 00534304
        ;   XREF to: 0046b4b0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_0046b4b0()
    ADD ESP,0x8                         ; 00534309
    PUSH 0x2093604                      ; 0053430c | DAT_02093604
    MOV EBX,dword ptr [0x0060b280]      ; 00534311 | DAT_0060b280
    PUSH EBX                            ; 00534317 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0046b030 ; 00534318
        ;   XREF to: 0046b030 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0046b030(CDemonRenderer * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0053431d
    PUSH 0x0                            ; 00534320
    MOV ESI,dword ptr [0x0060b280]      ; 00534322 | DAT_0060b280
    PUSH ESI                            ; 00534328 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_0046bc90 ; 00534329
        ;   XREF to: 0046bc90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_0046bc90(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0053432e
    PUSH 0x0                            ; 00534331
    MOV EDI,dword ptr [0x0060b280]      ; 00534333 | DAT_0060b280
    PUSH EDI                            ; 00534339 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setAlphaMask_FUN_0046bc70 ; 0053433a
        ;   XREF to: 0046bc70 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setAlphaMask_FUN_0046bc70(CDemonRenderer * this_ptr, int alpha_mask)
    ADD ESP,0x8                         ; 0053433f
    MOV EAX,dword ptr [ESP + 0x10]      ; 00534342
    MOV dword ptr [EAX + 0x161664],0x0  ; 00534346
    POP EDI                             ; 00534350
    POP ESI                             ; 00534351
    POP EBX                             ; 00534352
    RET                                 ; 00534353

