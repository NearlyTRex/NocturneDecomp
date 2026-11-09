; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_drawItemIconBackground_FUN_004fa930(int x1,int y1,int x2,int y2,int alpha)
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
;   core_inv.cpp_FUN_004faaf0 at 004fac24
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

    PUSH EBX                            ; 004fa930
        ;   Label: core_inv.cpp_drawItemIconBackground_FUN_004fa930
    PUSH ESI                            ; 004fa931
    PUSH EDI                            ; 004fa932
    PUSH EBP                            ; 004fa933
    SUB ESP,0x38                        ; 004fa934
    MOV EBX,0x10000                     ; 004fa937
    MOV EDX,dword ptr [0x0061b49c]      ; 004fa93c | DAT_0061b49c
    MOV ESI,EBX                         ; 004fa942
    CMP EDX,0x1e0                       ; 004fa944
    JLE 0x004fa974                      ; 004fa94a
        ;   XREF to: 004fa974 (CONDITIONAL_JUMP)  ; LAB_004fa974
    MOV EAX,0x2800000                   ; 004fa94c
    MOV EDX,EAX                         ; 004fa951
    MOV ECX,dword ptr [0x0061b498]      ; 004fa953 | DAT_0061b498
    SAR EDX,0x1f                        ; 004fa959
    IDIV ECX                            ; 004fa95c
    MOV EBX,EAX                         ; 004fa95e
    MOV EAX,0x1e00000                   ; 004fa960
    MOV EDX,EAX                         ; 004fa965
    MOV ESI,dword ptr [0x0061b49c]      ; 004fa967 | DAT_0061b49c
    SAR EDX,0x1f                        ; 004fa96d
    IDIV ESI                            ; 004fa970
    MOV ESI,EAX                         ; 004fa972
    PUSH 0x61f274                       ; 004fa974 | DAT_0061f274
        ;   Label: LAB_004fa974
    MOV EDI,dword ptr [0x00612560]      ; 004fa979 | DAT_00612560
    PUSH EDI                            ; 004fa97f | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004fa980
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004fa985
    MOV EBP,dword ptr [ESP + 0x5c]      ; 004fa988
    PUSH EBP                            ; 004fa98c
    MOV EAX,[0x00612560]                ; 004fa98d | DAT_00612560
    PUSH EAX                            ; 004fa992 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0 ; 004fa993
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004fa998
    MOV EDX,dword ptr [ESP + 0x4c]      ; 004fa99b
    IMUL EDX,EBX                        ; 004fa99f
    MOV EAX,[0x00612560]                ; 004fa9a2 | DAT_00612560
    MOV ECX,dword ptr [EAX]             ; 004fa9a7 | DAT_01bc120c
    MOV dword ptr [ECX + 0x10],EDX      ; 004fa9a9
    MOV ECX,dword ptr [ESP + 0x50]      ; 004fa9ac
    IMUL ECX,ESI                        ; 004fa9b0
    MOV EBP,dword ptr [ESP + 0x58]      ; 004fa9b3
    IMUL ESI,EBP                        ; 004fa9b7
    MOV EDI,dword ptr [EAX]             ; 004fa9ba | DAT_01bc120c
    MOV dword ptr [EDI + 0x14],ECX      ; 004fa9bc
    MOV EDI,dword ptr [EAX]             ; 004fa9bf | DAT_01bc120c
    MOV dword ptr [EDI + 0x8],0x1000    ; 004fa9c1
    MOV EDI,dword ptr [EAX]             ; 004fa9c8 | DAT_01bc120c
    MOV dword ptr [EDI + 0x18],0x0      ; 004fa9ca
    MOV EDI,dword ptr [EAX]             ; 004fa9d1 | DAT_01bc120c
    MOV dword ptr [EDI + 0x1c],0x0      ; 004fa9d3
    IMUL EBX,dword ptr [ESP + 0x54]     ; 004fa9da
    MOV EDI,dword ptr [EAX]             ; 004fa9df | DAT_01bc120c
    MOV dword ptr [EDI + 0x40],EBX      ; 004fa9e1
    MOV EDI,dword ptr [EAX]             ; 004fa9e4 | DAT_01bc120c
    MOV dword ptr [EDI + 0x44],ECX      ; 004fa9e6
    MOV ECX,dword ptr [EAX]             ; 004fa9e9 | DAT_01bc120c
    MOV dword ptr [ECX + 0x38],0x1000   ; 004fa9eb
    MOV ECX,dword ptr [EAX]             ; 004fa9f2 | DAT_01bc120c
    MOV dword ptr [ECX + 0x48],0xf00000 ; 004fa9f4
    MOV ECX,dword ptr [EAX]             ; 004fa9fb | DAT_01bc120c
    MOV dword ptr [ECX + 0x4c],0x0      ; 004fa9fd
    MOV ECX,dword ptr [EAX]             ; 004faa04 | DAT_01bc120c
    MOV dword ptr [ECX + 0x70],EBX      ; 004faa06
    MOV ECX,dword ptr [EAX]             ; 004faa09 | DAT_01bc120c
    MOV dword ptr [ECX + 0x74],ESI      ; 004faa0b
    MOV ECX,dword ptr [EAX]             ; 004faa0e | DAT_01bc120c
    MOV dword ptr [ECX + 0x68],0x1000   ; 004faa10
    MOV ECX,dword ptr [EAX]             ; 004faa17 | DAT_01bc120c
    MOV dword ptr [ECX + 0x78],0xf00000 ; 004faa19
    MOV ECX,dword ptr [EAX]             ; 004faa20 | DAT_01bc120c
    MOV dword ptr [ECX + 0x7c],0x600000 ; 004faa22 | DAT_00600000
    MOV ECX,dword ptr [EAX]             ; 004faa29 | DAT_01bc120c
    MOV dword ptr [ECX + 0xa0],EDX      ; 004faa2b
    MOV EDX,dword ptr [EAX]             ; 004faa31 | DAT_01bc120c
    MOV dword ptr [EDX + 0xa4],ESI      ; 004faa33
    MOV EDX,dword ptr [EAX]             ; 004faa39 | DAT_01bc120c
    MOV dword ptr [EDX + 0x98],0x1000   ; 004faa3b
    MOV EDX,dword ptr [EAX]             ; 004faa45 | DAT_01bc120c
    MOV dword ptr [EDX + 0xa8],0x0      ; 004faa47
    MOV EBX,0x3                         ; 004faa51
    MOV EDX,dword ptr [EAX]             ; 004faa56 | DAT_01bc120c
    PUSH 0xa3                           ; 004faa58
    XOR ECX,ECX                         ; 004faa5d
    MOV dword ptr [EDX + 0xac],0x600000 ; 004faa5f | DAT_00600000
    MOV EDX,0x4                         ; 004faa69
    MOV dword ptr [ESP + 0x18],ECX      ; 004faa6e
    MOV dword ptr [ESP + 0x14],ECX      ; 004faa72
    MOV dword ptr [ESP + 0x8],EDX       ; 004faa76
    MOV EDX,0x1                         ; 004faa7a
    MOV dword ptr [ESP + 0x10],ECX      ; 004faa7f
    MOV dword ptr [ESP + 0x20],EDX      ; 004faa83
    LEA EDX,[ESP + 0x4]                 ; 004faa87
    MOV dword ptr [ESP + 0xc],ECX       ; 004faa8b
    PUSH EDX                            ; 004faa8f
    MOV dword ptr [ESP + 0x20],ECX      ; 004faa90
    MOV ECX,0x2                         ; 004faa94
    PUSH EAX                            ; 004faa99 | DAT_01bc120c
    MOV dword ptr [ESP + 0x30],EBX      ; 004faa9a
    MOV dword ptr [ESP + 0x2c],ECX      ; 004faa9e
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_00482170 ; 004faaa2
        ;   XREF to: 00482170 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_00482170(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, int render_flags)
    ADD ESP,0xc                         ; 004faaa7
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004faaaa
    MOV dword ptr [ESP + 0x28],EAX      ; 004faaae
    MOV EAX,dword ptr [ESP + 0x50]      ; 004faab2
    MOV dword ptr [ESP + 0x30],EAX      ; 004faab6
    PUSH EBP                            ; 004faaba
    MOV EDI,dword ptr [ESP + 0x34]      ; 004faabb
    PUSH EDI                            ; 004faabf
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004faac0
    PUSH EAX                            ; 004faac4
    MOV dword ptr [ESP + 0x38],EAX      ; 004faac5
    MOV EAX,dword ptr [ESP + 0x34]      ; 004faac9
    PUSH EAX                            ; 004faacd
    PUSH 0x1fe37ec                      ; 004faace
    MOV dword ptr [ESP + 0x48],EBP      ; 004faad3
    CALL core_dcamera.cpp_CDemonCamera_pushRect_FUN_0044d1d0 ; 004faad7
        ;   XREF to: 0044d1d0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_pushRect_FUN_0044d1d0(CDemonCamera * this_ptr, int left, int top, int right, ...)
    ADD ESP,0x14                        ; 004faadc
    ADD ESP,0x38                        ; 004faadf
    POP EBP                             ; 004faae2
    POP EDI                             ; 004faae3
    POP ESI                             ; 004faae4
    POP EBX                             ; 004faae5
    RET                                 ; 004faae6

