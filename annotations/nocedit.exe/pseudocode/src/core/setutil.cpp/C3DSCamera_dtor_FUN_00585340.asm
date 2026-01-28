; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl C3DSCamera * __cdecl core_setutil_cpp_C3DSCamera_dtor_FUN_00585340(C3DSCamera *this_ptr)
;
; Parameters:
; C3DSCamera *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 at 0057fa2e
;
; Called Functions:
;   core_setutil.cpp_C3DSCamera_free_FUN_00585360
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00585340
        ;   Label: core_setutil.cpp_C3DSCamera_dtor_FUN_00585340
    MOV EBX,dword ptr [ESP + 0x8]       ; 00585341
    PUSH EBX                            ; 00585345
    CALL core_setutil.cpp_C3DSCamera_free_FUN_00585360 ; 00585346
        ;   XREF to: 00585360 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSCamera_free_FUN_00585360(C3DSCamera * this_ptr)
    ADD ESP,0x4                         ; 0058534b
    MOV EAX,EBX                         ; 0058534e
    POP EBX                             ; 00585350
    RET                                 ; 00585351

