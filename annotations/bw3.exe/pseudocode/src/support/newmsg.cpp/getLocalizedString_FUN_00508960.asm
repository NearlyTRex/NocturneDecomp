; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl support_newmsg_cpp_getLocalizedString_FUN_00508960(char *key)
;
; Parameters:
; char *           Stack[0x4]:4   key
;
; XREF[40]:
;   core_door.cpp_CDoor_getMoveType_FUN_00465380 at 00465406
;   core_fldnotes.cpp_FUN_004abe00 at 004ac624
;   core_fldnotes.cpp_SNotesEntry_layout_FUN_004a9950 at 004a9b02
;   core_game.cpp_CGame_displayActStats_FUN_004bfb50 at 004bfc8d
;   core_game.cpp_CGame_finishAct_FUN_004bfee0 at 004c0023
;   core_game.cpp_CGame_processCheatCodes_FUN_004bb100 at 004bb15c
;   core_game.cpp_CGame_processHotkeys_FUN_004ba540 at 004bacb9
;   core_game.cpp_CGame_promptLoadGame_FUN_004bfa40 at 004bfae5
;   core_game.cpp_CGame_runGameSession_FUN_004b7f90 at 004b88fb
;   core_game.cpp_FUN_004b51e0 at 004b524c
;   ... and 30 more
;
; Referenced Globals:
;   undefined4 DAT_01dd4894
;   undefined4 DAT_01dd4898
;
; Called Functions:
;   crt_string.c__strcmp_FUN_005a3d00
;   support_newmsg.cpp_findLocalizedString_FUN_005088e0
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00508960
        ;   Label: support_newmsg.cpp_getLocalizedString_FUN_00508960
    PUSH EBP                            ; 00508961
    MOV EDI,dword ptr [ESP + 0xc]       ; 00508962
    CMP dword ptr [0x01dd4894],0x0      ; 00508966 | DAT_01dd4894
    JZ 0x00508983                       ; 0050896d
        ;   XREF to: 00508983 (CONDITIONAL_JUMP)  ; LAB_00508983
    PUSH ESI                            ; 0050896f
    PUSH EBX                            ; 00508970
    MOV EBX,dword ptr [0x01dd4898]      ; 00508971 | DAT_01dd4898
    DEC EBX                             ; 00508977
    TEST EBX,EBX                        ; 00508978
    JGE 0x00508988                      ; 0050897a
        ;   XREF to: 00508988 (CONDITIONAL_JUMP)  ; LAB_00508988
    MOV EAX,EDI                         ; 0050897c
    POP EBX                             ; 0050897e
    POP ESI                             ; 0050897f
    POP EBP                             ; 00508980
    POP EDI                             ; 00508981
    RET                                 ; 00508982
    MOV EAX,EDI                         ; 00508983
        ;   Label: LAB_00508983
    POP EBP                             ; 00508985
    POP EDI                             ; 00508986
    RET                                 ; 00508987
    MOV EDX,EBX                         ; 00508988
        ;   Label: LAB_00508988
    MOV EAX,EBX                         ; 0050898a
    SAR EDX,0x1f                        ; 0050898c
    SUB EAX,EDX                         ; 0050898f
    SAR EAX,0x1                         ; 00508991
    MOV ESI,EAX                         ; 00508993
    LEA EBP,[EAX*0x4 + 0x0]             ; 00508995
    MOV ECX,dword ptr [EBP + 0x1dd489c] ; 0050899c
    PUSH ECX                            ; 005089a2
    PUSH EDI                            ; 005089a3
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 005089a4
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 005089a9
    TEST EAX,EAX                        ; 005089ac
    JL 0x005089bd                       ; 005089ae
        ;   XREF to: 005089bd (CONDITIONAL_JUMP)  ; LAB_005089bd
    JG 0x005089cf                       ; 005089b0
        ;   XREF to: 005089cf (CONDITIONAL_JUMP)  ; LAB_005089cf
    MOV EAX,dword ptr [EBP + 0x1dd506c] ; 005089b2
    POP EBX                             ; 005089b8
    POP ESI                             ; 005089b9
    POP EBP                             ; 005089ba
    POP EDI                             ; 005089bb
    RET                                 ; 005089bc
    DEC ESI                             ; 005089bd
        ;   Label: LAB_005089bd
    PUSH ESI                            ; 005089be
    PUSH 0x0                            ; 005089bf
    PUSH EDI                            ; 005089c1
    CALL support_newmsg.cpp_findLocalizedString_FUN_005088e0 ; 005089c2
        ;   XREF to: 005088e0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_findLocalizedString_FUN_005088e0(char * key, int lower_bound, int upper_bound)
    ADD ESP,0xc                         ; 005089c7
    POP EBX                             ; 005089ca
    POP ESI                             ; 005089cb
    POP EBP                             ; 005089cc
    POP EDI                             ; 005089cd
    RET                                 ; 005089ce
    PUSH EBX                            ; 005089cf
        ;   Label: LAB_005089cf
    INC ESI                             ; 005089d0
    PUSH ESI                            ; 005089d1
    PUSH EDI                            ; 005089d2
    CALL support_newmsg.cpp_findLocalizedString_FUN_005088e0 ; 005089d3
        ;   XREF to: 005088e0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_findLocalizedString_FUN_005088e0(char * key, int lower_bound, int upper_bound)
    ADD ESP,0xc                         ; 005089d8
    POP EBX                             ; 005089db
    POP ESI                             ; 005089dc
    POP EBP                             ; 005089dd
    POP EDI                             ; 005089de
    RET                                 ; 005089df

