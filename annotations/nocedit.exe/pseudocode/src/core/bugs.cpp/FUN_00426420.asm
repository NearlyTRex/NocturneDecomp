; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined4 core_bugs_cpp_FUN_00426420(void)
;
; Local Variables:
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_bugs.cpp_FUN_00425cc0 at 00425da0
;   core_bugs.cpp_FUN_004268e0 at 0042700a
;   core_bugs.cpp_FUN_004278d0 at 0042797f
;
; Referenced Globals:
;   float FLOAT_00616e17 = 12
;   double DOUBLE_00616e1b = 0.5
;   double DOUBLE_00616e23 = 1.60185815079703E-314
;   double DOUBLE_00616e2b = 0.400000000000000
;   double DOUBLE_00616e33 = 3.14159265350000
;   double DOUBLE_00616e3b = 4
;   float FLOAT_0065b5c8 = 0.5
;   float FLOAT_0065b5d0 = 3
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_bugs.cpp_FUN_00425b70
;   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00426420
        ;   Label: core_bugs.cpp_FUN_00426420
    PUSH ESI                            ; 00426421
    PUSH EDI                            ; 00426422
    PUSH EBP                            ; 00426423
    MOV EBP,ESP                         ; 00426424
    SUB ESP,0x80                        ; 00426426
    AND ESP,0xfffffff8                  ; 0042642c
    MOV EBX,dword ptr [EBP + 0x18]      ; 0042642f
    CMP dword ptr [EBX],0x0             ; 00426432
    JNZ 0x004267e0                      ; 00426435
        ;   XREF to: 004267e0 (CONDITIONAL_JUMP)  ; LAB_004267e0
    LEA ESI,[EBX + 0x20]                ; 0042643b
    LEA EDI,[EBX + 0x8]                 ; 0042643e
    FLD float ptr [ESI]                 ; 00426441
    FSUB float ptr [EDI]                ; 00426443
    FSTP float ptr [ESP + 0x28]         ; 00426445
    FLD float ptr [ESI + 0x4]           ; 00426449
    FSUB float ptr [EDI + 0x4]          ; 0042644c
    FST float ptr [ESP + 0x2c]          ; 0042644f
    FMUL float ptr [ESP + 0x2c]         ; 00426453
    FLD float ptr [ESP + 0x28]          ; 00426457
    FMUL ST0                            ; 0042645b
    FLD float ptr [ESI + 0x8]           ; 0042645d
    FSUB float ptr [EDI + 0x8]          ; 00426460
    FXCH                                ; 00426463
    FADDP ST2,ST0                       ; 00426465
    FST float ptr [ESP + 0x30]          ; 00426467
    FMUL float ptr [ESP + 0x30]         ; 0042646b
    FADDP                               ; 0042646f
    FSQRT                               ; 00426471
    FSTP float ptr [ESP + 0x4c]         ; 00426473
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00426477
    FLD float ptr [ESP + 0x4c]          ; 0042647b
    MOV dword ptr [ESP],EAX             ; 0042647f
    FCOMP float ptr [0x0065b5c8]        ; 00426482 | FLOAT_0065b5c8
    FNSTSW AX                           ; 00426488
    SAHF                                ; 0042648a
    JNC 0x004265af                      ; 0042648b
        ;   XREF to: 004265af (CONDITIONAL_JUMP)  ; LAB_004265af
    PUSH dword ptr [EBX + 0x10]         ; 00426491
    MOV ECX,dword ptr [EBP + 0x14]      ; 00426494
    PUSH dword ptr [EBX + 0x8]          ; 00426497
    PUSH ECX                            ; 0042649a
    CALL core_bugs.cpp_FUN_00425b70     ; 0042649b
        ;   XREF to: 00425b70 (UNCONDITIONAL_CALL)  ; undefined core_bugs.cpp_FUN_00425b70()
    MOV dword ptr [ESP + 0x88],EAX      ; 004264a0
    FLD float ptr [ESP + 0x88]          ; 004264a7
    ADD ESP,0xc                         ; 004264ae
    MOV EAX,dword ptr [EBP + 0x20]      ; 004264b1
    FSTP float ptr [EBX + 0xc]          ; 004264b4
    TEST EAX,EAX                        ; 004264b7
    JNZ 0x004267e9                      ; 004264b9
        ;   XREF to: 004267e9 (CONDITIONAL_JUMP)  ; LAB_004267e9
    FLD float ptr [0x0065b5c8]          ; 004264bf | FLOAT_0065b5c8
    FLD ST0                             ; 004264c5
    FMUL float ptr [0x00616e17]         ; 004264c7 | FLOAT_00616e17
    FXCH                                ; 004264cd
    FMUL float ptr [0x00616e23]         ; 004264cf | DOUBLE_00616e23
    FXCH                                ; 004264d5
    FLD double ptr [0x00616e1b]         ; 004264d7 | DOUBLE_00616e1b
    FXCH                                ; 004264dd
    FMUL ST1                            ; 004264df
    FXCH ST2                            ; 004264e1
    FMULP                               ; 004264e3
    FXCH                                ; 004264e5
    FSTP float ptr [ESP + 0x50]         ; 004264e7
    PUSH dword ptr [ESP + 0x50]         ; 004264eb
    FSTP float ptr [ESP + 0x7c]         ; 004264ef
    PUSH dword ptr [ESP + 0x7c]         ; 004264f3
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004264f7
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    LEA EAX,[ESP + 0x28]                ; 004265af
        ;   Label: LAB_004265af
    PUSH EAX                            ; 004265b3
    LEA EAX,[ESP + 0x14]                ; 004265b4
    PUSH EAX                            ; 004265b8
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 004265b9
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 004265be
    FLD float ptr [ESP]                 ; 004265c1
    FLDZ                                ; 004265c4
    FCOMPP                              ; 004265c6
    FNSTSW AX                           ; 004265c8
    SAHF                                ; 004265ca
    JNC 0x00426879                      ; 004265cb
        ;   XREF to: 00426879 (CONDITIONAL_JUMP)  ; LAB_00426879
    FLD float ptr [0x0065b5d0]          ; 004265d1 | FLOAT_0065b5d0
    FMUL float ptr [EBP + 0x1c]         ; 004265d7
    FST float ptr [ESP + 0x74]          ; 004265da
    FCOMP float ptr [ESP]               ; 004265de
    FNSTSW AX                           ; 004265e1
    SAHF                                ; 004265e3
    JBE 0x004265ed                      ; 004265e4
        ;   XREF to: 004265ed (CONDITIONAL_JUMP)  ; LAB_004265ed
    MOV EAX,dword ptr [ESP]             ; 004265e6
    MOV dword ptr [ESP + 0x74],EAX      ; 004265e9
    FLD float ptr [ESP + 0x74]          ; 004265ed
        ;   Label: LAB_004265ed
    FDIV float ptr [ESP]                ; 004265f1
    FLD float ptr [ESP + 0x28]          ; 004265f4
    FXCH                                ; 004265f8
    FSTP float ptr [ESP + 0x64]         ; 004265fa
    FMUL float ptr [ESP + 0x64]         ; 004265fe
    FLD float ptr [ESP + 0x2c]          ; 00426602
    FMUL float ptr [ESP + 0x64]         ; 00426606
    FLD float ptr [ESP + 0x30]          ; 0042660a
    FMUL float ptr [ESP + 0x64]         ; 0042660e
    LEA ESI,[EBX + 0x8]                 ; 00426612
    FXCH ST2                            ; 00426615
    FSTP float ptr [ESP + 0x28]         ; 00426617
    FSTP float ptr [ESP + 0x2c]         ; 0042661b
    FSTP float ptr [ESP + 0x30]         ; 0042661f
    FLD float ptr [ESI]                 ; 00426623
    FADD float ptr [ESP + 0x28]         ; 00426625
    FSTP float ptr [ESP + 0x4]          ; 00426629
    FLD float ptr [ESI + 0x4]           ; 0042662d
    FADD float ptr [ESP + 0x2c]         ; 00426630
    FSTP float ptr [ESP + 0x8]          ; 00426634
    FLD float ptr [ESI + 0x8]           ; 00426638
    FADD float ptr [ESP + 0x30]         ; 0042663b
    FSTP float ptr [ESP + 0xc]          ; 0042663f
    PUSH dword ptr [ESP + 0xc]          ; 00426643
    MOV EDI,dword ptr [EBP + 0x14]      ; 00426647
    PUSH dword ptr [ESP + 0x8]          ; 0042664a
    PUSH EDI                            ; 0042664e
    CALL core_bugs.cpp_FUN_00425b70     ; 0042664f
        ;   XREF to: 00425b70 (UNCONDITIONAL_CALL)  ; undefined core_bugs.cpp_FUN_00425b70()
    MOV dword ptr [ESP + 0x88],EAX      ; 00426654
    FLD float ptr [ESP + 0x88]          ; 0042665b
    ADD ESP,0xc                         ; 00426662
    FST float ptr [ESP + 0x60]          ; 00426665
    FSUB float ptr [EBX + 0xc]          ; 00426669
    FLD float ptr [ESP]                 ; 0042666c
    FMUL double ptr [0x00616e2b]        ; 0042666f | DOUBLE_00616e2b
    FCOMPP                              ; 00426675
    FNSTSW AX                           ; 00426677
    SAHF                                ; 00426679
    JNC 0x0042689d                      ; 0042667a
        ;   XREF to: 0042689d (CONDITIONAL_JUMP)  ; LAB_0042689d
    FLD float ptr [ESP + 0x2c]          ; 00426680
    FLDZ                                ; 00426684
    FCOMPP                              ; 00426686
    FNSTSW AX                           ; 00426688
    SAHF                                ; 0042668a
    JNC 0x00426885                      ; 0042668b
        ;   XREF to: 00426885 (CONDITIONAL_JUMP)  ; LAB_00426885
    FLD float ptr [EBX + 0xc]           ; 00426691
    FADD float ptr [ESP + 0x74]         ; 00426694
    MOV EDX,0xbfc90fdb                  ; 00426698
    FSTP float ptr [EBX + 0xc]          ; 0042669d
    MOV dword ptr [ESP + 0x10],EDX      ; 004266a0
    LEA EAX,[EBX + 0x14]                ; 004266a4
        ;   Label: LAB_004266a4
    FLD float ptr [ESP + 0x10]          ; 004266a7
    FSUB float ptr [EAX]                ; 004266ab
    FLD float ptr [ESP + 0x14]          ; 004266ad
    FXCH                                ; 004266b1
    FSTP float ptr [ESP + 0x34]         ; 004266b3
    FSUB float ptr [EAX + 0x4]          ; 004266b7
    FLD float ptr [ESP + 0x18]          ; 004266ba
    FXCH                                ; 004266be
    FSTP float ptr [ESP + 0x38]         ; 004266c0
    FSUB float ptr [EAX + 0x8]          ; 004266c4
    PUSH dword ptr [ESP + 0x38]         ; 004266c7
    FSTP float ptr [ESP + 0x40]         ; 004266cb
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 004266cf
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x80],EAX      ; 004266d4
    FLD float ptr [ESP + 0x80]          ; 004266db
    ADD ESP,0x4                         ; 004266e2
    PUSH dword ptr [ESP + 0x34]         ; 004266e5
    FSTP float ptr [ESP + 0x70]         ; 004266e9
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 004266ed
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x80],EAX      ; 004266f2
    FLD float ptr [ESP + 0x80]          ; 004266f9
    ADD ESP,0x4                         ; 00426700
    FLD float ptr [EBP + 0x1c]          ; 00426703
    FMUL double ptr [0x00616e33]        ; 00426706 | DOUBLE_00616e33
    FMUL double ptr [0x00616e3b]        ; 0042670c | DOUBLE_00616e3b
    FLD float ptr [ESP + 0x6c]          ; 00426712
    FXCH ST2                            ; 00426716
    FSTP float ptr [ESP + 0x68]         ; 00426718
    FST float ptr [ESP + 0x70]          ; 0042671c
    FCHS                                ; 00426720
    FSTP float ptr [ESP + 0x58]         ; 00426722
    FCOMP float ptr [ESP + 0x58]        ; 00426726
    FNSTSW AX                           ; 0042672a
    SAHF                                ; 0042672c
    JNC 0x00426737                      ; 0042672d
        ;   XREF to: 00426737 (CONDITIONAL_JUMP)  ; LAB_00426737
    MOV EAX,dword ptr [ESP + 0x58]      ; 0042672f
    MOV dword ptr [ESP + 0x6c],EAX      ; 00426733
    FLD float ptr [ESP + 0x6c]          ; 00426737
        ;   Label: LAB_00426737
    FCOMP float ptr [ESP + 0x70]        ; 0042673b
    FNSTSW AX                           ; 0042673f
    SAHF                                ; 00426741
    JBE 0x0042674c                      ; 00426742
        ;   XREF to: 0042674c (CONDITIONAL_JUMP)  ; LAB_0042674c
    MOV EAX,dword ptr [ESP + 0x70]      ; 00426744
    MOV dword ptr [ESP + 0x6c],EAX      ; 00426748
    FLD float ptr [ESP + 0x68]          ; 0042674c
        ;   Label: LAB_0042674c
    FLD float ptr [ESP + 0x70]          ; 00426750
    FCHS                                ; 00426754
    FSTP float ptr [ESP + 0x5c]         ; 00426756
    FCOMP float ptr [ESP + 0x5c]        ; 0042675a
    FNSTSW AX                           ; 0042675e
    SAHF                                ; 00426760
    JNC 0x0042676b                      ; 00426761
        ;   XREF to: 0042676b (CONDITIONAL_JUMP)  ; LAB_0042676b
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00426763
    MOV dword ptr [ESP + 0x68],EAX      ; 00426767
    FLD float ptr [ESP + 0x68]          ; 0042676b
        ;   Label: LAB_0042676b
    FCOMP float ptr [ESP + 0x70]        ; 0042676f
    FNSTSW AX                           ; 00426773
    SAHF                                ; 00426775
    JBE 0x00426780                      ; 00426776
        ;   XREF to: 00426780 (CONDITIONAL_JUMP)  ; LAB_00426780
    MOV EAX,dword ptr [ESP + 0x70]      ; 00426778
    MOV dword ptr [ESP + 0x68],EAX      ; 0042677c
    FLD float ptr [EBX + 0x18]          ; 00426780
        ;   Label: LAB_00426780
    FADD float ptr [ESP + 0x6c]         ; 00426783
    SUB ESP,0x4                         ; 00426787
    FSTP float ptr [ESP]                ; 0042678a
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 0042678d
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x80],EAX      ; 00426792
    FLD float ptr [EBX + 0x14]          ; 00426799
    FLD float ptr [ESP + 0x80]          ; 0042679c
    ADD ESP,0x4                         ; 004267a3
    MOV dword ptr [EBX + 0x1c],0x0      ; 004267a6
    FXCH                                ; 004267ad
    FADD float ptr [ESP + 0x68]         ; 004267af
    SUB ESP,0x4                         ; 004267b3
    FXCH                                ; 004267b6
    FSTP float ptr [EBX + 0x18]         ; 004267b8
    FSTP float ptr [ESP]                ; 004267bb
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 004267be
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x80],EAX      ; 004267c3
    FLD float ptr [ESP + 0x80]          ; 004267ca
    XOR EAX,EAX                         ; 004267d1
    FSTP float ptr [EBX + 0x14]         ; 004267d3
    ADD ESP,0x4                         ; 004267d6
    MOV ESP,EBP                         ; 004267d9
    POP EBP                             ; 004267db
    POP EDI                             ; 004267dc
    POP ESI                             ; 004267dd
    POP EBX                             ; 004267de
    RET                                 ; 004267df
    XOR EAX,EAX                         ; 004267e0
        ;   Label: LAB_004267e0
    MOV ESP,EBP                         ; 004267e2
    POP EBP                             ; 004267e4
    POP EDI                             ; 004267e5
    POP ESI                             ; 004267e6
    POP EBX                             ; 004267e7
    RET                                 ; 004267e8
    CMP ESI,EAX                         ; 004267e9
        ;   Label: LAB_004267e9
    JZ 0x004267fd                       ; 004267eb
        ;   XREF to: 004267fd (CONDITIONAL_JUMP)  ; LAB_004267fd
    MOV EDX,dword ptr [EAX]             ; 004267ed
    MOV dword ptr [ESI],EDX             ; 004267ef
    MOV EDX,dword ptr [EAX + 0x4]       ; 004267f1
    MOV dword ptr [ESI + 0x4],EDX       ; 004267f4
    MOV EDX,dword ptr [EAX + 0x8]       ; 004267f7
    MOV dword ptr [ESI + 0x8],EDX       ; 004267fa
    LEA EAX,[EBX + 0x20]                ; 004267fd
        ;   Label: LAB_004267fd
    LEA ESI,[EBX + 0x8]                 ; 00426800
    FLD float ptr [EAX]                 ; 00426803
    FSUB float ptr [ESI]                ; 00426805
    FSTP float ptr [ESP + 0x1c]         ; 00426807
    FLD float ptr [EAX + 0x4]           ; 0042680b
    FSUB float ptr [ESI + 0x4]          ; 0042680e
    FSTP float ptr [ESP + 0x20]         ; 00426811
    FLD float ptr [EAX + 0x8]           ; 00426815
    LEA EAX,[ESP + 0x1c]                ; 00426818
    FSUB float ptr [ESI + 0x8]          ; 0042681c
    LEA ESI,[ESP + 0x28]                ; 0042681f
    FSTP float ptr [ESP + 0x24]         ; 00426823
    CMP ESI,EAX                         ; 00426827
    JZ 0x00426843                       ; 00426829
        ;   XREF to: 00426843 (CONDITIONAL_JUMP)  ; LAB_00426843
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0042682b
    MOV dword ptr [ESP + 0x28],EAX      ; 0042682f
    MOV EAX,dword ptr [ESP + 0x20]      ; 00426833
    MOV dword ptr [ESP + 0x2c],EAX      ; 00426837
    MOV EAX,dword ptr [ESP + 0x24]      ; 0042683b
    MOV dword ptr [ESP + 0x30],EAX      ; 0042683f
    FLD float ptr [ESP + 0x2c]          ; 00426843
        ;   Label: LAB_00426843
    FMUL ST0                            ; 00426847
    FLD float ptr [ESP + 0x28]          ; 00426849
    FMUL ST0                            ; 0042684d
    FADDP                               ; 0042684f
    FLD float ptr [ESP + 0x30]          ; 00426851
    FMUL ST0                            ; 00426855
    FADDP                               ; 00426857
    FSQRT                               ; 00426859
    FSTP float ptr [ESP + 0x54]         ; 0042685b
    MOV EAX,dword ptr [ESP + 0x54]      ; 0042685f
    FLD float ptr [ESP + 0x54]          ; 00426863
    MOV dword ptr [ESP],EAX             ; 00426867
    FCOMP float ptr [0x0065b5c8]        ; 0042686a | FLOAT_0065b5c8
    FNSTSW AX                           ; 00426870
    SAHF                                ; 00426872
    JNC 0x004265af                      ; 00426873
        ;   XREF to: 004265af (CONDITIONAL_JUMP)  ; LAB_004265af
    MOV EAX,0x1                         ; 00426879
        ;   Label: LAB_00426879
    MOV ESP,EBP                         ; 0042687e
    POP EBP                             ; 00426880
    POP EDI                             ; 00426881
    POP ESI                             ; 00426882
    POP EBX                             ; 00426883
    RET                                 ; 00426884
    FLD float ptr [EBX + 0xc]           ; 00426885
        ;   Label: LAB_00426885
    FSUB float ptr [ESP + 0x74]         ; 00426888
    MOV EAX,0x3fc90fdb                  ; 0042688c
    FSTP float ptr [EBX + 0xc]          ; 00426891
    MOV dword ptr [ESP + 0x10],EAX      ; 00426894
    JMP 0x004266a4                      ; 00426898
        ;   XREF to: 004266a4 (UNCONDITIONAL_JUMP)  ; LAB_004266a4
    LEA EAX,[ESP + 0x4]                 ; 0042689d
        ;   Label: LAB_0042689d
    CMP ESI,EAX                         ; 004268a1
    JZ 0x004268b9                       ; 004268a3
        ;   XREF to: 004268b9 (CONDITIONAL_JUMP)  ; LAB_004268b9
    MOV EAX,dword ptr [ESP + 0x4]       ; 004268a5
    MOV dword ptr [ESI],EAX             ; 004268a9
    MOV EAX,dword ptr [ESP + 0x8]       ; 004268ab
    MOV dword ptr [ESI + 0x4],EAX       ; 004268af
    MOV EAX,dword ptr [ESP + 0xc]       ; 004268b2
    MOV dword ptr [ESI + 0x8],EAX       ; 004268b6
    FLD float ptr [ESP + 0x60]          ; 004268b9
        ;   Label: LAB_004268b9
    FCOMP float ptr [EBX + 0xc]         ; 004268bd
    FNSTSW AX                           ; 004268c0
    SAHF                                ; 004268c2
    JBE 0x004266a4                      ; 004268c3
        ;   XREF to: 004266a4 (CONDITIONAL_JUMP)  ; LAB_004266a4
    MOV EAX,dword ptr [ESP + 0x60]      ; 004268c9
    MOV dword ptr [EBX + 0xc],EAX       ; 004268cd
    JMP 0x004266a4                      ; 004268d0
        ;   XREF to: 004266a4 (UNCONDITIONAL_JUMP)  ; LAB_004266a4

