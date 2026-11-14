; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dcamera_cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00451c20(CDemonCamera *this_ptr,CDemonLight *light_source)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CDemonLight *    Stack[0x8]:4   light_source
;
; XREF[1]:
;   core_set.cpp_FUN_0054e6a0 at 0054eaf7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00451c20
        ;   Label: core_dcamera.cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00451c20
    PUSH ESI                            ; 00451c21
    PUSH EDI                            ; 00451c22
    PUSH EBP                            ; 00451c23
    SUB ESP,0xc                         ; 00451c24
    MOV EBP,dword ptr [ESP + 0x20]      ; 00451c27
    MOV EDI,dword ptr [ESP + 0x24]      ; 00451c2b
    XOR EBX,EBX                         ; 00451c2f
    MOV ECX,dword ptr [EBP + 0x154]     ; 00451c31
    MOV dword ptr [ESP],EBX             ; 00451c37
    TEST ECX,ECX                        ; 00451c3a
    JLE 0x00451cd5                      ; 00451c3c
        ;   XREF to: 00451cd5 (CONDITIONAL_JUMP)  ; LAB_00451cd5
    MOV EAX,dword ptr [EDI + 0x1c4c]    ; 00451c42
    MOV EDX,dword ptr [EDI + 0x1c48]    ; 00451c48
    MOV dword ptr [ESP + 0x4],EAX       ; 00451c4e
    MOV dword ptr [ESP + 0x8],EDX       ; 00451c52
    MOV ESI,dword ptr [EDI + 0x14c8]    ; 00451c56
        ;   Label: LAB_00451c56
    MOV EAX,dword ptr [EDI + 0x1888]    ; 00451c5c
    SUB EAX,ESI                         ; 00451c62
    LEA EDX,[EAX + 0x1]                 ; 00451c64
    LEA ECX,[ESI*0x4 + 0x0]             ; 00451c67
    MOV EAX,dword ptr [ESP + 0x8]       ; 00451c6e
    MOV ESI,dword ptr [ESP + 0x4]       ; 00451c72
    ADD EAX,ECX                         ; 00451c76
    ADD ECX,ESI                         ; 00451c78
    TEST EDX,EDX                        ; 00451c7a
    JLE 0x00451c9e                      ; 00451c7c
        ;   XREF to: 00451c9e (CONDITIONAL_JUMP)  ; LAB_00451c9e
    CMP dword ptr [EAX],0x0             ; 00451c7e
        ;   Label: LAB_00451c7e
    JBE 0x00451c93                      ; 00451c81
        ;   XREF to: 00451c93 (CONDITIONAL_JUMP)  ; LAB_00451c93
    MOV ESI,dword ptr [ECX]             ; 00451c83
    MOV SI,word ptr [ESI]               ; 00451c85
    AND ESI,0xffff                      ; 00451c88
    CMP ESI,dword ptr [EAX]             ; 00451c8e
    JBE 0x00451c93                      ; 00451c90
        ;   XREF to: 00451c93 (CONDITIONAL_JUMP)  ; LAB_00451c93
    INC EBX                             ; 00451c92
    ADD EAX,0x4                         ; 00451c93
        ;   Label: LAB_00451c93
    DEC EDX                             ; 00451c96
    ADD ECX,0x4                         ; 00451c97
    TEST EDX,EDX                        ; 00451c9a
    JG 0x00451c7e                       ; 00451c9c
        ;   XREF to: 00451c7e (CONDITIONAL_JUMP)  ; LAB_00451c7e
    CMP EBX,0x300                       ; 00451c9e
        ;   Label: LAB_00451c9e
    JG 0x00451cdf                       ; 00451ca4
        ;   XREF to: 00451cdf (CONDITIONAL_JUMP)  ; LAB_00451cdf
    MOV ESI,dword ptr [ESP + 0x4]       ; 00451ca6
    MOV EAX,dword ptr [ESP + 0x8]       ; 00451caa
    MOV EDX,dword ptr [ESP]             ; 00451cae
    ADD EDI,0x4                         ; 00451cb1
    MOV ECX,dword ptr [EBP + 0x154]     ; 00451cb4
    ADD ESI,0x500                       ; 00451cba
    ADD EAX,0x500                       ; 00451cc0
    INC EDX                             ; 00451cc5
    MOV dword ptr [ESP + 0x4],ESI       ; 00451cc6
    MOV dword ptr [ESP + 0x8],EAX       ; 00451cca
    MOV dword ptr [ESP],EDX             ; 00451cce
    CMP EDX,ECX                         ; 00451cd1
    JL 0x00451c56                       ; 00451cd3
        ;   XREF to: 00451c56 (CONDITIONAL_JUMP)  ; LAB_00451c56
    XOR EAX,EAX                         ; 00451cd5
        ;   Label: LAB_00451cd5
    ADD ESP,0xc                         ; 00451cd7
    POP EBP                             ; 00451cda
    POP EDI                             ; 00451cdb
    POP ESI                             ; 00451cdc
    POP EBX                             ; 00451cdd
    RET                                 ; 00451cde
    MOV EAX,0x1                         ; 00451cdf
        ;   Label: LAB_00451cdf
    ADD ESP,0xc                         ; 00451ce4
    POP EBP                             ; 00451ce7
    POP EDI                             ; 00451ce8
    POP ESI                             ; 00451ce9
    POP EBX                             ; 00451cea
    RET                                 ; 00451ceb

