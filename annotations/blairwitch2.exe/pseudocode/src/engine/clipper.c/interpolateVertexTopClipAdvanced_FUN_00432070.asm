; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_00432070(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   v1
; SRenderVertex *  Stack[0x8]:4   v2
; SRenderVertex *  Stack[0xc]:4   output
;
; XREF[1]:
;   engine_clipper.c_clipPolygonToViewport_FUN_00433000 at 0043362d
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00432070
        ;   Label: engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00432070
    PUSH ESI                            ; 00432071
    PUSH EDI                            ; 00432072
    PUSH EBP                            ; 00432073
    MOV ECX,dword ptr [ESP + 0x14]      ; 00432074
    MOV EDI,dword ptr [ESP + 0x18]      ; 00432078
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0043207c
    MOV EAX,dword ptr [EDI + 0x4]       ; 00432080
    MOV EDX,dword ptr [ECX + 0x8]       ; 00432083
    MOV EBX,dword ptr [ECX + 0x4]       ; 00432086
    MOV EBP,dword ptr [EDI + 0x8]       ; 00432089
    ADD EAX,EDX                         ; 0043208c
    ADD EBX,EBP                         ; 0043208e
    SUB EAX,EBX                         ; 00432090
    MOV EBX,EDX                         ; 00432092
    MOV EDX,dword ptr [ECX + 0x4]       ; 00432094
    SUB EBX,EDX                         ; 00432097
    MOV EDX,EBX                         ; 00432099
    MOV EBX,EAX                         ; 0043209b
    CMP EDX,EBX                         ; 0043209d
    JGE 0x004320b3                      ; 0043209f
        ;   XREF to: 004320b3 (CONDITIONAL_JUMP)  ; LAB_004320b3
    NEG EBX                             ; 004320a1
    CMP EDX,EBX                         ; 004320a3
    JLE 0x004320ba                      ; 004320a5
        ;   XREF to: 004320ba (CONDITIONAL_JUMP)  ; LAB_004320ba
    NEG EBX                             ; 004320a7
    XOR EAX,EAX                         ; 004320a9
    SAR EDX,0x1                         ; 004320ab
    RCR EAX,0x1                         ; 004320ad
    IDIV EBX                            ; 004320af
    JMP 0x004320c1                      ; 004320b1
        ;   XREF to: 004320c1 (UNCONDITIONAL_JUMP)  ; LAB_004320c1
    MOV EAX,0x7fffffff                  ; 004320b3
        ;   Label: LAB_004320b3
    JMP 0x004320c1                      ; 004320b8
        ;   XREF to: 004320c1 (UNCONDITIONAL_JUMP)  ; LAB_004320c1
    NEG EBX                             ; 004320ba
        ;   Label: LAB_004320ba
    MOV EAX,0x80000000                  ; 004320bc
    MOV EBX,EAX                         ; 004320c1
        ;   Label: LAB_004320c1
    MOV EBP,dword ptr [ECX + 0x8]       ; 004320c3
    MOV EAX,dword ptr [EDI + 0x8]       ; 004320c6
    MOV EDX,EBX                         ; 004320c9
    SUB EAX,EBP                         ; 004320cb
    IMUL EDX                            ; 004320cd
    ADD EAX,EAX                         ; 004320cf
    ADC EDX,EDX                         ; 004320d1
    MOV EAX,EDX                         ; 004320d3
    MOV EDX,dword ptr [ECX + 0x8]       ; 004320d5
    ADD EAX,EDX                         ; 004320d8
    MOV dword ptr [ESI + 0x8],EAX       ; 004320da
    MOV dword ptr [ESI + 0x4],EAX       ; 004320dd
    MOV EAX,dword ptr [EDI]             ; 004320e0
    SUB EAX,dword ptr [ECX]             ; 004320e2
    MOV EDX,EBX                         ; 004320e4
    IMUL EDX                            ; 004320e6
    ADD EAX,EAX                         ; 004320e8
    ADC EDX,EDX                         ; 004320ea
    MOV EAX,EDX                         ; 004320ec
    MOV EDX,dword ptr [ECX]             ; 004320ee
    MOV dword ptr [ESI + 0x10],0xffffffff ; 004320f0
    ADD EAX,EDX                         ; 004320f7
    MOV dword ptr [ESI],EAX             ; 004320f9
    MOV EAX,dword ptr [EDI + 0x20]      ; 004320fb
    MOV EBP,dword ptr [ECX + 0x20]      ; 004320fe
    MOV EDX,EBX                         ; 00432101
    SUB EAX,EBP                         ; 00432103
    IMUL EDX                            ; 00432105
    ADD EAX,EAX                         ; 00432107
    ADC EDX,EDX                         ; 00432109
    MOV EAX,EDX                         ; 0043210b
    MOV EDX,dword ptr [ECX + 0x20]      ; 0043210d
    ADD EAX,EDX                         ; 00432110
    MOV dword ptr [ESI + 0x20],EAX      ; 00432112
    MOV EAX,dword ptr [EDI + 0x24]      ; 00432115
    SUB EAX,dword ptr [ECX + 0x24]      ; 00432118
    MOV EDX,EBX                         ; 0043211b
    IMUL EDX                            ; 0043211d
    ADD EAX,EAX                         ; 0043211f
    ADC EDX,EDX                         ; 00432121
    MOV EAX,EDX                         ; 00432123
    MOV EDX,dword ptr [ECX + 0x24]      ; 00432125
    ADD EDX,EAX                         ; 00432128
    MOV dword ptr [ESI + 0x24],EDX      ; 0043212a
    MOV EAX,dword ptr [EDI + 0x28]      ; 0043212d
    MOV EBP,dword ptr [ECX + 0x28]      ; 00432130
    MOV EDX,EBX                         ; 00432133
    SUB EAX,EBP                         ; 00432135
    IMUL EDX                            ; 00432137
    ADD EAX,EAX                         ; 00432139
    ADC EDX,EDX                         ; 0043213b
    MOV EAX,EDX                         ; 0043213d
    MOV EDX,dword ptr [ECX + 0x28]      ; 0043213f
    ADD EDX,EAX                         ; 00432142
    MOV dword ptr [ESI + 0x28],EDX      ; 00432144
    MOV EAX,dword ptr [EDI + 0x18]      ; 00432147
    SUB EAX,dword ptr [ECX + 0x18]      ; 0043214a
    MOV EDX,EBX                         ; 0043214d
    IMUL EDX                            ; 0043214f
    ADD EAX,EAX                         ; 00432151
    ADC EDX,EDX                         ; 00432153
    MOV EAX,EDX                         ; 00432155
    MOV EDX,dword ptr [ECX + 0x18]      ; 00432157
    ADD EDX,EAX                         ; 0043215a
    MOV dword ptr [ESI + 0x18],EDX      ; 0043215c
    MOV EAX,dword ptr [EDI + 0x1c]      ; 0043215f
    MOV EBP,dword ptr [ECX + 0x1c]      ; 00432162
    MOV EDX,EBX                         ; 00432165
    SUB EAX,EBP                         ; 00432167
    IMUL EDX                            ; 00432169
    ADD EAX,EAX                         ; 0043216b
    ADC EDX,EDX                         ; 0043216d
    MOV EAX,EDX                         ; 0043216f
    MOV EDX,dword ptr [ECX + 0x1c]      ; 00432171
    ADD EDX,EAX                         ; 00432174
    MOV dword ptr [ESI + 0x1c],EDX      ; 00432176
    MOV EAX,dword ptr [EDI + 0x2c]      ; 00432179
    SUB EAX,dword ptr [ECX + 0x2c]      ; 0043217c
    MOV EDX,EBX                         ; 0043217f
    IMUL EDX                            ; 00432181
    ADD EAX,EAX                         ; 00432183
    ADC EDX,EDX                         ; 00432185
    MOV EAX,EDX                         ; 00432187
    MOV EDX,dword ptr [ECX + 0x2c]      ; 00432189
    ADD EDX,EAX                         ; 0043218c
    MOV dword ptr [ESI + 0x2c],EDX      ; 0043218e
    POP EBP                             ; 00432191
    POP EDI                             ; 00432192
    POP ESI                             ; 00432193
    POP EBX                             ; 00432194
    RET                                 ; 00432195

