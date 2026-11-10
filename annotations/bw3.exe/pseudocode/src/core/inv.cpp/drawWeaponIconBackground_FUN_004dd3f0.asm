; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_inv_cpp_drawWeaponIconBackground_FUN_004dd3f0(int param_1,int param_2,int param_3,int param_4,int param_5)
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
;   core_inv.cpp_CInventory_renderSelectedItems_FUN_004dd770 at 004dda38
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 s_CHeroPlaceholder_005ffff4+0xc
;   undefined4 DAT_00600254
;   undefined4 DAT_01bdd7e4
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_pushRect_FUN_00449310
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;   engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dd3f0
        ;   Label: core_inv.cpp_drawWeaponIconBackground_FUN_004dd3f0
    PUSH ESI                            ; 004dd3f1
    PUSH EDI                            ; 004dd3f2
    PUSH EBP                            ; 004dd3f3
    SUB ESP,0x38                        ; 004dd3f4
    MOV EBX,0x10000                     ; 004dd3f7
    MOV EDX,dword ptr [0x005fba1c]      ; 004dd3fc | DAT_005fba1c
    MOV ESI,EBX                         ; 004dd402
    CMP EDX,0x1e0                       ; 004dd404
    JLE 0x004dd434                      ; 004dd40a
        ;   XREF to: 004dd434 (CONDITIONAL_JUMP)  ; LAB_004dd434
    MOV EAX,0x2800000                   ; 004dd40c
    MOV EDX,EAX                         ; 004dd411
    MOV ECX,dword ptr [0x005fba18]      ; 004dd413 | DAT_005fba18
    SAR EDX,0x1f                        ; 004dd419
    IDIV ECX                            ; 004dd41c
    MOV EBX,EAX                         ; 004dd41e
    MOV EAX,0x1e00000                   ; 004dd420
    MOV EDX,EAX                         ; 004dd425
    MOV ESI,dword ptr [0x005fba1c]      ; 004dd427 | DAT_005fba1c
    SAR EDX,0x1f                        ; 004dd42d
    IDIV ESI                            ; 004dd430
    MOV ESI,EAX                         ; 004dd432
    PUSH 0x600254                       ; 004dd434 | DAT_00600254
        ;   Label: LAB_004dd434
    MOV EDI,dword ptr [0x005f2afc]      ; 004dd439 | DAT_005f2afc
    PUSH EDI                            ; 004dd43f | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 004dd440
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004dd445
    MOV EBP,dword ptr [ESP + 0x5c]      ; 004dd448
    PUSH EBP                            ; 004dd44c
    MOV EAX,[0x005f2afc]                ; 004dd44d | DAT_005f2afc
    PUSH EAX                            ; 004dd452 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 004dd453
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004dd458
    MOV EDX,dword ptr [ESP + 0x4c]      ; 004dd45b
    IMUL EDX,EBX                        ; 004dd45f
    MOV EAX,[0x005f2afc]                ; 004dd462 | DAT_005f2afc
    MOV ECX,dword ptr [EAX]             ; 004dd467 | DAT_01bdd7e4
    MOV dword ptr [ECX + 0x10],EDX      ; 004dd469
    MOV ECX,dword ptr [ESP + 0x50]      ; 004dd46c
    IMUL ECX,ESI                        ; 004dd470
    MOV EBP,dword ptr [ESP + 0x58]      ; 004dd473
    IMUL ESI,EBP                        ; 004dd477
    MOV EDI,dword ptr [EAX]             ; 004dd47a | DAT_01bdd7e4
    MOV dword ptr [EDI + 0x14],ECX      ; 004dd47c
    MOV EDI,dword ptr [EAX]             ; 004dd47f | DAT_01bdd7e4
    MOV dword ptr [EDI + 0x8],0x1000    ; 004dd481
    MOV EDI,dword ptr [EAX]             ; 004dd488 | DAT_01bdd7e4
    MOV dword ptr [EDI + 0x18],0x0      ; 004dd48a
    MOV EDI,dword ptr [EAX]             ; 004dd491 | DAT_01bdd7e4
    MOV dword ptr [EDI + 0x1c],0xa00000 ; 004dd493
    IMUL EBX,dword ptr [ESP + 0x54]     ; 004dd49a
    MOV EDI,dword ptr [EAX]             ; 004dd49f | DAT_01bdd7e4
    MOV dword ptr [EDI + 0x40],EBX      ; 004dd4a1
    MOV EDI,dword ptr [EAX]             ; 004dd4a4 | DAT_01bdd7e4
    MOV dword ptr [EDI + 0x44],ECX      ; 004dd4a6
    MOV ECX,dword ptr [EAX]             ; 004dd4a9 | DAT_01bdd7e4
    MOV dword ptr [ECX + 0x38],0x1000   ; 004dd4ab
    MOV ECX,dword ptr [EAX]             ; 004dd4b2 | DAT_01bdd7e4
    MOV dword ptr [ECX + 0x48],0x600000 ; 004dd4b4 | s_CHeroPlaceholder_005ffff4+0xc
    MOV ECX,dword ptr [EAX]             ; 004dd4bb | DAT_01bdd7e4
    MOV dword ptr [ECX + 0x4c],0xa00000 ; 004dd4bd
    MOV ECX,dword ptr [EAX]             ; 004dd4c4 | DAT_01bdd7e4
    MOV dword ptr [ECX + 0x70],EBX      ; 004dd4c6
    MOV ECX,dword ptr [EAX]             ; 004dd4c9 | DAT_01bdd7e4
    MOV dword ptr [ECX + 0x74],ESI      ; 004dd4cb
    MOV ECX,dword ptr [EAX]             ; 004dd4ce | DAT_01bdd7e4
    MOV dword ptr [ECX + 0x68],0x1000   ; 004dd4d0
    MOV ECX,dword ptr [EAX]             ; 004dd4d7 | DAT_01bdd7e4
    MOV dword ptr [ECX + 0x78],0x600000 ; 004dd4d9 | s_CHeroPlaceholder_005ffff4+0xc
    MOV ECX,dword ptr [EAX]             ; 004dd4e0 | DAT_01bdd7e4
    MOV dword ptr [ECX + 0x7c],0x1000000 ; 004dd4e2
    MOV ECX,dword ptr [EAX]             ; 004dd4e9 | DAT_01bdd7e4
    MOV dword ptr [ECX + 0xa0],EDX      ; 004dd4eb
    MOV EDX,dword ptr [EAX]             ; 004dd4f1 | DAT_01bdd7e4
    MOV dword ptr [EDX + 0xa4],ESI      ; 004dd4f3
    MOV EDX,dword ptr [EAX]             ; 004dd4f9 | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x98],0x1000   ; 004dd4fb
    MOV EDX,dword ptr [EAX]             ; 004dd505 | DAT_01bdd7e4
    MOV dword ptr [EDX + 0xa8],0x0      ; 004dd507
    MOV EBX,0x3                         ; 004dd511
    MOV EDX,dword ptr [EAX]             ; 004dd516 | DAT_01bdd7e4
    PUSH 0xa3                           ; 004dd518
    XOR ECX,ECX                         ; 004dd51d
    MOV dword ptr [EDX + 0xac],0x1000000 ; 004dd51f
    MOV EDX,0x4                         ; 004dd529
    MOV dword ptr [ESP + 0x18],ECX      ; 004dd52e
    MOV dword ptr [ESP + 0x14],ECX      ; 004dd532
    MOV dword ptr [ESP + 0x8],EDX       ; 004dd536
    MOV EDX,0x1                         ; 004dd53a
    MOV dword ptr [ESP + 0x10],ECX      ; 004dd53f
    MOV dword ptr [ESP + 0x20],EDX      ; 004dd543
    LEA EDX,[ESP + 0x4]                 ; 004dd547
    MOV dword ptr [ESP + 0xc],ECX       ; 004dd54b
    PUSH EDX                            ; 004dd54f
    MOV dword ptr [ESP + 0x20],ECX      ; 004dd550
    MOV ECX,0x2                         ; 004dd554
    PUSH EAX                            ; 004dd559 | DAT_01bdd7e4
    MOV dword ptr [ESP + 0x30],EBX      ; 004dd55a
    MOV dword ptr [ESP + 0x2c],ECX      ; 004dd55e
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850 ; 004dd562
        ;   XREF to: 0046b850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, int render_flags)
    ADD ESP,0xc                         ; 004dd567
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004dd56a
    MOV dword ptr [ESP + 0x28],EAX      ; 004dd56e
    MOV EAX,dword ptr [ESP + 0x50]      ; 004dd572
    MOV dword ptr [ESP + 0x30],EAX      ; 004dd576
    PUSH EBP                            ; 004dd57a
    MOV EDI,dword ptr [ESP + 0x34]      ; 004dd57b
    PUSH EDI                            ; 004dd57f
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004dd580
    PUSH EAX                            ; 004dd584
    MOV dword ptr [ESP + 0x38],EAX      ; 004dd585
    MOV EAX,dword ptr [ESP + 0x34]      ; 004dd589
    PUSH EAX                            ; 004dd58d
    PUSH 0x2038f4c                      ; 004dd58e
    MOV dword ptr [ESP + 0x48],EBP      ; 004dd593
    CALL core_dcamera.cpp_CDemonCamera_pushRect_FUN_00449310 ; 004dd597
        ;   XREF to: 00449310 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_pushRect_FUN_00449310(CDemonCamera * this_ptr, int left, int top, int right, ...)
    ADD ESP,0x14                        ; 004dd59c
    ADD ESP,0x38                        ; 004dd59f
    POP EBP                             ; 004dd5a2
    POP EDI                             ; 004dd5a3
    POP ESI                             ; 004dd5a4
    POP EBX                             ; 004dd5a5
    RET                                 ; 004dd5a6

