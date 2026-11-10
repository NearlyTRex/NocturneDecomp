; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_removePlayer_FUN_005071a0(CNetGame *this_ptr,int player_index)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   player_index
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_00506b00 at 00506cf3
;   core_netgame.cpp_CNetGame_processPacket_FUN_00504d60 at 005055b0
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_005cad90
;   TerminatedCString s_CNetGame_removePlayer_in_005cada4
;   TerminatedCString s_core_netgame_cpp_005cadd2
;   TerminatedCString s_CNetGame_removePlayer_tr_005cade6
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01dc2690
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_string.c_memmove_FUN_005a54c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005071a0
        ;   Label: core_netgame.cpp_CNetGame_removePlayer_FUN_005071a0
    PUSH ESI                            ; 005071a1
    PUSH EDI                            ; 005071a2
    PUSH EBP                            ; 005071a3
    SUB ESP,0x4                         ; 005071a4
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005071a7
    TEST EDX,EDX                        ; 005071ab
    JL 0x005071b8                       ; 005071ad
        ;   XREF to: 005071b8 (CONDITIONAL_JUMP)  ; LAB_005071b8
    MOV EBX,dword ptr [ESP + 0x18]      ; 005071af
    CMP EDX,dword ptr [EBX + 0x1c]      ; 005071b3
    JL 0x005071db                       ; 005071b6
        ;   XREF to: 005071db (CONDITIONAL_JUMP)  ; LAB_005071db
    MOV EBX,0x5cad90                    ; 005071b8 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_005071b8
    MOV ESI,0x862                       ; 005071bd
    PUSH 0x5cada4                       ; 005071c2 | = "CNetGame::removePlayer - invalid play..."
    MOV dword ptr [0x01d71de0],EBX      ; 005071c7 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 005071cd | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 005071d3
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 005071d8
    MOV EBX,dword ptr [ESP + 0x18]      ; 005071db
        ;   Label: LAB_005071db
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005071df
    CMP EAX,dword ptr [EBX + 0x124]     ; 005071e3
    JNZ 0x0050720d                      ; 005071e9
        ;   XREF to: 0050720d (CONDITIONAL_JUMP)  ; LAB_0050720d
    MOV EBP,0x5cadd2                    ; 005071eb | = "..\\core\\netgame.cpp"
    MOV EAX,0x869                       ; 005071f0
    PUSH 0x5cade6                       ; 005071f5 | = "CNetGame::removePlayer - tried to rem..."
    MOV dword ptr [0x01d71de0],EBP      ; 005071fa | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 00507200 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00507205
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0050720a
    MOV EBX,dword ptr [ESP + 0x18]      ; 0050720d
        ;   Label: LAB_0050720d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00507211
    CMP EAX,dword ptr [EBX + 0x120]     ; 00507215
    JNZ 0x00507227                      ; 0050721b
        ;   XREF to: 00507227 (CONDITIONAL_JUMP)  ; LAB_00507227
    MOV dword ptr [EBX + 0x120],0xffffffff ; 0050721d
    MOV EBX,dword ptr [ESP + 0x18]      ; 00507227
        ;   Label: LAB_00507227
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0050722b
    CMP EAX,dword ptr [EBX + 0x124]     ; 0050722f
    JNZ 0x00507241                      ; 00507235
        ;   XREF to: 00507241 (CONDITIONAL_JUMP)  ; LAB_00507241
    MOV dword ptr [EBX + 0x124],0xffffffff ; 00507237
    MOV EAX,dword ptr [ESP + 0x18]      ; 00507241
        ;   Label: LAB_00507241
    MOV EBX,dword ptr [EAX + 0x1c]      ; 00507245
    DEC EBX                             ; 00507248
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00507249
    MOV dword ptr [EAX + 0x1c],EBX      ; 0050724d
    MOV EAX,EBX                         ; 00507250
    SUB EAX,ESI                         ; 00507252
    SHL EAX,0x7                         ; 00507254
    PUSH EAX                            ; 00507257
    MOV EAX,ESI                         ; 00507258
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0050725a
    SHL EAX,0x7                         ; 0050725e
    ADD EBX,0x20                        ; 00507261
    LEA ESI,[EAX + 0x80]                ; 00507264
    ADD ESI,EBX                         ; 0050726a
    PUSH ESI                            ; 0050726c
    ADD EAX,EBX                         ; 0050726d
    PUSH EAX                            ; 0050726f
    XOR EDI,EDI                         ; 00507270
    CALL crt_string.c_memmove_FUN_005a54c0 ; 00507272
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    MOV EBP,dword ptr [0x01dc2690]      ; 00507277 | DAT_01dc2690
    ADD ESP,0xc                         ; 0050727d
    TEST EBP,EBP                        ; 00507280
    JLE 0x00507320                      ; 00507282
        ;   XREF to: 00507320 (CONDITIONAL_JUMP)  ; LAB_00507320
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00507288
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0050728c
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00507290
    SHL EBP,0x2                         ; 00507294
    ADD ESI,0x8                         ; 00507297
    ADD EBX,0x9                         ; 0050729a
    LEA EAX,[EBP + 0xc]                 ; 0050729d
    ADD ESI,0x1dc2694                   ; 005072a0
    ADD EBX,0x1dc2694                   ; 005072a6
    ADD EAX,0x1dc2694                   ; 005072ac
    ADD EBP,0x10                        ; 005072b1
    MOV dword ptr [ESP],EAX             ; 005072b4
    ADD EBP,0x1dc2694                   ; 005072b7
    MOV EAX,dword ptr [ESP + 0x18]      ; 005072bd
        ;   Label: LAB_005072bd
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005072c1
    MOV EAX,dword ptr [EAX + 0x1c]      ; 005072c5
    SUB EAX,EDX                         ; 005072c8
    PUSH EAX                            ; 005072ca
    PUSH EBX                            ; 005072cb
    PUSH ESI                            ; 005072cc
    CALL crt_string.c_memmove_FUN_005a54c0 ; 005072cd
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 005072d2
    MOV EAX,dword ptr [ESP + 0x18]      ; 005072d5
    MOV ECX,dword ptr [ESP + 0x1c]      ; 005072d9
    MOV EAX,dword ptr [EAX + 0x1c]      ; 005072dd
    SUB EAX,ECX                         ; 005072e0
    SHL EAX,0x2                         ; 005072e2
    PUSH EAX                            ; 005072e5
    PUSH EBP                            ; 005072e6
    MOV EAX,dword ptr [ESP + 0x8]       ; 005072e7
    PUSH EAX                            ; 005072eb
    INC EDI                             ; 005072ec
    ADD EBX,0x114                       ; 005072ed
    CALL crt_string.c_memmove_FUN_005a54c0 ; 005072f3
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 005072f8
    ADD ESI,0x114                       ; 005072fb
    MOV EDX,dword ptr [ESP]             ; 00507301
    ADD EBP,0x114                       ; 00507304
    ADD EDX,0x114                       ; 0050730a
    MOV ECX,dword ptr [0x01dc2690]      ; 00507310 | DAT_01dc2690
    MOV dword ptr [ESP],EDX             ; 00507316
    CMP EDI,ECX                         ; 00507319
    JL 0x005072bd                       ; 0050731b
        ;   XREF to: 005072bd (CONDITIONAL_JUMP)  ; LAB_005072bd
    LEA EAX,[EAX]                       ; 0050731d
    MOV EBX,dword ptr [ESP + 0x18]      ; 00507320
        ;   Label: LAB_00507320
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00507324
    MOV ESI,dword ptr [EBX + 0x120]     ; 00507328
    CMP EAX,ESI                         ; 0050732e
    JGE 0x0050733b                      ; 00507330
        ;   XREF to: 0050733b (CONDITIONAL_JUMP)  ; LAB_0050733b
    LEA EDI,[ESI + -0x1]                ; 00507332
    MOV dword ptr [EBX + 0x120],EDI     ; 00507335
    MOV EBX,dword ptr [ESP + 0x18]      ; 0050733b
        ;   Label: LAB_0050733b
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0050733f
    MOV EBP,dword ptr [EBX + 0x124]     ; 00507343
    CMP EAX,EBP                         ; 00507349
    JL 0x00507355                       ; 0050734b
        ;   XREF to: 00507355 (CONDITIONAL_JUMP)  ; LAB_00507355
    ADD ESP,0x4                         ; 0050734d
    POP EBP                             ; 00507350
    POP EDI                             ; 00507351
    POP ESI                             ; 00507352
    POP EBX                             ; 00507353
    RET                                 ; 00507354
    LEA EDX,[EBP + -0x1]                ; 00507355
        ;   Label: LAB_00507355
    MOV dword ptr [EBX + 0x124],EDX     ; 00507358
    ADD ESP,0x4                         ; 0050735e
    POP EBP                             ; 00507361
    POP EDI                             ; 00507362
    POP ESI                             ; 00507363
    POP EBX                             ; 00507364
    RET                                 ; 00507365

