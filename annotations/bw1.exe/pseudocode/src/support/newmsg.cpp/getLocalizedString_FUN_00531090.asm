; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl support_newmsg_cpp_getLocalizedString_FUN_00531090(char *key)
;
; Parameters:
; char *           Stack[0x4]:4   key
;
; XREF[41]:
;   core_door.cpp_CDoor_getMoveType_FUN_00478b40 at 00478bc6
;   core_fldnotes.cpp_CFieldNotes_draw_FUN_004be0f0 at 004be8d8
;   core_fldnotes.cpp_SNotesEntry_layout_FUN_004bbd10 at 004bbeac
;   core_game.cpp_CGame_displayActStats_FUN_004d8700 at 004d883d
;   core_game.cpp_CGame_finishAct_FUN_004d8a90 at 004d8bd3
;   core_game.cpp_CGame_processCheatCodes_FUN_004d27b0 at 004d280c
;   core_game.cpp_CGame_processHotkeys_FUN_004d1a80 at 004d2225
;   core_game.cpp_CGame_promptLoadGame_FUN_004d85f0 at 004d8695
;   core_game.cpp_CGame_runGameSession_FUN_004cf5e0 at 004cfc20
;   core_game.cpp_CGame_showCustomizableKeys_FUN_004ccc40 at 004cccac
;   ... and 31 more
;
; Referenced Globals:
;   undefined4 DAT_01d7f1bc
;   undefined4 DAT_01d7f1c0
;
; Called Functions:
;   crt_string.c__strcmp_FUN_005c0f80
;   support_newmsg.cpp_findLocalizedString_FUN_00531010
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00531090
        ;   Label: support_newmsg.cpp_getLocalizedString_FUN_00531090
    PUSH EBP                            ; 00531091
    MOV EDI,dword ptr [ESP + 0xc]       ; 00531092
    CMP dword ptr [0x01d7f1bc],0x0      ; 00531096 | DAT_01d7f1bc
    JZ 0x005310b3                       ; 0053109d
        ;   XREF to: 005310b3 (CONDITIONAL_JUMP)  ; LAB_005310b3
    PUSH ESI                            ; 0053109f
    PUSH EBX                            ; 005310a0
    MOV EBX,dword ptr [0x01d7f1c0]      ; 005310a1 | DAT_01d7f1c0
    DEC EBX                             ; 005310a7
    TEST EBX,EBX                        ; 005310a8
    JGE 0x005310b8                      ; 005310aa
        ;   XREF to: 005310b8 (CONDITIONAL_JUMP)  ; LAB_005310b8
    MOV EAX,EDI                         ; 005310ac
    POP EBX                             ; 005310ae
    POP ESI                             ; 005310af
    POP EBP                             ; 005310b0
    POP EDI                             ; 005310b1
    RET                                 ; 005310b2
    MOV EAX,EDI                         ; 005310b3
        ;   Label: LAB_005310b3
    POP EBP                             ; 005310b5
    POP EDI                             ; 005310b6
    RET                                 ; 005310b7
    MOV EDX,EBX                         ; 005310b8
        ;   Label: LAB_005310b8
    MOV EAX,EBX                         ; 005310ba
    SAR EDX,0x1f                        ; 005310bc
    SUB EAX,EDX                         ; 005310bf
    SAR EAX,0x1                         ; 005310c1
    MOV ESI,EAX                         ; 005310c3
    LEA EBP,[EAX*0x4 + 0x0]             ; 005310c5
    MOV ECX,dword ptr [EBP + 0x1d7f1c4] ; 005310cc
    PUSH ECX                            ; 005310d2
    PUSH EDI                            ; 005310d3
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 005310d4
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 005310d9
    TEST EAX,EAX                        ; 005310dc
    JL 0x005310ed                       ; 005310de
        ;   XREF to: 005310ed (CONDITIONAL_JUMP)  ; LAB_005310ed
    JG 0x005310ff                       ; 005310e0
        ;   XREF to: 005310ff (CONDITIONAL_JUMP)  ; LAB_005310ff
    MOV EAX,dword ptr [EBP + 0x1d7f994] ; 005310e2
    POP EBX                             ; 005310e8
    POP ESI                             ; 005310e9
    POP EBP                             ; 005310ea
    POP EDI                             ; 005310eb
    RET                                 ; 005310ec
    DEC ESI                             ; 005310ed
        ;   Label: LAB_005310ed
    PUSH ESI                            ; 005310ee
    PUSH 0x0                            ; 005310ef
    PUSH EDI                            ; 005310f1
    CALL support_newmsg.cpp_findLocalizedString_FUN_00531010 ; 005310f2
        ;   XREF to: 00531010 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_findLocalizedString_FUN_00531010(char * key, int lower_bound, int upper_bound)
    ADD ESP,0xc                         ; 005310f7
    POP EBX                             ; 005310fa
    POP ESI                             ; 005310fb
    POP EBP                             ; 005310fc
    POP EDI                             ; 005310fd
    RET                                 ; 005310fe
    PUSH EBX                            ; 005310ff
        ;   Label: LAB_005310ff
    INC ESI                             ; 00531100
    PUSH ESI                            ; 00531101
    PUSH EDI                            ; 00531102
    CALL support_newmsg.cpp_findLocalizedString_FUN_00531010 ; 00531103
        ;   XREF to: 00531010 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_findLocalizedString_FUN_00531010(char * key, int lower_bound, int upper_bound)
    ADD ESP,0xc                         ; 00531108
    POP EBX                             ; 0053110b
    POP ESI                             ; 0053110c
    POP EBP                             ; 0053110d
    POP EDI                             ; 0053110e
    RET                                 ; 0053110f

