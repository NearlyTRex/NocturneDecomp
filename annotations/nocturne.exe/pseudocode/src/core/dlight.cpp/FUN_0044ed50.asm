; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dlight_cpp_FUN_0044ed50(int param_1,int param_2,int param_3)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044ed50
        ;   Label: core_dlight.cpp_FUN_0044ed50
    MOV EBX,dword ptr [ESP + 0x10]      ; 0044ed51
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044ed55
    MOV EAX,dword ptr [ESP + 0xc]       ; 0044ed59
    SHL EDX,0x2                         ; 0044ed5d
    MOV EAX,dword ptr [EAX*0x4 + 0x1bd2fa0] ; 0044ed60
    LEA ECX,[EAX + EDX*0x1]             ; 0044ed67
    MOV EAX,EBX                         ; 0044ed6a
    SHL EAX,0x8                         ; 0044ed6c
    LEA EDX,[EBX + EAX*0x1]             ; 0044ed6f
    MOV EAX,EBX                         ; 0044ed72
    SHL EAX,0x10                        ; 0044ed74
    ADD EDX,EAX                         ; 0044ed77
    MOV dword ptr [ECX],EDX             ; 0044ed79
    POP EBX                             ; 0044ed7b
    RET                                 ; 0044ed7c

