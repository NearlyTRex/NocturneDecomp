; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawLineBresenham_FUN_0045c0f0(int param_1,int param_2,int param_3,int param_4,int param_5)
;
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_0045bfb0 at 0045c037
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045c0f0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawLineBresenham_FUN_0045c0f0
    PUSH ESI                            ; 0045c0f1
    PUSH EDI                            ; 0045c0f2
    PUSH EBP                            ; 0045c0f3
    SUB ESP,0x10                        ; 0045c0f4
    MOV EDI,dword ptr [ESP + 0x28]      ; 0045c0f7
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0045c0fb
    MOV EBP,dword ptr [ESP + 0x30]      ; 0045c0ff
    MOV ESI,dword ptr [ESP + 0x34]      ; 0045c103
    MOV EDX,0x1                         ; 0045c107
    MOV EAX,dword ptr [ESP + 0x24]      ; 0045c10c
    MOV dword ptr [ESP],EDX             ; 0045c110
    MOV ECX,dword ptr [EAX + 0x8]       ; 0045c113
    MOV EDX,dword ptr [EAX + 0xc]       ; 0045c116
    SUB EDI,ECX                         ; 0045c119
    SUB EBX,EDX                         ; 0045c11b
    SUB ESI,EDX                         ; 0045c11d
    SUB EBP,ECX                         ; 0045c11f
    CMP EBX,ESI                         ; 0045c121
    JLE 0x0045c131                      ; 0045c123
        ;   XREF to: 0045c131 (CONDITIONAL_JUMP)  ; LAB_0045c131
    MOV EAX,EDI                         ; 0045c125
    MOV EDI,EBP                         ; 0045c127
    MOV EBP,EAX                         ; 0045c129
    MOV EAX,EBX                         ; 0045c12b
    MOV EBX,ESI                         ; 0045c12d
    MOV ESI,EAX                         ; 0045c12f
    SUB ESI,EBX                         ; 0045c131
        ;   Label: LAB_0045c131
    SUB EBP,EDI                         ; 0045c133
    MOV dword ptr [ESP + 0xc],ESI       ; 0045c135
    TEST EBP,EBP                        ; 0045c139
    JL 0x0045c18b                       ; 0045c13b
        ;   XREF to: 0045c18b (CONDITIONAL_JUMP)  ; LAB_0045c18b
    MOV ESI,EDI                         ; 0045c13d
        ;   Label: LAB_0045c13d
    MOV EDI,dword ptr [ESP + 0xc]       ; 0045c13f
    CMP EBP,EDI                         ; 0045c143
    JLE 0x0045c197                      ; 0045c145
        ;   XREF to: 0045c197 (CONDITIONAL_JUMP)  ; LAB_0045c197
    XOR EAX,EAX                         ; 0045c147
    ADD EDI,EDI                         ; 0045c149
    MOV dword ptr [ESP + 0x4],EAX       ; 0045c14b
    SUB EDI,EBP                         ; 0045c14f
    TEST EBP,EBP                        ; 0045c151
    JL 0x0045c183                       ; 0045c153
        ;   XREF to: 0045c183 (CONDITIONAL_JUMP)  ; LAB_0045c183
    PUSH EBX                            ; 0045c155
        ;   Label: LAB_0045c155
    PUSH ESI                            ; 0045c156
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0045c157
    PUSH EDX                            ; 0045c15b
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0 ; 0045c15c
        ;   XREF to: 0045bab0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0()
    ADD ESP,0xc                         ; 0045c161
    TEST EDI,EDI                        ; 0045c164
    JLE 0x0045c16b                      ; 0045c166
        ;   XREF to: 0045c16b (CONDITIONAL_JUMP)  ; LAB_0045c16b
    INC EBX                             ; 0045c168
    SUB EDI,EBP                         ; 0045c169
    MOV EAX,dword ptr [ESP]             ; 0045c16b
        ;   Label: LAB_0045c16b
    MOV ECX,dword ptr [ESP + 0x4]       ; 0045c16e
    MOV EDX,dword ptr [ESP + 0xc]       ; 0045c172
    INC ECX                             ; 0045c176
    ADD ESI,EAX                         ; 0045c177
    ADD EDI,EDX                         ; 0045c179
    MOV dword ptr [ESP + 0x4],ECX       ; 0045c17b
    CMP EBP,ECX                         ; 0045c17f
    JGE 0x0045c155                      ; 0045c181
        ;   XREF to: 0045c155 (CONDITIONAL_JUMP)  ; LAB_0045c155
    ADD ESP,0x10                        ; 0045c183
        ;   Label: LAB_0045c183
    POP EBP                             ; 0045c186
    POP EDI                             ; 0045c187
    POP ESI                             ; 0045c188
    POP EBX                             ; 0045c189
    RET                                 ; 0045c18a
    MOV ECX,0xffffffff                  ; 0045c18b
        ;   Label: LAB_0045c18b
    NEG EBP                             ; 0045c190
    MOV dword ptr [ESP],ECX             ; 0045c192
    JMP 0x0045c13d                      ; 0045c195
        ;   XREF to: 0045c13d (UNCONDITIONAL_JUMP)  ; LAB_0045c13d
    MOV EAX,dword ptr [ESP + 0xc]       ; 0045c197
        ;   Label: LAB_0045c197
    XOR EDX,EDX                         ; 0045c19b
    LEA EDI,[EBP + EBP*0x1]             ; 0045c19d
    MOV dword ptr [ESP + 0x8],EDX       ; 0045c1a1
    SUB EDI,EAX                         ; 0045c1a5
    TEST EAX,EAX                        ; 0045c1a7
    JL 0x0045c183                       ; 0045c1a9
        ;   XREF to: 0045c183 (CONDITIONAL_JUMP)  ; LAB_0045c183
    PUSH EBX                            ; 0045c1ab
        ;   Label: LAB_0045c1ab
    PUSH ESI                            ; 0045c1ac
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0045c1ad
    PUSH EAX                            ; 0045c1b1
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0 ; 0045c1b2
        ;   XREF to: 0045bab0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0()
    ADD ESP,0xc                         ; 0045c1b7
    TEST EDI,EDI                        ; 0045c1ba
    JLE 0x0045c1c9                      ; 0045c1bc
        ;   XREF to: 0045c1c9 (CONDITIONAL_JUMP)  ; LAB_0045c1c9
    MOV ECX,dword ptr [ESP + 0xc]       ; 0045c1be
    MOV EDX,dword ptr [ESP]             ; 0045c1c2
    SUB EDI,ECX                         ; 0045c1c5
    ADD ESI,EDX                         ; 0045c1c7
    MOV EDX,dword ptr [ESP + 0x8]       ; 0045c1c9
        ;   Label: LAB_0045c1c9
    MOV ECX,dword ptr [ESP + 0xc]       ; 0045c1cd
    INC EBX                             ; 0045c1d1
    INC EDX                             ; 0045c1d2
    ADD EDI,EBP                         ; 0045c1d3
    MOV dword ptr [ESP + 0x8],EDX       ; 0045c1d5
    CMP EDX,ECX                         ; 0045c1d9
    JG 0x0045c183                       ; 0045c1db
        ;   XREF to: 0045c183 (CONDITIONAL_JUMP)  ; LAB_0045c183
    JMP 0x0045c1ab                      ; 0045c1dd
        ;   XREF to: 0045c1ab (UNCONDITIONAL_JUMP)  ; LAB_0045c1ab

