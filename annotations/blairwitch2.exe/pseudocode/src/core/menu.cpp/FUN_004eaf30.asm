; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_menu_cpp_FUN_004eaf30(int x_center,int y_top,int height_half)
;
; Parameters:
; int              Stack[0x4]:4   x_center
; int              Stack[0x8]:4   y_top
; int              Stack[0xc]:4   height_half
; Local Variables:
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_menu.cpp_FUN_004ed260 at 004eda9b
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_00617fc8
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01d06134
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;   engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_00469c60
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eaf30
        ;   Label: core_menu.cpp_FUN_004eaf30
    PUSH EBP                            ; 004eaf31
    SUB ESP,0x28                        ; 004eaf32
    MOV EBX,dword ptr [ESP + 0x34]      ; 004eaf35
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004eaf39
    CMP EBX,0x140                       ; 004eaf3d
    JLE 0x004eaf54                      ; 004eaf43
        ;   XREF to: 004eaf54 (CONDITIONAL_JUMP)  ; LAB_004eaf54
    MOV EAX,0x280                       ; 004eaf45
    SUB EBX,0x140                       ; 004eaf4a
    SUB EAX,EBX                         ; 004eaf50
    MOV EBX,EAX                         ; 004eaf52
    ADD EDX,EDX                         ; 004eaf54
        ;   Label: LAB_004eaf54
    TEST EDX,EDX                        ; 004eaf56
    JLE 0x004eb0cd                      ; 004eaf58
        ;   XREF to: 004eb0cd (CONDITIONAL_JUMP)  ; LAB_004eb0cd
    PUSH EDI                            ; 004eaf5e
    PUSH ESI                            ; 004eaf5f
    MOV EAX,[0x0060b280]                ; 004eaf60 | DAT_0060b280
    LEA ESI,[EBX + -0x10]               ; 004eaf65
    MOV ECX,dword ptr [EAX]             ; 004eaf68 | DAT_01ba5c50
    SHL ESI,0x10                        ; 004eaf6a
    MOV dword ptr [ECX + 0x10],ESI      ; 004eaf6d
    MOV EDI,dword ptr [ESP + 0x40]      ; 004eaf70
    MOV ECX,dword ptr [EAX]             ; 004eaf74 | DAT_01ba5c50
    SHL EDI,0x10                        ; 004eaf76
    MOV dword ptr [ECX + 0x14],EDI      ; 004eaf79
    LEA ECX,[EBX + 0x10]                ; 004eaf7c
    MOV EBP,dword ptr [EAX]             ; 004eaf7f | DAT_01ba5c50
    SHL ECX,0x10                        ; 004eaf81
    MOV dword ptr [EBP + 0x40],ECX      ; 004eaf84
    MOV EBP,dword ptr [EAX]             ; 004eaf87 | DAT_01ba5c50
    MOV dword ptr [EBP + 0x44],EDI      ; 004eaf89
    MOV EDI,dword ptr [EAX]             ; 004eaf8c | DAT_01ba5c50
    MOV dword ptr [EDI + 0x70],ECX      ; 004eaf8e
    MOV ECX,dword ptr [ESP + 0x40]      ; 004eaf91
    SUB ECX,EDX                         ; 004eaf95
    MOV EDX,ECX                         ; 004eaf97
    MOV ECX,dword ptr [EAX]             ; 004eaf99 | DAT_01ba5c50
    SHL EDX,0x10                        ; 004eaf9b
    MOV dword ptr [ECX + 0x74],EDX      ; 004eaf9e
    MOV ECX,dword ptr [EAX]             ; 004eafa1 | DAT_01ba5c50
    MOV dword ptr [ECX + 0xa0],ESI      ; 004eafa3
    MOV ECX,dword ptr [EAX]             ; 004eafa9 | DAT_01ba5c50
    MOV dword ptr [ECX + 0xa4],EDX      ; 004eafab
    MOV EDX,dword ptr [EAX]             ; 004eafb1 | DAT_01ba5c50
    MOV dword ptr [EDX + 0x18],0x80000  ; 004eafb3
    MOV EDX,dword ptr [EAX]             ; 004eafba | DAT_01ba5c50
    MOV dword ptr [EDX + 0x1c],0xf80000 ; 004eafbc
    MOV EDX,dword ptr [EAX]             ; 004eafc3 | DAT_01ba5c50
    MOV dword ptr [EDX + 0x48],0xf80000 ; 004eafc5
    MOV EDX,dword ptr [EAX]             ; 004eafcc | DAT_01ba5c50
    MOV dword ptr [EDX + 0x4c],0xf80000 ; 004eafce
    MOV EDX,dword ptr [EAX]             ; 004eafd5 | DAT_01ba5c50
    MOV dword ptr [EDX + 0x78],0xf80000 ; 004eafd7
    MOV EDX,dword ptr [EAX]             ; 004eafde | DAT_01ba5c50
    MOV dword ptr [EDX + 0x7c],0x80000  ; 004eafe0
    MOV EDX,dword ptr [EAX]             ; 004eafe7 | DAT_01ba5c50
    MOV dword ptr [EDX + 0xa8],0x80000  ; 004eafe9
    MOV EDX,dword ptr [EAX]             ; 004eaff3 | DAT_01ba5c50
    MOV dword ptr [EDX + 0xac],0x80000  ; 004eaff5
    MOV EDX,0x4                         ; 004eafff
    MOV ESI,0x2                         ; 004eb004
    MOV EDI,0x3                         ; 004eb009
    PUSH 0x8000                         ; 004eb00e
    XOR ECX,ECX                         ; 004eb013
    MOV dword ptr [ESP + 0x10],EDX      ; 004eb015
    MOV dword ptr [ESP + 0x20],ECX      ; 004eb019
    MOV dword ptr [ESP + 0x1c],ECX      ; 004eb01d
    MOV dword ptr [ESP + 0x18],ECX      ; 004eb021
    MOV dword ptr [ESP + 0x14],ECX      ; 004eb025
    MOV dword ptr [ESP + 0x24],ECX      ; 004eb029
    MOV dword ptr [ESP + 0x2c],ESI      ; 004eb02d
    PUSH EAX                            ; 004eb031 | DAT_01ba5c50
    MOV ECX,0x1                         ; 004eb032
    MOV dword ptr [ESP + 0x34],EDI      ; 004eb037
    MOV dword ptr [ESP + 0x2c],ECX      ; 004eb03b
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 004eb03f
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004eb044
    PUSH 0x1                            ; 004eb047
    MOV EBP,dword ptr [0x0060b280]      ; 004eb049 | DAT_0060b280
    PUSH EBP                            ; 004eb04f | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 004eb050
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    MOV EAX,[0x01d06134]                ; 004eb055 | DAT_01d06134
    MOV EDX,EAX                         ; 004eb05a
    SAR EDX,0x1f                        ; 004eb05c
    SHL EDX,0x10                        ; 004eb05f
    SBB EAX,EDX                         ; 004eb062
    SAR EAX,0x10                        ; 004eb064
    LEA EDX,[EAX + EBX*0x1]             ; 004eb067
    AND EDX,0x7                         ; 004eb06a
    LEA EAX,[EDX*0x4 + 0x0]             ; 004eb06d
    SUB EAX,EDX                         ; 004eb074
    SHL EAX,0x3                         ; 004eb076
    ADD ESP,0x8                         ; 004eb079
    ADD EAX,0x617fc8                    ; 004eb07c | DAT_00617fc8
    PUSH EAX                            ; 004eb081
    MOV EAX,[0x0060b280]                ; 004eb082 | DAT_0060b280
    PUSH EAX                            ; 004eb087 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 004eb088
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004eb08d
    PUSH 0x23                           ; 004eb090
    LEA EAX,[ESP + 0xc]                 ; 004eb092
    PUSH EAX                            ; 004eb096
    MOV EDX,dword ptr [0x0060b280]      ; 004eb097 | DAT_0060b280
    PUSH EDX                            ; 004eb09d | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_00469c60 ; 004eb09e
        ;   XREF to: 00469c60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_00469c60(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, int render_flags)
    ADD ESP,0xc                         ; 004eb0a3
    PUSH 0x0                            ; 004eb0a6
    MOV ECX,dword ptr [0x0060b280]      ; 004eb0a8 | DAT_0060b280
    PUSH ECX                            ; 004eb0ae | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 004eb0af
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004eb0b4
    PUSH 0xffff                         ; 004eb0b7
    MOV EBX,dword ptr [0x0060b280]      ; 004eb0bc | DAT_0060b280
    PUSH EBX                            ; 004eb0c2 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 004eb0c3
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004eb0c8
    POP ESI                             ; 004eb0cb
    POP EDI                             ; 004eb0cc
    ADD ESP,0x28                        ; 004eb0cd
        ;   Label: LAB_004eb0cd
    POP EBP                             ; 004eb0d0
    POP EBX                             ; 004eb0d1
    RET                                 ; 004eb0d2

