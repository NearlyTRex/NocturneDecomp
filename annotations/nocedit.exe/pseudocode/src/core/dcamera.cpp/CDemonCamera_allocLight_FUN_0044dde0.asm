; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl char * __cdecl core_dcamera_cpp_CDemonCamera_allocLight_FUN_0044dde0(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   int g_LightBufferPoolIndex
;   char[25][307200] g_LightBufferPool
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [0x00c1a204]      ; 0044dde0 | g_LightBufferPoolIndex
        ;   Label: core_dcamera.cpp_CDemonCamera_allocLight_FUN_0044dde0
    LEA EAX,[ECX*0x4 + 0x0]             ; 0044dde6
    ADD EAX,ECX                         ; 0044dded
    SHL EAX,0xc                         ; 0044ddef
    MOV EDX,EAX                         ; 0044ddf2
    SHL EAX,0x4                         ; 0044ddf4
    SUB EAX,EDX                         ; 0044ddf7
    INC ECX                             ; 0044ddf9
    ADD EAX,0xc1a208                    ; 0044ddfa | g_LightBufferPool
    CMP ECX,0x18                        ; 0044ddff
    JBE 0x0044de06                      ; 0044de02
        ;   XREF to: 0044de06 (CONDITIONAL_JUMP)  ; LAB_0044de06
    XOR EAX,EAX                         ; 0044de04
    MOV dword ptr [0x00c1a204],ECX      ; 0044de06 | g_LightBufferPoolIndex
        ;   Label: LAB_0044de06
    RET                                 ; 0044de0c

