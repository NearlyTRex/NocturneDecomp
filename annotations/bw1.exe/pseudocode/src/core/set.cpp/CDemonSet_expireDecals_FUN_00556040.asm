; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_expireDecals_FUN_00556040(CDemonSet *this_ptr,int expire_flag)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   expire_flag
;
; Referenced Globals:
;   undefined4 DAT_0061c010
;   CGore* g_CGorePtr = 01cd0e3c
;
; Called Functions:
;   core_fire.cpp_CFireEffect_renderDecals_FUN_004b54a0
;   core_gore.cpp_CGore_renderDecals_FUN_004e5cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00556040
        ;   Label: core_set.cpp_CDemonSet_expireDecals_FUN_00556040
    PUSH ESI                            ; 00556041
    MOV EDX,dword ptr [ESP + 0x10]      ; 00556042
    PUSH EDX                            ; 00556046
    PUSH 0x0                            ; 00556047
    MOV ECX,dword ptr [0x0061dca4]      ; 00556049 | g_CGorePtr
    PUSH ECX                            ; 0055604f
    CALL core_gore.cpp_CGore_renderDecals_FUN_004e5cd0 ; 00556050
        ;   XREF to: 004e5cd0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_renderDecals_FUN_004e5cd0(CGore * this_ptr, int render_all, int expire_flag)
    ADD ESP,0xc                         ; 00556055
    MOV EBX,dword ptr [ESP + 0x10]      ; 00556058
    PUSH EBX                            ; 0055605c
    PUSH 0x0                            ; 0055605d
    MOV ESI,dword ptr [0x0061c010]      ; 0055605f | DAT_0061c010
    PUSH ESI                            ; 00556065
    CALL core_fire.cpp_CFireEffect_renderDecals_FUN_004b54a0 ; 00556066
        ;   XREF to: 004b54a0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_renderDecals_FUN_004b54a0(CFireEffect * this_ptr, int render_mode, int render_completeness)
    ADD ESP,0xc                         ; 0055606b
    POP ESI                             ; 0055606e
    POP EBX                             ; 0055606f
    RET                                 ; 00556070

