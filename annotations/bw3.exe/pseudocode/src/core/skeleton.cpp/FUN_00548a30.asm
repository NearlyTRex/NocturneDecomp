; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * core_skeleton_cpp_FUN_00548a30(int param_1,int param_2,int param_3,int param_4)
;
;
; XREF[1]:
;   core_skeleton.cpp_FUN_0054e460 at 0054e48c
;
; Called Functions:
;   core_xform.cpp_FUN_00583260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548a30
        ;   Label: core_skeleton.cpp_FUN_00548a30
    PUSH EDI                            ; 00548a31
    PUSH EBP                            ; 00548a32
    SUB ESP,0x64                        ; 00548a33
    MOV dword ptr [ESP + 0x54],ESI      ; 00548a36
    MOV ESI,dword ptr [ESP + 0x7c]      ; 00548a3a
    MOV EAX,dword ptr [ESP + 0x78]      ; 00548a3e
    LEA EBX,[ESI*0x4 + 0x0]             ; 00548a42
    MOV EDX,dword ptr [ESP + 0x74]      ; 00548a49
    SUB EBX,ESI                         ; 00548a4d
    SHL EAX,0x2                         ; 00548a4f
    SHL EBX,0x2                         ; 00548a52
    ADD EAX,EDX                         ; 00548a55
    ADD EBX,ESI                         ; 00548a57
    MOV EAX,dword ptr [EAX + 0x40]      ; 00548a59
    SHL EBX,0x2                         ; 00548a5c
    ADD EAX,EBX                         ; 00548a5f
    MOV dword ptr [ESP + 0x58],EAX      ; 00548a61
    MOV EBX,dword ptr [ESP + 0x58]      ; 00548a65
    MOV DL,byte ptr [EBX]               ; 00548a69
    ADD EAX,0x10                        ; 00548a6b
    CMP DL,0x1                          ; 00548a6e
    JZ 0x00548aba                       ; 00548a71
        ;   XREF to: 00548aba (CONDITIONAL_JUMP)  ; LAB_00548aba
    ADD EBX,0x4                         ; 00548a73
    MOV dword ptr [ESP + 0x5c],EAX      ; 00548a76
    XOR ECX,ECX                         ; 00548a7a
    XOR EBP,EBP                         ; 00548a7c
    MOV EAX,dword ptr [ESP + 0x58]      ; 00548a7e
    MOV dword ptr [ESP + 0x34],ECX      ; 00548a82
    MOV dword ptr [ESP + 0x38],ECX      ; 00548a86
    MOV dword ptr [ESP + 0x30],ECX      ; 00548a8a
    MOV dword ptr [ESP + 0x60],EAX      ; 00548a8e
    MOV ESI,dword ptr [ESP + 0x58]      ; 00548a92
        ;   Label: LAB_00548a92
    MOVZX ESI,byte ptr [ESI]            ; 00548a96
    CMP EBP,ESI                         ; 00548a99
    JL 0x00548aeb                       ; 00548a9b
        ;   XREF to: 00548aeb (CONDITIONAL_JUMP)  ; LAB_00548aeb
    MOV EDI,ESP                         ; 00548a9d
    LEA ESI,[ESP + 0x30]                ; 00548a9f
    MOVSD ES:EDI,ESI                    ; 00548aa3
        ;   Label: LAB_00548aa3
    MOVSD ES:EDI,ESI                    ; 00548aa4
    MOVSD ES:EDI,ESI                    ; 00548aa5
    MOV EDI,dword ptr [ESP + 0x54]      ; 00548aa6
    MOV ESI,ESP                         ; 00548aaa
    MOVSD ES:EDI,ESI                    ; 00548aac
    MOVSD ES:EDI,ESI                    ; 00548aad
    MOVSD ES:EDI,ESI                    ; 00548aae
    MOV EAX,dword ptr [ESP + 0x54]      ; 00548aaf
    ADD ESP,0x64                        ; 00548ab3
    POP EBP                             ; 00548ab6
    POP EDI                             ; 00548ab7
    POP EBX                             ; 00548ab8
    RET                                 ; 00548ab9
    MOVZX ESI,byte ptr [EBX + 0x1]      ; 00548aba
        ;   Label: LAB_00548aba
    LEA EBX,[ESI*0x4 + 0x0]             ; 00548abe
    SUB EBX,ESI                         ; 00548ac5
    MOV EDI,dword ptr [ESP + 0x80]      ; 00548ac7
    SHL EBX,0x4                         ; 00548ace
    ADD EBX,EDI                         ; 00548ad1
    PUSH EBX                            ; 00548ad3
    PUSH EAX                            ; 00548ad4
    LEA ESI,[ESP + 0x20]                ; 00548ad5
    LEA EDI,[ESP + 0x8]                 ; 00548ad9
    CALL core_xform.cpp_FUN_00583260    ; 00548add
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    LEA ESI,[ESP + 0x20]                ; 00548ae2
    ADD ESP,0x8                         ; 00548ae6
    JMP 0x00548aa3                      ; 00548ae9
        ;   XREF to: 00548aa3 (UNCONDITIONAL_JUMP)  ; LAB_00548aa3
    MOV ESI,dword ptr [ESP + 0x60]      ; 00548aeb
        ;   Label: LAB_00548aeb
    MOVZX ESI,byte ptr [ESI + 0x1]      ; 00548aef
    IMUL ESI,ESI,0x30                   ; 00548af3
    ADD ESI,dword ptr [ESP + 0x80]      ; 00548af6
    PUSH ESI                            ; 00548afd
    MOV EDX,dword ptr [ESP + 0x60]      ; 00548afe
    PUSH EDX                            ; 00548b02
    LEA ESI,[ESP + 0x14]                ; 00548b03
    LEA EDI,[ESP + 0x2c]                ; 00548b07
    CALL core_xform.cpp_FUN_00583260    ; 00548b0b
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    LEA ESI,[ESP + 0x14]                ; 00548b10
    ADD ESP,0x8                         ; 00548b14
    MOVSD ES:EDI,ESI                    ; 00548b17
    MOVSD ES:EDI,ESI                    ; 00548b18
    MOVSD ES:EDI,ESI                    ; 00548b19
    FLD float ptr [ESP + 0x24]          ; 00548b1a
    FMUL float ptr [EBX]                ; 00548b1e
    FLD float ptr [ESP + 0x28]          ; 00548b20
    FMUL float ptr [EBX]                ; 00548b24
    FLD float ptr [ESP + 0x2c]          ; 00548b26
    FMUL float ptr [EBX]                ; 00548b2a
    ADD EBX,0x4                         ; 00548b2c
    INC EBP                             ; 00548b2f
    FLD float ptr [ESP + 0x30]          ; 00548b30
    FLD float ptr [ESP + 0x34]          ; 00548b34
    FLD float ptr [ESP + 0x38]          ; 00548b38
    MOV ECX,dword ptr [ESP + 0x5c]      ; 00548b3c
    LEA EDI,[ESP + 0x3c]                ; 00548b40
    LEA ESI,[ESP + 0x48]                ; 00548b44
    ADD ECX,0xc                         ; 00548b48
    FXCH ST5                            ; 00548b4b
    FSTP float ptr [ESP + 0x48]         ; 00548b4d
    FXCH ST3                            ; 00548b51
    FSTP float ptr [ESP + 0x4c]         ; 00548b53
    FXCH                                ; 00548b57
    FSTP float ptr [ESP + 0x50]         ; 00548b59
    MOVSD ES:EDI,ESI                    ; 00548b5d
    MOVSD ES:EDI,ESI                    ; 00548b5e
    MOVSD ES:EDI,ESI                    ; 00548b5f
    MOV dword ptr [ESP + 0x5c],ECX      ; 00548b60
    MOV ESI,dword ptr [ESP + 0x60]      ; 00548b64
    FADD float ptr [ESP + 0x3c]         ; 00548b68
    FXCH                                ; 00548b6c
    FADD float ptr [ESP + 0x40]         ; 00548b6e
    FXCH ST2                            ; 00548b72
    FADD float ptr [ESP + 0x44]         ; 00548b74
    FXCH                                ; 00548b78
    FSTP float ptr [ESP + 0x30]         ; 00548b7a
    FXCH                                ; 00548b7e
    FSTP float ptr [ESP + 0x34]         ; 00548b80
    INC ESI                             ; 00548b84
    FSTP float ptr [ESP + 0x38]         ; 00548b85
    MOV dword ptr [ESP + 0x60],ESI      ; 00548b89
    JMP 0x00548a92                      ; 00548b8d
        ;   XREF to: 00548a92 (UNCONDITIONAL_JUMP)  ; LAB_00548a92

