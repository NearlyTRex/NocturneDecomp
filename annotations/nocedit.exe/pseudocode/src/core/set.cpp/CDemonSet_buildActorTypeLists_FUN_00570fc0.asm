; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_buildActorTypeLists_FUN_00570fc0(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_mission.cpp_CDemonMission_buildActiveSetActorList_FUN_00524120 at 0052417b
;   core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60 at 00523ec7
;
; Referenced Globals:
;   undefined4 g_CCharacterClassInfo.name_hash
;   undefined4 g_CEnemyClassInfo.name_hash
;   undefined4 g_CTriggerClassInfo.name_hash
;   undefined4 g_CWayPointClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570fc0
        ;   Label: core_set.cpp_CDemonSet_buildActorTypeLists_FUN_00570fc0
    PUSH ESI                            ; 00570fc1
    PUSH EDI                            ; 00570fc2
    PUSH EBP                            ; 00570fc3
    MOV EBX,dword ptr [ESP + 0x14]      ; 00570fc4
    MOV dword ptr [EBX + 0x150fdc],0x0  ; 00570fc8
    MOV dword ptr [EBX + 0x152f20],0x0  ; 00570fd2
    MOV dword ptr [EBX + 0x154e64],0x0  ; 00570fdc
    MOV dword ptr [EBX + 0x158cec],0x0  ; 00570fe6
    MOV EDX,dword ptr [EBX + 0x14d154]  ; 00570ff0
    MOV dword ptr [EBX + 0x14f098],0x0  ; 00570ff6
    XOR EBP,EBP                         ; 00571000
    TEST EDX,EDX                        ; 00571002
    JLE 0x005710ca                      ; 00571004
        ;   XREF to: 005710ca (CONDITIONAL_JUMP)  ; LAB_005710ca
    MOV EDI,EBX                         ; 0057100a
    MOV ESI,dword ptr [EDI + 0x14d158]  ; 0057100c
        ;   Label: LAB_0057100c
    CMP dword ptr [ESI + 0xfc],0x0      ; 00571012
    JNZ 0x00571024                      ; 00571019
        ;   XREF to: 00571024 (CONDITIONAL_JUMP)  ; LAB_00571024
    CMP dword ptr [ESI + 0xf8],0x0      ; 0057101b
    JZ 0x00571037                       ; 00571022
        ;   XREF to: 00571037 (CONDITIONAL_JUMP)  ; LAB_00571037
    MOV EAX,dword ptr [EBX + 0x158cec]  ; 00571024
        ;   Label: LAB_00571024
    MOV dword ptr [EBX + EAX*0x4 + 0x158cf0],ESI ; 0057102a
    INC dword ptr [EBX + 0x158cec]      ; 00571031
    MOV EAX,[0x00823c4c]                ; 00571037 | g_CCharacterClassInfo.name_hash
        ;   Label: LAB_00571037
    PUSH EAX                            ; 0057103c
    PUSH ESI                            ; 0057103d
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0057103e
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EDX,dword ptr [EBX + 0x14f098]  ; 00571043
    MOV dword ptr [EBX + EDX*0x4 + 0x14f09c],EAX ; 00571049
    MOV EAX,dword ptr [EBX + 0x14f098]  ; 00571050
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x14f09c] ; 00571056
    ADD ESP,0x8                         ; 0057105d
    TEST EDX,EDX                        ; 00571060
    JZ 0x005710cf                       ; 00571062
        ;   XREF to: 005710cf (CONDITIONAL_JUMP)  ; LAB_005710cf
    MOV EAX,[0x02cf2bf0]                ; 00571064 | g_CEnemyClassInfo.name_hash
    MOV EDX,dword ptr [EBX + 0x14f098]  ; 00571069
    PUSH EAX                            ; 0057106f
    INC EDX                             ; 00571070
    PUSH ESI                            ; 00571071
    MOV dword ptr [EBX + 0x14f098],EDX  ; 00571072
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 00571078
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EDX,dword ptr [EBX + 0x150fdc]  ; 0057107d
    MOV dword ptr [EBX + EDX*0x4 + 0x150fe0],EAX ; 00571083
    MOV EAX,dword ptr [EBX + 0x150fdc]  ; 0057108a
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x150fe0] ; 00571090
    ADD ESP,0x8                         ; 00571097
    TEST ECX,ECX                        ; 0057109a
    JZ 0x005710b8                       ; 0057109c
        ;   XREF to: 005710b8 (CONDITIONAL_JUMP)  ; LAB_005710b8
    INC EAX                             ; 0057109e
    MOV dword ptr [EBX + 0x150fdc],EAX  ; 0057109f
    MOV EAX,dword ptr [EBX + 0x152f20]  ; 005710a5
        ;   Label: LAB_005710a5
    MOV dword ptr [EBX + EAX*0x4 + 0x152f24],ESI ; 005710ab
    INC dword ptr [EBX + 0x152f20]      ; 005710b2
    INC EBP                             ; 005710b8
        ;   Label: LAB_005710b8
    MOV ECX,dword ptr [EBX + 0x14d154]  ; 005710b9
    ADD EDI,0x4                         ; 005710bf
    CMP EBP,ECX                         ; 005710c2
    JL 0x0057100c                       ; 005710c4
        ;   XREF to: 0057100c (CONDITIONAL_JUMP)  ; LAB_0057100c
    POP EBP                             ; 005710ca
        ;   Label: LAB_005710ca
    POP EDI                             ; 005710cb
    POP ESI                             ; 005710cc
    POP EBX                             ; 005710cd
    RET                                 ; 005710ce
    MOV ECX,dword ptr [0x03f9591c]      ; 005710cf | g_CWayPointClassInfo.name_hash
        ;   Label: LAB_005710cf
    PUSH ECX                            ; 005710d5
    PUSH ESI                            ; 005710d6
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005710d7
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EDX,dword ptr [EBX + 0x154e64]  ; 005710dc
    MOV dword ptr [EBX + EDX*0x4 + 0x154e68],EAX ; 005710e2
    MOV EAX,dword ptr [EBX + 0x154e64]  ; 005710e9
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x154e68] ; 005710ef
    ADD ESP,0x8                         ; 005710f6
    TEST EDX,EDX                        ; 005710f9
    JZ 0x00571106                       ; 005710fb
        ;   XREF to: 00571106 (CONDITIONAL_JUMP)  ; LAB_00571106
    LEA ECX,[EAX + 0x1]                 ; 005710fd
    MOV dword ptr [EBX + 0x154e64],ECX  ; 00571100
    MOV EAX,[0x03f87490]                ; 00571106 | g_CTriggerClassInfo.name_hash
        ;   Label: LAB_00571106
    PUSH EAX                            ; 0057110b
    PUSH ESI                            ; 0057110c
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0057110d
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00571112
    TEST EAX,EAX                        ; 00571115
    JZ 0x005710b8                       ; 00571117
        ;   XREF to: 005710b8 (CONDITIONAL_JUMP)  ; LAB_005710b8
    CMP dword ptr [EAX + 0x174],0x4     ; 00571119
    JNZ 0x005710b8                      ; 00571120
        ;   XREF to: 005710b8 (CONDITIONAL_JUMP)  ; LAB_005710b8
    CMP dword ptr [EAX + 0x300],0x0     ; 00571122
    JZ 0x005710b8                       ; 00571129
        ;   XREF to: 005710b8 (CONDITIONAL_JUMP)  ; LAB_005710b8
    JMP 0x005710a5                      ; 0057112b
        ;   XREF to: 005710a5 (UNCONDITIONAL_JUMP)  ; LAB_005710a5

