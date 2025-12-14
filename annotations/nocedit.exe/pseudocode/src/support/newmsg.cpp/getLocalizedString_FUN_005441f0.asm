; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
;
; Parameters:
; char *           Stack[0x4]:4   key
;
; XREF[40]:
;   core_door.cpp_CDoor_getMoveType_FUN_00481070 at 00481098
;   core_game.cpp_CGame_FUN_004e36f0 at 004e3795
;   core_game.cpp_CGame_displayActStats_FUN_004e3800 at 004e3a20
;   core_game.cpp_CGame_finishAct_FUN_004e3b90 at 004e3da6
;   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 at 004e17e6
;   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 at 004deb60
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004daa3f
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004db7e4
;   core_game.cpp_CGame_saveGame_FUN_004e0cd0 at 004e120b
;   core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0 at 004e22a1
;   ... and 30 more
;
; Referenced Globals:
;   int g_LocalizationLoaded
;   int g_LocalizedStringCount
;   char*[500] g_MessageKeys
;   char*[500] g_MessageTexts
;
; Called Functions:
;   crt_string.c_strcmp_FUN_005fef20
;   support_newmsg.cpp_findLocalizedString_FUN_00544170
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005441f0
        ;   Label: support_newmsg.cpp_getLocalizedString_FUN_005441f0
    PUSH EBP                            ; 005441f1
    MOV EDI,dword ptr [ESP + 0xc]       ; 005441f2
    CMP dword ptr [0x02fa8cd4],0x0      ; 005441f6 | g_LocalizationLoaded
    JZ 0x00544213                       ; 005441fd
        ;   XREF to: 00544213 (CONDITIONAL_JUMP)  ; LAB_00544213
    PUSH ESI                            ; 005441ff
    PUSH EBX                            ; 00544200
    MOV EBX,dword ptr [0x02fa8cd8]      ; 00544201 | g_LocalizedStringCount
    DEC EBX                             ; 00544207
    TEST EBX,EBX                        ; 00544208
    JGE 0x00544218                      ; 0054420a
        ;   XREF to: 00544218 (CONDITIONAL_JUMP)  ; LAB_00544218
    MOV EAX,EDI                         ; 0054420c
    POP EBX                             ; 0054420e
    POP ESI                             ; 0054420f
    POP EBP                             ; 00544210
    POP EDI                             ; 00544211
    RET                                 ; 00544212
    MOV EAX,EDI                         ; 00544213
        ;   Label: LAB_00544213
    POP EBP                             ; 00544215
    POP EDI                             ; 00544216
    RET                                 ; 00544217
    MOV EDX,EBX                         ; 00544218
        ;   Label: LAB_00544218
    MOV EAX,EBX                         ; 0054421a
    SAR EDX,0x1f                        ; 0054421c
    SUB EAX,EDX                         ; 0054421f
    SAR EAX,0x1                         ; 00544221
    MOV ESI,EAX                         ; 00544223
    LEA EBP,[EAX*0x4 + 0x0]             ; 00544225
    MOV ECX,dword ptr [EBP + 0x2fa8cdc] ; 0054422c | g_MessageKeys
    PUSH ECX                            ; 00544232
    PUSH EDI                            ; 00544233
    CALL crt_string.c_strcmp_FUN_005fef20 ; 00544234
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 00544239
    TEST EAX,EAX                        ; 0054423c
    JL 0x0054424d                       ; 0054423e
        ;   XREF to: 0054424d (CONDITIONAL_JUMP)  ; LAB_0054424d
    JG 0x0054425f                       ; 00544240
        ;   XREF to: 0054425f (CONDITIONAL_JUMP)  ; LAB_0054425f
    MOV EAX,dword ptr [EBP + 0x2fa94ac] ; 00544242 | g_MessageTexts
    POP EBX                             ; 00544248
    POP ESI                             ; 00544249
    POP EBP                             ; 0054424a
    POP EDI                             ; 0054424b
    RET                                 ; 0054424c
    DEC ESI                             ; 0054424d
        ;   Label: LAB_0054424d
    PUSH ESI                            ; 0054424e
    PUSH 0x0                            ; 0054424f
    PUSH EDI                            ; 00544251
    CALL support_newmsg.cpp_findLocalizedString_FUN_00544170 ; 00544252
        ;   XREF to: 00544170 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_findLocalizedString_FUN_00544170(char * key, int lower_bound, int upper_bound)
    ADD ESP,0xc                         ; 00544257
    POP EBX                             ; 0054425a
    POP ESI                             ; 0054425b
    POP EBP                             ; 0054425c
    POP EDI                             ; 0054425d
    RET                                 ; 0054425e
    PUSH EBX                            ; 0054425f
        ;   Label: LAB_0054425f
    INC ESI                             ; 00544260
    PUSH ESI                            ; 00544261
    PUSH EDI                            ; 00544262
    CALL support_newmsg.cpp_findLocalizedString_FUN_00544170 ; 00544263
        ;   XREF to: 00544170 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_findLocalizedString_FUN_00544170(char * key, int lower_bound, int upper_bound)
    ADD ESP,0xc                         ; 00544268
    POP EBX                             ; 0054426b
    POP ESI                             ; 0054426c
    POP EBP                             ; 0054426d
    POP EDI                             ; 0054426e
    RET                                 ; 0054426f

