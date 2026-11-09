; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_dcamera_cpp_CDemonCamera_allocLight_FUN_0044a9f0(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_00b9e554
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [0x00b9e554]      ; 0044a9f0 | DAT_00b9e554
        ;   Label: core_dcamera.cpp_CDemonCamera_allocLight_FUN_0044a9f0
    LEA EAX,[ECX*0x4 + 0x0]             ; 0044a9f6
    ADD EAX,ECX                         ; 0044a9fd
    SHL EAX,0xc                         ; 0044a9ff
    MOV EDX,EAX                         ; 0044aa02
    SHL EAX,0x4                         ; 0044aa04
    SUB EAX,EDX                         ; 0044aa07
    INC ECX                             ; 0044aa09
    ADD EAX,0xb9e558                    ; 0044aa0a
    CMP ECX,0x18                        ; 0044aa0f
    JBE 0x0044aa16                      ; 0044aa12
        ;   XREF to: 0044aa16 (CONDITIONAL_JUMP)  ; LAB_0044aa16
    XOR EAX,EAX                         ; 0044aa14
    MOV dword ptr [0x00b9e554],ECX      ; 0044aa16 | DAT_00b9e554
        ;   Label: LAB_0044aa16
    RET                                 ; 0044aa1c

