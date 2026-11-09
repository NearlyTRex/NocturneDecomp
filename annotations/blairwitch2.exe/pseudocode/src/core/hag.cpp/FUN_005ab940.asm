; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hag_cpp_FUN_005ab940(CDemonActor *param_1,uint param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_hagattack0_wav_005f0cae
;   undefined4 DAT_00600a74
;   undefined4 DAT_00600a78
;   undefined4 DAT_0061c068
;
; Called Functions:
;   core_actor.cpp_FUN_0040cfc0
;   core_sound.cpp_CSound_playActorSound_FUN_0055ae50
;   unkafter_basicene.cpp_FUN_0059f740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ab940
        ;   Label: core_hag.cpp_FUN_005ab940
    MOV EBX,dword ptr [ESP + 0x8]       ; 005ab941
    MOV EAX,dword ptr [ESP + 0xc]       ; 005ab945
    CMP EAX,0x20d1                      ; 005ab949
    JNC 0x005ab9c4                      ; 005ab94e
        ;   XREF to: 005ab9c4 (CONDITIONAL_JUMP)  ; LAB_005ab9c4
    CMP EAX,0x20d0                      ; 005ab954
    JZ 0x005ab95d                       ; 005ab959
        ;   XREF to: 005ab95d (CONDITIONAL_JUMP)  ; LAB_005ab95d
    POP EBX                             ; 005ab95b
        ;   Label: LAB_005ab95b
    RET                                 ; 005ab95c
    PUSH ESI                            ; 005ab95d
        ;   Label: LAB_005ab95d
    MOV ESI,dword ptr [EBX + 0x11854]   ; 005ab95e
    PUSH 0x40000000                     ; 005ab964
    PUSH ESI                            ; 005ab969
    PUSH dword ptr [0x00600a74]         ; 005ab96a | DAT_00600a74
    PUSH EBX                            ; 005ab970
    CALL unkafter_basicene.cpp_FUN_0059f740 ; 005ab971
        ;   XREF to: 0059f740 (UNCONDITIONAL_CALL)  ; undefined unkafter_basicene.cpp_FUN_0059f740()
    ADD ESP,0x10                        ; 005ab976
    POP ESI                             ; 005ab979
    POP EBX                             ; 005ab97a
    RET                                 ; 005ab97b
    MOV ECX,dword ptr [EBX + 0x11854]   ; 005ab97c
        ;   Label: LAB_005ab97c
    PUSH 0x40000000                     ; 005ab982
    PUSH ECX                            ; 005ab987
    PUSH dword ptr [0x00600a78]         ; 005ab988 | DAT_00600a78
    PUSH EBX                            ; 005ab98e
    CALL unkafter_basicene.cpp_FUN_0059f740 ; 005ab98f
        ;   XREF to: 0059f740 (UNCONDITIONAL_CALL)  ; undefined unkafter_basicene.cpp_FUN_0059f740()
    ADD ESP,0x10                        ; 005ab994
    POP EBX                             ; 005ab997
    RET                                 ; 005ab998
    PUSH 0x1                            ; 005ab999
        ;   Label: LAB_005ab999
    PUSH 0x0                            ; 005ab99b
    CALL core_actor.cpp_FUN_0040cfc0    ; 005ab99d
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 005ab9a2
    TEST EAX,EAX                        ; 005ab9a5
    JZ 0x005ab95b                       ; 005ab9a7
        ;   XREF to: 005ab95b (CONDITIONAL_JUMP)  ; LAB_005ab95b
    LEA EAX,[EBX + 0x20]                ; 005ab9a9
    PUSH EAX                            ; 005ab9ac
    PUSH 0x5f0cae                       ; 005ab9ad | = "hagattack0?.wav"
    PUSH EBX                            ; 005ab9b2
    MOV EDX,dword ptr [0x0061c068]      ; 005ab9b3 | DAT_0061c068
    PUSH EDX                            ; 005ab9b9
    CALL core_sound.cpp_CSound_playActorSound_FUN_0055ae50 ; 005ab9ba
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0055ae50(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 005ab9bf
    POP EBX                             ; 005ab9c2
    RET                                 ; 005ab9c3
    JBE 0x005ab97c                      ; 005ab9c4
        ;   XREF to: 005ab97c (CONDITIONAL_JUMP)  ; LAB_005ab97c
        ;   Label: LAB_005ab9c4
    CMP EAX,0x20d2                      ; 005ab9c6
    JZ 0x005ab999                       ; 005ab9cb
        ;   XREF to: 005ab999 (CONDITIONAL_JUMP)  ; LAB_005ab999
    POP EBX                             ; 005ab9cd
    RET                                 ; 005ab9ce

