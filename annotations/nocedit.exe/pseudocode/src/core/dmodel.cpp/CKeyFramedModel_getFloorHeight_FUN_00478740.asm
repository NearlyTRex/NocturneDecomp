; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_dmodel_cpp_CKeyFramedModel_getFloorHeight_FUN_00478740(CKeyFramedModel *this_ptr,int frame_index,float x,float z,float *out_height,CVector3f *transform_vector)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   frame_index
; float            Stack[0xc]:4   x
; float            Stack[0x10]:4   z
; float *          Stack[0x14]:4   out_height
; CVector3f *      Stack[0x18]:4   transform_vector
;
; XREF[1]:
;   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0 at 005721aa
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_0061f82e
;   TerminatedCString s_Tried_to_call_CKeyFramed_0061f841
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_00478950
;   core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00478740
        ;   Label: core_dmodel.cpp_CKeyFramedModel_getFloorHeight_FUN_00478740
    PUSH ESI                            ; 00478741
    PUSH EDI                            ; 00478742
    PUSH EBP                            ; 00478743
    MOV EDI,dword ptr [ESP + 0x14]      ; 00478744
    MOV ESI,dword ptr [ESP + 0x18]      ; 00478748
    MOV EBP,dword ptr [ESP + 0x28]      ; 0047874c
    MOV EDX,dword ptr [EDI + 0x100]     ; 00478750
    CMP ESI,EDX                         ; 00478756
    JL 0x0047875d                       ; 00478758
        ;   XREF to: 0047875d (CONDITIONAL_JUMP)  ; LAB_0047875d
    LEA ESI,[EDX + -0x1]                ; 0047875a
    TEST ESI,ESI                        ; 0047875d
        ;   Label: LAB_0047875d
    JL 0x00478809                       ; 0047875f
        ;   XREF to: 00478809 (CONDITIONAL_JUMP)  ; LAB_00478809
    CMP dword ptr [EDI + 0x5698],0x0    ; 00478765
        ;   Label: LAB_00478765
    JNZ 0x00478791                      ; 0047876c
        ;   XREF to: 00478791 (CONDITIONAL_JUMP)  ; LAB_00478791
    PUSH EDI                            ; 0047876e
    MOV EBX,0x61f82e                    ; 0047876f | = "..\\core\\dmodel.cpp"
    MOV EAX,0x43e                       ; 00478774
    PUSH 0x61f841                       ; 00478779 | = "Tried to call CKeyFramedModel::getFlo..."
    MOV dword ptr [0x02f0ca48],EBX      ; 0047877e | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00478784 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00478789
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0047878e
    LEA EBX,[EDI + 0x56a4]              ; 00478791
        ;   Label: LAB_00478791
    FLD float ptr [EBX]                 ; 00478797
    FCOMP float ptr [EBP]               ; 00478799
    FNSTSW AX                           ; 0047879c
    SAHF                                ; 0047879e
    JZ 0x00478810                       ; 0047879f
        ;   XREF to: 00478810 (CONDITIONAL_JUMP)  ; LAB_00478810
    PUSH EBP                            ; 004787a1
        ;   Label: LAB_004787a1
    PUSH EDI                            ; 004787a2
    CALL core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_00478950 ; 004787a3
        ;   XREF to: 00478950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_00478950(CKeyFramedModel * this_ptr, CVector3f * transform_vector)
    ADD ESP,0x8                         ; 004787a8
    MOV EAX,dword ptr [EDI + 0x5694]    ; 004787ab
        ;   Label: LAB_004787ab
    IMUL EAX,ESI                        ; 004787b1
    SHL EAX,0x3                         ; 004787b4
    MOV EDX,dword ptr [EDI + 0x5694]    ; 004787b7
    MOV EBX,EAX                         ; 004787bd
    SHL EAX,0x3                         ; 004787bf
    MOV ESI,dword ptr [EDI + 0x5698]    ; 004787c2
    SUB EAX,EBX                         ; 004787c8
    XOR EBP,EBP                         ; 004787ca
    ADD ESI,EAX                         ; 004787cc
    XOR EBX,EBX                         ; 004787ce
    TEST EDX,EDX                        ; 004787d0
    JLE 0x00478802                      ; 004787d2
        ;   XREF to: 00478802 (CONDITIONAL_JUMP)  ; LAB_00478802
    MOV EAX,dword ptr [ESP + 0x24]      ; 004787d4
        ;   Label: LAB_004787d4
    PUSH EAX                            ; 004787d8
    MOV EDX,dword ptr [ESP + 0x20]      ; 004787d9
    PUSH dword ptr [ESP + 0x24]         ; 004787dd
    PUSH EDX                            ; 004787e1
    PUSH ESI                            ; 004787e2
    CALL core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0 ; 004787e3
        ;   XREF to: 0049b2f0 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0(CDemonTriangle * triangle, float x, float z, float * out_height)
    ADD ESP,0x10                        ; 004787e8
    TEST EAX,EAX                        ; 004787eb
    JZ 0x004787f4                       ; 004787ed
        ;   XREF to: 004787f4 (CONDITIONAL_JUMP)  ; LAB_004787f4
    MOV EBP,0x1                         ; 004787ef
    INC EBX                             ; 004787f4
        ;   Label: LAB_004787f4
    MOV ECX,dword ptr [EDI + 0x5694]    ; 004787f5
    ADD ESI,0x38                        ; 004787fb
    CMP EBX,ECX                         ; 004787fe
    JL 0x004787d4                       ; 00478800
        ;   XREF to: 004787d4 (CONDITIONAL_JUMP)  ; LAB_004787d4
    MOV EAX,EBP                         ; 00478802
        ;   Label: LAB_00478802
    POP EBP                             ; 00478804
    POP EDI                             ; 00478805
    POP ESI                             ; 00478806
    POP EBX                             ; 00478807
    RET                                 ; 00478808
    XOR ESI,ESI                         ; 00478809
        ;   Label: LAB_00478809
    JMP 0x00478765                      ; 0047880b
        ;   XREF to: 00478765 (UNCONDITIONAL_JUMP)  ; LAB_00478765
    FLD float ptr [EBX + 0x4]           ; 00478810
        ;   Label: LAB_00478810
    FCOMP float ptr [EBP + 0x4]         ; 00478813
    FNSTSW AX                           ; 00478816
    SAHF                                ; 00478818
    JNZ 0x004787a1                      ; 00478819
        ;   XREF to: 004787a1 (CONDITIONAL_JUMP)  ; LAB_004787a1
    FLD float ptr [EBX + 0x8]           ; 0047881b
    FCOMP float ptr [EBP + 0x8]         ; 0047881e
    FNSTSW AX                           ; 00478821
    SAHF                                ; 00478823
    JZ 0x004787ab                       ; 00478824
        ;   XREF to: 004787ab (CONDITIONAL_JUMP)  ; LAB_004787ab
    JMP 0x004787a1                      ; 00478826
        ;   XREF to: 004787a1 (UNCONDITIONAL_JUMP)  ; LAB_004787a1

