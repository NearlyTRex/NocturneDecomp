; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_sampleFramebufferPixel_FUN_00442e70(CDemonCamera *this_ptr,int param_2)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
;
; Referenced Globals:
;   undefined4 DAT_01c35814
;   undefined4 DAT_01c35820
;   undefined4 DAT_01c3582c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00442e70
        ;   Label: core_dcamera.cpp_CDemonCamera_sampleFramebufferPixel_FUN_00442e70
    MOV EBX,dword ptr [ESP + 0x8]       ; 00442e71
    MOV EAX,dword ptr [ESP + 0xc]       ; 00442e75
    TEST byte ptr [EAX + 0x13],0x80     ; 00442e79
    JZ 0x00442e91                       ; 00442e7d
        ;   XREF to: 00442e91 (CONDITIONAL_JUMP)  ; LAB_00442e91
    MOV dword ptr [EAX + 0x28],0x0      ; 00442e7f
    MOV EDX,dword ptr [EAX + 0x28]      ; 00442e86
    MOV dword ptr [EAX + 0x24],EDX      ; 00442e89
    MOV dword ptr [EAX + 0x20],EDX      ; 00442e8c
    POP EBX                             ; 00442e8f
    RET                                 ; 00442e90
    PUSH ESI                            ; 00442e91
        ;   Label: LAB_00442e91
    MOV ECX,dword ptr [EAX + 0x14]      ; 00442e92
    MOV ESI,dword ptr [EBX + 0x144]     ; 00442e95
    SAR ECX,0x10                        ; 00442e9b
    IMUL ECX,ESI                        ; 00442e9e
    MOV EDX,dword ptr [EAX + 0x10]      ; 00442ea1
    SAR EDX,0x10                        ; 00442ea4
    ADD EDX,ECX                         ; 00442ea7
    MOV ECX,dword ptr [EBX + 0x158]     ; 00442ea9
    MOV EDX,dword ptr [ECX + EDX*0x4]   ; 00442eaf
    MOV CL,byte ptr [0x01c35814]        ; 00442eb2 | DAT_01c35814
    MOV EBX,EDX                         ; 00442eb8
    SHR EBX,CL                          ; 00442eba
    MOV ESI,EDX                         ; 00442ebc
    AND EBX,0xff                        ; 00442ebe
    MOV CL,byte ptr [0x01c35820]        ; 00442ec4 | DAT_01c35820
    SHL EBX,0x8                         ; 00442eca
    SHR ESI,CL                          ; 00442ecd
    MOV CL,byte ptr [0x01c3582c]        ; 00442ecf | DAT_01c3582c
    AND ESI,0xff                        ; 00442ed5
    MOV dword ptr [EAX + 0x20],EBX      ; 00442edb
    SHR EDX,CL                          ; 00442ede
    SHL ESI,0x8                         ; 00442ee0
    AND EDX,0xff                        ; 00442ee3
    MOV dword ptr [EAX + 0x24],ESI      ; 00442ee9
    SHL EDX,0x8                         ; 00442eec
    MOV dword ptr [EAX + 0x28],EDX      ; 00442eef
    POP ESI                             ; 00442ef2
    POP EBX                             ; 00442ef3
    RET                                 ; 00442ef4

