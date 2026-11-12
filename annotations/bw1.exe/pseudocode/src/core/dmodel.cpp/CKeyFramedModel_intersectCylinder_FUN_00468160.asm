; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModel_intersectCylinder_FUN_00468160(CKeyFramedModel *this_ptr,int frame_index,SIntersectXZCylinder *cylinder,CVector3f *transform_vector)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   frame_index
; SIntersectXZCylinder * Stack[0xc]:4   cylinder
; CVector3f *      Stack[0x10]:4   transform_vector
;
; XREF[1]:
;   core_setcolid.cpp_FUN_00558450 at 00558879
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_005d964c
;   TerminatedCString s_Tried_to_call_CKeyFramed_005d965f
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_00468420
;   core_dtri.cpp_cylinderTriangleTest_FUN_004904d0
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468160
        ;   Label: core_dmodel.cpp_CKeyFramedModel_intersectCylinder_FUN_00468160
    PUSH ESI                            ; 00468161
    PUSH EDI                            ; 00468162
    PUSH EBP                            ; 00468163
    MOV EDI,dword ptr [ESP + 0x14]      ; 00468164
    MOV EBX,dword ptr [ESP + 0x18]      ; 00468168
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0046816c
    MOV EDX,dword ptr [ESP + 0x20]      ; 00468170
    MOV ECX,dword ptr [EDI + 0x100]     ; 00468174
    CMP EBX,ECX                         ; 0046817a
    JL 0x00468181                       ; 0046817c
        ;   XREF to: 00468181 (CONDITIONAL_JUMP)  ; LAB_00468181
    LEA EBX,[ECX + -0x1]                ; 0046817e
    TEST EBX,EBX                        ; 00468181
        ;   Label: LAB_00468181
    JL 0x00468225                       ; 00468183
        ;   XREF to: 00468225 (CONDITIONAL_JUMP)  ; LAB_00468225
    LEA ESI,[EDI + 0x364]               ; 00468189
        ;   Label: LAB_00468189
    FLD float ptr [ESI]                 ; 0046818f
    FCOMP float ptr [EDX]               ; 00468191
    FNSTSW AX                           ; 00468193
    SAHF                                ; 00468195
    JZ 0x0046822c                       ; 00468196
        ;   XREF to: 0046822c (CONDITIONAL_JUMP)  ; LAB_0046822c
    PUSH EDX                            ; 0046819c
        ;   Label: LAB_0046819c
    PUSH EDI                            ; 0046819d
    CALL core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_00468420 ; 0046819e
        ;   XREF to: 00468420 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_00468420(CKeyFramedModel * this_ptr, CVector3f * transform_vector)
    ADD ESP,0x8                         ; 004681a3
    CMP dword ptr [EDI + 0x358],0x0     ; 004681a6
        ;   Label: LAB_004681a6
    JNZ 0x004681d2                      ; 004681ad
        ;   XREF to: 004681d2 (CONDITIONAL_JUMP)  ; LAB_004681d2
    PUSH EDI                            ; 004681af
    MOV EAX,0x5d964c                    ; 004681b0 | = "..\\core\\dmodel.cpp"
    MOV EDX,0x40e                       ; 004681b5
    PUSH 0x5d965f                       ; 004681ba | = "Tried to call CKeyFramedModel::inters..."
    MOV [0x01d1d400],EAX                ; 004681bf | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 004681c4 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004681ca
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 004681cf
    MOV ESI,dword ptr [EDI + 0x354]     ; 004681d2
        ;   Label: LAB_004681d2
    IMUL EBX,ESI                        ; 004681d8
    SHL EBX,0x3                         ; 004681db
    MOV ESI,EBX                         ; 004681de
    SHL EBX,0x3                         ; 004681e0
    SUB EBX,ESI                         ; 004681e3
    MOV ESI,dword ptr [EDI + 0x358]     ; 004681e5
    MOV ECX,dword ptr [EDI + 0x354]     ; 004681eb
    ADD ESI,EBX                         ; 004681f1
    XOR EBX,EBX                         ; 004681f3
    TEST ECX,ECX                        ; 004681f5
    JLE 0x00468220                      ; 004681f7
        ;   XREF to: 00468220 (CONDITIONAL_JUMP)  ; LAB_00468220
    PUSH EBP                            ; 004681f9
        ;   Label: LAB_004681f9
    PUSH ESI                            ; 004681fa
    INC EBX                             ; 004681fb
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_004904d0 ; 004681fc
        ;   XREF to: 004904d0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_cylinderTriangleTest_FUN_004904d0(CDemonTriangle * triangle, SIntersectXZCylinder * cylinder)
    ADD ESP,0x8                         ; 00468201
    MOV EAX,dword ptr [EDI + 0x354]     ; 00468204
    ADD ESI,0x38                        ; 0046820a
    CMP EBX,EAX                         ; 0046820d
    JL 0x004681f9                       ; 0046820f
        ;   XREF to: 004681f9 (CONDITIONAL_JUMP)  ; LAB_004681f9
    LEA EAX,[EAX]                       ; 00468211
    LEA EDX,[EDX]                       ; 00468217
    LEA EAX,[EAX]                       ; 0046821d
    POP EBP                             ; 00468220
        ;   Label: LAB_00468220
    POP EDI                             ; 00468221
    POP ESI                             ; 00468222
    POP EBX                             ; 00468223
    RET                                 ; 00468224
    XOR EBX,EBX                         ; 00468225
        ;   Label: LAB_00468225
    JMP 0x00468189                      ; 00468227
        ;   XREF to: 00468189 (UNCONDITIONAL_JUMP)  ; LAB_00468189
    FLD float ptr [ESI + 0x4]           ; 0046822c
        ;   Label: LAB_0046822c
    FCOMP float ptr [EDX + 0x4]         ; 0046822f
    FNSTSW AX                           ; 00468232
    SAHF                                ; 00468234
    JNZ 0x0046819c                      ; 00468235
        ;   XREF to: 0046819c (CONDITIONAL_JUMP)  ; LAB_0046819c
    FLD float ptr [ESI + 0x8]           ; 0046823b
    FCOMP float ptr [EDX + 0x8]         ; 0046823e
    FNSTSW AX                           ; 00468241
    SAHF                                ; 00468243
    JZ 0x004681a6                       ; 00468244
        ;   XREF to: 004681a6 (CONDITIONAL_JUMP)  ; LAB_004681a6
    JMP 0x0046819c                      ; 0046824a
        ;   XREF to: 0046819c (UNCONDITIONAL_JUMP)  ; LAB_0046819c

