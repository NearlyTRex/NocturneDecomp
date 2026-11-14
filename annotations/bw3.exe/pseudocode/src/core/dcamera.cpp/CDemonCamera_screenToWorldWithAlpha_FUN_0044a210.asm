; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_screenToWorldWithAlpha_FUN_0044a210(CDemonCamera *this_ptr,CVector3i *input_ptr,CVector3i *output_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   input_ptr
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0046d860
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044a210
        ;   Label: core_dcamera.cpp_CDemonCamera_screenToWorldWithAlpha_FUN_0044a210
    PUSH EDI                            ; 0044a211
    PUSH EBP                            ; 0044a212
    SUB ESP,0x1c                        ; 0044a213
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0044a216
    MOV ECX,dword ptr [ESP + 0x30]      ; 0044a21a
    MOV dword ptr [ESP + 0x18],ESI      ; 0044a21e
    MOV EAX,dword ptr [ECX + 0x8]       ; 0044a222
    MOV dword ptr [ESP + 0x8],EAX       ; 0044a225
    MOV EAX,dword ptr [ECX]             ; 0044a229
    MOV dword ptr [ESP],EAX             ; 0044a22b
    MOV EDX,dword ptr [0x005f2afc]      ; 0044a22e | DAT_005f2afc
    MOV EAX,dword ptr [ECX + 0x4]       ; 0044a234
    PUSH EDX                            ; 0044a237
    MOV dword ptr [ESP + 0x8],EAX       ; 0044a238
    CALL engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0046d860 ; 0044a23c
        ;   XREF to: 0046d860 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0046d860(CDemonRenderer * this_ptr)
    MOV EBX,EAX                         ; 0044a241
    ADD ESP,0x4                         ; 0044a243
    TEST EAX,EAX                        ; 0044a246
    JNZ 0x0044a300                      ; 0044a248
        ;   XREF to: 0044a300 (CONDITIONAL_JUMP)  ; LAB_0044a300
    MOV ESI,ESP                         ; 0044a24e
    LEA EDI,[EBP + 0x19c]               ; 0044a250
    MOV EAX,dword ptr [ESI]             ; 0044a256
    IMUL dword ptr [EDI]                ; 0044a258
    MOV EBX,EAX                         ; 0044a25a
    MOV ECX,EDX                         ; 0044a25c
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044a25e
    IMUL dword ptr [EDI + 0xc]          ; 0044a261
    ADD EBX,EAX                         ; 0044a264
    ADC ECX,EDX                         ; 0044a266
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044a268
    IMUL dword ptr [EDI + 0x18]         ; 0044a26b
    ADD EAX,EBX                         ; 0044a26e
    ADC EDX,ECX                         ; 0044a270
    SHRD EAX,EDX,0x10                   ; 0044a272
    MOV ECX,dword ptr [EBP + 0x16c]     ; 0044a276
    MOV ESI,ESP                         ; 0044a27c
    ADD ECX,EAX                         ; 0044a27e
    LEA EDI,[EBP + 0x1a0]               ; 0044a280
    MOV dword ptr [ESP + 0xc],ECX       ; 0044a286
    MOV EAX,dword ptr [ESI]             ; 0044a28a
    IMUL dword ptr [EDI]                ; 0044a28c
    MOV EBX,EAX                         ; 0044a28e
    MOV ECX,EDX                         ; 0044a290
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044a292
    IMUL dword ptr [EDI + 0xc]          ; 0044a295
    ADD EBX,EAX                         ; 0044a298
    ADC ECX,EDX                         ; 0044a29a
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044a29c
    IMUL dword ptr [EDI + 0x18]         ; 0044a29f
    ADD EAX,EBX                         ; 0044a2a2
    ADC EDX,ECX                         ; 0044a2a4
    SHRD EAX,EDX,0x10                   ; 0044a2a6
    MOV ECX,dword ptr [EBP + 0x170]     ; 0044a2aa
    MOV ESI,ESP                         ; 0044a2b0
    ADD ECX,EAX                         ; 0044a2b2
    LEA EDI,[EBP + 0x1a4]               ; 0044a2b4
    MOV dword ptr [ESP + 0x10],ECX      ; 0044a2ba
    MOV EAX,dword ptr [ESI]             ; 0044a2be
    IMUL dword ptr [EDI]                ; 0044a2c0
    MOV EBX,EAX                         ; 0044a2c2
    MOV ECX,EDX                         ; 0044a2c4
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044a2c6
    IMUL dword ptr [EDI + 0xc]          ; 0044a2c9
    ADD EBX,EAX                         ; 0044a2cc
    ADC ECX,EDX                         ; 0044a2ce
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044a2d0
    IMUL dword ptr [EDI + 0x18]         ; 0044a2d3
    ADD EAX,EBX                         ; 0044a2d6
    ADC EDX,ECX                         ; 0044a2d8
    SHRD EAX,EDX,0x10                   ; 0044a2da
    MOV ECX,dword ptr [EBP + 0x174]     ; 0044a2de
    ADD ECX,EAX                         ; 0044a2e4
        ;   Label: LAB_0044a2e4
    MOV dword ptr [ESP + 0x14],ECX      ; 0044a2e6
    MOV EDI,dword ptr [ESP + 0x18]      ; 0044a2ea
    LEA ESI,[ESP + 0xc]                 ; 0044a2ee
    MOVSD ES:EDI,ESI                    ; 0044a2f2
    MOVSD ES:EDI,ESI                    ; 0044a2f3
    MOVSD ES:EDI,ESI                    ; 0044a2f4
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044a2f5
    ADD ESP,0x1c                        ; 0044a2f9
    POP EBP                             ; 0044a2fc
    POP EDI                             ; 0044a2fd
    POP EBX                             ; 0044a2fe
    RET                                 ; 0044a2ff
    LEA ECX,[EAX*0x4 + 0x0]             ; 0044a300
        ;   Label: LAB_0044a300
    ADD ECX,EBP                         ; 0044a307
    MOV EDX,dword ptr [ESP]             ; 0044a309
    MOV EAX,dword ptr [ECX + 0x136c]    ; 0044a30c
    IMUL EDX                            ; 0044a312
    SHRD EAX,EDX,0x10                   ; 0044a314
    MOV EDX,dword ptr [ESP + 0x4]       ; 0044a318
    MOV ESI,EAX                         ; 0044a31c
    MOV EAX,dword ptr [ECX + 0x13cc]    ; 0044a31e
    IMUL EDX                            ; 0044a324
    SHRD EAX,EDX,0x10                   ; 0044a326
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044a32a
    ADD ESI,EAX                         ; 0044a32e
    MOV EAX,dword ptr [ECX + 0x142c]    ; 0044a330
    IMUL EDX                            ; 0044a336
    SHRD EAX,EDX,0x10                   ; 0044a338
    ADD ESI,EAX                         ; 0044a33c
    MOV EAX,EBX                         ; 0044a33e
    SHL EAX,0x2                         ; 0044a340
    SUB EAX,EBX                         ; 0044a343
    SHL EAX,0x2                         ; 0044a345
    ADD EBP,EAX                         ; 0044a348
    MOV EAX,dword ptr [EBP + 0x11ec]    ; 0044a34a
    ADD EAX,ESI                         ; 0044a350
    MOV EDX,dword ptr [ESP]             ; 0044a352
    MOV dword ptr [ESP + 0xc],EAX       ; 0044a355
    MOV EAX,dword ptr [ECX + 0x138c]    ; 0044a359
    IMUL EDX                            ; 0044a35f
    SHRD EAX,EDX,0x10                   ; 0044a361
    MOV EDX,dword ptr [ESP + 0x4]       ; 0044a365
    MOV EBX,EAX                         ; 0044a369
    MOV EAX,dword ptr [ECX + 0x13ec]    ; 0044a36b
    IMUL EDX                            ; 0044a371
    SHRD EAX,EDX,0x10                   ; 0044a373
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044a377
    ADD EBX,EAX                         ; 0044a37b
    MOV EAX,dword ptr [ECX + 0x144c]    ; 0044a37d
    IMUL EDX                            ; 0044a383
    SHRD EAX,EDX,0x10                   ; 0044a385
    ADD EAX,EBX                         ; 0044a389
    MOV EBX,dword ptr [EBP + 0x11f0]    ; 0044a38b
    MOV EDX,dword ptr [ESP]             ; 0044a391
    ADD EBX,EAX                         ; 0044a394
    MOV EAX,dword ptr [ECX + 0x13ac]    ; 0044a396
    MOV dword ptr [ESP + 0x10],EBX      ; 0044a39c
    IMUL EDX                            ; 0044a3a0
    SHRD EAX,EDX,0x10                   ; 0044a3a2
    MOV EDX,dword ptr [ESP + 0x4]       ; 0044a3a6
    MOV EBX,EAX                         ; 0044a3aa
    MOV EAX,dword ptr [ECX + 0x140c]    ; 0044a3ac
    IMUL EDX                            ; 0044a3b2
    SHRD EAX,EDX,0x10                   ; 0044a3b4
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044a3b8
    ADD EBX,EAX                         ; 0044a3bc
    MOV EAX,dword ptr [ECX + 0x146c]    ; 0044a3be
    IMUL EDX                            ; 0044a3c4
    SHRD EAX,EDX,0x10                   ; 0044a3c6
    MOV ECX,dword ptr [EBP + 0x11f4]    ; 0044a3ca
    ADD EAX,EBX                         ; 0044a3d0
    JMP 0x0044a2e4                      ; 0044a3d2
        ;   XREF to: 0044a2e4 (UNCONDITIONAL_JUMP)  ; LAB_0044a2e4

