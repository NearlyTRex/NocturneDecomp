; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_renderDecals_FUN_005713c0(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CGore* g_CGorePtr = 02d83364
;   CFireEffect g_CFireEffectInstance
;   CGore g_CGoreInstance
;
; Called Functions:
;   core_fire.cpp_CFireEffect_renderDecals_FUN_004c74a0
;   core_gore.cpp_CGore_renderDecals_FUN_004ed830
;   core_set.cpp_CDemonSet_buildDisplayList_FUN_0056fbd0
;   core_set.cpp_CDemonSet_renderBackgroundActors_FUN_0056aca0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005713c0
        ;   Label: core_set.cpp_CDemonSet_renderDecals_FUN_005713c0
    PUSH ESI                            ; 005713c1
    PUSH 0x10                           ; 005713c2
    MOV EDX,dword ptr [ESP + 0x10]      ; 005713c4
    PUSH EDX                            ; 005713c8
    CALL core_set.cpp_CDemonSet_buildDisplayList_FUN_0056fbd0 ; 005713c9
        ;   XREF to: 0056fbd0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_buildDisplayList_FUN_0056fbd0(CDemonSet * this_ptr, uint dirty_flags_mask)
    ADD ESP,0x8                         ; 005713ce
    PUSH 0x1                            ; 005713d1
    MOV ECX,dword ptr [ESP + 0x10]      ; 005713d3
    PUSH ECX                            ; 005713d7
    CALL core_set.cpp_CDemonSet_renderBackgroundActors_FUN_0056aca0 ; 005713d8
        ;   XREF to: 0056aca0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderBackgroundActors_FUN_0056aca0(CDemonSet * this_ptr, int layer_flag)
    ADD ESP,0x8                         ; 005713dd
    PUSH 0x0                            ; 005713e0
    PUSH 0x1                            ; 005713e2
    MOV EBX,dword ptr [0x0067b9a0]      ; 005713e4 | g_CGorePtr | g_CGoreInstance
    PUSH EBX                            ; 005713ea | g_CGoreInstance
    CALL core_gore.cpp_CGore_renderDecals_FUN_004ed830 ; 005713eb
        ;   XREF to: 004ed830 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_renderDecals_FUN_004ed830(CGore * this_ptr, int render_all, int expire_flag)
    ADD ESP,0xc                         ; 005713f0
    PUSH 0x0                            ; 005713f3
    PUSH 0x1                            ; 005713f5
    MOV ESI,dword ptr [0x0067a3d0]      ; 005713f7 | g_CFireEffectPtr
    PUSH ESI                            ; 005713fd | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_renderDecals_FUN_004c74a0 ; 005713fe
        ;   XREF to: 004c74a0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_renderDecals_FUN_004c74a0(CFireEffect * this_ptr, int render_mode, int render_completeness)
    ADD ESP,0xc                         ; 00571403
    POP ESI                             ; 00571406
    POP EBX                             ; 00571407
    RET                                 ; 00571408

