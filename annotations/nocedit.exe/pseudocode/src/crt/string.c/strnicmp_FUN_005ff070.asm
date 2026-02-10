; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl crt_string_c_strnicmp_FUN_005ff070(char *str1,char *str2,int count)
;
; Parameters:
; char *           Stack[0x4]:4   str1
; char *           Stack[0x8]:4   str2
; int              Stack[0xc]:4   count
;
; XREF[18]:
;   core_charactr.cpp_CCharacter_getDeathState_FUN_0042c580 at 0042c5a8
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40 at 004294c3
;   core_emitter.cpp_CEmitter_process_FUN_004a8070 at 004a82c0
;   core_event.cpp_CEventList_FUN_004aacc0 at 004ab860
;   core_game.cpp_CGame_loadGame_FUN_004e12b0 at 004e171e
;   core_mission.cpp_CDemonMission_generateUniqueActorName_FUN_00524660 at 0052468f
;   core_script.cpp_CCmdParm_setTemplateText_FUN_00560de0 at 00560fc2
;   core_script.cpp_CScript_FUN_00566cc0 at 00566dc5
;   core_script.cpp_CScript_skipCommands_FUN_005601c0 at 0056025e
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055aa37
;   ... and 8 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ff070
        ;   Label: crt_string.c_strnicmp_FUN_005ff070
    PUSH ESI                            ; 005ff071
    MOV EBX,dword ptr [ESP + 0xc]       ; 005ff072
    MOV EDX,dword ptr [ESP + 0x14]      ; 005ff076
    MOV ESI,dword ptr [ESP + 0x10]      ; 005ff07a
    TEST EDX,EDX                        ; 005ff07e
    JNZ 0x005ff087                      ; 005ff080
        ;   XREF to: 005ff087 (CONDITIONAL_JUMP)  ; LAB_005ff087
    XOR EAX,EAX                         ; 005ff082
        ;   Label: LAB_005ff082
    POP ESI                             ; 005ff084
    POP EBX                             ; 005ff085
    RET                                 ; 005ff086
    MOV AL,byte ptr [EBX]               ; 005ff087
        ;   Label: LAB_005ff087
    MOV AH,byte ptr [ESI]               ; 005ff089
    CMP AL,0x41                         ; 005ff08b
    JC 0x005ff095                       ; 005ff08d
        ;   XREF to: 005ff095 (CONDITIONAL_JUMP)  ; LAB_005ff095
    CMP AL,0x5a                         ; 005ff08f
    JA 0x005ff095                       ; 005ff091
        ;   XREF to: 005ff095 (CONDITIONAL_JUMP)  ; LAB_005ff095
    ADD AL,0x20                         ; 005ff093
    CMP AH,0x41                         ; 005ff095
        ;   Label: LAB_005ff095
    JC 0x005ff0a2                       ; 005ff098
        ;   XREF to: 005ff0a2 (CONDITIONAL_JUMP)  ; LAB_005ff0a2
    CMP AH,0x5a                         ; 005ff09a
    JA 0x005ff0a2                       ; 005ff09d
        ;   XREF to: 005ff0a2 (CONDITIONAL_JUMP)  ; LAB_005ff0a2
    ADD AH,0x20                         ; 005ff09f
    CMP AL,AH                           ; 005ff0a2
        ;   Label: LAB_005ff0a2
    JZ 0x005ff0b8                       ; 005ff0a4
        ;   XREF to: 005ff0b8 (CONDITIONAL_JUMP)  ; LAB_005ff0b8
    XOR EDX,EDX                         ; 005ff0a6
    MOV DL,AL                           ; 005ff0a8
    MOV AL,AH                           ; 005ff0aa
    AND EAX,0xff                        ; 005ff0ac
    SUB EDX,EAX                         ; 005ff0b1
    MOV EAX,EDX                         ; 005ff0b3
    POP ESI                             ; 005ff0b5
    POP EBX                             ; 005ff0b6
    RET                                 ; 005ff0b7
    TEST AH,AH                          ; 005ff0b8
        ;   Label: LAB_005ff0b8
    JNZ 0x005ff0c1                      ; 005ff0ba
        ;   XREF to: 005ff0c1 (CONDITIONAL_JUMP)  ; LAB_005ff0c1
    XOR EAX,EAX                         ; 005ff0bc
    POP ESI                             ; 005ff0be
    POP EBX                             ; 005ff0bf
    RET                                 ; 005ff0c0
    INC EBX                             ; 005ff0c1
        ;   Label: LAB_005ff0c1
    INC ESI                             ; 005ff0c2
    DEC EDX                             ; 005ff0c3
    JZ 0x005ff082                       ; 005ff0c4
        ;   XREF to: 005ff082 (CONDITIONAL_JUMP)  ; LAB_005ff082
    JMP 0x005ff087                      ; 005ff0c6
        ;   XREF to: 005ff087 (UNCONDITIONAL_JUMP)  ; LAB_005ff087

