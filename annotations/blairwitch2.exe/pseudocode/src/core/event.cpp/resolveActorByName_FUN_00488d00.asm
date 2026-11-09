; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_event_cpp_resolveActorByName_FUN_00488d00(char *param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[3]:
;   core_event.cpp_CEventList_evaluateAtom_FUN_0048e7e0 at 0048ef3f
;   core_event.cpp_FUN_00489670 at 00489a86
;   core_event.cpp_parseVectorLocation_FUN_00488e30 at 00488ece
;
; Referenced Globals:
;   TerminatedCString s_Must_specify_actor_name_005d2e3e
;   undefined4 s_ust_specify_actor_name_005d2e3e+1
;   undefined4 s_st_specify_actor_name_005d2e3e+2
;   undefined4 s_t_specify_actor_name_005d2e3e+3
;   undefined4 DAT_005d2e56
;   TerminatedCString s_Can_t_use_actor_specifie_005d2e58
;   TerminatedCString s_Actor_s_does_not_exist_005d2e86
;   TerminatedCString s_Actor_s_is_of_type_s_thi_005d2ea1
;   undefined4 DAT_005f61e4
;   undefined4 DAT_006141f0
;   undefined4 DAT_00618170
;   CNetGame* g_CNetGamePtr = 01d34cb0
;   undefined4 DAT_01c3dd10
;   undefined4 DAT_01c3dd11
;   undefined4 DAT_01c3dd12
;   ... and 3 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408a50
;   core_actor.cpp_isOfClassHash_FUN_0040c8c0
;   core_event.cpp_CEventList_getActorByVarName_FUN_00491860
;   core_mission.cpp_FUN_004fc740
;   crt_string.c__stricmp_FUN_005b8130
;   crt_unknown.c_FUN_005b7790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00488d00
        ;   Label: core_event.cpp_resolveActorByName_FUN_00488d00
    PUSH ESI                            ; 00488d01
    PUSH EDI                            ; 00488d02
    PUSH EBP                            ; 00488d03
    MOV EBX,dword ptr [ESP + 0x14]      ; 00488d04
    TEST EBX,EBX                        ; 00488d08
    JZ 0x00488d37                       ; 00488d0a
        ;   XREF to: 00488d37 (CONDITIONAL_JUMP)  ; LAB_00488d37
    MOV AH,byte ptr [EBX]               ; 00488d0c
    TEST AH,AH                          ; 00488d0e
    JZ 0x00488d37                       ; 00488d10
        ;   XREF to: 00488d37 (CONDITIONAL_JUMP)  ; LAB_00488d37
    CMP AH,0x40                         ; 00488d12
    JNZ 0x00488d62                      ; 00488d15
        ;   XREF to: 00488d62 (CONDITIONAL_JUMP)  ; LAB_00488d62
    PUSH EBX                            ; 00488d17
    MOV ESI,dword ptr [0x006141f0]      ; 00488d18 | DAT_006141f0
    PUSH ESI                            ; 00488d1e
    CALL core_event.cpp_CEventList_getActorByVarName_FUN_00491860 ; 00488d1f
        ;   XREF to: 00491860 (UNCONDITIONAL_CALL)  ; CDemonActor * core_event.cpp_CEventList_getActorByVarName_FUN_00491860(CEventList * this_ptr, char * name)
    ADD ESP,0x8                         ; 00488d24
    MOV ESI,EAX                         ; 00488d27
    TEST EAX,EAX                        ; 00488d29
    JNZ 0x00488d8f                      ; 00488d2b
        ;   XREF to: 00488d8f (CONDITIONAL_JUMP)  ; LAB_00488d8f
    MOV EAX,[0x005f61e4]                ; 00488d2d | DAT_005f61e4
        ;   Label: LAB_00488d2d
    POP EBP                             ; 00488d32
    POP EDI                             ; 00488d33
    POP ESI                             ; 00488d34
    POP EBX                             ; 00488d35
    RET                                 ; 00488d36
    MOV ESI,0x5d2e3e                    ; 00488d37 | = "Must specify actor name"
        ;   Label: LAB_00488d37
    MOV EDI,0x1c3dd10                   ; 00488d3c
    PUSH EDI                            ; 00488d41 | DAT_01c3dd10
    MOV AL,byte ptr [ESI]               ; 00488d42 | = "Must specify actor name" | s_st_specify_actor_name_005d2e3e+2
        ;   Label: LAB_00488d42
    MOV byte ptr [EDI],AL               ; 00488d44 | DAT_01c3dd10 | DAT_01c3dd12
    CMP AL,0x0                          ; 00488d46
    JZ 0x00488d5a                       ; 00488d48
        ;   XREF to: 00488d5a (CONDITIONAL_JUMP)  ; LAB_00488d5a
    MOV AL,byte ptr [ESI + 0x1]         ; 00488d4a | s_ust_specify_actor_name_005d2e3e+1 | s_t_specify_actor_name_005d2e3e+3
    ADD ESI,0x2                         ; 00488d4d
    MOV byte ptr [EDI + 0x1],AL         ; 00488d50 | DAT_01c3dd11 | DAT_01c3dd13
    ADD EDI,0x2                         ; 00488d53
    CMP AL,0x0                          ; 00488d56
    JNZ 0x00488d42                      ; 00488d58
        ;   XREF to: 00488d42 (CONDITIONAL_JUMP)  ; LAB_00488d42
    POP EDI                             ; 00488d5a
        ;   Label: LAB_00488d5a
    XOR EAX,EAX                         ; 00488d5b
    POP EBP                             ; 00488d5d
    POP EDI                             ; 00488d5e
    POP ESI                             ; 00488d5f
    POP EBX                             ; 00488d60
    RET                                 ; 00488d61
    PUSH 0x5d2e56                       ; 00488d62 | DAT_005d2e56
        ;   Label: LAB_00488d62
    PUSH EBX                            ; 00488d67
    CALL crt_string.c__stricmp_FUN_005b8130 ; 00488d68
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00488d6d
    TEST EAX,EAX                        ; 00488d70
    JNZ 0x00488dcd                      ; 00488d72
        ;   XREF to: 00488dcd (CONDITIONAL_JUMP)  ; LAB_00488dcd
    MOV EAX,[0x0061b120]                ; 00488d74 | g_CNetGamePtr
    CMP dword ptr [EAX],0x0             ; 00488d79 | g_CNetGameInstance
    JNZ 0x00488db4                      ; 00488d7c
        ;   XREF to: 00488db4 (CONDITIONAL_JUMP)  ; LAB_00488db4
    MOV ESI,dword ptr [0x01cedef4]      ; 00488d7e | DAT_01cedef4
    MOV ESI,dword ptr [ESI*0x4 + 0x1cedee4] ; 00488d84
    TEST ESI,ESI                        ; 00488d8b
    JZ 0x00488d2d                       ; 00488d8d
        ;   XREF to: 00488d2d (CONDITIONAL_JUMP)  ; LAB_00488d2d
    MOV EDI,dword ptr [ESP + 0x18]      ; 00488d8f
        ;   Label: LAB_00488d8f
    PUSH EDI                            ; 00488d93
    PUSH ESI                            ; 00488d94
    CALL core_actor.cpp_isOfClassHash_FUN_0040c8c0 ; 00488d95
        ;   XREF to: 0040c8c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClassHash_FUN_0040c8c0()
    ADD ESP,0x8                         ; 00488d9a
    TEST EAX,EAX                        ; 00488d9d
    JNZ 0x00488e26                      ; 00488d9f
        ;   XREF to: 00488e26 (CONDITIONAL_JUMP)  ; LAB_00488e26
    CMP byte ptr [EBX],0x40             ; 00488da5
    JNZ 0x00488dfd                      ; 00488da8
        ;   XREF to: 00488dfd (CONDITIONAL_JUMP)  ; LAB_00488dfd
    MOV EAX,[0x005f61e4]                ; 00488daa | DAT_005f61e4
    POP EBP                             ; 00488daf
    POP EDI                             ; 00488db0
    POP ESI                             ; 00488db1
    POP EBX                             ; 00488db2
    RET                                 ; 00488db3
    PUSH 0x5d2e58                       ; 00488db4 | = "Can't use '$' actor specifier in mult..."
        ;   Label: LAB_00488db4
    PUSH 0x1c3dd10                      ; 00488db9 | DAT_01c3dd10
    CALL crt_unknown.c_FUN_005b7790     ; 00488dbe
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x8                         ; 00488dc3
    XOR EAX,EAX                         ; 00488dc6
    POP EBP                             ; 00488dc8
    POP EDI                             ; 00488dc9
    POP ESI                             ; 00488dca
    POP EBX                             ; 00488dcb
    RET                                 ; 00488dcc
    PUSH EBX                            ; 00488dcd
        ;   Label: LAB_00488dcd
    MOV EDX,dword ptr [0x00618170]      ; 00488dce | DAT_00618170
    PUSH EDX                            ; 00488dd4
    CALL core_mission.cpp_FUN_004fc740  ; 00488dd5
        ;   XREF to: 004fc740 (UNCONDITIONAL_CALL)  ; CDemonActor * core_mission.cpp_FUN_004fc740(CDemonMission * this_ptr, char * name)
    ADD ESP,0x8                         ; 00488dda
    MOV ESI,EAX                         ; 00488ddd
    TEST EAX,EAX                        ; 00488ddf
    JNZ 0x00488d8f                      ; 00488de1
        ;   XREF to: 00488d8f (CONDITIONAL_JUMP)  ; LAB_00488d8f
    PUSH EBX                            ; 00488de3
    PUSH 0x5d2e86                       ; 00488de4 | = "Actor \"%s\" does not exist."
    PUSH 0x1c3dd10                      ; 00488de9 | DAT_01c3dd10
    CALL crt_unknown.c_FUN_005b7790     ; 00488dee
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0xc                         ; 00488df3
    XOR EAX,EAX                         ; 00488df6
    POP EBP                             ; 00488df8
    POP EDI                             ; 00488df9
    POP ESI                             ; 00488dfa
    POP EBX                             ; 00488dfb
    RET                                 ; 00488dfc
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00488dfd
        ;   Label: LAB_00488dfd
    PUSH EBP                            ; 00488e01
    PUSH ESI                            ; 00488e02
    CALL core_actor.cpp_FUN_00408a50    ; 00488e03
        ;   XREF to: 00408a50 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408a50()
    ADD ESP,0x4                         ; 00488e08
    PUSH EAX                            ; 00488e0b
    PUSH EBX                            ; 00488e0c
    PUSH 0x5d2ea1                       ; 00488e0d | = "Actor \"%s\" is of type %s, this comm..."
    PUSH 0x1c3dd10                      ; 00488e12 | DAT_01c3dd10
    CALL crt_unknown.c_FUN_005b7790     ; 00488e17
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x14                        ; 00488e1c
    XOR EAX,EAX                         ; 00488e1f
    POP EBP                             ; 00488e21
    POP EDI                             ; 00488e22
    POP ESI                             ; 00488e23
    POP EBX                             ; 00488e24
    RET                                 ; 00488e25
    MOV EAX,ESI                         ; 00488e26
        ;   Label: LAB_00488e26
    POP EBP                             ; 00488e28
    POP EDI                             ; 00488e29
    POP ESI                             ; 00488e2a
    POP EBX                             ; 00488e2b
    RET                                 ; 00488e2c

