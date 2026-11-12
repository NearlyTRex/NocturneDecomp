; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_clipper_c_clipPolygonBottomPlaneGlobal_FUN_0043b14e(void)
;
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_0043b13c = 0043b202
;   undefined1* PTR_caseD_3_0043b144 = 0043b1e2
;   undefined4 DAT_007e3e88
;   undefined4 DAT_007e3e8c
;   undefined4 DAT_007e3e90
;   undefined4 DAT_007e4d60
;   undefined4 DAT_007e5f64
;   undefined1 DAT_007e5f68
;   undefined4 DAT_007e5f6c
;
; Called Functions:
;   engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_0043ac50
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 0043b14e
        ;   Label: engine_clipper.c_clipPolygonBottomPlaneGlobal_FUN_0043b14e
    PUSH EBX                            ; 0043b150
    PUSH ESI                            ; 0043b151
    PUSH EDI                            ; 0043b152
    PUSH EBP                            ; 0043b153
    SUB ESP,0x4                         ; 0043b154
    XOR EDX,EDX                         ; 0043b157
    MOV ECX,dword ptr [0x007e4d60]      ; 0043b159 | DAT_007e4d60
    MOV dword ptr [ESP],EDX             ; 0043b15f
    TEST ECX,ECX                        ; 0043b162
    JLE 0x0043b1fa                      ; 0043b164
        ;   XREF to: 0043b1fa (CONDITIONAL_JUMP)  ; LAB_0043b1fa
    MOV EBX,0x7e5f64                    ; 0043b16a
    MOV EAX,dword ptr [ESP]             ; 0043b16f
        ;   Label: LAB_0043b16f
    MOV EBP,dword ptr [0x007e4d60]      ; 0043b172 | DAT_007e4d60
    INC EAX                             ; 0043b178
    CMP EAX,EBP                         ; 0043b179
    JNZ 0x0043b17f                      ; 0043b17b
        ;   XREF to: 0043b17f (CONDITIONAL_JUMP)  ; LAB_0043b17f
    XOR EAX,EBP                         ; 0043b17d
    IMUL EAX,EAX,0x30                   ; 0043b17f
        ;   Label: LAB_0043b17f
    MOV EBP,0x7e5f64                    ; 0043b182 | DAT_007e5f64
    MOV EDX,EBX                         ; 0043b187
    MOV EDI,dword ptr [EBX + 0x8]       ; 0043b189
    MOV ECX,dword ptr [EBX + 0x4]       ; 0043b18c
    NEG EDI                             ; 0043b18f
    ADD EBP,EAX                         ; 0043b191
    XOR EAX,EAX                         ; 0043b193
    CMP EDI,ECX                         ; 0043b195
    JL 0x0043b19e                       ; 0043b197
        ;   XREF to: 0043b19e (CONDITIONAL_JUMP)  ; LAB_0043b19e
    MOV EAX,0x1                         ; 0043b199
    MOV EDI,dword ptr [EBP + 0x8]       ; 0043b19e | DAT_007e5f6c
        ;   Label: LAB_0043b19e
    MOV ESI,dword ptr [EBP + 0x4]       ; 0043b1a1 | DAT_007e5f68
    NEG EDI                             ; 0043b1a4
    CMP EDI,ESI                         ; 0043b1a6
    JL 0x0043b1ac                       ; 0043b1a8
        ;   XREF to: 0043b1ac (CONDITIONAL_JUMP)  ; LAB_0043b1ac
    OR AL,0x2                           ; 0043b1aa
    CMP EAX,0x3                         ; 0043b1ac
        ;   Label: LAB_0043b1ac
    JA 0x0043b1e2                       ; 0043b1af
        ;   XREF to: 0043b1e2 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43b138]  ; 0043b1b1 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x007e3e88],0x30 ; 0043b1b8 | DAT_007e3e88
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 0043b1bf
    MOV ESI,EDX                         ; 0043b1c4
    ADD EDI,0x7e3e8c                    ; 0043b1c6 | DAT_007e3e8c
    PUSH EDI                            ; 0043b1cc
    MOV EAX,ECX                         ; 0043b1cd
    SHR ECX,0x2                         ; 0043b1cf
    MOVSD.REP ES:EDI,ESI                ; 0043b1d2 | DAT_007e3e8c | DAT_007e3e90
    MOV CL,AL                           ; 0043b1d4
    AND CL,0x3                          ; 0043b1d6
    MOVSB.REP ES:EDI,ESI                ; 0043b1d9 | DAT_007e3e90
    POP EDI                             ; 0043b1db
    INC dword ptr [0x007e3e88]          ; 0043b1dc | DAT_007e3e88
    MOV ESI,dword ptr [ESP]             ; 0043b1e2
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x007e4d60]      ; 0043b1e5 | DAT_007e4d60
    INC ESI                             ; 0043b1eb
    ADD EBX,0x30                        ; 0043b1ec
    MOV dword ptr [ESP],ESI             ; 0043b1ef
    CMP ESI,EDI                         ; 0043b1f2
    JL 0x0043b16f                       ; 0043b1f4
        ;   XREF to: 0043b16f (CONDITIONAL_JUMP)  ; LAB_0043b16f
    ADD ESP,0x4                         ; 0043b1fa
        ;   Label: LAB_0043b1fa
    POP EBP                             ; 0043b1fd
    POP EDI                             ; 0043b1fe
    POP ESI                             ; 0043b1ff
    POP EBX                             ; 0043b200
    RET                                 ; 0043b201
    IMUL EAX,dword ptr [0x007e3e88],0x30 ; 0043b202 | DAT_007e3e88
        ;   Label: caseD_1
    ADD EAX,0x7e3e8c                    ; 0043b209 | DAT_007e3e8c
    PUSH EAX                            ; 0043b20e
    PUSH EDX                            ; 0043b20f
    PUSH EBP                            ; 0043b210
    CALL engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_0043ac50 ; 0043b211
        ;   XREF to: 0043ac50 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_0043ac50(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x007e3e88]      ; 0043b216 | DAT_007e3e88
    INC ESI                             ; 0043b21c
    ADD ESP,0xc                         ; 0043b21d
    MOV dword ptr [0x007e3e88],ESI      ; 0043b220 | DAT_007e3e88
    JMP 0x0043b1e2                      ; 0043b226
        ;   XREF to: 0043b1e2 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x007e3e88],0x30 ; 0043b228 | DAT_007e3e88
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 0043b22f
    MOV ESI,EDX                         ; 0043b234
    ADD EDI,0x7e3e8c                    ; 0043b236 | DAT_007e3e8c
    PUSH EDI                            ; 0043b23c
    MOV EAX,ECX                         ; 0043b23d
    SHR ECX,0x2                         ; 0043b23f
    MOVSD.REP ES:EDI,ESI                ; 0043b242 | DAT_007e3e8c | DAT_007e3e90
    MOV CL,AL                           ; 0043b244
    AND CL,0x3                          ; 0043b246
    MOVSB.REP ES:EDI,ESI                ; 0043b249 | DAT_007e3e90
    POP EDI                             ; 0043b24b
    MOV ECX,dword ptr [0x007e3e88]      ; 0043b24c | DAT_007e3e88
    INC ECX                             ; 0043b252
    MOV dword ptr [0x007e3e88],ECX      ; 0043b253 | DAT_007e3e88
    IMUL EAX,ECX,0x30                   ; 0043b259
    ADD EAX,0x7e3e8c                    ; 0043b25c | DAT_007e3e8c
    PUSH EAX                            ; 0043b261
    PUSH EBP                            ; 0043b262
    PUSH EDX                            ; 0043b263
    CALL engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_0043ac50 ; 0043b264
        ;   XREF to: 0043ac50 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_0043ac50(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x007e3e88]      ; 0043b269 | DAT_007e3e88
    INC EDI                             ; 0043b26f
    ADD ESP,0xc                         ; 0043b270
    MOV dword ptr [0x007e3e88],EDI      ; 0043b273 | DAT_007e3e88
    JMP 0x0043b1e2                      ; 0043b279
        ;   XREF to: 0043b1e2 (UNCONDITIONAL_JUMP)  ; caseD_3

