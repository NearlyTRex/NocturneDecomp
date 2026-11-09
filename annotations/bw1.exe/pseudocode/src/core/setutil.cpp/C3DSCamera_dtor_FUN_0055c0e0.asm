; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; C3DSCamera * __cdecl core_setutil_cpp_C3DSCamera_dtor_FUN_0055c0e0(C3DSCamera *this_ptr,uint flags)
;
; Parameters:
; C3DSCamera *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_setutil.cpp_C3DSCamera_free_FUN_0055c100
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055c0e0
        ;   Label: core_setutil.cpp_C3DSCamera_dtor_FUN_0055c0e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0055c0e1
    PUSH EBX                            ; 0055c0e5
    CALL core_setutil.cpp_C3DSCamera_free_FUN_0055c100 ; 0055c0e6
        ;   XREF to: 0055c100 (UNCONDITIONAL_CALL)  ; undefined core_setutil.cpp_C3DSCamera_free_FUN_0055c100()
    ADD ESP,0x4                         ; 0055c0eb
    MOV EAX,EBX                         ; 0055c0ee
    POP EBX                             ; 0055c0f0
    RET                                 ; 0055c0f1

