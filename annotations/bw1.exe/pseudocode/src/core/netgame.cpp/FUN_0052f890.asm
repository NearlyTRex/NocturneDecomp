; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0052f890(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_0052d450 at 0052dc93
;   FUN_0052f200 at 0052f3fe
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_005ebf7f
;   TerminatedCString s_CNetGame_removePlayer_in_005ebf93
;   TerminatedCString s_core_netgame_cpp_005ebfc1
;   TerminatedCString s_CNetGame_removePlayer_tr_005ebfd5
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01d6dfb8
;
; Called Functions:
;   FUN_005030e0
;   FUN_005c25d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052f890
        ;   Label: FUN_0052f890
    PUSH ESI                            ; 0052f891
    PUSH EDI                            ; 0052f892
    PUSH EBP                            ; 0052f893
    SUB ESP,0x8                         ; 0052f894
    MOV EDX,dword ptr [ESP + 0x20]      ; 0052f897
    TEST EDX,EDX                        ; 0052f89b
    JL 0x0052f8a8                       ; 0052f89d
        ;   XREF to: 0052f8a8 (CONDITIONAL_JUMP)  ; LAB_0052f8a8
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0052f89f
    CMP EDX,dword ptr [EBX + 0x1c]      ; 0052f8a3
    JL 0x0052f8cb                       ; 0052f8a6
        ;   XREF to: 0052f8cb (CONDITIONAL_JUMP)  ; LAB_0052f8cb
    MOV EBX,0x5ebf7f                    ; 0052f8a8 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_0052f8a8
    MOV ESI,0x862                       ; 0052f8ad
    PUSH 0x5ebf93                       ; 0052f8b2 | = "CNetGame::removePlayer - invalid play..."
    MOV dword ptr [0x01d1d400],EBX      ; 0052f8b7 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0052f8bd | DAT_01d1d404
    CALL FUN_005030e0                   ; 0052f8c3
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0052f8c8
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0052f8cb
        ;   Label: LAB_0052f8cb
    MOV EAX,dword ptr [ESP + 0x20]      ; 0052f8cf
    CMP EAX,dword ptr [EBX + 0x11c]     ; 0052f8d3
    JNZ 0x0052f8fd                      ; 0052f8d9
        ;   XREF to: 0052f8fd (CONDITIONAL_JUMP)  ; LAB_0052f8fd
    MOV EBP,0x5ebfc1                    ; 0052f8db | = "..\\core\\netgame.cpp"
    MOV EAX,0x869                       ; 0052f8e0
    PUSH 0x5ebfd5                       ; 0052f8e5 | = "CNetGame::removePlayer - tried to rem..."
    MOV dword ptr [0x01d1d400],EBP      ; 0052f8ea | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0052f8f0 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0052f8f5
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0052f8fa
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0052f8fd
        ;   Label: LAB_0052f8fd
    MOV EAX,dword ptr [ESP + 0x20]      ; 0052f901
    CMP EAX,dword ptr [EBX + 0x118]     ; 0052f905
    JNZ 0x0052f917                      ; 0052f90b
        ;   XREF to: 0052f917 (CONDITIONAL_JUMP)  ; LAB_0052f917
    MOV dword ptr [EBX + 0x118],0xffffffff ; 0052f90d
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0052f917
        ;   Label: LAB_0052f917
    MOV EAX,dword ptr [ESP + 0x20]      ; 0052f91b
    CMP EAX,dword ptr [EBX + 0x11c]     ; 0052f91f
    JNZ 0x0052f931                      ; 0052f925
        ;   XREF to: 0052f931 (CONDITIONAL_JUMP)  ; LAB_0052f931
    MOV dword ptr [EBX + 0x11c],0xffffffff ; 0052f927
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0052f931
        ;   Label: LAB_0052f931
    MOV EBX,dword ptr [EAX + 0x1c]      ; 0052f935
    DEC EBX                             ; 0052f938
    MOV ESI,dword ptr [ESP + 0x20]      ; 0052f939
    MOV dword ptr [EAX + 0x1c],EBX      ; 0052f93d
    MOV EAX,EBX                         ; 0052f940
    SUB EAX,ESI                         ; 0052f942
    SHL EAX,0x2                         ; 0052f944
    MOV EBX,EAX                         ; 0052f947
    SHL EAX,0x5                         ; 0052f949
    SUB EAX,EBX                         ; 0052f94c
    PUSH EAX                            ; 0052f94e
    LEA EAX,[ESI + 0x1]                 ; 0052f94f
    MOV dword ptr [ESP + 0x4],EAX       ; 0052f952
    SHL EAX,0x2                         ; 0052f956
    MOV ESI,dword ptr [ESP + 0x20]      ; 0052f959
    MOV EBX,EAX                         ; 0052f95d
    SHL EAX,0x5                         ; 0052f95f
    ADD ESI,0x20                        ; 0052f962
    SUB EAX,EBX                         ; 0052f965
    ADD EAX,ESI                         ; 0052f967
    PUSH EAX                            ; 0052f969
    MOV EAX,dword ptr [ESP + 0x28]      ; 0052f96a
    SHL EAX,0x2                         ; 0052f96e
    MOV EBX,EAX                         ; 0052f971
    SHL EAX,0x5                         ; 0052f973
    SUB EAX,EBX                         ; 0052f976
    ADD EAX,ESI                         ; 0052f978
    PUSH EAX                            ; 0052f97a
    CALL FUN_005c25d0                   ; 0052f97b
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c25d0()
    XOR ESI,ESI                         ; 0052f980
    MOV EDI,dword ptr [0x01d6dfb8]      ; 0052f982 | DAT_01d6dfb8
    ADD ESP,0xc                         ; 0052f988
    TEST EDI,EDI                        ; 0052f98b
    JLE 0x0052fa30                      ; 0052f98d
        ;   XREF to: 0052fa30 (CONDITIONAL_JUMP)  ; LAB_0052fa30
    MOV EAX,dword ptr [ESP + 0x20]      ; 0052f993
    MOV EDI,dword ptr [ESP + 0x20]      ; 0052f997
    MOV EBX,dword ptr [ESP]             ; 0052f99b
    SHL EAX,0x2                         ; 0052f99e
    ADD EDI,0x8                         ; 0052f9a1
    ADD EBX,0x8                         ; 0052f9a4
    LEA EBP,[EAX + 0xc]                 ; 0052f9a7
    ADD EDI,0x1d6dfbc                   ; 0052f9aa
    ADD EAX,0x10                        ; 0052f9b0
    ADD EBX,0x1d6dfbc                   ; 0052f9b3
    ADD EAX,0x1d6dfbc                   ; 0052f9b9
    ADD EBP,0x1d6dfbc                   ; 0052f9be
    MOV dword ptr [ESP + 0x4],EAX       ; 0052f9c4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0052f9c8
        ;   Label: LAB_0052f9c8
    MOV EDX,dword ptr [ESP + 0x20]      ; 0052f9cc
    MOV EAX,dword ptr [EAX + 0x1c]      ; 0052f9d0
    SUB EAX,EDX                         ; 0052f9d3
    PUSH EAX                            ; 0052f9d5
    PUSH EBX                            ; 0052f9d6
    PUSH EDI                            ; 0052f9d7
    CALL FUN_005c25d0                   ; 0052f9d8
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c25d0()
    ADD ESP,0xc                         ; 0052f9dd
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0052f9e0
    MOV ECX,dword ptr [ESP + 0x20]      ; 0052f9e4
    MOV EAX,dword ptr [EAX + 0x1c]      ; 0052f9e8
    SUB EAX,ECX                         ; 0052f9eb
    SHL EAX,0x2                         ; 0052f9ed
    PUSH EAX                            ; 0052f9f0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0052f9f1
    PUSH EAX                            ; 0052f9f5
    PUSH EBP                            ; 0052f9f6
    INC ESI                             ; 0052f9f7
    ADD EBX,0x114                       ; 0052f9f8
    CALL FUN_005c25d0                   ; 0052f9fe
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c25d0()
    ADD ESP,0xc                         ; 0052fa03
    ADD EDI,0x114                       ; 0052fa06
    MOV EDX,dword ptr [ESP + 0x4]       ; 0052fa0c
    MOV ECX,dword ptr [0x01d6dfb8]      ; 0052fa10 | DAT_01d6dfb8
    ADD EDX,0x114                       ; 0052fa16
    ADD EBP,0x114                       ; 0052fa1c
    MOV dword ptr [ESP + 0x4],EDX       ; 0052fa22
    CMP ESI,ECX                         ; 0052fa26
    JL 0x0052f9c8                       ; 0052fa28
        ;   XREF to: 0052f9c8 (CONDITIONAL_JUMP)  ; LAB_0052f9c8
    LEA EAX,[EAX]                       ; 0052fa2a
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0052fa30
        ;   Label: LAB_0052fa30
    MOV EAX,dword ptr [ESP + 0x20]      ; 0052fa34
    MOV ESI,dword ptr [EBX + 0x118]     ; 0052fa38
    CMP EAX,ESI                         ; 0052fa3e
    JGE 0x0052fa4b                      ; 0052fa40
        ;   XREF to: 0052fa4b (CONDITIONAL_JUMP)  ; LAB_0052fa4b
    LEA EDI,[ESI + -0x1]                ; 0052fa42
    MOV dword ptr [EBX + 0x118],EDI     ; 0052fa45
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0052fa4b
        ;   Label: LAB_0052fa4b
    MOV EAX,dword ptr [ESP + 0x20]      ; 0052fa4f
    MOV EBP,dword ptr [EBX + 0x11c]     ; 0052fa53
    CMP EAX,EBP                         ; 0052fa59
    JL 0x0052fa65                       ; 0052fa5b
        ;   XREF to: 0052fa65 (CONDITIONAL_JUMP)  ; LAB_0052fa65
    ADD ESP,0x8                         ; 0052fa5d
    POP EBP                             ; 0052fa60
    POP EDI                             ; 0052fa61
    POP ESI                             ; 0052fa62
    POP EBX                             ; 0052fa63
    RET                                 ; 0052fa64
    LEA EDX,[EBP + -0x1]                ; 0052fa65
        ;   Label: LAB_0052fa65
    MOV dword ptr [EBX + 0x11c],EDX     ; 0052fa68
    ADD ESP,0x8                         ; 0052fa6e
    POP EBP                             ; 0052fa71
    POP EDI                             ; 0052fa72
    POP ESI                             ; 0052fa73
    POP EBX                             ; 0052fa74
    RET                                 ; 0052fa75

