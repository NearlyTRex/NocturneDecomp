; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_0043cda0(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   v1
; SRenderVertex *  Stack[0x8]:4   v2
; SRenderVertex *  Stack[0xc]:4   output
;
; XREF[2]:
;   engine_clipper.c_clipPolygonLeftPlaneGlobal_FUN_0043d280 at 0043d340
;   engine_clipper.c_clipPolygonToViewport_FUN_0043de60 at 0043e40e
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043cda0
        ;   Label: engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_0043cda0
    PUSH ESI                            ; 0043cda1
    PUSH EDI                            ; 0043cda2
    PUSH EBP                            ; 0043cda3
    MOV ESI,dword ptr [ESP + 0x14]      ; 0043cda4
    MOV EBP,dword ptr [ESP + 0x18]      ; 0043cda8
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0043cdac
    MOV ECX,dword ptr [ESI]             ; 0043cdb0
    ADD ECX,dword ptr [ESI + 0x8]       ; 0043cdb2
    MOV EAX,dword ptr [EBP]             ; 0043cdb5
    MOV EBX,ECX                         ; 0043cdb8
    MOV EDX,dword ptr [EBP + 0x8]       ; 0043cdba
    SUB EBX,EAX                         ; 0043cdbd
    SUB EBX,EDX                         ; 0043cdbf
    MOV EDX,ECX                         ; 0043cdc1
    CMP EDX,EBX                         ; 0043cdc3
    JGE 0x0043cdd9                      ; 0043cdc5
        ;   XREF to: 0043cdd9 (CONDITIONAL_JUMP)  ; LAB_0043cdd9
    NEG EBX                             ; 0043cdc7
    CMP EDX,EBX                         ; 0043cdc9
    JLE 0x0043cde0                      ; 0043cdcb
        ;   XREF to: 0043cde0 (CONDITIONAL_JUMP)  ; LAB_0043cde0
    NEG EBX                             ; 0043cdcd
    XOR EAX,EAX                         ; 0043cdcf
    SAR EDX,0x1                         ; 0043cdd1
    RCR EAX,0x1                         ; 0043cdd3
    IDIV EBX                            ; 0043cdd5
    JMP 0x0043cde7                      ; 0043cdd7
        ;   XREF to: 0043cde7 (UNCONDITIONAL_JUMP)  ; LAB_0043cde7
    MOV EAX,0x7fffffff                  ; 0043cdd9
        ;   Label: LAB_0043cdd9
    JMP 0x0043cde7                      ; 0043cdde
        ;   XREF to: 0043cde7 (UNCONDITIONAL_JUMP)  ; LAB_0043cde7
    NEG EBX                             ; 0043cde0
        ;   Label: LAB_0043cde0
    MOV EAX,0x80000000                  ; 0043cde2
    MOV ECX,EAX                         ; 0043cde7
        ;   Label: LAB_0043cde7
    MOV EBX,dword ptr [ESI + 0x8]       ; 0043cde9
    MOV EAX,dword ptr [EBP + 0x8]       ; 0043cdec
    MOV EDX,ECX                         ; 0043cdef
    SUB EAX,EBX                         ; 0043cdf1
    IMUL EDX                            ; 0043cdf3
    ADD EAX,EAX                         ; 0043cdf5
    ADC EDX,EDX                         ; 0043cdf7
    MOV EAX,EDX                         ; 0043cdf9
    MOV EBX,dword ptr [ESI + 0x8]       ; 0043cdfb
    ADD EAX,EBX                         ; 0043cdfe
    MOV dword ptr [EDI + 0x8],EAX       ; 0043ce00
    MOV dword ptr [EDI],EAX             ; 0043ce03
    NEG EAX                             ; 0043ce05
    MOV dword ptr [EDI],EAX             ; 0043ce07
    MOV EAX,dword ptr [EBP + 0x4]       ; 0043ce09
    SUB EAX,dword ptr [ESI + 0x4]       ; 0043ce0c
    MOV EDX,ECX                         ; 0043ce0f
    IMUL EDX                            ; 0043ce11
    ADD EAX,EAX                         ; 0043ce13
    ADC EDX,EDX                         ; 0043ce15
    MOV EAX,EDX                         ; 0043ce17
    MOV EBX,dword ptr [ESI + 0x4]       ; 0043ce19
    MOV dword ptr [EDI + 0x10],0xffffffff ; 0043ce1c
    ADD EAX,EBX                         ; 0043ce23
    MOV dword ptr [EDI + 0x4],EAX       ; 0043ce25
    MOV EAX,dword ptr [EBP + 0x20]      ; 0043ce28
    MOV EBX,dword ptr [ESI + 0x20]      ; 0043ce2b
    MOV EDX,ECX                         ; 0043ce2e
    SUB EAX,EBX                         ; 0043ce30
    IMUL EDX                            ; 0043ce32
    ADD EAX,EAX                         ; 0043ce34
    ADC EDX,EDX                         ; 0043ce36
    MOV EAX,EDX                         ; 0043ce38
    MOV EBX,dword ptr [ESI + 0x20]      ; 0043ce3a
    ADD EAX,EBX                         ; 0043ce3d
    MOV dword ptr [EDI + 0x20],EAX      ; 0043ce3f
    MOV EAX,dword ptr [EBP + 0x24]      ; 0043ce42
    SUB EAX,dword ptr [ESI + 0x24]      ; 0043ce45
    MOV EDX,ECX                         ; 0043ce48
    IMUL EDX                            ; 0043ce4a
    ADD EAX,EAX                         ; 0043ce4c
    ADC EDX,EDX                         ; 0043ce4e
    MOV EAX,EDX                         ; 0043ce50
    MOV EBX,dword ptr [ESI + 0x24]      ; 0043ce52
    ADD EAX,EBX                         ; 0043ce55
    MOV dword ptr [EDI + 0x24],EAX      ; 0043ce57
    MOV EAX,dword ptr [EBP + 0x28]      ; 0043ce5a
    MOV EBX,dword ptr [ESI + 0x28]      ; 0043ce5d
    MOV EDX,ECX                         ; 0043ce60
    SUB EAX,EBX                         ; 0043ce62
    IMUL EDX                            ; 0043ce64
    ADD EAX,EAX                         ; 0043ce66
    ADC EDX,EDX                         ; 0043ce68
    MOV EAX,EDX                         ; 0043ce6a
    MOV EBX,dword ptr [ESI + 0x28]      ; 0043ce6c
    ADD EAX,EBX                         ; 0043ce6f
    MOV dword ptr [EDI + 0x28],EAX      ; 0043ce71
    MOV EAX,dword ptr [EBP + 0x18]      ; 0043ce74
    SUB EAX,dword ptr [ESI + 0x18]      ; 0043ce77
    MOV EDX,ECX                         ; 0043ce7a
    IMUL EDX                            ; 0043ce7c
    ADD EAX,EAX                         ; 0043ce7e
    ADC EDX,EDX                         ; 0043ce80
    MOV EAX,EDX                         ; 0043ce82
    MOV EBX,dword ptr [ESI + 0x18]      ; 0043ce84
    ADD EBX,EAX                         ; 0043ce87
    MOV dword ptr [EDI + 0x18],EBX      ; 0043ce89
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0043ce8c
    MOV EBX,dword ptr [ESI + 0x1c]      ; 0043ce8f
    MOV EDX,ECX                         ; 0043ce92
    SUB EAX,EBX                         ; 0043ce94
    IMUL EDX                            ; 0043ce96
    ADD EAX,EAX                         ; 0043ce98
    ADC EDX,EDX                         ; 0043ce9a
    MOV EAX,EDX                         ; 0043ce9c
    MOV EBX,dword ptr [ESI + 0x1c]      ; 0043ce9e
    ADD EBX,EAX                         ; 0043cea1
    MOV dword ptr [EDI + 0x1c],EBX      ; 0043cea3
    MOV EAX,dword ptr [EBP + 0x2c]      ; 0043cea6
    MOV EBP,dword ptr [ESI + 0x2c]      ; 0043cea9
    MOV EDX,ECX                         ; 0043ceac
    SUB EAX,EBP                         ; 0043ceae
    IMUL EDX                            ; 0043ceb0
    ADD EAX,EAX                         ; 0043ceb2
    ADC EDX,EDX                         ; 0043ceb4
    MOV EAX,EDX                         ; 0043ceb6
    MOV ECX,dword ptr [ESI + 0x2c]      ; 0043ceb8
    ADD ECX,EAX                         ; 0043cebb
    MOV dword ptr [EDI + 0x2c],ECX      ; 0043cebd
    POP EBP                             ; 0043cec0
    POP EDI                             ; 0043cec1
    POP ESI                             ; 0043cec2
    POP EBX                             ; 0043cec3
    RET                                 ; 0043cec4

