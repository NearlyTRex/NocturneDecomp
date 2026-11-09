; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_expireDecals_FUN_0053ba00(CDemonSet *this_ptr,int expire_flag)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   expire_flag
;
; Referenced Globals:
;   undefined4 DAT_005fc5a0
;   CGore* g_CGorePtr = 01d22e44
;
; Called Functions:
;   core_fire.cpp_CFireEffect_renderDecals_FUN_004a1e90
;   core_gore.cpp_CGore_renderDecals_FUN_004ce630
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053ba00
        ;   Label: core_set.cpp_CDemonSet_expireDecals_FUN_0053ba00
    PUSH ESI                            ; 0053ba01
    MOV EDX,dword ptr [ESP + 0x10]      ; 0053ba02
    PUSH EDX                            ; 0053ba06
    PUSH 0x0                            ; 0053ba07
    MOV ECX,dword ptr [0x005fed24]      ; 0053ba09 | g_CGorePtr
    PUSH ECX                            ; 0053ba0f
    CALL core_gore.cpp_CGore_renderDecals_FUN_004ce630 ; 0053ba10
        ;   XREF to: 004ce630 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_renderDecals_FUN_004ce630(CGore * this_ptr, int render_all, int expire_flag)
    ADD ESP,0xc                         ; 0053ba15
    MOV EBX,dword ptr [ESP + 0x10]      ; 0053ba18
    PUSH EBX                            ; 0053ba1c
    PUSH 0x0                            ; 0053ba1d
    MOV ESI,dword ptr [0x005fc5a0]      ; 0053ba1f | DAT_005fc5a0
    PUSH ESI                            ; 0053ba25
    CALL core_fire.cpp_CFireEffect_renderDecals_FUN_004a1e90 ; 0053ba26
        ;   XREF to: 004a1e90 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_renderDecals_FUN_004a1e90(CFireEffect * this_ptr, int render_mode, int render_completeness)
    ADD ESP,0xc                         ; 0053ba2b
    POP ESI                             ; 0053ba2e
    POP EBX                             ; 0053ba2f
    RET                                 ; 0053ba30

