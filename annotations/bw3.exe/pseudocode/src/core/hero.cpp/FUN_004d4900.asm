; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_hero_cpp_FUN_004d4900(CHero *param_1,undefined4 param_2)
;
;
; XREF[2]:
;   core_prye.cpp_FUN_00518cd0 at 00519ed9
;   unkafter_prye.cpp_FUN_00525930 at 0052596d
;
; Referenced Globals:
;   TerminatedCString s_CBodyPart_005c50cb
;   TerminatedCString s_CBodyPart_005c50d6
;   TerminatedCString s_CBodyPart_005c50e1
;
; Called Functions:
;   core_hero.cpp_CHero_tryApproachNearbyActor_FUN_004d38b0
;   core_hero.cpp_CHero_tryPullLever_FUN_004d32d0
;   core_hero.cpp_FUN_004d2cf0
;   core_hero.cpp_FUN_004d2ea0
;   core_hero.cpp_FUN_004d3040
;   core_hero.cpp_FUN_004d3210
;   core_hero.cpp_FUN_004d3500
;   core_hero.cpp_FUN_004d3e20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d4900
        ;   Label: core_hero.cpp_FUN_004d4900
    PUSH ESI                            ; 004d4901
    PUSH EDI                            ; 004d4902
    PUSH EBP                            ; 004d4903
    MOV EBX,dword ptr [ESP + 0x14]      ; 004d4904
    CMP dword ptr [EBX + 0x20b68],0x0   ; 004d4908
    JZ 0x004d491e                       ; 004d490f
        ;   XREF to: 004d491e (CONDITIONAL_JUMP)  ; LAB_004d491e
    CMP dword ptr [EBX + 0x20b78],0x0   ; 004d4911
    JNZ 0x004d4a5f                      ; 004d4918
        ;   XREF to: 004d4a5f (CONDITIONAL_JUMP)  ; LAB_004d4a5f
    PUSH EBX                            ; 004d491e
        ;   Label: LAB_004d491e
    CALL core_hero.cpp_FUN_004d3210     ; 004d491f
        ;   XREF to: 004d3210 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d3210()
    ADD ESP,0x4                         ; 004d4924
    PUSH 0x4                            ; 004d4927
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d4929
    PUSH EBX                            ; 004d492f
    MOV dword ptr [EBX + 0x20b7c],0x0   ; 004d4930
    CALL dword ptr [EAX + 0x15c]        ; 004d493a
    ADD ESP,0x8                         ; 004d4940
    PUSH 0x5c50cb                       ; 004d4943 | = "!CBodyPart"
    PUSH EBX                            ; 004d4948
    XOR ESI,ESI                         ; 004d4949
    MOV EDI,EAX                         ; 004d494b
    CALL core_hero.cpp_FUN_004d3e20     ; 004d494d
        ;   XREF to: 004d3e20 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d3e20()
    MOV EBP,dword ptr [EBX + 0x20b68]   ; 004d4952
    ADD ESP,0x8                         ; 004d4958
    CMP EBP,0x5                         ; 004d495b
    JNZ 0x004d4965                      ; 004d495e
        ;   XREF to: 004d4965 (CONDITIONAL_JUMP)  ; LAB_004d4965
    MOV ESI,0x1                         ; 004d4960
    PUSH 0x1                            ; 004d4965
        ;   Label: LAB_004d4965
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d4967
    PUSH EBX                            ; 004d496d
    CALL dword ptr [EAX + 0x15c]        ; 004d496e
    ADD ESP,0x8                         ; 004d4974
    TEST EAX,EAX                        ; 004d4977
    JZ 0x004d498c                       ; 004d4979
        ;   XREF to: 004d498c (CONDITIONAL_JUMP)  ; LAB_004d498c
    PUSH EBX                            ; 004d497b
    CALL core_hero.cpp_FUN_004d2cf0     ; 004d497c
        ;   XREF to: 004d2cf0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d2cf0()
    ADD ESP,0x4                         ; 004d4981
    TEST EAX,EAX                        ; 004d4984
    JNZ 0x004d4a5f                      ; 004d4986
        ;   XREF to: 004d4a5f (CONDITIONAL_JUMP)  ; LAB_004d4a5f
    PUSH 0x2                            ; 004d498c
        ;   Label: LAB_004d498c
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d498e
    PUSH EBX                            ; 004d4994
    CALL dword ptr [EAX + 0x15c]        ; 004d4995
    ADD ESP,0x8                         ; 004d499b
    TEST EAX,EAX                        ; 004d499e
    JZ 0x004d49b3                       ; 004d49a0
        ;   XREF to: 004d49b3 (CONDITIONAL_JUMP)  ; LAB_004d49b3
    PUSH EBX                            ; 004d49a2
    CALL core_hero.cpp_FUN_004d2ea0     ; 004d49a3
        ;   XREF to: 004d2ea0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_FUN_004d2ea0(CHero * this_ptr)
    ADD ESP,0x4                         ; 004d49a8
    TEST EAX,EAX                        ; 004d49ab
    JNZ 0x004d4a5f                      ; 004d49ad
        ;   XREF to: 004d4a5f (CONDITIONAL_JUMP)  ; LAB_004d4a5f
    TEST ESI,ESI                        ; 004d49b3
        ;   Label: LAB_004d49b3
    JZ 0x004d4a69                       ; 004d49b5
        ;   XREF to: 004d4a69 (CONDITIONAL_JUMP)  ; LAB_004d4a69
    PUSH 0x3                            ; 004d49bb
        ;   Label: LAB_004d49bb
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d49bd
    PUSH EBX                            ; 004d49c3
    CALL dword ptr [EAX + 0x15c]        ; 004d49c4
    ADD ESP,0x8                         ; 004d49ca
    TEST EAX,EAX                        ; 004d49cd
    JZ 0x004d49e7                       ; 004d49cf
        ;   XREF to: 004d49e7 (CONDITIONAL_JUMP)  ; LAB_004d49e7
    MOV EAX,dword ptr [ESP + 0x18]      ; 004d49d1
    PUSH EAX                            ; 004d49d5
    PUSH EBX                            ; 004d49d6
    CALL core_hero.cpp_FUN_004d3040     ; 004d49d7
        ;   XREF to: 004d3040 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d3040()
    ADD ESP,0x8                         ; 004d49dc
    TEST EAX,EAX                        ; 004d49df
    JNZ 0x004d4a7f                      ; 004d49e1
        ;   XREF to: 004d4a7f (CONDITIONAL_JUMP)  ; LAB_004d4a7f
    PUSH 0x8                            ; 004d49e7
        ;   Label: LAB_004d49e7
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d49e9
    PUSH EBX                            ; 004d49ef
    CALL dword ptr [EAX + 0x15c]        ; 004d49f0
    ADD ESP,0x8                         ; 004d49f6
    TEST EAX,EAX                        ; 004d49f9
    JZ 0x004d4a0e                       ; 004d49fb
        ;   XREF to: 004d4a0e (CONDITIONAL_JUMP)  ; LAB_004d4a0e
    PUSH EBX                            ; 004d49fd
    CALL core_hero.cpp_CHero_tryPullLever_FUN_004d32d0 ; 004d49fe
        ;   XREF to: 004d32d0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryPullLever_FUN_004d32d0(CHero * this_ptr)
    ADD ESP,0x4                         ; 004d4a03
    TEST EAX,EAX                        ; 004d4a06
    JNZ 0x004d4a7f                      ; 004d4a08
        ;   XREF to: 004d4a7f (CONDITIONAL_JUMP)  ; LAB_004d4a7f
    PUSH 0x9                            ; 004d4a0e
        ;   Label: LAB_004d4a0e
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d4a10
    PUSH EBX                            ; 004d4a16
    CALL dword ptr [EAX + 0x15c]        ; 004d4a17
    ADD ESP,0x8                         ; 004d4a1d
    TEST EAX,EAX                        ; 004d4a20
    JZ 0x004d4a31                       ; 004d4a22
        ;   XREF to: 004d4a31 (CONDITIONAL_JUMP)  ; LAB_004d4a31
    PUSH EBX                            ; 004d4a24
    CALL core_hero.cpp_FUN_004d3500     ; 004d4a25
        ;   XREF to: 004d3500 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d3500()
    ADD ESP,0x4                         ; 004d4a2a
    TEST EAX,EAX                        ; 004d4a2d
    JNZ 0x004d4a7f                      ; 004d4a2f
        ;   XREF to: 004d4a7f (CONDITIONAL_JUMP)  ; LAB_004d4a7f
    PUSH 0xa                            ; 004d4a31
        ;   Label: LAB_004d4a31
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d4a33
    PUSH EBX                            ; 004d4a39
    CALL dword ptr [EAX + 0x15c]        ; 004d4a3a
    ADD ESP,0x8                         ; 004d4a40
    TEST EAX,EAX                        ; 004d4a43
    JZ 0x004d4a54                       ; 004d4a45
        ;   XREF to: 004d4a54 (CONDITIONAL_JUMP)  ; LAB_004d4a54
    PUSH EBX                            ; 004d4a47
    CALL core_hero.cpp_CHero_tryApproachNearbyActor_FUN_004d38b0 ; 004d4a48
        ;   XREF to: 004d38b0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryApproachNearbyActor_FUN_004d38b0(CHero * this_ptr)
    ADD ESP,0x4                         ; 004d4a4d
    TEST EAX,EAX                        ; 004d4a50
    JNZ 0x004d4a7f                      ; 004d4a52
        ;   XREF to: 004d4a7f (CONDITIONAL_JUMP)  ; LAB_004d4a7f
    TEST EDI,EDI                        ; 004d4a54
        ;   Label: LAB_004d4a54
    JNZ 0x004d4a89                      ; 004d4a56
        ;   XREF to: 004d4a89 (CONDITIONAL_JUMP)  ; LAB_004d4a89
    XOR EAX,EAX                         ; 004d4a58
        ;   Label: LAB_004d4a58
    POP EBP                             ; 004d4a5a
    POP EDI                             ; 004d4a5b
    POP ESI                             ; 004d4a5c
    POP EBX                             ; 004d4a5d
    RET                                 ; 004d4a5e
    MOV EAX,0x1                         ; 004d4a5f
        ;   Label: LAB_004d4a5f
    POP EBP                             ; 004d4a64
    POP EDI                             ; 004d4a65
    POP ESI                             ; 004d4a66
    POP EBX                             ; 004d4a67
    RET                                 ; 004d4a68
    PUSH 0x5c50d6                       ; 004d4a69 | = "!CBodyPart"
        ;   Label: LAB_004d4a69
    PUSH EBX                            ; 004d4a6e
    CALL core_hero.cpp_FUN_004d3e20     ; 004d4a6f
        ;   XREF to: 004d3e20 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d3e20()
    ADD ESP,0x8                         ; 004d4a74
    TEST EAX,EAX                        ; 004d4a77
    JZ 0x004d49bb                       ; 004d4a79
        ;   XREF to: 004d49bb (CONDITIONAL_JUMP)  ; LAB_004d49bb
    MOV EAX,0x1                         ; 004d4a7f
        ;   Label: LAB_004d4a7f
    POP EBP                             ; 004d4a84
    POP EDI                             ; 004d4a85
    POP ESI                             ; 004d4a86
    POP EBX                             ; 004d4a87
    RET                                 ; 004d4a88
    PUSH 0x5c50e1                       ; 004d4a89 | = "CBodyPart"
        ;   Label: LAB_004d4a89
    PUSH EBX                            ; 004d4a8e
    CALL core_hero.cpp_FUN_004d3e20     ; 004d4a8f
        ;   XREF to: 004d3e20 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d3e20()
    ADD ESP,0x8                         ; 004d4a94
    TEST EAX,EAX                        ; 004d4a97
    JZ 0x004d4a58                       ; 004d4a99
        ;   XREF to: 004d4a58 (CONDITIONAL_JUMP)  ; LAB_004d4a58
    MOV EAX,0x1                         ; 004d4a9b
    POP EBP                             ; 004d4aa0
    POP EDI                             ; 004d4aa1
    POP ESI                             ; 004d4aa2
    POP EBX                             ; 004d4aa3
    RET                                 ; 004d4aa4

