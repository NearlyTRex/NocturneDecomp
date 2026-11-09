; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dpart_cpp_FUN_00461e10(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01ba51c8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00461e10
        ;   Label: core_dpart.cpp_FUN_00461e10
    PUSH EDI                            ; 00461e11
    PUSH EBP                            ; 00461e12
    MOV EBX,dword ptr [ESP + 0x10]      ; 00461e13
    MOV EDI,dword ptr [ESP + 0x14]      ; 00461e17
    MOV EDX,dword ptr [EDI + 0x14]      ; 00461e1b
    MOV EAX,dword ptr [EBX + 0x14]      ; 00461e1e
    SAR EDX,0x10                        ; 00461e21
    SAR EAX,0x10                        ; 00461e24
    CMP EAX,EDX                         ; 00461e27
    JZ 0x00461f0e                       ; 00461e29
        ;   XREF to: 00461f0e (CONDITIONAL_JUMP)  ; LAB_00461f0e
    PUSH ESI                            ; 00461e2f
    MOV ESI,dword ptr [EDI + 0x14]      ; 00461e30
    CMP ESI,dword ptr [EBX + 0x14]      ; 00461e33
    JGE 0x00461e44                      ; 00461e36
        ;   XREF to: 00461e44 (CONDITIONAL_JUMP)  ; LAB_00461e44
    MOV ECX,EBX                         ; 00461e38
    MOV EBX,EDI                         ; 00461e3a
    MOV EDI,ECX                         ; 00461e3c
    MOV ECX,EAX                         ; 00461e3e
    MOV EAX,EDX                         ; 00461e40
    MOV EDX,ECX                         ; 00461e42
    MOV ESI,dword ptr [0x01ba51c8]      ; 00461e44 | DAT_01ba51c8
        ;   Label: LAB_00461e44
    LEA ECX,[ESI*0x4 + 0x0]             ; 00461e4a
    ADD ECX,ESI                         ; 00461e51
    MOV ESI,0x1ba51cc                   ; 00461e53
    SHL ECX,0x4                         ; 00461e58
    ADD ESI,ECX                         ; 00461e5b
    MOV dword ptr [ESI],EAX             ; 00461e5d

