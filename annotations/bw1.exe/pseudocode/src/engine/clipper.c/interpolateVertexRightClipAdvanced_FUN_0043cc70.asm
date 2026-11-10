; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_0043cc70(int *param_1,int *param_2,int *param_3)
;
;
; XREF[2]:
;   engine_clipper.c_clipPolygonRightPlaneGlobal_FUN_0043d13e at 0043d1f6
;   engine_clipper.c_clipPolygonToViewport_FUN_0043de60 at 0043e38f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043cc70
        ;   Label: engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_0043cc70
    PUSH ESI                            ; 0043cc71
    PUSH EDI                            ; 0043cc72
    PUSH EBP                            ; 0043cc73
    MOV ECX,dword ptr [ESP + 0x14]      ; 0043cc74
    MOV EDI,dword ptr [ESP + 0x18]      ; 0043cc78
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0043cc7c
    MOV EAX,dword ptr [EDI]             ; 0043cc80
    MOV EDX,dword ptr [ECX + 0x8]       ; 0043cc82
    MOV EBX,dword ptr [ECX]             ; 0043cc85
    MOV EBP,dword ptr [EDI + 0x8]       ; 0043cc87
    ADD EAX,EDX                         ; 0043cc8a
    ADD EBX,EBP                         ; 0043cc8c
    SUB EAX,EBX                         ; 0043cc8e
    MOV EBX,EDX                         ; 0043cc90
    MOV EDX,dword ptr [ECX]             ; 0043cc92
    SUB EBX,EDX                         ; 0043cc94
    MOV EDX,EBX                         ; 0043cc96
    MOV EBX,EAX                         ; 0043cc98
    CMP EDX,EBX                         ; 0043cc9a
    JGE 0x0043ccb0                      ; 0043cc9c
        ;   XREF to: 0043ccb0 (CONDITIONAL_JUMP)  ; LAB_0043ccb0
    NEG EBX                             ; 0043cc9e
    CMP EDX,EBX                         ; 0043cca0
    JLE 0x0043ccb7                      ; 0043cca2
        ;   XREF to: 0043ccb7 (CONDITIONAL_JUMP)  ; LAB_0043ccb7
    NEG EBX                             ; 0043cca4
    XOR EAX,EAX                         ; 0043cca6
    SAR EDX,0x1                         ; 0043cca8
    RCR EAX,0x1                         ; 0043ccaa
    IDIV EBX                            ; 0043ccac
    JMP 0x0043ccbe                      ; 0043ccae
        ;   XREF to: 0043ccbe (UNCONDITIONAL_JUMP)  ; LAB_0043ccbe
    MOV EAX,0x7fffffff                  ; 0043ccb0
        ;   Label: LAB_0043ccb0
    JMP 0x0043ccbe                      ; 0043ccb5
        ;   XREF to: 0043ccbe (UNCONDITIONAL_JUMP)  ; LAB_0043ccbe
    NEG EBX                             ; 0043ccb7
        ;   Label: LAB_0043ccb7
    MOV EAX,0x80000000                  ; 0043ccb9
    MOV EBX,EAX                         ; 0043ccbe
        ;   Label: LAB_0043ccbe
    MOV EBP,dword ptr [ECX + 0x8]       ; 0043ccc0
    MOV EAX,dword ptr [EDI + 0x8]       ; 0043ccc3
    MOV EDX,EBX                         ; 0043ccc6
    SUB EAX,EBP                         ; 0043ccc8
    IMUL EDX                            ; 0043ccca
    ADD EAX,EAX                         ; 0043cccc
    ADC EDX,EDX                         ; 0043ccce
    MOV EAX,EDX                         ; 0043ccd0
    MOV EDX,dword ptr [ECX + 0x8]       ; 0043ccd2
    ADD EAX,EDX                         ; 0043ccd5
    MOV dword ptr [ESI + 0x8],EAX       ; 0043ccd7
    MOV dword ptr [ESI],EAX             ; 0043ccda
    MOV EAX,dword ptr [EDI + 0x4]       ; 0043ccdc
    SUB EAX,dword ptr [ECX + 0x4]       ; 0043ccdf
    MOV EDX,EBX                         ; 0043cce2
    IMUL EDX                            ; 0043cce4
    ADD EAX,EAX                         ; 0043cce6
    ADC EDX,EDX                         ; 0043cce8
    MOV EAX,EDX                         ; 0043ccea
    MOV EDX,dword ptr [ECX + 0x4]       ; 0043ccec
    MOV dword ptr [ESI + 0x10],0xffffffff ; 0043ccef
    ADD EAX,EDX                         ; 0043ccf6
    MOV dword ptr [ESI + 0x4],EAX       ; 0043ccf8
    MOV EAX,dword ptr [EDI + 0x20]      ; 0043ccfb
    MOV EBP,dword ptr [ECX + 0x20]      ; 0043ccfe
    MOV EDX,EBX                         ; 0043cd01
    SUB EAX,EBP                         ; 0043cd03
    IMUL EDX                            ; 0043cd05
    ADD EAX,EAX                         ; 0043cd07
    ADC EDX,EDX                         ; 0043cd09
    MOV EAX,EDX                         ; 0043cd0b
    MOV EDX,dword ptr [ECX + 0x20]      ; 0043cd0d
    ADD EAX,EDX                         ; 0043cd10
    MOV dword ptr [ESI + 0x20],EAX      ; 0043cd12
    MOV EAX,dword ptr [EDI + 0x24]      ; 0043cd15
    SUB EAX,dword ptr [ECX + 0x24]      ; 0043cd18
    MOV EDX,EBX                         ; 0043cd1b
    IMUL EDX                            ; 0043cd1d
    ADD EAX,EAX                         ; 0043cd1f
    ADC EDX,EDX                         ; 0043cd21
    MOV EAX,EDX                         ; 0043cd23
    MOV EDX,dword ptr [ECX + 0x24]      ; 0043cd25
    ADD EDX,EAX                         ; 0043cd28
    MOV dword ptr [ESI + 0x24],EDX      ; 0043cd2a
    MOV EAX,dword ptr [EDI + 0x28]      ; 0043cd2d
    MOV EBP,dword ptr [ECX + 0x28]      ; 0043cd30
    MOV EDX,EBX                         ; 0043cd33
    SUB EAX,EBP                         ; 0043cd35
    IMUL EDX                            ; 0043cd37
    ADD EAX,EAX                         ; 0043cd39
    ADC EDX,EDX                         ; 0043cd3b
    MOV EAX,EDX                         ; 0043cd3d
    MOV EDX,dword ptr [ECX + 0x28]      ; 0043cd3f
    ADD EDX,EAX                         ; 0043cd42
    MOV dword ptr [ESI + 0x28],EDX      ; 0043cd44
    MOV EAX,dword ptr [EDI + 0x18]      ; 0043cd47
    SUB EAX,dword ptr [ECX + 0x18]      ; 0043cd4a
    MOV EDX,EBX                         ; 0043cd4d
    IMUL EDX                            ; 0043cd4f
    ADD EAX,EAX                         ; 0043cd51
    ADC EDX,EDX                         ; 0043cd53
    MOV EAX,EDX                         ; 0043cd55
    MOV EDX,dword ptr [ECX + 0x18]      ; 0043cd57
    ADD EDX,EAX                         ; 0043cd5a
    MOV dword ptr [ESI + 0x18],EDX      ; 0043cd5c
    MOV EAX,dword ptr [EDI + 0x1c]      ; 0043cd5f
    MOV EBP,dword ptr [ECX + 0x1c]      ; 0043cd62
    MOV EDX,EBX                         ; 0043cd65
    SUB EAX,EBP                         ; 0043cd67
    IMUL EDX                            ; 0043cd69
    ADD EAX,EAX                         ; 0043cd6b
    ADC EDX,EDX                         ; 0043cd6d
    MOV EAX,EDX                         ; 0043cd6f
    MOV EDX,dword ptr [ECX + 0x1c]      ; 0043cd71
    ADD EDX,EAX                         ; 0043cd74
    MOV dword ptr [ESI + 0x1c],EDX      ; 0043cd76
    MOV EAX,dword ptr [EDI + 0x2c]      ; 0043cd79
    SUB EAX,dword ptr [ECX + 0x2c]      ; 0043cd7c
    MOV EDX,EBX                         ; 0043cd7f
    IMUL EDX                            ; 0043cd81
    ADD EAX,EAX                         ; 0043cd83
    ADC EDX,EDX                         ; 0043cd85
    MOV EAX,EDX                         ; 0043cd87
    MOV EDX,dword ptr [ECX + 0x2c]      ; 0043cd89
    ADD EDX,EAX                         ; 0043cd8c
    MOV dword ptr [ESI + 0x2c],EDX      ; 0043cd8e
    POP EBP                             ; 0043cd91
    POP EDI                             ; 0043cd92
    POP ESI                             ; 0043cd93
    POP EBX                             ; 0043cd94
    RET                                 ; 0043cd95

