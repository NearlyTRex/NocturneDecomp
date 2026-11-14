; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtrace_cpp_FUN_0048ca40(CDemonRaytrace *param_1,int *param_2,int param_3,int param_4,int param_5)
;
;
; Referenced Globals:
;   undefined4 DAT_005db968
;
; Called Functions:
;   core_dtrace.cpp_FUN_0048c510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048ca40
        ;   Label: core_dtrace.cpp_FUN_0048ca40
    PUSH ESI                            ; 0048ca41
    PUSH EDI                            ; 0048ca42
    PUSH EBP                            ; 0048ca43
    SUB ESP,0x30                        ; 0048ca44
    MOV ESI,dword ptr [ESP + 0x44]      ; 0048ca47
    MOV EBP,dword ptr [ESP + 0x48]      ; 0048ca4b
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0048ca4f
    MOV dword ptr [ESP + 0x2c],EAX      ; 0048ca53
    MOV EAX,dword ptr [ESP + 0x50]      ; 0048ca57
    FILD dword ptr [ESP + 0x2c]         ; 0048ca5b
    MOV dword ptr [ESP + 0x2c],EAX      ; 0048ca5f
    FMUL float ptr [ESI + 0x28]         ; 0048ca63
    FILD dword ptr [ESP + 0x2c]         ; 0048ca66
    MOV EAX,dword ptr [ESP + 0x54]      ; 0048ca6a
    FMUL float ptr [ESI + 0x2c]         ; 0048ca6e
    MOV dword ptr [ESP + 0x2c],EAX      ; 0048ca71
    XOR EDX,EDX                         ; 0048ca75
    FILD dword ptr [ESP + 0x2c]         ; 0048ca77
    FMUL float ptr [ESI + 0x30]         ; 0048ca7b
    MOV dword ptr [ESP + 0x24],EDX      ; 0048ca7e
    FXCH ST2                            ; 0048ca82
    FADD float ptr [ESI + 0x10]         ; 0048ca84
    MOV dword ptr [ESP + 0x18],EDX      ; 0048ca87
    FSTP float ptr [ESP]                ; 0048ca8b
    FADD float ptr [ESI + 0x14]         ; 0048ca8e
    FXCH                                ; 0048ca91
    FADD float ptr [ESI + 0x18]         ; 0048ca93
    FXCH                                ; 0048ca96
    FSTP float ptr [ESP + 0x4]          ; 0048ca98
    FSTP float ptr [ESP + 0x8]          ; 0048ca9c
    MOV EAX,dword ptr [ESP + 0x18]      ; 0048caa0
        ;   Label: LAB_0048caa0
    XOR EDI,EDI                         ; 0048caa4
    MOV dword ptr [ESP + 0x1c],EAX      ; 0048caa6
    MOV dword ptr [ESP + 0x20],EAX      ; 0048caaa
    MOV EBX,dword ptr [EBP]             ; 0048caae
        ;   Label: LAB_0048caae
    TEST EBX,EBX                        ; 0048cab1
    JZ 0x0048cb51                       ; 0048cab3
        ;   XREF to: 0048cb51 (CONDITIONAL_JUMP)  ; LAB_0048cb51
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0048cab9
    LEA EAX,[EBX + EDX*0x1]             ; 0048cabd
    CMP byte ptr [EAX],0x0              ; 0048cac0
    JZ 0x0048cb51                       ; 0048cac3
        ;   XREF to: 0048cb51 (CONDITIONAL_JUMP)  ; LAB_0048cb51
    MOV EAX,dword ptr [ESP + 0x20]      ; 0048cac9
    XOR EBX,EBX                         ; 0048cacd
    MOV dword ptr [ESP + 0x28],EAX      ; 0048cacf
    MOV ECX,dword ptr [ESP + 0x28]      ; 0048cad3
        ;   Label: LAB_0048cad3
    MOV EAX,dword ptr [EBP]             ; 0048cad7
    ADD EAX,ECX                         ; 0048cada
    MOV AL,byte ptr [EAX]               ; 0048cadc
    XOR EDX,EDX                         ; 0048cade
    AND EAX,0xff                        ; 0048cae0
    MOV DL,byte ptr [EBX + 0x61ab68]    ; 0048cae5
    TEST EAX,EDX                        ; 0048caeb
    JZ 0x0048cb4b                       ; 0048caed
        ;   XREF to: 0048cb4b (CONDITIONAL_JUMP)  ; LAB_0048cb4b
    MOV dword ptr [ESP + 0x2c],EBX      ; 0048caef
    FILD dword ptr [ESP + 0x2c]         ; 0048caf3
    FMUL float ptr [ESI + 0x28]         ; 0048caf7
    FLD float ptr [0x005db968]          ; 0048cafa | DAT_005db968
    FXCH                                ; 0048cb00
    FMUL ST1                            ; 0048cb02
    MOV dword ptr [ESP + 0x2c],EDI      ; 0048cb04
    FADD float ptr [ESP]                ; 0048cb08
    FILD dword ptr [ESP + 0x2c]         ; 0048cb0b
    FXCH                                ; 0048cb0f
    FSTP float ptr [ESP + 0xc]          ; 0048cb11
    FMUL float ptr [ESI + 0x2c]         ; 0048cb15
    MOV EAX,dword ptr [ESP + 0x24]      ; 0048cb18
    FMUL ST1                            ; 0048cb1c
    MOV dword ptr [ESP + 0x2c],EAX      ; 0048cb1e
    FADD float ptr [ESP + 0x4]          ; 0048cb22
    FILD dword ptr [ESP + 0x2c]         ; 0048cb26
    FXCH                                ; 0048cb2a
    FSTP float ptr [ESP + 0x10]         ; 0048cb2c
    FMUL float ptr [ESI + 0x30]         ; 0048cb30
    LEA EAX,[ESP + 0xc]                 ; 0048cb33
    FMULP                               ; 0048cb37
    PUSH EAX                            ; 0048cb39
    FADD float ptr [ESP + 0xc]          ; 0048cb3a
    PUSH ESI                            ; 0048cb3e
    FSTP float ptr [ESP + 0x1c]         ; 0048cb3f
    CALL core_dtrace.cpp_FUN_0048c510   ; 0048cb43
        ;   XREF to: 0048c510 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_FUN_0048c510(CDemonRaytrace * this_ptr, CVector3f * world_pos)
    ADD ESP,0x8                         ; 0048cb48
    INC EBX                             ; 0048cb4b
        ;   Label: LAB_0048cb4b
    CMP EBX,0x8                         ; 0048cb4c
    JL 0x0048cad3                       ; 0048cb4f
        ;   XREF to: 0048cad3 (CONDITIONAL_JUMP)  ; LAB_0048cad3
    MOV EAX,dword ptr [ESP + 0x20]      ; 0048cb51
        ;   Label: LAB_0048cb51
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0048cb55
    INC EDI                             ; 0048cb59
    INC EAX                             ; 0048cb5a
    INC EBX                             ; 0048cb5b
    MOV dword ptr [ESP + 0x20],EAX      ; 0048cb5c
    MOV dword ptr [ESP + 0x1c],EBX      ; 0048cb60
    CMP EDI,0x8                         ; 0048cb64
    JL 0x0048caae                       ; 0048cb67
        ;   XREF to: 0048caae (CONDITIONAL_JUMP)  ; LAB_0048caae
    MOV ECX,dword ptr [ESP + 0x24]      ; 0048cb6d
    MOV EDX,dword ptr [ESP + 0x18]      ; 0048cb71
    INC ECX                             ; 0048cb75
    ADD EDX,0x8                         ; 0048cb76
    MOV dword ptr [ESP + 0x24],ECX      ; 0048cb79
    MOV dword ptr [ESP + 0x18],EDX      ; 0048cb7d
    CMP ECX,0x8                         ; 0048cb81
    JL 0x0048caa0                       ; 0048cb84
        ;   XREF to: 0048caa0 (CONDITIONAL_JUMP)  ; LAB_0048caa0
    ADD ESP,0x30                        ; 0048cb8a
    POP EBP                             ; 0048cb8d
    POP EDI                             ; 0048cb8e
    POP ESI                             ; 0048cb8f
    POP EBX                             ; 0048cb90
    RET                                 ; 0048cb91

