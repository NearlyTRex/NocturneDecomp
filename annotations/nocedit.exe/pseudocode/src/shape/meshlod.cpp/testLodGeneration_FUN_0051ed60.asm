; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_meshlod_cpp_testLodGeneration_FUN_0051ed60(void)
;
; Local Variables:
; undefined        Stack[-0x74]:1  local_74
;
; Referenced Globals:
;   TerminatedCString s_hsw737_mdl_00638530
;
; Called Functions:
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   shape_design.c_loadModelFile_FUN_00458ac0
;   shape_meshlod.cpp_CLodMesh_ctor_FUN_00515840
;   shape_meshlod.cpp_CLodMesh_dtor_FUN_00515950
;   shape_meshlod.cpp_CLodMesh_importFromEditorGlobals_FUN_0051b080
;   shape_meshlod.cpp_CLodMesh_previewLodGeneration_FUN_0051d520
;   wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0
;
; *****************************************************************************

section .text

    SUB ESP,0x74                        ; 0051ed60
        ;   Label: shape_meshlod.cpp_testLodGeneration_FUN_0051ed60
    PUSH 0x20                           ; 0051ed63
    PUSH 0x1e0                          ; 0051ed65
    PUSH 0x280                          ; 0051ed6a
    CALL wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0 ; 0051ed6f
        ;   XREF to: 005ecef0 (UNCONDITIONAL_CALL)  ; int wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0(int width, int height, int bits_per_pixel)
    ADD ESP,0xc                         ; 0051ed74
    MOV EAX,ESP                         ; 0051ed77
    PUSH EAX                            ; 0051ed79
    CALL shape_meshlod.cpp_CLodMesh_ctor_FUN_00515840 ; 0051ed7a
        ;   XREF to: 00515840 (UNCONDITIONAL_CALL)  ; CLodMesh * shape_meshlod.cpp_CLodMesh_ctor_FUN_00515840(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 0051ed7f
    PUSH 0x638530                       ; 0051ed82 | = "hsw737.mdl"
    CALL shape_design.c_loadModelFile_FUN_00458ac0 ; 0051ed87
        ;   XREF to: 00458ac0 (UNCONDITIONAL_CALL)  ; int shape_design.c_loadModelFile_FUN_00458ac0(char * filename)
    ADD ESP,0x4                         ; 0051ed8c
    MOV EAX,ESP                         ; 0051ed8f
    PUSH EAX                            ; 0051ed91
    CALL shape_meshlod.cpp_CLodMesh_importFromEditorGlobals_FUN_0051b080 ; 0051ed92
        ;   XREF to: 0051b080 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_importFromEditorGlobals_FUN_0051b080(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 0051ed97
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0051ed9a
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    PUSH 0x0                            ; 0051ed9f
    PUSH 0x1                            ; 0051eda1
    LEA EAX,[ESP + 0x8]                 ; 0051eda3
    PUSH EAX                            ; 0051eda7
    CALL shape_meshlod.cpp_CLodMesh_previewLodGeneration_FUN_0051d520 ; 0051eda8
        ;   XREF to: 0051d520 (UNCONDITIONAL_CALL)  ; int shape_meshlod.cpp_CLodMesh_previewLodGeneration_FUN_0051d520(CLodMesh * this_ptr, int pause_flag, int render_mode)
    ADD ESP,0xc                         ; 0051edad
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0051edb0
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    PUSH 0x0                            ; 0051edb5
    LEA EAX,[ESP + 0x4]                 ; 0051edb7
    PUSH EAX                            ; 0051edbb
    CALL shape_meshlod.cpp_CLodMesh_dtor_FUN_00515950 ; 0051edbc
        ;   XREF to: 00515950 (UNCONDITIONAL_CALL)  ; CLodMesh * shape_meshlod.cpp_CLodMesh_dtor_FUN_00515950(CLodMesh * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0051edc1
    ADD ESP,0x74                        ; 0051edc4
    RET                                 ; 0051edc7

