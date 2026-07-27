; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_buildSetActorList_FUN_004d8ee0(int *param_1)
;
;
; XREF[3]:
;   core_mission.cpp_CDemonMission_createHeros_FUN_004d9a80 at 004d9b7b
;   core_mission.cpp_CDemonMission_loadSet_FUN_004d9020 at 004d9051
;   core_mission.cpp_FUN_004d8fc0 at 004d8fef
;
; Referenced Globals:
;   TerminatedCString s_core_mission_cpp_00589ca4
;   TerminatedCString s_CDemonMission_buildSetAc_00589cb8
;   undefined4 DAT_005be368
;   char* PTR_01cc4800
;   int INT_01cc4804
;   undefined4 DAT_01e57284
;   undefined4 DAT_01fa3ff0
;   undefined4 DAT_01fa3ff4
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   core_set.cpp_CDemonSet_buildActorTypeLists_FUN_0050e6b0
;   core_setcolid.cpp_CDemonSet_buildCollidableActorList_FUN_005119b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8ee0
        ;   Label: core_mission.cpp_CDemonMission_buildSetActorList_FUN_004d8ee0
    PUSH ESI                            ; 004d8ee1
    PUSH EDI                            ; 004d8ee2
    PUSH EBP                            ; 004d8ee3
    MOV ESI,dword ptr [ESP + 0x14]      ; 004d8ee4
    MOV EAX,[0x005be368]                ; 004d8ee8 | DAT_005be368
    MOV dword ptr [EAX + 0x14cd6c],0x0  ; 004d8eed | DAT_01fa3ff0
    MOV EBX,dword ptr [ESI + 0x514]     ; 004d8ef7
    TEST EBX,EBX                        ; 004d8efd
    JZ 0x004d8f1c                       ; 004d8eff
        ;   XREF to: 004d8f1c (CONDITIONAL_JUMP)  ; LAB_004d8f1c
    MOV EDI,0x589ca4                    ; 004d8f01 | = "..\\core\\mission.cpp"
    MOV EBP,0x36d                       ; 004d8f06
    MOV EDX,dword ptr [ESI]             ; 004d8f0b
        ;   Label: LAB_004d8f0b
    CMP EDX,dword ptr [EBX + 0x2c]      ; 004d8f0d
    JZ 0x004d8f3f                       ; 004d8f10
        ;   XREF to: 004d8f3f (CONDITIONAL_JUMP)  ; LAB_004d8f3f
    MOV EBX,dword ptr [EBX + 0x144]     ; 004d8f12
        ;   Label: LAB_004d8f12
    TEST EBX,EBX                        ; 004d8f18
    JNZ 0x004d8f0b                      ; 004d8f1a
        ;   XREF to: 004d8f0b (CONDITIONAL_JUMP)  ; LAB_004d8f0b
    MOV ECX,dword ptr [0x005be368]      ; 004d8f1c | DAT_005be368
        ;   Label: LAB_004d8f1c
    PUSH ECX                            ; 004d8f22 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_buildCollidableActorList_FUN_005119b0 ; 004d8f23
        ;   XREF to: 005119b0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_buildCollidableActorList_FUN_005119b0()
    ADD ESP,0x4                         ; 004d8f28
    MOV EBX,dword ptr [0x005be368]      ; 004d8f2b | DAT_005be368
    PUSH EBX                            ; 004d8f31 | DAT_01e57284
    CALL core_set.cpp_CDemonSet_buildActorTypeLists_FUN_0050e6b0 ; 004d8f32
        ;   XREF to: 0050e6b0 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_buildActorTypeLists_FUN_0050e6b0()
    ADD ESP,0x4                         ; 004d8f37
    POP EBP                             ; 004d8f3a
    POP EDI                             ; 004d8f3b
    POP ESI                             ; 004d8f3c
    POP EBX                             ; 004d8f3d
    RET                                 ; 004d8f3e
    MOV EAX,[0x005be368]                ; 004d8f3f | DAT_005be368
        ;   Label: LAB_004d8f3f
    CMP dword ptr [EAX + 0x14cd6c],0x7d0 ; 004d8f44 | DAT_01fa3ff0
    JL 0x004d8f69                       ; 004d8f4e
        ;   XREF to: 004d8f69 (CONDITIONAL_JUMP)  ; LAB_004d8f69
    PUSH 0x589cb8                       ; 004d8f50 | = "CDemonMission::buildSetActorList - To..."
    MOV dword ptr [0x01cc4800],EDI      ; 004d8f55 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 004d8f5b | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004d8f61
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004d8f66
    MOV EAX,[0x005be368]                ; 004d8f69 | DAT_005be368
        ;   Label: LAB_004d8f69
    MOV EDX,dword ptr [EAX + 0x14cd6c]  ; 004d8f6e | DAT_01fa3ff0
    MOV dword ptr [EAX + EDX*0x4 + 0x14cd70],EBX ; 004d8f74 | DAT_01fa3ff4
    INC dword ptr [EAX + 0x14cd6c]      ; 004d8f7b | DAT_01fa3ff0
    JMP 0x004d8f12                      ; 004d8f81
        ;   XREF to: 004d8f12 (UNCONDITIONAL_JUMP)  ; LAB_004d8f12

