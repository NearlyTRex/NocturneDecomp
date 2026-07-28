; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_3d_c_addPolygonEdge_FUN_004940e0(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01c70f78
;   undefined4 DAT_01c70f7c
;   undefined4 DAT_01c712fc
;   undefined4 DAT_01c71300
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004940e0
        ;   Label: engine_3d.c_addPolygonEdge_FUN_004940e0
    PUSH ESI                            ; 004940e1
    PUSH EDI                            ; 004940e2
    PUSH EBP                            ; 004940e3
    MOV ESI,dword ptr [ESP + 0x14]      ; 004940e4
    MOV EDI,dword ptr [ESP + 0x18]      ; 004940e8
    MOV EAX,dword ptr [EDI + 0x14]      ; 004940ec
    MOV EBX,dword ptr [ESI + 0x14]      ; 004940ef
    SAR EAX,0x10                        ; 004940f2
    SAR EBX,0x10                        ; 004940f5
    CMP EBX,EAX                         ; 004940f8
    JZ 0x00494200                       ; 004940fa
        ;   XREF to: 00494200 (CONDITIONAL_JUMP)  ; LAB_00494200
    MOV ECX,dword ptr [EDI + 0x14]      ; 00494100
    CMP ECX,dword ptr [ESI + 0x14]      ; 00494103
    JGE 0x00494114                      ; 00494106
        ;   XREF to: 00494114 (CONDITIONAL_JUMP)  ; LAB_00494114
    MOV EDX,ESI                         ; 00494108
    MOV ESI,EDI                         ; 0049410a
    MOV EDI,EDX                         ; 0049410c
    MOV EDX,EBX                         ; 0049410e
    MOV EBX,EAX                         ; 00494110
    MOV EAX,EDX                         ; 00494112
    MOV ECX,dword ptr [0x01c70f78]      ; 00494114 | DAT_01c70f78
        ;   Label: LAB_00494114
    SHL ECX,0x3                         ; 0049411a
    MOV EDX,ECX                         ; 0049411d
    SHL ECX,0x3                         ; 0049411f
    SUB ECX,EDX                         ; 00494122
    ADD ECX,0x1c70f7c                   ; 00494124
    MOV dword ptr [ECX],EBX             ; 0049412a | DAT_01c70f7c
    MOV EBP,dword ptr [0x01c712fc]      ; 0049412c | DAT_01c712fc
    MOV dword ptr [ECX + 0x4],EAX       ; 00494132
    CMP EBX,EBP                         ; 00494135
    JGE 0x0049413f                      ; 00494137
        ;   XREF to: 0049413f (CONDITIONAL_JUMP)  ; LAB_0049413f
    MOV dword ptr [0x01c712fc],EBX      ; 00494139 | DAT_01c712fc
    CMP EAX,dword ptr [0x01c71300]      ; 0049413f | DAT_01c71300
        ;   Label: LAB_0049413f
    JLE 0x0049414c                      ; 00494145
        ;   XREF to: 0049414c (CONDITIONAL_JUMP)  ; LAB_0049414c
    MOV [0x01c71300],EAX                ; 00494147 | DAT_01c71300
    MOV EAX,dword ptr [ESI + 0x10]      ; 0049414c
        ;   Label: LAB_0049414c
    MOV dword ptr [ECX + 0x8],EAX       ; 0049414f
    MOV EAX,dword ptr [ESI + 0x18]      ; 00494152
    MOV dword ptr [ECX + 0x18],EAX      ; 00494155
    MOV EAX,dword ptr [ESI + 0x1c]      ; 00494158
    MOV dword ptr [ECX + 0x20],EAX      ; 0049415b
    MOV EBX,dword ptr [EDI + 0x14]      ; 0049415e
    SUB EBX,dword ptr [ESI + 0x14]      ; 00494161
    CMP EBX,0x10000                     ; 00494164
    JNC 0x00494205                      ; 0049416a
        ;   XREF to: 00494205 (CONDITIONAL_JUMP)  ; LAB_00494205
    XOR EBX,EBX                         ; 00494170
    MOV EAX,dword ptr [EDI + 0x10]      ; 00494172
        ;   Label: LAB_00494172
    MOV EDX,dword ptr [ESI + 0x10]      ; 00494175
    SUB EAX,EDX                         ; 00494178
    MOV EDX,EAX                         ; 0049417a
    MOV EAX,EBX                         ; 0049417c
    IMUL EDX                            ; 0049417e
    SHRD EAX,EDX,0x10                   ; 00494180
    MOV dword ptr [ECX + 0xc],EAX       ; 00494184
    MOV EDX,dword ptr [EDI + 0x18]      ; 00494187
    MOV EBP,dword ptr [ESI + 0x18]      ; 0049418a
    MOV EAX,EBX                         ; 0049418d
    SUB EDX,EBP                         ; 0049418f
    IMUL EDX                            ; 00494191
    SHRD EAX,EDX,0x10                   ; 00494193
    MOV dword ptr [ECX + 0x1c],EAX      ; 00494197
    MOV EAX,dword ptr [EDI + 0x1c]      ; 0049419a
    MOV EDX,dword ptr [ESI + 0x1c]      ; 0049419d
    SUB EAX,EDX                         ; 004941a0
    MOV EDX,EAX                         ; 004941a2
    MOV EAX,EBX                         ; 004941a4
    IMUL EDX                            ; 004941a6
    SHRD EAX,EDX,0x10                   ; 004941a8
    MOV dword ptr [ECX + 0x24],EAX      ; 004941ac
    MOV EBX,dword ptr [ESI + 0x14]      ; 004941af
    AND EBX,0xffff                      ; 004941b2
    XOR BX,0xffff                       ; 004941b8
    MOV EDX,dword ptr [ECX + 0xc]       ; 004941bc
    MOV EAX,EBX                         ; 004941bf
    IMUL EDX                            ; 004941c1
    SHRD EAX,EDX,0x10                   ; 004941c3
    MOV ESI,dword ptr [ECX + 0x8]       ; 004941c7
    MOV EDX,dword ptr [ECX + 0x1c]      ; 004941ca
    ADD ESI,EAX                         ; 004941cd
    MOV EAX,EBX                         ; 004941cf
    MOV dword ptr [ECX + 0x8],ESI       ; 004941d1
    IMUL EDX                            ; 004941d4
    SHRD EAX,EDX,0x10                   ; 004941d6
    MOV EDI,dword ptr [ECX + 0x18]      ; 004941da
    MOV EDX,dword ptr [ECX + 0x24]      ; 004941dd
    ADD EDI,EAX                         ; 004941e0
    MOV EAX,EBX                         ; 004941e2
    MOV dword ptr [ECX + 0x18],EDI      ; 004941e4
    IMUL EDX                            ; 004941e7
    SHRD EAX,EDX,0x10                   ; 004941e9
    MOV EBP,dword ptr [ECX + 0x20]      ; 004941ed
    ADD EBP,EAX                         ; 004941f0
    MOV EAX,[0x01c70f78]                ; 004941f2 | DAT_01c70f78
    INC EAX                             ; 004941f7
    MOV dword ptr [ECX + 0x20],EBP      ; 004941f8
    MOV [0x01c70f78],EAX                ; 004941fb | DAT_01c70f78
    POP EBP                             ; 00494200
        ;   Label: LAB_00494200
    POP EDI                             ; 00494201
    POP ESI                             ; 00494202
    POP EBX                             ; 00494203
    RET                                 ; 00494204
    MOV EAX,0xffffffff                  ; 00494205
        ;   Label: LAB_00494205
    XOR EDX,EDX                         ; 0049420a
    DIV EBX                             ; 0049420c
    MOV EBX,EAX                         ; 0049420e
    JMP 0x00494172                      ; 00494210
        ;   XREF to: 00494172 (UNCONDITIONAL_JUMP)  ; LAB_00494172

