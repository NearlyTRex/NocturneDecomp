; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_findSomethingToLookAt_FUN_00429730(CCharacter *this_ptr,float delta_time,int disable_search)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; int              Stack[0xc]:4   disable_search
;
; XREF[1]:
;   core_hostage.cpp_CHostage_process_FUN_004b6d80 at 004b736b
;
; Referenced Globals:
;   TerminatedCString s_CHero_0057a272
;   TerminatedCString s_core_charactr_cpp_0057a278
;   TerminatedCString s_CCharacter_findSomething_0057a28d
;   double DOUBLE_0057a2ca = 1.10000000000000
;   double DOUBLE_0057a2d2 = 5.36197666906508E-315
;   double DOUBLE_0057a2da = 1.39626340155556
;   double DOUBLE_0057a2e2 = 0.785398163375000
;   double DOUBLE_0057a2ea = 5.22209901682860E-315
;   double DOUBLE_0057a2f2 = 0.400000000000000
;   double DOUBLE_0057a2fa = 10
;   double DOUBLE_0057a302 = 15
;   double DOUBLE_0057a30a = 20
;   float FLOAT_0057a312 = -1
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   undefined4 g_CCharacterActorType_00765a60.name_hash
;   ... and 5 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00511780
;   core_setcolid.cpp_CDemonSet_init_FUN_00511750
;   core_setcolid.cpp_CDemonSet_setRayType_FUN_00511800
;   core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_0050fa30
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00429730
        ;   Label: core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_00429730
    PUSH ESI                            ; 00429731
    PUSH EDI                            ; 00429732
    PUSH EBP                            ; 00429733
    MOV EBP,ESP                         ; 00429734
    SUB ESP,0xf0                        ; 00429736
    AND ESP,0xfffffff8                  ; 0042973c
    MOV ESI,dword ptr [EBP + 0x14]      ; 0042973f
    MOV EBX,dword ptr [EBP + 0x1c]      ; 00429742
    PUSH ESI                            ; 00429745
    MOV EAX,dword ptr [ESI + 0x14c]     ; 00429746
    CALL dword ptr [EAX + 0x104]        ; 0042974c
    ADD ESP,0x4                         ; 00429752
    TEST EAX,EAX                        ; 00429755
    JZ 0x0042975e                       ; 00429757
        ;   XREF to: 0042975e (CONDITIONAL_JUMP)  ; LAB_0042975e
    MOV EBX,0x1                         ; 00429759
    XOR EDX,EDX                         ; 0042975e
        ;   Label: LAB_0042975e
    MOV dword ptr [ESP + 0xe0],EDX      ; 00429760
    TEST EBX,EBX                        ; 00429767
    JZ 0x004297bc                       ; 00429769
        ;   XREF to: 004297bc (CONDITIONAL_JUMP)  ; LAB_004297bc
    MOV dword ptr [ESI + 0x25e0],EDX    ; 0042976b
        ;   Label: LAB_0042976b
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00429771
        ;   Label: LAB_00429771
    MOV dword ptr [ESI + 0x25c8],EAX    ; 00429778
    TEST EAX,EAX                        ; 0042977e
    JNZ 0x00429bae                      ; 00429780
        ;   XREF to: 00429bae (CONDITIONAL_JUMP)  ; LAB_00429bae
    CMP dword ptr [ESI + 0x25c8],0x0    ; 00429786
        ;   Label: LAB_00429786
    JNZ 0x00429db4                      ; 0042978d
        ;   XREF to: 00429db4 (CONDITIONAL_JUMP)  ; LAB_00429db4
    FLD float ptr [EBP + 0x18]          ; 00429793
        ;   Label: LAB_00429793
    FDIV float ptr [0x0057a2ea]         ; 00429796 | DOUBLE_0057a2ea
    FSUBR float ptr [ESI + 0x25d8]      ; 0042979c
    FST float ptr [ESI + 0x25d8]        ; 004297a2
    FLDZ                                ; 004297a8
    FCOMPP                              ; 004297aa
    FNSTSW AX                           ; 004297ac
    SAHF                                ; 004297ae
    JA 0x00429d8f                       ; 004297af
        ;   XREF to: 00429d8f (CONDITIONAL_JUMP)  ; LAB_00429d8f
    MOV ESP,EBP                         ; 004297b5
    POP EBP                             ; 004297b7
    POP EDI                             ; 004297b8
    POP ESI                             ; 004297b9
    POP EBX                             ; 004297ba
    RET                                 ; 004297bb
    MOV ECX,dword ptr [ESI + 0x25cc]    ; 004297bc
        ;   Label: LAB_004297bc
    TEST ECX,ECX                        ; 004297c2
    JZ 0x004297cf                       ; 004297c4
        ;   XREF to: 004297cf (CONDITIONAL_JUMP)  ; LAB_004297cf
    MOV dword ptr [ESP + 0xe0],ECX      ; 004297c6
    JMP 0x0042976b                      ; 004297cd
        ;   XREF to: 0042976b (UNCONDITIONAL_JUMP)  ; LAB_0042976b
    FLD float ptr [ESI + 0x25e0]        ; 004297cf
        ;   Label: LAB_004297cf
    FLDZ                                ; 004297d5
    FCOMPP                              ; 004297d7
    FNSTSW AX                           ; 004297d9
    SAHF                                ; 004297db
    JNC 0x004297ff                      ; 004297dc
        ;   XREF to: 004297ff (CONDITIONAL_JUMP)  ; LAB_004297ff
    FLD float ptr [ESI + 0x25e0]        ; 004297de
    MOV EAX,dword ptr [ESI + 0x25c8]    ; 004297e4
    FSUB float ptr [EBP + 0x18]         ; 004297ea
    MOV dword ptr [ESP + 0xe0],EAX      ; 004297ed
    FSTP float ptr [ESI + 0x25e0]       ; 004297f4
    JMP 0x00429771                      ; 004297fa
        ;   XREF to: 00429771 (UNCONDITIONAL_JUMP)  ; LAB_00429771
    LEA EAX,[ESP + 0x5c]                ; 004297ff
        ;   Label: LAB_004297ff
    PUSH EAX                            ; 00429803
    LEA EAX,[ESP + 0xa8]                ; 00429804
    MOV EDI,0x40b00000                  ; 0042980b
    PUSH EAX                            ; 00429810
    MOV dword ptr [ESP + 0x64],EDX      ; 00429811
    MOV dword ptr [ESP + 0x6c],EDX      ; 00429815
    PUSH ESI                            ; 00429819
    MOV dword ptr [ESP + 0x6c],EDI      ; 0042981a
    XOR EDI,EDI                         ; 0042981e
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00429820
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00429825
    MOV dword ptr [ESP + 0xe8],EDI      ; 00429828
    MOV EAX,[0x005be368]                ; 0042982f | g_CDemonSet_PTR_005be368
        ;   Label: LAB_0042982f
    CMP EDI,dword ptr [EAX + 0x14ecb0]  ; 00429834 | g_CDemonSet_01e57284.character_count
    JGE 0x00429b7a                      ; 0042983a
        ;   XREF to: 00429b7a (CONDITIONAL_JUMP)  ; LAB_00429b7a
    ADD EAX,dword ptr [ESP + 0xe8]      ; 00429840
    MOV EBX,dword ptr [EAX + 0x14ecb4]  ; 00429847
    CMP EBX,ESI                         ; 0042984d
    JNZ 0x00429865                      ; 0042984f
        ;   XREF to: 00429865 (CONDITIONAL_JUMP)  ; LAB_00429865
    MOV EBX,dword ptr [ESP + 0xe8]      ; 00429851
        ;   Label: LAB_00429851
    ADD EBX,0x4                         ; 00429858
    INC EDI                             ; 0042985b
    MOV dword ptr [ESP + 0xe8],EBX      ; 0042985c
    JMP 0x0042982f                      ; 00429863
        ;   XREF to: 0042982f (UNCONDITIONAL_JUMP)  ; LAB_0042982f
    PUSH EBX                            ; 00429865
        ;   Label: LAB_00429865
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00429866
    CALL dword ptr [EAX + 0x68]         ; 0042986c
    ADD ESP,0x4                         ; 0042986f
    TEST EAX,EAX                        ; 00429872
    JNZ 0x00429851                      ; 00429874
        ;   XREF to: 00429851 (CONDITIONAL_JUMP)  ; LAB_00429851
    PUSH EBX                            ; 00429876
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00429877
    CALL dword ptr [EAX + 0x104]        ; 0042987d
    ADD ESP,0x4                         ; 00429883
    MOV dword ptr [ESP + 0xe4],EAX      ; 00429886
    TEST EAX,EAX                        ; 0042988d
    JNZ 0x00429b19                      ; 0042988f
        ;   XREF to: 00429b19 (CONDITIONAL_JUMP)  ; LAB_00429b19
    LEA EAX,[ESP + 0x14]                ; 00429895
        ;   Label: LAB_00429895
    LEA EDX,[EBX + 0x20]                ; 00429899
    CMP EAX,EDX                         ; 0042989c
    JZ 0x004298b4                       ; 0042989e
        ;   XREF to: 004298b4 (CONDITIONAL_JUMP)  ; LAB_004298b4
    MOV EAX,dword ptr [EDX]             ; 004298a0
    MOV dword ptr [ESP + 0x14],EAX      ; 004298a2
    MOV EAX,dword ptr [EDX + 0x4]       ; 004298a6
    MOV dword ptr [ESP + 0x18],EAX      ; 004298a9
    MOV EAX,dword ptr [EDX + 0x8]       ; 004298ad
    MOV dword ptr [ESP + 0x1c],EAX      ; 004298b0
    FLD float ptr [ESP + 0x18]          ; 004298b4
        ;   Label: LAB_004298b4
    FADD float ptr [0x0057a2d2]         ; 004298b8 | DOUBLE_0057a2d2
    FSTP float ptr [ESP + 0x18]         ; 004298be
    FLD float ptr [ESP + 0x14]          ; 004298c2
        ;   Label: LAB_004298c2
    FLD float ptr [ESP + 0x18]          ; 004298c6
    FLD float ptr [ESP + 0x1c]          ; 004298ca
    LEA EAX,[ESP + 0x50]                ; 004298ce
    FXCH ST2                            ; 004298d2
    FSUB float ptr [ESP + 0xa4]         ; 004298d4
    FXCH                                ; 004298db
    FSUB float ptr [ESP + 0xa8]         ; 004298dd
    PUSH EAX                            ; 004298e4
    FXCH ST2                            ; 004298e5
    FSUB float ptr [ESP + 0xb0]         ; 004298e7
    LEA EAX,[ESP + 0xb4]                ; 004298ee
    FXCH                                ; 004298f5
    FSTP float ptr [ESP + 0x54]         ; 004298f7
    PUSH EAX                            ; 004298fb
    FXCH                                ; 004298fc
    FSTP float ptr [ESP + 0x5c]         ; 004298fe
    PUSH ESI                            ; 00429902
    FSTP float ptr [ESP + 0x64]         ; 00429903
    CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220 ; 00429907
        ;   XREF to: 0040a220 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220(CDemonActor * this_ptr, CVector3f * output_vector, CVector3f * input_vector)
    ADD ESP,0xc                         ; 0042990c
    FLD float ptr [ESP + 0xb8]          ; 0042990f
    FLDZ                                ; 00429916
    FCOMPP                              ; 00429918
    FNSTSW AX                           ; 0042991a
    SAHF                                ; 0042991c
    JA 0x00429851                       ; 0042991d
        ;   XREF to: 00429851 (CONDITIONAL_JUMP)  ; LAB_00429851
    FLD float ptr [ESP + 0xb4]          ; 00429923
    FMUL ST0                            ; 0042992a
    FLD float ptr [ESP + 0xb0]          ; 0042992c
    FMUL ST0                            ; 00429933
    FADDP                               ; 00429935
    FLD float ptr [ESP + 0xb8]          ; 00429937
    FMUL ST0                            ; 0042993e
    FADDP                               ; 00429940
    FSTP float ptr [ESP + 0xdc]         ; 00429942
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00429949
    MOV dword ptr [ESP + 0x4],EAX       ; 00429950
    CMP EAX,0x44610000                  ; 00429954
    JG 0x00429851                       ; 00429959
        ;   XREF to: 00429851 (CONDITIONAL_JUMP)  ; LAB_00429851
    LEA EAX,[ESP + 0xb0]                ; 0042995f
    PUSH EAX                            ; 00429966
    LEA EAX,[ESP + 0xc0]                ; 00429967
    PUSH EAX                            ; 0042996e
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 0042996f
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 00429974
    FLD float ptr [ESP + 0xc0]          ; 00429977
    FABS                                ; 0042997e
    FCOMP double ptr [0x0057a2da]       ; 00429980 | DOUBLE_0057a2da
    FNSTSW AX                           ; 00429986
    SAHF                                ; 00429988
    JA 0x00429851                       ; 00429989
        ;   XREF to: 00429851 (CONDITIONAL_JUMP)  ; LAB_00429851
    FLD float ptr [ESP + 0xbc]          ; 0042998f
    FABS                                ; 00429996
    FCOMP double ptr [0x0057a2e2]       ; 00429998 | DOUBLE_0057a2e2
    FNSTSW AX                           ; 0042999e
    SAHF                                ; 004299a0
    JA 0x00429851                       ; 004299a1
        ;   XREF to: 00429851 (CONDITIONAL_JUMP)  ; LAB_00429851
    MOV EAX,[0x01bcdef4]                ; 004299a7 | g_CEnemyActorType_01bcdebc.name_hash
    PUSH EAX                            ; 004299ac
    MOV ECX,0x41200000                  ; 004299ad
    PUSH EBX                            ; 004299b2
    MOV dword ptr [ESP + 0x8],ECX       ; 004299b3
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004299b7
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004299bc
    TEST EAX,EAX                        ; 004299bf
    JZ 0x004299e6                       ; 004299c1
        ;   XREF to: 004299e6 (CONDITIONAL_JUMP)  ; LAB_004299e6
    CMP dword ptr [ESP + 0xe4],0x0      ; 004299c3
    JNZ 0x004299e6                      ; 004299cb
        ;   XREF to: 004299e6 (CONDITIONAL_JUMP)  ; LAB_004299e6
    MOV ECX,0x41f00000                  ; 004299cd
    MOV EDX,dword ptr [EAX + 0xbca4]    ; 004299d2
    MOV dword ptr [ESP],ECX             ; 004299d8
    CMP ESI,EDX                         ; 004299db
    JNZ 0x004299e6                      ; 004299dd
        ;   XREF to: 004299e6 (CONDITIONAL_JUMP)  ; LAB_004299e6
    MOV dword ptr [ESP],0x42200000      ; 004299df
    FLD float ptr [ESP]                 ; 004299e6
        ;   Label: LAB_004299e6
    FCOMP double ptr [0x0057a2fa]       ; 004299e9 | DOUBLE_0057a2fa
    FNSTSW AX                           ; 004299ef
    SAHF                                ; 004299f1
    JNC 0x00429a0d                      ; 004299f2
        ;   XREF to: 00429a0d (CONDITIONAL_JUMP)  ; LAB_00429a0d
    PUSH 0x57a272                       ; 004299f4 | = "CHero"
    PUSH EBX                            ; 004299f9
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004299fa
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004299ff
    TEST EAX,EAX                        ; 00429a02
    JZ 0x00429a0d                       ; 00429a04
        ;   XREF to: 00429a0d (CONDITIONAL_JUMP)  ; LAB_00429a0d
    MOV dword ptr [ESP],0x41700000      ; 00429a06
    FLD float ptr [ESP]                 ; 00429a0d
        ;   Label: LAB_00429a0d
    FCOMP double ptr [0x0057a302]       ; 00429a10 | DOUBLE_0057a302
    FNSTSW AX                           ; 00429a16
    SAHF                                ; 00429a18
    JNC 0x00429a2c                      ; 00429a19
        ;   XREF to: 00429a2c (CONDITIONAL_JUMP)  ; LAB_00429a2c
    CMP dword ptr [ESP + 0xe4],0x0      ; 00429a1b
    JLE 0x00429a2c                      ; 00429a23
        ;   XREF to: 00429a2c (CONDITIONAL_JUMP)  ; LAB_00429a2c
    MOV dword ptr [ESP],0x41700000      ; 00429a25
    FLD float ptr [ESP + 0x4]           ; 00429a2c
        ;   Label: LAB_00429a2c
    FSQRT                               ; 00429a30
    FLD double ptr [0x0057a30a]         ; 00429a32 | DOUBLE_0057a30a
    FXCH                                ; 00429a38
    FADD ST0,ST1                        ; 00429a3a
    FDIVP                               ; 00429a3c
    FLD float ptr [ESP]                 ; 00429a3e
    FXCH                                ; 00429a41
    FMUL ST1                            ; 00429a43
    MOV EAX,dword ptr [ESI + 0x25c8]    ; 00429a45
    FSTP ST1                            ; 00429a4b
    FSTP float ptr [ESP]                ; 00429a4d
    CMP EBX,EAX                         ; 00429a50
    JNZ 0x00429a64                      ; 00429a52
        ;   XREF to: 00429a64 (CONDITIONAL_JUMP)  ; LAB_00429a64
    FLD float ptr [ESP]                 ; 00429a54
    FLD ST0                             ; 00429a57
    FMUL double ptr [0x0057a2ca]        ; 00429a59 | DOUBLE_0057a2ca
    FSTP ST1                            ; 00429a5f
    FSTP float ptr [ESP]                ; 00429a61
    FLD float ptr [ESP]                 ; 00429a64
        ;   Label: LAB_00429a64
    FCOMP float ptr [0x0057a312]        ; 00429a67 | FLOAT_0057a312
    FNSTSW AX                           ; 00429a6d
    SAHF                                ; 00429a6f
    JC 0x00429851                       ; 00429a70
        ;   XREF to: 00429851 (CONDITIONAL_JUMP)  ; LAB_00429851
    MOV EDX,dword ptr [0x005be368]      ; 00429a76 | g_CDemonSet_PTR_005be368
    PUSH EDX                            ; 00429a7c | g_CDemonSet_01e57284
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00511750 ; 00429a7d
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00511750(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00429a82
    PUSH ESI                            ; 00429a85
    MOV ECX,dword ptr [0x005be368]      ; 00429a86 | g_CDemonSet_PTR_005be368
    PUSH ECX                            ; 00429a8c | g_CDemonSet_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 00429a8d
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00511780(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00429a92
    PUSH EBX                            ; 00429a95
    MOV EAX,[0x005be368]                ; 00429a96 | g_CDemonSet_PTR_005be368
    PUSH EAX                            ; 00429a9b | g_CDemonSet_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 00429a9c
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00511780(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00429aa1
    PUSH 0x2                            ; 00429aa4
    MOV EDX,dword ptr [0x005be368]      ; 00429aa6 | g_CDemonSet_PTR_005be368
    PUSH EDX                            ; 00429aac | g_CDemonSet_01e57284
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00511800 ; 00429aad
        ;   XREF to: 00511800 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_00511800(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 00429ab2
    LEA EAX,[ESP + 0x14]                ; 00429ab5
    PUSH EAX                            ; 00429ab9
    LEA EAX,[ESP + 0xa8]                ; 00429aba
    PUSH EAX                            ; 00429ac1
    MOV ECX,dword ptr [0x005be368]      ; 00429ac2 | g_CDemonSet_PTR_005be368
    PUSH ECX                            ; 00429ac8 | g_CDemonSet_01e57284
    CALL core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_0050fa30 ; 00429ac9
        ;   XREF to: 0050fa30 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_0050fa30(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * end_pos)
    ADD ESP,0xc                         ; 00429ace
    TEST EAX,EAX                        ; 00429ad1
    JNZ 0x00429851                      ; 00429ad3
        ;   XREF to: 00429851 (CONDITIONAL_JUMP)  ; LAB_00429851
    LEA EAX,[ESP + 0xbc]                ; 00429ad9
    LEA EDX,[ESP + 0x2c]                ; 00429ae0
    MOV dword ptr [ESP + 0xe0],EBX      ; 00429ae4
    CMP EDX,EAX                         ; 00429aeb
    JZ 0x00429851                       ; 00429aed
        ;   XREF to: 00429851 (CONDITIONAL_JUMP)  ; LAB_00429851
    MOV EAX,dword ptr [ESP + 0xbc]      ; 00429af3
    MOV dword ptr [ESP + 0x2c],EAX      ; 00429afa
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00429afe
    MOV dword ptr [ESP + 0x30],EAX      ; 00429b05
    MOV EAX,dword ptr [ESP + 0xc4]      ; 00429b09
    MOV dword ptr [ESP + 0x34],EAX      ; 00429b10
    JMP 0x00429851                      ; 00429b14
        ;   XREF to: 00429851 (UNCONDITIONAL_JUMP)  ; LAB_00429851
    LEA EDX,[EBX + 0x150]               ; 00429b19
        ;   Label: LAB_00429b19
    LEA EAX,[EBX + 0x23b0]              ; 00429b1f
    CMP byte ptr [EAX],0x0              ; 00429b25
    JZ 0x00429895                       ; 00429b28
        ;   XREF to: 00429895 (CONDITIONAL_JUMP)  ; LAB_00429895
    PUSH 0x0                            ; 00429b2e
    LEA EAX,[ESP + 0x84]                ; 00429b30
    PUSH EAX                            ; 00429b37
    PUSH EDX                            ; 00429b38
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 00429b39
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 00429b3e
    PUSH EAX                            ; 00429b41
    LEA EAX,[ESP + 0x9c]                ; 00429b42
    PUSH EAX                            ; 00429b49
    PUSH EBX                            ; 00429b4a
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00429b4b
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV EDX,EAX                         ; 00429b50
    LEA EAX,[ESP + 0x20]                ; 00429b52
    ADD ESP,0xc                         ; 00429b56
    CMP EAX,EDX                         ; 00429b59
    JZ 0x004298c2                       ; 00429b5b
        ;   XREF to: 004298c2 (CONDITIONAL_JUMP)  ; LAB_004298c2
    MOV EAX,dword ptr [EDX]             ; 00429b61
    MOV dword ptr [ESP + 0x14],EAX      ; 00429b63
    MOV EAX,dword ptr [EDX + 0x4]       ; 00429b67
    MOV dword ptr [ESP + 0x18],EAX      ; 00429b6a
    MOV EAX,dword ptr [EDX + 0x8]       ; 00429b6e
    MOV dword ptr [ESP + 0x1c],EAX      ; 00429b71
    JMP 0x004298c2                      ; 00429b75
        ;   XREF to: 004298c2 (UNCONDITIONAL_JUMP)  ; LAB_004298c2
    PUSH EAX                            ; 00429b7a | g_CDemonSet_01e57284
        ;   Label: LAB_00429b7a
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00511750 ; 00429b7b
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00511750(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00429b80
    PUSH 0x40000000                     ; 00429b83
    PUSH 0x3f800000                     ; 00429b88
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00429b8d
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0xf4],EAX      ; 00429b92
    MOV EAX,dword ptr [ESP + 0xf4]      ; 00429b99
    MOV dword ptr [ESI + 0x25e0],EAX    ; 00429ba0
    ADD ESP,0x8                         ; 00429ba6
    JMP 0x00429771                      ; 00429ba9
        ;   XREF to: 00429771 (UNCONDITIONAL_JUMP)  ; LAB_00429771
    XOR EAX,EAX                         ; 00429bae
        ;   Label: LAB_00429bae
    MOV dword ptr [ESP + 0x38],EAX      ; 00429bb0
    MOV dword ptr [ESP + 0x40],EAX      ; 00429bb4
    LEA EAX,[ESP + 0x38]                ; 00429bb8
    PUSH EAX                            ; 00429bbc
    LEA EAX,[ESP + 0x78]                ; 00429bbd
    PUSH EAX                            ; 00429bc1
    MOV EDX,0x40b00000                  ; 00429bc2
    PUSH ESI                            ; 00429bc7
    MOV dword ptr [ESP + 0x48],EDX      ; 00429bc8
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00429bcc
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00429bd1
    MOV EBX,dword ptr [0x00765a98]      ; 00429bd4 | g_CCharacterActorType_00765a60.name_hash
    PUSH EBX                            ; 00429bda
    MOV EDI,dword ptr [ESI + 0x25c8]    ; 00429bdb
    PUSH EDI                            ; 00429be1
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 00429be2
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00429be7
    MOV EBX,EAX                         ; 00429bea
    TEST EAX,EAX                        ; 00429bec
    JNZ 0x00429c12                      ; 00429bee
        ;   XREF to: 00429c12 (CONDITIONAL_JUMP)  ; LAB_00429c12
    MOV EAX,0x57a278                    ; 00429bf0 | = "..\\core\\charactr.cpp"
    MOV EDX,0xdb4                       ; 00429bf5
    PUSH 0x57a28d                       ; 00429bfa | = "CCharacter::findSomethingToLookAt - S..."
    MOV [0x01cc4800],EAX                ; 00429bff | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDX      ; 00429c04 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00429c0a
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00429c0f
    PUSH EBX                            ; 00429c12
        ;   Label: LAB_00429c12
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00429c13
    CALL dword ptr [EAX + 0x104]        ; 00429c19
    ADD ESP,0x4                         ; 00429c1f
    TEST EAX,EAX                        ; 00429c22
    JNZ 0x00429d25                      ; 00429c24
        ;   XREF to: 00429d25 (CONDITIONAL_JUMP)  ; LAB_00429d25
    LEA EAX,[ESP + 0x8c]                ; 00429c2a
        ;   Label: LAB_00429c2a
    ADD EBX,0x20                        ; 00429c31
    CMP EAX,EBX                         ; 00429c34
    JZ 0x00429c55                       ; 00429c36
        ;   XREF to: 00429c55 (CONDITIONAL_JUMP)  ; LAB_00429c55
    MOV EAX,dword ptr [EBX]             ; 00429c38
    MOV dword ptr [ESP + 0x8c],EAX      ; 00429c3a
    MOV EAX,dword ptr [EBX + 0x4]       ; 00429c41
    MOV dword ptr [ESP + 0x90],EAX      ; 00429c44
    MOV EAX,dword ptr [EBX + 0x8]       ; 00429c4b
    MOV dword ptr [ESP + 0x94],EAX      ; 00429c4e
    FLD float ptr [ESP + 0x90]          ; 00429c55
        ;   Label: LAB_00429c55
    FADD float ptr [0x0057a2d2]         ; 00429c5c | DOUBLE_0057a2d2
    FSTP float ptr [ESP + 0x90]         ; 00429c62
    FLD float ptr [ESP + 0x8c]          ; 00429c69
        ;   Label: LAB_00429c69
    FLD float ptr [ESP + 0x90]          ; 00429c70
    FLD float ptr [ESP + 0x94]          ; 00429c77
    LEA EAX,[ESP + 0x8]                 ; 00429c7e
    FXCH ST2                            ; 00429c82
    FSUB float ptr [ESP + 0x74]         ; 00429c84
    FXCH                                ; 00429c88
    FSUB float ptr [ESP + 0x78]         ; 00429c8a
    PUSH EAX                            ; 00429c8e
    FXCH ST2                            ; 00429c8f
    FSUB float ptr [ESP + 0x80]         ; 00429c91
    LEA EAX,[ESP + 0x24]                ; 00429c98
    FXCH                                ; 00429c9c
    FSTP float ptr [ESP + 0xc]          ; 00429c9e
    PUSH EAX                            ; 00429ca2
    FXCH                                ; 00429ca3
    FSTP float ptr [ESP + 0x14]         ; 00429ca5
    PUSH ESI                            ; 00429ca9
    FSTP float ptr [ESP + 0x1c]         ; 00429caa
    CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220 ; 00429cae
        ;   XREF to: 0040a220 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220(CDemonActor * this_ptr, CVector3f * output_vector, CVector3f * input_vector)
    ADD ESP,0xc                         ; 00429cb3
    LEA EAX,[ESP + 0x20]                ; 00429cb6
    PUSH EAX                            ; 00429cba
    LEA EAX,[ESP + 0x48]                ; 00429cbb
    PUSH EAX                            ; 00429cbf
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 00429cc0
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    MOV EDX,EAX                         ; 00429cc5
    LEA EAX,[ESP + 0x34]                ; 00429cc7
    ADD ESP,0x8                         ; 00429ccb
    CMP EAX,EDX                         ; 00429cce
    JZ 0x00429ce6                       ; 00429cd0
        ;   XREF to: 00429ce6 (CONDITIONAL_JUMP)  ; LAB_00429ce6
    MOV EAX,dword ptr [EDX]             ; 00429cd2
    MOV dword ptr [ESP + 0x2c],EAX      ; 00429cd4
    MOV EAX,dword ptr [EDX + 0x4]       ; 00429cd8
    MOV dword ptr [ESP + 0x30],EAX      ; 00429cdb
    MOV EAX,dword ptr [EDX + 0x8]       ; 00429cdf
    MOV dword ptr [ESP + 0x34],EAX      ; 00429ce2
    FLD float ptr [ESP + 0x30]          ; 00429ce6
        ;   Label: LAB_00429ce6
    FABS                                ; 00429cea
    FCOMP double ptr [0x0057a2da]       ; 00429cec | DOUBLE_0057a2da
    FNSTSW AX                           ; 00429cf2
    SAHF                                ; 00429cf4
    JBE 0x00429d01                      ; 00429cf5
        ;   XREF to: 00429d01 (CONDITIONAL_JUMP)  ; LAB_00429d01
    MOV dword ptr [ESI + 0x25c8],0x0    ; 00429cf7
    FLD float ptr [ESP + 0x2c]          ; 00429d01
        ;   Label: LAB_00429d01
    FABS                                ; 00429d05
    FCOMP double ptr [0x0057a2e2]       ; 00429d07 | DOUBLE_0057a2e2
    FNSTSW AX                           ; 00429d0d
    SAHF                                ; 00429d0f
    JBE 0x00429786                      ; 00429d10
        ;   XREF to: 00429786 (CONDITIONAL_JUMP)  ; LAB_00429786
    MOV dword ptr [ESI + 0x25c8],0x0    ; 00429d16
    JMP 0x00429793                      ; 00429d20
        ;   XREF to: 00429793 (UNCONDITIONAL_JUMP)  ; LAB_00429793
    LEA EDX,[EBX + 0x150]               ; 00429d25
        ;   Label: LAB_00429d25
    LEA EAX,[EBX + 0x23b0]              ; 00429d2b
    CMP byte ptr [EAX],0x0              ; 00429d31
    JZ 0x00429c2a                       ; 00429d34
        ;   XREF to: 00429c2a (CONDITIONAL_JUMP)  ; LAB_00429c2a
    PUSH 0x0                            ; 00429d3a
    LEA EAX,[ESP + 0xcc]                ; 00429d3c
    PUSH EAX                            ; 00429d43
    PUSH EDX                            ; 00429d44
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 00429d45
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 00429d4a
    PUSH EAX                            ; 00429d4d
    LEA EAX,[ESP + 0x6c]                ; 00429d4e
    PUSH EAX                            ; 00429d52
    PUSH EBX                            ; 00429d53
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00429d54
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV EDX,EAX                         ; 00429d59
    LEA EAX,[ESP + 0x98]                ; 00429d5b
    ADD ESP,0xc                         ; 00429d62
    CMP EAX,EDX                         ; 00429d65
    JZ 0x00429c69                       ; 00429d67
        ;   XREF to: 00429c69 (CONDITIONAL_JUMP)  ; LAB_00429c69
    MOV EAX,dword ptr [EDX]             ; 00429d6d
    MOV dword ptr [ESP + 0x8c],EAX      ; 00429d6f
    MOV EAX,dword ptr [EDX + 0x4]       ; 00429d76
    MOV dword ptr [ESP + 0x90],EAX      ; 00429d79
    MOV EAX,dword ptr [EDX + 0x8]       ; 00429d80
    MOV dword ptr [ESP + 0x94],EAX      ; 00429d83
    JMP 0x00429c69                      ; 00429d8a
        ;   XREF to: 00429c69 (UNCONDITIONAL_JUMP)  ; LAB_00429c69
    MOV dword ptr [ESI + 0x25d4],0x0    ; 00429d8f
        ;   Label: LAB_00429d8f
    MOV dword ptr [ESI + 0x25d8],0x0    ; 00429d99
    MOV dword ptr [ESI + 0x25d0],0x0    ; 00429da3
    MOV ESP,EBP                         ; 00429dad
    POP EBP                             ; 00429daf
    POP EDI                             ; 00429db0
    POP ESI                             ; 00429db1
    POP EBX                             ; 00429db2
    RET                                 ; 00429db3
    FLD float ptr [EBP + 0x18]          ; 00429db4
        ;   Label: LAB_00429db4
    FDIV float ptr [0x0057a2ea]         ; 00429db7 | DOUBLE_0057a2ea
    FADD float ptr [ESI + 0x25d8]       ; 00429dbd
    FST float ptr [ESI + 0x25d8]        ; 00429dc3
    FLD1                                ; 00429dc9
    FCOMPP                              ; 00429dcb
    FNSTSW AX                           ; 00429dcd
    SAHF                                ; 00429dcf
    JNC 0x00429ddc                      ; 00429dd0
        ;   XREF to: 00429ddc (CONDITIONAL_JUMP)  ; LAB_00429ddc
    MOV dword ptr [ESI + 0x25d8],0x3f800000 ; 00429dd2
    FLD float ptr [ESP + 0x30]          ; 00429ddc
        ;   Label: LAB_00429ddc
    FSUB float ptr [ESI + 0x25d0]       ; 00429de0
    SUB ESP,0x4                         ; 00429de6
    FSTP float ptr [ESP]                ; 00429de9
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 00429dec
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians)
    MOV dword ptr [ESP + 0xf0],EAX      ; 00429df1
    FLD float ptr [ESP + 0xf0]          ; 00429df8
    FMUL double ptr [0x0057a2f2]        ; 00429dff | DOUBLE_0057a2f2
    ADD ESP,0x4                         ; 00429e05
    FADD float ptr [ESI + 0x25d0]       ; 00429e08
    FSTP float ptr [ESI + 0x25d0]       ; 00429e0e
    FLD float ptr [ESP + 0x2c]          ; 00429e14
    FSUB float ptr [ESI + 0x25d4]       ; 00429e18
    SUB ESP,0x4                         ; 00429e1e
    FSTP float ptr [ESP]                ; 00429e21
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 00429e24
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians)
    MOV dword ptr [ESP + 0xf0],EAX      ; 00429e29
    FLD float ptr [ESP + 0xf0]          ; 00429e30
    FMUL double ptr [0x0057a2f2]        ; 00429e37 | DOUBLE_0057a2f2
    ADD ESP,0x4                         ; 00429e3d
    FADD float ptr [ESI + 0x25d4]       ; 00429e40
    FSTP float ptr [ESI + 0x25d4]       ; 00429e46
    MOV ESP,EBP                         ; 00429e4c
    POP EBP                             ; 00429e4e
    POP EDI                             ; 00429e4f
    POP ESI                             ; 00429e50
    POP EBX                             ; 00429e51
    RET                                 ; 00429e52

