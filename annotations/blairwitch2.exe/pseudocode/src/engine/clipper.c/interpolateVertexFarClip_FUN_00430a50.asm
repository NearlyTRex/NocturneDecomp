; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_interpolateVertexFarClip_FUN_00430a50(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   v1
; SRenderVertex *  Stack[0x8]:4   v2
; SRenderVertex *  Stack[0xc]:4   output
;
; XREF[1]:
;   engine_clipper.c_clipPolygonToViewFrustum_FUN_00431330 at 00431ccb
;
; Referenced Globals:
;   undefined4 DAT_00609b34
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00430a50
        ;   Label: engine_clipper.c_interpolateVertexFarClip_FUN_00430a50
    PUSH ESI                            ; 00430a51
    PUSH EDI                            ; 00430a52
    PUSH EBP                            ; 00430a53
    MOV ESI,dword ptr [ESP + 0x14]      ; 00430a54
    MOV EDI,dword ptr [ESP + 0x18]      ; 00430a58
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00430a5c
    MOV EBX,dword ptr [EDI + 0x8]       ; 00430a60
    MOV EDX,dword ptr [ESI + 0x8]       ; 00430a63
    MOV ECX,dword ptr [ESI + 0x8]       ; 00430a66
    SUB EBX,EDX                         ; 00430a69
    MOV EDX,dword ptr [0x00609b34]      ; 00430a6b | DAT_00609b34
    SUB EDX,ECX                         ; 00430a71
    CMP EDX,EBX                         ; 00430a73
    JGE 0x00430a89                      ; 00430a75
        ;   XREF to: 00430a89 (CONDITIONAL_JUMP)  ; LAB_00430a89
    NEG EBX                             ; 00430a77
    CMP EDX,EBX                         ; 00430a79
    JLE 0x00430a90                      ; 00430a7b
        ;   XREF to: 00430a90 (CONDITIONAL_JUMP)  ; LAB_00430a90
    NEG EBX                             ; 00430a7d
    XOR EAX,EAX                         ; 00430a7f
    SAR EDX,0x1                         ; 00430a81
    RCR EAX,0x1                         ; 00430a83
    IDIV EBX                            ; 00430a85
    JMP 0x00430a97                      ; 00430a87
        ;   XREF to: 00430a97 (UNCONDITIONAL_JUMP)  ; LAB_00430a97
    MOV EAX,0x7fffffff                  ; 00430a89
        ;   Label: LAB_00430a89
    JMP 0x00430a97                      ; 00430a8e
        ;   XREF to: 00430a97 (UNCONDITIONAL_JUMP)  ; LAB_00430a97
    NEG EBX                             ; 00430a90
        ;   Label: LAB_00430a90
    MOV EAX,0x80000000                  ; 00430a92
    MOV ECX,EAX                         ; 00430a97
        ;   Label: LAB_00430a97
    MOV EBX,dword ptr [ESI + 0x8]       ; 00430a99
    MOV EAX,dword ptr [EDI + 0x8]       ; 00430a9c
    MOV EDX,ECX                         ; 00430a9f
    SUB EAX,EBX                         ; 00430aa1
    IMUL EDX                            ; 00430aa3
    ADD EAX,EAX                         ; 00430aa5
    ADC EDX,EDX                         ; 00430aa7
    MOV EAX,EDX                         ; 00430aa9
    MOV EBX,dword ptr [ESI + 0x8]       ; 00430aab
    ADD EAX,EBX                         ; 00430aae
    MOV dword ptr [EBP + 0x8],EAX       ; 00430ab0
    MOV EAX,dword ptr [EDI + 0x4]       ; 00430ab3
    SUB EAX,dword ptr [ESI + 0x4]       ; 00430ab6
    MOV EDX,ECX                         ; 00430ab9
    IMUL EDX                            ; 00430abb
    ADD EAX,EAX                         ; 00430abd
    ADC EDX,EDX                         ; 00430abf
    MOV EAX,EDX                         ; 00430ac1
    MOV EBX,dword ptr [ESI + 0x4]       ; 00430ac3
    ADD EAX,EBX                         ; 00430ac6
    MOV dword ptr [EBP + 0x4],EAX       ; 00430ac8
    MOV EAX,dword ptr [EDI]             ; 00430acb
    MOV EBX,dword ptr [ESI]             ; 00430acd
    MOV EDX,ECX                         ; 00430acf
    SUB EAX,EBX                         ; 00430ad1
    IMUL EDX                            ; 00430ad3
    ADD EAX,EAX                         ; 00430ad5
    ADC EDX,EDX                         ; 00430ad7
    MOV EAX,EDX                         ; 00430ad9
    MOV EBX,dword ptr [ESI]             ; 00430adb
    ADD EAX,EBX                         ; 00430add
    MOV dword ptr [EBP],EAX             ; 00430adf
    MOV EAX,dword ptr [EDI + 0x20]      ; 00430ae2
    SUB EAX,dword ptr [ESI + 0x20]      ; 00430ae5
    MOV EDX,ECX                         ; 00430ae8
    IMUL EDX                            ; 00430aea
    ADD EAX,EAX                         ; 00430aec
    ADC EDX,EDX                         ; 00430aee
    MOV EAX,EDX                         ; 00430af0
    MOV EBX,dword ptr [ESI + 0x20]      ; 00430af2
    ADD EAX,EBX                         ; 00430af5
    MOV dword ptr [EBP + 0x20],EAX      ; 00430af7
    MOV EAX,dword ptr [EDI + 0x2c]      ; 00430afa
    MOV EBX,dword ptr [ESI + 0x2c]      ; 00430afd
    MOV EDX,ECX                         ; 00430b00
    SUB EAX,EBX                         ; 00430b02
    IMUL EDX                            ; 00430b04
    ADD EAX,EAX                         ; 00430b06
    ADC EDX,EDX                         ; 00430b08
    MOV EAX,EDX                         ; 00430b0a
    MOV EBX,dword ptr [ESI + 0x2c]      ; 00430b0c
    ADD EAX,EBX                         ; 00430b0f
    MOV dword ptr [EBP + 0x2c],EAX      ; 00430b11
    MOV EAX,dword ptr [EDI + 0x18]      ; 00430b14
    SUB EAX,dword ptr [ESI + 0x18]      ; 00430b17
    MOV EDX,ECX                         ; 00430b1a
    IMUL EDX                            ; 00430b1c
    ADD EAX,EAX                         ; 00430b1e
    ADC EDX,EDX                         ; 00430b20
    MOV EAX,EDX                         ; 00430b22
    MOV EBX,dword ptr [ESI + 0x18]      ; 00430b24
    ADD EAX,EBX                         ; 00430b27
    MOV dword ptr [EBP + 0x18],EAX      ; 00430b29
    MOV EAX,dword ptr [EDI + 0x1c]      ; 00430b2c
    MOV EBX,dword ptr [ESI + 0x1c]      ; 00430b2f
    MOV EDX,ECX                         ; 00430b32
    SUB EAX,EBX                         ; 00430b34
    IMUL EDX                            ; 00430b36
    ADD EAX,EAX                         ; 00430b38
    ADC EDX,EDX                         ; 00430b3a
    MOV EAX,EDX                         ; 00430b3c
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00430b3e
    MOV dword ptr [EBP + 0x10],0xffffffff ; 00430b41
    ADD ECX,EAX                         ; 00430b48
    MOV dword ptr [EBP + 0x1c],ECX      ; 00430b4a
    POP EBP                             ; 00430b4d
    POP EDI                             ; 00430b4e
    POP ESI                             ; 00430b4f
    POP EBX                             ; 00430b50
    RET                                 ; 00430b51

