; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80 (CBitFont *this_ptr,char *text_string,int x_pos,int y_pos,int color_mode,int color_value)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text_string
; int              Stack[0xc]:4   x_pos
; int              Stack[0x10]:4   y_pos
; int              Stack[0x14]:4   color_mode
; int              Stack[0x18]:4   color_value
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[28]:
;   core_game.cpp_CGame_renderOverlay_FUN_004d8040 at 004d83a7
;   core_game.cpp_CGame_showCustomizableKeys_FUN_004d89d0 at 004d9a00
;   core_game.cpp_FUN_004d8890 at 004d88b1
;   core_game.cpp_FUN_004d8910 at 004d8963
;   core_inv.cpp_CInventory_renderAllItems_FUN_00500690 at 00500acd
;   core_level.cpp_CLevelLoader_update_FUN_00504160 at 005046e0
;   core_main.c_drawCenteredText_FUN_00508250 at 00508291
;   core_main.c_finalizeGameSystems_FUN_00508570 at 00508774
;   core_main.c_showDeveloperToolsMenu_FUN_005073a0 at 005076db
;   core_main.c_showLicenseAgreement_FUN_005070f0 at 005072a0
;   ... and 18 more
;
; Referenced Globals:
;   TerminatedCString s_engine_font_cpp_0062a691
;   TerminatedCString s_CBitFont_drawText_OSFont_0062a6a4
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0
;   engine_palette.cpp_CFont_drawText_FUN_00544ed0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cda80
        ;   Label: engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
    PUSH ESI                            ; 004cda81
    PUSH EDI                            ; 004cda82
    PUSH EBP                            ; 004cda83
    SUB ESP,0xc                         ; 004cda84
    MOV EBX,dword ptr [ESP + 0x20]      ; 004cda87
    MOV EBP,dword ptr [ESP + 0x28]      ; 004cda8b
    MOV EDI,dword ptr [ESP + 0x2c]      ; 004cda8f
    CMP dword ptr [EBX + 0x3190],0x0    ; 004cda93
    JZ 0x004cdb8b                       ; 004cda9a
        ;   XREF to: 004cdb8b (CONDITIONAL_JUMP)  ; LAB_004cdb8b
    CMP dword ptr [EBX + 0x3194],0x0    ; 004cdaa0
    JZ 0x004cdb5a                       ; 004cdaa7
        ;   XREF to: 004cdb5a (CONDITIONAL_JUMP)  ; LAB_004cdb5a
    MOV EAX,dword ptr [ESP + 0x24]      ; 004cdaad
        ;   Label: LAB_004cdaad
    MOV dword ptr [ESP + 0x8],EAX       ; 004cdab1
    MOV DL,0xa                          ; 004cdab5
        ;   Label: LAB_004cdab5
    MOV ESI,dword ptr [ESP + 0x8]       ; 004cdab7
    MOV AL,byte ptr [ESI]               ; 004cdabb
        ;   Label: LAB_004cdabb
    CMP AL,DL                           ; 004cdabd
    JZ 0x004cdad3                       ; 004cdabf
        ;   XREF to: 004cdad3 (CONDITIONAL_JUMP)  ; LAB_004cdad3
    CMP AL,0x0                          ; 004cdac1
    JZ 0x004cdad1                       ; 004cdac3
        ;   XREF to: 004cdad1 (CONDITIONAL_JUMP)  ; LAB_004cdad1
    INC ESI                             ; 004cdac5
    MOV AL,byte ptr [ESI]               ; 004cdac6
    CMP AL,DL                           ; 004cdac8
    JZ 0x004cdad3                       ; 004cdaca
        ;   XREF to: 004cdad3 (CONDITIONAL_JUMP)  ; LAB_004cdad3
    INC ESI                             ; 004cdacc
    CMP AL,0x0                          ; 004cdacd
    JNZ 0x004cdabb                      ; 004cdacf
        ;   XREF to: 004cdabb (CONDITIONAL_JUMP)  ; LAB_004cdabb
    SUB ESI,ESI                         ; 004cdad1
        ;   Label: LAB_004cdad1
    MOV dword ptr [ESP + 0x4],ESI       ; 004cdad3
        ;   Label: LAB_004cdad3
    TEST ESI,ESI                        ; 004cdad7
    JZ 0x004cdade                       ; 004cdad9
        ;   XREF to: 004cdade (CONDITIONAL_JUMP)  ; LAB_004cdade
    MOV byte ptr [ESI],0x0              ; 004cdadb
    MOV ESI,dword ptr [ESP + 0x34]      ; 004cdade
        ;   Label: LAB_004cdade
    PUSH ESI                            ; 004cdae2
    MOV EAX,dword ptr [ESP + 0x34]      ; 004cdae3
    PUSH EAX                            ; 004cdae7
    PUSH EDI                            ; 004cdae8
    PUSH EBP                            ; 004cdae9
    MOV EDX,dword ptr [ESP + 0x18]      ; 004cdaea
    PUSH EDX                            ; 004cdaee
    MOV ECX,dword ptr [EBX + 0x3194]    ; 004cdaef
    PUSH ECX                            ; 004cdaf5
    CALL engine_palette.cpp_CFont_drawText_FUN_00544ed0 ; 004cdaf6
        ;   XREF to: 00544ed0 (UNCONDITIONAL_CALL)  ; void engine_palette.cpp_CFont_drawText_FUN_00544ed0(CFont * this_ptr, int param1, int param2, int param3, ...)
    ADD ESP,0x18                        ; 004cdafb
    MOV ESI,EAX                         ; 004cdafe
    CMP EAX,-0x1                        ; 004cdb00
    JNZ 0x004cdb35                      ; 004cdb03
        ;   XREF to: 004cdb35 (CONDITIONAL_JUMP)  ; LAB_004cdb35
    MOV ESI,dword ptr [ESP + 0x34]      ; 004cdb05
    PUSH ESI                            ; 004cdb09
    MOV EAX,dword ptr [ESP + 0x34]      ; 004cdb0a
    PUSH EAX                            ; 004cdb0e
    PUSH EDI                            ; 004cdb0f
    PUSH EBP                            ; 004cdb10
    MOV EDX,dword ptr [ESP + 0x18]      ; 004cdb11
    PUSH EDX                            ; 004cdb15
    PUSH EBX                            ; 004cdb16
    MOV dword ptr [EBX + 0x3190],0x0    ; 004cdb17
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 004cdb21
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
    ADD ESP,0x18                        ; 004cdb26
    MOV ESI,EAX                         ; 004cdb29
    MOV dword ptr [EBX + 0x3190],0x1    ; 004cdb2b
    MOV ECX,dword ptr [ESP + 0x4]       ; 004cdb35
        ;   Label: LAB_004cdb35
    TEST ECX,ECX                        ; 004cdb39
    JZ 0x004cdb81                       ; 004cdb3b
        ;   XREF to: 004cdb81 (CONDITIONAL_JUMP)  ; LAB_004cdb81
    LEA EAX,[ECX + 0x1]                 ; 004cdb3d
    MOV byte ptr [ECX],0xa              ; 004cdb40
    MOV dword ptr [ESP + 0x8],EAX       ; 004cdb43
    MOV ESI,dword ptr [EBX + 0x3170]    ; 004cdb47
    ADD ESI,dword ptr [EBX + 0x3178]    ; 004cdb4d
    ADD EDI,ESI                         ; 004cdb53
    JMP 0x004cdab5                      ; 004cdb55
        ;   XREF to: 004cdab5 (UNCONDITIONAL_JUMP)  ; LAB_004cdab5
    MOV ESI,0x62a691                    ; 004cdb5a | = "..\\engine\\font.cpp"
        ;   Label: LAB_004cdb5a
    MOV EAX,0x266                       ; 004cdb5f
    PUSH 0x62a6a4                       ; 004cdb64 | = "CBitFont::drawText - OSFont not set b..."
    MOV dword ptr [0x02f0ca48],ESI      ; 004cdb69 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 004cdb6f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004cdb74
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004cdb79
    JMP 0x004cdaad                      ; 004cdb7c
        ;   XREF to: 004cdaad (UNCONDITIONAL_JUMP)  ; LAB_004cdaad
    MOV EAX,ESI                         ; 004cdb81
        ;   Label: LAB_004cdb81
    ADD ESP,0xc                         ; 004cdb83
    POP EBP                             ; 004cdb86
    POP EDI                             ; 004cdb87
    POP ESI                             ; 004cdb88
    POP EBX                             ; 004cdb89
    RET                                 ; 004cdb8a
    MOV dword ptr [ESP],EBP             ; 004cdb8b
        ;   Label: LAB_004cdb8b
    MOV ESI,dword ptr [ESP + 0x24]      ; 004cdb8e
        ;   Label: LAB_004cdb8e
    MOVZX ESI,byte ptr [ESI]            ; 004cdb92
    TEST ESI,ESI                        ; 004cdb95
    JZ 0x004cdbd6                       ; 004cdb97
        ;   XREF to: 004cdbd6 (CONDITIONAL_JUMP)  ; LAB_004cdbd6
    CMP ESI,0xd                         ; 004cdb99
    JNZ 0x004cdba4                      ; 004cdb9c
        ;   XREF to: 004cdba4 (CONDITIONAL_JUMP)  ; LAB_004cdba4
    INC dword ptr [ESP + 0x24]          ; 004cdb9e
        ;   Label: LAB_004cdb9e
    JMP 0x004cdb8e                      ; 004cdba2
        ;   XREF to: 004cdb8e (UNCONDITIONAL_JUMP)  ; LAB_004cdb8e
    CMP ESI,0xa                         ; 004cdba4
        ;   Label: LAB_004cdba4
    JNZ 0x004cdbbc                      ; 004cdba7
        ;   XREF to: 004cdbbc (CONDITIONAL_JUMP)  ; LAB_004cdbbc
    MOV ESI,dword ptr [EBX + 0x3170]    ; 004cdba9
    ADD ESI,dword ptr [EBX + 0x3178]    ; 004cdbaf
    MOV EBP,dword ptr [ESP]             ; 004cdbb5
    ADD EDI,ESI                         ; 004cdbb8
    JMP 0x004cdb9e                      ; 004cdbba
        ;   XREF to: 004cdb9e (UNCONDITIONAL_JUMP)  ; LAB_004cdb9e
    MOV ECX,dword ptr [ESP + 0x34]      ; 004cdbbc
        ;   Label: LAB_004cdbbc
    PUSH ECX                            ; 004cdbc0
    MOV EAX,dword ptr [ESP + 0x34]      ; 004cdbc1
    PUSH EAX                            ; 004cdbc5
    PUSH EDI                            ; 004cdbc6
    PUSH EBP                            ; 004cdbc7
    PUSH ESI                            ; 004cdbc8
    PUSH EBX                            ; 004cdbc9
    CALL engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0 ; 004cdbca
        ;   XREF to: 004ce7a0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0(CBitFont * this_ptr, int character_code, int x_pos, int y_pos, ...)
    ADD ESP,0x18                        ; 004cdbcf
    ADD EBP,EAX                         ; 004cdbd2
    JMP 0x004cdb9e                      ; 004cdbd4
        ;   XREF to: 004cdb9e (UNCONDITIONAL_JUMP)  ; LAB_004cdb9e
    MOV EDX,dword ptr [ESP]             ; 004cdbd6
        ;   Label: LAB_004cdbd6
    MOV ESI,EBP                         ; 004cdbd9
    SUB ESI,EDX                         ; 004cdbdb
    MOV EAX,ESI                         ; 004cdbdd
    ADD ESP,0xc                         ; 004cdbdf
    POP EBP                             ; 004cdbe2
    POP EDI                             ; 004cdbe3
    POP ESI                             ; 004cdbe4
    POP EBX                             ; 004cdbe5
    RET                                 ; 004cdbe6

