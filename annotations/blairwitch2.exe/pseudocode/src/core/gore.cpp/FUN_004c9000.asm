; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gore_cpp_FUN_004c9000(undefined4 *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_gore.cpp_CGore_renderDecals_FUN_004c94c0 at 004c9591
;
; Referenced Globals:
;   undefined4 DAT_005f7ba8
;   undefined4 DAT_0060b280
;   undefined4 DAT_00617968
;   undefined4 DAT_00622014
;   undefined4 DAT_0062202c
;   undefined4 DAT_00622030
;   undefined4 DAT_00622034
;   undefined4 DAT_00622038
;   undefined4 DAT_0062203c
;   undefined4 DAT_00622044
;   undefined4 DAT_0062205c
;   undefined4 DAT_00622060
;   undefined4 DAT_00622064
;   undefined4 DAT_00622068
;   undefined4 DAT_0062206c
;   ... and 20 more
;
; Called Functions:
;   core_actor.cpp_FUN_0040cfc0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
;   engine_special.cpp_FUN_0055d9ec
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c9000
        ;   Label: core_gore.cpp_FUN_004c9000
    PUSH ESI                            ; 004c9001
    PUSH EDI                            ; 004c9002
    PUSH EBP                            ; 004c9003
    SUB ESP,0xc                         ; 004c9004
    MOV EDX,0x4                         ; 004c9007
    MOV EBX,0x1                         ; 004c900c
    MOV ESI,0x2                         ; 004c9011
    MOV EDI,0x3                         ; 004c9016
    MOV EBP,0x80000                     ; 004c901b
    XOR ECX,ECX                         ; 004c9020
    MOV dword ptr [0x01cb82cc],EDX      ; 004c9022 | DAT_01cb82cc
    MOV dword ptr [0x01cb82e0],ECX      ; 004c9028 | DAT_01cb82e0
    MOV dword ptr [0x01cb82e4],EBX      ; 004c902e | DAT_01cb82e4
    MOV dword ptr [0x01cb82e8],ESI      ; 004c9034 | DAT_01cb82e8
    MOV dword ptr [0x01cb82ec],EDI      ; 004c903a | DAT_01cb82ec
    MOV dword ptr [0x0062202c],EBP      ; 004c9040 | DAT_0062202c
    MOV dword ptr [0x00622030],EBP      ; 004c9046 | DAT_00622030
    MOV EDX,0xf80000                    ; 004c904c
    MOV EBX,dword ptr [ESP + 0x20]      ; 004c9051
    MOV dword ptr [0x0062205c],EDX      ; 004c9055 | DAT_0062205c
    MOV dword ptr [0x0062208c],EDX      ; 004c905b | DAT_0062208c
    MOV dword ptr [0x00622090],EDX      ; 004c9061 | DAT_00622090
    MOV EAX,dword ptr [EBX + 0x38]      ; 004c9067
    MOV dword ptr [0x006220c0],EDX      ; 004c906a | DAT_006220c0
    PUSH EAX                            ; 004c9070
    MOV EDX,dword ptr [0x0060b280]      ; 004c9071 | DAT_0060b280
    MOV dword ptr [0x00622060],EBP      ; 004c9077 | DAT_00622060
    PUSH EDX                            ; 004c907d | DAT_01ba5c50
    MOV dword ptr [0x006220bc],EBP      ; 004c907e | DAT_006220bc
    MOV EDI,0x622014                    ; 004c9084 | DAT_00622014
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 004c9089
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004c908e
    MOV EBP,dword ptr [0x0060b280]      ; 004c9091 | DAT_0060b280
    XOR ECX,ECX                         ; 004c9097
    PUSH 0x617968                       ; 004c9099 | DAT_00617968
    MOV dword ptr [0x01cb82d0],ECX      ; 004c909e | DAT_01cb82d0
    MOV dword ptr [0x01cb82d4],ECX      ; 004c90a4 | DAT_01cb82d4
    PUSH EBP                            ; 004c90aa | DAT_01ba5c50
    MOV dword ptr [0x01cb82d8],ECX      ; 004c90ab | DAT_01cb82d8
    MOV dword ptr [0x01cb82dc],ECX      ; 004c90b1 | DAT_01cb82dc
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 004c90b7
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    LEA EBP,[EBX + 0x8]                 ; 004c90bc
    ADD ESP,0x8                         ; 004c90bf
    MOV ESI,EBP                         ; 004c90c2
    ADD EBP,0x30                        ; 004c90c4
    MOV EBX,ESP                         ; 004c90c7
        ;   Label: LAB_004c90c7
    MOV EAX,ESI                         ; 004c90c9
    FLD float ptr [EAX]                 ; 004c90cb
    FMUL float ptr [0x005f7ba8]         ; 004c90cd | DAT_005f7ba8
    FISTP dword ptr [EBX]               ; 004c90d3
    FLD float ptr [EAX + 0x4]           ; 004c90d5
    FMUL float ptr [0x005f7ba8]         ; 004c90d8 | DAT_005f7ba8
    FISTP dword ptr [EBX + 0x4]         ; 004c90de
    FLD float ptr [EAX + 0x8]           ; 004c90e1
    FMUL float ptr [0x005f7ba8]         ; 004c90e4 | DAT_005f7ba8
    FISTP dword ptr [EBX + 0x8]         ; 004c90ea
    MOV EBX,ESP                         ; 004c90ed
    PUSH EBX                            ; 004c90ef
    PUSH EDI                            ; 004c90f0 | DAT_00622014 | DAT_00622044
    ADD ESI,0xc                         ; 004c90f1
    CALL engine_special.cpp_FUN_0055d9ec ; 004c90f4
        ;   XREF to: 0055d9ec (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d9ec(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c90f9
    ADD EDI,0x30                        ; 004c90fc
    CMP ESI,EBP                         ; 004c90ff
    JNZ 0x004c90c7                      ; 004c9101
        ;   XREF to: 004c90c7 (CONDITIONAL_JUMP)  ; LAB_004c90c7
    MOV EBX,dword ptr [ESP + 0x20]      ; 004c9103
    CMP dword ptr [EBX + 0x3c],0x0      ; 004c9107
    JNZ 0x004c91be                      ; 004c910b
        ;   XREF to: 004c91be (CONDITIONAL_JUMP)  ; LAB_004c91be
    MOV ESI,0x7ff                       ; 004c9111
    MOV dword ptr [0x00622038],ESI      ; 004c9116 | DAT_00622038
    MOV dword ptr [0x0062203c],ESI      ; 004c911c | DAT_0062203c
    MOV dword ptr [0x00622064],ESI      ; 004c9122 | DAT_00622064
    MOV dword ptr [0x00622068],ESI      ; 004c9128 | DAT_00622068
    MOV dword ptr [0x0062206c],ESI      ; 004c912e | DAT_0062206c
    MOV dword ptr [0x00622094],ESI      ; 004c9134 | DAT_00622094
    MOV dword ptr [0x00622098],ESI      ; 004c913a | DAT_00622098
    MOV dword ptr [0x0062209c],ESI      ; 004c9140 | DAT_0062209c
    MOV dword ptr [0x006220c4],ESI      ; 004c9146 | DAT_006220c4
    MOV dword ptr [0x006220c8],ESI      ; 004c914c | DAT_006220c8
    MOV dword ptr [0x006220cc],ESI      ; 004c9152 | DAT_006220cc
    MOV dword ptr [0x00622034],ESI      ; 004c9158 | DAT_00622034
    PUSH 0x1cb82c8                      ; 004c915e
        ;   Label: LAB_004c915e
    MOV ECX,dword ptr [0x0060b280]      ; 004c9163 | DAT_0060b280
    PUSH ECX                            ; 004c9169 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50 ; 004c916a
        ;   XREF to: 0046ab50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004c916f
    CMP dword ptr [ESP + 0x24],0x0      ; 004c9172
    JNZ 0x004c93a4                      ; 004c9177
        ;   XREF to: 004c93a4 (CONDITIONAL_JUMP)  ; LAB_004c93a4
    ADD ESP,0xc                         ; 004c917d
    POP EBP                             ; 004c9180
    POP EDI                             ; 004c9181
    POP ESI                             ; 004c9182
    POP EBX                             ; 004c9183
    RET                                 ; 004c9184
    MOV EDI,0x9a80                      ; 004c9185
        ;   Label: LAB_004c9185
    MOV EBP,0xb100                      ; 004c918a
    MOV ESI,0x9000                      ; 004c918f
    MOV dword ptr [0x00622038],EDI      ; 004c9194 | DAT_00622038
    MOV dword ptr [0x0062203c],EBP      ; 004c919a | DAT_0062203c
    MOV dword ptr [0x00622034],ESI      ; 004c91a0 | DAT_00622034
    JMP 0x004c91fe                      ; 004c91a6
        ;   XREF to: 004c91fe (UNCONDITIONAL_JUMP)  ; LAB_004c91fe
    XOR EDX,EDX                         ; 004c91a8
        ;   Label: LAB_004c91a8
    MOV dword ptr [0x00622038],EDX      ; 004c91aa | DAT_00622038
    MOV dword ptr [0x0062203c],EDX      ; 004c91b0 | DAT_0062203c
    MOV dword ptr [0x00622034],EDX      ; 004c91b6 | DAT_00622034
    JMP 0x004c91fe                      ; 004c91bc
        ;   XREF to: 004c91fe (UNCONDITIONAL_JUMP)  ; LAB_004c91fe
    PUSH 0xc0                           ; 004c91be
        ;   Label: LAB_004c91be
    MOV ESI,0x622034                    ; 004c91c3 | DAT_00622034
    MOV EBP,0x622038                    ; 004c91c8 | DAT_00622038
    PUSH 0x40                           ; 004c91cd
    MOV EDI,0x62203c                    ; 004c91cf | DAT_0062203c
    MOV EBX,dword ptr [EBX + 0x4]       ; 004c91d4
    CALL core_actor.cpp_FUN_0040cfc0    ; 004c91d7
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 004c91dc
    CMP EBX,0x1                         ; 004c91df
    JC 0x004c91eb                       ; 004c91e2
        ;   XREF to: 004c91eb (CONDITIONAL_JUMP)  ; LAB_004c91eb
    JBE 0x004c9185                      ; 004c91e4
        ;   XREF to: 004c9185 (CONDITIONAL_JUMP)  ; LAB_004c9185
    CMP EBX,0x2                         ; 004c91e6
    JZ 0x004c91a8                       ; 004c91e9
        ;   XREF to: 004c91a8 (CONDITIONAL_JUMP)  ; LAB_004c91a8
    MOV dword ptr [ESI],0x2000          ; 004c91eb | DAT_00622034
        ;   Label: LAB_004c91eb
    MOV dword ptr [EBP],0x0             ; 004c91f1 | DAT_00622038
    MOV dword ptr [EDI],0x0             ; 004c91f8 | DAT_0062203c
    MOV EBX,dword ptr [ESP + 0x20]      ; 004c91fe
        ;   Label: LAB_004c91fe
    PUSH 0xc0                           ; 004c9202
    MOV ESI,0x622064                    ; 004c9207 | DAT_00622064
    MOV EBP,0x622068                    ; 004c920c | DAT_00622068
    PUSH 0x40                           ; 004c9211
    MOV EDI,0x62206c                    ; 004c9213 | DAT_0062206c
    MOV EBX,dword ptr [EBX + 0x4]       ; 004c9218
    CALL core_actor.cpp_FUN_0040cfc0    ; 004c921b
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 004c9220
    CMP EBX,0x1                         ; 004c9223
    JNC 0x004c9302                      ; 004c9226
        ;   XREF to: 004c9302 (CONDITIONAL_JUMP)  ; LAB_004c9302
    MOV dword ptr [ESI],0x2000          ; 004c922c | DAT_00622064
        ;   Label: LAB_004c922c
    MOV dword ptr [EBP],0x0             ; 004c9232 | DAT_00622068
    MOV dword ptr [EDI],0x0             ; 004c9239 | DAT_0062206c
    MOV EBX,dword ptr [ESP + 0x20]      ; 004c923f
        ;   Label: LAB_004c923f
    PUSH 0xc0                           ; 004c9243
    MOV EBP,0x622094                    ; 004c9248 | DAT_00622094
    MOV ESI,0x622098                    ; 004c924d | DAT_00622098
    PUSH 0x40                           ; 004c9252
    MOV EDI,0x62209c                    ; 004c9254 | DAT_0062209c
    MOV EBX,dword ptr [EBX + 0x4]       ; 004c9259
    CALL core_actor.cpp_FUN_0040cfc0    ; 004c925c
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 004c9261
    CMP EBX,0x1                         ; 004c9264
    JNC 0x004c934d                      ; 004c9267
        ;   XREF to: 004c934d (CONDITIONAL_JUMP)  ; LAB_004c934d
    MOV dword ptr [EBP],0x2000          ; 004c926d | DAT_00622094
        ;   Label: LAB_004c926d
    MOV dword ptr [ESI],0x0             ; 004c9274 | DAT_00622098
    MOV dword ptr [EDI],0x0             ; 004c927a | DAT_0062209c
    MOV EBX,dword ptr [ESP + 0x20]      ; 004c9280
        ;   Label: LAB_004c9280
    PUSH 0xc0                           ; 004c9284
    MOV EDI,0x6220c4                    ; 004c9289 | DAT_006220c4
    MOV EBP,0x6220c8                    ; 004c928e | DAT_006220c8
    PUSH 0x40                           ; 004c9293
    MOV ESI,0x6220cc                    ; 004c9295 | DAT_006220cc
    MOV EBX,dword ptr [EBX + 0x4]       ; 004c929a
    CALL core_actor.cpp_FUN_0040cfc0    ; 004c929d
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 004c92a2
    CMP EBX,0x1                         ; 004c92a5
    JNC 0x004c9398                      ; 004c92a8
        ;   XREF to: 004c9398 (CONDITIONAL_JUMP)  ; LAB_004c9398
    MOV dword ptr [EDI],0x2000          ; 004c92ae | DAT_006220c4
        ;   Label: LAB_004c92ae
    MOV dword ptr [EBP],0x0             ; 004c92b4 | DAT_006220c8
    MOV dword ptr [ESI],0x0             ; 004c92bb | DAT_006220cc
    JMP 0x004c915e                      ; 004c92c1
        ;   XREF to: 004c915e (UNCONDITIONAL_JUMP)  ; LAB_004c915e
    MOV ESI,0x9a80                      ; 004c92c6
        ;   Label: LAB_004c92c6
    MOV EDI,0xb100                      ; 004c92cb
    MOV EBX,0x9000                      ; 004c92d0
    MOV dword ptr [0x00622068],ESI      ; 004c92d5 | DAT_00622068
    MOV dword ptr [0x0062206c],EDI      ; 004c92db | DAT_0062206c
    MOV dword ptr [0x00622064],EBX      ; 004c92e1 | DAT_00622064
    JMP 0x004c923f                      ; 004c92e7
        ;   XREF to: 004c923f (UNCONDITIONAL_JUMP)  ; LAB_004c923f
    XOR EAX,EAX                         ; 004c92ec
        ;   Label: LAB_004c92ec
    MOV [0x00622068],EAX                ; 004c92ee | DAT_00622068
    MOV [0x0062206c],EAX                ; 004c92f3 | DAT_0062206c
    MOV [0x00622064],EAX                ; 004c92f8 | DAT_00622064
    JMP 0x004c923f                      ; 004c92fd
        ;   XREF to: 004c923f (UNCONDITIONAL_JUMP)  ; LAB_004c923f
    JBE 0x004c92c6                      ; 004c9302
        ;   XREF to: 004c92c6 (CONDITIONAL_JUMP)  ; LAB_004c92c6
        ;   Label: LAB_004c9302
    CMP EBX,0x2                         ; 004c9304
    JZ 0x004c92ec                       ; 004c9307
        ;   XREF to: 004c92ec (CONDITIONAL_JUMP)  ; LAB_004c92ec
    JMP 0x004c922c                      ; 004c9309
        ;   XREF to: 004c922c (UNCONDITIONAL_JUMP)  ; LAB_004c922c
    MOV EBX,0x9a80                      ; 004c930e
        ;   Label: LAB_004c930e
    MOV ESI,0xb100                      ; 004c9313
    MOV ECX,0x9000                      ; 004c9318
    MOV dword ptr [0x00622098],EBX      ; 004c931d | DAT_00622098
    MOV dword ptr [0x0062209c],ESI      ; 004c9323 | DAT_0062209c
    MOV dword ptr [0x00622094],ECX      ; 004c9329 | DAT_00622094
    JMP 0x004c9280                      ; 004c932f
        ;   XREF to: 004c9280 (UNCONDITIONAL_JUMP)  ; LAB_004c9280
    XOR EBP,EBP                         ; 004c9334
        ;   Label: LAB_004c9334
    MOV dword ptr [0x00622098],EBP      ; 004c9336 | DAT_00622098
    MOV dword ptr [0x0062209c],EBP      ; 004c933c | DAT_0062209c
    MOV dword ptr [0x00622094],EBP      ; 004c9342 | DAT_00622094
    JMP 0x004c9280                      ; 004c9348
        ;   XREF to: 004c9280 (UNCONDITIONAL_JUMP)  ; LAB_004c9280
    JBE 0x004c930e                      ; 004c934d
        ;   XREF to: 004c930e (CONDITIONAL_JUMP)  ; LAB_004c930e
        ;   Label: LAB_004c934d
    CMP EBX,0x2                         ; 004c934f
    JZ 0x004c9334                       ; 004c9352
        ;   XREF to: 004c9334 (CONDITIONAL_JUMP)  ; LAB_004c9334
    JMP 0x004c926d                      ; 004c9354
        ;   XREF to: 004c926d (UNCONDITIONAL_JUMP)  ; LAB_004c926d
    MOV ECX,0x9a80                      ; 004c9359
        ;   Label: LAB_004c9359
    MOV EBX,0xb100                      ; 004c935e
    MOV EDX,0x9000                      ; 004c9363
    MOV dword ptr [0x006220c8],ECX      ; 004c9368 | DAT_006220c8
    MOV dword ptr [0x006220cc],EBX      ; 004c936e | DAT_006220cc
    MOV dword ptr [0x006220c4],EDX      ; 004c9374 | DAT_006220c4
    JMP 0x004c915e                      ; 004c937a
        ;   XREF to: 004c915e (UNCONDITIONAL_JUMP)  ; LAB_004c915e
    XOR EDI,EDI                         ; 004c937f
        ;   Label: LAB_004c937f
    MOV dword ptr [0x006220c8],EDI      ; 004c9381 | DAT_006220c8
    MOV dword ptr [0x006220cc],EDI      ; 004c9387 | DAT_006220cc
    MOV dword ptr [0x006220c4],EDI      ; 004c938d | DAT_006220c4
    JMP 0x004c915e                      ; 004c9393
        ;   XREF to: 004c915e (UNCONDITIONAL_JUMP)  ; LAB_004c915e
    JBE 0x004c9359                      ; 004c9398
        ;   XREF to: 004c9359 (CONDITIONAL_JUMP)  ; LAB_004c9359
        ;   Label: LAB_004c9398
    CMP EBX,0x2                         ; 004c939a
    JZ 0x004c937f                       ; 004c939d
        ;   XREF to: 004c937f (CONDITIONAL_JUMP)  ; LAB_004c937f
    JMP 0x004c92ae                      ; 004c939f
        ;   XREF to: 004c92ae (UNCONDITIONAL_JUMP)  ; LAB_004c92ae
    MOV EBX,dword ptr [ESP + 0x20]      ; 004c93a4
        ;   Label: LAB_004c93a4
    MOV dword ptr [EBX],0x1             ; 004c93a8
    ADD ESP,0xc                         ; 004c93ae
    POP EBP                             ; 004c93b1
    POP EDI                             ; 004c93b2
    POP ESI                             ; 004c93b3
    POP EBX                             ; 004c93b4
    RET                                 ; 004c93b5

