; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_drawItemIconBackground_FUN_004c1f90(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)
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
;   core_inv.cpp_CInventory_renderSelectedItems_FUN_004c2150 at 004c2284
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
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;   engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
;   FUN_004405d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c1f90
        ;   Label: core_inv.cpp_drawItemIconBackground_FUN_004c1f90
    PUSH ESI                            ; 004c1f91
    PUSH EDI                            ; 004c1f92
    PUSH EBP                            ; 004c1f93
    SUB ESP,0x38                        ; 004c1f94
    MOV EBX,0x10000                     ; 004c1f97
    MOV EDX,dword ptr [0x005b7620]      ; 004c1f9c | DAT_005b7620
    MOV ESI,EBX                         ; 004c1fa2
    CMP EDX,0x1e0                       ; 004c1fa4
    JLE 0x004c1fd4                      ; 004c1faa
        ;   XREF to: 004c1fd4 (CONDITIONAL_JUMP)  ; LAB_004c1fd4
    MOV EAX,0x2800000                   ; 004c1fac
    MOV EDX,EAX                         ; 004c1fb1
    MOV ECX,dword ptr [0x005b761c]      ; 004c1fb3 | DAT_005b761c
    SAR EDX,0x1f                        ; 004c1fb9
    IDIV ECX                            ; 004c1fbc
    MOV EBX,EAX                         ; 004c1fbe
    MOV EAX,0x1e00000                   ; 004c1fc0
    MOV EDX,EAX                         ; 004c1fc5
    MOV ESI,dword ptr [0x005b7620]      ; 004c1fc7 | DAT_005b7620
    SAR EDX,0x1f                        ; 004c1fcd
    IDIV ESI                            ; 004c1fd0
    MOV ESI,EAX                         ; 004c1fd2
    PUSH 0x5bac34                       ; 004c1fd4 | DAT_005bac34
        ;   Label: LAB_004c1fd4
    MOV EDI,dword ptr [0x005ae704]      ; 004c1fd9 | DAT_005ae704
    PUSH EDI                            ; 004c1fdf | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 004c1fe0
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0()
    ADD ESP,0x8                         ; 004c1fe5
    MOV EBP,dword ptr [ESP + 0x5c]      ; 004c1fe8
    PUSH EBP                            ; 004c1fec
    MOV EAX,[0x005ae704]                ; 004c1fed | DAT_005ae704
    PUSH EAX                            ; 004c1ff2 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 004c1ff3
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010()
    ADD ESP,0x8                         ; 004c1ff8
    MOV EDX,dword ptr [ESP + 0x4c]      ; 004c1ffb
    IMUL EDX,EBX                        ; 004c1fff
    MOV EAX,[0x005ae704]                ; 004c2002 | DAT_005ae704
    MOV ECX,dword ptr [EAX]             ; 004c2007 | DAT_01b4d738
    MOV dword ptr [ECX + 0x10],EDX      ; 004c2009
    MOV ECX,dword ptr [ESP + 0x50]      ; 004c200c
    IMUL ECX,ESI                        ; 004c2010
    MOV EBP,dword ptr [ESP + 0x58]      ; 004c2013
    IMUL ESI,EBP                        ; 004c2017
    MOV EDI,dword ptr [EAX]             ; 004c201a | DAT_01b4d738
    MOV dword ptr [EDI + 0x14],ECX      ; 004c201c
    MOV EDI,dword ptr [EAX]             ; 004c201f | DAT_01b4d738
    MOV dword ptr [EDI + 0x8],0x1000    ; 004c2021
    MOV EDI,dword ptr [EAX]             ; 004c2028 | DAT_01b4d738
    MOV dword ptr [EDI + 0x18],0x0      ; 004c202a
    MOV EDI,dword ptr [EAX]             ; 004c2031 | DAT_01b4d738
    MOV dword ptr [EDI + 0x1c],0x0      ; 004c2033
    IMUL EBX,dword ptr [ESP + 0x54]     ; 004c203a
    MOV EDI,dword ptr [EAX]             ; 004c203f | DAT_01b4d738
    MOV dword ptr [EDI + 0x40],EBX      ; 004c2041
    MOV EDI,dword ptr [EAX]             ; 004c2044 | DAT_01b4d738
    MOV dword ptr [EDI + 0x44],ECX      ; 004c2046
    MOV ECX,dword ptr [EAX]             ; 004c2049 | DAT_01b4d738
    MOV dword ptr [ECX + 0x38],0x1000   ; 004c204b
    MOV ECX,dword ptr [EAX]             ; 004c2052 | DAT_01b4d738
    MOV dword ptr [ECX + 0x48],0xf00000 ; 004c2054
    MOV ECX,dword ptr [EAX]             ; 004c205b | DAT_01b4d738
    MOV dword ptr [ECX + 0x4c],0x0      ; 004c205d
    MOV ECX,dword ptr [EAX]             ; 004c2064 | DAT_01b4d738
    MOV dword ptr [ECX + 0x70],EBX      ; 004c2066
    MOV ECX,dword ptr [EAX]             ; 004c2069 | DAT_01b4d738
    MOV dword ptr [ECX + 0x74],ESI      ; 004c206b
    MOV ECX,dword ptr [EAX]             ; 004c206e | DAT_01b4d738
    MOV dword ptr [ECX + 0x68],0x1000   ; 004c2070
    MOV ECX,dword ptr [EAX]             ; 004c2077 | DAT_01b4d738
    MOV dword ptr [ECX + 0x78],0xf00000 ; 004c2079
    MOV ECX,dword ptr [EAX]             ; 004c2080 | DAT_01b4d738
    MOV dword ptr [ECX + 0x7c],0x600000 ; 004c2082 | DAT_00600000
    MOV ECX,dword ptr [EAX]             ; 004c2089 | DAT_01b4d738
    MOV dword ptr [ECX + 0xa0],EDX      ; 004c208b
    MOV EDX,dword ptr [EAX]             ; 004c2091 | DAT_01b4d738
    MOV dword ptr [EDX + 0xa4],ESI      ; 004c2093
    MOV EDX,dword ptr [EAX]             ; 004c2099 | DAT_01b4d738
    MOV dword ptr [EDX + 0x98],0x1000   ; 004c209b
    MOV EDX,dword ptr [EAX]             ; 004c20a5 | DAT_01b4d738
    MOV dword ptr [EDX + 0xa8],0x0      ; 004c20a7
    MOV EBX,0x3                         ; 004c20b1
    MOV EDX,dword ptr [EAX]             ; 004c20b6 | DAT_01b4d738
    PUSH 0xa3                           ; 004c20b8
    XOR ECX,ECX                         ; 004c20bd
    MOV dword ptr [EDX + 0xac],0x600000 ; 004c20bf | DAT_00600000
    MOV EDX,0x4                         ; 004c20c9
    MOV dword ptr [ESP + 0x18],ECX      ; 004c20ce
    MOV dword ptr [ESP + 0x14],ECX      ; 004c20d2
    MOV dword ptr [ESP + 0x8],EDX       ; 004c20d6
    MOV EDX,0x1                         ; 004c20da
    MOV dword ptr [ESP + 0x10],ECX      ; 004c20df
    MOV dword ptr [ESP + 0x20],EDX      ; 004c20e3
    LEA EDX,[ESP + 0x4]                 ; 004c20e7
    MOV dword ptr [ESP + 0xc],ECX       ; 004c20eb
    PUSH EDX                            ; 004c20ef
    MOV dword ptr [ESP + 0x20],ECX      ; 004c20f0
    MOV ECX,0x2                         ; 004c20f4
    PUSH EAX                            ; 004c20f9 | DAT_01b4d738
    MOV dword ptr [ESP + 0x30],EBX      ; 004c20fa
    MOV dword ptr [ESP + 0x2c],ECX      ; 004c20fe
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0 ; 004c2102
        ;   XREF to: 0045f3c0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0()
    ADD ESP,0xc                         ; 004c2107
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004c210a
    MOV dword ptr [ESP + 0x28],EAX      ; 004c210e
    MOV EAX,dword ptr [ESP + 0x50]      ; 004c2112
    MOV dword ptr [ESP + 0x30],EAX      ; 004c2116
    PUSH EBP                            ; 004c211a
    MOV EDI,dword ptr [ESP + 0x34]      ; 004c211b
    PUSH EDI                            ; 004c211f
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004c2120
    PUSH EAX                            ; 004c2124
    MOV dword ptr [ESP + 0x38],EAX      ; 004c2125
    MOV EAX,dword ptr [ESP + 0x34]      ; 004c2129
    PUSH EAX                            ; 004c212d
    PUSH 0x1fb8508                      ; 004c212e
    MOV dword ptr [ESP + 0x48],EBP      ; 004c2133
    CALL FUN_004405d0                   ; 004c2137
        ;   XREF to: 004405d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004405d0()
    ADD ESP,0x14                        ; 004c213c
    ADD ESP,0x38                        ; 004c213f
    POP EBP                             ; 004c2142
    POP EDI                             ; 004c2143
    POP ESI                             ; 004c2144
    POP EBX                             ; 004c2145
    RET                                 ; 004c2146

