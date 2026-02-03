; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl char * __cdecl support_newmsg_cpp_decryptMessage_FUN_00544270(char *encrypted_msg)
;
; Parameters:
; char *           Stack[0x4]:4   encrypted_msg
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[3]:
;   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 at 004de9a0
;   core_main.c_showDeveloperToolsMenu_FUN_005073a0 at 00507540
;   core_main.c_showLicenseAgreement_FUN_005070f0 at 00507155
;
; Referenced Globals:
;   TerminatedCString s_support_newmsg_cpp_0063e20d
;   TerminatedCString s_decryptMessage_invalid_i_0063e223
;   TerminatedCString s_support_newmsg_cpp_0063e250
;   TerminatedCString s_decryptMessage_error_dec_0063e266
;   TerminatedCString s_support_newmsg_cpp_0063e28e
;   TerminatedCString s_decryptMessage_premature_0063e2a4
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00544270
        ;   Label: support_newmsg.cpp_decryptMessage_FUN_00544270
    PUSH ESI                            ; 00544271
    PUSH EDI                            ; 00544272
    SUB ESP,0x4                         ; 00544273
    MOV EDI,dword ptr [ESP + 0x14]      ; 00544276
    CMP byte ptr [EDI + 0x2],0x3e       ; 0054427a
    JZ 0x005442bd                       ; 0054427e
        ;   XREF to: 005442bd (CONDITIONAL_JUMP)  ; LAB_005442bd
    XOR EBX,EBX                         ; 00544280
    XOR EAX,EAX                         ; 00544282
    MOV BL,byte ptr [EDI + 0x1]         ; 00544284
    MOV AL,byte ptr [EDI]               ; 00544287
    SHL EBX,0x8                         ; 00544289
    ADD EAX,EBX                         ; 0054428c
    MOV dword ptr [ESP],EAX             ; 0054428e
    XOR EAX,EAX                         ; 00544291
    MOV EDX,dword ptr [ESP]             ; 00544293
    MOV AL,byte ptr [EDI + 0x2]         ; 00544296
    XOR EAX,EDX                         ; 00544299
    AND EAX,0xff                        ; 0054429b
    CMP EAX,0x3e                        ; 005442a0
    JNZ 0x005442c7                      ; 005442a3
        ;   XREF to: 005442c7 (CONDITIONAL_JUMP)  ; LAB_005442c7
    MOV ESI,0x2                         ; 005442a5
        ;   Label: LAB_005442a5
    LEA EBX,[EDI + ESI*0x1]             ; 005442aa
    MOV AL,byte ptr [ESP]               ; 005442ad
        ;   Label: LAB_005442ad
    MOV DL,byte ptr [EBX]               ; 005442b0
    XOR DL,AL                           ; 005442b2
    MOV byte ptr [EBX],DL               ; 005442b4
    JNZ 0x005442ec                      ; 005442b6
        ;   XREF to: 005442ec (CONDITIONAL_JUMP)  ; LAB_005442ec
    CMP ESI,0x17                        ; 005442b8
    JL 0x0054432a                       ; 005442bb
        ;   XREF to: 0054432a (CONDITIONAL_JUMP)  ; LAB_0054432a
    LEA EAX,[EDI + 0x17]                ; 005442bd
        ;   Label: LAB_005442bd
    ADD ESP,0x4                         ; 005442c0
    POP EDI                             ; 005442c3
    POP ESI                             ; 005442c4
    POP EBX                             ; 005442c5
    RET                                 ; 005442c6
    MOV ECX,0x63e20d                    ; 005442c7 | = "..\\support\\newmsg.cpp"
        ;   Label: LAB_005442c7
    MOV EBX,0xcc                        ; 005442cc
    PUSH 0x63e223                       ; 005442d1 | = "decryptMessage - invalid initial mask..."
    MOV dword ptr [0x02f0ca48],ECX      ; 005442d6 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 005442dc | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005442e2
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005442e7
    JMP 0x005442a5                      ; 005442ea
        ;   XREF to: 005442a5 (UNCONDITIONAL_JUMP)  ; LAB_005442a5
    IMUL EAX,dword ptr [ESP],0x2ff0bd   ; 005442ec
        ;   Label: LAB_005442ec
    INC EAX                             ; 005442f3
    INC EBX                             ; 005442f4
    AND EAX,0xffff                      ; 005442f5
    INC ESI                             ; 005442fa
    MOV dword ptr [ESP],EAX             ; 005442fb
    CMP ESI,0x186a0                     ; 005442fe
    JLE 0x005442ad                      ; 00544304
        ;   XREF to: 005442ad (CONDITIONAL_JUMP)  ; LAB_005442ad
    MOV EAX,0x63e250                    ; 00544306 | = "..\\support\\newmsg.cpp"
    MOV EDX,0xd7                        ; 0054430b
    PUSH 0x63e266                       ; 00544310 | = "decryptMessage - error decrypting text!"
    MOV [0x02f0ca48],EAX                ; 00544315 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 0054431a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00544320
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00544325
    JMP 0x005442ad                      ; 00544328
        ;   XREF to: 005442ad (UNCONDITIONAL_JUMP)  ; LAB_005442ad
    MOV ECX,0x63e28e                    ; 0054432a | = "..\\support\\newmsg.cpp"
        ;   Label: LAB_0054432a
    MOV EBX,0xea                        ; 0054432f
    PUSH 0x63e2a4                       ; 00544334 | = "decryptMessage - premature null termi..."
    MOV dword ptr [0x02f0ca48],ECX      ; 00544339 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0054433f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00544345
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0054434a
    LEA EAX,[EDI + 0x17]                ; 0054434d
    ADD ESP,0x4                         ; 00544350
    POP EDI                             ; 00544353
    POP ESI                             ; 00544354
    POP EBX                             ; 00544355
    RET                                 ; 00544356

