; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_enemy_cpp_FUN_00489b80(int param_1,int param_2)
;
;
; XREF[25]:
;   core_baal.cpp_FUN_00597af0 at 00597b5a
;   core_boneguy.cpp_FUN_004192d0 at 0041934c
;   core_bugs.cpp_FUN_00421ad0 at 00421ae8
;   core_carved.cpp_FUN_00428a80 at 00428be1
;   core_constrct.cpp_FUN_00443f00 at 00443fc3
;   core_cow.cpp_FUN_004459b0 at 00445a0c
;   core_dog.cpp_FUN_004634d0 at 0046354b
;   core_gargoyle.cpp_FUN_004c61b0 at 004c62b4
;   core_ghoul.cpp_FUN_004c9400 at 004c95cb
;   core_hino.cpp_FUN_0059d360 at 0059d3da
;   ... and 15 more
;
; Referenced Globals:
;   undefined4 s_ShotInvulnerable_005bdc9d+2
;   undefined4 DAT_005fba60
;   undefined4 g_CBugsClassInfo.name_hash
;   undefined4 g_CCharacterClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_charactr.cpp_FUN_0042ff70
;   core_charactr.cpp_FUN_00430d60
;   core_event.cpp_CEventList_executeCommands_FUN_0048c150
;   sound_sndmain.cpp_killSfx_FUN_00556be0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00489b80
        ;   Label: core_enemy.cpp_FUN_00489b80
    PUSH ESI                            ; 00489b81
    PUSH EDI                            ; 00489b82
    PUSH EBP                            ; 00489b83
    MOV EBX,dword ptr [ESP + 0x14]      ; 00489b84
    MOV EDI,dword ptr [ESP + 0x18]      ; 00489b88
    CMP dword ptr [EBX + 0x27b0],0x0    ; 00489b8c
    JNZ 0x00489c34                      ; 00489b93
        ;   XREF to: 00489c34 (CONDITIONAL_JUMP)  ; LAB_00489c34
    PUSH EBX                            ; 00489b99
    MOV EAX,dword ptr [EBX + 0x154]     ; 00489b9a
    CALL dword ptr [EAX + 0xf8]         ; 00489ba0
    ADD ESP,0x4                         ; 00489ba6
    PUSH EDI                            ; 00489ba9
    PUSH EBX                            ; 00489baa
    CALL core_charactr.cpp_FUN_00430d60 ; 00489bab
        ;   XREF to: 00430d60 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00430d60()
    FLD float ptr [EDI + 0x4]           ; 00489bb0
    FLDZ                                ; 00489bb3
    ADD ESP,0x8                         ; 00489bb5
    FCOMPP                              ; 00489bb8
    FNSTSW AX                           ; 00489bba
    SAHF                                ; 00489bbc
    JNC 0x00489c05                      ; 00489bbd
        ;   XREF to: 00489c05 (CONDITIONAL_JUMP)  ; LAB_00489c05
    MOV ECX,dword ptr [0x007e2cec]      ; 00489bbf | g_CCharacterClassInfo.name_hash
    PUSH ECX                            ; 00489bc5
    MOV ESI,dword ptr [EDI + 0x38]      ; 00489bc6
    PUSH ESI                            ; 00489bc9
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00489bca
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 00489bcf
    MOV ESI,EAX                         ; 00489bd2
    TEST EAX,EAX                        ; 00489bd4
    JNZ 0x00489bed                      ; 00489bd6
        ;   XREF to: 00489bed (CONDITIONAL_JUMP)  ; LAB_00489bed
    MOV EBP,dword ptr [0x007e2cec]      ; 00489bd8 | g_CCharacterClassInfo.name_hash
    PUSH EBP                            ; 00489bde
    MOV EAX,dword ptr [EDI + 0x34]      ; 00489bdf
    PUSH EAX                            ; 00489be2
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00489be3
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 00489be8
    MOV ESI,EAX                         ; 00489beb
    TEST ESI,ESI                        ; 00489bed
        ;   Label: LAB_00489bed
    JZ 0x00489c05                       ; 00489bef
        ;   XREF to: 00489c05 (CONDITIONAL_JUMP)  ; LAB_00489c05
    MOV EDX,dword ptr [0x007e2a14]      ; 00489bf1 | g_CBugsClassInfo.name_hash
    PUSH EDX                            ; 00489bf7
    PUSH ESI                            ; 00489bf8
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00489bf9
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 00489bfe
    TEST EAX,EAX                        ; 00489c01
    JZ 0x00489c4d                       ; 00489c03
        ;   XREF to: 00489c4d (CONDITIONAL_JUMP)  ; LAB_00489c4d
    TEST dword ptr [EBX + 0x3254],0x7fffffff ; 00489c05
        ;   Label: LAB_00489c05
    JZ 0x00489c2f                       ; 00489c0f
        ;   XREF to: 00489c2f (CONDITIONAL_JUMP)  ; LAB_00489c2f
    CMP dword ptr [EBX + 0x3258],0x0    ; 00489c11
    JNZ 0x00489c2f                      ; 00489c18
        ;   XREF to: 00489c2f (CONDITIONAL_JUMP)  ; LAB_00489c2f
    CMP dword ptr [EDI + 0x30],0x71     ; 00489c1a
    JNZ 0x00489c2f                      ; 00489c1e
        ;   XREF to: 00489c2f (CONDITIONAL_JUMP)  ; LAB_00489c2f
    FLD float ptr [EBX + 0x2538]        ; 00489c20
    FLDZ                                ; 00489c26
    FCOMPP                              ; 00489c28
    FNSTSW AX                           ; 00489c2a
    SAHF                                ; 00489c2c
    JNC 0x00489c69                      ; 00489c2d
        ;   XREF to: 00489c69 (CONDITIONAL_JUMP)  ; LAB_00489c69
    POP EBP                             ; 00489c2f
        ;   Label: LAB_00489c2f
    POP EDI                             ; 00489c30
    POP ESI                             ; 00489c31
    POP EBX                             ; 00489c32
    RET                                 ; 00489c33
    PUSH 0x5bdc9f                       ; 00489c34 | s_ShotInvulnerable_005bdc9d+2
        ;   Label: LAB_00489c34
    MOV EDX,dword ptr [0x005fba60]      ; 00489c39 | DAT_005fba60
    PUSH EDX                            ; 00489c3f
    CALL core_event.cpp_CEventList_executeCommands_FUN_0048c150 ; 00489c40
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0048c150(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 00489c45
    POP EBP                             ; 00489c48
    POP EDI                             ; 00489c49
    POP ESI                             ; 00489c4a
    POP EBX                             ; 00489c4b
    RET                                 ; 00489c4c
    MOV dword ptr [EBX + 0xcde8],0x41700000 ; 00489c4d
        ;   Label: LAB_00489c4d
    MOV dword ptr [EBX + 0xcdd8],0x1    ; 00489c57
    MOV dword ptr [EBX + 0xcde4],ESI    ; 00489c61
    JMP 0x00489c05                      ; 00489c67
        ;   XREF to: 00489c05 (UNCONDITIONAL_JUMP)  ; LAB_00489c05
    MOV EAX,dword ptr [EBX + 0x325c]    ; 00489c69
        ;   Label: LAB_00489c69
    PUSH EAX                            ; 00489c6f
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 00489c70
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 00489c75
    PUSH EBX                            ; 00489c78
    CALL core_charactr.cpp_FUN_0042ff70 ; 00489c79
        ;   XREF to: 0042ff70 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042ff70()
    ADD ESP,0x4                         ; 00489c7e
    POP EBP                             ; 00489c81
    POP EDI                             ; 00489c82
    POP ESI                             ; 00489c83
    POP EBX                             ; 00489c84
    RET                                 ; 00489c85

