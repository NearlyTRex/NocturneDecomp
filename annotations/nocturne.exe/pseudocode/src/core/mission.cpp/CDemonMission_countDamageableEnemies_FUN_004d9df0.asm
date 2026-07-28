; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_mission_cpp_CDemonMission_countDamageableEnemies_FUN_004d9df0(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_runGameSession_FUN_0049da10 at 0049df8a
;
; Referenced Globals:
;   undefined4 g_CEnemyActorType_01bcdebc.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d9df0
        ;   Label: core_mission.cpp_CDemonMission_countDamageableEnemies_FUN_004d9df0
    PUSH ESI                            ; 004d9df1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004d9df2
    MOV EBX,dword ptr [EBX + 0x514]     ; 004d9df6
    XOR ESI,ESI                         ; 004d9dfc
    TEST EBX,EBX                        ; 004d9dfe
    JZ 0x004d9e20                       ; 004d9e00
        ;   XREF to: 004d9e20 (CONDITIONAL_JUMP)  ; LAB_004d9e20
    MOV EDX,dword ptr [0x01bcdef4]      ; 004d9e02 | g_CEnemyActorType_01bcdebc.name_hash
        ;   Label: LAB_004d9e02
    PUSH EDX                            ; 004d9e08
    PUSH EBX                            ; 004d9e09
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004d9e0a
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004d9e0f
    TEST EAX,EAX                        ; 004d9e12
    JNZ 0x004d9e25                      ; 004d9e14
        ;   XREF to: 004d9e25 (CONDITIONAL_JUMP)  ; LAB_004d9e25
    MOV EBX,dword ptr [EBX + 0x144]     ; 004d9e16
        ;   Label: LAB_004d9e16
    TEST EBX,EBX                        ; 004d9e1c
    JNZ 0x004d9e02                      ; 004d9e1e
        ;   XREF to: 004d9e02 (CONDITIONAL_JUMP)  ; LAB_004d9e02
    MOV EAX,ESI                         ; 004d9e20
        ;   Label: LAB_004d9e20
    POP ESI                             ; 004d9e22
    POP EBX                             ; 004d9e23
    RET                                 ; 004d9e24
    PUSH EAX                            ; 004d9e25
        ;   Label: LAB_004d9e25
    MOV EDX,dword ptr [EAX + 0x14c]     ; 004d9e26
    CALL dword ptr [EDX + 0x104]        ; 004d9e2c
    ADD ESP,0x4                         ; 004d9e32
    TEST EAX,EAX                        ; 004d9e35
    JZ 0x004d9e16                       ; 004d9e37
        ;   XREF to: 004d9e16 (CONDITIONAL_JUMP)  ; LAB_004d9e16
    INC ESI                             ; 004d9e39
    MOV EBX,dword ptr [EBX + 0x144]     ; 004d9e3a
    TEST EBX,EBX                        ; 004d9e40
    JNZ 0x004d9e02                      ; 004d9e42
        ;   XREF to: 004d9e02 (CONDITIONAL_JUMP)  ; LAB_004d9e02
    MOV EAX,ESI                         ; 004d9e44
    POP ESI                             ; 004d9e46
    POP EBX                             ; 004d9e47
    RET                                 ; 004d9e48

