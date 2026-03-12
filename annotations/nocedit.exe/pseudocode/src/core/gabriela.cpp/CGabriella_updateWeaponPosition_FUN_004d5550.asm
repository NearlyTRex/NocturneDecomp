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
; undefined1       Stack[-0x10]:1  local_10
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
;   int INT_02d7b870
;   int INT_02d7b88c
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
    MOV EDX,dword ptr [0x02d7b88c]      ; 004d55e0 | INT_02d7b88c
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
    MOV ECX,0xc                         ; 004d5615
    ADD ESP,0x4                         ; 004d561a
    LEA EAX,[EBP + 0xfffffe02]          ; 004d561d
    LEA ESI,[EBP + 0xffffff22]          ; 004d5623
    PUSH EAX                            ; 004d5629
    MOVSD.REP ES:EDI,ESI                ; 004d562a
    PUSH 0x3fc90fdb                     ; 004d562c
    LEA ESI,[EBP + 0xfffffce2]          ; 004d5631
    LEA EDI,[EBP + 0xfffffdd2]          ; 004d5637
    CALL core_xform.cpp_buildRotationY_FUN_005f6cc0 ; 004d563d
        ;   XREF to: 005f6cc0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_buildRotationY_FUN_005f6cc0(float angle_radians, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 004d5642
    LEA ESI,[EBP + 0xfffffce2]          ; 004d5647
    LEA EAX,[EBP + 0xfffffdd2]          ; 004d564d
    ADD ESP,0x4                         ; 004d5653
    MOVSD.REP ES:EDI,ESI                ; 004d5656
    PUSH EAX                            ; 004d5658
    LEA ESI,[EBP + 0xfffffd12]          ; 004d5659
    LEA EDI,[EBP + 0xfffffe32]          ; 004d565f
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 004d5665
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 004d566a
    LEA ESI,[EBP + 0xfffffd12]          ; 004d566f
    LEA EAX,[EBP + 0xfffffe32]          ; 004d5675
    ADD ESP,0x8                         ; 004d567b
    MOVSD.REP ES:EDI,ESI                ; 004d567e
    PUSH EAX                            ; 004d5680
    LEA ESI,[EBP + -0x1e]               ; 004d5681
    LEA EDI,[EBP + 0xfffffef2]          ; 004d5684
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 004d568a
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 004d568f
    LEA ESI,[EBP + -0x1e]               ; 004d5694
    LEA EAX,[EBP + 0xfffffef2]          ; 004d5697
    ADD ESP,0x8                         ; 004d569d
    MOVSD.REP ES:EDI,ESI                ; 004d56a0
    PUSH EAX                            ; 004d56a2
    LEA ESI,[EBP + 0x12]                ; 004d56a3
    LEA EDI,[EBP + 0xfffffda2]          ; 004d56a6
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 004d56ac
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 004d56b1
    LEA ESI,[EBP + 0x12]                ; 004d56b6
    MOV EAX,dword ptr [EBP + 0x7a]      ; 004d56b9
    ADD ESP,0x8                         ; 004d56bc
    MOVSD.REP ES:EDI,ESI                ; 004d56bf
    PUSH 0x62afa5                       ; 004d56c1 | = "CCrossbow"
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
        ;   XREF to: 005f5690 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_005f5690(CMatrix3x3f * matrix_in, CVector3f * euler_out)
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
    MOVSD.REP ES:EDI,ESI                ; 004d5753
    LEA EAX,[EBP + 0x66]                ; 004d5755
    PUSH EAX                            ; 004d5758
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
        ;   XREF to: 005f5690 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_005f5690(CMatrix3x3f * matrix_in, CVector3f * euler_out)
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
    MOV EDX,dword ptr [0x02d7b870]      ; 004d580c | INT_02d7b870
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
    MOV ECX,0xc                         ; 004d583a
    LEA ESI,[EBP + 0xfffffec2]          ; 004d583f
    LEA EAX,[EBP + 0xfffffe92]          ; 004d5845
    ADD ESP,0x8                         ; 004d584b
    MOVSD.REP ES:EDI,ESI                ; 004d584e
    PUSH EAX                            ; 004d5850
    LEA ESI,[EBP + -0x4e]               ; 004d5851
    LEA EDI,[EBP + 0xfffffd72]          ; 004d5854
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 004d585a
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 004d585f
    LEA ESI,[EBP + -0x4e]               ; 004d5864
    JMP 0x004d5750                      ; 004d5867
        ;   XREF to: 004d5750 (UNCONDITIONAL_JUMP)  ; LAB_004d5750

