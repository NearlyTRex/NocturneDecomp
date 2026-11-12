; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; C3DSCamera * __cdecl core_setutil_cpp_C3DSCamera_dtor_FUN_0053a810(C3DSCamera *this_ptr,uint flags)
;
; Parameters:
; C3DSCamera *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_setutil.cpp_C3DSCamera_free_FUN_0053a830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053a810
        ;   Label: core_setutil.cpp_C3DSCamera_dtor_FUN_0053a810
    MOV EBX,dword ptr [ESP + 0x8]       ; 0053a811
    PUSH EBX                            ; 0053a815
    CALL core_setutil.cpp_C3DSCamera_free_FUN_0053a830 ; 0053a816
        ;   XREF to: 0053a830 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSCamera_free_FUN_0053a830(C3DSCamera * this_ptr)
    ADD ESP,0x4                         ; 0053a81b
    MOV EAX,EBX                         ; 0053a81e
    POP EBX                             ; 0053a820
    RET                                 ; 0053a821

