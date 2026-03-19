; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_cramtex_cpp_CCramTex_renderAllTexturesAndRectangles_FUN_00447ab0(CCramTex *this_ptr,int x,int y,int width,int height,int render_mode)
;
; Parameters:
; CCramTex *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   height
; int              Stack[0x18]:4   render_mode
;
; Referenced Globals:
;   CCramTex[250] g_CramSortedTextureEntries
;   undefined4 g_CramSortedTextureEntries[1].width
;   SCramRectangle[50] g_CramRectangles
;   undefined4 g_CramRectangles[0].start_x
;   undefined4 g_CramRectangles[0].start_y
;   undefined4 g_CramRectangles[0].active_flag
;   undefined4 g_CramRectangles[1].map_id
;   undefined4 g_CramRectangles[1].start_x
;   undefined4 g_CramRectangles[1].start_y
;   undefined4 g_CramRectangles[1].active_flag
;   int g_CramTextureCount
;   int g_CramPlacedTextureCount
;   int g_CramRectangleCount
;   int g_CramCurrentAcceptableSize
;   int g_CramMapNumber
;   ... and 2 more
;
; Called Functions:
;   engine_2d.c_fillRectColor_FUN_00403170
;   engine_2d.c_plotPixel_FUN_00401140
;   shape_cramtex.cpp_CCramTex_renderTextureEntry_FUN_00447c20
;
; *****************************************************************************

