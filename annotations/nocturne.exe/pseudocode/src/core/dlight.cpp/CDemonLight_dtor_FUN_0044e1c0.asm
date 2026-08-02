; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonLight * __cdecl core_dlight_cpp_CDemonLight_dtor_FUN_0044e1c0(CDemonLight *this_ptr,uint flags)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[2]:
;   core_boxactor.cpp_CLightActor_dtor_FUN_0041fa10 at 0041fa25
;   core_set.cpp_FUN_0050ad20 at 0050adaa
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_dtor_FUN_0043ff30
;   core_dlight.cpp_FUN_0044e2c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0044e1c0
        ;   Label: core_dlight.cpp_CDemonLight_dtor_FUN_0044e1c0
    PUSH EDX                            ; 0044e1c4
    CALL core_dlight.cpp_FUN_0044e2c0   ; 0044e1c5
        ;   XREF to: 0044e2c0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_FUN_0044e2c0(CDemonLight * this_ptr)
    ADD ESP,0x4                         ; 0044e1ca
    PUSH 0x1                            ; 0044e1cd
    MOV ECX,dword ptr [ESP + 0x8]       ; 0044e1cf
    PUSH ECX                            ; 0044e1d3
    CALL core_dcamera.cpp_CDemonCamera_dtor_FUN_0043ff30 ; 0044e1d4
        ;   XREF to: 0043ff30 (UNCONDITIONAL_CALL)  ; CDemonCamera * core_dcamera.cpp_CDemonCamera_dtor_FUN_0043ff30(CDemonCamera * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0044e1d9
    RET                                 ; 0044e1dc

