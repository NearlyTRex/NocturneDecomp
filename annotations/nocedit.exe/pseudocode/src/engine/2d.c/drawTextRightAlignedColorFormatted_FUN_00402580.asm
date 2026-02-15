; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_drawTextRightAlignedColorFormatted_FUN_00402580(int x,int y,char *format_string,...)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
; char *           Stack[0xc]:4   format_string
; Local Variables:
; char[4096]       Stack[-0x100c]:4096  local_100c
; va_list_t        Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_texlist.cpp_CTextureList_renderTexture_FUN_005dca30 at 005dca76
;
; Called Functions:
;   crt_stdio.c__vsprintf_FUN_005fdba8
;   engine_2d.c_drawTextRightAlignedColor_FUN_00402530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402580
        ;   Label: engine_2d.c_drawTextRightAlignedColorFormatted_FUN_00402580
    PUSH ESI                            ; 00402581
    SUB ESP,0x1004                      ; 00402582
    LEA EAX,[ESP + 0x101c]              ; 00402588
    MOV dword ptr [ESP + 0x1000],EAX    ; 0040258f
    LEA EAX,[ESP + 0x1000]              ; 00402596
    PUSH EAX                            ; 0040259d
    MOV EDX,dword ptr [ESP + 0x101c]    ; 0040259e
    PUSH EDX                            ; 004025a5
    LEA EAX,[ESP + 0x8]                 ; 004025a6
    PUSH EAX                            ; 004025aa
    CALL crt_stdio.c__vsprintf_FUN_005fdba8 ; 004025ab
        ;   XREF to: 005fdba8 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__vsprintf_FUN_005fdba8(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 004025b0
    MOV EBX,dword ptr [ESP + 0x1014]    ; 004025b3
    PUSH EBX                            ; 004025ba
    MOV ESI,dword ptr [ESP + 0x1014]    ; 004025bb
    PUSH ESI                            ; 004025c2
    LEA EAX,[ESP + 0x8]                 ; 004025c3
    XOR ECX,ECX                         ; 004025c7
    PUSH EAX                            ; 004025c9
    MOV dword ptr [ESP + 0x100c],ECX    ; 004025ca
    CALL engine_2d.c_drawTextRightAlignedColor_FUN_00402530 ; 004025d1
        ;   XREF to: 00402530 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextRightAlignedColor_FUN_00402530(char * text, int x, int y)
    ADD ESP,0xc                         ; 004025d6
    ADD ESP,0x1004                      ; 004025d9
    POP ESI                             ; 004025df
    POP EBX                             ; 004025e0
    RET                                 ; 004025e1

