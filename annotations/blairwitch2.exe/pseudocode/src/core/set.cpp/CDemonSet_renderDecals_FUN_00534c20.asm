; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_renderDecals_FUN_00534c20(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_00614d30
;   CGore* g_CGorePtr = 01cb8284
;
; Called Functions:
;   core_fire.cpp_CFireEffect_renderDecals_FUN_0049cb50
;   core_gore.cpp_CGore_renderDecals_FUN_004c94c0
;   core_set.cpp_CDemonSet_buildDisplayList_FUN_005332f0
;   core_set.cpp_CDemonSet_renderBackgroundActors_FUN_0052dc10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00534c20
        ;   Label: core_set.cpp_CDemonSet_renderDecals_FUN_00534c20
    PUSH ESI                            ; 00534c21
    PUSH 0x10                           ; 00534c22
    MOV EDX,dword ptr [ESP + 0x10]      ; 00534c24
    PUSH EDX                            ; 00534c28
    CALL core_set.cpp_CDemonSet_buildDisplayList_FUN_005332f0 ; 00534c29
        ;   XREF to: 005332f0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_buildDisplayList_FUN_005332f0(CDemonSet * this_ptr, uint dirty_flags_mask)
    ADD ESP,0x8                         ; 00534c2e
    PUSH 0x1                            ; 00534c31
    MOV ECX,dword ptr [ESP + 0x10]      ; 00534c33
    PUSH ECX                            ; 00534c37
    CALL core_set.cpp_CDemonSet_renderBackgroundActors_FUN_0052dc10 ; 00534c38
        ;   XREF to: 0052dc10 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderBackgroundActors_FUN_0052dc10(CDemonSet * this_ptr, int layer_flag)
    ADD ESP,0x8                         ; 00534c3d
    PUSH 0x0                            ; 00534c40
    PUSH 0x1                            ; 00534c42
    MOV EBX,dword ptr [0x006167e0]      ; 00534c44 | g_CGorePtr
    PUSH EBX                            ; 00534c4a
    CALL core_gore.cpp_CGore_renderDecals_FUN_004c94c0 ; 00534c4b
        ;   XREF to: 004c94c0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_renderDecals_FUN_004c94c0(CGore * this_ptr, int render_all, int expire_flag)
    ADD ESP,0xc                         ; 00534c50
    PUSH 0x0                            ; 00534c53
    PUSH 0x1                            ; 00534c55
    MOV ESI,dword ptr [0x00614d30]      ; 00534c57 | DAT_00614d30
    PUSH ESI                            ; 00534c5d
    CALL core_fire.cpp_CFireEffect_renderDecals_FUN_0049cb50 ; 00534c5e
        ;   XREF to: 0049cb50 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_renderDecals_FUN_0049cb50(CFireEffect * this_ptr, int render_mode, int render_completeness)
    ADD ESP,0xc                         ; 00534c63
    POP ESI                             ; 00534c66
    POP EBX                             ; 00534c67
    RET                                 ; 00534c68

