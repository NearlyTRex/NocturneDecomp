; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dmodel.cpp_CKeyFramedModel_intersectCylinder_FUN_00478650(CKeyFramedModel * this_ptr, int frame_index, SIntersectXZCylinder * cylinder, CVector3f * transform_vector)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   frame_index
; SIntersectXZCylinder * Stack[0xc]:4   cylinder
; CVector3f *      Stack[0x10]:4   transform_vector
;
; XREF[1]:
;   core_setcolid.cpp_CDemonSet_testCapsuleCollision_FUN_00573470 at 00573857
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_0061f7a3
;   TerminatedCString s_Tried_to_call_CKeyFramed_0061f7b6
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_00478950
;   core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00478650
        ;   Label: core_dmodel.cpp_CKeyFramedModel_intersectCylinder_FUN_00478650
    PUSH ESI                            ; 00478651
    PUSH EDI                            ; 00478652
    PUSH EBP                            ; 00478653
    MOV EDI,dword ptr [ESP + 0x14]      ; 00478654
    MOV EBX,dword ptr [ESP + 0x18]      ; 00478658
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0047865c
    MOV EDX,dword ptr [ESP + 0x20]      ; 00478660
    MOV ECX,dword ptr [EDI + 0x100]     ; 00478664
    CMP EBX,ECX                         ; 0047866a
    JL 0x00478671                       ; 0047866c | LAB_00478671
        ;   XREF to: 00478671 (CONDITIONAL_JUMP)
    LEA EBX,[ECX + -0x1]                ; 0047866e
    TEST EBX,EBX                        ; 00478671
        ;   Label: LAB_00478671
    JL 0x00478715                       ; 00478673 | LAB_00478715
        ;   XREF to: 00478715 (CONDITIONAL_JUMP)
    LEA ESI,[EDI + 0x56a4]              ; 00478679
        ;   Label: LAB_00478679
    FLD float ptr [ESI]                 ; 0047867f
    FCOMP float ptr [EDX]               ; 00478681
    FNSTSW AX                           ; 00478683
    SAHF                                ; 00478685
    JZ 0x0047871c                       ; 00478686 | LAB_0047871c
        ;   XREF to: 0047871c (CONDITIONAL_JUMP)
    PUSH EDX                            ; 0047868c
        ;   Label: LAB_0047868c
    PUSH EDI                            ; 0047868d
    CALL core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_00478950 ; 0047868e | void core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_00478950(CKeyFramedModel * this_ptr, CVector3f * transform_vector)
        ;   XREF to: 00478950 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00478693
    CMP dword ptr [EDI + 0x5698],0x0    ; 00478696
        ;   Label: LAB_00478696
    JNZ 0x004786c2                      ; 0047869d | LAB_004786c2
        ;   XREF to: 004786c2 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 0047869f
    MOV EAX,0x61f7a3                    ; 004786a0 | = "..\\core\\dmodel.cpp" | s_core_dmodel_cpp_0061f7a3 = ..\core\dmodel.cpp
    MOV EDX,0x40e                       ; 004786a5
    PUSH 0x61f7b6                       ; 004786aa | = "Tried to call CKeyFramedModel::inters..." | s_Tried_to_call_CKeyFramed_0061f7b6 = Tried to call CKeyFramedModel::intersectCylinderXZ for model %s but this model does not have a collision triangle list!
    MOV [0x02f0ca48],EAX                ; 004786af | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 004786b4 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004786ba | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004786bf
    MOV ESI,dword ptr [EDI + 0x5694]    ; 004786c2
        ;   Label: LAB_004786c2
    IMUL EBX,ESI                        ; 004786c8
    SHL EBX,0x3                         ; 004786cb
    MOV ESI,EBX                         ; 004786ce
    SHL EBX,0x3                         ; 004786d0
    SUB EBX,ESI                         ; 004786d3
    MOV ESI,dword ptr [EDI + 0x5698]    ; 004786d5
    MOV ECX,dword ptr [EDI + 0x5694]    ; 004786db
    ADD ESI,EBX                         ; 004786e1
    XOR EBX,EBX                         ; 004786e3
    TEST ECX,ECX                        ; 004786e5
    JLE 0x00478710                      ; 004786e7 | LAB_00478710
        ;   XREF to: 00478710 (CONDITIONAL_JUMP)
    PUSH EBP                            ; 004786e9
        ;   Label: LAB_004786e9
    PUSH ESI                            ; 004786ea
    INC EBX                             ; 004786eb
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80 ; 004786ec | void core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80(CDemonTriangle * triangle, SIntersectXZCylinder * cylinder)
        ;   XREF to: 0049ad80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004786f1
    MOV EAX,dword ptr [EDI + 0x5694]    ; 004786f4
    ADD ESI,0x38                        ; 004786fa
    CMP EBX,EAX                         ; 004786fd
    JL 0x004786e9                       ; 004786ff | LAB_004786e9
        ;   XREF to: 004786e9 (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 00478701
    LEA EDX,[EDX]                       ; 00478707
    LEA EAX,[EAX]                       ; 0047870d
    POP EBP                             ; 00478710
        ;   Label: LAB_00478710
    POP EDI                             ; 00478711
    POP ESI                             ; 00478712
    POP EBX                             ; 00478713
    RET                                 ; 00478714
    XOR EBX,EBX                         ; 00478715
        ;   Label: LAB_00478715
    JMP 0x00478679                      ; 00478717 | LAB_00478679
        ;   XREF to: 00478679 (UNCONDITIONAL_JUMP)
    FLD float ptr [ESI + 0x4]           ; 0047871c
        ;   Label: LAB_0047871c
    FCOMP float ptr [EDX + 0x4]         ; 0047871f
    FNSTSW AX                           ; 00478722
    SAHF                                ; 00478724
    JNZ 0x0047868c                      ; 00478725 | LAB_0047868c
        ;   XREF to: 0047868c (CONDITIONAL_JUMP)
    FLD float ptr [ESI + 0x8]           ; 0047872b
    FCOMP float ptr [EDX + 0x8]         ; 0047872e
    FNSTSW AX                           ; 00478731
    SAHF                                ; 00478733
    JZ 0x00478696                       ; 00478734 | LAB_00478696
        ;   XREF to: 00478696 (CONDITIONAL_JUMP)
    JMP 0x0047868c                      ; 0047873a | LAB_0047868c
        ;   XREF to: 0047868c (UNCONDITIONAL_JUMP)

