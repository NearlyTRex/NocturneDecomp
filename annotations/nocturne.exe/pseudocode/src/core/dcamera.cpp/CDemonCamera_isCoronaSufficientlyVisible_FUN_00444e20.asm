; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dcamera_cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00444e20(CDemonCamera *this_ptr,CDemonLight *light_source)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CDemonLight *    Stack[0x8]:4   light_source
;
; XREF[1]:
;   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_00507f80 at 00508261
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00444e20
        ;   Label: core_dcamera.cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00444e20
    PUSH ESI                            ; 00444e21
    PUSH EDI                            ; 00444e22
    PUSH EBP                            ; 00444e23
    SUB ESP,0xc                         ; 00444e24
    MOV EBP,dword ptr [ESP + 0x20]      ; 00444e27
    MOV EDI,dword ptr [ESP + 0x24]      ; 00444e2b
    XOR EBX,EBX                         ; 00444e2f
    MOV ECX,dword ptr [EBP + 0x154]     ; 00444e31
    MOV dword ptr [ESP],EBX             ; 00444e37
    TEST ECX,ECX                        ; 00444e3a
    JLE 0x00444ed5                      ; 00444e3c
        ;   XREF to: 00444ed5 (CONDITIONAL_JUMP)  ; LAB_00444ed5
    MOV EAX,dword ptr [EDI + 0x1c4c]    ; 00444e42
    MOV EDX,dword ptr [EDI + 0x1c48]    ; 00444e48
    MOV dword ptr [ESP + 0x4],EAX       ; 00444e4e
    MOV dword ptr [ESP + 0x8],EDX       ; 00444e52
    MOV ESI,dword ptr [EDI + 0x14c8]    ; 00444e56
        ;   Label: LAB_00444e56
    MOV EAX,dword ptr [EDI + 0x1888]    ; 00444e5c
    SUB EAX,ESI                         ; 00444e62
    LEA EDX,[EAX + 0x1]                 ; 00444e64
    LEA ECX,[ESI*0x4 + 0x0]             ; 00444e67
    MOV EAX,dword ptr [ESP + 0x8]       ; 00444e6e
    MOV ESI,dword ptr [ESP + 0x4]       ; 00444e72
    ADD EAX,ECX                         ; 00444e76
    ADD ECX,ESI                         ; 00444e78
    TEST EDX,EDX                        ; 00444e7a
    JLE 0x00444e9e                      ; 00444e7c
        ;   XREF to: 00444e9e (CONDITIONAL_JUMP)  ; LAB_00444e9e
    CMP dword ptr [EAX],0x0             ; 00444e7e
        ;   Label: LAB_00444e7e
    JBE 0x00444e93                      ; 00444e81
        ;   XREF to: 00444e93 (CONDITIONAL_JUMP)  ; LAB_00444e93
    MOV ESI,dword ptr [ECX]             ; 00444e83
    MOV SI,word ptr [ESI]               ; 00444e85
    AND ESI,0xffff                      ; 00444e88
    CMP ESI,dword ptr [EAX]             ; 00444e8e
    JBE 0x00444e93                      ; 00444e90
        ;   XREF to: 00444e93 (CONDITIONAL_JUMP)  ; LAB_00444e93
    INC EBX                             ; 00444e92
    ADD EAX,0x4                         ; 00444e93
        ;   Label: LAB_00444e93
    DEC EDX                             ; 00444e96
    ADD ECX,0x4                         ; 00444e97
    TEST EDX,EDX                        ; 00444e9a
    JG 0x00444e7e                       ; 00444e9c
        ;   XREF to: 00444e7e (CONDITIONAL_JUMP)  ; LAB_00444e7e
    CMP EBX,0x300                       ; 00444e9e
        ;   Label: LAB_00444e9e
    JG 0x00444edf                       ; 00444ea4
        ;   XREF to: 00444edf (CONDITIONAL_JUMP)  ; LAB_00444edf
    MOV ESI,dword ptr [ESP + 0x4]       ; 00444ea6
    MOV EAX,dword ptr [ESP + 0x8]       ; 00444eaa
    MOV EDX,dword ptr [ESP]             ; 00444eae
    ADD EDI,0x4                         ; 00444eb1
    MOV ECX,dword ptr [EBP + 0x154]     ; 00444eb4
    ADD ESI,0x500                       ; 00444eba
    ADD EAX,0x500                       ; 00444ec0
    INC EDX                             ; 00444ec5
    MOV dword ptr [ESP + 0x4],ESI       ; 00444ec6
    MOV dword ptr [ESP + 0x8],EAX       ; 00444eca
    MOV dword ptr [ESP],EDX             ; 00444ece
    CMP EDX,ECX                         ; 00444ed1
    JL 0x00444e56                       ; 00444ed3
        ;   XREF to: 00444e56 (CONDITIONAL_JUMP)  ; LAB_00444e56
    XOR EAX,EAX                         ; 00444ed5
        ;   Label: LAB_00444ed5
    ADD ESP,0xc                         ; 00444ed7
    POP EBP                             ; 00444eda
    POP EDI                             ; 00444edb
    POP ESI                             ; 00444edc
    POP EBX                             ; 00444edd
    RET                                 ; 00444ede
    MOV EAX,0x1                         ; 00444edf
        ;   Label: LAB_00444edf
    ADD ESP,0xc                         ; 00444ee4
    POP EBP                             ; 00444ee7
    POP EDI                             ; 00444ee8
    POP ESI                             ; 00444ee9
    POP EBX                             ; 00444eea
    RET                                 ; 00444eeb

