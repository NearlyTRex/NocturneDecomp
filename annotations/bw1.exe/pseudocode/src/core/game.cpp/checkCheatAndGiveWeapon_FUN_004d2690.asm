; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_checkCheatAndGiveWeapon_FUN_004d2690(char *cheat_code,char *class_name,char *message)
;
; Parameters:
; char *           Stack[0x4]:4   cheat_code
; char *           Stack[0x8]:4   class_name
; char *           Stack[0xc]:4   message
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 DAT_006236b8
;   undefined4 DAT_01cd0c68
;
; Called Functions:
;   core_game.cpp_CGame_displayMessage_FUN_004cc190
;   core_game.cpp_FUN_004d2540
;   core_sound.cpp_CSound_playSound_FUN_0057d880
;   crt_ctype.c_toupper_FUN_005c12b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d2690
        ;   Label: core_game.cpp_checkCheatAndGiveWeapon_FUN_004d2690
    PUSH ESI                            ; 004d2691
    PUSH EDI                            ; 004d2692
    PUSH EBP                            ; 004d2693
    SUB ESP,0x8                         ; 004d2694
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004d2697
    MOV EDI,ESI                         ; 004d269b
    SUB ECX,ECX                         ; 004d269d
    DEC ECX                             ; 004d269f
    XOR EAX,EAX                         ; 004d26a0
    SCASB.REPNE ES:EDI                  ; 004d26a2
    NOT ECX                             ; 004d26a4
    DEC ECX                             ; 004d26a6
    XOR EBP,EBP                         ; 004d26a7
    MOV EAX,ECX                         ; 004d26a9
    MOV dword ptr [ESP],ECX             ; 004d26ab
    TEST ECX,ECX                        ; 004d26ae
    JLE 0x004d26e2                      ; 004d26b0
        ;   XREF to: 004d26e2 (CONDITIONAL_JUMP)  ; LAB_004d26e2
    MOV EDI,ECX                         ; 004d26b2
    NEG EDI                             ; 004d26b4
    MOV EBX,ECX                         ; 004d26b6
    LEA EAX,[ECX + EDI*0x1]             ; 004d26b8
    MOV dword ptr [ESP + 0x4],EAX       ; 004d26bb
    XOR EAX,EAX                         ; 004d26bf
        ;   Label: LAB_004d26bf
    MOV AL,byte ptr [ESI]               ; 004d26c1
    PUSH EAX                            ; 004d26c3
    MOVZX EDI,byte ptr [EBX + 0x1cd0c67] ; 004d26c4
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d26cb
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d26d0
    CMP EDI,EAX                         ; 004d26d3
    JNZ 0x004d26d8                      ; 004d26d5
        ;   XREF to: 004d26d8 (CONDITIONAL_JUMP)  ; LAB_004d26d8
    INC EBP                             ; 004d26d7
    MOV EDX,dword ptr [ESP + 0x4]       ; 004d26d8
        ;   Label: LAB_004d26d8
    DEC EBX                             ; 004d26dc
    INC ESI                             ; 004d26dd
    CMP EBX,EDX                         ; 004d26de
    JG 0x004d26bf                       ; 004d26e0
        ;   XREF to: 004d26bf (CONDITIONAL_JUMP)  ; LAB_004d26bf
    CMP EBP,dword ptr [ESP]             ; 004d26e2
        ;   Label: LAB_004d26e2
    JZ 0x004d26ef                       ; 004d26e5
        ;   XREF to: 004d26ef (CONDITIONAL_JUMP)  ; LAB_004d26ef
    ADD ESP,0x8                         ; 004d26e7
    POP EBP                             ; 004d26ea
    POP EDI                             ; 004d26eb
    POP ESI                             ; 004d26ec
    POP EBX                             ; 004d26ed
    RET                                 ; 004d26ee
    MOV EBX,dword ptr [ESP + 0x20]      ; 004d26ef
        ;   Label: LAB_004d26ef
    XOR AH,AH                           ; 004d26f3
    PUSH EBX                            ; 004d26f5
    MOV byte ptr [0x01cd0c68],AH        ; 004d26f6 | DAT_01cd0c68
    CALL core_game.cpp_FUN_004d2540     ; 004d26fc
        ;   XREF to: 004d2540 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004d2540(char * class_name)
    ADD ESP,0x4                         ; 004d2701
    MOV ESI,dword ptr [ESP + 0x24]      ; 004d2704
    PUSH 0x40a00000                     ; 004d2708
    PUSH ESI                            ; 004d270d
    MOV EDI,dword ptr [0x0061d95c]      ; 004d270e | g_CGamePtr
    PUSH EDI                            ; 004d2714
    CALL core_game.cpp_CGame_displayMessage_FUN_004cc190 ; 004d2715
        ;   XREF to: 004cc190 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004cc190(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004d271a
    PUSH 0x5e1b23                       ; 004d271d
    PUSH 0x0                            ; 004d2722
    MOV EBP,dword ptr [0x006236b8]      ; 004d2724 | DAT_006236b8
    PUSH EBP                            ; 004d272a
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 004d272b
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004d2730
    ADD ESP,0x8                         ; 004d2733
    POP EBP                             ; 004d2736
    POP EDI                             ; 004d2737
    POP ESI                             ; 004d2738
    POP EBX                             ; 004d2739
    RET                                 ; 004d273a

