; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gore_cpp_FUN_004ce310(undefined4 *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_gore.cpp_CGore_renderDecals_FUN_004ce630 at 004ce701
;
; Referenced Globals:
;   undefined4 DAT_005e0e18
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005ffeac
;   undefined4 DAT_0060b014
;   undefined4 DAT_0060b02c
;   undefined4 DAT_0060b030
;   undefined4 DAT_0060b034
;   undefined4 DAT_0060b038
;   undefined4 DAT_0060b03c
;   undefined4 DAT_0060b044
;   undefined4 DAT_0060b05c
;   undefined4 DAT_0060b060
;   undefined4 DAT_0060b064
;   undefined4 DAT_0060b068
;   undefined4 DAT_0060b06c
;   ... and 21 more
;
; Called Functions:
;   core_gore.cpp_FUN_004cc970
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
;   engine_special.cpp_FUN_0056356c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ce310
        ;   Label: core_gore.cpp_FUN_004ce310
    PUSH ESI                            ; 004ce311
    PUSH EDI                            ; 004ce312
    PUSH EBP                            ; 004ce313
    SUB ESP,0xc                         ; 004ce314
    MOV EBX,dword ptr [0x01d5ba14]      ; 004ce317 | DAT_01d5ba14
    MOV ESI,dword ptr [EBX*0x4 + 0x1d5ba04] ; 004ce31d
    MOV EBX,dword ptr [ESP + 0x20]      ; 004ce324
    MOV EDX,dword ptr [ESI + 0x2c]      ; 004ce328
    MOV EBX,dword ptr [EBX + 0x8]       ; 004ce32b
    CMP EBX,EDX                         ; 004ce32e
    JZ 0x004ce33a                       ; 004ce330
        ;   XREF to: 004ce33a (CONDITIONAL_JUMP)  ; LAB_004ce33a
    ADD ESP,0xc                         ; 004ce332
        ;   Label: LAB_004ce332
    POP EBP                             ; 004ce335
    POP EDI                             ; 004ce336
    POP ESI                             ; 004ce337
    POP EBX                             ; 004ce338
    RET                                 ; 004ce339
    MOV ECX,0x4                         ; 004ce33a
        ;   Label: LAB_004ce33a
    MOV ESI,0x1                         ; 004ce33f
    MOV EDI,0x2                         ; 004ce344
    MOV EBP,0x3                         ; 004ce349
    MOV EAX,0x80000                     ; 004ce34e
    XOR EBX,EDX                         ; 004ce353
    MOV dword ptr [0x01d22e8c],ECX      ; 004ce355 | DAT_01d22e8c
    MOV dword ptr [0x01d22ea0],EBX      ; 004ce35b | DAT_01d22ea0
    MOV dword ptr [0x01d22ea4],ESI      ; 004ce361 | DAT_01d22ea4
    MOV dword ptr [0x01d22ea8],EDI      ; 004ce367 | DAT_01d22ea8
    MOV dword ptr [0x01d22eac],EBP      ; 004ce36d | DAT_01d22eac
    MOV [0x0060b02c],EAX                ; 004ce373 | DAT_0060b02c
    MOV ECX,0xf80000                    ; 004ce378
    MOV EBX,dword ptr [ESP + 0x20]      ; 004ce37d
    MOV dword ptr [0x0060b05c],ECX      ; 004ce381 | DAT_0060b05c
    MOV dword ptr [0x0060b08c],ECX      ; 004ce387 | DAT_0060b08c
    MOV dword ptr [0x0060b090],ECX      ; 004ce38d | DAT_0060b090
    MOV EDX,dword ptr [EBX + 0x3c]      ; 004ce393
    MOV dword ptr [0x0060b0c0],ECX      ; 004ce396 | DAT_0060b0c0
    PUSH EDX                            ; 004ce39c
    MOV ECX,dword ptr [0x005f2afc]      ; 004ce39d | DAT_005f2afc
    MOV [0x0060b030],EAX                ; 004ce3a3 | DAT_0060b030
    PUSH ECX                            ; 004ce3a8 | DAT_01bdd7e4
    MOV [0x0060b060],EAX                ; 004ce3a9 | DAT_0060b060
    MOV [0x0060b0bc],EAX                ; 004ce3ae | DAT_0060b0bc
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 004ce3b3
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004ce3b8
    XOR EBX,EBX                         ; 004ce3bb
    MOV EAX,[0x005f2afc]                ; 004ce3bd | DAT_005f2afc
    PUSH 0x5ffeac                       ; 004ce3c2 | DAT_005ffeac
    MOV dword ptr [0x01d22e90],EBX      ; 004ce3c7 | DAT_01d22e90
    MOV dword ptr [0x01d22e94],EBX      ; 004ce3cd | DAT_01d22e94
    PUSH EAX                            ; 004ce3d3 | DAT_01bdd7e4
    MOV dword ptr [0x01d22e98],EBX      ; 004ce3d4 | DAT_01d22e98
    MOV dword ptr [0x01d22e9c],EBX      ; 004ce3da | DAT_01d22e9c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 004ce3e0
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004ce3e5
    MOV EBP,dword ptr [ESP + 0x20]      ; 004ce3e8
    ADD EBP,0xc                         ; 004ce3ec
    MOV EDI,0x60b014                    ; 004ce3ef | DAT_0060b014
    MOV ESI,EBP                         ; 004ce3f4
    ADD EBP,0x30                        ; 004ce3f6
    MOV EBX,ESP                         ; 004ce3f9
        ;   Label: LAB_004ce3f9
    MOV EAX,ESI                         ; 004ce3fb
    FLD float ptr [EAX]                 ; 004ce3fd
    FMUL float ptr [0x005e0e18]         ; 004ce3ff | DAT_005e0e18
    FISTP dword ptr [EBX]               ; 004ce405
    FLD float ptr [EAX + 0x4]           ; 004ce407
    FMUL float ptr [0x005e0e18]         ; 004ce40a | DAT_005e0e18
    FISTP dword ptr [EBX + 0x4]         ; 004ce410
    FLD float ptr [EAX + 0x8]           ; 004ce413
    FMUL float ptr [0x005e0e18]         ; 004ce416 | DAT_005e0e18
    FISTP dword ptr [EBX + 0x8]         ; 004ce41c
    MOV EBX,ESP                         ; 004ce41f
    PUSH EBX                            ; 004ce421
    PUSH EDI                            ; 004ce422 | DAT_0060b014 | DAT_0060b044
    ADD ESI,0xc                         ; 004ce423
    CALL engine_special.cpp_FUN_0056356c ; 004ce426
        ;   XREF to: 0056356c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0056356c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004ce42b
    ADD EDI,0x30                        ; 004ce42e
    CMP ESI,EBP                         ; 004ce431
    JNZ 0x004ce3f9                      ; 004ce433
        ;   XREF to: 004ce3f9 (CONDITIONAL_JUMP)  ; LAB_004ce3f9
    MOV EBX,dword ptr [ESP + 0x20]      ; 004ce435
    CMP dword ptr [EBX + 0x40],0x0      ; 004ce439
    JNZ 0x004ce4b1                      ; 004ce43d
        ;   XREF to: 004ce4b1 (CONDITIONAL_JUMP)  ; LAB_004ce4b1
    MOV EAX,0x7ff                       ; 004ce43f
    MOV [0x0060b038],EAX                ; 004ce444 | DAT_0060b038
    MOV [0x0060b03c],EAX                ; 004ce449 | DAT_0060b03c
    MOV [0x0060b064],EAX                ; 004ce44e | DAT_0060b064
    MOV [0x0060b068],EAX                ; 004ce453 | DAT_0060b068
    MOV [0x0060b06c],EAX                ; 004ce458 | DAT_0060b06c
    MOV [0x0060b094],EAX                ; 004ce45d | DAT_0060b094
    MOV [0x0060b098],EAX                ; 004ce462 | DAT_0060b098
    MOV [0x0060b09c],EAX                ; 004ce467 | DAT_0060b09c
    MOV [0x0060b0c4],EAX                ; 004ce46c | DAT_0060b0c4
    MOV [0x0060b0c8],EAX                ; 004ce471 | DAT_0060b0c8
    MOV [0x0060b0cc],EAX                ; 004ce476 | DAT_0060b0cc
    MOV [0x0060b034],EAX                ; 004ce47b | DAT_0060b034
    PUSH 0x1d22e88                      ; 004ce480
        ;   Label: LAB_004ce480
    MOV EDI,dword ptr [0x005f2afc]      ; 004ce485 | DAT_005f2afc
    PUSH EDI                            ; 004ce48b | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730 ; 004ce48c
        ;   XREF to: 0046c730 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004ce491
    CMP dword ptr [ESP + 0x24],0x0      ; 004ce494
    JZ 0x004ce332                       ; 004ce499
        ;   XREF to: 004ce332 (CONDITIONAL_JUMP)  ; LAB_004ce332
    MOV EBX,dword ptr [ESP + 0x20]      ; 004ce49f
    MOV dword ptr [EBX],0x1             ; 004ce4a3
    ADD ESP,0xc                         ; 004ce4a9
    POP EBP                             ; 004ce4ac
    POP EDI                             ; 004ce4ad
    POP ESI                             ; 004ce4ae
    POP EBX                             ; 004ce4af
    RET                                 ; 004ce4b0
    PUSH 0x60b03c                       ; 004ce4b1 | DAT_0060b03c
        ;   Label: LAB_004ce4b1
    PUSH 0x60b038                       ; 004ce4b6 | DAT_0060b038
    PUSH 0x60b034                       ; 004ce4bb | DAT_0060b034
    MOV ECX,dword ptr [EBX + 0x4]       ; 004ce4c0
    PUSH ECX                            ; 004ce4c3
    CALL core_gore.cpp_FUN_004cc970     ; 004ce4c4
        ;   XREF to: 004cc970 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_FUN_004cc970()
    ADD ESP,0x10                        ; 004ce4c9
    PUSH 0x60b06c                       ; 004ce4cc | DAT_0060b06c
    PUSH 0x60b068                       ; 004ce4d1 | DAT_0060b068
    PUSH 0x60b064                       ; 004ce4d6 | DAT_0060b064
    MOV ESI,dword ptr [EBX + 0x4]       ; 004ce4db
    PUSH ESI                            ; 004ce4de
    CALL core_gore.cpp_FUN_004cc970     ; 004ce4df
        ;   XREF to: 004cc970 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_FUN_004cc970()
    ADD ESP,0x10                        ; 004ce4e4
    PUSH 0x60b09c                       ; 004ce4e7 | DAT_0060b09c
    PUSH 0x60b098                       ; 004ce4ec | DAT_0060b098
    PUSH 0x60b094                       ; 004ce4f1 | DAT_0060b094
    MOV EDI,dword ptr [EBX + 0x4]       ; 004ce4f6
    PUSH EDI                            ; 004ce4f9
    CALL core_gore.cpp_FUN_004cc970     ; 004ce4fa
        ;   XREF to: 004cc970 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_FUN_004cc970()
    ADD ESP,0x10                        ; 004ce4ff
    PUSH 0x60b0cc                       ; 004ce502 | DAT_0060b0cc
    PUSH 0x60b0c8                       ; 004ce507 | DAT_0060b0c8
    PUSH 0x60b0c4                       ; 004ce50c | DAT_0060b0c4
    MOV EBP,dword ptr [EBX + 0x4]       ; 004ce511
    PUSH EBP                            ; 004ce514
    CALL core_gore.cpp_FUN_004cc970     ; 004ce515
        ;   XREF to: 004cc970 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_FUN_004cc970()
    ADD ESP,0x10                        ; 004ce51a
    JMP 0x004ce480                      ; 004ce51d
        ;   XREF to: 004ce480 (UNCONDITIONAL_JUMP)  ; LAB_004ce480

