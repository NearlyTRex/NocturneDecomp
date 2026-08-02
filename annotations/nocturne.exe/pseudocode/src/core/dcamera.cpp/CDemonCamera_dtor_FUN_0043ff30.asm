; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonCamera * __cdecl core_dcamera_cpp_CDemonCamera_dtor_FUN_0043ff30(CDemonCamera *this_ptr,uint flags)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_dlight.cpp_CDemonLight_dtor_FUN_0044e1c0 at 0044e1d4
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_free_FUN_004401d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043ff30
        ;   Label: core_dcamera.cpp_CDemonCamera_dtor_FUN_0043ff30
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043ff31
    PUSH EBX                            ; 0043ff35
    CALL core_dcamera.cpp_CDemonCamera_free_FUN_004401d0 ; 0043ff36
        ;   XREF to: 004401d0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_free_FUN_004401d0(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 0043ff3b
    MOV EAX,EBX                         ; 0043ff3e
    POP EBX                             ; 0043ff40
    RET                                 ; 0043ff41

