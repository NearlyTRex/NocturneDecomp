; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0053af20(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00533b80 at 00533d2a
;   core_set.cpp_CDemonSet_renderStaticLights_FUN_00535a80 at 00535c24
;   core_set.cpp_FUN_00535da0 at 00535ef3
;   core_set.cpp_FUN_00536c90 at 00536f46
;   core_set.cpp_FUN_00536f90 at 00537235
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_021221d4
;   undefined4 DAT_021221e0
;   undefined4 DAT_021221ec
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_0046d870
;   engine_drender.cpp_CDemonRenderer_setAlphaMask_FUN_0046d850
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90
;   engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0046cc10
;   engine_matrix.c_FUN_0046d090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053af20
        ;   Label: core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0053af20
    PUSH ESI                            ; 0053af21
    PUSH EDI                            ; 0053af22
    PUSH 0x21221d4                      ; 0053af23 | DAT_021221d4
    MOV EDX,dword ptr [0x005f2afc]      ; 0053af28 | DAT_005f2afc
    PUSH EDX                            ; 0053af2e | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90 ; 0053af2f
        ;   XREF to: 0046cb90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90(CDemonRenderer * this_ptr, CVector3f * point_ptr)
    ADD ESP,0x8                         ; 0053af34
    MOV ECX,dword ptr [0x005f2afc]      ; 0053af37 | DAT_005f2afc
    PUSH dword ptr [0x021221ec]         ; 0053af3d | DAT_021221ec
    PUSH ECX                            ; 0053af43 | DAT_01bdd7e4
    CALL engine_matrix.c_FUN_0046d090   ; 0053af44
        ;   XREF to: 0046d090 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_0046d090()
    ADD ESP,0x8                         ; 0053af49
    PUSH 0x21221e0                      ; 0053af4c | DAT_021221e0
    MOV EBX,dword ptr [0x005f2afc]      ; 0053af51 | DAT_005f2afc
    PUSH EBX                            ; 0053af57 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0046cc10 ; 0053af58
        ;   XREF to: 0046cc10 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0046cc10(CDemonRenderer * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0053af5d
    PUSH 0x0                            ; 0053af60
    MOV ESI,dword ptr [0x005f2afc]      ; 0053af62 | DAT_005f2afc
    PUSH ESI                            ; 0053af68 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_0046d870 ; 0053af69
        ;   XREF to: 0046d870 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_0046d870(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0053af6e
    PUSH 0x0                            ; 0053af71
    MOV EDI,dword ptr [0x005f2afc]      ; 0053af73 | DAT_005f2afc
    PUSH EDI                            ; 0053af79 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setAlphaMask_FUN_0046d850 ; 0053af7a
        ;   XREF to: 0046d850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setAlphaMask_FUN_0046d850(CDemonRenderer * this_ptr, int alpha_mask)
    ADD ESP,0x8                         ; 0053af7f
    MOV EAX,dword ptr [ESP + 0x10]      ; 0053af82
    MOV dword ptr [EAX + 0x161668],0x0  ; 0053af86
    POP EDI                             ; 0053af90
    POP ESI                             ; 0053af91
    POP EBX                             ; 0053af92
    RET                                 ; 0053af93

