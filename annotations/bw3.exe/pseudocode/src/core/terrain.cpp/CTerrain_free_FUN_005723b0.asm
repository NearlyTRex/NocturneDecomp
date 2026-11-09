; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_terrain_cpp_CTerrain_free_FUN_005723b0(CTerrain *this_ptr)
;
; Parameters:
; CTerrain *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_set.cpp_CDemonSet_clear_FUN_00532b30 at 00532b68
;   core_set.cpp_FUN_00532b80 at 00533921
;
; Referenced Globals:
;   CGround* g_CGroundPtr = 01d5b8a8
;   undefined4 DAT_02cfd8bc
;
; Called Functions:
;   core_ground.cpp_CGround_free_FUN_004cfc70
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x005fff4c]      ; 005723b0 | g_CGroundPtr
        ;   Label: core_terrain.cpp_CTerrain_free_FUN_005723b0
    PUSH EDX                            ; 005723b6
    CALL core_ground.cpp_CGround_free_FUN_004cfc70 ; 005723b7
        ;   XREF to: 004cfc70 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_free_FUN_004cfc70(CGround * this_ptr)
    XOR ECX,ECX                         ; 005723bc
    ADD ESP,0x4                         ; 005723be
    MOV dword ptr [0x02cfd8bc],ECX      ; 005723c1 | DAT_02cfd8bc
    RET                                 ; 005723c7

