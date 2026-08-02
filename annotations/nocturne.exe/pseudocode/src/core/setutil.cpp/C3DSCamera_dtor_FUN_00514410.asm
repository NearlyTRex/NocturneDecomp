; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; C3DSCamera * __cdecl core_setutil_cpp_C3DSCamera_dtor_FUN_00514410(C3DSCamera *this_ptr,uint flags)
;
; Parameters:
; C3DSCamera *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_setutil.cpp_FUN_00514430
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00514410
        ;   Label: core_setutil.cpp_C3DSCamera_dtor_FUN_00514410
    MOV EBX,dword ptr [ESP + 0x8]       ; 00514411
    PUSH EBX                            ; 00514415
    CALL core_setutil.cpp_FUN_00514430  ; 00514416
        ;   XREF to: 00514430 (UNCONDITIONAL_CALL)  ; undefined core_setutil.cpp_FUN_00514430()
    ADD ESP,0x4                         ; 0051441b
    MOV EAX,EBX                         ; 0051441e
    POP EBX                             ; 00514420
    RET                                 ; 00514421

