; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_inv_cpp_drawWeaponIconBackground_FUN_004dd320(int param_1,int param_2,int param_3,int param_4,int param_5)
;
; Local Variables:
; undefined        Stack[-0x48]:1  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_inv.cpp_CInventory_renderSelectedItems_FUN_004dd670 at 004dd954
;
; Referenced Globals:
;   undefined4 g_CSimpleCrossVTable._ub.processActionButton
;   undefined4 DAT_0060b280
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_00617da4
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_pushRect_FUN_0043bb10
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;   engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_00469c60
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dd320
        ;   Label: core_inv.cpp_drawWeaponIconBackground_FUN_004dd320
    PUSH ESI                            ; 004dd321
    PUSH EDI                            ; 004dd322
    PUSH EBP                            ; 004dd323
    SUB ESP,0x38                        ; 004dd324
    MOV EBX,0x10000                     ; 004dd327
    MOV EDX,dword ptr [0x006141bc]      ; 004dd32c | DAT_006141bc
    MOV ESI,EBX                         ; 004dd332
    CMP EDX,0x1e0                       ; 004dd334
    JLE 0x004dd364                      ; 004dd33a
        ;   XREF to: 004dd364 (CONDITIONAL_JUMP)  ; LAB_004dd364
    MOV EAX,0x2800000                   ; 004dd33c
    MOV EDX,EAX                         ; 004dd341
    MOV ECX,dword ptr [0x006141b8]      ; 004dd343 | DAT_006141b8
    SAR EDX,0x1f                        ; 004dd349
    IDIV ECX                            ; 004dd34c
    MOV EBX,EAX                         ; 004dd34e
    MOV EAX,0x1e00000                   ; 004dd350
    MOV EDX,EAX                         ; 004dd355
    MOV ESI,dword ptr [0x006141bc]      ; 004dd357 | DAT_006141bc
    SAR EDX,0x1f                        ; 004dd35d
    IDIV ESI                            ; 004dd360
    MOV ESI,EAX                         ; 004dd362
    PUSH 0x617da4                       ; 004dd364 | DAT_00617da4
        ;   Label: LAB_004dd364
    MOV EDI,dword ptr [0x0060b280]      ; 004dd369 | DAT_0060b280
    PUSH EDI                            ; 004dd36f | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 004dd370
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004dd375
    MOV EBP,dword ptr [ESP + 0x5c]      ; 004dd378
    PUSH EBP                            ; 004dd37c
    MOV EAX,[0x0060b280]                ; 004dd37d | DAT_0060b280
    PUSH EAX                            ; 004dd382 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 004dd383
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004dd388
    MOV EDX,dword ptr [ESP + 0x4c]      ; 004dd38b
    IMUL EDX,EBX                        ; 004dd38f
    MOV EAX,[0x0060b280]                ; 004dd392 | DAT_0060b280
    MOV ECX,dword ptr [EAX]             ; 004dd397 | DAT_01ba5c50
    MOV dword ptr [ECX + 0x10],EDX      ; 004dd399
    MOV ECX,dword ptr [ESP + 0x50]      ; 004dd39c
    IMUL ECX,ESI                        ; 004dd3a0
    MOV EBP,dword ptr [ESP + 0x58]      ; 004dd3a3
    IMUL ESI,EBP                        ; 004dd3a7
    MOV EDI,dword ptr [EAX]             ; 004dd3aa | DAT_01ba5c50
    MOV dword ptr [EDI + 0x14],ECX      ; 004dd3ac
    MOV EDI,dword ptr [EAX]             ; 004dd3af | DAT_01ba5c50
    MOV dword ptr [EDI + 0x8],0x1000    ; 004dd3b1
    MOV EDI,dword ptr [EAX]             ; 004dd3b8 | DAT_01ba5c50
    MOV dword ptr [EDI + 0x18],0x0      ; 004dd3ba
    MOV EDI,dword ptr [EAX]             ; 004dd3c1 | DAT_01ba5c50
    MOV dword ptr [EDI + 0x1c],0xa00000 ; 004dd3c3
    IMUL EBX,dword ptr [ESP + 0x54]     ; 004dd3ca
    MOV EDI,dword ptr [EAX]             ; 004dd3cf | DAT_01ba5c50
    MOV dword ptr [EDI + 0x40],EBX      ; 004dd3d1
    MOV EDI,dword ptr [EAX]             ; 004dd3d4 | DAT_01ba5c50
    MOV dword ptr [EDI + 0x44],ECX      ; 004dd3d6
    MOV ECX,dword ptr [EAX]             ; 004dd3d9 | DAT_01ba5c50
    MOV dword ptr [ECX + 0x38],0x1000   ; 004dd3db
    MOV ECX,dword ptr [EAX]             ; 004dd3e2 | DAT_01ba5c50
    MOV dword ptr [ECX + 0x48],0x600000 ; 004dd3e4 | g_CSimpleCrossVTable._ub.processActionButton
    MOV ECX,dword ptr [EAX]             ; 004dd3eb | DAT_01ba5c50
    MOV dword ptr [ECX + 0x4c],0xa00000 ; 004dd3ed
    MOV ECX,dword ptr [EAX]             ; 004dd3f4 | DAT_01ba5c50
    MOV dword ptr [ECX + 0x70],EBX      ; 004dd3f6
    MOV ECX,dword ptr [EAX]             ; 004dd3f9 | DAT_01ba5c50
    MOV dword ptr [ECX + 0x74],ESI      ; 004dd3fb
    MOV ECX,dword ptr [EAX]             ; 004dd3fe | DAT_01ba5c50
    MOV dword ptr [ECX + 0x68],0x1000   ; 004dd400
    MOV ECX,dword ptr [EAX]             ; 004dd407 | DAT_01ba5c50
    MOV dword ptr [ECX + 0x78],0x600000 ; 004dd409 | g_CSimpleCrossVTable._ub.processActionButton
    MOV ECX,dword ptr [EAX]             ; 004dd410 | DAT_01ba5c50
    MOV dword ptr [ECX + 0x7c],0x1000000 ; 004dd412
    MOV ECX,dword ptr [EAX]             ; 004dd419 | DAT_01ba5c50
    MOV dword ptr [ECX + 0xa0],EDX      ; 004dd41b
    MOV EDX,dword ptr [EAX]             ; 004dd421 | DAT_01ba5c50
    MOV dword ptr [EDX + 0xa4],ESI      ; 004dd423
    MOV EDX,dword ptr [EAX]             ; 004dd429 | DAT_01ba5c50
    MOV dword ptr [EDX + 0x98],0x1000   ; 004dd42b
    MOV EDX,dword ptr [EAX]             ; 004dd435 | DAT_01ba5c50
    MOV dword ptr [EDX + 0xa8],0x0      ; 004dd437
    MOV EBX,0x3                         ; 004dd441
    MOV EDX,dword ptr [EAX]             ; 004dd446 | DAT_01ba5c50
    PUSH 0xa3                           ; 004dd448
    XOR ECX,ECX                         ; 004dd44d
    MOV dword ptr [EDX + 0xac],0x1000000 ; 004dd44f
    MOV EDX,0x4                         ; 004dd459
    MOV dword ptr [ESP + 0x18],ECX      ; 004dd45e
    MOV dword ptr [ESP + 0x14],ECX      ; 004dd462
    MOV dword ptr [ESP + 0x8],EDX       ; 004dd466
    MOV EDX,0x1                         ; 004dd46a
    MOV dword ptr [ESP + 0x10],ECX      ; 004dd46f
    MOV dword ptr [ESP + 0x20],EDX      ; 004dd473
    LEA EDX,[ESP + 0x4]                 ; 004dd477
    MOV dword ptr [ESP + 0xc],ECX       ; 004dd47b
    PUSH EDX                            ; 004dd47f
    MOV dword ptr [ESP + 0x20],ECX      ; 004dd480
    MOV ECX,0x2                         ; 004dd484
    PUSH EAX                            ; 004dd489 | DAT_01ba5c50
    MOV dword ptr [ESP + 0x30],EBX      ; 004dd48a
    MOV dword ptr [ESP + 0x2c],ECX      ; 004dd48e
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_00469c60 ; 004dd492
        ;   XREF to: 00469c60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_00469c60(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, int render_flags)
    ADD ESP,0xc                         ; 004dd497
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004dd49a
    MOV dword ptr [ESP + 0x28],EAX      ; 004dd49e
    MOV EAX,dword ptr [ESP + 0x50]      ; 004dd4a2
    MOV dword ptr [ESP + 0x30],EAX      ; 004dd4a6
    PUSH EBP                            ; 004dd4aa
    MOV EDI,dword ptr [ESP + 0x34]      ; 004dd4ab
    PUSH EDI                            ; 004dd4af
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004dd4b0
    PUSH EAX                            ; 004dd4b4
    MOV dword ptr [ESP + 0x38],EAX      ; 004dd4b5
    MOV EAX,dword ptr [ESP + 0x34]      ; 004dd4b9
    PUSH EAX                            ; 004dd4bd
    PUSH 0x1fc7838                      ; 004dd4be
    MOV dword ptr [ESP + 0x48],EBP      ; 004dd4c3
    CALL core_dcamera.cpp_CDemonCamera_pushRect_FUN_0043bb10 ; 004dd4c7
        ;   XREF to: 0043bb10 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_pushRect_FUN_0043bb10(CDemonCamera * this_ptr, int left, int top, int right, ...)
    ADD ESP,0x14                        ; 004dd4cc
    ADD ESP,0x38                        ; 004dd4cf
    POP EBP                             ; 004dd4d2
    POP EDI                             ; 004dd4d3
    POP ESI                             ; 004dd4d4
    POP EBX                             ; 004dd4d5
    RET                                 ; 004dd4d6

