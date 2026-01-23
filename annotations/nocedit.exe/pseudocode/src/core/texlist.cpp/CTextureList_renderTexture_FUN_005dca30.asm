; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_texlist.cpp_CTextureList_renderTexture_FUN_005dca30(CTextureList * this_ptr)
;
; Parameters:
; CTextureList *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_s_d_00655134
;   TerminatedCString s_s_d_0065513b
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   int g_TexturePreviewEnabled = 0x1
;   int g_TexturePreviewFullscreen
;   int g_TexturePreviewY
;
; Called Functions:
;   engine_2d.c_drawTextRightAlignedColorFormatted_FUN_00402580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005dca30
        ;   Label: core_texlist.cpp_CTextureList_renderTexture_FUN_005dca30
    PUSH EDI                            ; 005dca31
    MOV EAX,dword ptr [ESP + 0xc]       ; 005dca32
    CMP dword ptr [0x006842f4],0x0      ; 005dca36 | g_TexturePreviewEnabled
    JZ 0x005dca7e                       ; 005dca3d
        ;   XREF to: 005dca7e (CONDITIONAL_JUMP)  ; LAB_005dca7e
    MOV ECX,dword ptr [0x00679394]      ; 005dca3f | g_WindowWidth
    MOV EBX,dword ptr [0x03f87340]      ; 005dca45 | g_TexturePreviewFullscreen
    LEA EDX,[EAX + 0x6d68]              ; 005dca4b
    SUB ECX,0x7                         ; 005dca51
    TEST EBX,EBX                        ; 005dca54
    JNZ 0x005dca81                      ; 005dca56
        ;   XREF to: 005dca81 (CONDITIONAL_JUMP)  ; LAB_005dca81
    MOV EDI,dword ptr [EAX + 0x1a5e8]   ; 005dca58
    MOV EAX,EDI                         ; 005dca5e
    SHL EAX,0x4                         ; 005dca60
    PUSH EDI                            ; 005dca63
    ADD EAX,EDX                         ; 005dca64
    PUSH EAX                            ; 005dca66
    MOV EAX,[0x03f87348]                ; 005dca67 | g_TexturePreviewY
    PUSH 0x655134                       ; 005dca6c | = "%s  %d"
    SUB EAX,0xb                         ; 005dca71
    PUSH EAX                            ; 005dca74
    PUSH ECX                            ; 005dca75
    CALL engine_2d.c_drawTextRightAlignedColorFormatted_FUN_00402580 ; 005dca76
        ;   XREF to: 00402580 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextRightAlignedColorFormatted_FUN_00402580(int y_pos, int right_x, char * format_string)
    ADD ESP,0x14                        ; 005dca7b
    POP EDI                             ; 005dca7e
        ;   Label: LAB_005dca7e
    POP EBX                             ; 005dca7f
    RET                                 ; 005dca80
    PUSH ESI                            ; 005dca81
        ;   Label: LAB_005dca81
    MOV ESI,dword ptr [EAX + 0x1a5e8]   ; 005dca82
    MOV EAX,ESI                         ; 005dca88
    SHL EAX,0x4                         ; 005dca8a
    PUSH ESI                            ; 005dca8d
    ADD EAX,EDX                         ; 005dca8e
    PUSH EAX                            ; 005dca90
    MOV EAX,[0x00679398]                ; 005dca91 | g_WindowHeight
    PUSH 0x65513b                       ; 005dca96 | = "%s  %d"
    SUB EAX,0xb                         ; 005dca9b
    PUSH EAX                            ; 005dca9e
    PUSH ECX                            ; 005dca9f
    CALL engine_2d.c_drawTextRightAlignedColorFormatted_FUN_00402580 ; 005dcaa0
        ;   XREF to: 00402580 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextRightAlignedColorFormatted_FUN_00402580(int y_pos, int right_x, char * format_string)
    ADD ESP,0x14                        ; 005dcaa5
    POP ESI                             ; 005dcaa8
    POP EDI                             ; 005dcaa9
    POP EBX                             ; 005dcaaa
    RET                                 ; 005dcaab

