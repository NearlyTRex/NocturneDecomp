; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d8720(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_004a3b90 at 004a3ca4
;   FUN_004d7f80 at 004d7fa5
;
; Referenced Globals:
;   string s_Preparing_actors..._00589a4d
;   string s_//_mission_version,_actor_versio_00589a61
;   string s_%d,%d_00589a84
;   string s_//_Root_name_of_mission_00589a8b
;   undefined4 DAT_00589aa4
;   string s_//_setList_00589aa8
;   undefined4 DAT_00589ab4
;   undefined4 DAT_00589ab8
;   string s_//_actorTypeList_00589abc
;   undefined4 DAT_00589ace
;   string s_%s_%d_00589ad2
;   string s_//_actor_count_00589ad9
;   undefined4 DAT_00589ae9
;   string s_//_inventory_actor_count_00589aed
;   undefined4 DAT_00589b07
;   ... and 15 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0
;   core_actor.cpp_CDemonActor_save_FUN_0040c040
;   core_actor.cpp_syncActorTypeIDs_FUN_0040d8c0
;   core_gore.cpp_CGore_save_FUN_004b08d0
;   core_inv.cpp_CInventory_saveItems_FUN_004c1140
;   core_mission.cpp_CDemonMission_countActors_FUN_004d8d80
;   core_mission.cpp_CDemonMission_prepareAllActors_FUN_004d8db0
;   crt_stdio.c_fprintf_FUN_005644f0
;   FUN_004c8440
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8720
        ;   Label: FUN_004d8720
    PUSH ESI                            ; 004d8721
    PUSH EDI                            ; 004d8722
    PUSH EBP                            ; 004d8723
    SUB ESP,0x4                         ; 004d8724
    MOV EBX,dword ptr [ESP + 0x18]      ; 004d8727
    CMP dword ptr [EBX + 0x850],0x0     ; 004d872b
    JNZ 0x004d8751                      ; 004d8732
        ;   XREF to: 004d8751 (CONDITIONAL_JUMP)  ; LAB_004d8751
    PUSH 0x589a4d                       ; 004d8734 | = "Preparing actors..."
    MOV ECX,dword ptr [0x005b6d50]      ; 004d8739 | DAT_005b6d50
    PUSH ECX                            ; 004d873f
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0 ; 004d8740
        ;   XREF to: 0046fff0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0()
    ADD ESP,0x8                         ; 004d8745
    PUSH EBX                            ; 004d8748
    CALL core_mission.cpp_CDemonMission_prepareAllActors_FUN_004d8db0 ; 004d8749
        ;   XREF to: 004d8db0 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_CDemonMission_prepareAllActors_FUN_004d8db0()
    ADD ESP,0x4                         ; 004d874e
    PUSH 0x589a61                       ; 004d8751 | = "// mission version, actor version\n"
        ;   Label: LAB_004d8751
    MOV ESI,dword ptr [ESP + 0x20]      ; 004d8756
    PUSH ESI                            ; 004d875a
    MOV dword ptr [EBX + 0x8],0x7       ; 004d875b
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004d8762
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x8                         ; 004d8767
    PUSH 0x4                            ; 004d876a
    MOV EDI,dword ptr [EBX + 0x8]       ; 004d876c
    PUSH EDI                            ; 004d876f
    PUSH 0x589a84                       ; 004d8770 | = "%d,%d\n"
    PUSH ESI                            ; 004d8775
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004d8776
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x10                        ; 004d877b
    PUSH 0x589a8b                       ; 004d877e | = "// Root name of mission\n"
    PUSH ESI                            ; 004d8783
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004d8784
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x8                         ; 004d8789
    LEA EAX,[EBX + 0x10]                ; 004d878c
    PUSH EAX                            ; 004d878f
    PUSH 0x589aa4                       ; 004d8790 | DAT_00589aa4
    PUSH ESI                            ; 004d8795
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004d8796
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0xc                         ; 004d879b
    PUSH 0x589aa8                       ; 004d879e | = "// setList\n"
    PUSH ESI                            ; 004d87a3
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004d87a4
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x8                         ; 004d87a9
    MOV EBP,ESI                         ; 004d87ac
    MOV ESI,dword ptr [EBX + 0x110]     ; 004d87ae
    PUSH ESI                            ; 004d87b4
    PUSH 0x589ab4                       ; 004d87b5 | DAT_00589ab4
    MOV EDI,EBP                         ; 004d87ba
    PUSH EDI                            ; 004d87bc
    XOR ESI,ESI                         ; 004d87bd
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004d87bf
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    MOV EBP,dword ptr [EBX + 0x110]     ; 004d87c4
    ADD ESP,0xc                         ; 004d87ca
    TEST EBP,EBP                        ; 004d87cd
    JLE 0x004d8800                      ; 004d87cf
        ;   XREF to: 004d8800 (CONDITIONAL_JUMP)  ; LAB_004d8800
    LEA EDI,[EBX + 0x114]               ; 004d87d1
    PUSH EDI                            ; 004d87d7
        ;   Label: LAB_004d87d7
    PUSH 0x589ab8                       ; 004d87d8 | DAT_00589ab8
    MOV EAX,dword ptr [ESP + 0x24]      ; 004d87dd
    PUSH EAX                            ; 004d87e1
    INC ESI                             ; 004d87e2
    ADD EDI,0x100                       ; 004d87e3
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004d87e9
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    MOV EDX,dword ptr [EBX + 0x110]     ; 004d87ee
    ADD ESP,0xc                         ; 004d87f4
    CMP ESI,EDX                         ; 004d87f7
    JL 0x004d87d7                       ; 004d87f9
        ;   XREF to: 004d87d7 (CONDITIONAL_JUMP)  ; LAB_004d87d7
    LEA EAX,[EAX]                       ; 004d87fb
    MOV ECX,ECX                         ; 004d87fe
    PUSH 0x589abc                       ; 004d8800 | = "// actorTypeList\n"
        ;   Label: LAB_004d8800
    MOV ECX,dword ptr [ESP + 0x20]      ; 004d8805
    PUSH ECX                            ; 004d8809
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004d880a
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x8                         ; 004d880f
    MOV ESI,dword ptr [0x00763e94]      ; 004d8812 | DAT_00763e94
    PUSH ESI                            ; 004d8818
    PUSH 0x589ace                       ; 004d8819 | DAT_00589ace
    MOV EDI,dword ptr [ESP + 0x24]      ; 004d881e
    PUSH EDI                            ; 004d8822
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004d8823
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0xc                         ; 004d8828
    CALL core_actor.cpp_syncActorTypeIDs_FUN_0040d8c0 ; 004d882b
        ;   XREF to: 0040d8c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_syncActorTypeIDs_FUN_0040d8c0()
    MOV EBP,dword ptr [0x00763e94]      ; 004d8830 | DAT_00763e94
    XOR ESI,ESI                         ; 004d8836
    TEST EBP,EBP                        ; 004d8838
    JLE 0x004d8870                      ; 004d883a
        ;   XREF to: 004d8870 (CONDITIONAL_JUMP)  ; LAB_004d8870
    XOR EDI,EDI                         ; 004d883c
    MOV EAX,dword ptr [EDI + 0x763e98]  ; 004d883e | DAT_00763e98 | DAT_00763e9c
        ;   Label: LAB_004d883e
    MOV EDX,dword ptr [EAX + 0x34]      ; 004d8844
    PUSH EDX                            ; 004d8847
    PUSH EAX                            ; 004d8848
    PUSH 0x589ad2                       ; 004d8849 | = "%s %d\n"
    MOV ECX,dword ptr [ESP + 0x28]      ; 004d884e
    PUSH ECX                            ; 004d8852
    ADD EDI,0x4                         ; 004d8853
    INC ESI                             ; 004d8856
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004d8857
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    MOV EBP,dword ptr [0x00763e94]      ; 004d885c | DAT_00763e94
    ADD ESP,0x10                        ; 004d8862
    CMP ESI,EBP                         ; 004d8865
    JL 0x004d883e                       ; 004d8867
        ;   XREF to: 004d883e (CONDITIONAL_JUMP)  ; LAB_004d883e
    LEA EAX,[EAX]                       ; 004d8869
    NOP                                 ; 004d886f
    PUSH 0x589ad9                       ; 004d8870 | = "// actor count\n"
        ;   Label: LAB_004d8870
    MOV EAX,dword ptr [ESP + 0x20]      ; 004d8875
    PUSH EAX                            ; 004d8879
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004d887a
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x8                         ; 004d887f
    PUSH EBX                            ; 004d8882
    CALL core_mission.cpp_CDemonMission_countActors_FUN_004d8d80 ; 004d8883
        ;   XREF to: 004d8d80 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_CDemonMission_countActors_FUN_004d8d80()
    ADD ESP,0x4                         ; 004d8888
    PUSH EAX                            ; 004d888b
    PUSH 0x589ae9                       ; 004d888c | DAT_00589ae9
    MOV EDX,dword ptr [ESP + 0x24]      ; 004d8891
    PUSH EDX                            ; 004d8895
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004d8896
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0xc                         ; 004d889b
    PUSH 0x589aed                       ; 004d889e | = "// inventory actor count\n"
    MOV ECX,dword ptr [ESP + 0x20]      ; 004d88a3
    PUSH ECX                            ; 004d88a7
    XOR EDI,EDI                         ; 004d88a8
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004d88aa
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    MOV ESI,dword ptr [EBX + 0x514]     ; 004d88af
    ADD ESP,0x8                         ; 004d88b5
    TEST ESI,ESI                        ; 004d88b8
    JZ 0x004d88e2                       ; 004d88ba
        ;   XREF to: 004d88e2 (CONDITIONAL_JUMP)  ; LAB_004d88e2
    MOV EBP,dword ptr [0x01cae124]      ; 004d88bc | DAT_01cae124
        ;   Label: LAB_004d88bc
    PUSH EBP                            ; 004d88c2
    PUSH ESI                            ; 004d88c3
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004d88c4
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 004d88c9
    TEST EAX,EAX                        ; 004d88cc
    JZ 0x004d88d8                       ; 004d88ce
        ;   XREF to: 004d88d8 (CONDITIONAL_JUMP)  ; LAB_004d88d8
    MOV EAX,dword ptr [EAX + 0x1f5a8]   ; 004d88d0
    ADD EDI,EAX                         ; 004d88d6
    MOV ESI,dword ptr [ESI + 0x144]     ; 004d88d8
        ;   Label: LAB_004d88d8
    TEST ESI,ESI                        ; 004d88de
    JNZ 0x004d88bc                      ; 004d88e0
        ;   XREF to: 004d88bc (CONDITIONAL_JUMP)  ; LAB_004d88bc
    PUSH EDI                            ; 004d88e2
        ;   Label: LAB_004d88e2
    PUSH 0x589b07                       ; 004d88e3 | DAT_00589b07
    MOV ESI,dword ptr [ESP + 0x24]      ; 004d88e8
    PUSH ESI                            ; 004d88ec
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004d88ed
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0xc                         ; 004d88f2
    PUSH 0x589b0b                       ; 004d88f5 | = "// actor name list\n"
    PUSH ESI                            ; 004d88fa
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004d88fb
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x8                         ; 004d8900
    MOV ESI,dword ptr [EBX + 0x514]     ; 004d8903
    MOV dword ptr [EBX + 0x858],0x0     ; 004d8909
    TEST ESI,ESI                        ; 004d8913
    JZ 0x004d8981                       ; 004d8915
        ;   XREF to: 004d8981 (CONDITIONAL_JUMP)  ; LAB_004d8981
    MOV EBP,0x589b28                    ; 004d8917 | = "..\\core\\mission.cpp"
    PUSH ESI                            ; 004d891c
        ;   Label: LAB_004d891c
    PUSH ESI                            ; 004d891d
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0 ; 004d891e
        ;   XREF to: 00409fa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0()
    ADD ESP,0x4                         ; 004d8923
    PUSH EAX                            ; 004d8926
    PUSH 0x589b1f                       ; 004d8927 | = "%s \"%s\"\n"
    MOV ECX,dword ptr [ESP + 0x28]      ; 004d892c
    PUSH ECX                            ; 004d8930
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004d8931
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    MOV EDI,dword ptr [EBX + 0x858]     ; 004d8936
    ADD ESP,0x10                        ; 004d893c
    CMP EDI,0x7d0                       ; 004d893f
    JL 0x004d8964                       ; 004d8945
        ;   XREF to: 004d8964 (CONDITIONAL_JUMP)  ; LAB_004d8964
    MOV EAX,0x1e9                       ; 004d8947
    PUSH 0x589b3c                       ; 004d894c | = "Too many actors"
    MOV dword ptr [0x01cc4800],EBP      ; 004d8951 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004d8957 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004d895c
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004d8961
    MOV EAX,dword ptr [EBX + 0x858]     ; 004d8964
        ;   Label: LAB_004d8964
    MOV dword ptr [EBX + EAX*0x4 + 0x85c],ESI ; 004d896a
    INC dword ptr [EBX + 0x858]         ; 004d8971
    MOV ESI,dword ptr [ESI + 0x144]     ; 004d8977
    TEST ESI,ESI                        ; 004d897d
    JNZ 0x004d891c                      ; 004d897f
        ;   XREF to: 004d891c (CONDITIONAL_JUMP)  ; LAB_004d891c
    MOV EAX,dword ptr [EBX + 0x514]     ; 004d8981
        ;   Label: LAB_004d8981
    MOV dword ptr [ESP],EAX             ; 004d8987
    TEST EAX,EAX                        ; 004d898a
    JZ 0x004d89fe                       ; 004d898c
        ;   XREF to: 004d89fe (CONDITIONAL_JUMP)  ; LAB_004d89fe
    MOV ESI,dword ptr [0x01cae124]      ; 004d898e | DAT_01cae124
        ;   Label: LAB_004d898e
    PUSH ESI                            ; 004d8994
    MOV EDI,dword ptr [ESP + 0x4]       ; 004d8995
    PUSH EDI                            ; 004d8999
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004d899a
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 004d899f
    TEST EAX,EAX                        ; 004d89a2
    JZ 0x004d89ee                       ; 004d89a4
        ;   XREF to: 004d89ee (CONDITIONAL_JUMP)  ; LAB_004d89ee
    LEA EBP,[EAX + 0x1f5a0]             ; 004d89a6
    XOR EDI,EDI                         ; 004d89ac
    MOV ESI,EBP                         ; 004d89ae
    MOV EAX,dword ptr [EBP + 0x8]       ; 004d89b0
        ;   Label: LAB_004d89b0
    CMP EDI,EAX                         ; 004d89b3
    JGE 0x004d8a8d                      ; 004d89b5
        ;   XREF to: 004d8a8d (CONDITIONAL_JUMP)  ; LAB_004d8a8d
    CMP dword ptr [EBX + 0x858],0x7d0   ; 004d89bb
    JGE 0x004d8a66                      ; 004d89c5
        ;   XREF to: 004d8a66 (CONDITIONAL_JUMP)  ; LAB_004d8a66
    MOV EDX,dword ptr [EBX + 0x858]     ; 004d89cb
        ;   Label: LAB_004d89cb
    MOV EAX,dword ptr [ESI + 0xc]       ; 004d89d1
    MOV dword ptr [EBX + EDX*0x4 + 0x85c],EAX ; 004d89d4
    MOV EDX,dword ptr [EBX + 0x858]     ; 004d89db
    ADD ESI,0x4                         ; 004d89e1
    INC EDX                             ; 004d89e4
    INC EDI                             ; 004d89e5
    MOV dword ptr [EBX + 0x858],EDX     ; 004d89e6
    JMP 0x004d89b0                      ; 004d89ec
        ;   XREF to: 004d89b0 (UNCONDITIONAL_JUMP)  ; LAB_004d89b0
    MOV EAX,dword ptr [ESP]             ; 004d89ee
        ;   Label: LAB_004d89ee
    MOV EAX,dword ptr [EAX + 0x144]     ; 004d89f1
    MOV dword ptr [ESP],EAX             ; 004d89f7
    TEST EAX,EAX                        ; 004d89fa
    JNZ 0x004d898e                      ; 004d89fc
        ;   XREF to: 004d898e (CONDITIONAL_JUMP)  ; LAB_004d898e
    PUSH 0x589b70                       ; 004d89fe | = "// actor data list\n"
        ;   Label: LAB_004d89fe
    MOV ECX,dword ptr [ESP + 0x20]      ; 004d8a03
    PUSH ECX                            ; 004d8a07
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004d8a08
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    MOV ESI,dword ptr [EBX + 0x514]     ; 004d8a0d
    ADD ESP,0x8                         ; 004d8a13
    TEST ESI,ESI                        ; 004d8a16
    JZ 0x004d8a40                       ; 004d8a18
        ;   XREF to: 004d8a40 (CONDITIONAL_JUMP)  ; LAB_004d8a40
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004d8a1a
    PUSH EBP                            ; 004d8a1e
        ;   Label: LAB_004d8a1e
    PUSH ESI                            ; 004d8a1f
    CALL core_actor.cpp_CDemonActor_save_FUN_0040c040 ; 004d8a20
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_save_FUN_0040c040()
    MOV ESI,dword ptr [ESI + 0x144]     ; 004d8a25
    ADD ESP,0x8                         ; 004d8a2b
    TEST ESI,ESI                        ; 004d8a2e
    JNZ 0x004d8a1e                      ; 004d8a30
        ;   XREF to: 004d8a1e (CONDITIONAL_JUMP)  ; LAB_004d8a1e
    LEA EAX,[EAX]                       ; 004d8a32
    LEA EDX,[EDX]                       ; 004d8a38
    MOV EAX,EAX                         ; 004d8a3e
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004d8a40
        ;   Label: LAB_004d8a40
    PUSH ECX                            ; 004d8a44
    MOV ESI,dword ptr [0x005b96c4]      ; 004d8a45 | DAT_005b96c4
    PUSH ESI                            ; 004d8a4b
    CALL core_gore.cpp_CGore_save_FUN_004b08d0 ; 004d8a4c
        ;   XREF to: 004b08d0 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_CGore_save_FUN_004b08d0()
    ADD ESP,0x8                         ; 004d8a51
    MOV dword ptr [EBX + 0x858],0x0     ; 004d8a54
    ADD ESP,0x4                         ; 004d8a5e
    POP EBP                             ; 004d8a61
    POP EDI                             ; 004d8a62
    POP ESI                             ; 004d8a63
    POP EBX                             ; 004d8a64
    RET                                 ; 004d8a65
    MOV ECX,0x589b4c                    ; 004d8a66 | = "..\\core\\mission.cpp"
        ;   Label: LAB_004d8a66
    MOV EAX,0x1f4                       ; 004d8a6b
    PUSH 0x589b60                       ; 004d8a70 | = "Too many actors"
    MOV dword ptr [0x01cc4800],ECX      ; 004d8a75 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004d8a7b | DAT_01cc4804
    CALL FUN_004c8440                   ; 004d8a80
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004d8a85
    JMP 0x004d89cb                      ; 004d8a88
        ;   XREF to: 004d89cb (UNCONDITIONAL_JUMP)  ; LAB_004d89cb
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004d8a8d
        ;   Label: LAB_004d8a8d
    PUSH EAX                            ; 004d8a91
    PUSH EBP                            ; 004d8a92
    CALL core_inv.cpp_CInventory_saveItems_FUN_004c1140 ; 004d8a93
        ;   XREF to: 004c1140 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_CInventory_saveItems_FUN_004c1140()
    ADD ESP,0x8                         ; 004d8a98
    JMP 0x004d89ee                      ; 004d8a9b
        ;   XREF to: 004d89ee (UNCONDITIONAL_JUMP)  ; LAB_004d89ee

