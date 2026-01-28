; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_cramtex_cpp_renderTextureEntry_FUN_00447c20 (SCramWorkingEntry *texture_entry,int visualization_mode,int draw_x,int draw_y, int draw_width,int draw_height)
;
; Parameters:
; SCramWorkingEntry * Stack[0x8]:4   texture_entry
; int              Stack[0xc]:4   visualization_mode
; int              Stack[0x10]:4   draw_x
; int              Stack[0x14]:4   draw_y
; int              Stack[0x18]:4   draw_width
; int              Stack[0x1c]:4   draw_height
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   shape_cramtex.cpp_renderAllTexturesAndRectangles_FUN_00447ab0 at 00447b27
;   shape_cramtex.cpp_visualizeTextureAtlas_FUN_00447f20 at 004480e5
;
; Referenced Globals:
;   int g_CramPaddingCalculation
;   int g_CramCurrentAcceptableSize
;   int g_CramMapNumber
;
; Called Functions:
;   crt_stack.c_stack_probe_FUN_005ff9f3
;   engine_2d.c_fillRectColor_FUN_00403170
;
; *****************************************************************************

section .text

    PUSH 0x48                           ; 00447c20
        ;   Label: shape_cramtex.cpp_renderTextureEntry_FUN_00447c20
    CALL crt_stack.c_stack_probe_FUN_005ff9f3 ; 00447c25
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; uint crt_stack.c_stack_probe_FUN_005ff9f3(uint stack_size)
    PUSH EBX                            ; 00447c2a
    PUSH ESI                            ; 00447c2b
    PUSH EDI                            ; 00447c2c
    PUSH EBP                            ; 00447c2d
    SUB ESP,0x20                        ; 00447c2e
    MOV EBX,dword ptr [ESP + 0x34]      ; 00447c31
    MOV EBP,dword ptr [ESP + 0x3c]      ; 00447c35
    CMP dword ptr [ESP + 0x38],0x0      ; 00447c39
    JZ 0x00447e4f                       ; 00447c3e
        ;   XREF to: 00447e4f (CONDITIONAL_JUMP)  ; LAB_00447e4f
    MOV ESI,dword ptr [0x0084a890]      ; 00447c44 | g_CramMapNumber
    CMP ESI,dword ptr [EBX + 0x2c]      ; 00447c4a
    JNZ 0x00447e47                      ; 00447c4d
        ;   XREF to: 00447e47 (CONDITIONAL_JUMP)  ; LAB_00447e47
    MOV EAX,dword ptr [EBX + 0x38]      ; 00447c53
    MOV ESI,dword ptr [EBX + 0x34]      ; 00447c56
    MOV dword ptr [ESP + 0x18],EAX      ; 00447c59
    MOV EAX,dword ptr [EBX + 0x3c]      ; 00447c5d
    MOV EDI,dword ptr [EBX + 0x30]      ; 00447c60
    MOV dword ptr [ESP + 0x1c],EAX      ; 00447c63
        ;   Label: LAB_00447c63
    MOV EAX,dword ptr [ESP + 0x44]      ; 00447c67
    SUB EAX,EBP                         ; 00447c6b
    MOV dword ptr [ESP],EAX             ; 00447c6d
    IMUL EAX,EDI                        ; 00447c70
    MOV EDX,EAX                         ; 00447c73
    MOV ECX,dword ptr [0x0084a884]      ; 00447c75 | g_CramCurrentAcceptableSize
    SAR EDX,0x1f                        ; 00447c7b
    IDIV ECX                            ; 00447c7e
    MOV EDX,dword ptr [ESP + 0x40]      ; 00447c80
    LEA ECX,[EAX + EBP*0x1]             ; 00447c84
    MOV EAX,dword ptr [ESP + 0x48]      ; 00447c87
    SUB EAX,EDX                         ; 00447c8b
    MOV dword ptr [ESP + 0x8],EAX       ; 00447c8d
    IMUL EAX,ESI                        ; 00447c91
    MOV EDX,EAX                         ; 00447c94
    SAR EDX,0x1f                        ; 00447c96
    IDIV dword ptr [0x0084a884]         ; 00447c99 | g_CramCurrentAcceptableSize
    MOV EDX,dword ptr [ESP + 0x40]      ; 00447c9f
    ADD EDX,EAX                         ; 00447ca3
    MOV EAX,dword ptr [ESP]             ; 00447ca5
    MOV dword ptr [ESP + 0x4],EDX       ; 00447ca8
    MOV EDX,dword ptr [ESP + 0x18]      ; 00447cac
    IMUL EDX,EAX                        ; 00447cb0
    MOV EAX,EDX                         ; 00447cb3
    SAR EDX,0x1f                        ; 00447cb5
    IDIV dword ptr [0x0084a884]         ; 00447cb8 | g_CramCurrentAcceptableSize
    LEA EDX,[EAX + EBP*0x1]             ; 00447cbe
    MOV EAX,dword ptr [ESP + 0x8]       ; 00447cc1
    MOV dword ptr [ESP + 0xc],EDX       ; 00447cc5
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00447cc9
    IMUL EDX,EAX                        ; 00447ccd
    MOV EAX,EDX                         ; 00447cd0
    SAR EDX,0x1f                        ; 00447cd2
    IDIV dword ptr [0x0084a884]         ; 00447cd5 | g_CramCurrentAcceptableSize
    ADD EAX,dword ptr [ESP + 0x40]      ; 00447cdb
    PUSH 0xf8                           ; 00447cdf
    DEC EAX                             ; 00447ce4
    PUSH EAX                            ; 00447ce5
    MOV EAX,dword ptr [ESP + 0x14]      ; 00447ce6
    DEC EAX                             ; 00447cea
    PUSH EAX                            ; 00447ceb
    MOV EAX,dword ptr [ESP + 0x10]      ; 00447cec
    PUSH EAX                            ; 00447cf0
    PUSH ECX                            ; 00447cf1
    CALL engine_2d.c_fillRectColor_FUN_00403170 ; 00447cf2
        ;   XREF to: 00403170 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_00403170(int x1, int y1, int x2, int y2, ...)
    MOV EAX,[0x0084a880]                ; 00447cf7 | g_CramPaddingCalculation
    MOV EDX,EAX                         ; 00447cfc
    SAR EDX,0x1f                        ; 00447cfe
    SUB EAX,EDX                         ; 00447d01
    SAR EAX,0x1                         ; 00447d03
    ADD ESP,0x14                        ; 00447d05
    MOV EDX,dword ptr [ESP + 0x18]      ; 00447d08
    SUB EDX,EAX                         ; 00447d0c
    ADD EDI,EAX                         ; 00447d0e
    MOV dword ptr [ESP + 0x18],EDX      ; 00447d10
    MOV EDX,dword ptr [ESP]             ; 00447d14
    IMUL EDX,EDI                        ; 00447d17
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00447d1a
    ADD ESI,EAX                         ; 00447d1e
    SUB ECX,EAX                         ; 00447d20
    MOV EDI,dword ptr [0x0084a884]      ; 00447d22 | g_CramCurrentAcceptableSize
    MOV EAX,EDX                         ; 00447d28
    SAR EDX,0x1f                        ; 00447d2a
    IDIV EDI                            ; 00447d2d
    MOV EDX,dword ptr [ESP + 0x8]       ; 00447d2f
    IMUL EDX,ESI                        ; 00447d33
    MOV dword ptr [ESP + 0x1c],ECX      ; 00447d36
    LEA ECX,[EAX + EBP*0x1]             ; 00447d3a
    MOV ESI,dword ptr [0x0084a884]      ; 00447d3d | g_CramCurrentAcceptableSize
    MOV EAX,EDX                         ; 00447d43
    SAR EDX,0x1f                        ; 00447d45
    IDIV ESI                            ; 00447d48
    MOV EDX,dword ptr [ESP + 0x40]      ; 00447d4a
    ADD EDX,EAX                         ; 00447d4e
    MOV EAX,dword ptr [ESP]             ; 00447d50
    MOV ESI,EDX                         ; 00447d53
    MOV EDX,dword ptr [ESP + 0x18]      ; 00447d55
    IMUL EDX,EAX                        ; 00447d59
    MOV EAX,EDX                         ; 00447d5c
    SAR EDX,0x1f                        ; 00447d5e
    IDIV dword ptr [0x0084a884]         ; 00447d61 | g_CramCurrentAcceptableSize
    LEA EDX,[EAX + EBP*0x1]             ; 00447d67
    MOV EAX,dword ptr [ESP + 0x8]       ; 00447d6a
    MOV dword ptr [ESP + 0x10],EDX      ; 00447d6e
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00447d72
    IMUL EDX,EAX                        ; 00447d76
    MOV EAX,EDX                         ; 00447d79
    SAR EDX,0x1f                        ; 00447d7b
    IDIV dword ptr [0x0084a884]         ; 00447d7e | g_CramCurrentAcceptableSize
    ADD EAX,dword ptr [ESP + 0x40]      ; 00447d84
    PUSH 0x2                            ; 00447d88
    DEC EAX                             ; 00447d8a
    PUSH EAX                            ; 00447d8b
    MOV EAX,dword ptr [ESP + 0x18]      ; 00447d8c
    DEC EAX                             ; 00447d90
    PUSH EAX                            ; 00447d91
    MOV EAX,ESI                         ; 00447d92
    PUSH EAX                            ; 00447d94
    PUSH ECX                            ; 00447d95
    MOV EDI,ECX                         ; 00447d96
    CALL engine_2d.c_fillRectColor_FUN_00403170 ; 00447d98
        ;   XREF to: 00403170 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_00403170(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 00447d9d
    CMP dword ptr [ESP + 0x38],0x0      ; 00447da0
    JZ 0x00447e47                       ; 00447da5
        ;   XREF to: 00447e47 (CONDITIONAL_JUMP)  ; LAB_00447e47
    CMP dword ptr [EBX + 0x44],0x0      ; 00447dab
    JZ 0x00447e6f                       ; 00447daf
        ;   XREF to: 00447e6f (CONDITIONAL_JUMP)  ; LAB_00447e6f
    MOV EAX,dword ptr [EBX + 0x4]       ; 00447db5
    MOV EDX,dword ptr [EBX + 0x30]      ; 00447db8
        ;   Label: LAB_00447db8
    MOV ECX,dword ptr [0x0084a880]      ; 00447dbb | g_CramPaddingCalculation
    ADD EAX,EDX                         ; 00447dc1
    ADD ECX,EAX                         ; 00447dc3
    MOV EAX,[0x0084a880]                ; 00447dc5 | g_CramPaddingCalculation
    MOV EDX,EAX                         ; 00447dca
    SAR EDX,0x1f                        ; 00447dcc
    SUB EAX,EDX                         ; 00447dcf
    SAR EAX,0x1                         ; 00447dd1
    SUB ECX,EAX                         ; 00447dd3
    MOV dword ptr [ESP + 0x14],ECX      ; 00447dd5
    CMP dword ptr [EBX + 0x44],0x0      ; 00447dd9
    JZ 0x00447e76                       ; 00447ddd
        ;   XREF to: 00447e76 (CONDITIONAL_JUMP)  ; LAB_00447e76
    MOV EAX,dword ptr [EBX]             ; 00447de3
    MOV EDX,dword ptr [EBX + 0x34]      ; 00447de5
        ;   Label: LAB_00447de5
    MOV ECX,dword ptr [0x0084a880]      ; 00447de8 | g_CramPaddingCalculation
    ADD EAX,EDX                         ; 00447dee
    ADD ECX,EAX                         ; 00447df0
    MOV EAX,[0x0084a880]                ; 00447df2 | g_CramPaddingCalculation
    MOV EDX,EAX                         ; 00447df7
    SAR EDX,0x1f                        ; 00447df9
    SUB EAX,EDX                         ; 00447dfc
    SAR EAX,0x1                         ; 00447dfe
    MOV EDX,dword ptr [ESP + 0x44]      ; 00447e00
    MOV EBX,dword ptr [ESP + 0x14]      ; 00447e04
    SUB EDX,EBP                         ; 00447e08
    IMUL EDX,EBX                        ; 00447e0a
    SUB ECX,EAX                         ; 00447e0d
    MOV EBX,dword ptr [0x0084a884]      ; 00447e0f | g_CramCurrentAcceptableSize
    MOV EAX,EDX                         ; 00447e15
    SAR EDX,0x1f                        ; 00447e17
    IDIV EBX                            ; 00447e1a
    MOV EDX,dword ptr [ESP + 0x48]      ; 00447e1c
    ADD EBP,EAX                         ; 00447e20
    SUB EDX,dword ptr [ESP + 0x40]      ; 00447e22
    IMUL EDX,ECX                        ; 00447e26
    MOV EAX,EDX                         ; 00447e29
    SAR EDX,0x1f                        ; 00447e2b
    IDIV EBX                            ; 00447e2e
    ADD EAX,dword ptr [ESP + 0x40]      ; 00447e30
    PUSH 0xfa                           ; 00447e34
    DEC EAX                             ; 00447e39
    PUSH EAX                            ; 00447e3a
    DEC EBP                             ; 00447e3b
    PUSH EBP                            ; 00447e3c
    PUSH ESI                            ; 00447e3d
    PUSH EDI                            ; 00447e3e
    CALL engine_2d.c_fillRectColor_FUN_00403170 ; 00447e3f
        ;   XREF to: 00403170 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_00403170(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 00447e44
    ADD ESP,0x20                        ; 00447e47
        ;   Label: LAB_00447e47
    POP EBP                             ; 00447e4a
    POP EDI                             ; 00447e4b
    POP ESI                             ; 00447e4c
    POP EBX                             ; 00447e4d
    RET                                 ; 00447e4e
    MOV ECX,dword ptr [0x0084a890]      ; 00447e4f | g_CramMapNumber
        ;   Label: LAB_00447e4f
    CMP ECX,dword ptr [EBX + 0x10]      ; 00447e55
    JNZ 0x00447e47                      ; 00447e58
        ;   XREF to: 00447e47 (CONDITIONAL_JUMP)  ; LAB_00447e47
    MOV EAX,dword ptr [EBX + 0x24]      ; 00447e5a
    MOV ESI,dword ptr [EBX + 0x20]      ; 00447e5d
    MOV dword ptr [ESP + 0x18],EAX      ; 00447e60
    MOV EAX,dword ptr [EBX + 0x28]      ; 00447e64
    MOV EDI,dword ptr [EBX + 0x1c]      ; 00447e67
    JMP 0x00447c63                      ; 00447e6a
        ;   XREF to: 00447c63 (UNCONDITIONAL_JUMP)  ; LAB_00447c63
    MOV EAX,dword ptr [EBX]             ; 00447e6f
        ;   Label: LAB_00447e6f
    JMP 0x00447db8                      ; 00447e71
        ;   XREF to: 00447db8 (UNCONDITIONAL_JUMP)  ; LAB_00447db8
    MOV EAX,dword ptr [EBX + 0x4]       ; 00447e76
        ;   Label: LAB_00447e76
    JMP 0x00447de5                      ; 00447e79
        ;   XREF to: 00447de5 (UNCONDITIONAL_JUMP)  ; LAB_00447de5

