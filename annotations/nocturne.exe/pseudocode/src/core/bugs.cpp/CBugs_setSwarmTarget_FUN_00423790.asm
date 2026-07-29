; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bugs_cpp_CBugs_setSwarmTarget_FUN_00423790(CBugs *this_ptr,CDemonActor *target)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   target
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_bugs.cpp_FUN_00422050 at 004220ff
;
; Referenced Globals:
;   TerminatedCString s_s_swarming_on_s_at_LOD_d_00579d8d
;   void* PTR_DAT_005ad350 = 0077ad0c
;   undefined4 DAT_00764d98
;   undefined4 DAT_00764d9c
;   undefined4 DAT_00764da0
;   undefined4 DAT_0077ad0c
;   undefined4 g_CEnemyActorType_01bcdebc.name_hash
;   undefined4 g_CHeroActorType_01cae0ec.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_getRandomInt_FUN_0040de00
;   core_bugs.cpp_FUN_004219f0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50
;   engine_console.cpp_CConsole_printf_FUN_0043ac60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00423790
        ;   Label: core_bugs.cpp_CBugs_setSwarmTarget_FUN_00423790
    PUSH ESI                            ; 00423791
    PUSH EDI                            ; 00423792
    PUSH EBP                            ; 00423793
    SUB ESP,0x8                         ; 00423794
    MOV EBX,dword ptr [ESP + 0x20]      ; 00423797
    MOV EDX,dword ptr [0x01cae124]      ; 0042379b | g_CHeroActorType_01cae0ec.name_hash
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004237a1
    PUSH EDX                            ; 004237a5
    MOV dword ptr [EAX + 0x12964],0x0   ; 004237a6
    PUSH EBX                            ; 004237b0
    MOV dword ptr [EAX + 0x12960],0x0   ; 004237b1
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004237bb
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004237c0
    TEST EAX,EAX                        ; 004237c3
    JZ 0x004237d6                       ; 004237c5
        ;   XREF to: 004237d6 (CONDITIONAL_JUMP)  ; LAB_004237d6
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004237c7
    ADD EAX,0x150                       ; 004237cb
    MOV dword ptr [EDX + 0x12964],EAX   ; 004237d0
    MOV ECX,dword ptr [0x01bcdef4]      ; 004237d6 | g_CEnemyActorType_01bcdebc.name_hash
        ;   Label: LAB_004237d6
    PUSH ECX                            ; 004237dc
    PUSH EBX                            ; 004237dd
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004237de
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004237e3
    TEST EAX,EAX                        ; 004237e6
    JZ 0x00423804                       ; 004237e8
        ;   XREF to: 00423804 (CONDITIONAL_JUMP)  ; LAB_00423804
    MOV CL,byte ptr [EAX + 0x23b0]      ; 004237ea
    LEA EDX,[EAX + 0x150]               ; 004237f0
    TEST CL,CL                          ; 004237f6
    JZ 0x00423804                       ; 004237f8
        ;   XREF to: 00423804 (CONDITIONAL_JUMP)  ; LAB_00423804
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004237fa
    MOV dword ptr [EAX + 0x12964],EDX   ; 004237fe
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00423804
        ;   Label: LAB_00423804
    CMP dword ptr [EAX + 0x12964],0x0   ; 00423808
    JZ 0x004239fa                       ; 0042380f
        ;   XREF to: 004239fa (CONDITIONAL_JUMP)  ; LAB_004239fa
    MOV dword ptr [EAX + 0xbd24],0x1    ; 00423815
    MOV dword ptr [EAX + 0x12960],EBX   ; 0042381f
    MOV EAX,dword ptr [EAX + 0x12960]   ; 00423825
    MOV EAX,dword ptr [EAX + 0x64]      ; 0042382b
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0042382e
    INC EAX                             ; 00423832
    MOV dword ptr [EDX + 0x12998],0x0   ; 00423833
    MOV dword ptr [EDX + 0x64],EAX      ; 0042383d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00423840
        ;   Label: LAB_00423840
    MOV EDI,dword ptr [EAX + 0x12964]   ; 00423844
    PUSH EDI                            ; 0042384a
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020 ; 0042384b
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00423850
    MOV EDX,EAX                         ; 00423853
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00423855
    MOV EAX,dword ptr [EAX + 0x12998]   ; 00423859
    MOV EDX,dword ptr [EDX + EAX*0x4 + 0x2c] ; 0042385f
    CMP EDX,0x2bc                       ; 00423863
    JG 0x00423a02                       ; 00423869
        ;   XREF to: 00423a02 (CONDITIONAL_JUMP)  ; LAB_00423a02
    PUSH EAX                            ; 0042386f
    PUSH EBX                            ; 00423870
    MOV EBP,dword ptr [ESP + 0x24]      ; 00423871
    PUSH EBP                            ; 00423875
    PUSH 0x579d8d                       ; 00423876 | = "%s swarming on %s at LOD %d\n"
    MOV EAX,[0x005ad350]                ; 0042387b | PTR_DAT_005ad350
    PUSH EAX                            ; 00423880 | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 00423881
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0x14                        ; 00423886
    MOV EDX,dword ptr [EBP + 0x12964]   ; 00423889
    PUSH EDX                            ; 0042388f
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020 ; 00423890
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(CDeformableModelInstance * this_ptr)
    MOV EDX,dword ptr [EBP + 0x12998]   ; 00423895
    ADD ESP,0x4                         ; 0042389b
    MOV ECX,dword ptr [EAX + EDX*0x4 + 0x7c] ; 0042389e
    PUSH ECX                            ; 004238a2
    MOV EBX,dword ptr [EAX + EDX*0x4 + 0x54] ; 004238a3
    PUSH EBX                            ; 004238a7
    PUSH EBP                            ; 004238a8
    CALL core_bugs.cpp_FUN_004219f0     ; 004238a9
        ;   XREF to: 004219f0 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_FUN_004219f0(CBugs * this_ptr, int tri_count, SInputFace * triangles)
    ADD ESP,0xc                         ; 004238ae
    MOV EDI,dword ptr [EBP + 0x12998]   ; 004238b1
    PUSH EDI                            ; 004238b7
    MOV ESI,EBP                         ; 004238b8
    MOV EBP,dword ptr [EBP + 0x12964]   ; 004238ba
    PUSH EBP                            ; 004238c0
    MOV EBX,ESI                         ; 004238c1
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50 ; 004238c3
        ;   XREF to: 0051da50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 004238c8
    MOV EDX,ESI                         ; 004238cb
    MOV EBX,dword ptr [EBX + 0x12964]   ; 004238cd
    XOR EAX,EAX                         ; 004238d3
    MOV ECX,dword ptr [EDX + 0x1299c]   ; 004238d5
    MOV EBX,dword ptr [EBX + 0x2234]    ; 004238db
    TEST ECX,ECX                        ; 004238e1
    JLE 0x00423900                      ; 004238e3
        ;   XREF to: 00423900 (CONDITIONAL_JUMP)  ; LAB_00423900
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004238e5
    XOR EDX,EDX                         ; 004238e9
    MOV dword ptr [EDX + 0x764d98],EAX  ; 004238eb | DAT_00764d98 | DAT_00764d9c
        ;   Label: LAB_004238eb
    INC EAX                             ; 004238f1
    MOV EBP,dword ptr [ECX + 0x1299c]   ; 004238f2
    ADD EDX,0x4                         ; 004238f8
    CMP EAX,EBP                         ; 004238fb
    JL 0x004238eb                       ; 004238fd
        ;   XREF to: 004238eb (CONDITIONAL_JUMP)  ; LAB_004238eb
    NOP                                 ; 004238ff
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00423900
        ;   Label: LAB_00423900
    MOV EAX,dword ptr [EAX + 0x1299c]   ; 00423904
    SUB EAX,0x2                         ; 0042390a
    MOV dword ptr [ESP + 0x4],EAX       ; 0042390d
    TEST EAX,EAX                        ; 00423911
    JL 0x00423966                       ; 00423913
        ;   XREF to: 00423966 (CONDITIONAL_JUMP)  ; LAB_00423966
    MOV EBP,dword ptr [ESP + 0x4]       ; 00423915
        ;   Label: LAB_00423915
    TEST EBP,EBP                        ; 00423919
    JL 0x00423959                       ; 0042391b
        ;   XREF to: 00423959 (CONDITIONAL_JUMP)  ; LAB_00423959
    SHL EBP,0x2                         ; 0042391d
    XOR EAX,EAX                         ; 00423920
    IMUL EDX,dword ptr [EAX + 0x764d98],0xc ; 00423922 | DAT_00764d98 | DAT_00764d9c
        ;   Label: LAB_00423922
    IMUL ECX,dword ptr [EAX + 0x764d9c],0xc ; 00423929 | DAT_00764d9c | DAT_00764da0
    MOV EDX,dword ptr [EDX + EBX*0x1 + 0x4] ; 00423930
    CMP EDX,dword ptr [ECX + EBX*0x1 + 0x4] ; 00423934
    JLE 0x00423952                      ; 00423938
        ;   XREF to: 00423952 (CONDITIONAL_JUMP)  ; LAB_00423952
    LEA ECX,[EAX + 0x4]                 ; 0042393a
    ADD ECX,0x764d98                    ; 0042393d | DAT_00764d98
    MOV EDX,0x764d98                    ; 00423943 | DAT_00764d98
    MOV ESI,dword ptr [ECX]             ; 00423948 | DAT_00764d9c
    MOV EDI,dword ptr [EDX + EAX*0x1]   ; 0042394a | DAT_00764d98
    MOV dword ptr [EDX + EAX*0x1],ESI   ; 0042394d | DAT_00764d98
    MOV dword ptr [ECX],EDI             ; 00423950 | DAT_00764d9c
    ADD EAX,0x4                         ; 00423952
        ;   Label: LAB_00423952
    CMP EAX,EBP                         ; 00423955
    JLE 0x00423922                      ; 00423957
        ;   XREF to: 00423922 (CONDITIONAL_JUMP)  ; LAB_00423922
    MOV EDX,dword ptr [ESP + 0x4]       ; 00423959
        ;   Label: LAB_00423959
    DEC EDX                             ; 0042395d
    MOV dword ptr [ESP + 0x4],EDX       ; 0042395e
    TEST EDX,EDX                        ; 00423962
    JGE 0x00423915                      ; 00423964
        ;   XREF to: 00423915 (CONDITIONAL_JUMP)  ; LAB_00423915
    MOV EDX,dword ptr [0x00764d98]      ; 00423966 | DAT_00764d98
        ;   Label: LAB_00423966
    LEA EAX,[EDX*0x4 + 0x0]             ; 0042396c
    SUB EAX,EDX                         ; 00423973
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x4] ; 00423975
    ADD EAX,0x2a                        ; 00423979
    MOV dword ptr [ESP],EAX             ; 0042397c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0042397f
    XOR ESI,ESI                         ; 00423983
    MOV EDI,dword ptr [EAX + 0xbd28]    ; 00423985
    XOR EBP,EBP                         ; 0042398b
    TEST EDI,EDI                        ; 0042398d
    JLE 0x004239fa                      ; 0042398f
        ;   XREF to: 004239fa (CONDITIONAL_JUMP)  ; LAB_004239fa
    MOV EDI,EAX                         ; 00423991
    MOV dword ptr [EDI + 0xbd58],0xffffffff ; 00423993
        ;   Label: LAB_00423993
    MOV EAX,dword ptr [ESI*0x4 + 0x764d98] ; 0042399d | DAT_00764d98
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004239a4
    MOV dword ptr [EDI + 0xbd5c],EAX    ; 004239a8
    MOV ECX,0xf                         ; 004239ae
    MOV EDX,dword ptr [EDX + 0x1299c]   ; 004239b3
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004239b9
    SAR EDX,0x1f                        ; 004239bd
    MOV EAX,dword ptr [EAX + 0x1299c]   ; 004239c0
    IDIV ECX                            ; 004239c6
    PUSH EAX                            ; 004239c8
    PUSH 0x0                            ; 004239c9
    CALL core_actor.cpp_getRandomInt_FUN_0040de00 ; 004239cb
        ;   XREF to: 0040de00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040de00(int min_value, int max_value)
    ADD ESP,0x8                         ; 004239d0
    MOV dword ptr [EDI + 0xbd68],EAX    ; 004239d3
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004239d9
    INC ESI                             ; 004239dd
    CMP ESI,dword ptr [EAX + 0x1299c]   ; 004239de
    JL 0x00423a3a                       ; 004239e4
        ;   XREF to: 00423a3a (CONDITIONAL_JUMP)  ; LAB_00423a3a
    XOR ESI,ESI                         ; 004239e6
        ;   Label: LAB_004239e6
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004239e8
        ;   Label: LAB_004239e8
    INC EBP                             ; 004239ec
    MOV EDX,dword ptr [EAX + 0xbd28]    ; 004239ed
    ADD EDI,0x40                        ; 004239f3
    CMP EBP,EDX                         ; 004239f6
    JL 0x00423993                       ; 004239f8
        ;   XREF to: 00423993 (CONDITIONAL_JUMP)  ; LAB_00423993
    ADD ESP,0x8                         ; 004239fa
        ;   Label: LAB_004239fa
    POP EBP                             ; 004239fd
    POP EDI                             ; 004239fe
    POP ESI                             ; 004239ff
    POP EBX                             ; 00423a00
    RET                                 ; 00423a01
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00423a02
        ;   Label: LAB_00423a02
    MOV ESI,dword ptr [EDX + 0x12964]   ; 00423a06
    INC EAX                             ; 00423a0c
    PUSH ESI                            ; 00423a0d
    MOV dword ptr [EDX + 0x12998],EAX   ; 00423a0e
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020 ; 00423a14
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00423a19
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00423a1c
    MOV EAX,dword ptr [EAX]             ; 00423a20
    CMP EAX,dword ptr [EDX + 0x12998]   ; 00423a22
    JG 0x00423840                       ; 00423a28
        ;   XREF to: 00423840 (CONDITIONAL_JUMP)  ; LAB_00423840
    MOV dword ptr [EDX + 0x12964],0x0   ; 00423a2e
    JMP 0x004239fa                      ; 00423a38
        ;   XREF to: 004239fa (UNCONDITIONAL_JUMP)  ; LAB_004239fa
    IMUL EAX,dword ptr [ESI*0x4 + 0x764d98],0xc ; 00423a3a | DAT_00764d9c
        ;   Label: LAB_00423a3a
    MOV ECX,dword ptr [ESP]             ; 00423a42
    CMP ECX,dword ptr [EBX + EAX*0x1 + 0x4] ; 00423a45
    JL 0x004239e6                       ; 00423a49
        ;   XREF to: 004239e6 (CONDITIONAL_JUMP)  ; LAB_004239e6
    JMP 0x004239e8                      ; 00423a4b
        ;   XREF to: 004239e8 (UNCONDITIONAL_JUMP)  ; LAB_004239e8

