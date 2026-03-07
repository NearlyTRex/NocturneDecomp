; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_pendulum_cpp_CPendulum_testCollisionWithActor_FUN_005495c0(CPendulum *this_ptr,CDemonActor *actor,CDemonActor *left_hand_actor,CDemonActor *right_hand_actor)
;
; Parameters:
; CPendulum *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; CDemonActor *    Stack[0xc]:4   left_hand_actor
; CDemonActor *    Stack[0x10]:4   right_hand_actor
;
; XREF[1]:
;   core_pendulum.cpp_CPendulum_process_FUN_0054a180 at 0054a2a3
;
; Referenced Globals:
;   float FLOAT_0063ec9d = 0.5
;   float FLOAT_00662138 = 0.00390625
;   CGore* g_CGorePtr = 02d83364
;   CGore g_CGoreInstance
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   core_gore.cpp_CGore_spawnBloodBurst_FUN_004edbb0
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005495c0
        ;   Label: core_pendulum.cpp_CPendulum_testCollisionWithActor_FUN_005495c0
    PUSH ESI                            ; 005495c1
    PUSH EDI                            ; 005495c2
    PUSH EBP                            ; 005495c3
    MOV EBP,ESP                         ; 005495c4
    SUB ESP,0xfc                        ; 005495c6
    AND ESP,0xfffffff8                  ; 005495cc
    MOV EBX,dword ptr [EBP + 0x14]      ; 005495cf
    MOV EAX,ESP                         ; 005495d2
    PUSH EAX                            ; 005495d4
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0 ; 005495d5
        ;   XREF to: 005743c0 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 005495da
    MOV EDX,dword ptr [EBP + 0x1c]      ; 005495dd
    TEST EDX,EDX                        ; 005495e0
    JNZ 0x00549606                      ; 005495e2
        ;   XREF to: 00549606 (CONDITIONAL_JUMP)  ; LAB_00549606
    MOV ESI,dword ptr [EBP + 0x20]      ; 005495e4
        ;   Label: LAB_005495e4
    TEST ESI,ESI                        ; 005495e7
    JZ 0x0054961c                       ; 005495e9
        ;   XREF to: 0054961c (CONDITIONAL_JUMP)  ; LAB_0054961c
    PUSH ESI                            ; 005495eb
    MOV EAX,dword ptr [ESI + 0x154]     ; 005495ec
    CALL dword ptr [EAX + 0x120]        ; 005495f2
    ADD ESP,0x4                         ; 005495f8
    TEST EAX,EAX                        ; 005495fb
    JZ 0x0054961c                       ; 005495fd
        ;   XREF to: 0054961c (CONDITIONAL_JUMP)  ; LAB_0054961c
    MOV ESP,EBP                         ; 005495ff
        ;   Label: LAB_005495ff
    POP EBP                             ; 00549601
    POP EDI                             ; 00549602
    POP ESI                             ; 00549603
    POP EBX                             ; 00549604
    RET                                 ; 00549605
    PUSH EDX                            ; 00549606
        ;   Label: LAB_00549606
    MOV EAX,dword ptr [EDX + 0x154]     ; 00549607
    CALL dword ptr [EAX + 0x120]        ; 0054960d
    ADD ESP,0x4                         ; 00549613
    TEST EAX,EAX                        ; 00549616
    JNZ 0x005495ff                      ; 00549618
        ;   XREF to: 005495ff (CONDITIONAL_JUMP)  ; LAB_005495ff
    JMP 0x005495e4                      ; 0054961a
        ;   XREF to: 005495e4 (UNCONDITIONAL_JUMP)  ; LAB_005495e4
    MOV EDX,ESP                         ; 0054961c
        ;   Label: LAB_0054961c
    MOV EAX,dword ptr [EBP + 0x18]      ; 0054961e
    PUSH EDX                            ; 00549621
    MOV EDX,dword ptr [EBP + 0x18]      ; 00549622
    MOV EAX,dword ptr [EAX + 0x154]     ; 00549625
    PUSH EDX                            ; 0054962b
    CALL dword ptr [EAX + 0x34]         ; 0054962c
    ADD ESP,0x8                         ; 0054962f
    CMP EAX,0x2                         ; 00549632
    JNZ 0x005495ff                      ; 00549635
        ;   XREF to: 005495ff (CONDITIONAL_JUMP)  ; LAB_005495ff
    LEA EAX,[ESP + 0x58]                ; 00549637
    MOV EDX,dword ptr [EBP + 0x18]      ; 0054963b
    PUSH EAX                            ; 0054963e
    MOV ECX,dword ptr [EBP + 0x18]      ; 0054963f
    MOV EDX,dword ptr [EDX + 0x154]     ; 00549642
    PUSH ECX                            ; 00549648
    CALL dword ptr [EDX + 0x14]         ; 00549649
    LEA EDX,[EAX + 0xc]                 ; 0054964c
    FLD float ptr [EAX]                 ; 0054964f
    FADD float ptr [EDX]                ; 00549651
    ADD ESP,0x8                         ; 00549653
    FST float ptr [ESP + 0xb8]          ; 00549656
    FLD float ptr [EAX + 0x4]           ; 0054965d
    FADD float ptr [EDX + 0x4]          ; 00549660
    FXCH                                ; 00549663
    FLD float ptr [0x0063ec9d]          ; 00549665 | FLOAT_0063ec9d
    FXCH                                ; 0054966b
    FMUL ST1                            ; 0054966d
    FXCH ST2                            ; 0054966f
    FST float ptr [ESP + 0xbc]          ; 00549671
    FLD float ptr [EAX + 0x8]           ; 00549678
    FADD float ptr [EDX + 0x8]          ; 0054967b
    FXCH                                ; 0054967e
    FMUL ST2                            ; 00549680
    FXCH                                ; 00549682
    FST float ptr [ESP + 0xc0]          ; 00549684
    FMULP ST2                           ; 0054968b
    MOV EAX,dword ptr [EBP + 0x18]      ; 0054968d
    FXCH ST2                            ; 00549690
    FSTP float ptr [ESP + 0xdc]         ; 00549692
    FXCH                                ; 00549699
    FSTP float ptr [ESP + 0xe0]         ; 0054969b
    FSTP float ptr [ESP + 0xe4]         ; 005496a2
    FLD float ptr [EAX + 0x20]          ; 005496a9
    FADD float ptr [ESP + 0xdc]         ; 005496ac
    FSTP float ptr [ESP + 0x94]         ; 005496b3
    FLD float ptr [EAX + 0x24]          ; 005496ba
    FADD float ptr [ESP + 0xe0]         ; 005496bd
    FLD float ptr [ESP + 0x94]          ; 005496c4
    FXCH                                ; 005496cb
    FSTP float ptr [ESP + 0x98]         ; 005496cd
    FLD float ptr [EAX + 0x28]          ; 005496d4
    FADD float ptr [ESP + 0xe4]         ; 005496d7
    LEA EAX,[EBX + 0x20]                ; 005496de
    FSTP float ptr [ESP + 0x9c]         ; 005496e1
    FSUB float ptr [EAX]                ; 005496e8
    FLD float ptr [ESP + 0x98]          ; 005496ea
    FXCH                                ; 005496f1
    FSTP float ptr [ESP + 0xa0]         ; 005496f3
    FSUB float ptr [EAX + 0x4]          ; 005496fa
    FLD float ptr [ESP + 0x9c]          ; 005496fd
    FXCH                                ; 00549704
    FSTP float ptr [ESP + 0xa4]         ; 00549706
    FSUB float ptr [EAX + 0x8]          ; 0054970d
    LEA EAX,[ESP + 0xa0]                ; 00549710
    PUSH EAX                            ; 00549717
    LEA EAX,[ESP + 0xd4]                ; 00549718
    PUSH EAX                            ; 0054971f
    LEA EAX,[EBX + 0x3c]                ; 00549720
    PUSH EAX                            ; 00549723
    FSTP float ptr [ESP + 0xb4]         ; 00549724
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030 ; 0054972b
        ;   XREF to: 00472030 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    MOV EDX,EAX                         ; 00549730
    LEA EAX,[ESP + 0xa0]                ; 00549732
    ADD ESP,0xc                         ; 00549739
    CMP EAX,EDX                         ; 0054973c
    JZ 0x0054975d                       ; 0054973e
        ;   XREF to: 0054975d (CONDITIONAL_JUMP)  ; LAB_0054975d
    MOV EAX,dword ptr [EDX]             ; 00549740
    MOV dword ptr [ESP + 0x94],EAX      ; 00549742
    MOV EAX,dword ptr [EDX + 0x4]       ; 00549749
    MOV dword ptr [ESP + 0x98],EAX      ; 0054974c
    MOV EAX,dword ptr [EDX + 0x8]       ; 00549753
    MOV dword ptr [ESP + 0x9c],EAX      ; 00549756
    LEA EAX,[ESP + 0x28]                ; 0054975d
        ;   Label: LAB_0054975d
    PUSH EAX                            ; 00549761
    MOV EDX,dword ptr [EBX + 0x154]     ; 00549762
    PUSH EBX                            ; 00549768
    CALL dword ptr [EDX + 0x14]         ; 00549769
    FLD float ptr [EAX]                 ; 0054976c
    ADD ESP,0x8                         ; 0054976e
    MOV EDX,EAX                         ; 00549771
    FCOMP float ptr [ESP + 0x94]        ; 00549773
    FNSTSW AX                           ; 0054977a
    SAHF                                ; 0054977c
    JA 0x005495ff                       ; 0054977d
        ;   XREF to: 005495ff (CONDITIONAL_JUMP)  ; LAB_005495ff
    FLD float ptr [EDX + 0x4]           ; 00549783
    FCOMP float ptr [ESP + 0x98]        ; 00549786
    FNSTSW AX                           ; 0054978d
    SAHF                                ; 0054978f
    JA 0x005495ff                       ; 00549790
        ;   XREF to: 005495ff (CONDITIONAL_JUMP)  ; LAB_005495ff
    FLD float ptr [EDX + 0x8]           ; 00549796
    FCOMP float ptr [ESP + 0x9c]        ; 00549799
    FNSTSW AX                           ; 005497a0
    SAHF                                ; 005497a2
    JA 0x005495ff                       ; 005497a3
        ;   XREF to: 005495ff (CONDITIONAL_JUMP)  ; LAB_005495ff
    FLD float ptr [EDX + 0xc]           ; 005497a9
    FCOMP float ptr [ESP + 0x94]        ; 005497ac
    FNSTSW AX                           ; 005497b3
    SAHF                                ; 005497b5
    JC 0x005495ff                       ; 005497b6
        ;   XREF to: 005495ff (CONDITIONAL_JUMP)  ; LAB_005495ff
    FLD float ptr [EDX + 0x10]          ; 005497bc
    FCOMP float ptr [ESP + 0x98]        ; 005497bf
    FNSTSW AX                           ; 005497c6
    SAHF                                ; 005497c8
    JC 0x005495ff                       ; 005497c9
        ;   XREF to: 005495ff (CONDITIONAL_JUMP)  ; LAB_005495ff
    FLD float ptr [EDX + 0x14]          ; 005497cf
    FCOMP float ptr [ESP + 0x9c]        ; 005497d2
    FNSTSW AX                           ; 005497d9
    SAHF                                ; 005497db
    JC 0x005495ff                       ; 005497dc
        ;   XREF to: 005495ff (CONDITIONAL_JUMP)  ; LAB_005495ff
    LEA EAX,[EBX + 0x158]               ; 005497e2
    PUSH EAX                            ; 005497e8
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 005497e9
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005497ee
    FLD float ptr [ESP + 0x1c]          ; 005497f1
    FMUL ST0                            ; 005497f5
    XOR EDI,EDI                         ; 005497f7
    MOV EDX,dword ptr [EAX + 0x104]     ; 005497f9
    MOV ESI,dword ptr [EAX + 0x10c]     ; 005497ff
    MOV dword ptr [ESP + 0xf0],EDX      ; 00549805
    MOV dword ptr [ESP + 0xf4],EDI      ; 0054980c
    FSTP float ptr [ESP + 0xec]         ; 00549813
    TEST EDX,EDX                        ; 0054981a
    JLE 0x005495ff                      ; 0054981c
        ;   XREF to: 005495ff (CONDITIONAL_JUMP)  ; LAB_005495ff
    MOV EAX,dword ptr [EBP + 0x18]      ; 00549822
    LEA EDI,[EBX + 0x20]                ; 00549825
    ADD EAX,0x20                        ; 00549828
    ADD EBX,0x3c                        ; 0054982b
    MOV dword ptr [ESP + 0xf8],EAX      ; 0054982e
    MOV dword ptr [ESP + 0xe8],EBX      ; 00549835
    LEA EBX,[ESP + 0x70]                ; 0054983c
        ;   Label: LAB_0054983c
    MOV EAX,ESI                         ; 00549840
    FILD dword ptr [EAX]                ; 00549842
    FMUL float ptr [0x00662138]         ; 00549844 | FLOAT_00662138
    FSTP float ptr [EBX]                ; 0054984a
    FILD dword ptr [EAX + 0x4]          ; 0054984c
    FMUL float ptr [0x00662138]         ; 0054984f | FLOAT_00662138
    FSTP float ptr [EBX + 0x4]          ; 00549855
    FILD dword ptr [EAX + 0x8]          ; 00549858
    FMUL float ptr [0x00662138]         ; 0054985b | FLOAT_00662138
    FSTP float ptr [EBX + 0x8]          ; 00549861
    LEA EAX,[ESP + 0x70]                ; 00549864
    PUSH EAX                            ; 00549868
    LEA EAX,[ESP + 0xb0]                ; 00549869
    PUSH EAX                            ; 00549870
    MOV ECX,dword ptr [ESP + 0xf0]      ; 00549871
    PUSH ECX                            ; 00549878
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 00549879
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    MOV EDX,EAX                         ; 0054987e
    LEA EAX,[ESP + 0x7c]                ; 00549880
    ADD ESP,0xc                         ; 00549884
    CMP EAX,EDX                         ; 00549887
    JNZ 0x00549917                      ; 00549889
        ;   XREF to: 00549917 (CONDITIONAL_JUMP)  ; LAB_00549917
    FLD float ptr [ESP + 0x74]          ; 0054988f
        ;   Label: LAB_0054988f
    FLD float ptr [ESP + 0x70]          ; 00549893
    FADD float ptr [EDI]                ; 00549897
    FLD float ptr [ESP + 0x78]          ; 00549899
    FXCH                                ; 0054989d
    FSTP float ptr [ESP + 0x70]         ; 0054989f
    FXCH                                ; 005498a3
    FADD float ptr [EDI + 0x4]          ; 005498a5
    MOV EAX,dword ptr [ESP + 0xf8]      ; 005498a8
    FSTP float ptr [ESP + 0x74]         ; 005498af
    FADD float ptr [EDI + 0x8]          ; 005498b3
    FLD float ptr [ESP + 0x70]          ; 005498b6
    FXCH                                ; 005498ba
    FSTP float ptr [ESP + 0x78]         ; 005498bc
    FSUB float ptr [EAX]                ; 005498c0
    FLD float ptr [ESP + 0x74]          ; 005498c2
    FXCH                                ; 005498c6
    FSTP float ptr [ESP + 0x70]         ; 005498c8
    FSUB float ptr [EAX + 0x4]          ; 005498cc
    FLD float ptr [ESP + 0x78]          ; 005498cf
    FXCH                                ; 005498d3
    FSTP float ptr [ESP + 0x74]         ; 005498d5
    FSUB float ptr [EAX + 0x8]          ; 005498d9
    FLD float ptr [ESP + 0x74]          ; 005498dc
    FXCH                                ; 005498e0
    FSTP float ptr [ESP + 0x78]         ; 005498e2
    FCOMP float ptr [ESP + 0x14]        ; 005498e6
    FNSTSW AX                           ; 005498ea
    SAHF                                ; 005498ec
    JNC 0x00549930                      ; 005498ed
        ;   XREF to: 00549930 (CONDITIONAL_JUMP)  ; LAB_00549930
    MOV EAX,dword ptr [ESP + 0xf4]      ; 005498ef
        ;   Label: LAB_005498ef
    MOV EDX,dword ptr [ESP + 0xf0]      ; 005498f6
    INC EAX                             ; 005498fd
    ADD ESI,0xc                         ; 005498fe
    MOV dword ptr [ESP + 0xf4],EAX      ; 00549901
    CMP EAX,EDX                         ; 00549908
    JL 0x0054983c                       ; 0054990a
        ;   XREF to: 0054983c (CONDITIONAL_JUMP)  ; LAB_0054983c
    MOV ESP,EBP                         ; 00549910
    POP EBP                             ; 00549912
    POP EDI                             ; 00549913
    POP ESI                             ; 00549914
    POP EBX                             ; 00549915
    RET                                 ; 00549916
    MOV EAX,dword ptr [EDX]             ; 00549917
        ;   Label: LAB_00549917
    MOV dword ptr [ESP + 0x70],EAX      ; 00549919
    MOV EAX,dword ptr [EDX + 0x4]       ; 0054991d
    MOV dword ptr [ESP + 0x74],EAX      ; 00549920
    MOV EAX,dword ptr [EDX + 0x8]       ; 00549924
    MOV dword ptr [ESP + 0x78],EAX      ; 00549927
    JMP 0x0054988f                      ; 0054992b
        ;   XREF to: 0054988f (UNCONDITIONAL_JUMP)  ; LAB_0054988f
    FLD float ptr [ESP + 0x18]          ; 00549930
        ;   Label: LAB_00549930
    FLD1                                ; 00549934
    FADDP                               ; 00549936
    FLD float ptr [ESP + 0x74]          ; 00549938
    FCOMPP                              ; 0054993c
    FNSTSW AX                           ; 0054993e
    SAHF                                ; 00549940
    JA 0x005498ef                       ; 00549941
        ;   XREF to: 005498ef (CONDITIONAL_JUMP)  ; LAB_005498ef
    FLD float ptr [ESP + 0x78]          ; 00549943
    FMUL ST0                            ; 00549947
    FLD float ptr [ESP + 0x70]          ; 00549949
    FMUL ST0                            ; 0054994d
    FADDP                               ; 0054994f
    FCOMP float ptr [ESP + 0xec]        ; 00549951
    FNSTSW AX                           ; 00549958
    SAHF                                ; 0054995a
    JA 0x005498ef                       ; 0054995b
        ;   XREF to: 005498ef (CONDITIONAL_JUMP)  ; LAB_005498ef
    MOV EBX,dword ptr [EBP + 0x1c]      ; 0054995d
    TEST EBX,EBX                        ; 00549960
    JZ 0x0054997d                       ; 00549962
        ;   XREF to: 0054997d (CONDITIONAL_JUMP)  ; LAB_0054997d
    PUSH 0xbf800000                     ; 00549964
    PUSH 0x0                            ; 00549969
    PUSH 0x7                            ; 0054996b
    MOV EAX,dword ptr [EBX + 0x154]     ; 0054996d
    PUSH EBX                            ; 00549973
    CALL dword ptr [EAX + 0xf0]         ; 00549974
    ADD ESP,0x10                        ; 0054997a
    MOV EDI,dword ptr [EBP + 0x20]      ; 0054997d
        ;   Label: LAB_0054997d
    TEST EDI,EDI                        ; 00549980
    JZ 0x0054999d                       ; 00549982
        ;   XREF to: 0054999d (CONDITIONAL_JUMP)  ; LAB_0054999d
    PUSH 0xbf800000                     ; 00549984
    PUSH 0x0                            ; 00549989
    PUSH 0x7                            ; 0054998b
    MOV EAX,dword ptr [EDI + 0x154]     ; 0054998d
    PUSH EDI                            ; 00549993
    CALL dword ptr [EAX + 0xf0]         ; 00549994
    ADD ESP,0x10                        ; 0054999a
    LEA EAX,[ESP + 0x40]                ; 0054999d
        ;   Label: LAB_0054999d
    MOV EDX,dword ptr [EBP + 0x18]      ; 005499a1
    PUSH EAX                            ; 005499a4
    MOV ECX,dword ptr [EBP + 0x18]      ; 005499a5
    MOV EDX,dword ptr [EDX + 0x154]     ; 005499a8
    PUSH ECX                            ; 005499ae
    CALL dword ptr [EDX + 0x14]         ; 005499af
    LEA EDX,[EAX + 0xc]                 ; 005499b2
    FLD float ptr [EAX]                 ; 005499b5
    FADD float ptr [EDX]                ; 005499b7
    ADD ESP,0x8                         ; 005499b9
    FST float ptr [ESP + 0x7c]          ; 005499bc
    FLD float ptr [EAX + 0x4]           ; 005499c0
    FADD float ptr [EDX + 0x4]          ; 005499c3
    FXCH                                ; 005499c6
    FLD float ptr [0x0063ec9d]          ; 005499c8 | FLOAT_0063ec9d
    FXCH                                ; 005499ce
    FMUL ST1                            ; 005499d0
    FXCH ST2                            ; 005499d2
    FST float ptr [ESP + 0x80]          ; 005499d4
    FLD float ptr [EAX + 0x8]           ; 005499db
    FADD float ptr [EDX + 0x8]          ; 005499de
    FXCH                                ; 005499e1
    FMUL ST2                            ; 005499e3
    FXCH                                ; 005499e5
    FST float ptr [ESP + 0x84]          ; 005499e7
    FMULP ST2                           ; 005499ee
    MOV EAX,dword ptr [EBP + 0x18]      ; 005499f0
    FXCH ST2                            ; 005499f3
    FSTP float ptr [ESP + 0x88]         ; 005499f5
    FXCH                                ; 005499fc
    FSTP float ptr [ESP + 0x8c]         ; 005499fe
    FSTP float ptr [ESP + 0x90]         ; 00549a05
    FLD float ptr [EAX + 0x20]          ; 00549a0c
    FADD float ptr [ESP + 0x88]         ; 00549a0f
    FSTP float ptr [ESP + 0xc4]         ; 00549a16
    FLD float ptr [EAX + 0x24]          ; 00549a1d
    FADD float ptr [ESP + 0x8c]         ; 00549a20
    LEA EDX,[ESP + 0x70]                ; 00549a27
    FSTP float ptr [ESP + 0xc8]         ; 00549a2b
    FLD float ptr [EAX + 0x28]          ; 00549a32
    FADD float ptr [ESP + 0x90]         ; 00549a35
    LEA EAX,[ESP + 0xc4]                ; 00549a3c
    FSTP float ptr [ESP + 0xcc]         ; 00549a43
    CMP EDX,EAX                         ; 00549a4a
    JZ 0x00549a6f                       ; 00549a4c
        ;   XREF to: 00549a6f (CONDITIONAL_JUMP)  ; LAB_00549a6f
    MOV EAX,dword ptr [ESP + 0xc4]      ; 00549a4e
    MOV dword ptr [ESP + 0x70],EAX      ; 00549a55
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00549a59
    MOV dword ptr [ESP + 0x74],EAX      ; 00549a60
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00549a64
    MOV dword ptr [ESP + 0x78],EAX      ; 00549a6b
    PUSH 0x0                            ; 00549a6f
        ;   Label: LAB_00549a6f
    PUSH 0xc8                           ; 00549a71
    PUSH 0x0                            ; 00549a76
    LEA EAX,[ESP + 0x7c]                ; 00549a78
    PUSH EAX                            ; 00549a7c
    MOV EBX,dword ptr [0x0067b9a0]      ; 00549a7d | g_CGoreInstance | g_CGorePtr
    PUSH EBX                            ; 00549a83 | g_CGoreInstance
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004edbb0 ; 00549a84
        ;   XREF to: 004edbb0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004edbb0(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 00549a89
    MOV ESP,EBP                         ; 00549a8c
    POP EBP                             ; 00549a8e
    POP EDI                             ; 00549a8f
    POP ESI                             ; 00549a90
    POP EBX                             ; 00549a91
    RET                                 ; 00549a92

