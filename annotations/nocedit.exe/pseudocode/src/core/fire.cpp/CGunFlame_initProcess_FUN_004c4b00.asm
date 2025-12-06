; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_fire.cpp_CGunFlame_initProcess_FUN_004c4b00(CGunFlame * this_ptr)
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
;   undefined4 DAT_02d13eb4
;   undefined4 DAT_02d13eb8
;   undefined4 DAT_02d13f80
;   undefined4 DAT_02d13f84
;   undefined4 g_CFlameCanClassInfo.name_hash
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.actor_list_ptr
;   undefined4 g_CDemonSetInstance.actor_list_data[0]
;   undefined4 g_CDemonSetInstance.damage_listener_count
;   undefined4 g_CDemonSetInstance.damage_listeners
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
    MOV dword ptr [0x02d13eb4],EDX      ; 004c4b0a | undefined4 DAT_02d13eb4
    MOV EBX,dword ptr [0x006810c8]      ; 004c4b10 | CDemonSet * g_CDemonSetPtr
        ;   Label: LAB_004c4b10
    CMP EDI,dword ptr [EBX + 0x14f098]  ; 004c4b16 | g_CDemonSetInstance.damage_listener_count
    JL 0x004c4b3e                       ; 004c4b1c | LAB_004c4b3e
        ;   XREF to: 004c4b3e (CONDITIONAL_JUMP)
    XOR EBX,EBX                         ; 004c4b1e
    XOR ESI,ESI                         ; 004c4b20
    MOV dword ptr [0x02d13f80],EBX      ; 004c4b22 | undefined4 DAT_02d13f80
    MOV EAX,[0x006810c8]                ; 004c4b28 | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
        ;   Label: LAB_004c4b28
    CMP EBX,dword ptr [EAX + 0x14d154]  ; 004c4b2d | g_CDemonSetInstance.actor_list_ptr
    JL 0x004c4bb9                       ; 004c4b33 | LAB_004c4bb9
        ;   XREF to: 004c4bb9 (CONDITIONAL_JUMP)
    POP EBP                             ; 004c4b39
    POP EDI                             ; 004c4b3a
    POP ESI                             ; 004c4b3b
    POP EBX                             ; 004c4b3c
    RET                                 ; 004c4b3d
    MOV EBX,dword ptr [ESI + EBX*0x1 + 0x14f09c] ; 004c4b3e | g_CDemonSetInstance.damage_listeners
        ;   Label: LAB_004c4b3e
    PUSH EBX                            ; 004c4b45
    MOV EAX,dword ptr [EBX + 0x154]     ; 004c4b46
    CALL dword ptr [EAX + 0x120]        ; 004c4b4c
    ADD ESP,0x4                         ; 004c4b52
    TEST EAX,EAX                        ; 004c4b55
    JNZ 0x004c4b8c                      ; 004c4b57 | LAB_004c4b8c
        ;   XREF to: 004c4b8c (CONDITIONAL_JUMP)
    LEA EAX,[EBX + 0x20]                ; 004c4b59
    PUSH 0x42480000                     ; 004c4b5c
    PUSH EAX                            ; 004c4b61
    CALL core_hero.cpp_FUN_004f2220     ; 004c4b62 | undefined core_hero.cpp_FUN_004f2220()
        ;   XREF to: 004f2220 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004c4b67
    TEST EAX,EAX                        ; 004c4b6a
    JZ 0x004c4b8c                       ; 004c4b6c | LAB_004c4b8c
        ;   XREF to: 004c4b8c (CONDITIONAL_JUMP)
    CMP dword ptr [0x02d13eb4],0x32     ; 004c4b6e | undefined4 DAT_02d13eb4
    JGE 0x004c4b95                      ; 004c4b75 | LAB_004c4b95
        ;   XREF to: 004c4b95 (CONDITIONAL_JUMP)
    MOV EAX,[0x02d13eb4]                ; 004c4b77 | undefined4 DAT_02d13eb4
        ;   Label: LAB_004c4b77
    LEA ECX,[EAX + 0x1]                 ; 004c4b7c
    MOV dword ptr [EAX*0x4 + 0x2d13eb8],EBX ; 004c4b7f | undefined4 DAT_02d13eb8
    MOV dword ptr [0x02d13eb4],ECX      ; 004c4b86 | undefined4 DAT_02d13eb4
    INC EDI                             ; 004c4b8c
        ;   Label: LAB_004c4b8c
    ADD ESI,0x4                         ; 004c4b8d
    JMP 0x004c4b10                      ; 004c4b90 | LAB_004c4b10
        ;   XREF to: 004c4b10 (UNCONDITIONAL_JUMP)
    MOV EAX,0x629ee1                    ; 004c4b95 | = "..\\core\\fire.cpp" | s_core_fire_cpp_00629ee1 = ..\core\fire.cpp
        ;   Label: LAB_004c4b95
    MOV EDX,0xd0f                       ; 004c4b9a
    PUSH 0x629ef2                       ; 004c4b9f | = "CGunFlame::initProcess - too many cha..." | s_CGunFlame_initProcess_to_00629ef2 = CGunFlame::initProcess - too many characters!
    MOV [0x02f0ca48],EAX                ; 004c4ba4 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 004c4ba9 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004c4baf | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004c4bb4
    JMP 0x004c4b77                      ; 004c4bb7 | LAB_004c4b77
        ;   XREF to: 004c4b77 (UNCONDITIONAL_JUMP)
    MOV EBP,dword ptr [0x02d7a738]      ; 004c4bb9 | g_CFlameCanClassInfo.name_hash
        ;   Label: LAB_004c4bb9
    PUSH EBP                            ; 004c4bbf
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x14d158] ; 004c4bc0 | g_CDemonSetInstance.actor_list_data[0]
    PUSH EDX                            ; 004c4bc7
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004c4bc8 | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004c4bcd
    TEST EAX,EAX                        ; 004c4bd0
    JZ 0x004c4bf2                       ; 004c4bd2 | LAB_004c4bf2
        ;   XREF to: 004c4bf2 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [0x02d13f80]      ; 004c4bd4 | undefined4 DAT_02d13f80
    CMP ECX,0x96                        ; 004c4bda
    JGE 0x004c4bf2                      ; 004c4be0 | LAB_004c4bf2
        ;   XREF to: 004c4bf2 (CONDITIONAL_JUMP)
    LEA EDI,[ECX + 0x1]                 ; 004c4be2
    MOV dword ptr [ECX*0x4 + 0x2d13f84],EAX ; 004c4be5 | undefined4 DAT_02d13f84
    MOV dword ptr [0x02d13f80],EDI      ; 004c4bec | undefined4 DAT_02d13f80
    INC EBX                             ; 004c4bf2
        ;   Label: LAB_004c4bf2
    ADD ESI,0x4                         ; 004c4bf3
    JMP 0x004c4b28                      ; 004c4bf6 | LAB_004c4b28
        ;   XREF to: 004c4b28 (UNCONDITIONAL_JUMP)

