; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_renderDecals_FUN_00556080(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_0061c010
;   CGore* g_CGorePtr = 01cd0e3c
;
; Called Functions:
;   core_fire.cpp_CFireEffect_renderDecals_FUN_004b54a0
;   core_gore.cpp_CGore_renderDecals_FUN_004e5cd0
;   core_set.cpp_FUN_0054eef0
;   core_set.cpp_FUN_005545a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00556080
        ;   Label: core_set.cpp_CDemonSet_renderDecals_FUN_00556080
    PUSH ESI                            ; 00556081
    PUSH 0x10                           ; 00556082
    MOV EDX,dword ptr [ESP + 0x10]      ; 00556084
    PUSH EDX                            ; 00556088
    CALL core_set.cpp_FUN_005545a0      ; 00556089
        ;   XREF to: 005545a0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_005545a0(CDemonSet * this_ptr, uint dirty_flags_mask)
    ADD ESP,0x8                         ; 0055608e
    PUSH 0x1                            ; 00556091
    MOV ECX,dword ptr [ESP + 0x10]      ; 00556093
    PUSH ECX                            ; 00556097
    CALL core_set.cpp_FUN_0054eef0      ; 00556098
        ;   XREF to: 0054eef0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_0054eef0(CDemonSet * this_ptr, int layer_flag)
    ADD ESP,0x8                         ; 0055609d
    PUSH 0x0                            ; 005560a0
    PUSH 0x1                            ; 005560a2
    MOV EBX,dword ptr [0x0061dca4]      ; 005560a4 | g_CGorePtr
    PUSH EBX                            ; 005560aa
    CALL core_gore.cpp_CGore_renderDecals_FUN_004e5cd0 ; 005560ab
        ;   XREF to: 004e5cd0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_renderDecals_FUN_004e5cd0(CGore * this_ptr, int render_all, int expire_flag)
    ADD ESP,0xc                         ; 005560b0
    PUSH 0x0                            ; 005560b3
    PUSH 0x1                            ; 005560b5
    MOV ESI,dword ptr [0x0061c010]      ; 005560b7 | DAT_0061c010
    PUSH ESI                            ; 005560bd
    CALL core_fire.cpp_CFireEffect_renderDecals_FUN_004b54a0 ; 005560be
        ;   XREF to: 004b54a0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_renderDecals_FUN_004b54a0(CFireEffect * this_ptr, int render_mode, int render_completeness)
    ADD ESP,0xc                         ; 005560c3
    POP ESI                             ; 005560c6
    POP EBX                             ; 005560c7
    RET                                 ; 005560c8

