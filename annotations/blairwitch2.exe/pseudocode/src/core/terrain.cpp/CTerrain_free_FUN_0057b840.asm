; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_terrain_cpp_CTerrain_free_FUN_0057b840(CTerrain *this_ptr)
;
; Parameters:
; CTerrain *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_set.cpp_CDemonSet_clear_FUN_0052c090 at 0052c0c8
;   core_set.cpp_CDemonSet_load_FUN_0052c0e0 at 0052ce81
;
; Referenced Globals:
;   CGround* g_CGroundPtr = 01cedd88
;   undefined4 DAT_02653650
;
; Called Functions:
;   core_ground.cpp_CGround_free_FUN_004caa60
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x00617a08]      ; 0057b840 | g_CGroundPtr
        ;   Label: core_terrain.cpp_CTerrain_free_FUN_0057b840
    PUSH EDX                            ; 0057b846
    CALL core_ground.cpp_CGround_free_FUN_004caa60 ; 0057b847
        ;   XREF to: 004caa60 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_free_FUN_004caa60(CGround * this_ptr)
    XOR ECX,ECX                         ; 0057b84c
    ADD ESP,0x4                         ; 0057b84e
    MOV dword ptr [0x02653650],ECX      ; 0057b851 | DAT_02653650
    RET                                 ; 0057b857

