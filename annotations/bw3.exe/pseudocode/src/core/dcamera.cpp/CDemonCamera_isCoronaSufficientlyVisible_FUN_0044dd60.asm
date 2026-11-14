; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dcamera_cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_0044dd60(CDemonCamera *this_ptr,CDemonLight *light_source)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CDemonLight *    Stack[0x8]:4   light_source
;
; XREF[1]:
;   core_set.cpp_FUN_00533e60 at 005342b7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044dd60
        ;   Label: core_dcamera.cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_0044dd60
    PUSH ESI                            ; 0044dd61
    PUSH EDI                            ; 0044dd62
    PUSH EBP                            ; 0044dd63
    SUB ESP,0xc                         ; 0044dd64
    MOV EBP,dword ptr [ESP + 0x20]      ; 0044dd67
    MOV EDI,dword ptr [ESP + 0x24]      ; 0044dd6b
    XOR EBX,EBX                         ; 0044dd6f
    MOV ECX,dword ptr [EBP + 0x154]     ; 0044dd71
    MOV dword ptr [ESP],EBX             ; 0044dd77
    TEST ECX,ECX                        ; 0044dd7a
    JLE 0x0044de15                      ; 0044dd7c
        ;   XREF to: 0044de15 (CONDITIONAL_JUMP)  ; LAB_0044de15
    MOV EAX,dword ptr [EDI + 0x1c4c]    ; 0044dd82
    MOV EDX,dword ptr [EDI + 0x1c48]    ; 0044dd88
    MOV dword ptr [ESP + 0x4],EAX       ; 0044dd8e
    MOV dword ptr [ESP + 0x8],EDX       ; 0044dd92
    MOV ESI,dword ptr [EDI + 0x14c8]    ; 0044dd96
        ;   Label: LAB_0044dd96
    MOV EAX,dword ptr [EDI + 0x1888]    ; 0044dd9c
    SUB EAX,ESI                         ; 0044dda2
    LEA EDX,[EAX + 0x1]                 ; 0044dda4
    LEA ECX,[ESI*0x4 + 0x0]             ; 0044dda7
    MOV EAX,dword ptr [ESP + 0x8]       ; 0044ddae
    MOV ESI,dword ptr [ESP + 0x4]       ; 0044ddb2
    ADD EAX,ECX                         ; 0044ddb6
    ADD ECX,ESI                         ; 0044ddb8
    TEST EDX,EDX                        ; 0044ddba
    JLE 0x0044ddde                      ; 0044ddbc
        ;   XREF to: 0044ddde (CONDITIONAL_JUMP)  ; LAB_0044ddde
    CMP dword ptr [EAX],0x0             ; 0044ddbe
        ;   Label: LAB_0044ddbe
    JBE 0x0044ddd3                      ; 0044ddc1
        ;   XREF to: 0044ddd3 (CONDITIONAL_JUMP)  ; LAB_0044ddd3
    MOV ESI,dword ptr [ECX]             ; 0044ddc3
    MOV SI,word ptr [ESI]               ; 0044ddc5
    AND ESI,0xffff                      ; 0044ddc8
    CMP ESI,dword ptr [EAX]             ; 0044ddce
    JBE 0x0044ddd3                      ; 0044ddd0
        ;   XREF to: 0044ddd3 (CONDITIONAL_JUMP)  ; LAB_0044ddd3
    INC EBX                             ; 0044ddd2
    ADD EAX,0x4                         ; 0044ddd3
        ;   Label: LAB_0044ddd3
    DEC EDX                             ; 0044ddd6
    ADD ECX,0x4                         ; 0044ddd7
    TEST EDX,EDX                        ; 0044ddda
    JG 0x0044ddbe                       ; 0044dddc
        ;   XREF to: 0044ddbe (CONDITIONAL_JUMP)  ; LAB_0044ddbe
    CMP EBX,0x300                       ; 0044ddde
        ;   Label: LAB_0044ddde
    JG 0x0044de1f                       ; 0044dde4
        ;   XREF to: 0044de1f (CONDITIONAL_JUMP)  ; LAB_0044de1f
    MOV ESI,dword ptr [ESP + 0x4]       ; 0044dde6
    MOV EAX,dword ptr [ESP + 0x8]       ; 0044ddea
    MOV EDX,dword ptr [ESP]             ; 0044ddee
    ADD EDI,0x4                         ; 0044ddf1
    MOV ECX,dword ptr [EBP + 0x154]     ; 0044ddf4
    ADD ESI,0x500                       ; 0044ddfa
    ADD EAX,0x500                       ; 0044de00
    INC EDX                             ; 0044de05
    MOV dword ptr [ESP + 0x4],ESI       ; 0044de06
    MOV dword ptr [ESP + 0x8],EAX       ; 0044de0a
    MOV dword ptr [ESP],EDX             ; 0044de0e
    CMP EDX,ECX                         ; 0044de11
    JL 0x0044dd96                       ; 0044de13
        ;   XREF to: 0044dd96 (CONDITIONAL_JUMP)  ; LAB_0044dd96
    XOR EAX,EAX                         ; 0044de15
        ;   Label: LAB_0044de15
    ADD ESP,0xc                         ; 0044de17
    POP EBP                             ; 0044de1a
    POP EDI                             ; 0044de1b
    POP ESI                             ; 0044de1c
    POP EBX                             ; 0044de1d
    RET                                 ; 0044de1e
    MOV EAX,0x1                         ; 0044de1f
        ;   Label: LAB_0044de1f
    ADD ESP,0xc                         ; 0044de24
    POP EBP                             ; 0044de27
    POP EDI                             ; 0044de28
    POP ESI                             ; 0044de29
    POP EBX                             ; 0044de2a
    RET                                 ; 0044de2b

