; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_event_cpp_parseDamageType_FUN_0047a8f0(undefined4 param_1,undefined4 *param_2)
;
;
; XREF[1]:
;   core_event.cpp_CEventList_executeCommand_FUN_0047ac50 at 0047ba2c
;
; Referenced Globals:
;   string s_generic_0057f54d
;   string s_bullet_0057f555
;   TerminatedCString s_Fire_0057f55c
;   string s_Blade_0057f561
;   string s_Stake_0057f567
;   TerminatedCString s_Gas_0057f56d
;   string s_electrocute_0057f571
;
; Called Functions:
;   crt_string.c__stricmp_FUN_00564520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047a8f0
        ;   Label: core_event.cpp_parseDamageType_FUN_0047a8f0
    PUSH ESI                            ; 0047a8f1
    MOV ESI,dword ptr [ESP + 0xc]       ; 0047a8f2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0047a8f6
    PUSH 0x57f54d                       ; 0047a8fa | = "generic"
    PUSH ESI                            ; 0047a8ff
    CALL crt_string.c__stricmp_FUN_00564520 ; 0047a900
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0047a905
    TEST EAX,EAX                        ; 0047a908
    JNZ 0x0047a91a                      ; 0047a90a
        ;   XREF to: 0047a91a (CONDITIONAL_JUMP)  ; LAB_0047a91a
    MOV dword ptr [EBX],0x64            ; 0047a90c
    MOV EAX,0x1                         ; 0047a912
    POP ESI                             ; 0047a917
    POP EBX                             ; 0047a918
    RET                                 ; 0047a919
    PUSH 0x57f555                       ; 0047a91a | = "bullet"
        ;   Label: LAB_0047a91a
    PUSH ESI                            ; 0047a91f
    CALL crt_string.c__stricmp_FUN_00564520 ; 0047a920
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0047a925
    TEST EAX,EAX                        ; 0047a928
    JNZ 0x0047a93a                      ; 0047a92a
        ;   XREF to: 0047a93a (CONDITIONAL_JUMP)  ; LAB_0047a93a
    MOV dword ptr [EBX],0x65            ; 0047a92c
    MOV EAX,0x1                         ; 0047a932
    POP ESI                             ; 0047a937
    POP EBX                             ; 0047a938
    RET                                 ; 0047a939
    PUSH 0x57f55c                       ; 0047a93a | = "Fire"
        ;   Label: LAB_0047a93a
    PUSH ESI                            ; 0047a93f
    CALL crt_string.c__stricmp_FUN_00564520 ; 0047a940
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0047a945
    TEST EAX,EAX                        ; 0047a948
    JNZ 0x0047a95a                      ; 0047a94a
        ;   XREF to: 0047a95a (CONDITIONAL_JUMP)  ; LAB_0047a95a
    MOV dword ptr [EBX],0x66            ; 0047a94c
    MOV EAX,0x1                         ; 0047a952
    POP ESI                             ; 0047a957
    POP EBX                             ; 0047a958
    RET                                 ; 0047a959
    PUSH 0x57f561                       ; 0047a95a | = "Blade"
        ;   Label: LAB_0047a95a
    PUSH ESI                            ; 0047a95f
    CALL crt_string.c__stricmp_FUN_00564520 ; 0047a960
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0047a965
    TEST EAX,EAX                        ; 0047a968
    JNZ 0x0047a97a                      ; 0047a96a
        ;   XREF to: 0047a97a (CONDITIONAL_JUMP)  ; LAB_0047a97a
    MOV dword ptr [EBX],0x67            ; 0047a96c
    MOV EAX,0x1                         ; 0047a972
    POP ESI                             ; 0047a977
    POP EBX                             ; 0047a978
    RET                                 ; 0047a979
    PUSH 0x57f567                       ; 0047a97a | = "Stake"
        ;   Label: LAB_0047a97a
    PUSH ESI                            ; 0047a97f
    CALL crt_string.c__stricmp_FUN_00564520 ; 0047a980
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0047a985
    TEST EAX,EAX                        ; 0047a988
    JNZ 0x0047a99a                      ; 0047a98a
        ;   XREF to: 0047a99a (CONDITIONAL_JUMP)  ; LAB_0047a99a
    MOV dword ptr [EBX],0x68            ; 0047a98c
    MOV EAX,0x1                         ; 0047a992
    POP ESI                             ; 0047a997
    POP EBX                             ; 0047a998
    RET                                 ; 0047a999
    PUSH 0x57f56d                       ; 0047a99a | = "Gas"
        ;   Label: LAB_0047a99a
    PUSH ESI                            ; 0047a99f
    CALL crt_string.c__stricmp_FUN_00564520 ; 0047a9a0
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0047a9a5
    TEST EAX,EAX                        ; 0047a9a8
    JNZ 0x0047a9ba                      ; 0047a9aa
        ;   XREF to: 0047a9ba (CONDITIONAL_JUMP)  ; LAB_0047a9ba
    MOV dword ptr [EBX],0x69            ; 0047a9ac
    MOV EAX,0x1                         ; 0047a9b2
    POP ESI                             ; 0047a9b7
    POP EBX                             ; 0047a9b8
    RET                                 ; 0047a9b9
    PUSH 0x57f571                       ; 0047a9ba | = "electrocute"
        ;   Label: LAB_0047a9ba
    PUSH ESI                            ; 0047a9bf
    CALL crt_string.c__stricmp_FUN_00564520 ; 0047a9c0
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0047a9c5
    TEST EAX,EAX                        ; 0047a9c8
    JNZ 0x0047a9da                      ; 0047a9ca
        ;   XREF to: 0047a9da (CONDITIONAL_JUMP)  ; LAB_0047a9da
    MOV dword ptr [EBX],0x6a            ; 0047a9cc
    MOV EAX,0x1                         ; 0047a9d2
    POP ESI                             ; 0047a9d7
    POP EBX                             ; 0047a9d8
    RET                                 ; 0047a9d9
    XOR EAX,EAX                         ; 0047a9da
        ;   Label: LAB_0047a9da
    POP ESI                             ; 0047a9dc
    POP EBX                             ; 0047a9dd
    RET                                 ; 0047a9de

