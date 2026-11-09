; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_event_cpp_resolveActorByName_FUN_0048b950(char *param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[3]:
;   core_event.cpp_CEventList_evaluateAtom_FUN_00491f40 at 0049269f
;   core_event.cpp_FUN_0048c2e0 at 0048c760
;   core_event.cpp_parseVectorLocation_FUN_0048ba80 at 0048bb1e
;
; Referenced Globals:
;   TerminatedCString s_Must_specify_actor_name_005bddcb
;   undefined4 s_ust_specify_actor_name_005bddcb+1
;   undefined4 s_st_specify_actor_name_005bddcb+2
;   undefined4 s_t_specify_actor_name_005bddcb+3
;   undefined4 DAT_005bdde3
;   TerminatedCString s_Can_t_use_actor_specifie_005bdde5
;   TerminatedCString s_Actor_s_does_not_exist_005bde13
;   TerminatedCString s_Actor_s_is_of_type_s_thi_005bde2e
;   undefined4 DAT_005df604
;   undefined4 DAT_005fba60
;   undefined4 DAT_00600530
;   CNetGame* g_CNetGamePtr = 01da62f0
;   undefined4 DAT_01c734b0
;   undefined4 DAT_01c734b1
;   undefined4 DAT_01c734b2
;   ... and 3 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408870
;   core_actor.cpp_isOfClassHash_FUN_0040c810
;   core_event.cpp_CEventList_getActorByVarName_FUN_00495050
;   core_mission.cpp_FUN_004f6e90
;   crt_string.c__stricmp_FUN_005a3260
;   crt_unknown.c_FUN_005a28c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048b950
        ;   Label: core_event.cpp_resolveActorByName_FUN_0048b950
    PUSH ESI                            ; 0048b951
    PUSH EDI                            ; 0048b952
    PUSH EBP                            ; 0048b953
    MOV EBX,dword ptr [ESP + 0x14]      ; 0048b954
    TEST EBX,EBX                        ; 0048b958
    JZ 0x0048b987                       ; 0048b95a
        ;   XREF to: 0048b987 (CONDITIONAL_JUMP)  ; LAB_0048b987
    MOV AH,byte ptr [EBX]               ; 0048b95c
    TEST AH,AH                          ; 0048b95e
    JZ 0x0048b987                       ; 0048b960
        ;   XREF to: 0048b987 (CONDITIONAL_JUMP)  ; LAB_0048b987
    CMP AH,0x40                         ; 0048b962
    JNZ 0x0048b9b2                      ; 0048b965
        ;   XREF to: 0048b9b2 (CONDITIONAL_JUMP)  ; LAB_0048b9b2
    PUSH EBX                            ; 0048b967
    MOV ESI,dword ptr [0x005fba60]      ; 0048b968 | DAT_005fba60
    PUSH ESI                            ; 0048b96e
    CALL core_event.cpp_CEventList_getActorByVarName_FUN_00495050 ; 0048b96f
        ;   XREF to: 00495050 (UNCONDITIONAL_CALL)  ; CDemonActor * core_event.cpp_CEventList_getActorByVarName_FUN_00495050(CEventList * this_ptr, char * name)
    ADD ESP,0x8                         ; 0048b974
    MOV ESI,EAX                         ; 0048b977
    TEST EAX,EAX                        ; 0048b979
    JNZ 0x0048b9df                      ; 0048b97b
        ;   XREF to: 0048b9df (CONDITIONAL_JUMP)  ; LAB_0048b9df
    MOV EAX,[0x005df604]                ; 0048b97d | DAT_005df604
        ;   Label: LAB_0048b97d
    POP EBP                             ; 0048b982
    POP EDI                             ; 0048b983
    POP ESI                             ; 0048b984
    POP EBX                             ; 0048b985
    RET                                 ; 0048b986
    MOV ESI,0x5bddcb                    ; 0048b987 | = "Must specify actor name"
        ;   Label: LAB_0048b987
    MOV EDI,0x1c734b0                   ; 0048b98c
    PUSH EDI                            ; 0048b991 | DAT_01c734b0
    MOV AL,byte ptr [ESI]               ; 0048b992 | = "Must specify actor name" | s_st_specify_actor_name_005bddcb+2
        ;   Label: LAB_0048b992
    MOV byte ptr [EDI],AL               ; 0048b994 | DAT_01c734b0 | DAT_01c734b2
    CMP AL,0x0                          ; 0048b996
    JZ 0x0048b9aa                       ; 0048b998
        ;   XREF to: 0048b9aa (CONDITIONAL_JUMP)  ; LAB_0048b9aa
    MOV AL,byte ptr [ESI + 0x1]         ; 0048b99a | s_ust_specify_actor_name_005bddcb+1 | s_t_specify_actor_name_005bddcb+3
    ADD ESI,0x2                         ; 0048b99d
    MOV byte ptr [EDI + 0x1],AL         ; 0048b9a0 | DAT_01c734b1 | DAT_01c734b3
    ADD EDI,0x2                         ; 0048b9a3
    CMP AL,0x0                          ; 0048b9a6
    JNZ 0x0048b992                      ; 0048b9a8
        ;   XREF to: 0048b992 (CONDITIONAL_JUMP)  ; LAB_0048b992
    POP EDI                             ; 0048b9aa
        ;   Label: LAB_0048b9aa
    XOR EAX,EAX                         ; 0048b9ab
    POP EBP                             ; 0048b9ad
    POP EDI                             ; 0048b9ae
    POP ESI                             ; 0048b9af
    POP EBX                             ; 0048b9b0
    RET                                 ; 0048b9b1
    PUSH 0x5bdde3                       ; 0048b9b2 | DAT_005bdde3
        ;   Label: LAB_0048b9b2
    PUSH EBX                            ; 0048b9b7
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0048b9b8
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048b9bd
    TEST EAX,EAX                        ; 0048b9c0
    JNZ 0x0048ba1d                      ; 0048b9c2
        ;   XREF to: 0048ba1d (CONDITIONAL_JUMP)  ; LAB_0048ba1d
    MOV EAX,[0x00603450]                ; 0048b9c4 | g_CNetGamePtr
    CMP dword ptr [EAX],0x0             ; 0048b9c9 | g_CNetGameInstance
    JNZ 0x0048ba04                      ; 0048b9cc
        ;   XREF to: 0048ba04 (CONDITIONAL_JUMP)  ; LAB_0048ba04
    MOV ESI,dword ptr [0x01d5ba14]      ; 0048b9ce | DAT_01d5ba14
    MOV ESI,dword ptr [ESI*0x4 + 0x1d5ba04] ; 0048b9d4
    TEST ESI,ESI                        ; 0048b9db
    JZ 0x0048b97d                       ; 0048b9dd
        ;   XREF to: 0048b97d (CONDITIONAL_JUMP)  ; LAB_0048b97d
    MOV EDI,dword ptr [ESP + 0x18]      ; 0048b9df
        ;   Label: LAB_0048b9df
    PUSH EDI                            ; 0048b9e3
    PUSH ESI                            ; 0048b9e4
    CALL core_actor.cpp_isOfClassHash_FUN_0040c810 ; 0048b9e5
        ;   XREF to: 0040c810 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClassHash_FUN_0040c810()
    ADD ESP,0x8                         ; 0048b9ea
    TEST EAX,EAX                        ; 0048b9ed
    JNZ 0x0048ba76                      ; 0048b9ef
        ;   XREF to: 0048ba76 (CONDITIONAL_JUMP)  ; LAB_0048ba76
    CMP byte ptr [EBX],0x40             ; 0048b9f5
    JNZ 0x0048ba4d                      ; 0048b9f8
        ;   XREF to: 0048ba4d (CONDITIONAL_JUMP)  ; LAB_0048ba4d
    MOV EAX,[0x005df604]                ; 0048b9fa | DAT_005df604
    POP EBP                             ; 0048b9ff
    POP EDI                             ; 0048ba00
    POP ESI                             ; 0048ba01
    POP EBX                             ; 0048ba02
    RET                                 ; 0048ba03
    PUSH 0x5bdde5                       ; 0048ba04 | = "Can't use '$' actor specifier in mult..."
        ;   Label: LAB_0048ba04
    PUSH 0x1c734b0                      ; 0048ba09 | DAT_01c734b0
    CALL crt_unknown.c_FUN_005a28c0     ; 0048ba0e
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0048ba13
    XOR EAX,EAX                         ; 0048ba16
    POP EBP                             ; 0048ba18
    POP EDI                             ; 0048ba19
    POP ESI                             ; 0048ba1a
    POP EBX                             ; 0048ba1b
    RET                                 ; 0048ba1c
    PUSH EBX                            ; 0048ba1d
        ;   Label: LAB_0048ba1d
    MOV EDX,dword ptr [0x00600530]      ; 0048ba1e | DAT_00600530
    PUSH EDX                            ; 0048ba24
    CALL core_mission.cpp_FUN_004f6e90  ; 0048ba25
        ;   XREF to: 004f6e90 (UNCONDITIONAL_CALL)  ; CDemonActor * core_mission.cpp_FUN_004f6e90(CDemonMission * this_ptr, char * name)
    ADD ESP,0x8                         ; 0048ba2a
    MOV ESI,EAX                         ; 0048ba2d
    TEST EAX,EAX                        ; 0048ba2f
    JNZ 0x0048b9df                      ; 0048ba31
        ;   XREF to: 0048b9df (CONDITIONAL_JUMP)  ; LAB_0048b9df
    PUSH EBX                            ; 0048ba33
    PUSH 0x5bde13                       ; 0048ba34 | = "Actor \"%s\" does not exist."
    PUSH 0x1c734b0                      ; 0048ba39 | DAT_01c734b0
    CALL crt_unknown.c_FUN_005a28c0     ; 0048ba3e
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 0048ba43
    XOR EAX,EAX                         ; 0048ba46
    POP EBP                             ; 0048ba48
    POP EDI                             ; 0048ba49
    POP ESI                             ; 0048ba4a
    POP EBX                             ; 0048ba4b
    RET                                 ; 0048ba4c
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0048ba4d
        ;   Label: LAB_0048ba4d
    PUSH EBP                            ; 0048ba51
    PUSH ESI                            ; 0048ba52
    CALL core_actor.cpp_FUN_00408870    ; 0048ba53
        ;   XREF to: 00408870 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_FUN_00408870(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0048ba58
    PUSH EAX                            ; 0048ba5b
    PUSH EBX                            ; 0048ba5c
    PUSH 0x5bde2e                       ; 0048ba5d | = "Actor \"%s\" is of type %s, this comm..."
    PUSH 0x1c734b0                      ; 0048ba62 | DAT_01c734b0
    CALL crt_unknown.c_FUN_005a28c0     ; 0048ba67
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x14                        ; 0048ba6c
    XOR EAX,EAX                         ; 0048ba6f
    POP EBP                             ; 0048ba71
    POP EDI                             ; 0048ba72
    POP ESI                             ; 0048ba73
    POP EBX                             ; 0048ba74
    RET                                 ; 0048ba75
    MOV EAX,ESI                         ; 0048ba76
        ;   Label: LAB_0048ba76
    POP EBP                             ; 0048ba78
    POP EDI                             ; 0048ba79
    POP ESI                             ; 0048ba7a
    POP EBX                             ; 0048ba7b
    RET                                 ; 0048ba7c

