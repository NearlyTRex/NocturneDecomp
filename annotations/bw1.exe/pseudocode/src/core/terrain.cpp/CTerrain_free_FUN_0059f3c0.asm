; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_terrain_cpp_CTerrain_free_FUN_0059f3c0(CTerrain *this_ptr)
;
; Parameters:
; CTerrain *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_set.cpp_CDemonSet_clear_FUN_0054d370 at 0054d3a8
;   core_set.cpp_FUN_0054d3c0 at 0054e161
;
; Referenced Globals:
;   CGround* g_CGroundPtr = 01d06940
;   undefined4 DAT_02c8ae6c
;
; Called Functions:
;   core_ground.cpp_CGround_free_FUN_004e72e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0061eecc]      ; 0059f3c0 | g_CGroundPtr
        ;   Label: core_terrain.cpp_CTerrain_free_FUN_0059f3c0
    PUSH EDX                            ; 0059f3c6
    CALL core_ground.cpp_CGround_free_FUN_004e72e0 ; 0059f3c7
        ;   XREF to: 004e72e0 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_free_FUN_004e72e0(CGround * this_ptr)
    XOR ECX,ECX                         ; 0059f3cc
    ADD ESP,0x4                         ; 0059f3ce
    MOV dword ptr [0x02c8ae6c],ECX      ; 0059f3d1 | DAT_02c8ae6c
    RET                                 ; 0059f3d7

