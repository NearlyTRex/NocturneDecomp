; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gabriela_cpp_CGabriella_updateWeaponPosition_FUN_004d5550(CGabriella *this_ptr,float delta_time)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; CMatrix3x4f      Stack[-0x3ac]:48  local_3ac
; CMatrix3x4f      Stack[-0x37c]:48  local_37c
; CMatrix3x4f      Stack[-0x34c]:48  local_34c
; CMatrix3x4f      Stack[-0x31c]:48  local_31c
; CMatrix3x4f      Stack[-0x2ec]:48  local_2ec
; CMatrix3x4f      Stack[-0x2bc]:48  local_2bc
; CMatrix3x4f      Stack[-0x28c]:48  local_28c
; CMatrix3x4f      Stack[-0x25c]:48  local_25c
; CMatrix3x4f      Stack[-0x22c]:48  local_22c
; CMatrix3x4f      Stack[-0x1fc]:48  local_1fc
; CMatrix3x4f      Stack[-0x1cc]:48  local_1cc
; CMatrix3x4f      Stack[-0x19c]:48  local_19c
; CMatrix3x4f      Stack[-0x16c]:48  local_16c
; CMatrix3x4f      Stack[-0x13c]:48  local_13c
; CMatrix3x4f      Stack[-0x10c]:48  local_10c
; CMatrix3x4f      Stack[-0xdc]:48  local_dc
; CMatrix3x4f      Stack[-0xac]:48  local_ac
; CMatrix3x4f      Stack[-0x7c]:48  local_7c
; CVector3f        Stack[-0x4c]:12  local_4c
; CVector3f        Stack[-0x40]:12  local_40
; CVector3f        Stack[-0x34]:12  local_34
; CVector3f        Stack[-0x28]:12  local_28
; CInventory *     Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_gabriela.cpp_CGabriella_process_FUN_004d2ea0 at 004d35f3
;
; Referenced Globals:
;   TerminatedCString s_CCrossbow_0062afa5
;   float FLOAT_0065e7b4 = 0.6400000
;   UVector3 UNION_UVector3_02d7b814
;   UVector3 UNION_UVector3_02d7b820
;   UVector3 UNION_UVector3_02d7b82c
;   undefined4 g_GabriellaIndices[10]
;   undefined4 g_GabriellaIndices[17]
;   UVector3 g_ZeroVector
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;   core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_0042d090
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
;   core_xform.cpp_buildRotationX_FUN_005f6c40
;   core_xform.cpp_buildRotationY_FUN_005f6cc0
;   core_xform.cpp_getTranslation_FUN_005f6110
;   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
;   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d5550
        ;   Label: core_gabriela.cpp_CGabriella_updateWeaponPosition_FUN_004d5550
    PUSH ESI                            ; 004d5551
    PUSH EDI                            ; 004d5552
    PUSH EBP                            ; 004d5553
    MOV EBP,ESP                         ; 004d5554
    SUB ESP,0x39c                       ; 004d5556
    SUB EBP,0x7e                        ; 004d555c
    MOV EBX,dword ptr [EBP + 0x92]      ; 004d555f
    PUSH dword ptr [EBP + 0x96]         ; 004d5565
    PUSH EBX                            ; 004d556b
    CALL core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_0042d090 ; 004d556c
        ;   XREF to: 0042d090 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_0042d090(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004d5571
    LEA EAX,[EBX + 0x30]                ; 004d5574
    PUSH EAX                            ; 004d5577
    LEA EAX,[EBX + 0x20]                ; 004d5578
    PUSH EAX                            ; 004d557b
    LEA EAX,[EBP + 0xfffffd42]          ; 004d557c
    PUSH EAX                            ; 004d5582
    LEA ESI,[EBX + 0xfd8]               ; 004d5583
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 004d5589
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    FLD float ptr [EBX + 0x1fbdc]       ; 004d558e
    LEA EAX,[EBX + 0x1f738]             ; 004d5594
    ADD ESP,0xc                         ; 004d559a
    MOV dword ptr [EBP + 0x7a],EAX      ; 004d559d
    FCOMP float ptr [0x0065e7b4]        ; 004d55a0 | FLOAT_0065e7b4
    FNSTSW AX                           ; 004d55a6
    SAHF                                ; 004d55a8
    JC 0x004d57d2                       ; 004d55a9
        ;   XREF to: 004d57d2 (CONDITIONAL_JUMP)  ; LAB_004d57d2
    MOV EAX,dword ptr [EBP + 0x7a]      ; 004d55af
    PUSH 0x2                            ; 004d55b2
    MOV EAX,dword ptr [EAX + 0x330]     ; 004d55b4
    PUSH EAX                            ; 004d55ba
    MOV EDX,dword ptr [EAX + 0x154]     ; 004d55bb
    CALL dword ptr [EDX + 0xf0]         ; 004d55c1
    ADD ESP,0x8                         ; 004d55c7
    PUSH 0x3f87558                      ; 004d55ca | g_ZeroVector
    PUSH 0x2d7b814                      ; 004d55cf | UNION_UVector3_02d7b814
    LEA EAX,[EBP + 0xffffff52]          ; 004d55d4
    PUSH EAX                            ; 004d55da
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 004d55db
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    MOV EDX,dword ptr [0x02d7b88c]      ; 004d55e0 | g_GabriellaIndices[17]
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d55e6
    SUB EAX,EDX                         ; 004d55ed
    SHL EAX,0x4                         ; 004d55ef
    ADD ESP,0xc                         ; 004d55f2
    ADD EAX,ESI                         ; 004d55f5
    PUSH EAX                            ; 004d55f7
    LEA EAX,[EBP + 0xffffff52]          ; 004d55f8
    PUSH EAX                            ; 004d55fe
    LEA ESI,[EBP + 0xffffff22]          ; 004d55ff
    PUSH 0x3fc90fdb                     ; 004d5605
    LEA EDI,[EBP + 0xfffffe02]          ; 004d560a
    CALL core_xform.cpp_buildRotationX_FUN_005f6c40 ; 004d5610
        ;   XREF to: 005f6c40 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_buildRotationX_FUN_005f6c40(float angle_radians, CMatrix3x4f * matrix_out)
    JMP 0x03fc18bc                      ; 004d5615
        ;   XREF to: 03fc18bc (UNCONDITIONAL_JUMP)  ; LAB_03fc18bc
    PUSH 0x3fc90fdb                     ; 004d562c
        ;   Label: LAB_004d562c
    LEA ESI,[EBP + 0xfffffce2]          ; 004d5631
    LEA EDI,[EBP + 0xfffffdd2]          ; 004d5637
    CALL core_xform.cpp_buildRotationY_FUN_005f6cc0 ; 004d563d
        ;   XREF to: 005f6cc0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_buildRotationY_FUN_005f6cc0(float angle_radians, CMatrix3x4f * matrix_out)
    JMP 0x03fc1924                      ; 004d5642
        ;   XREF to: 03fc1924 (UNCONDITIONAL_JUMP)  ; LAB_03fc1924
    PUSH EAX                            ; 004d5658
        ;   Label: LAB_004d5658
    LEA ESI,[EBP + 0xfffffd12]          ; 004d5659
    LEA EDI,[EBP + 0xfffffe32]          ; 004d565f
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 004d5665
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    JMP 0x03fc198b                      ; 004d566a
        ;   XREF to: 03fc198b (UNCONDITIONAL_JUMP)  ; LAB_03fc198b
    PUSH EAX                            ; 004d5680
        ;   Label: LAB_004d5680
    LEA ESI,[EBP + -0x1e]               ; 004d5681
    LEA EDI,[EBP + 0xfffffef2]          ; 004d5684
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 004d568a
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    JMP 0x03fc19f2                      ; 004d568f
        ;   XREF to: 03fc19f2 (UNCONDITIONAL_JUMP)  ; LAB_03fc19f2
    PUSH EAX                            ; 004d56a2
        ;   Label: LAB_004d56a2
    LEA ESI,[EBP + 0x12]                ; 004d56a3
    LEA EDI,[EBP + 0xfffffda2]          ; 004d56a6
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 004d56ac
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    JMP 0x03fc1a56                      ; 004d56b1
        ;   XREF to: 03fc1a56 (UNCONDITIONAL_JUMP)  ; LAB_03fc1a56
    PUSH 0x62afa5                       ; 004d56c1 | = "CCrossbow"
        ;   Label: LAB_004d56c1
    MOV EAX,dword ptr [EAX + 0x330]     ; 004d56c6
    PUSH EAX                            ; 004d56cc
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004d56cd
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004d56d2
    TEST EAX,EAX                        ; 004d56d5
    JZ 0x004d572c                       ; 004d56d7
        ;   XREF to: 004d572c (CONDITIONAL_JUMP)  ; LAB_004d572c
    LEA EAX,[EBP + 0x4e]                ; 004d56d9
    PUSH EAX                            ; 004d56dc
    LEA EAX,[EBP + 0xfffffda2]          ; 004d56dd
    PUSH EAX                            ; 004d56e3
    CALL core_xform.cpp_getTranslation_FUN_005f6110 ; 004d56e4
        ;   XREF to: 005f6110 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_getTranslation_FUN_005f6110(CMatrix3x4f * matrix_in, CVector3f * vector_out)
    ADD ESP,0x8                         ; 004d56e9
    LEA EAX,[EBP + 0x5a]                ; 004d56ec
    PUSH EAX                            ; 004d56ef
    LEA EAX,[EBP + 0xfffffda2]          ; 004d56f0
    PUSH EAX                            ; 004d56f6
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690 ; 004d56f7
        ;   XREF to: 005f5690 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_005f5690(CMatrix3x4f * matrix_in, CVector3f * euler_out)
    FLD float ptr [EBX + 0x1fc10]       ; 004d56fc
    FLD1                                ; 004d5702
    LEA EAX,[EBP + 0x5a]                ; 004d5704
    ADD ESP,0x8                         ; 004d5707
    FSUBRP                              ; 004d570a
    PUSH EAX                            ; 004d570c
    FLD float ptr [EBP + 0x62]          ; 004d570d
    LEA EAX,[EBP + 0x4e]                ; 004d5710
    FXCH                                ; 004d5713
    FMUL ST1                            ; 004d5715
    PUSH EAX                            ; 004d5717
    LEA EAX,[EBP + 0xfffffda2]          ; 004d5718
    FSTP ST1                            ; 004d571e
    PUSH EAX                            ; 004d5720
    FSTP float ptr [EBP + 0x62]         ; 004d5721
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 004d5724
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 004d5729
    LEA EAX,[EBP + 0xfffffd42]          ; 004d572c
        ;   Label: LAB_004d572c
    PUSH EAX                            ; 004d5732
    LEA EAX,[EBP + 0xfffffda2]          ; 004d5733
    PUSH EAX                            ; 004d5739
    LEA ESI,[EBP + -0x7e]               ; 004d573a
    LEA EDI,[EBP + 0xfffffd72]          ; 004d573d
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 004d5743
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 004d5748
    LEA ESI,[EBP + -0x7e]               ; 004d574d
    ADD ESP,0x8                         ; 004d5750
        ;   Label: LAB_004d5750
    JMP 0x03fc585e                      ; 004d5753
        ;   XREF to: 03fc585e (UNCONDITIONAL_JUMP)  ; LAB_03fc585e
    PUSH EAX                            ; 004d5758
        ;   Label: LAB_004d5758
    LEA EAX,[EBP + 0xfffffd72]          ; 004d5759
    PUSH EAX                            ; 004d575f
    LEA ESI,[EBX + 0x1f738]             ; 004d5760
    CALL core_xform.cpp_getTranslation_FUN_005f6110 ; 004d5766
        ;   XREF to: 005f6110 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_getTranslation_FUN_005f6110(CMatrix3x4f * matrix_in, CVector3f * vector_out)
    MOV EDX,dword ptr [ESI + 0x330]     ; 004d576b
    FLD float ptr [EAX]                 ; 004d5771
    ADD ESP,0x8                         ; 004d5773
    FSTP float ptr [EDX + 0x20]         ; 004d5776
    MOV ECX,dword ptr [EAX + 0x4]       ; 004d5779
    MOV dword ptr [EDX + 0x24],ECX      ; 004d577c
    FLD float ptr [EAX + 0x8]           ; 004d577f
    LEA EAX,[EBP + 0x42]                ; 004d5782
    PUSH EAX                            ; 004d5785
    LEA EAX,[EBP + 0xfffffd72]          ; 004d5786
    PUSH EAX                            ; 004d578c
    FSTP float ptr [EDX + 0x28]         ; 004d578d
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690 ; 004d5790
        ;   XREF to: 005f5690 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_005f5690(CMatrix3x4f * matrix_in, CVector3f * euler_out)
    MOV EDX,dword ptr [ESI + 0x330]     ; 004d5795
    ADD EDX,0x30                        ; 004d579b
    ADD ESP,0x8                         ; 004d579e
    CMP EDX,EAX                         ; 004d57a1
    JZ 0x004d57b5                       ; 004d57a3
        ;   XREF to: 004d57b5 (CONDITIONAL_JUMP)  ; LAB_004d57b5
    MOV ECX,dword ptr [EAX]             ; 004d57a5
    MOV dword ptr [EDX],ECX             ; 004d57a7
    MOV ECX,dword ptr [EAX + 0x4]       ; 004d57a9
    MOV dword ptr [EDX + 0x4],ECX       ; 004d57ac
    MOV ECX,dword ptr [EAX + 0x8]       ; 004d57af
    MOV dword ptr [EDX + 0x8],ECX       ; 004d57b2
    LEA EAX,[EBX + 0x1f738]             ; 004d57b5
        ;   Label: LAB_004d57b5
    MOV EAX,dword ptr [EAX + 0x330]     ; 004d57bb
    PUSH EAX                            ; 004d57c1
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 004d57c2
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004d57c7
    LEA ESP,[EBP + 0x7e]                ; 004d57ca
    POP EBP                             ; 004d57cd
    POP EDI                             ; 004d57ce
    POP ESI                             ; 004d57cf
    POP EBX                             ; 004d57d0
    RET                                 ; 004d57d1
    MOV EAX,dword ptr [EBP + 0x7a]      ; 004d57d2
        ;   Label: LAB_004d57d2
    PUSH 0x1                            ; 004d57d5
    MOV EAX,dword ptr [EAX + 0x330]     ; 004d57d7
    PUSH EAX                            ; 004d57dd
    MOV EDX,dword ptr [EAX + 0x154]     ; 004d57de
    CALL dword ptr [EDX + 0xf0]         ; 004d57e4
    ADD ESP,0x8                         ; 004d57ea
    PUSH 0x2d7b82c                      ; 004d57ed | UNION_UVector3_02d7b82c
    PUSH 0x2d7b820                      ; 004d57f2 | UNION_UVector3_02d7b820
    LEA EAX,[EBP + 0xfffffe62]          ; 004d57f7
    PUSH EAX                            ; 004d57fd
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 004d57fe
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 004d5803
    LEA EAX,[EBP + 0xfffffd42]          ; 004d5806
    MOV EDX,dword ptr [0x02d7b870]      ; 004d580c | g_GabriellaIndices[10]
    PUSH EAX                            ; 004d5812
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d5813
    SUB EAX,EDX                         ; 004d581a
    SHL EAX,0x4                         ; 004d581c
    ADD EAX,ESI                         ; 004d581f
    PUSH EAX                            ; 004d5821
    LEA EAX,[EBP + 0xfffffe62]          ; 004d5822
    PUSH EAX                            ; 004d5828
    LEA ESI,[EBP + 0xfffffec2]          ; 004d5829
    LEA EDI,[EBP + 0xfffffe92]          ; 004d582f
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 004d5835
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    JMP 0x03fc1ab7                      ; 004d583a
        ;   XREF to: 03fc1ab7 (UNCONDITIONAL_JUMP)  ; LAB_03fc1ab7
    PUSH EAX                            ; 004d5850
        ;   Label: LAB_004d5850
    LEA ESI,[EBP + -0x4e]               ; 004d5851
    LEA EDI,[EBP + 0xfffffd72]          ; 004d5854
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 004d585a
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 004d585f
    LEA ESI,[EBP + -0x4e]               ; 004d5864
    JMP 0x004d5750                      ; 004d5867
        ;   XREF to: 004d5750 (UNCONDITIONAL_JUMP)  ; LAB_004d5750
    MOV ECX,0xc                         ; 03fc18bc
        ;   Label: LAB_03fc18bc
    ADD ESP,0x4                         ; 03fc18c1
    LEA EAX,[EBP + 0xfffffe02]          ; 03fc18c4
    LEA ESI,[EBP + 0xffffff22]          ; 03fc18ca
    PUSH EAX                            ; 03fc18d0
    MOV ECX,dword ptr [ESI]             ; 03fc18d1
    MOV dword ptr [EDI],ECX             ; 03fc18d3
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc18d5
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc18d8
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc18db
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc18de
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc18e1
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc18e4
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc18e7
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc18ea
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc18ed
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc18f0
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc18f3
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc18f6
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc18f9
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc18fc
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc18ff
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc1902
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc1905
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc1908
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc190b
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc190e
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc1911
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc1914
    ADD ESI,0x30                        ; 03fc1917
    ADD EDI,0x30                        ; 03fc191a
    XOR ECX,ECX                         ; 03fc191d
    JMP 0x004d562c                      ; 03fc191f
        ;   XREF to: 004d562c (UNCONDITIONAL_JUMP)  ; LAB_004d562c
    MOV ECX,0xc                         ; 03fc1924
        ;   Label: LAB_03fc1924
    LEA ESI,[EBP + 0xfffffce2]          ; 03fc1929
    LEA EAX,[EBP + 0xfffffdd2]          ; 03fc192f
    ADD ESP,0x4                         ; 03fc1935
    MOV ECX,dword ptr [ESI]             ; 03fc1938
    MOV dword ptr [EDI],ECX             ; 03fc193a
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc193c
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc193f
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc1942
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc1945
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc1948
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc194b
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc194e
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc1951
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc1954
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc1957
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc195a
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc195d
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc1960
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc1963
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc1966
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc1969
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc196c
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc196f
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc1972
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc1975
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc1978
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc197b
    ADD ESI,0x30                        ; 03fc197e
    ADD EDI,0x30                        ; 03fc1981
    XOR ECX,ECX                         ; 03fc1984
    JMP 0x004d5658                      ; 03fc1986
        ;   XREF to: 004d5658 (UNCONDITIONAL_JUMP)  ; LAB_004d5658
    MOV ECX,0xc                         ; 03fc198b
        ;   Label: LAB_03fc198b
    LEA ESI,[EBP + 0xfffffd12]          ; 03fc1990
    LEA EAX,[EBP + 0xfffffe32]          ; 03fc1996
    ADD ESP,0x8                         ; 03fc199c
    MOV ECX,dword ptr [ESI]             ; 03fc199f
    MOV dword ptr [EDI],ECX             ; 03fc19a1
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc19a3
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc19a6
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc19a9
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc19ac
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc19af
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc19b2
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc19b5
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc19b8
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc19bb
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc19be
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc19c1
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc19c4
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc19c7
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc19ca
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc19cd
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc19d0
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc19d3
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc19d6
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc19d9
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc19dc
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc19df
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc19e2
    ADD ESI,0x30                        ; 03fc19e5
    ADD EDI,0x30                        ; 03fc19e8
    XOR ECX,ECX                         ; 03fc19eb
    JMP 0x004d5680                      ; 03fc19ed
        ;   XREF to: 004d5680 (UNCONDITIONAL_JUMP)  ; LAB_004d5680
    MOV ECX,0xc                         ; 03fc19f2
        ;   Label: LAB_03fc19f2
    LEA ESI,[EBP + -0x1e]               ; 03fc19f7
    LEA EAX,[EBP + 0xfffffef2]          ; 03fc19fa
    ADD ESP,0x8                         ; 03fc1a00
    MOV ECX,dword ptr [ESI]             ; 03fc1a03
    MOV dword ptr [EDI],ECX             ; 03fc1a05
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc1a07
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc1a0a
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc1a0d
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc1a10
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc1a13
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc1a16
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc1a19
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc1a1c
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc1a1f
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc1a22
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc1a25
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc1a28
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc1a2b
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc1a2e
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc1a31
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc1a34
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc1a37
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc1a3a
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc1a3d
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc1a40
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc1a43
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc1a46
    ADD ESI,0x30                        ; 03fc1a49
    ADD EDI,0x30                        ; 03fc1a4c
    XOR ECX,ECX                         ; 03fc1a4f
    JMP 0x004d56a2                      ; 03fc1a51
        ;   XREF to: 004d56a2 (UNCONDITIONAL_JUMP)  ; LAB_004d56a2
    MOV ECX,0xc                         ; 03fc1a56
        ;   Label: LAB_03fc1a56
    LEA ESI,[EBP + 0x12]                ; 03fc1a5b
    MOV EAX,dword ptr [EBP + 0x7a]      ; 03fc1a5e
    ADD ESP,0x8                         ; 03fc1a61
    MOV ECX,dword ptr [ESI]             ; 03fc1a64
    MOV dword ptr [EDI],ECX             ; 03fc1a66
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc1a68
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc1a6b
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc1a6e
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc1a71
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc1a74
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc1a77
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc1a7a
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc1a7d
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc1a80
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc1a83
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc1a86
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc1a89
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc1a8c
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc1a8f
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc1a92
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc1a95
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc1a98
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc1a9b
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc1a9e
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc1aa1
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc1aa4
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc1aa7
    ADD ESI,0x30                        ; 03fc1aaa
    ADD EDI,0x30                        ; 03fc1aad
    XOR ECX,ECX                         ; 03fc1ab0
    JMP 0x004d56c1                      ; 03fc1ab2
        ;   XREF to: 004d56c1 (UNCONDITIONAL_JUMP)  ; LAB_004d56c1
    MOV ECX,0xc                         ; 03fc1ab7
        ;   Label: LAB_03fc1ab7
    LEA ESI,[EBP + 0xfffffec2]          ; 03fc1abc
    LEA EAX,[EBP + 0xfffffe92]          ; 03fc1ac2
    ADD ESP,0x8                         ; 03fc1ac8
    MOV ECX,dword ptr [ESI]             ; 03fc1acb
    MOV dword ptr [EDI],ECX             ; 03fc1acd
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc1acf
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc1ad2
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc1ad5
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc1ad8
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc1adb
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc1ade
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc1ae1
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc1ae4
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc1ae7
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc1aea
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc1aed
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc1af0
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc1af3
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc1af6
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc1af9
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc1afc
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc1aff
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc1b02
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc1b05
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc1b08
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc1b0b
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc1b0e
    ADD ESI,0x30                        ; 03fc1b11
    ADD EDI,0x30                        ; 03fc1b14
    XOR ECX,ECX                         ; 03fc1b17
    JMP 0x004d5850                      ; 03fc1b19
        ;   XREF to: 004d5850 (UNCONDITIONAL_JUMP)  ; LAB_004d5850
    MOV ECX,dword ptr [ESI]             ; 03fc585e
        ;   Label: LAB_03fc585e
    MOV dword ptr [EDI],ECX             ; 03fc5860
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc5862
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc5865
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc5868
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc586b
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc586e
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc5871
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc5874
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc5877
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc587a
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc587d
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc5880
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc5883
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc5886
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc5889
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc588c
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc588f
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc5892
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc5895
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc5898
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc589b
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc589e
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc58a1
    ADD ESI,0x30                        ; 03fc58a4
    ADD EDI,0x30                        ; 03fc58a7
    XOR ECX,ECX                         ; 03fc58aa
    LEA EAX,[EBP + 0x66]                ; 03fc58ac
    JMP 0x004d5758                      ; 03fc58af
        ;   XREF to: 004d5758 (UNCONDITIONAL_JUMP)  ; LAB_004d5758

