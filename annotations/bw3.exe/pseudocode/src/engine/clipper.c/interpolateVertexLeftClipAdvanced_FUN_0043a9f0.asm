; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_0043a9f0(int *param_1,int *param_2,int *param_3)
;
;
; XREF[2]:
;   engine_clipper.c_FUN_0043aed0 at 0043af90
;   engine_clipper.c_clipPolygonToViewport_FUN_0043bac0 at 0043c06e
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043a9f0
        ;   Label: engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_0043a9f0
    PUSH ESI                            ; 0043a9f1
    PUSH EDI                            ; 0043a9f2
    PUSH EBP                            ; 0043a9f3
    MOV ESI,dword ptr [ESP + 0x14]      ; 0043a9f4
    MOV EBP,dword ptr [ESP + 0x18]      ; 0043a9f8
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0043a9fc
    MOV ECX,dword ptr [ESI]             ; 0043aa00
    ADD ECX,dword ptr [ESI + 0x8]       ; 0043aa02
    MOV EAX,dword ptr [EBP]             ; 0043aa05
    MOV EBX,ECX                         ; 0043aa08
    MOV EDX,dword ptr [EBP + 0x8]       ; 0043aa0a
    SUB EBX,EAX                         ; 0043aa0d
    SUB EBX,EDX                         ; 0043aa0f
    MOV EDX,ECX                         ; 0043aa11
    CMP EDX,EBX                         ; 0043aa13
    JGE 0x0043aa29                      ; 0043aa15
        ;   XREF to: 0043aa29 (CONDITIONAL_JUMP)  ; LAB_0043aa29
    NEG EBX                             ; 0043aa17
    CMP EDX,EBX                         ; 0043aa19
    JLE 0x0043aa30                      ; 0043aa1b
        ;   XREF to: 0043aa30 (CONDITIONAL_JUMP)  ; LAB_0043aa30
    NEG EBX                             ; 0043aa1d
    XOR EAX,EAX                         ; 0043aa1f
    SAR EDX,0x1                         ; 0043aa21
    RCR EAX,0x1                         ; 0043aa23
    IDIV EBX                            ; 0043aa25
    JMP 0x0043aa37                      ; 0043aa27
        ;   XREF to: 0043aa37 (UNCONDITIONAL_JUMP)  ; LAB_0043aa37
    MOV EAX,0x7fffffff                  ; 0043aa29
        ;   Label: LAB_0043aa29
    JMP 0x0043aa37                      ; 0043aa2e
        ;   XREF to: 0043aa37 (UNCONDITIONAL_JUMP)  ; LAB_0043aa37
    NEG EBX                             ; 0043aa30
        ;   Label: LAB_0043aa30
    MOV EAX,0x80000000                  ; 0043aa32
    MOV ECX,EAX                         ; 0043aa37
        ;   Label: LAB_0043aa37
    MOV EBX,dword ptr [ESI + 0x8]       ; 0043aa39
    MOV EAX,dword ptr [EBP + 0x8]       ; 0043aa3c
    MOV EDX,ECX                         ; 0043aa3f
    SUB EAX,EBX                         ; 0043aa41
    IMUL EDX                            ; 0043aa43
    ADD EAX,EAX                         ; 0043aa45
    ADC EDX,EDX                         ; 0043aa47
    MOV EAX,EDX                         ; 0043aa49
    MOV EBX,dword ptr [ESI + 0x8]       ; 0043aa4b
    ADD EAX,EBX                         ; 0043aa4e
    MOV dword ptr [EDI + 0x8],EAX       ; 0043aa50
    MOV dword ptr [EDI],EAX             ; 0043aa53
    NEG EAX                             ; 0043aa55
    MOV dword ptr [EDI],EAX             ; 0043aa57
    MOV EAX,dword ptr [EBP + 0x4]       ; 0043aa59
    SUB EAX,dword ptr [ESI + 0x4]       ; 0043aa5c
    MOV EDX,ECX                         ; 0043aa5f
    IMUL EDX                            ; 0043aa61
    ADD EAX,EAX                         ; 0043aa63
    ADC EDX,EDX                         ; 0043aa65
    MOV EAX,EDX                         ; 0043aa67
    MOV EBX,dword ptr [ESI + 0x4]       ; 0043aa69
    MOV dword ptr [EDI + 0x10],0xffffffff ; 0043aa6c
    ADD EAX,EBX                         ; 0043aa73
    MOV dword ptr [EDI + 0x4],EAX       ; 0043aa75
    MOV EAX,dword ptr [EBP + 0x20]      ; 0043aa78
    MOV EBX,dword ptr [ESI + 0x20]      ; 0043aa7b
    MOV EDX,ECX                         ; 0043aa7e
    SUB EAX,EBX                         ; 0043aa80
    IMUL EDX                            ; 0043aa82
    ADD EAX,EAX                         ; 0043aa84
    ADC EDX,EDX                         ; 0043aa86
    MOV EAX,EDX                         ; 0043aa88
    MOV EBX,dword ptr [ESI + 0x20]      ; 0043aa8a
    ADD EAX,EBX                         ; 0043aa8d
    MOV dword ptr [EDI + 0x20],EAX      ; 0043aa8f
    MOV EAX,dword ptr [EBP + 0x24]      ; 0043aa92
    SUB EAX,dword ptr [ESI + 0x24]      ; 0043aa95
    MOV EDX,ECX                         ; 0043aa98
    IMUL EDX                            ; 0043aa9a
    ADD EAX,EAX                         ; 0043aa9c
    ADC EDX,EDX                         ; 0043aa9e
    MOV EAX,EDX                         ; 0043aaa0
    MOV EBX,dword ptr [ESI + 0x24]      ; 0043aaa2
    ADD EAX,EBX                         ; 0043aaa5
    MOV dword ptr [EDI + 0x24],EAX      ; 0043aaa7
    MOV EAX,dword ptr [EBP + 0x28]      ; 0043aaaa
    MOV EBX,dword ptr [ESI + 0x28]      ; 0043aaad
    MOV EDX,ECX                         ; 0043aab0
    SUB EAX,EBX                         ; 0043aab2
    IMUL EDX                            ; 0043aab4
    ADD EAX,EAX                         ; 0043aab6
    ADC EDX,EDX                         ; 0043aab8
    MOV EAX,EDX                         ; 0043aaba
    MOV EBX,dword ptr [ESI + 0x28]      ; 0043aabc
    ADD EAX,EBX                         ; 0043aabf
    MOV dword ptr [EDI + 0x28],EAX      ; 0043aac1
    MOV EAX,dword ptr [EBP + 0x18]      ; 0043aac4
    SUB EAX,dword ptr [ESI + 0x18]      ; 0043aac7
    MOV EDX,ECX                         ; 0043aaca
    IMUL EDX                            ; 0043aacc
    ADD EAX,EAX                         ; 0043aace
    ADC EDX,EDX                         ; 0043aad0
    MOV EAX,EDX                         ; 0043aad2
    MOV EBX,dword ptr [ESI + 0x18]      ; 0043aad4
    ADD EBX,EAX                         ; 0043aad7
    MOV dword ptr [EDI + 0x18],EBX      ; 0043aad9
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0043aadc
    MOV EBX,dword ptr [ESI + 0x1c]      ; 0043aadf
    MOV EDX,ECX                         ; 0043aae2
    SUB EAX,EBX                         ; 0043aae4
    IMUL EDX                            ; 0043aae6
    ADD EAX,EAX                         ; 0043aae8
    ADC EDX,EDX                         ; 0043aaea
    MOV EAX,EDX                         ; 0043aaec
    MOV EBX,dword ptr [ESI + 0x1c]      ; 0043aaee
    ADD EBX,EAX                         ; 0043aaf1
    MOV dword ptr [EDI + 0x1c],EBX      ; 0043aaf3
    MOV EAX,dword ptr [EBP + 0x2c]      ; 0043aaf6
    MOV EBP,dword ptr [ESI + 0x2c]      ; 0043aaf9
    MOV EDX,ECX                         ; 0043aafc
    SUB EAX,EBP                         ; 0043aafe
    IMUL EDX                            ; 0043ab00
    ADD EAX,EAX                         ; 0043ab02
    ADC EDX,EDX                         ; 0043ab04
    MOV EAX,EDX                         ; 0043ab06
    MOV ECX,dword ptr [ESI + 0x2c]      ; 0043ab08
    ADD ECX,EAX                         ; 0043ab0b
    MOV dword ptr [EDI + 0x2c],ECX      ; 0043ab0d
    POP EBP                             ; 0043ab10
    POP EDI                             ; 0043ab11
    POP ESI                             ; 0043ab12
    POP EBX                             ; 0043ab13
    RET                                 ; 0043ab14

