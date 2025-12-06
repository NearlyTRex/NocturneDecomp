; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float core_setutil.cpp_C3DSCamera_getAmbientValue_FUN_00585200(C3DSCamera * this_ptr)
;
; Parameters:
; C3DSCamera *     Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00585200
        ;   Label: core_setutil.cpp_C3DSCamera_getAmbientValue_FUN_00585200
    MOV EAX,dword ptr [EAX + 0x148]     ; 00585204
    RET                                 ; 0058520a

