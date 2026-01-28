; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_mission_cpp_CDemonMission_FUN_00524e00(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004db500
;
; Referenced Globals:
;   undefined4 g_CEnemyClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00524e00
        ;   Label: core_mission.cpp_CDemonMission_FUN_00524e00
    PUSH ESI                            ; 00524e01
    MOV EBX,dword ptr [ESP + 0xc]       ; 00524e02
    MOV EBX,dword ptr [EBX + 0x548]     ; 00524e06
    XOR ESI,ESI                         ; 00524e0c
    TEST EBX,EBX                        ; 00524e0e
    JZ 0x00524e30                       ; 00524e10
        ;   XREF to: 00524e30 (CONDITIONAL_JUMP)  ; LAB_00524e30
    MOV EDX,dword ptr [0x02cf2bf0]      ; 00524e12 | g_CEnemyClassInfo.name_hash
        ;   Label: LAB_00524e12
    PUSH EDX                            ; 00524e18
    PUSH EBX                            ; 00524e19
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 00524e1a
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00524e1f
    TEST EAX,EAX                        ; 00524e22
    JNZ 0x00524e35                      ; 00524e24
        ;   XREF to: 00524e35 (CONDITIONAL_JUMP)  ; LAB_00524e35
    MOV EBX,dword ptr [EBX + 0x14c]     ; 00524e26
        ;   Label: LAB_00524e26
    TEST EBX,EBX                        ; 00524e2c
    JNZ 0x00524e12                      ; 00524e2e
        ;   XREF to: 00524e12 (CONDITIONAL_JUMP)  ; LAB_00524e12
    MOV EAX,ESI                         ; 00524e30
        ;   Label: LAB_00524e30
    POP ESI                             ; 00524e32
    POP EBX                             ; 00524e33
    RET                                 ; 00524e34
    PUSH EAX                            ; 00524e35
        ;   Label: LAB_00524e35
    MOV EDX,dword ptr [EAX + 0x154]     ; 00524e36
    CALL dword ptr [EDX + 0x120]        ; 00524e3c
    ADD ESP,0x4                         ; 00524e42
    TEST EAX,EAX                        ; 00524e45
    JZ 0x00524e26                       ; 00524e47
        ;   XREF to: 00524e26 (CONDITIONAL_JUMP)  ; LAB_00524e26
    INC ESI                             ; 00524e49
    MOV EBX,dword ptr [EBX + 0x14c]     ; 00524e4a
    TEST EBX,EBX                        ; 00524e50
    JNZ 0x00524e12                      ; 00524e52
        ;   XREF to: 00524e12 (CONDITIONAL_JUMP)  ; LAB_00524e12
    MOV EAX,ESI                         ; 00524e54
    POP ESI                             ; 00524e56
    POP EBX                             ; 00524e57
    RET                                 ; 00524e58

