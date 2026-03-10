; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_checkCheatAndGiveWeapon_FUN_004dd9d0(char *cheat_code,char *class_name,char *message)
;
; Parameters:
; char *           Stack[0x4]:4   cheat_code
; char *           Stack[0x8]:4   class_name
; char *           Stack[0xc]:4   message
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_cheat_1_wav_0062b9dd
;   CGame* g_CGamePtr = 02d81a9c
;   CSound* g_CSoundPtr = 03f6af64
;   CGame g_CGameInstance
;   undefined1 DAT_02d831d6
;   char[20] g_InputHistory
;   undefined4 CHAR_ARRAY_02d831d8
;   CSound g_CSoundInstance
;
; Called Functions:
;   core_game.cpp_CGame_displayMessage_FUN_004d7f20
;   core_game.cpp_giveHeroWeapon_FUN_004dd870
;   core_sound.cpp_CSound_playSound_FUN_005b3a20
;   crt_ctype.c_toupper_FUN_005ff9e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dd9d0
        ;   Label: core_game.cpp_checkCheatAndGiveWeapon_FUN_004dd9d0
    PUSH ESI                            ; 004dd9d1
    PUSH EDI                            ; 004dd9d2
    PUSH EBP                            ; 004dd9d3
    SUB ESP,0x8                         ; 004dd9d4
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004dd9d7
    MOV EDI,ESI                         ; 004dd9db
    SUB ECX,ECX                         ; 004dd9dd
    DEC ECX                             ; 004dd9df
    XOR EAX,EAX                         ; 004dd9e0
    SCASB.REPNE ES:EDI                  ; 004dd9e2
    NOT ECX                             ; 004dd9e4
    DEC ECX                             ; 004dd9e6
    XOR EBP,EBP                         ; 004dd9e7
    MOV EAX,ECX                         ; 004dd9e9
    MOV dword ptr [ESP],ECX             ; 004dd9eb
    TEST ECX,ECX                        ; 004dd9ee
    JLE 0x004dda22                      ; 004dd9f0
        ;   XREF to: 004dda22 (CONDITIONAL_JUMP)  ; LAB_004dda22
    MOV EDI,ECX                         ; 004dd9f2
    NEG EDI                             ; 004dd9f4
    MOV EBX,ECX                         ; 004dd9f6
    LEA EAX,[ECX + EDI*0x1]             ; 004dd9f8
    MOV dword ptr [ESP + 0x4],EAX       ; 004dd9fb
    XOR EAX,EAX                         ; 004dd9ff
        ;   Label: LAB_004dd9ff
    MOV AL,byte ptr [ESI]               ; 004dda01
    PUSH EAX                            ; 004dda03
    MOVZX EDI,byte ptr [EBX + 0x2d831d7] ; 004dda04 | g_InputHistory | DAT_02d831d6 | CHAR_ARRAY_02d831d8
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004dda0b
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004dda10
    CMP EDI,EAX                         ; 004dda13
    JNZ 0x004dda18                      ; 004dda15
        ;   XREF to: 004dda18 (CONDITIONAL_JUMP)  ; LAB_004dda18
    INC EBP                             ; 004dda17
    MOV EDX,dword ptr [ESP + 0x4]       ; 004dda18
        ;   Label: LAB_004dda18
    DEC EBX                             ; 004dda1c
    INC ESI                             ; 004dda1d
    CMP EBX,EDX                         ; 004dda1e
    JG 0x004dd9ff                       ; 004dda20
        ;   XREF to: 004dd9ff (CONDITIONAL_JUMP)  ; LAB_004dd9ff
    CMP EBP,dword ptr [ESP]             ; 004dda22
        ;   Label: LAB_004dda22
    JZ 0x004dda2f                       ; 004dda25
        ;   XREF to: 004dda2f (CONDITIONAL_JUMP)  ; LAB_004dda2f
    ADD ESP,0x8                         ; 004dda27
    POP EBP                             ; 004dda2a
    POP EDI                             ; 004dda2b
    POP ESI                             ; 004dda2c
    POP EBX                             ; 004dda2d
    RET                                 ; 004dda2e
    MOV EBX,dword ptr [ESP + 0x20]      ; 004dda2f
        ;   Label: LAB_004dda2f
    XOR AH,AH                           ; 004dda33
    PUSH EBX                            ; 004dda35
    MOV byte ptr [0x02d831d8],AH        ; 004dda36 | CHAR_ARRAY_02d831d8
    CALL core_game.cpp_giveHeroWeapon_FUN_004dd870 ; 004dda3c
        ;   XREF to: 004dd870 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004dd870(char * class_name)
    ADD ESP,0x4                         ; 004dda41
    MOV ESI,dword ptr [ESP + 0x24]      ; 004dda44
    PUSH 0x40a00000                     ; 004dda48
    PUSH ESI                            ; 004dda4d
    MOV EDI,dword ptr [0x0067b654]      ; 004dda4e | g_CGamePtr
    PUSH EDI                            ; 004dda54 | g_CGameInstance
    CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20 ; 004dda55
        ;   XREF to: 004d7f20 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004d7f20(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004dda5a
    PUSH 0x62b9dd                       ; 004dda5d | = "cheat-1.wav"
    PUSH 0x0                            ; 004dda62
    MOV EBP,dword ptr [0x00681ef8]      ; 004dda64 | g_CSoundPtr
    PUSH EBP                            ; 004dda6a | g_CSoundInstance
    CALL core_sound.cpp_CSound_playSound_FUN_005b3a20 ; 004dda6b
        ;   XREF to: 005b3a20 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005b3a20(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004dda70
    ADD ESP,0x8                         ; 004dda73
    POP EBP                             ; 004dda76
    POP EDI                             ; 004dda77
    POP ESI                             ; 004dda78
    POP EBX                             ; 004dda79
    RET                                 ; 004dda7a

