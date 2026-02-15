; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_terrain_cpp_CTerrain_free_FUN_005e1f30(CTerrain *this_ptr)
;
; Parameters:
; CTerrain *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_set.cpp_CDemonSet_clear_FUN_005693c0 at 005693f8
;   core_set.cpp_CDemonSet_load_FUN_00569410 at 00569f60
;
; Referenced Globals:
;   CGround* g_CGroundPtr = 02db8668
;   CGround g_CGroundInstance
;   undefined4 g_CTerrainInstance.initialized
;
; Called Functions:
;   core_ground.cpp_CGround_free_FUN_004eefb0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0067cbc8]      ; 005e1f30 | g_CGroundInstance | g_CGroundPtr
        ;   Label: core_terrain.cpp_CTerrain_free_FUN_005e1f30
    PUSH EDX                            ; 005e1f36 | g_CGroundInstance
    CALL core_ground.cpp_CGround_free_FUN_004eefb0 ; 005e1f37
        ;   XREF to: 004eefb0 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_free_FUN_004eefb0(CGround * this_ptr)
    XOR ECX,ECX                         ; 005e1f3c
    ADD ESP,0x4                         ; 005e1f3e
    MOV dword ptr [0x03f874a0],ECX      ; 005e1f41 | g_CTerrainInstance.initialized
    RET                                 ; 005e1f47

