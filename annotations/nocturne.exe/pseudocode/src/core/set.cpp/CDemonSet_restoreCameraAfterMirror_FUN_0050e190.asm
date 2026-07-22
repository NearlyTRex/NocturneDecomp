; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190(int param_1)
;
;
; XREF[5]:
;   core_set.cpp_CDemonSet_renderOpaqueActors_FUN_0050a640 at 0050a7a5
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00507c80 at 00507e4d
;   core_set.cpp_CDemonSet_renderStaticLights_FUN_00509760 at 00509904
;   core_set.cpp_CDemonSet_renderTransparentActors_FUN_0050a7e0 at 0050a931
;   core_set.cpp_FUN_00509a80 at 00509bdb
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;   undefined4 DAT_020842b4
;   undefined4 DAT_020842c0
;   undefined4 DAT_020842cc
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_004613c0
;   engine_drender.cpp_CDemonRenderer_setAlphaMask_FUN_004613a0
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700
;   engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_00460c00
;   engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00460780
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050e190
        ;   Label: core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190
    PUSH ESI                            ; 0050e191
    PUSH EDI                            ; 0050e192
    PUSH 0x20842b4                      ; 0050e193 | DAT_020842b4
    MOV EDX,dword ptr [0x005ae704]      ; 0050e198 | DAT_005ae704
    PUSH EDX                            ; 0050e19e | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700 ; 0050e19f
        ;   XREF to: 00460700 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700()
    ADD ESP,0x8                         ; 0050e1a4
    MOV ECX,dword ptr [0x005ae704]      ; 0050e1a7 | DAT_005ae704
    PUSH dword ptr [0x020842cc]         ; 0050e1ad | DAT_020842cc
    PUSH ECX                            ; 0050e1b3 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_00460c00 ; 0050e1b4
        ;   XREF to: 00460c00 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_00460c00()
    ADD ESP,0x8                         ; 0050e1b9
    PUSH 0x20842c0                      ; 0050e1bc | DAT_020842c0
    MOV EBX,dword ptr [0x005ae704]      ; 0050e1c1 | DAT_005ae704
    PUSH EBX                            ; 0050e1c7 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00460780 ; 0050e1c8
        ;   XREF to: 00460780 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00460780()
    ADD ESP,0x8                         ; 0050e1cd
    PUSH 0x0                            ; 0050e1d0
    MOV ESI,dword ptr [0x005ae704]      ; 0050e1d2 | DAT_005ae704
    PUSH ESI                            ; 0050e1d8 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_004613c0 ; 0050e1d9
        ;   XREF to: 004613c0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_004613c0()
    ADD ESP,0x8                         ; 0050e1de
    PUSH 0x0                            ; 0050e1e1
    MOV EDI,dword ptr [0x005ae704]      ; 0050e1e3 | DAT_005ae704
    PUSH EDI                            ; 0050e1e9 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setAlphaMask_FUN_004613a0 ; 0050e1ea
        ;   XREF to: 004613a0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setAlphaMask_FUN_004613a0()
    ADD ESP,0x8                         ; 0050e1ef
    MOV EAX,dword ptr [ESP + 0x10]      ; 0050e1f2
    MOV dword ptr [EAX + 0x161268],0x0  ; 0050e1f6
    POP EDI                             ; 0050e200
    POP ESI                             ; 0050e201
    POP EBX                             ; 0050e202
    RET                                 ; 0050e203

