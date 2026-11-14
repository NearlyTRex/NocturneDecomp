; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_drawItemIconBackground_FUN_004dd5b0(int x1,int y1,int x2,int y2,int alpha)
;
; Parameters:
; int              Stack[0x4]:4   x1
; int              Stack[0x8]:4   y1
; int              Stack[0xc]:4   x2
; int              Stack[0x10]:4   y2
; int              Stack[0x14]:4   alpha
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
;   core_inv.cpp_CInventory_renderSelectedItems_FUN_004dd770 at 004dd8a4
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

    PUSH EBX                            ; 004dd5b0
        ;   Label: core_inv.cpp_drawItemIconBackground_FUN_004dd5b0
    PUSH ESI                            ; 004dd5b1
    PUSH EDI                            ; 004dd5b2
    PUSH EBP                            ; 004dd5b3
    SUB ESP,0x38                        ; 004dd5b4
    MOV EBX,0x10000                     ; 004dd5b7
    MOV EDX,dword ptr [0x005fba1c]      ; 004dd5bc | DAT_005fba1c
    MOV ESI,EBX                         ; 004dd5c2
    CMP EDX,0x1e0                       ; 004dd5c4
    JLE 0x004dd5f4                      ; 004dd5ca
        ;   XREF to: 004dd5f4 (CONDITIONAL_JUMP)  ; LAB_004dd5f4
    MOV EAX,0x2800000                   ; 004dd5cc
    MOV EDX,EAX                         ; 004dd5d1
    MOV ECX,dword ptr [0x005fba18]      ; 004dd5d3 | DAT_005fba18
    SAR EDX,0x1f                        ; 004dd5d9
    IDIV ECX                            ; 004dd5dc
    MOV EBX,EAX                         ; 004dd5de
    MOV EAX,0x1e00000                   ; 004dd5e0
    MOV EDX,EAX                         ; 004dd5e5
    MOV ESI,dword ptr [0x005fba1c]      ; 004dd5e7 | DAT_005fba1c
    SAR EDX,0x1f                        ; 004dd5ed
    IDIV ESI                            ; 004dd5f0
    MOV ESI,EAX                         ; 004dd5f2
    PUSH 0x600254                       ; 004dd5f4 | DAT_00600254
        ;   Label: LAB_004dd5f4
    MOV EDI,dword ptr [0x005f2afc]      ; 004dd5f9 | DAT_005f2afc
    PUSH EDI                            ; 004dd5ff | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 004dd600
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004dd605
    MOV EBP,dword ptr [ESP + 0x5c]      ; 004dd608
    PUSH EBP                            ; 004dd60c
    MOV EAX,[0x005f2afc]                ; 004dd60d | DAT_005f2afc
    PUSH EAX                            ; 004dd612 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 004dd613
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004dd618
    MOV EDX,dword ptr [ESP + 0x4c]      ; 004dd61b
    IMUL EDX,EBX                        ; 004dd61f
    MOV EAX,[0x005f2afc]                ; 004dd622 | DAT_005f2afc
    MOV ECX,dword ptr [EAX]             ; 004dd627 | DAT_01bdd7e4
    MOV dword ptr [ECX + 0x10],EDX      ; 004dd629
    MOV ECX,dword ptr [ESP + 0x50]      ; 004dd62c
    IMUL ECX,ESI                        ; 004dd630
    MOV EBP,dword ptr [ESP + 0x58]      ; 004dd633
    IMUL ESI,EBP                        ; 004dd637
    MOV EDI,dword ptr [EAX]             ; 004dd63a | DAT_01bdd7e4
    MOV dword ptr [EDI + 0x14],ECX      ; 004dd63c
    MOV EDI,dword ptr [EAX]             ; 004dd63f | DAT_01bdd7e4
    MOV dword ptr [EDI + 0x8],0x1000    ; 004dd641
    MOV EDI,dword ptr [EAX]             ; 004dd648 | DAT_01bdd7e4
    MOV dword ptr [EDI + 0x18],0x0      ; 004dd64a
    MOV EDI,dword ptr [EAX]             ; 004dd651 | DAT_01bdd7e4
    MOV dword ptr [EDI + 0x1c],0x0      ; 004dd653
    IMUL EBX,dword ptr [ESP + 0x54]     ; 004dd65a
    MOV EDI,dword ptr [EAX]             ; 004dd65f | DAT_01bdd7e4
    MOV dword ptr [EDI + 0x40],EBX      ; 004dd661
    MOV EDI,dword ptr [EAX]             ; 004dd664 | DAT_01bdd7e4
    MOV dword ptr [EDI + 0x44],ECX      ; 004dd666
    MOV ECX,dword ptr [EAX]             ; 004dd669 | DAT_01bdd7e4
    MOV dword ptr [ECX + 0x38],0x1000   ; 004dd66b
    MOV ECX,dword ptr [EAX]             ; 004dd672 | DAT_01bdd7e4
    MOV dword ptr [ECX + 0x48],0xf00000 ; 004dd674
    MOV ECX,dword ptr [EAX]             ; 004dd67b | DAT_01bdd7e4
    MOV dword ptr [ECX + 0x4c],0x0      ; 004dd67d
    MOV ECX,dword ptr [EAX]             ; 004dd684 | DAT_01bdd7e4
    MOV dword ptr [ECX + 0x70],EBX      ; 004dd686
    MOV ECX,dword ptr [EAX]             ; 004dd689 | DAT_01bdd7e4
    MOV dword ptr [ECX + 0x74],ESI      ; 004dd68b
    MOV ECX,dword ptr [EAX]             ; 004dd68e | DAT_01bdd7e4
    MOV dword ptr [ECX + 0x68],0x1000   ; 004dd690
    MOV ECX,dword ptr [EAX]             ; 004dd697 | DAT_01bdd7e4
    MOV dword ptr [ECX + 0x78],0xf00000 ; 004dd699
    MOV ECX,dword ptr [EAX]             ; 004dd6a0 | DAT_01bdd7e4
    MOV dword ptr [ECX + 0x7c],0x600000 ; 004dd6a2 | s_CHeroPlaceholder_005ffff4+0xc
    MOV ECX,dword ptr [EAX]             ; 004dd6a9 | DAT_01bdd7e4
    MOV dword ptr [ECX + 0xa0],EDX      ; 004dd6ab
    MOV EDX,dword ptr [EAX]             ; 004dd6b1 | DAT_01bdd7e4
    MOV dword ptr [EDX + 0xa4],ESI      ; 004dd6b3
    MOV EDX,dword ptr [EAX]             ; 004dd6b9 | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x98],0x1000   ; 004dd6bb
    MOV EDX,dword ptr [EAX]             ; 004dd6c5 | DAT_01bdd7e4
    MOV dword ptr [EDX + 0xa8],0x0      ; 004dd6c7
    MOV EBX,0x3                         ; 004dd6d1
    MOV EDX,dword ptr [EAX]             ; 004dd6d6 | DAT_01bdd7e4
    PUSH 0xa3                           ; 004dd6d8
    XOR ECX,ECX                         ; 004dd6dd
    MOV dword ptr [EDX + 0xac],0x600000 ; 004dd6df | s_CHeroPlaceholder_005ffff4+0xc
    MOV EDX,0x4                         ; 004dd6e9
    MOV dword ptr [ESP + 0x18],ECX      ; 004dd6ee
    MOV dword ptr [ESP + 0x14],ECX      ; 004dd6f2
    MOV dword ptr [ESP + 0x8],EDX       ; 004dd6f6
    MOV EDX,0x1                         ; 004dd6fa
    MOV dword ptr [ESP + 0x10],ECX      ; 004dd6ff
    MOV dword ptr [ESP + 0x20],EDX      ; 004dd703
    LEA EDX,[ESP + 0x4]                 ; 004dd707
    MOV dword ptr [ESP + 0xc],ECX       ; 004dd70b
    PUSH EDX                            ; 004dd70f
    MOV dword ptr [ESP + 0x20],ECX      ; 004dd710
    MOV ECX,0x2                         ; 004dd714
    PUSH EAX                            ; 004dd719 | DAT_01bdd7e4
    MOV dword ptr [ESP + 0x30],EBX      ; 004dd71a
    MOV dword ptr [ESP + 0x2c],ECX      ; 004dd71e
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850 ; 004dd722
        ;   XREF to: 0046b850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, int render_flags)
    ADD ESP,0xc                         ; 004dd727
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004dd72a
    MOV dword ptr [ESP + 0x28],EAX      ; 004dd72e
    MOV EAX,dword ptr [ESP + 0x50]      ; 004dd732
    MOV dword ptr [ESP + 0x30],EAX      ; 004dd736
    PUSH EBP                            ; 004dd73a
    MOV EDI,dword ptr [ESP + 0x34]      ; 004dd73b
    PUSH EDI                            ; 004dd73f
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004dd740
    PUSH EAX                            ; 004dd744
    MOV dword ptr [ESP + 0x38],EAX      ; 004dd745
    MOV EAX,dword ptr [ESP + 0x34]      ; 004dd749
    PUSH EAX                            ; 004dd74d
    PUSH 0x2038f4c                      ; 004dd74e
    MOV dword ptr [ESP + 0x48],EBP      ; 004dd753
    CALL core_dcamera.cpp_CDemonCamera_pushRect_FUN_00449310 ; 004dd757
        ;   XREF to: 00449310 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_pushRect_FUN_00449310(CDemonCamera * this_ptr, int left, int top, int right, ...)
    ADD ESP,0x14                        ; 004dd75c
    ADD ESP,0x38                        ; 004dd75f
    POP EBP                             ; 004dd762
    POP EDI                             ; 004dd763
    POP ESI                             ; 004dd764
    POP EBX                             ; 004dd765
    RET                                 ; 004dd766

