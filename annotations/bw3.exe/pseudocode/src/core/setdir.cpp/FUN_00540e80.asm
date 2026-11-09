; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_setdir_cpp_FUN_00540e80(int param_1,int param_2,int param_3)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00540e80
        ;   Label: core_setdir.cpp_FUN_00540e80
    MOV EBX,dword ptr [ESP + 0x10]      ; 00540e81
    MOV EDX,dword ptr [ESP + 0x8]       ; 00540e85
    MOV EAX,dword ptr [ESP + 0xc]       ; 00540e89
    SHL EDX,0x2                         ; 00540e8d
    MOV EAX,dword ptr [EAX*0x4 + 0x1c5faec] ; 00540e90
    LEA ECX,[EAX + EDX*0x1]             ; 00540e97
    MOV EAX,EBX                         ; 00540e9a
    SHL EAX,0x8                         ; 00540e9c
    LEA EDX,[EBX + EAX*0x1]             ; 00540e9f
    MOV EAX,EBX                         ; 00540ea2
    SHL EAX,0x10                        ; 00540ea4
    ADD EDX,EAX                         ; 00540ea7
    MOV dword ptr [ECX],EDX             ; 00540ea9
    POP EBX                             ; 00540eab
    RET                                 ; 00540eac

