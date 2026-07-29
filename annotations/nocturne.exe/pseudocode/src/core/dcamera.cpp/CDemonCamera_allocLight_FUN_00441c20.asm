; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_dcamera_cpp_CDemonCamera_allocLight_FUN_00441c20(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_00b0e604
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [0x00b0e604]      ; 00441c20 | DAT_00b0e604
        ;   Label: core_dcamera.cpp_CDemonCamera_allocLight_FUN_00441c20
    LEA EAX,[ECX*0x4 + 0x0]             ; 00441c26
    ADD EAX,ECX                         ; 00441c2d
    SHL EAX,0xc                         ; 00441c2f
    MOV EDX,EAX                         ; 00441c32
    SHL EAX,0x4                         ; 00441c34
    SUB EAX,EDX                         ; 00441c37
    INC ECX                             ; 00441c39
    ADD EAX,0xb0e608                    ; 00441c3a
    CMP ECX,0x18                        ; 00441c3f
    JBE 0x00441c46                      ; 00441c42
        ;   XREF to: 00441c46 (CONDITIONAL_JUMP)  ; LAB_00441c46
    XOR EAX,EAX                         ; 00441c44
    MOV dword ptr [0x00b0e604],ECX      ; 00441c46 | DAT_00b0e604
        ;   Label: LAB_00441c46
    RET                                 ; 00441c4c

