; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_inv_cpp_drawWeaponIconBackground_FUN_004fa770(int param_1,int param_2,int param_3,int param_4,int param_5)
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
;   core_inv.cpp_CInventory_renderSelectedItems_FUN_004faaf0 at 004fadb8
;
; Referenced Globals:
;   undefined4 DAT_00600000
;   undefined4 DAT_00612560
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_0061f274
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_pushRect_FUN_0044d1d0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;   engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_00482170
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fa770
        ;   Label: core_inv.cpp_drawWeaponIconBackground_FUN_004fa770
    PUSH ESI                            ; 004fa771
    PUSH EDI                            ; 004fa772
    PUSH EBP                            ; 004fa773
    SUB ESP,0x38                        ; 004fa774
    MOV EBX,0x10000                     ; 004fa777
    MOV EDX,dword ptr [0x0061b49c]      ; 004fa77c | DAT_0061b49c
    MOV ESI,EBX                         ; 004fa782
    CMP EDX,0x1e0                       ; 004fa784
    JLE 0x004fa7b4                      ; 004fa78a
        ;   XREF to: 004fa7b4 (CONDITIONAL_JUMP)  ; LAB_004fa7b4
    MOV EAX,0x2800000                   ; 004fa78c
    MOV EDX,EAX                         ; 004fa791
    MOV ECX,dword ptr [0x0061b498]      ; 004fa793 | DAT_0061b498
    SAR EDX,0x1f                        ; 004fa799
    IDIV ECX                            ; 004fa79c
    MOV EBX,EAX                         ; 004fa79e
    MOV EAX,0x1e00000                   ; 004fa7a0
    MOV EDX,EAX                         ; 004fa7a5
    MOV ESI,dword ptr [0x0061b49c]      ; 004fa7a7 | DAT_0061b49c
    SAR EDX,0x1f                        ; 004fa7ad
    IDIV ESI                            ; 004fa7b0
    MOV ESI,EAX                         ; 004fa7b2
    PUSH 0x61f274                       ; 004fa7b4 | DAT_0061f274
        ;   Label: LAB_004fa7b4
    MOV EDI,dword ptr [0x00612560]      ; 004fa7b9 | DAT_00612560
    PUSH EDI                            ; 004fa7bf | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004fa7c0
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004fa7c5
    MOV EBP,dword ptr [ESP + 0x5c]      ; 004fa7c8
    PUSH EBP                            ; 004fa7cc
    MOV EAX,[0x00612560]                ; 004fa7cd | DAT_00612560
    PUSH EAX                            ; 004fa7d2 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0 ; 004fa7d3
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004fa7d8
    MOV EDX,dword ptr [ESP + 0x4c]      ; 004fa7db
    IMUL EDX,EBX                        ; 004fa7df
    MOV EAX,[0x00612560]                ; 004fa7e2 | DAT_00612560
    MOV ECX,dword ptr [EAX]             ; 004fa7e7 | DAT_01bc120c
    MOV dword ptr [ECX + 0x10],EDX      ; 004fa7e9
    MOV ECX,dword ptr [ESP + 0x50]      ; 004fa7ec
    IMUL ECX,ESI                        ; 004fa7f0
    MOV EBP,dword ptr [ESP + 0x58]      ; 004fa7f3
    IMUL ESI,EBP                        ; 004fa7f7
    MOV EDI,dword ptr [EAX]             ; 004fa7fa | DAT_01bc120c
    MOV dword ptr [EDI + 0x14],ECX      ; 004fa7fc
    MOV EDI,dword ptr [EAX]             ; 004fa7ff | DAT_01bc120c
    MOV dword ptr [EDI + 0x8],0x1000    ; 004fa801
    MOV EDI,dword ptr [EAX]             ; 004fa808 | DAT_01bc120c
    MOV dword ptr [EDI + 0x18],0x0      ; 004fa80a
    MOV EDI,dword ptr [EAX]             ; 004fa811 | DAT_01bc120c
    MOV dword ptr [EDI + 0x1c],0xa00000 ; 004fa813
    IMUL EBX,dword ptr [ESP + 0x54]     ; 004fa81a
    MOV EDI,dword ptr [EAX]             ; 004fa81f | DAT_01bc120c
    MOV dword ptr [EDI + 0x40],EBX      ; 004fa821
    MOV EDI,dword ptr [EAX]             ; 004fa824 | DAT_01bc120c
    MOV dword ptr [EDI + 0x44],ECX      ; 004fa826
    MOV ECX,dword ptr [EAX]             ; 004fa829 | DAT_01bc120c
    MOV dword ptr [ECX + 0x38],0x1000   ; 004fa82b
    MOV ECX,dword ptr [EAX]             ; 004fa832 | DAT_01bc120c
    MOV dword ptr [ECX + 0x48],0x600000 ; 004fa834 | DAT_00600000
    MOV ECX,dword ptr [EAX]             ; 004fa83b | DAT_01bc120c
    MOV dword ptr [ECX + 0x4c],0xa00000 ; 004fa83d
    MOV ECX,dword ptr [EAX]             ; 004fa844 | DAT_01bc120c
    MOV dword ptr [ECX + 0x70],EBX      ; 004fa846
    MOV ECX,dword ptr [EAX]             ; 004fa849 | DAT_01bc120c
    MOV dword ptr [ECX + 0x74],ESI      ; 004fa84b
    MOV ECX,dword ptr [EAX]             ; 004fa84e | DAT_01bc120c
    MOV dword ptr [ECX + 0x68],0x1000   ; 004fa850
    MOV ECX,dword ptr [EAX]             ; 004fa857 | DAT_01bc120c
    MOV dword ptr [ECX + 0x78],0x600000 ; 004fa859 | DAT_00600000
    MOV ECX,dword ptr [EAX]             ; 004fa860 | DAT_01bc120c
    MOV dword ptr [ECX + 0x7c],0x1000000 ; 004fa862
    MOV ECX,dword ptr [EAX]             ; 004fa869 | DAT_01bc120c
    MOV dword ptr [ECX + 0xa0],EDX      ; 004fa86b
    MOV EDX,dword ptr [EAX]             ; 004fa871 | DAT_01bc120c
    MOV dword ptr [EDX + 0xa4],ESI      ; 004fa873
    MOV EDX,dword ptr [EAX]             ; 004fa879 | DAT_01bc120c
    MOV dword ptr [EDX + 0x98],0x1000   ; 004fa87b
    MOV EDX,dword ptr [EAX]             ; 004fa885 | DAT_01bc120c
    MOV dword ptr [EDX + 0xa8],0x0      ; 004fa887
    MOV EBX,0x3                         ; 004fa891
    MOV EDX,dword ptr [EAX]             ; 004fa896 | DAT_01bc120c
    PUSH 0xa3                           ; 004fa898
    XOR ECX,ECX                         ; 004fa89d
    MOV dword ptr [EDX + 0xac],0x1000000 ; 004fa89f
    MOV EDX,0x4                         ; 004fa8a9
    MOV dword ptr [ESP + 0x18],ECX      ; 004fa8ae
    MOV dword ptr [ESP + 0x14],ECX      ; 004fa8b2
    MOV dword ptr [ESP + 0x8],EDX       ; 004fa8b6
    MOV EDX,0x1                         ; 004fa8ba
    MOV dword ptr [ESP + 0x10],ECX      ; 004fa8bf
    MOV dword ptr [ESP + 0x20],EDX      ; 004fa8c3
    LEA EDX,[ESP + 0x4]                 ; 004fa8c7
    MOV dword ptr [ESP + 0xc],ECX       ; 004fa8cb
    PUSH EDX                            ; 004fa8cf
    MOV dword ptr [ESP + 0x20],ECX      ; 004fa8d0
    MOV ECX,0x2                         ; 004fa8d4
    PUSH EAX                            ; 004fa8d9 | DAT_01bc120c
    MOV dword ptr [ESP + 0x30],EBX      ; 004fa8da
    MOV dword ptr [ESP + 0x2c],ECX      ; 004fa8de
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_00482170 ; 004fa8e2
        ;   XREF to: 00482170 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_00482170(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, int render_flags)
    ADD ESP,0xc                         ; 004fa8e7
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004fa8ea
    MOV dword ptr [ESP + 0x28],EAX      ; 004fa8ee
    MOV EAX,dword ptr [ESP + 0x50]      ; 004fa8f2
    MOV dword ptr [ESP + 0x30],EAX      ; 004fa8f6
    PUSH EBP                            ; 004fa8fa
    MOV EDI,dword ptr [ESP + 0x34]      ; 004fa8fb
    PUSH EDI                            ; 004fa8ff
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004fa900
    PUSH EAX                            ; 004fa904
    MOV dword ptr [ESP + 0x38],EAX      ; 004fa905
    MOV EAX,dword ptr [ESP + 0x34]      ; 004fa909
    PUSH EAX                            ; 004fa90d
    PUSH 0x1fe37ec                      ; 004fa90e
    MOV dword ptr [ESP + 0x48],EBP      ; 004fa913
    CALL core_dcamera.cpp_CDemonCamera_pushRect_FUN_0044d1d0 ; 004fa917
        ;   XREF to: 0044d1d0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_pushRect_FUN_0044d1d0(CDemonCamera * this_ptr, int left, int top, int right, ...)
    ADD ESP,0x14                        ; 004fa91c
    ADD ESP,0x38                        ; 004fa91f
    POP EBP                             ; 004fa922
    POP EDI                             ; 004fa923
    POP ESI                             ; 004fa924
    POP EBX                             ; 004fa925
    RET                                 ; 004fa926

