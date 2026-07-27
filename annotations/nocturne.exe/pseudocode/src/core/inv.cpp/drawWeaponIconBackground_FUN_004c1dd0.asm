; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_inv_cpp_drawWeaponIconBackground_FUN_004c1dd0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)
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
;   core_inv.cpp_CInventory_renderSelectedItems_FUN_004c2150 at 004c2418
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_005b761c
;   undefined4 DAT_005b7620
;   undefined4 DAT_005bac34
;   undefined4 DAT_00600000
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   core_dcamera.cpp_FUN_004405d0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;   engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c1dd0
        ;   Label: core_inv.cpp_drawWeaponIconBackground_FUN_004c1dd0
    PUSH ESI                            ; 004c1dd1
    PUSH EDI                            ; 004c1dd2
    PUSH EBP                            ; 004c1dd3
    SUB ESP,0x38                        ; 004c1dd4
    MOV EBX,0x10000                     ; 004c1dd7
    MOV EDX,dword ptr [0x005b7620]      ; 004c1ddc | DAT_005b7620
    MOV ESI,EBX                         ; 004c1de2
    CMP EDX,0x1e0                       ; 004c1de4
    JLE 0x004c1e14                      ; 004c1dea
        ;   XREF to: 004c1e14 (CONDITIONAL_JUMP)  ; LAB_004c1e14
    MOV EAX,0x2800000                   ; 004c1dec
    MOV EDX,EAX                         ; 004c1df1
    MOV ECX,dword ptr [0x005b761c]      ; 004c1df3 | DAT_005b761c
    SAR EDX,0x1f                        ; 004c1df9
    IDIV ECX                            ; 004c1dfc
    MOV EBX,EAX                         ; 004c1dfe
    MOV EAX,0x1e00000                   ; 004c1e00
    MOV EDX,EAX                         ; 004c1e05
    MOV ESI,dword ptr [0x005b7620]      ; 004c1e07 | DAT_005b7620
    SAR EDX,0x1f                        ; 004c1e0d
    IDIV ESI                            ; 004c1e10
    MOV ESI,EAX                         ; 004c1e12
    PUSH 0x5bac34                       ; 004c1e14 | DAT_005bac34
        ;   Label: LAB_004c1e14
    MOV EDI,dword ptr [0x005ae704]      ; 004c1e19 | DAT_005ae704
    PUSH EDI                            ; 004c1e1f | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 004c1e20
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0()
    ADD ESP,0x8                         ; 004c1e25
    MOV EBP,dword ptr [ESP + 0x5c]      ; 004c1e28
    PUSH EBP                            ; 004c1e2c
    MOV EAX,[0x005ae704]                ; 004c1e2d | DAT_005ae704
    PUSH EAX                            ; 004c1e32 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 004c1e33
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010()
    ADD ESP,0x8                         ; 004c1e38
    MOV EDX,dword ptr [ESP + 0x4c]      ; 004c1e3b
    IMUL EDX,EBX                        ; 004c1e3f
    MOV EAX,[0x005ae704]                ; 004c1e42 | DAT_005ae704
    MOV ECX,dword ptr [EAX]             ; 004c1e47 | DAT_01b4d738
    MOV dword ptr [ECX + 0x10],EDX      ; 004c1e49
    MOV ECX,dword ptr [ESP + 0x50]      ; 004c1e4c
    IMUL ECX,ESI                        ; 004c1e50
    MOV EBP,dword ptr [ESP + 0x58]      ; 004c1e53
    IMUL ESI,EBP                        ; 004c1e57
    MOV EDI,dword ptr [EAX]             ; 004c1e5a | DAT_01b4d738
    MOV dword ptr [EDI + 0x14],ECX      ; 004c1e5c
    MOV EDI,dword ptr [EAX]             ; 004c1e5f | DAT_01b4d738
    MOV dword ptr [EDI + 0x8],0x1000    ; 004c1e61
    MOV EDI,dword ptr [EAX]             ; 004c1e68 | DAT_01b4d738
    MOV dword ptr [EDI + 0x18],0x0      ; 004c1e6a
    MOV EDI,dword ptr [EAX]             ; 004c1e71 | DAT_01b4d738
    MOV dword ptr [EDI + 0x1c],0xa00000 ; 004c1e73
    IMUL EBX,dword ptr [ESP + 0x54]     ; 004c1e7a
    MOV EDI,dword ptr [EAX]             ; 004c1e7f | DAT_01b4d738
    MOV dword ptr [EDI + 0x40],EBX      ; 004c1e81
    MOV EDI,dword ptr [EAX]             ; 004c1e84 | DAT_01b4d738
    MOV dword ptr [EDI + 0x44],ECX      ; 004c1e86
    MOV ECX,dword ptr [EAX]             ; 004c1e89 | DAT_01b4d738
    MOV dword ptr [ECX + 0x38],0x1000   ; 004c1e8b
    MOV ECX,dword ptr [EAX]             ; 004c1e92 | DAT_01b4d738
    MOV dword ptr [ECX + 0x48],0x600000 ; 004c1e94 | DAT_00600000
    MOV ECX,dword ptr [EAX]             ; 004c1e9b | DAT_01b4d738
    MOV dword ptr [ECX + 0x4c],0xa00000 ; 004c1e9d
    MOV ECX,dword ptr [EAX]             ; 004c1ea4 | DAT_01b4d738
    MOV dword ptr [ECX + 0x70],EBX      ; 004c1ea6
    MOV ECX,dword ptr [EAX]             ; 004c1ea9 | DAT_01b4d738
    MOV dword ptr [ECX + 0x74],ESI      ; 004c1eab
    MOV ECX,dword ptr [EAX]             ; 004c1eae | DAT_01b4d738
    MOV dword ptr [ECX + 0x68],0x1000   ; 004c1eb0
    MOV ECX,dword ptr [EAX]             ; 004c1eb7 | DAT_01b4d738
    MOV dword ptr [ECX + 0x78],0x600000 ; 004c1eb9 | DAT_00600000
    MOV ECX,dword ptr [EAX]             ; 004c1ec0 | DAT_01b4d738
    MOV dword ptr [ECX + 0x7c],0x1000000 ; 004c1ec2
    MOV ECX,dword ptr [EAX]             ; 004c1ec9 | DAT_01b4d738
    MOV dword ptr [ECX + 0xa0],EDX      ; 004c1ecb
    MOV EDX,dword ptr [EAX]             ; 004c1ed1 | DAT_01b4d738
    MOV dword ptr [EDX + 0xa4],ESI      ; 004c1ed3
    MOV EDX,dword ptr [EAX]             ; 004c1ed9 | DAT_01b4d738
    MOV dword ptr [EDX + 0x98],0x1000   ; 004c1edb
    MOV EDX,dword ptr [EAX]             ; 004c1ee5 | DAT_01b4d738
    MOV dword ptr [EDX + 0xa8],0x0      ; 004c1ee7
    MOV EBX,0x3                         ; 004c1ef1
    MOV EDX,dword ptr [EAX]             ; 004c1ef6 | DAT_01b4d738
    PUSH 0xa3                           ; 004c1ef8
    XOR ECX,ECX                         ; 004c1efd
    MOV dword ptr [EDX + 0xac],0x1000000 ; 004c1eff
    MOV EDX,0x4                         ; 004c1f09
    MOV dword ptr [ESP + 0x18],ECX      ; 004c1f0e
    MOV dword ptr [ESP + 0x14],ECX      ; 004c1f12
    MOV dword ptr [ESP + 0x8],EDX       ; 004c1f16
    MOV EDX,0x1                         ; 004c1f1a
    MOV dword ptr [ESP + 0x10],ECX      ; 004c1f1f
    MOV dword ptr [ESP + 0x20],EDX      ; 004c1f23
    LEA EDX,[ESP + 0x4]                 ; 004c1f27
    MOV dword ptr [ESP + 0xc],ECX       ; 004c1f2b
    PUSH EDX                            ; 004c1f2f
    MOV dword ptr [ESP + 0x20],ECX      ; 004c1f30
    MOV ECX,0x2                         ; 004c1f34
    PUSH EAX                            ; 004c1f39 | DAT_01b4d738
    MOV dword ptr [ESP + 0x30],EBX      ; 004c1f3a
    MOV dword ptr [ESP + 0x2c],ECX      ; 004c1f3e
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0 ; 004c1f42
        ;   XREF to: 0045f3c0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0()
    ADD ESP,0xc                         ; 004c1f47
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004c1f4a
    MOV dword ptr [ESP + 0x28],EAX      ; 004c1f4e
    MOV EAX,dword ptr [ESP + 0x50]      ; 004c1f52
    MOV dword ptr [ESP + 0x30],EAX      ; 004c1f56
    PUSH EBP                            ; 004c1f5a
    MOV EDI,dword ptr [ESP + 0x34]      ; 004c1f5b
    PUSH EDI                            ; 004c1f5f
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004c1f60
    PUSH EAX                            ; 004c1f64
    MOV dword ptr [ESP + 0x38],EAX      ; 004c1f65
    MOV EAX,dword ptr [ESP + 0x34]      ; 004c1f69
    PUSH EAX                            ; 004c1f6d
    PUSH 0x1fb8508                      ; 004c1f6e
    MOV dword ptr [ESP + 0x48],EBP      ; 004c1f73
    CALL core_dcamera.cpp_FUN_004405d0  ; 004c1f77
        ;   XREF to: 004405d0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_004405d0()
    ADD ESP,0x14                        ; 004c1f7c
    ADD ESP,0x38                        ; 004c1f7f
    POP EBP                             ; 004c1f82
    POP EDI                             ; 004c1f83
    POP ESI                             ; 004c1f84
    POP EBX                             ; 004c1f85
    RET                                 ; 004c1f86

