; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_spawnFireOnBone_FUN_004266a0(CCharacter *this_ptr,CSkeleton *skeleton,int target_bone_index)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CSkeleton *      Stack[0x8]:4   skeleton
; int              Stack[0xc]:4   target_bone_index
; Local Variables:
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined        Stack[-0x68]:1  local_68
; undefined        Stack[-0x5c]:1  local_5c
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
;   core_charactr.cpp_CCharacter_processFire_FUN_004269b0 at 00426e33
;   core_charactr.cpp_CCharacter_setup_FUN_00424260 at 0042434d
;   core_charactr.cpp_FUN_00427730 at 004277cc
;
; Referenced Globals:
;   double DOUBLE_00579f92 = 0.5
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_skeleton.cpp_CDeformableModel_getBonePart_FUN_00519bc0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
;   core_xform.cpp_transformVector3x4_FUN_0055a8b0
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004266a0
        ;   Label: core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_004266a0
    PUSH ESI                            ; 004266a1
    PUSH EDI                            ; 004266a2
    PUSH EBP                            ; 004266a3
    SUB ESP,0x70                        ; 004266a4
    MOV EBX,dword ptr [ESP + 0x84]      ; 004266a7
    MOV EBP,dword ptr [ESP + 0x8c]      ; 004266ae
    TEST EBP,EBP                        ; 004266b5
    JL 0x004267c3                       ; 004266b7
        ;   XREF to: 004267c3 (CONDITIONAL_JUMP)  ; LAB_004267c3
    MOV ECX,0xffffffff                  ; 004266bd
    LEA EAX,[EBX + 0x1a8]               ; 004266c2
    XOR EDX,EDX                         ; 004266c8
    XOR EDI,EDI                         ; 004266ca
    MOV dword ptr [ESP + 0x5c],EDX      ; 004266cc
    MOV EDX,dword ptr [ESP + 0x88]      ; 004266d0
    MOV dword ptr [ESP + 0x3c],EAX      ; 004266d7
    MOV ESI,EAX                         ; 004266db
    CMP dword ptr [EDX + 0x28558],0x0   ; 004266dd
    JLE 0x00426708                      ; 004266e4
        ;   XREF to: 00426708 (CONDITIONAL_JUMP)  ; LAB_00426708
    CMP EBP,dword ptr [EDX + 0x2857c]   ; 004266e6
        ;   Label: LAB_004266e6
    JZ 0x004267cb                       ; 004266ec
        ;   XREF to: 004267cb (CONDITIONAL_JUMP)  ; LAB_004267cb
    MOV EAX,dword ptr [ESP + 0x88]      ; 004266f2
        ;   Label: LAB_004266f2
    ADD EDX,0x24                        ; 004266f9
    INC EDI                             ; 004266fc
    ADD ESI,0xc                         ; 004266fd
    CMP EDI,dword ptr [EAX + 0x28558]   ; 00426700
    JL 0x004266e6                       ; 00426706
        ;   XREF to: 004266e6 (CONDITIONAL_JUMP)  ; LAB_004266e6
    CMP ECX,-0x1                        ; 00426708
        ;   Label: LAB_00426708
    JZ 0x004267c3                       ; 0042670b
        ;   XREF to: 004267c3 (CONDITIONAL_JUMP)  ; LAB_004267c3
    LEA EAX,[EBP*0x4 + 0x0]             ; 00426711
    SUB EAX,EBP                         ; 00426718
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0042671a
    SHL EAX,0x2                         ; 0042671e
    ADD EDX,EAX                         ; 00426721
    LEA EAX,[ECX*0x4 + 0x0]             ; 00426723
    SUB EAX,ECX                         ; 0042672a
    MOV ECX,dword ptr [ESP + 0x3c]      ; 0042672c
    SHL EAX,0x2                         ; 00426730
    ADD EAX,ECX                         ; 00426733
    FLD float ptr [EAX]                 ; 00426735
    FSUB float ptr [EDX]                ; 00426737
    FSTP float ptr [ESP + 0xc]          ; 00426739
    FLD float ptr [EAX + 0x4]           ; 0042673d
    FSUB float ptr [EDX + 0x4]          ; 00426740
    FST float ptr [ESP + 0x10]          ; 00426743
    FMUL float ptr [ESP + 0x10]         ; 00426747
    FLD float ptr [ESP + 0xc]           ; 0042674b
    FMUL ST0                            ; 0042674f
    FLD float ptr [EAX + 0x8]           ; 00426751
    FSUB float ptr [EDX + 0x8]          ; 00426754
    FXCH                                ; 00426757
    FADDP ST2,ST0                       ; 00426759
    FST float ptr [ESP + 0x14]          ; 0042675b
    FMUL float ptr [ESP + 0x14]         ; 0042675f
    FADDP                               ; 00426763
    FSQRT                               ; 00426765
    FMUL double ptr [0x00579f92]        ; 00426767 | DOUBLE_00579f92
    CALL crt_math.c_round_FUN_00563a30  ; 0042676d
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x68]        ; 00426772
    MOV EAX,dword ptr [ESP + 0x68]      ; 00426776
    INC EAX                             ; 0042677a
    XOR EDI,EDI                         ; 0042677b
    MOV dword ptr [ESP + 0x54],EAX      ; 0042677d
    TEST EAX,EAX                        ; 00426781
    JLE 0x004267c3                      ; 00426783
        ;   XREF to: 004267c3 (CONDITIONAL_JUMP)  ; LAB_004267c3
    LEA EAX,[EBX + 0xfd0]               ; 00426785
    MOV dword ptr [ESP + 0x40],EAX      ; 0042678b
    LEA EAX,[EBX + 0x33c4]              ; 0042678f
    MOV dword ptr [ESP + 0x44],EAX      ; 00426795
    LEA EAX,[EBX + 0x2f14]              ; 00426799
    MOV dword ptr [ESP + 0x48],EAX      ; 0042679f
    LEA EAX,[EBX + 0x150]               ; 004267a3
    MOV dword ptr [ESP + 0x50],EAX      ; 004267a9
    MOV EAX,dword ptr [ESP + 0x54]      ; 004267ad
    INC EAX                             ; 004267b1
    MOV dword ptr [ESP + 0x4c],EAX      ; 004267b2
    CMP dword ptr [EBX + 0x2f08],0x32   ; 004267b6
        ;   Label: LAB_004267b6
    JL 0x004267ff                       ; 004267bd
        ;   XREF to: 004267ff (CONDITIONAL_JUMP)  ; LAB_004267ff
    ADD ESP,0x70                        ; 004267c3
        ;   Label: LAB_004267c3
    POP EBP                             ; 004267c6
    POP EDI                             ; 004267c7
    POP ESI                             ; 004267c8
    POP EBX                             ; 004267c9
    RET                                 ; 004267ca
    FLD float ptr [ESI + 0x4]           ; 004267cb
        ;   Label: LAB_004267cb
    FMUL ST0                            ; 004267ce
    FLD float ptr [ESI]                 ; 004267d0
    FMUL ST0                            ; 004267d2
    FADDP                               ; 004267d4
    FLD float ptr [ESI + 0x8]           ; 004267d6
    FMUL ST0                            ; 004267d9
    FADDP                               ; 004267db
    FSQRT                               ; 004267dd
    FST float ptr [ESP + 0x60]          ; 004267df
    FCOMP float ptr [ESP + 0x5c]        ; 004267e3
    FNSTSW AX                           ; 004267e7
    SAHF                                ; 004267e9
    JBE 0x004266f2                      ; 004267ea
        ;   XREF to: 004266f2 (CONDITIONAL_JUMP)  ; LAB_004266f2
    MOV EAX,dword ptr [ESP + 0x60]      ; 004267f0
    MOV ECX,EDI                         ; 004267f4
    MOV dword ptr [ESP + 0x5c],EAX      ; 004267f6
    JMP 0x004266f2                      ; 004267fa
        ;   XREF to: 004266f2 (UNCONDITIONAL_JUMP)  ; LAB_004266f2
    MOV EDX,dword ptr [EBX + 0x2f08]    ; 004267ff
        ;   Label: LAB_004267ff
    IMUL ESI,EDX,0x18                   ; 00426805
    LEA EAX,[EDX + 0x1]                 ; 00426808
    MOV ECX,dword ptr [ESP + 0x48]      ; 0042680b
    MOV EDX,dword ptr [ESP + 0x50]      ; 0042680f
    MOV dword ptr [EBX + 0xfc],0x1      ; 00426813
    PUSH EDX                            ; 0042681d
    ADD ESI,ECX                         ; 0042681e
    MOV dword ptr [EBX + 0x2f08],EAX    ; 00426820
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020 ; 00426826
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042682b
    PUSH EBP                            ; 0042682e
    PUSH EAX                            ; 0042682f
    CALL core_skeleton.cpp_CDeformableModel_getBonePart_FUN_00519bc0 ; 00426830
        ;   XREF to: 00519bc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_getBonePart_FUN_00519bc0(CDeformableModel * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00426835
    MOV dword ptr [ESI],EAX             ; 00426838
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0042683a
    MOV dword ptr [ESP + 0x68],EAX      ; 0042683e
    LEA EAX,[EDI + 0x1]                 ; 00426842
    MOV dword ptr [ESI + 0x4],EBP       ; 00426845
    MOV dword ptr [ESP + 0x6c],EAX      ; 00426848
    FLD float ptr [ESP + 0xc]           ; 0042684c
    FILD dword ptr [ESP + 0x6c]         ; 00426850
    FSTP float ptr [ESP + 0x64]         ; 00426854
    FMUL float ptr [ESP + 0x64]         ; 00426858
    FLD float ptr [ESP + 0x10]          ; 0042685c
    FMUL float ptr [ESP + 0x64]         ; 00426860
    FLD float ptr [ESP + 0x14]          ; 00426864
    FMUL float ptr [ESP + 0x64]         ; 00426868
    FLD1                                ; 0042686c
    FILD dword ptr [ESP + 0x68]         ; 0042686e
    FSTP float ptr [ESP + 0x58]         ; 00426872
    FXCH ST3                            ; 00426876
    FST float ptr [ESP]                 ; 00426878
    FXCH ST3                            ; 0042687b
    FDIV float ptr [ESP + 0x58]         ; 0042687d
    FXCH ST3                            ; 00426881
    FMUL ST3                            ; 00426883
    FXCH ST2                            ; 00426885
    FST float ptr [ESP + 0x4]           ; 00426887
    FMUL ST3                            ; 0042688b
    FXCH                                ; 0042688d
    FST float ptr [ESP + 0x8]           ; 0042688f
    FMULP ST3                           ; 00426893
    LEA EDX,[ESI + 0x8]                 ; 00426895
    LEA EAX,[ESP + 0x30]                ; 00426898
    FXCH                                ; 0042689c
    FSTP float ptr [ESP + 0x30]         ; 0042689e
    FSTP float ptr [ESP + 0x34]         ; 004268a2
    FSTP float ptr [ESP + 0x38]         ; 004268a6
    CMP EDX,EAX                         ; 004268aa
    JZ 0x004268c2                       ; 004268ac
        ;   XREF to: 004268c2 (CONDITIONAL_JUMP)  ; LAB_004268c2
    MOV EAX,dword ptr [ESP + 0x30]      ; 004268ae
    MOV dword ptr [EDX],EAX             ; 004268b2
    MOV EAX,dword ptr [ESP + 0x34]      ; 004268b4
    MOV dword ptr [EDX + 0x4],EAX       ; 004268b8
    MOV EAX,dword ptr [ESP + 0x38]      ; 004268bb
    MOV dword ptr [EDX + 0x8],EAX       ; 004268bf
    IMUL EAX,dword ptr [ESI + 0x4],0x30 ; 004268c2
        ;   Label: LAB_004268c2
    ADD EAX,dword ptr [ESP + 0x40]      ; 004268c6
    PUSH EAX                            ; 004268ca
    LEA EAX,[ESI + 0x8]                 ; 004268cb
    PUSH EAX                            ; 004268ce
    LEA EAX,[ESP + 0x20]                ; 004268cf
    PUSH EAX                            ; 004268d3
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 004268d4
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_0055a8b0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 004268d9
    PUSH EAX                            ; 004268dc
    LEA EAX,[ESP + 0x28]                ; 004268dd
    PUSH EAX                            ; 004268e1
    PUSH EBX                            ; 004268e2
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004268e3
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV EDX,dword ptr [EBX + 0x2f08]    ; 004268e8
    DEC EDX                             ; 004268ee
    IMUL EDX,EDX,0x29c                  ; 004268ef
    ADD ESP,0xc                         ; 004268f5
    ADD EDX,dword ptr [ESP + 0x44]      ; 004268f8
    MOV ECX,dword ptr [EAX]             ; 004268fc
    MOV dword ptr [EDX + 0x20],ECX      ; 004268fe
    MOV ECX,dword ptr [EAX + 0x4]       ; 00426901
    MOV dword ptr [EDX + 0x24],ECX      ; 00426904
    MOV ECX,dword ptr [EAX + 0x8]       ; 00426907
    MOV dword ptr [EDX + 0x28],ECX      ; 0042690a
    MOV EAX,dword ptr [EBX + 0x2f08]    ; 0042690d
    DEC EAX                             ; 00426913
    IMUL EAX,EAX,0x29c                  ; 00426914
    MOV dword ptr [EBX + EAX*0x1 + 0x3568],0x0 ; 0042691a
    MOV dword ptr [ESI + 0x14],0x3f000000 ; 00426925
    MOV EAX,dword ptr [EBX + 0x2f08]    ; 0042692c
    DEC EAX                             ; 00426932
    IMUL EAX,EAX,0x29c                  ; 00426933
    FLD double ptr [0x00579f92]         ; 00426939 | DOUBLE_00579f92
    FLD float ptr [ESI + 0x14]          ; 0042693f
    FMUL ST1                            ; 00426942
    FSTP float ptr [EBX + EAX*0x1 + 0x3514] ; 00426944
    MOV EAX,dword ptr [EBX + 0x2f08]    ; 0042694b
    DEC EAX                             ; 00426951
    IMUL EAX,EAX,0x29c                  ; 00426952
    MOV EDX,dword ptr [ESI + 0x14]      ; 00426958
    MOV dword ptr [EBX + EAX*0x1 + 0x3518],EDX ; 0042695b
    MOV EAX,dword ptr [EBX + 0x2f08]    ; 00426962
    DEC EAX                             ; 00426968
    IMUL EAX,EAX,0x29c                  ; 00426969
    FMUL float ptr [ESI + 0x14]         ; 0042696f
    FSTP float ptr [EBX + EAX*0x1 + 0x351c] ; 00426972
    MOV EAX,dword ptr [EBX + 0x2f08]    ; 00426979
    DEC EAX                             ; 0042697f
    IMUL EAX,EAX,0x29c                  ; 00426980
    INC EDI                             ; 00426986
    MOV EDX,dword ptr [EBX + 0x2f0c]    ; 00426987
    MOV ESI,dword ptr [ESP + 0x54]      ; 0042698d
    MOV dword ptr [EBX + EAX*0x1 + 0x3564],EDX ; 00426991
    CMP EDI,ESI                         ; 00426998
    JL 0x004267b6                       ; 0042699a
        ;   XREF to: 004267b6 (CONDITIONAL_JUMP)  ; LAB_004267b6
    ADD ESP,0x70                        ; 004269a0
    POP EBP                             ; 004269a3
    POP EDI                             ; 004269a4
    POP ESI                             ; 004269a5
    POP EBX                             ; 004269a6
    RET                                 ; 004269a7

