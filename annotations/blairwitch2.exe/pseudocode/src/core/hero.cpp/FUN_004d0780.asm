; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_hero_cpp_FUN_004d0780(CHero *param_1,undefined4 param_2)
;
;
; XREF[2]:
;   core_doc.cpp_FUN_00450c60 at 00451b13
;   core_doc.cpp_FUN_0045c960 at 0045c9a3
;
; Referenced Globals:
;   TerminatedCString s_CBodyPart_005da022
;   TerminatedCString s_CBodyPart_005da02d
;
; Called Functions:
;   core_hero.cpp_CHero_tryApproachNearbyActor_FUN_004cf890
;   core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004cee90
;   core_hero.cpp_FUN_004cec50
;   core_hero.cpp_FUN_004cf030
;   core_hero.cpp_FUN_004cf200
;   core_hero.cpp_FUN_004cf2b0
;   core_hero.cpp_FUN_004cf4e0
;   core_hero.cpp_FUN_004cfd60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d0780
        ;   Label: core_hero.cpp_FUN_004d0780
    PUSH ESI                            ; 004d0781
    MOV EBX,dword ptr [ESP + 0xc]       ; 004d0782
    PUSH EBX                            ; 004d0786
    CALL core_hero.cpp_FUN_004cf200     ; 004d0787
        ;   XREF to: 004cf200 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cf200()
    ADD ESP,0x4                         ; 004d078c
    PUSH 0x1                            ; 004d078f
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004d0791
    PUSH EBX                            ; 004d0797
    MOV dword ptr [EBX + 0x25600],0x0   ; 004d0798
    CALL dword ptr [EAX + 0x168]        ; 004d07a2
    ADD ESP,0x8                         ; 004d07a8
    TEST EAX,EAX                        ; 004d07ab
    JZ 0x004d07c0                       ; 004d07ad
        ;   XREF to: 004d07c0 (CONDITIONAL_JUMP)  ; LAB_004d07c0
    PUSH EBX                            ; 004d07af
    CALL core_hero.cpp_FUN_004cec50     ; 004d07b0
        ;   XREF to: 004cec50 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cec50()
    ADD ESP,0x4                         ; 004d07b5
    TEST EAX,EAX                        ; 004d07b8
    JNZ 0x004d08b3                      ; 004d07ba
        ;   XREF to: 004d08b3 (CONDITIONAL_JUMP)  ; LAB_004d08b3
    PUSH 0x2                            ; 004d07c0
        ;   Label: LAB_004d07c0
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004d07c2
    PUSH EBX                            ; 004d07c8
    CALL dword ptr [EAX + 0x168]        ; 004d07c9
    ADD ESP,0x8                         ; 004d07cf
    TEST EAX,EAX                        ; 004d07d2
    JZ 0x004d07e7                       ; 004d07d4
        ;   XREF to: 004d07e7 (CONDITIONAL_JUMP)  ; LAB_004d07e7
    PUSH EBX                            ; 004d07d6
    CALL core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004cee90 ; 004d07d7
        ;   XREF to: 004cee90 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004cee90(CHero * this_ptr)
    ADD ESP,0x4                         ; 004d07dc
    TEST EAX,EAX                        ; 004d07df
    JNZ 0x004d08b3                      ; 004d07e1
        ;   XREF to: 004d08b3 (CONDITIONAL_JUMP)  ; LAB_004d08b3
    PUSH 0x4                            ; 004d07e7
        ;   Label: LAB_004d07e7
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004d07e9
    PUSH EBX                            ; 004d07ef
    CALL dword ptr [EAX + 0x168]        ; 004d07f0
    ADD ESP,0x8                         ; 004d07f6
    MOV ESI,EAX                         ; 004d07f9
    TEST EAX,EAX                        ; 004d07fb
    JZ 0x004d0815                       ; 004d07fd
        ;   XREF to: 004d0815 (CONDITIONAL_JUMP)  ; LAB_004d0815
    PUSH 0x5da022                       ; 004d07ff | = "!CBodyPart"
    PUSH EBX                            ; 004d0804
    CALL core_hero.cpp_FUN_004cfd60     ; 004d0805
        ;   XREF to: 004cfd60 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cfd60()
    ADD ESP,0x8                         ; 004d080a
    TEST EAX,EAX                        ; 004d080d
    JNZ 0x004d08b3                      ; 004d080f
        ;   XREF to: 004d08b3 (CONDITIONAL_JUMP)  ; LAB_004d08b3
    PUSH 0x3                            ; 004d0815
        ;   Label: LAB_004d0815
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004d0817
    PUSH EBX                            ; 004d081d
    CALL dword ptr [EAX + 0x168]        ; 004d081e
    ADD ESP,0x8                         ; 004d0824
    TEST EAX,EAX                        ; 004d0827
    JZ 0x004d0841                       ; 004d0829
        ;   XREF to: 004d0841 (CONDITIONAL_JUMP)  ; LAB_004d0841
    MOV EDX,dword ptr [ESP + 0x10]      ; 004d082b
    PUSH EDX                            ; 004d082f
    PUSH EBX                            ; 004d0830
    CALL core_hero.cpp_FUN_004cf030     ; 004d0831
        ;   XREF to: 004cf030 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cf030()
    ADD ESP,0x8                         ; 004d0836
    TEST EAX,EAX                        ; 004d0839
    JNZ 0x004d08b3                      ; 004d083b
        ;   XREF to: 004d08b3 (CONDITIONAL_JUMP)  ; LAB_004d08b3
    PUSH 0x7                            ; 004d0841
        ;   Label: LAB_004d0841
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004d0843
    PUSH EBX                            ; 004d0849
    CALL dword ptr [EAX + 0x168]        ; 004d084a
    ADD ESP,0x8                         ; 004d0850
    TEST EAX,EAX                        ; 004d0853
    JZ 0x004d0864                       ; 004d0855
        ;   XREF to: 004d0864 (CONDITIONAL_JUMP)  ; LAB_004d0864
    PUSH EBX                            ; 004d0857
    CALL core_hero.cpp_FUN_004cf2b0     ; 004d0858
        ;   XREF to: 004cf2b0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_FUN_004cf2b0(CHero * this_ptr)
    ADD ESP,0x4                         ; 004d085d
    TEST EAX,EAX                        ; 004d0860
    JNZ 0x004d08b3                      ; 004d0862
        ;   XREF to: 004d08b3 (CONDITIONAL_JUMP)  ; LAB_004d08b3
    PUSH 0x8                            ; 004d0864
        ;   Label: LAB_004d0864
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004d0866
    PUSH EBX                            ; 004d086c
    CALL dword ptr [EAX + 0x168]        ; 004d086d
    ADD ESP,0x8                         ; 004d0873
    TEST EAX,EAX                        ; 004d0876
    JZ 0x004d0887                       ; 004d0878
        ;   XREF to: 004d0887 (CONDITIONAL_JUMP)  ; LAB_004d0887
    PUSH EBX                            ; 004d087a
    CALL core_hero.cpp_FUN_004cf4e0     ; 004d087b
        ;   XREF to: 004cf4e0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cf4e0()
    ADD ESP,0x4                         ; 004d0880
    TEST EAX,EAX                        ; 004d0883
    JNZ 0x004d08b3                      ; 004d0885
        ;   XREF to: 004d08b3 (CONDITIONAL_JUMP)  ; LAB_004d08b3
    PUSH 0x9                            ; 004d0887
        ;   Label: LAB_004d0887
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004d0889
    PUSH EBX                            ; 004d088f
    CALL dword ptr [EAX + 0x168]        ; 004d0890
    ADD ESP,0x8                         ; 004d0896
    TEST EAX,EAX                        ; 004d0899
    JZ 0x004d08aa                       ; 004d089b
        ;   XREF to: 004d08aa (CONDITIONAL_JUMP)  ; LAB_004d08aa
    PUSH EBX                            ; 004d089d
    CALL core_hero.cpp_CHero_tryApproachNearbyActor_FUN_004cf890 ; 004d089e
        ;   XREF to: 004cf890 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryApproachNearbyActor_FUN_004cf890(CHero * this_ptr)
    ADD ESP,0x4                         ; 004d08a3
    TEST EAX,EAX                        ; 004d08a6
    JNZ 0x004d08b3                      ; 004d08a8
        ;   XREF to: 004d08b3 (CONDITIONAL_JUMP)  ; LAB_004d08b3
    TEST ESI,ESI                        ; 004d08aa
        ;   Label: LAB_004d08aa
    JNZ 0x004d08bb                      ; 004d08ac
        ;   XREF to: 004d08bb (CONDITIONAL_JUMP)  ; LAB_004d08bb
    XOR EAX,EAX                         ; 004d08ae
        ;   Label: LAB_004d08ae
    POP ESI                             ; 004d08b0
    POP EBX                             ; 004d08b1
    RET                                 ; 004d08b2
    MOV EAX,0x1                         ; 004d08b3
        ;   Label: LAB_004d08b3
    POP ESI                             ; 004d08b8
    POP EBX                             ; 004d08b9
    RET                                 ; 004d08ba
    PUSH 0x5da02d                       ; 004d08bb | = "CBodyPart"
        ;   Label: LAB_004d08bb
    PUSH EBX                            ; 004d08c0
    CALL core_hero.cpp_FUN_004cfd60     ; 004d08c1
        ;   XREF to: 004cfd60 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cfd60()
    ADD ESP,0x8                         ; 004d08c6
    TEST EAX,EAX                        ; 004d08c9
    JZ 0x004d08ae                       ; 004d08cb
        ;   XREF to: 004d08ae (CONDITIONAL_JUMP)  ; LAB_004d08ae
    MOV EAX,0x1                         ; 004d08cd
    POP ESI                             ; 004d08d2
    POP EBX                             ; 004d08d3
    RET                                 ; 004d08d4

