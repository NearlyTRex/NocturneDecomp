; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_renderDecals_FUN_0053ba40(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005fc5a0
;   CGore* g_CGorePtr = 01d22e44
;
; Called Functions:
;   core_fire.cpp_CFireEffect_renderDecals_FUN_004a1e90
;   core_gore.cpp_CGore_renderDecals_FUN_004ce630
;   core_set.cpp_CDemonSet_buildDisplayList_FUN_00539f30
;   core_set.cpp_CDemonSet_renderBackgroundActors_FUN_005346b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053ba40
        ;   Label: core_set.cpp_CDemonSet_renderDecals_FUN_0053ba40
    PUSH ESI                            ; 0053ba41
    PUSH 0x10                           ; 0053ba42
    MOV EDX,dword ptr [ESP + 0x10]      ; 0053ba44
    PUSH EDX                            ; 0053ba48
    CALL core_set.cpp_CDemonSet_buildDisplayList_FUN_00539f30 ; 0053ba49
        ;   XREF to: 00539f30 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_buildDisplayList_FUN_00539f30(CDemonSet * this_ptr, uint dirty_flags_mask)
    ADD ESP,0x8                         ; 0053ba4e
    PUSH 0x1                            ; 0053ba51
    MOV ECX,dword ptr [ESP + 0x10]      ; 0053ba53
    PUSH ECX                            ; 0053ba57
    CALL core_set.cpp_CDemonSet_renderBackgroundActors_FUN_005346b0 ; 0053ba58
        ;   XREF to: 005346b0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderBackgroundActors_FUN_005346b0(CDemonSet * this_ptr, int layer_flag)
    ADD ESP,0x8                         ; 0053ba5d
    PUSH 0x0                            ; 0053ba60
    PUSH 0x1                            ; 0053ba62
    MOV EBX,dword ptr [0x005fed24]      ; 0053ba64 | g_CGorePtr
    PUSH EBX                            ; 0053ba6a
    CALL core_gore.cpp_CGore_renderDecals_FUN_004ce630 ; 0053ba6b
        ;   XREF to: 004ce630 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_renderDecals_FUN_004ce630(CGore * this_ptr, int render_all, int expire_flag)
    ADD ESP,0xc                         ; 0053ba70
    PUSH 0x0                            ; 0053ba73
    PUSH 0x1                            ; 0053ba75
    MOV ESI,dword ptr [0x005fc5a0]      ; 0053ba77 | DAT_005fc5a0
    PUSH ESI                            ; 0053ba7d
    CALL core_fire.cpp_CFireEffect_renderDecals_FUN_004a1e90 ; 0053ba7e
        ;   XREF to: 004a1e90 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_renderDecals_FUN_004a1e90(CFireEffect * this_ptr, int render_mode, int render_completeness)
    ADD ESP,0xc                         ; 0053ba83
    POP ESI                             ; 0053ba86
    POP EBX                             ; 0053ba87
    RET                                 ; 0053ba88

