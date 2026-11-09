; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_0043ac50(int *param_1,int *param_2,int *param_3)
;
;
; XREF[2]:
;   engine_clipper.c_FUN_0043b14e at 0043b211
;   engine_clipper.c_clipPolygonToViewport_FUN_0043bac0 at 0043c16c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043ac50
        ;   Label: engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_0043ac50
    PUSH ESI                            ; 0043ac51
    PUSH EDI                            ; 0043ac52
    PUSH EBP                            ; 0043ac53
    MOV ESI,dword ptr [ESP + 0x14]      ; 0043ac54
    MOV EBP,dword ptr [ESP + 0x18]      ; 0043ac58
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0043ac5c
    MOV EDX,dword ptr [ESI + 0x4]       ; 0043ac60
    MOV ECX,dword ptr [ESI + 0x8]       ; 0043ac63
    MOV EBX,dword ptr [EBP + 0x8]       ; 0043ac66
    ADD EDX,ECX                         ; 0043ac69
    MOV ECX,dword ptr [EBP + 0x4]       ; 0043ac6b
    ADD ECX,EBX                         ; 0043ac6e
    MOV EBX,EDX                         ; 0043ac70
    SUB EBX,ECX                         ; 0043ac72
    CMP EDX,EBX                         ; 0043ac74
    JGE 0x0043ac8a                      ; 0043ac76
        ;   XREF to: 0043ac8a (CONDITIONAL_JUMP)  ; LAB_0043ac8a
    NEG EBX                             ; 0043ac78
    CMP EDX,EBX                         ; 0043ac7a
    JLE 0x0043ac91                      ; 0043ac7c
        ;   XREF to: 0043ac91 (CONDITIONAL_JUMP)  ; LAB_0043ac91
    NEG EBX                             ; 0043ac7e
    XOR EAX,EAX                         ; 0043ac80
    SAR EDX,0x1                         ; 0043ac82
    RCR EAX,0x1                         ; 0043ac84
    IDIV EBX                            ; 0043ac86
    JMP 0x0043ac98                      ; 0043ac88
        ;   XREF to: 0043ac98 (UNCONDITIONAL_JUMP)  ; LAB_0043ac98
    MOV EAX,0x7fffffff                  ; 0043ac8a
        ;   Label: LAB_0043ac8a
    JMP 0x0043ac98                      ; 0043ac8f
        ;   XREF to: 0043ac98 (UNCONDITIONAL_JUMP)  ; LAB_0043ac98
    NEG EBX                             ; 0043ac91
        ;   Label: LAB_0043ac91
    MOV EAX,0x80000000                  ; 0043ac93
    MOV ECX,EAX                         ; 0043ac98
        ;   Label: LAB_0043ac98
    MOV EDX,dword ptr [ESI + 0x8]       ; 0043ac9a
    MOV EAX,dword ptr [EBP + 0x8]       ; 0043ac9d
    SUB EAX,EDX                         ; 0043aca0
    MOV EDX,ECX                         ; 0043aca2
    IMUL EDX                            ; 0043aca4
    ADD EAX,EAX                         ; 0043aca6
    ADC EDX,EDX                         ; 0043aca8
    MOV EAX,EDX                         ; 0043acaa
    MOV EDX,dword ptr [ESI + 0x8]       ; 0043acac
    ADD EAX,EDX                         ; 0043acaf
    MOV dword ptr [EDI + 0x8],EAX       ; 0043acb1
    MOV EBX,EAX                         ; 0043acb4
    MOV dword ptr [EDI + 0x4],EAX       ; 0043acb6
    NEG EBX                             ; 0043acb9
    MOV dword ptr [EDI + 0x4],EBX       ; 0043acbb
    MOV EAX,dword ptr [EBP]             ; 0043acbe
    SUB EAX,dword ptr [ESI]             ; 0043acc1
    MOV EDX,ECX                         ; 0043acc3
    IMUL EDX                            ; 0043acc5
    ADD EAX,EAX                         ; 0043acc7
    ADC EDX,EDX                         ; 0043acc9
    MOV EAX,EDX                         ; 0043accb
    MOV EDX,dword ptr [ESI]             ; 0043accd
    MOV dword ptr [EDI + 0x10],0xffffffff ; 0043accf
    ADD EAX,EDX                         ; 0043acd6
    MOV dword ptr [EDI],EAX             ; 0043acd8
    MOV EAX,dword ptr [EBP + 0x20]      ; 0043acda
    MOV EBX,dword ptr [ESI + 0x20]      ; 0043acdd
    MOV EDX,ECX                         ; 0043ace0
    SUB EAX,EBX                         ; 0043ace2
    IMUL EDX                            ; 0043ace4
    ADD EAX,EAX                         ; 0043ace6
    ADC EDX,EDX                         ; 0043ace8
    MOV EAX,EDX                         ; 0043acea
    MOV EDX,dword ptr [ESI + 0x20]      ; 0043acec
    ADD EAX,EDX                         ; 0043acef
    MOV dword ptr [EDI + 0x20],EAX      ; 0043acf1
    MOV EAX,dword ptr [EBP + 0x24]      ; 0043acf4
    SUB EAX,dword ptr [ESI + 0x24]      ; 0043acf7
    MOV EDX,ECX                         ; 0043acfa
    IMUL EDX                            ; 0043acfc
    ADD EAX,EAX                         ; 0043acfe
    ADC EDX,EDX                         ; 0043ad00
    MOV EAX,EDX                         ; 0043ad02
    MOV EDX,dword ptr [ESI + 0x24]      ; 0043ad04
    ADD EAX,EDX                         ; 0043ad07
    MOV dword ptr [EDI + 0x24],EAX      ; 0043ad09
    MOV EAX,dword ptr [EBP + 0x28]      ; 0043ad0c
    MOV EBX,dword ptr [ESI + 0x28]      ; 0043ad0f
    MOV EDX,ECX                         ; 0043ad12
    SUB EAX,EBX                         ; 0043ad14
    IMUL EDX                            ; 0043ad16
    ADD EAX,EAX                         ; 0043ad18
    ADC EDX,EDX                         ; 0043ad1a
    MOV EAX,EDX                         ; 0043ad1c
    MOV EDX,dword ptr [ESI + 0x28]      ; 0043ad1e
    ADD EDX,EAX                         ; 0043ad21
    MOV dword ptr [EDI + 0x28],EDX      ; 0043ad23
    MOV EAX,dword ptr [EBP + 0x18]      ; 0043ad26
    SUB EAX,dword ptr [ESI + 0x18]      ; 0043ad29
    MOV EDX,ECX                         ; 0043ad2c
    IMUL EDX                            ; 0043ad2e
    ADD EAX,EAX                         ; 0043ad30
    ADC EDX,EDX                         ; 0043ad32
    MOV EAX,EDX                         ; 0043ad34
    MOV EDX,dword ptr [ESI + 0x18]      ; 0043ad36
    ADD EDX,EAX                         ; 0043ad39
    MOV dword ptr [EDI + 0x18],EDX      ; 0043ad3b
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0043ad3e
    MOV EBX,dword ptr [ESI + 0x1c]      ; 0043ad41
    MOV EDX,ECX                         ; 0043ad44
    SUB EAX,EBX                         ; 0043ad46
    IMUL EDX                            ; 0043ad48
    ADD EAX,EAX                         ; 0043ad4a
    ADC EDX,EDX                         ; 0043ad4c
    MOV EAX,EDX                         ; 0043ad4e
    MOV EDX,dword ptr [ESI + 0x1c]      ; 0043ad50
    ADD EDX,EAX                         ; 0043ad53
    MOV dword ptr [EDI + 0x1c],EDX      ; 0043ad55
    MOV EAX,dword ptr [EBP + 0x2c]      ; 0043ad58
    MOV EBP,dword ptr [ESI + 0x2c]      ; 0043ad5b
    MOV EDX,ECX                         ; 0043ad5e
    SUB EAX,EBP                         ; 0043ad60
    IMUL EDX                            ; 0043ad62
    ADD EAX,EAX                         ; 0043ad64
    ADC EDX,EDX                         ; 0043ad66
    MOV EAX,EDX                         ; 0043ad68
    MOV EDX,dword ptr [ESI + 0x2c]      ; 0043ad6a
    ADD EDX,EAX                         ; 0043ad6d
    MOV dword ptr [EDI + 0x2c],EDX      ; 0043ad6f
    POP EBP                             ; 0043ad72
    POP EDI                             ; 0043ad73
    POP ESI                             ; 0043ad74
    POP EBX                             ; 0043ad75
    RET                                 ; 0043ad76

