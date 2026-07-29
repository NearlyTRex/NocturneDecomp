; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_batman_cpp_CBatman_processDismemberment_FUN_004145f0(CBatman *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CBatman *        Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
; Local Variables:
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_batman.cpp_CBatman_processDamage_FUN_00414930 at 004149b6
;
; Referenced Globals:
;   undefined1* switchdataD_004145cc = 0041462d
;   TerminatedCString s_limb_wav_00578ceb
;   TerminatedCString s_Shot_thru_the_heart_00578cf5
;   double DOUBLE_00578d0f = 7
;   double DOUBLE_00578d17 = 0.5
;   double DOUBLE_00578d1f = 2.5
;   double DOUBLE_00578d27 = 20
;   void* PTR_DAT_005ad350 = 0077ad0c
;   undefined4 DAT_005b9354
;   undefined4 DAT_0077ad0c
;   undefined4 DAT_01c77600
;   undefined4 DAT_01c777cc
;
; Called Functions:
;   core_actor.cpp_CDemonActor_transformVector_FUN_0040a200
;   core_actor.cpp_randomChance_FUN_0040dea0
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416d40
;   core_bodypart.cpp_createBodyPart_FUN_00415b30
;   core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40
;   core_charactr.cpp_CCharacter_dismember_FUN_00427b60
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0
;   core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_0042b490
;   crt_stdlib.c_rand_FUN_0056488c
;   engine_console.cpp_CConsole_printf_FUN_0043ac60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004145f0
        ;   Label: core_batman.cpp_CBatman_processDismemberment_FUN_004145f0
    PUSH ESI                            ; 004145f1
    PUSH EDI                            ; 004145f2
    PUSH EBP                            ; 004145f3
    SUB ESP,0x24                        ; 004145f4
    MOV EBX,dword ptr [ESP + 0x38]      ; 004145f7
    MOV ESI,dword ptr [ESP + 0x3c]      ; 004145fb
    FLD float ptr [ESI + 0x2c]          ; 004145ff
    FLDZ                                ; 00414602
    FCOMPP                              ; 00414604
    FNSTSW AX                           ; 00414606
    SAHF                                ; 00414608
    JNC 0x00414635                      ; 00414609
        ;   XREF to: 00414635 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI],-0x1            ; 0041460b
    JNZ 0x00414635                      ; 0041460e
        ;   XREF to: 00414635 (CONDITIONAL_JUMP)  ; default
    CALL crt_stdlib.c_rand_FUN_0056488c ; 00414610
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_0056488c()
    MOV EDX,EAX                         ; 00414615
    MOV EDI,0x6                         ; 00414617
    SAR EDX,0x1f                        ; 0041461c
    IDIV EDI                            ; 0041461f
    CMP EDX,0x5                         ; 00414621
    JA 0x00414635                       ; 00414624
        ;   XREF to: 00414635 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x4145cc]  ; 00414626 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xbd90]    ; 0041462d
        ;   Label: caseD_0
    MOV dword ptr [ESI],EAX             ; 00414633
        ;   Label: LAB_00414633
    MOV ECX,dword ptr [EBX + 0xbd90]    ; 00414635
        ;   Label: default
    MOV EAX,dword ptr [ESI]             ; 0041463b
    CMP EAX,ECX                         ; 0041463d
    JNZ 0x00414834                      ; 0041463f
        ;   XREF to: 00414834 (CONDITIONAL_JUMP)  ; LAB_00414834
    MOV EAX,dword ptr [ESI + 0x2c]      ; 00414645
        ;   Label: LAB_00414645
    MOV EBP,dword ptr [EBX + 0xbd88]    ; 00414648
    MOV dword ptr [ESP + 0x20],EAX      ; 0041464e
    CMP EBP,dword ptr [ESI]             ; 00414652
    JNZ 0x0041465e                      ; 00414654
        ;   XREF to: 0041465e (CONDITIONAL_JUMP)  ; LAB_0041465e
    MOV dword ptr [ESP + 0x20],0x3d4ccccd ; 00414656
    MOV EDX,dword ptr [EBX + 0xbd8c]    ; 0041465e
        ;   Label: LAB_0041465e
    CMP EDX,dword ptr [ESI]             ; 00414664
    JNZ 0x00414670                      ; 00414666
        ;   XREF to: 00414670 (CONDITIONAL_JUMP)  ; LAB_00414670
    MOV dword ptr [ESP + 0x20],0x3ca3d70a ; 00414668
    MOV EAX,[0x005b9354]                ; 00414670 | DAT_005b9354
        ;   Label: LAB_00414670
    CMP dword ptr [EAX + 0x1e0],0x0     ; 00414675 | DAT_01c777cc
    JZ 0x00414686                       ; 0041467c
        ;   XREF to: 00414686 (CONDITIONAL_JUMP)  ; LAB_00414686
    MOV dword ptr [ESP + 0x20],0x3f800000 ; 0041467e
    MOV EAX,[0x005b9354]                ; 00414686 | DAT_005b9354
        ;   Label: LAB_00414686
    MOV EDX,dword ptr [EAX + 0x14]      ; 0041468b | DAT_01c77600
    TEST EDX,EDX                        ; 0041468e
    JNZ 0x00414696                      ; 00414690
        ;   XREF to: 00414696 (CONDITIONAL_JUMP)  ; LAB_00414696
    MOV dword ptr [ESP + 0x20],EDX      ; 00414692
    PUSH dword ptr [ESP + 0x20]         ; 00414696
        ;   Label: LAB_00414696
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 0041469a
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040dea0(float probability_threshold)
    ADD ESP,0x4                         ; 0041469f
    TEST EAX,EAX                        ; 004146a2
    JZ 0x004147c1                       ; 004146a4
        ;   XREF to: 004147c1 (CONDITIONAL_JUMP)  ; LAB_004147c1
    MOV EDI,dword ptr [EBX + 0x2608]    ; 004146aa
    PUSH EDI                            ; 004146b0
    PUSH 0x0                            ; 004146b1
    PUSH 0x0                            ; 004146b3
    PUSH EBX                            ; 004146b5
    LEA EAX,[ESI + 0xc]                 ; 004146b6
    PUSH EAX                            ; 004146b9
    LEA EAX,[EBX + 0x30]                ; 004146ba
    PUSH EAX                            ; 004146bd
    LEA EAX,[EBX + 0x20]                ; 004146be
    PUSH EAX                            ; 004146c1
    CALL core_bodypart.cpp_createBodyPart_FUN_00415b30 ; 004146c2
        ;   XREF to: 00415b30 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_createBodyPart_FUN_00415b30(CVector3f * position, UOrientationVector * orientation, CVector3f * initial_velocity, CDemonActor * scale_source, ...)
    ADD ESP,0x1c                        ; 004146c7
    MOV EDI,EAX                         ; 004146ca
    PUSH 0x0                            ; 004146cc
    MOV EBP,EAX                         ; 004146ce
    MOV EAX,dword ptr [ESI]             ; 004146d0
    PUSH EAX                            ; 004146d2
    PUSH EDI                            ; 004146d3
    PUSH EBX                            ; 004146d4
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0 ; 004146d5
        ;   XREF to: 00427eb0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    MOV EAX,dword ptr [ESI]             ; 004146da
    MOV EDX,dword ptr [EBX + 0xbd90]    ; 004146dc
    ADD ESP,0x10                        ; 004146e2
    CMP EAX,EDX                         ; 004146e5
    JNZ 0x004146fc                      ; 004146e7
        ;   XREF to: 004146fc (CONDITIONAL_JUMP)  ; LAB_004146fc
    PUSH 0x0                            ; 004146e9
    MOV ECX,dword ptr [EBX + 0xbd94]    ; 004146eb
    PUSH ECX                            ; 004146f1
    PUSH EDI                            ; 004146f2
    PUSH EBX                            ; 004146f3
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0 ; 004146f4
        ;   XREF to: 00427eb0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 004146f9
    MOV EDI,dword ptr [EBX + 0xbd98]    ; 004146fc
        ;   Label: LAB_004146fc
    CMP EDI,dword ptr [ESI]             ; 00414702
    JNZ 0x00414719                      ; 00414704
        ;   XREF to: 00414719 (CONDITIONAL_JUMP)  ; LAB_00414719
    PUSH 0x0                            ; 00414706
    MOV EAX,dword ptr [EBX + 0xbd9c]    ; 00414708
    PUSH EAX                            ; 0041470e
    PUSH EBP                            ; 0041470f
    PUSH EBX                            ; 00414710
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0 ; 00414711
        ;   XREF to: 00427eb0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 00414716
    MOV EDX,dword ptr [EBX + 0xbd8c]    ; 00414719
        ;   Label: LAB_00414719
    CMP EDX,dword ptr [ESI]             ; 0041471f
    JNZ 0x00414785                      ; 00414721
        ;   XREF to: 00414785 (CONDITIONAL_JUMP)  ; LAB_00414785
    PUSH 0x0                            ; 00414723
    LEA EDI,[ESI + 0xc]                 ; 00414725
    PUSH EDI                            ; 00414728
    MOV ECX,dword ptr [EBX + 0xbd98]    ; 00414729
    PUSH ECX                            ; 0041472f
    PUSH EBX                            ; 00414730
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40 ; 00414731
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 00414736
    PUSH 0x0                            ; 00414739
    PUSH EDI                            ; 0041473b
    MOV EAX,dword ptr [EBX + 0xbd9c]    ; 0041473c
    PUSH EAX                            ; 00414742
    PUSH EBX                            ; 00414743
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40 ; 00414744
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 00414749
    PUSH 0x0                            ; 0041474c
    PUSH EDI                            ; 0041474e
    MOV EDX,dword ptr [EBX + 0xbd90]    ; 0041474f
    PUSH EDX                            ; 00414755
    PUSH EBX                            ; 00414756
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40 ; 00414757
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 0041475c
    PUSH 0x0                            ; 0041475f
    PUSH EDI                            ; 00414761
    MOV ECX,dword ptr [EBX + 0xbd94]    ; 00414762
    PUSH ECX                            ; 00414768
    PUSH EBX                            ; 00414769
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40 ; 0041476a
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 0041476f
    PUSH 0x0                            ; 00414772
    PUSH EDI                            ; 00414774
    MOV EDI,dword ptr [EBX + 0xbd88]    ; 00414775
    PUSH EDI                            ; 0041477b
    PUSH EBX                            ; 0041477c
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40 ; 0041477d
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 00414782
    PUSH 0x578ceb                       ; 00414785 | = "limb?.wav"
        ;   Label: LAB_00414785
    PUSH EBX                            ; 0041478a
    CALL core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_0042b490 ; 0041478b
        ;   XREF to: 0042b490 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_0042b490(CCharacter * this_ptr, char * sound_name)
    ADD ESP,0x8                         ; 00414790
    PUSH EBP                            ; 00414793
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416d40 ; 00414794
        ;   XREF to: 00416d40 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416d40(CBodyPart * this_ptr)
    MOV EAX,dword ptr [EBX + 0xbd88]    ; 00414799
    MOV EBP,dword ptr [EBX + EAX*0x4 + 0x2290] ; 0041479f
    ADD ESP,0x4                         ; 004147a6
    TEST EBP,EBP                        ; 004147a9
    JZ 0x00414875                       ; 004147ab
        ;   XREF to: 00414875 (CONDITIONAL_JUMP)  ; LAB_00414875
    FLD float ptr [ESI + 0x8]           ; 004147b1
        ;   Label: LAB_004147b1
    FLD ST0                             ; 004147b4
    FMUL double ptr [0x00578d0f]        ; 004147b6 | DOUBLE_00578d0f
    FSTP ST1                            ; 004147bc
    FSTP float ptr [ESI + 0x8]          ; 004147be
    MOV EDX,dword ptr [EBX + 0xbd88]    ; 004147c1
        ;   Label: LAB_004147c1
    MOV EAX,dword ptr [ESI]             ; 004147c7
    CMP EAX,EDX                         ; 004147c9
    JNZ 0x00414881                      ; 004147cb
        ;   XREF to: 00414881 (CONDITIONAL_JUMP)  ; LAB_00414881
    FLD float ptr [ESI + 0x4]           ; 004147d1
    FLD ST0                             ; 004147d4
    FMUL double ptr [0x00578d1f]        ; 004147d6 | DOUBLE_00578d1f
    FSTP ST1                            ; 004147dc
        ;   Label: LAB_004147dc
    FSTP float ptr [ESI + 0x4]          ; 004147de
    MOV EBP,dword ptr [EBX + 0xbd8c]    ; 004147e1
        ;   Label: LAB_004147e1
    CMP EBP,dword ptr [ESI]             ; 004147e7
    JNZ 0x004147f5                      ; 004147e9
        ;   XREF to: 004147f5 (CONDITIONAL_JUMP)  ; LAB_004147f5
    CMP dword ptr [ESI + 0x30],0x68     ; 004147eb
    JZ 0x004148ac                       ; 004147ef
        ;   XREF to: 004148ac (CONDITIONAL_JUMP)  ; LAB_004148ac
    ADD ESP,0x24                        ; 004147f5
        ;   Label: LAB_004147f5
    POP EBP                             ; 004147f8
    POP EDI                             ; 004147f9
    POP ESI                             ; 004147fa
    POP EBX                             ; 004147fb
    RET                                 ; 004147fc
    MOV EAX,dword ptr [EBX + 0xbd94]    ; 004147fd
        ;   Label: caseD_1
    JMP 0x00414633                      ; 00414803
        ;   XREF to: 00414633 (UNCONDITIONAL_JUMP)  ; LAB_00414633
    MOV EAX,dword ptr [EBX + 0xbd98]    ; 00414808
        ;   Label: caseD_2
    JMP 0x00414633                      ; 0041480e
        ;   XREF to: 00414633 (UNCONDITIONAL_JUMP)  ; LAB_00414633
    MOV EAX,dword ptr [EBX + 0xbd9c]    ; 00414813
        ;   Label: caseD_3
    JMP 0x00414633                      ; 00414819
        ;   XREF to: 00414633 (UNCONDITIONAL_JUMP)  ; LAB_00414633
    MOV EAX,dword ptr [EBX + 0xbd88]    ; 0041481e
        ;   Label: caseD_4
    JMP 0x00414633                      ; 00414824
        ;   XREF to: 00414633 (UNCONDITIONAL_JUMP)  ; LAB_00414633
    MOV EAX,dword ptr [EBX + 0xbd8c]    ; 00414829
        ;   Label: caseD_5
    JMP 0x00414633                      ; 0041482f
        ;   XREF to: 00414633 (UNCONDITIONAL_JUMP)  ; LAB_00414633
    CMP EAX,dword ptr [EBX + 0xbd94]    ; 00414834
        ;   Label: LAB_00414834
    JZ 0x00414645                       ; 0041483a
        ;   XREF to: 00414645 (CONDITIONAL_JUMP)  ; LAB_00414645
    CMP EAX,dword ptr [EBX + 0xbd98]    ; 00414840
    JZ 0x00414645                       ; 00414846
        ;   XREF to: 00414645 (CONDITIONAL_JUMP)  ; LAB_00414645
    CMP EAX,dword ptr [EBX + 0xbd9c]    ; 0041484c
    JZ 0x00414645                       ; 00414852
        ;   XREF to: 00414645 (CONDITIONAL_JUMP)  ; LAB_00414645
    CMP EAX,dword ptr [EBX + 0xbd8c]    ; 00414858
    JZ 0x00414645                       ; 0041485e
        ;   XREF to: 00414645 (CONDITIONAL_JUMP)  ; LAB_00414645
    CMP EAX,dword ptr [EBX + 0xbd88]    ; 00414864
    JZ 0x00414645                       ; 0041486a
        ;   XREF to: 00414645 (CONDITIONAL_JUMP)  ; LAB_00414645
    JMP 0x004147c1                      ; 00414870
        ;   XREF to: 004147c1 (UNCONDITIONAL_JUMP)  ; LAB_004147c1
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 00414875
        ;   Label: LAB_00414875
    JMP 0x004147b1                      ; 0041487c
        ;   XREF to: 004147b1 (UNCONDITIONAL_JUMP)  ; LAB_004147b1
    CMP EAX,dword ptr [EBX + 0xbda0]    ; 00414881
        ;   Label: LAB_00414881
    JNZ 0x00414894                      ; 00414887
        ;   XREF to: 00414894 (CONDITIONAL_JUMP)  ; LAB_00414894
    MOV EAX,dword ptr [ESI + 0x4]       ; 00414889
        ;   Label: LAB_00414889
    MOV dword ptr [ESI + 0x4],EAX       ; 0041488c
    JMP 0x004147e1                      ; 0041488f
        ;   XREF to: 004147e1 (UNCONDITIONAL_JUMP)  ; LAB_004147e1
    CMP EAX,dword ptr [EBX + 0xbd8c]    ; 00414894
        ;   Label: LAB_00414894
    JZ 0x00414889                       ; 0041489a
        ;   XREF to: 00414889 (CONDITIONAL_JUMP)  ; LAB_00414889
    FLD float ptr [ESI + 0x4]           ; 0041489c
    FLD ST0                             ; 0041489f
    FMUL double ptr [0x00578d17]        ; 004148a1 | DOUBLE_00578d17
    JMP 0x004147dc                      ; 004148a7
        ;   XREF to: 004147dc (UNCONDITIONAL_JUMP)  ; LAB_004147dc
    FLD float ptr [ESI + 0x4]           ; 004148ac
        ;   Label: LAB_004148ac
    PUSH 0x578cf5                       ; 004148af | = "Shot thru the heart\n"
    MOV EDX,dword ptr [0x005ad350]      ; 004148b4 | PTR_DAT_005ad350
    FLD ST0                             ; 004148ba
    FMUL double ptr [0x00578d27]        ; 004148bc | DOUBLE_00578d27
    PUSH EDX                            ; 004148c2 | DAT_0077ad0c
    FSTP ST1                            ; 004148c3
    FSTP float ptr [ESI + 0x4]          ; 004148c5
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 004148c8
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0x8                         ; 004148cd
    PUSH 0x3f000000                     ; 004148d0
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 004148d5
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040dea0(float probability_threshold)
    ADD ESP,0x4                         ; 004148da
    TEST EAX,EAX                        ; 004148dd
    JZ 0x004147f5                       ; 004148df
        ;   XREF to: 004147f5 (CONDITIONAL_JUMP)  ; LAB_004147f5
    LEA EAX,[ESP + 0xc]                 ; 004148e5
    PUSH EAX                            ; 004148e9
    LEA EAX,[ESP + 0x4]                 ; 004148ea
    XOR ECX,ECX                         ; 004148ee
    PUSH EAX                            ; 004148f0
    MOV ESI,0x41a00000                  ; 004148f1
    MOV dword ptr [ESP + 0x14],ECX      ; 004148f6
    PUSH EBX                            ; 004148fa
    MOV dword ptr [ESP + 0x1c],ESI      ; 004148fb
    MOV dword ptr [ESP + 0x20],ESI      ; 004148ff
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 00414903
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_0040a200(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 00414908
    PUSH 0x1                            ; 0041490b
    LEA EAX,[ESP + 0x4]                 ; 0041490d
    PUSH 0xbf800000                     ; 00414911
    PUSH EAX                            ; 00414916
    PUSH EBX                            ; 00414917
    CALL core_charactr.cpp_CCharacter_dismember_FUN_00427b60 ; 00414918
        ;   XREF to: 00427b60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismember_FUN_00427b60(CCharacter * this_ptr, CVector3f * impact_point, float impact_force, int render_in_background)
    ADD ESP,0x10                        ; 0041491d
    ADD ESP,0x24                        ; 00414920
    POP EBP                             ; 00414923
    POP EDI                             ; 00414924
    POP ESI                             ; 00414925
    POP EBX                             ; 00414926
    RET                                 ; 00414927

