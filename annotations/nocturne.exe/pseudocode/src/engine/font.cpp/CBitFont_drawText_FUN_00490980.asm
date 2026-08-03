; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_drawText_FUN_00490980(CBitFont *this_ptr,char *text,int x,int y,int color_mode,int color_value)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   y
; int              Stack[0x14]:4   color_mode
; int              Stack[0x18]:4   color_value
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[28]:
;   core_game.cpp_CGame_renderOverlay_FUN_0049ab50 at 0049ac5e
;   core_game.cpp_CGame_showCustomizableKeys_FUN_0049b4e0 at 0049b56d
;   core_game.cpp_drawCreditsLine_FUN_0049b3a0 at 0049b3c1
;   core_game.cpp_drawKeyBindingEntry_FUN_0049b420 at 0049b473
;   core_inv.cpp_FUN_004c2470 at 004c2650
;   core_level.cpp_CLevelLoader_update_FUN_004c59e0 at 004c5f60
;   core_main.c_FUN_004c90e0 at 004c91b5
;   core_main.c_drawCenteredText_FUN_004c8dc0 at 004c8e01
;   core_main.c_showPromoScreen_FUN_004c8eb0 at 004c8f66
;   core_menu.cpp_calibrateGamepad_FUN_004cf8d0 at 004cf962
;   ... and 18 more
;
; Referenced Globals:
;   TerminatedCString s_engine_font_cpp_005818c4
;   TerminatedCString s_CBitFont_drawText_OSFont_005818d7
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   engine_font.cpp_CBitFont_drawCharacter_FUN_004916c0
;   engine_palette.cpp_CFont_drawText_FUN_004eefd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00490980
        ;   Label: engine_font.cpp_CBitFont_drawText_FUN_00490980
    PUSH ESI                            ; 00490981
    PUSH EDI                            ; 00490982
    PUSH EBP                            ; 00490983
    SUB ESP,0xc                         ; 00490984
    MOV EBX,dword ptr [ESP + 0x20]      ; 00490987
    MOV EBP,dword ptr [ESP + 0x28]      ; 0049098b
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0049098f
    CMP dword ptr [EBX + 0x3190],0x0    ; 00490993
    JZ 0x00490a8b                       ; 0049099a
        ;   XREF to: 00490a8b (CONDITIONAL_JUMP)  ; LAB_00490a8b
    CMP dword ptr [EBX + 0x3194],0x0    ; 004909a0
    JZ 0x00490a5a                       ; 004909a7
        ;   XREF to: 00490a5a (CONDITIONAL_JUMP)  ; LAB_00490a5a
    MOV EAX,dword ptr [ESP + 0x24]      ; 004909ad
        ;   Label: LAB_004909ad
    MOV dword ptr [ESP + 0x8],EAX       ; 004909b1
    MOV DL,0xa                          ; 004909b5
        ;   Label: LAB_004909b5
    MOV ESI,dword ptr [ESP + 0x8]       ; 004909b7
    MOV AL,byte ptr [ESI]               ; 004909bb
        ;   Label: LAB_004909bb
    CMP AL,DL                           ; 004909bd
    JZ 0x004909d3                       ; 004909bf
        ;   XREF to: 004909d3 (CONDITIONAL_JUMP)  ; LAB_004909d3
    CMP AL,0x0                          ; 004909c1
    JZ 0x004909d1                       ; 004909c3
        ;   XREF to: 004909d1 (CONDITIONAL_JUMP)  ; LAB_004909d1
    INC ESI                             ; 004909c5
    MOV AL,byte ptr [ESI]               ; 004909c6
    CMP AL,DL                           ; 004909c8
    JZ 0x004909d3                       ; 004909ca
        ;   XREF to: 004909d3 (CONDITIONAL_JUMP)  ; LAB_004909d3
    INC ESI                             ; 004909cc
    CMP AL,0x0                          ; 004909cd
    JNZ 0x004909bb                      ; 004909cf
        ;   XREF to: 004909bb (CONDITIONAL_JUMP)  ; LAB_004909bb
    SUB ESI,ESI                         ; 004909d1
        ;   Label: LAB_004909d1
    MOV dword ptr [ESP + 0x4],ESI       ; 004909d3
        ;   Label: LAB_004909d3
    TEST ESI,ESI                        ; 004909d7
    JZ 0x004909de                       ; 004909d9
        ;   XREF to: 004909de (CONDITIONAL_JUMP)  ; LAB_004909de
    MOV byte ptr [ESI],0x0              ; 004909db
    MOV ESI,dword ptr [ESP + 0x34]      ; 004909de
        ;   Label: LAB_004909de
    PUSH ESI                            ; 004909e2
    MOV EAX,dword ptr [ESP + 0x34]      ; 004909e3
    PUSH EAX                            ; 004909e7
    PUSH EDI                            ; 004909e8
    PUSH EBP                            ; 004909e9
    MOV EDX,dword ptr [ESP + 0x18]      ; 004909ea
    PUSH EDX                            ; 004909ee
    MOV ECX,dword ptr [EBX + 0x3194]    ; 004909ef
    PUSH ECX                            ; 004909f5
    CALL engine_palette.cpp_CFont_drawText_FUN_004eefd0 ; 004909f6
        ;   XREF to: 004eefd0 (UNCONDITIONAL_CALL)  ; int engine_palette.cpp_CFont_drawText_FUN_004eefd0(CFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 004909fb
    MOV ESI,EAX                         ; 004909fe
    CMP EAX,-0x1                        ; 00490a00
    JNZ 0x00490a35                      ; 00490a03
        ;   XREF to: 00490a35 (CONDITIONAL_JUMP)  ; LAB_00490a35
    MOV ESI,dword ptr [ESP + 0x34]      ; 00490a05
    PUSH ESI                            ; 00490a09
    MOV EAX,dword ptr [ESP + 0x34]      ; 00490a0a
    PUSH EAX                            ; 00490a0e
    PUSH EDI                            ; 00490a0f
    PUSH EBP                            ; 00490a10
    MOV EDX,dword ptr [ESP + 0x18]      ; 00490a11
    PUSH EDX                            ; 00490a15
    PUSH EBX                            ; 00490a16
    MOV dword ptr [EBX + 0x3190],0x0    ; 00490a17
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 00490a21
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_00490980(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 00490a26
    MOV ESI,EAX                         ; 00490a29
    MOV dword ptr [EBX + 0x3190],0x1    ; 00490a2b
    MOV ECX,dword ptr [ESP + 0x4]       ; 00490a35
        ;   Label: LAB_00490a35
    TEST ECX,ECX                        ; 00490a39
    JZ 0x00490a81                       ; 00490a3b
        ;   XREF to: 00490a81 (CONDITIONAL_JUMP)  ; LAB_00490a81
    LEA EAX,[ECX + 0x1]                 ; 00490a3d
    MOV byte ptr [ECX],0xa              ; 00490a40
    MOV dword ptr [ESP + 0x8],EAX       ; 00490a43
    MOV ESI,dword ptr [EBX + 0x3170]    ; 00490a47
    ADD ESI,dword ptr [EBX + 0x3178]    ; 00490a4d
    ADD EDI,ESI                         ; 00490a53
    JMP 0x004909b5                      ; 00490a55
        ;   XREF to: 004909b5 (UNCONDITIONAL_JUMP)  ; LAB_004909b5
    MOV ESI,0x5818c4                    ; 00490a5a | = "..\\engine\\font.cpp"
        ;   Label: LAB_00490a5a
    MOV EAX,0x267                       ; 00490a5f
    PUSH 0x5818d7                       ; 00490a64 | = "CBitFont::drawText - OSFont not set b..."
    MOV dword ptr [0x01cc4800],ESI      ; 00490a69 | g_CHAR_PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 00490a6f | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00490a74
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00490a79
    JMP 0x004909ad                      ; 00490a7c
        ;   XREF to: 004909ad (UNCONDITIONAL_JUMP)  ; LAB_004909ad
    MOV EAX,ESI                         ; 00490a81
        ;   Label: LAB_00490a81
    ADD ESP,0xc                         ; 00490a83
    POP EBP                             ; 00490a86
    POP EDI                             ; 00490a87
    POP ESI                             ; 00490a88
    POP EBX                             ; 00490a89
    RET                                 ; 00490a8a
    MOV dword ptr [ESP],EBP             ; 00490a8b
        ;   Label: LAB_00490a8b
    MOV ESI,dword ptr [ESP + 0x24]      ; 00490a8e
        ;   Label: LAB_00490a8e
    MOVZX ESI,byte ptr [ESI]            ; 00490a92
    TEST ESI,ESI                        ; 00490a95
    JZ 0x00490ad6                       ; 00490a97
        ;   XREF to: 00490ad6 (CONDITIONAL_JUMP)  ; LAB_00490ad6
    CMP ESI,0xd                         ; 00490a99
    JNZ 0x00490aa4                      ; 00490a9c
        ;   XREF to: 00490aa4 (CONDITIONAL_JUMP)  ; LAB_00490aa4
    INC dword ptr [ESP + 0x24]          ; 00490a9e
        ;   Label: LAB_00490a9e
    JMP 0x00490a8e                      ; 00490aa2
        ;   XREF to: 00490a8e (UNCONDITIONAL_JUMP)  ; LAB_00490a8e
    CMP ESI,0xa                         ; 00490aa4
        ;   Label: LAB_00490aa4
    JNZ 0x00490abc                      ; 00490aa7
        ;   XREF to: 00490abc (CONDITIONAL_JUMP)  ; LAB_00490abc
    MOV ESI,dword ptr [EBX + 0x3170]    ; 00490aa9
    ADD ESI,dword ptr [EBX + 0x3178]    ; 00490aaf
    MOV EBP,dword ptr [ESP]             ; 00490ab5
    ADD EDI,ESI                         ; 00490ab8
    JMP 0x00490a9e                      ; 00490aba
        ;   XREF to: 00490a9e (UNCONDITIONAL_JUMP)  ; LAB_00490a9e
    MOV ECX,dword ptr [ESP + 0x34]      ; 00490abc
        ;   Label: LAB_00490abc
    PUSH ECX                            ; 00490ac0
    MOV EAX,dword ptr [ESP + 0x34]      ; 00490ac1
    PUSH EAX                            ; 00490ac5
    PUSH EDI                            ; 00490ac6
    PUSH EBP                            ; 00490ac7
    PUSH ESI                            ; 00490ac8
    PUSH EBX                            ; 00490ac9
    CALL engine_font.cpp_CBitFont_drawCharacter_FUN_004916c0 ; 00490aca
        ;   XREF to: 004916c0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawCharacter_FUN_004916c0(CBitFont * this_ptr, int character_code, int x, int y, ...)
    ADD ESP,0x18                        ; 00490acf
    ADD EBP,EAX                         ; 00490ad2
    JMP 0x00490a9e                      ; 00490ad4
        ;   XREF to: 00490a9e (UNCONDITIONAL_JUMP)  ; LAB_00490a9e
    MOV EDX,dword ptr [ESP]             ; 00490ad6
        ;   Label: LAB_00490ad6
    MOV ESI,EBP                         ; 00490ad9
    SUB ESI,EDX                         ; 00490adb
    MOV EAX,ESI                         ; 00490add
    ADD ESP,0xc                         ; 00490adf
    POP EBP                             ; 00490ae2
    POP EDI                             ; 00490ae3
    POP ESI                             ; 00490ae4
    POP EBX                             ; 00490ae5
    RET                                 ; 00490ae6

