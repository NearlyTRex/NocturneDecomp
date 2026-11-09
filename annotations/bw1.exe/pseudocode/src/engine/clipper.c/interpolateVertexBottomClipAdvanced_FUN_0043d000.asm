; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_0043d000(int *param_1,int *param_2,int *param_3)
;
;
; XREF[2]:
;   engine_clipper.c_FUN_0043d4fe at 0043d5c1
;   engine_clipper.c_clipPolygonToViewport_FUN_0043de60 at 0043e50c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043d000
        ;   Label: engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_0043d000
    PUSH ESI                            ; 0043d001
    PUSH EDI                            ; 0043d002
    PUSH EBP                            ; 0043d003
    MOV ESI,dword ptr [ESP + 0x14]      ; 0043d004
    MOV EBP,dword ptr [ESP + 0x18]      ; 0043d008
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0043d00c
    MOV EDX,dword ptr [ESI + 0x4]       ; 0043d010
    MOV ECX,dword ptr [ESI + 0x8]       ; 0043d013
    MOV EBX,dword ptr [EBP + 0x8]       ; 0043d016
    ADD EDX,ECX                         ; 0043d019
    MOV ECX,dword ptr [EBP + 0x4]       ; 0043d01b
    ADD ECX,EBX                         ; 0043d01e
    MOV EBX,EDX                         ; 0043d020
    SUB EBX,ECX                         ; 0043d022
    CMP EDX,EBX                         ; 0043d024
    JGE 0x0043d03a                      ; 0043d026
        ;   XREF to: 0043d03a (CONDITIONAL_JUMP)  ; LAB_0043d03a
    NEG EBX                             ; 0043d028
    CMP EDX,EBX                         ; 0043d02a
    JLE 0x0043d041                      ; 0043d02c
        ;   XREF to: 0043d041 (CONDITIONAL_JUMP)  ; LAB_0043d041
    NEG EBX                             ; 0043d02e
    XOR EAX,EAX                         ; 0043d030
    SAR EDX,0x1                         ; 0043d032
    RCR EAX,0x1                         ; 0043d034
    IDIV EBX                            ; 0043d036
    JMP 0x0043d048                      ; 0043d038
        ;   XREF to: 0043d048 (UNCONDITIONAL_JUMP)  ; LAB_0043d048
    MOV EAX,0x7fffffff                  ; 0043d03a
        ;   Label: LAB_0043d03a
    JMP 0x0043d048                      ; 0043d03f
        ;   XREF to: 0043d048 (UNCONDITIONAL_JUMP)  ; LAB_0043d048
    NEG EBX                             ; 0043d041
        ;   Label: LAB_0043d041
    MOV EAX,0x80000000                  ; 0043d043
    MOV ECX,EAX                         ; 0043d048
        ;   Label: LAB_0043d048
    MOV EDX,dword ptr [ESI + 0x8]       ; 0043d04a
    MOV EAX,dword ptr [EBP + 0x8]       ; 0043d04d
    SUB EAX,EDX                         ; 0043d050
    MOV EDX,ECX                         ; 0043d052
    IMUL EDX                            ; 0043d054
    ADD EAX,EAX                         ; 0043d056
    ADC EDX,EDX                         ; 0043d058
    MOV EAX,EDX                         ; 0043d05a
    MOV EDX,dword ptr [ESI + 0x8]       ; 0043d05c
    ADD EAX,EDX                         ; 0043d05f
    MOV dword ptr [EDI + 0x8],EAX       ; 0043d061
    MOV EBX,EAX                         ; 0043d064
    MOV dword ptr [EDI + 0x4],EAX       ; 0043d066
    NEG EBX                             ; 0043d069
    MOV dword ptr [EDI + 0x4],EBX       ; 0043d06b
    MOV EAX,dword ptr [EBP]             ; 0043d06e
    SUB EAX,dword ptr [ESI]             ; 0043d071
    MOV EDX,ECX                         ; 0043d073
    IMUL EDX                            ; 0043d075
    ADD EAX,EAX                         ; 0043d077
    ADC EDX,EDX                         ; 0043d079
    MOV EAX,EDX                         ; 0043d07b
    MOV EDX,dword ptr [ESI]             ; 0043d07d
    MOV dword ptr [EDI + 0x10],0xffffffff ; 0043d07f
    ADD EAX,EDX                         ; 0043d086
    MOV dword ptr [EDI],EAX             ; 0043d088
    MOV EAX,dword ptr [EBP + 0x20]      ; 0043d08a
    MOV EBX,dword ptr [ESI + 0x20]      ; 0043d08d
    MOV EDX,ECX                         ; 0043d090
    SUB EAX,EBX                         ; 0043d092
    IMUL EDX                            ; 0043d094
    ADD EAX,EAX                         ; 0043d096
    ADC EDX,EDX                         ; 0043d098
    MOV EAX,EDX                         ; 0043d09a
    MOV EDX,dword ptr [ESI + 0x20]      ; 0043d09c
    ADD EAX,EDX                         ; 0043d09f
    MOV dword ptr [EDI + 0x20],EAX      ; 0043d0a1
    MOV EAX,dword ptr [EBP + 0x24]      ; 0043d0a4
    SUB EAX,dword ptr [ESI + 0x24]      ; 0043d0a7
    MOV EDX,ECX                         ; 0043d0aa
    IMUL EDX                            ; 0043d0ac
    ADD EAX,EAX                         ; 0043d0ae
    ADC EDX,EDX                         ; 0043d0b0
    MOV EAX,EDX                         ; 0043d0b2
    MOV EDX,dword ptr [ESI + 0x24]      ; 0043d0b4
    ADD EAX,EDX                         ; 0043d0b7
    MOV dword ptr [EDI + 0x24],EAX      ; 0043d0b9
    MOV EAX,dword ptr [EBP + 0x28]      ; 0043d0bc
    MOV EBX,dword ptr [ESI + 0x28]      ; 0043d0bf
    MOV EDX,ECX                         ; 0043d0c2
    SUB EAX,EBX                         ; 0043d0c4
    IMUL EDX                            ; 0043d0c6
    ADD EAX,EAX                         ; 0043d0c8
    ADC EDX,EDX                         ; 0043d0ca
    MOV EAX,EDX                         ; 0043d0cc
    MOV EDX,dword ptr [ESI + 0x28]      ; 0043d0ce
    ADD EDX,EAX                         ; 0043d0d1
    MOV dword ptr [EDI + 0x28],EDX      ; 0043d0d3
    MOV EAX,dword ptr [EBP + 0x18]      ; 0043d0d6
    SUB EAX,dword ptr [ESI + 0x18]      ; 0043d0d9
    MOV EDX,ECX                         ; 0043d0dc
    IMUL EDX                            ; 0043d0de
    ADD EAX,EAX                         ; 0043d0e0
    ADC EDX,EDX                         ; 0043d0e2
    MOV EAX,EDX                         ; 0043d0e4
    MOV EDX,dword ptr [ESI + 0x18]      ; 0043d0e6
    ADD EDX,EAX                         ; 0043d0e9
    MOV dword ptr [EDI + 0x18],EDX      ; 0043d0eb
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0043d0ee
    MOV EBX,dword ptr [ESI + 0x1c]      ; 0043d0f1
    MOV EDX,ECX                         ; 0043d0f4
    SUB EAX,EBX                         ; 0043d0f6
    IMUL EDX                            ; 0043d0f8
    ADD EAX,EAX                         ; 0043d0fa
    ADC EDX,EDX                         ; 0043d0fc
    MOV EAX,EDX                         ; 0043d0fe
    MOV EDX,dword ptr [ESI + 0x1c]      ; 0043d100
    ADD EDX,EAX                         ; 0043d103
    MOV dword ptr [EDI + 0x1c],EDX      ; 0043d105
    MOV EAX,dword ptr [EBP + 0x2c]      ; 0043d108
    MOV EBP,dword ptr [ESI + 0x2c]      ; 0043d10b
    MOV EDX,ECX                         ; 0043d10e
    SUB EAX,EBP                         ; 0043d110
    IMUL EDX                            ; 0043d112
    ADD EAX,EAX                         ; 0043d114
    ADC EDX,EDX                         ; 0043d116
    MOV EAX,EDX                         ; 0043d118
    MOV EDX,dword ptr [ESI + 0x2c]      ; 0043d11a
    ADD EDX,EAX                         ; 0043d11d
    MOV dword ptr [EDI + 0x2c],EDX      ; 0043d11f
    POP EBP                             ; 0043d122
    POP EDI                             ; 0043d123
    POP ESI                             ; 0043d124
    POP EBX                             ; 0043d125
    RET                                 ; 0043d126