section .text

    NOP                                 ; 00447ab0
        ;   Label: shape_cramtex.cpp_CCramTex_renderAllTexturesAndRectangles_FUN_00447ab0
    NOP                                 ; 00447ab1
    NOP                                 ; 00447ab2
    NOP                                 ; 00447ab3
    NOP                                 ; 00447ab4
    NOP                                 ; 00447ab5
    NOP                                 ; 00447ab6
    NOP                                 ; 00447ab7
    NOP                                 ; 00447ab8
    NOP                                 ; 00447ab9
    PUSH EBX                            ; 00447aba
    PUSH ESI                            ; 00447abb
    PUSH EDI                            ; 00447abc
    PUSH EBP                            ; 00447abd
    SUB ESP,0x8                         ; 00447abe
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00447ac1
    CMP dword ptr [0x0084a894],0x0      ; 00447ac5 | g_CramVisualizationFlag
    JNZ 0x00447ad6                      ; 00447acc
        ;   XREF to: 00447ad6 (CONDITIONAL_JUMP)  ; LAB_00447ad6
    ADD ESP,0x8                         ; 00447ace
        ;   Label: LAB_00447ace
    POP EBP                             ; 00447ad1
    POP EDI                             ; 00447ad2
    POP ESI                             ; 00447ad3
    POP EBX                             ; 00447ad4
    RET                                 ; 00447ad5
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00447ad6
        ;   Label: LAB_00447ad6
    PUSH 0x1                            ; 00447ada
    DEC EAX                             ; 00447adc
    PUSH EAX                            ; 00447add
    MOV EAX,dword ptr [ESP + 0x30]      ; 00447ade
    DEC EAX                             ; 00447ae2
    PUSH EAX                            ; 00447ae3
    MOV ECX,dword ptr [ESP + 0x30]      ; 00447ae4
    PUSH ECX                            ; 00447ae8
    MOV EBX,dword ptr [ESP + 0x30]      ; 00447ae9
    PUSH EBX                            ; 00447aed
    CALL engine_2d.c_fillRectColor_FUN_00403170 ; 00447aee
        ;   XREF to: 00403170 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_00403170(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 00447af3
    TEST EDI,EDI                        ; 00447af6
    JZ 0x00447c0c                       ; 00447af8
        ;   XREF to: 00447c0c (CONDITIONAL_JUMP)  ; LAB_00447c0c
    MOV EAX,[0x0084a854]                ; 00447afe | g_CramTextureCount
    MOV ESI,EAX                         ; 00447b03
        ;   Label: LAB_00447b03
    XOR EBX,EBX                         ; 00447b05
    TEST EAX,EAX                        ; 00447b07
    JLE 0x00447b40                      ; 00447b09
        ;   XREF to: 00447b40 (CONDITIONAL_JUMP)  ; LAB_00447b40
    MOV EBP,0x83c1dc                    ; 00447b0b | g_CramSortedTextureEntries
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00447b10
        ;   Label: LAB_00447b10
    PUSH EAX                            ; 00447b14
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00447b15
    PUSH EDX                            ; 00447b19
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00447b1a
    PUSH ECX                            ; 00447b1e
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00447b1f
    PUSH EAX                            ; 00447b23
    PUSH EDI                            ; 00447b24
    PUSH EBP                            ; 00447b25 | g_CramSortedTextureEntries | g_CramSortedTextureEntries[1].width
    INC EBX                             ; 00447b26
    CALL shape_cramtex.cpp_CCramTex_renderTextureEntry_FUN_00447c20 ; 00447b27
        ;   XREF to: 00447c20 (UNCONDITIONAL_CALL)  ; void shape_cramtex.cpp_CCramTex_renderTextureEntry_FUN_00447c20(CCramTex * this_ptr, int show_final_placement, int draw_x, int draw_y, ...)
    ADD ESP,0x18                        ; 00447b2c
    ADD EBP,0x4c                        ; 00447b2f
    CMP EBX,ESI                         ; 00447b32
    JL 0x00447b10                       ; 00447b34
        ;   XREF to: 00447b10 (CONDITIONAL_JUMP)  ; LAB_00447b10
    LEA EAX,[EAX]                       ; 00447b36
    LEA EDX,[EDX]                       ; 00447b3c
    TEST EDI,EDI                        ; 00447b40
        ;   Label: LAB_00447b40
    JNZ 0x00447ace                      ; 00447b42
        ;   XREF to: 00447ace (CONDITIONAL_JUMP)  ; LAB_00447ace
    MOV EDX,dword ptr [0x0084a860]      ; 00447b44 | g_CramRectangleCount
    XOR EBP,EBP                         ; 00447b4a
    TEST EDX,EDX                        ; 00447b4c
    JLE 0x00447ace                      ; 00447b4e
        ;   XREF to: 00447ace (CONDITIONAL_JUMP)  ; LAB_00447ace
    MOV EAX,dword ptr [ESP + 0x28]      ; 00447b54
    SUB EAX,dword ptr [ESP + 0x20]      ; 00447b58
    MOV ESI,dword ptr [ESP + 0x24]      ; 00447b5c
    MOV dword ptr [ESP],EAX             ; 00447b60
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00447b63
    SUB EAX,ESI                         ; 00447b67
    MOV EBX,0x840c14                    ; 00447b69 | g_CramRectangles
    MOV dword ptr [ESP + 0x4],EAX       ; 00447b6e
    MOV EDI,dword ptr [0x0084a890]      ; 00447b72 | g_CramMapNumber
        ;   Label: LAB_00447b72
    CMP EDI,dword ptr [EBX]             ; 00447b78 | g_CramRectangles | g_CramRectangles[1].map_id
    JNZ 0x00447bf5                      ; 00447b7a
        ;   XREF to: 00447bf5 (CONDITIONAL_JUMP)  ; LAB_00447bf5
    CMP dword ptr [EBX + 0x24],0x0      ; 00447b80 | g_CramRectangles[0].active_flag | g_CramRectangles[1].active_flag
    JL 0x00447bf5                       ; 00447b84
        ;   XREF to: 00447bf5 (CONDITIONAL_JUMP)  ; LAB_00447bf5
    MOV ECX,dword ptr [ESP]             ; 00447b86
    MOV EDX,dword ptr [EBX + 0x4]       ; 00447b89 | g_CramRectangles[0].start_x | g_CramRectangles[1].start_x
    IMUL EDX,ECX                        ; 00447b8c
    MOV ESI,dword ptr [0x0084a884]      ; 00447b8f | g_CramCurrentAcceptableSize
    MOV EAX,EDX                         ; 00447b95
    SAR EDX,0x1f                        ; 00447b97
    IDIV ESI                            ; 00447b9a
    MOV EDI,dword ptr [ESP + 0x4]       ; 00447b9c
    MOV EDX,dword ptr [EBX + 0x8]       ; 00447ba0 | g_CramRectangles[0].start_y | g_CramRectangles[1].start_y
    IMUL EDX,EDI                        ; 00447ba3
    MOV ESI,dword ptr [ESP + 0x20]      ; 00447ba6
    MOV ECX,dword ptr [0x0084a884]      ; 00447baa | g_CramCurrentAcceptableSize
    ADD ESI,EAX                         ; 00447bb0
    MOV EAX,EDX                         ; 00447bb2
    SAR EDX,0x1f                        ; 00447bb4
    IDIV ECX                            ; 00447bb7
    MOV EDI,dword ptr [ESP + 0x24]      ; 00447bb9
    ADD EDI,EAX                         ; 00447bbd
    CMP ESI,dword ptr [ESP + 0x28]      ; 00447bbf
    JGE 0x00447bf5                      ; 00447bc3
        ;   XREF to: 00447bf5 (CONDITIONAL_JUMP)  ; LAB_00447bf5
    CMP EDI,dword ptr [ESP + 0x2c]      ; 00447bc5
    JGE 0x00447bf5                      ; 00447bc9
        ;   XREF to: 00447bf5 (CONDITIONAL_JUMP)  ; LAB_00447bf5
    PUSH EDI                            ; 00447bcb
    MOV EAX,dword ptr [EBX + 0x24]      ; 00447bcc | g_CramRectangles[0].active_flag
    PUSH ESI                            ; 00447bcf
    MOV [0x02d02570],EAX                ; 00447bd0 | g_ActiveRenderColor
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 00447bd5
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 00447bda
    PUSH EDI                            ; 00447bdd
    LEA EAX,[ESI + 0x1]                 ; 00447bde
    PUSH EAX                            ; 00447be1
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 00447be2
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 00447be7
    INC EDI                             ; 00447bea
    PUSH EDI                            ; 00447beb
    PUSH ESI                            ; 00447bec
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 00447bed
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 00447bf2
    MOV ECX,dword ptr [0x0084a860]      ; 00447bf5 | g_CramRectangleCount
        ;   Label: LAB_00447bf5
    INC EBP                             ; 00447bfb
    ADD EBX,0x28                        ; 00447bfc
    CMP EBP,ECX                         ; 00447bff
    JGE 0x00447ace                      ; 00447c01
        ;   XREF to: 00447ace (CONDITIONAL_JUMP)  ; LAB_00447ace
    JMP 0x00447b72                      ; 00447c07
        ;   XREF to: 00447b72 (UNCONDITIONAL_JUMP)  ; LAB_00447b72
    MOV EAX,[0x0084a85c]                ; 00447c0c | g_CramPlacedTextureCount
        ;   Label: LAB_00447c0c
    JMP 0x00447b03                      ; 00447c11
        ;   XREF to: 00447b03 (UNCONDITIONAL_JUMP)  ; LAB_00447b03

