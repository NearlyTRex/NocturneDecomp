; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CGunFlame_initProcess_FUN_004c4b00(CGunFlame *this_ptr)
;
; Parameters:
; CGunFlame *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_process_FUN_004c6ec0 at 004c70ad
;
; Referenced Globals:
;   TerminatedCString s_core_fire_cpp_00629ee1
;   TerminatedCString s_CGunFlame_initProcess_to_00629ef2
;   CDemonSet* g_CDemonSetPtr = 03114278
;   int g_CharactersOnFireCount
;   CCharacter*[50] g_CharactersOnFire
;   int g_FlameCanCount
;   CFlameCan*[150] g_FlameCans
;   undefined4 g_CFlameCanClassInfo.name_hash
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;   undefined4 g_CDemonSetInstance.character_count
;   undefined4 g_CDemonSetInstance.characters[0]
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_hero.cpp_FUN_004f2220
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c4b00
        ;   Label: core_fire.cpp_CGunFlame_initProcess_FUN_004c4b00
    PUSH ESI                            ; 004c4b01
    PUSH EDI                            ; 004c4b02
    PUSH EBP                            ; 004c4b03
    XOR EDX,EDX                         ; 004c4b04
    XOR EDI,EDI                         ; 004c4b06
    XOR ESI,ESI                         ; 004c4b08
    MOV dword ptr [0x02d13eb4],EDX      ; 004c4b0a | g_CharactersOnFireCount
    MOV EBX,dword ptr [0x006810c8]      ; 004c4b10 | g_CDemonSetPtr
        ;   Label: LAB_004c4b10
    CMP EDI,dword ptr [EBX + 0x14f098]  ; 004c4b16 | g_CDemonSetInstance.character_count
    JL 0x004c4b3e                       ; 004c4b1c
        ;   XREF to: 004c4b3e (CONDITIONAL_JUMP)  ; LAB_004c4b3e
    XOR EBX,EBX                         ; 004c4b1e
    XOR ESI,ESI                         ; 004c4b20
    MOV dword ptr [0x02d13f80],EBX      ; 004c4b22 | g_FlameCanCount
    MOV EAX,[0x006810c8]                ; 004c4b28 | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_004c4b28
    CMP EBX,dword ptr [EAX + 0x14d154]  ; 004c4b2d | g_CDemonSetInstance.actor_count
    JL 0x004c4bb9                       ; 004c4b33
        ;   XREF to: 004c4bb9 (CONDITIONAL_JUMP)  ; LAB_004c4bb9
    POP EBP                             ; 004c4b39
    POP EDI                             ; 004c4b3a
    POP ESI                             ; 004c4b3b
    POP EBX                             ; 004c4b3c
    RET                                 ; 004c4b3d
    MOV EBX,dword ptr [ESI + EBX*0x1 + 0x14f09c] ; 004c4b3e | g_CDemonSetInstance.characters[0]
        ;   Label: LAB_004c4b3e
    PUSH EBX                            ; 004c4b45
    MOV EAX,dword ptr [EBX + 0x154]     ; 004c4b46
    CALL dword ptr [EAX + 0x120]        ; 004c4b4c
    ADD ESP,0x4                         ; 004c4b52
    TEST EAX,EAX                        ; 004c4b55
    JNZ 0x004c4b8c                      ; 004c4b57
        ;   XREF to: 004c4b8c (CONDITIONAL_JUMP)  ; LAB_004c4b8c
    LEA EAX,[EBX + 0x20]                ; 004c4b59
    PUSH 0x42480000                     ; 004c4b5c
    PUSH EAX                            ; 004c4b61
    CALL core_hero.cpp_FUN_004f2220     ; 004c4b62
        ;   XREF to: 004f2220 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_FUN_004f2220()
    ADD ESP,0x8                         ; 004c4b67
    TEST EAX,EAX                        ; 004c4b6a
    JZ 0x004c4b8c                       ; 004c4b6c
        ;   XREF to: 004c4b8c (CONDITIONAL_JUMP)  ; LAB_004c4b8c
    CMP dword ptr [0x02d13eb4],0x32     ; 004c4b6e | g_CharactersOnFireCount
    JGE 0x004c4b95                      ; 004c4b75
        ;   XREF to: 004c4b95 (CONDITIONAL_JUMP)  ; LAB_004c4b95
    MOV EAX,[0x02d13eb4]                ; 004c4b77 | g_CharactersOnFireCount
        ;   Label: LAB_004c4b77
    LEA ECX,[EAX + 0x1]                 ; 004c4b7c
    MOV dword ptr [EAX*0x4 + 0x2d13eb8],EBX ; 004c4b7f | g_CharactersOnFire
    MOV dword ptr [0x02d13eb4],ECX      ; 004c4b86 | g_CharactersOnFireCount
    INC EDI                             ; 004c4b8c
        ;   Label: LAB_004c4b8c
    ADD ESI,0x4                         ; 004c4b8d
    JMP 0x004c4b10                      ; 004c4b90
        ;   XREF to: 004c4b10 (UNCONDITIONAL_JUMP)  ; LAB_004c4b10
    MOV EAX,0x629ee1                    ; 004c4b95 | = "..\\core\\fire.cpp"
        ;   Label: LAB_004c4b95
    MOV EDX,0xd0f                       ; 004c4b9a
    PUSH 0x629ef2                       ; 004c4b9f | = "CGunFlame::initProcess - too many cha..."
    MOV [0x02f0ca48],EAX                ; 004c4ba4 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 004c4ba9 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004c4baf
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004c4bb4
    JMP 0x004c4b77                      ; 004c4bb7
        ;   XREF to: 004c4b77 (UNCONDITIONAL_JUMP)  ; LAB_004c4b77
    MOV EBP,dword ptr [0x02d7a738]      ; 004c4bb9 | g_CFlameCanClassInfo.name_hash
        ;   Label: LAB_004c4bb9
    PUSH EBP                            ; 004c4bbf
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x14d158] ; 004c4bc0 | g_CDemonSetInstance.actors[0]
    PUSH EDX                            ; 004c4bc7
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004c4bc8
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004c4bcd
    TEST EAX,EAX                        ; 004c4bd0
    JZ 0x004c4bf2                       ; 004c4bd2
        ;   XREF to: 004c4bf2 (CONDITIONAL_JUMP)  ; LAB_004c4bf2
    MOV ECX,dword ptr [0x02d13f80]      ; 004c4bd4 | g_FlameCanCount
    CMP ECX,0x96                        ; 004c4bda
    JGE 0x004c4bf2                      ; 004c4be0
        ;   XREF to: 004c4bf2 (CONDITIONAL_JUMP)  ; LAB_004c4bf2
    LEA EDI,[ECX + 0x1]                 ; 004c4be2
    MOV dword ptr [ECX*0x4 + 0x2d13f84],EAX ; 004c4be5 | g_FlameCans
    MOV dword ptr [0x02d13f80],EDI      ; 004c4bec | g_FlameCanCount
    INC EBX                             ; 004c4bf2
        ;   Label: LAB_004c4bf2
    ADD ESI,0x4                         ; 004c4bf3
    JMP 0x004c4b28                      ; 004c4bf6
        ;   XREF to: 004c4b28 (UNCONDITIONAL_JUMP)  ; LAB_004c4b28

