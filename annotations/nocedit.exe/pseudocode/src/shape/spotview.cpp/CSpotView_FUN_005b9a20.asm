; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_spotview.cpp_CSpotView_FUN_005b9a20(CSpotView * this_ptr)
;
; Parameters:
; CSpotView *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x6c]:1  local_6c
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined1       Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[7]:
;   core_cloth.cpp_BoneAndClothEditor_FUN_0043c880 at 0043ca73
;   core_cloth.cpp_LockVerticesMaybe_FUN_0043d590 at 0043d6f6
;   core_morph.cpp_FUN_0052bcb0 at 0052c041
;   core_morph.cpp_FUN_0052ca90 at 0052cb13
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 at 00596bb2
;   shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990 at 0051dcaa
;   shape_meshlod.cpp_CLodMesh_previewLodGeneration_FUN_0051d520 at 0051d59c
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
;   engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
;   engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b9a20
        ;   Label: shape_spotview.cpp_CSpotView_FUN_005b9a20
    PUSH ESI                            ; 005b9a21
    SUB ESP,0x64                        ; 005b9a22
    MOV EBX,dword ptr [ESP + 0x70]      ; 005b9a25
    MOV EDX,dword ptr [0x006703ec]      ; 005b9a29 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH 0x41e00000                     ; 005b9a2f
    PUSH EDX                            ; 005b9a34 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650 ; 005b9a35 | void engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650(CDemonRenderer * this_ptr, float field_of_view)
        ;   XREF to: 0048c650 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b9a3a
    MOV EAX,dword ptr [EBX + 0x24]      ; 005b9a3d
    XOR ECX,ECX                         ; 005b9a40
    MOV dword ptr [ESP + 0x34],EAX      ; 005b9a42
    MOV dword ptr [ESP + 0x3c],ECX      ; 005b9a46
    MOV EAX,dword ptr [EBX + 0x28]      ; 005b9a4a
    MOV dword ptr [ESP + 0x38],EAX      ; 005b9a4d
    LEA EAX,[ESP + 0x34]                ; 005b9a51
    PUSH EAX                            ; 005b9a55
    LEA EAX,[ESP + 0x4]                 ; 005b9a56
    PUSH EAX                            ; 005b9a5a
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 005b9a5b | void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b9a60
    MOV EAX,dword ptr [EBX + 0x30]      ; 005b9a63
    MOV dword ptr [ESP + 0x5c],EAX      ; 005b9a66
    MOV EAX,dword ptr [EBX + 0x34]      ; 005b9a6a
    FLD float ptr [EBX + 0x2c]          ; 005b9a6d
    MOV dword ptr [ESP + 0x60],EAX      ; 005b9a70
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005b9a74
    FCHS                                ; 005b9a78
    MOV dword ptr [ESP + 0x4c],EAX      ; 005b9a7a
    MOV EAX,dword ptr [ESP + 0x60]      ; 005b9a7e
    FSTP float ptr [ESP + 0x58]         ; 005b9a82
    MOV dword ptr [ESP + 0x50],EAX      ; 005b9a86
    MOV EAX,dword ptr [ESP + 0x58]      ; 005b9a8a
    MOV dword ptr [ESP + 0x54],EAX      ; 005b9a8e
    LEA EAX,[ESP + 0x4c]                ; 005b9a92
    PUSH EAX                            ; 005b9a96
    LEA EAX,[ESP + 0x44]                ; 005b9a97
    PUSH EAX                            ; 005b9a9b
    LEA EAX,[ESP + 0x8]                 ; 005b9a9c
    PUSH EAX                            ; 005b9aa0
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 005b9aa1 | CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
    FLD float ptr [EBX + 0x18]          ; 005b9aa6
    FADD float ptr [EAX]                ; 005b9aa9
    ADD ESP,0xc                         ; 005b9aab
    FSTP float ptr [ESP + 0x28]         ; 005b9aae
    FLD float ptr [EBX + 0x1c]          ; 005b9ab2
    FADD float ptr [EAX + 0x4]          ; 005b9ab5
    FSTP float ptr [ESP + 0x2c]         ; 005b9ab8
    FLD float ptr [EBX + 0x20]          ; 005b9abc
    FADD float ptr [EAX + 0x8]          ; 005b9abf
    LEA EAX,[ESP + 0x28]                ; 005b9ac2
    PUSH EAX                            ; 005b9ac6
    MOV EBX,dword ptr [0x006703ec]      ; 005b9ac7 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH EBX                            ; 005b9acd | CDemonRenderer g_CDemonRendererInstance
    FSTP float ptr [ESP + 0x38]         ; 005b9ace
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150 ; 005b9ad2 | void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150(CDemonRenderer * this_ptr, CVector3i * point_ptr)
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b9ad7
    LEA EAX,[ESP + 0x34]                ; 005b9ada
    PUSH EAX                            ; 005b9ade
    MOV ESI,dword ptr [0x006703ec]      ; 005b9adf | CDemonRenderer * g_CDemonRendererPtr
    PUSH ESI                            ; 005b9ae5 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0 ; 005b9ae6 | void engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0(CDemonRenderer * this_ptr)
        ;   XREF to: 0048c1d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b9aeb
    ADD ESP,0x64                        ; 005b9aee
    POP ESI                             ; 005b9af1
    POP EBX                             ; 005b9af2
    RET                                 ; 005b9af3

