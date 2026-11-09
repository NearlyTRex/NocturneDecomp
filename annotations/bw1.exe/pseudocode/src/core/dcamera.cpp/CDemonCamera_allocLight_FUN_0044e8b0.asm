; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_dcamera_cpp_CDemonCamera_allocLight_FUN_0044e8b0(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_00b81ca4
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [0x00b81ca4]      ; 0044e8b0 | DAT_00b81ca4
        ;   Label: core_dcamera.cpp_CDemonCamera_allocLight_FUN_0044e8b0
    LEA EAX,[ECX*0x4 + 0x0]             ; 0044e8b6
    ADD EAX,ECX                         ; 0044e8bd
    SHL EAX,0xc                         ; 0044e8bf
    MOV EDX,EAX                         ; 0044e8c2
    SHL EAX,0x4                         ; 0044e8c4
    SUB EAX,EDX                         ; 0044e8c7
    INC ECX                             ; 0044e8c9
    ADD EAX,0xb81ca8                    ; 0044e8ca
    CMP ECX,0x18                        ; 0044e8cf
    JBE 0x0044e8d6                      ; 0044e8d2
        ;   XREF to: 0044e8d6 (CONDITIONAL_JUMP)  ; LAB_0044e8d6
    XOR EAX,EAX                         ; 0044e8d4
    MOV dword ptr [0x00b81ca4],ECX      ; 0044e8d6 | DAT_00b81ca4
        ;   Label: LAB_0044e8d6
    RET                                 ; 0044e8dc

