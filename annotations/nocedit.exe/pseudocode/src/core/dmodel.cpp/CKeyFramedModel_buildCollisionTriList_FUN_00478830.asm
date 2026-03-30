; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModel_buildCollisionTriList_FUN_00478830(CKeyFramedModel *this_ptr)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_dmodel.cpp_CKeyFramedModel_readBinaryModel_FUN_00476f20 at 004770fa
;   core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00477110 at 0047767c
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047e457
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_0061f8b4
;   TerminatedCString s_core_dmodel_cpp_0061f8c7
;   TerminatedCString s_core_dmodel_cpp_0061f8da
;   TerminatedCString s_CKeyFramedModel_buildCol_0061f8ed
;   char* g_CurrentDebugFilename = 0067d200
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_CurrentDebugLine
;   UVector3 g_ZeroVector
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_00478950
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_memdbg.cpp_debugAllocTracked2_FUN_0050f1f0
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00478830
        ;   Label: core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00478830
    PUSH ESI                            ; 00478831
    MOV EBX,dword ptr [ESP + 0xc]       ; 00478832
    MOV ECX,0x45e                       ; 00478836
    MOV EDX,0x61f8b4                    ; 0047883b | = "..\\core\\dmodel.cpp"
    MOV EAX,dword ptr [EBX + 0x5698]    ; 00478840
    MOV dword ptr [0x02f0d944],ECX      ; 00478846 | g_CurrentDebugLine
    MOV dword ptr [0x0067d20c],EDX      ; 0047884c | g_CurrentDebugFilename
    TEST EAX,EAX                        ; 00478852
    JNZ 0x00478936                      ; 00478854
        ;   XREF to: 00478936 (CONDITIONAL_JUMP)  ; LAB_00478936
    MOV dword ptr [EBX + 0x5694],0x0    ; 0047885a
        ;   Label: LAB_0047885a
    MOV ESI,dword ptr [EBX + 0x110]     ; 00478864
    MOV dword ptr [EBX + 0x5698],0x0    ; 0047886a
    CMP ESI,0x1                         ; 00478874
    JL 0x00478933                       ; 00478877
        ;   XREF to: 00478933 (CONDITIONAL_JUMP)  ; LAB_00478933
    CMP dword ptr [EBX + 0x100],0x1     ; 0047887d
    JL 0x00478933                       ; 00478884
        ;   XREF to: 00478933 (CONDITIONAL_JUMP)  ; LAB_00478933
    XOR EDX,EDX                         ; 0047888a
    TEST ESI,ESI                        ; 0047888c
    JLE 0x004788bd                      ; 0047888e
        ;   XREF to: 004788bd (CONDITIONAL_JUMP)  ; LAB_004788bd
    PUSH EDI                            ; 00478890
    XOR EAX,EAX                         ; 00478891
    ADD EAX,0x48                        ; 00478893
        ;   Label: LAB_00478893
    MOV ECX,dword ptr [EBX + 0x114]     ; 00478896
    MOV ECX,dword ptr [ECX + EAX*0x1 + -0x44] ; 0047889c
    MOV ESI,dword ptr [EBX + 0x5694]    ; 004788a0
    SUB ECX,0x2                         ; 004788a6
    INC EDX                             ; 004788a9
    ADD ESI,ECX                         ; 004788aa
    MOV EDI,dword ptr [EBX + 0x110]     ; 004788ac
    MOV dword ptr [EBX + 0x5694],ESI    ; 004788b2
    CMP EDX,EDI                         ; 004788b8
    JL 0x00478893                       ; 004788ba
        ;   XREF to: 00478893 (CONDITIONAL_JUMP)  ; LAB_00478893
    POP EDI                             ; 004788bc
    MOV ESI,dword ptr [EBX + 0x100]     ; 004788bd
        ;   Label: LAB_004788bd
    IMUL ESI,dword ptr [EBX + 0x5694]   ; 004788c3
    LEA EAX,[ESI*0x8 + 0x0]             ; 004788ca
    MOV EDX,EAX                         ; 004788d1
    SHL EAX,0x3                         ; 004788d3
    PUSH 0x46f                          ; 004788d6
    SUB EAX,EDX                         ; 004788db
    PUSH 0x61f8c7                       ; 004788dd | = "..\\core\\dmodel.cpp"
    ADD EAX,0x4                         ; 004788e2
    PUSH EAX                            ; 004788e5
    CALL shape_memdbg.cpp_debugAllocTracked2_FUN_0050f1f0 ; 004788e6
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAllocTracked2_FUN_0050f1f0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004788eb
    TEST EAX,EAX                        ; 004788ee
    JZ 0x004788f8                       ; 004788f0
        ;   XREF to: 004788f8 (CONDITIONAL_JUMP)  ; LAB_004788f8
    ADD EAX,0x4                         ; 004788f2
    MOV dword ptr [EAX + -0x4],ESI      ; 004788f5
    MOV dword ptr [EBX + 0x5698],EAX    ; 004788f8
        ;   Label: LAB_004788f8
    TEST EAX,EAX                        ; 004788fe
    JNZ 0x00478925                      ; 00478900
        ;   XREF to: 00478925 (CONDITIONAL_JUMP)  ; LAB_00478925
    MOV EDX,0x61f8da                    ; 00478902 | = "..\\core\\dmodel.cpp"
    MOV ECX,0x470                       ; 00478907
    PUSH 0x61f8ed                       ; 0047890c | = "CKeyFramedModel::buildCollisionTriLis..."
    MOV dword ptr [0x02f0ca48],EDX      ; 00478911 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00478917 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0047891d
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00478922
    PUSH 0x3f87558                      ; 00478925 | g_ZeroVector
        ;   Label: LAB_00478925
    PUSH EBX                            ; 0047892a
    CALL core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_00478950 ; 0047892b
        ;   XREF to: 00478950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_00478950(CKeyFramedModel * this_ptr, CVector3f * transform_vector)
    ADD ESP,0x8                         ; 00478930
    POP ESI                             ; 00478933
        ;   Label: LAB_00478933
    POP EBX                             ; 00478934
    RET                                 ; 00478935
    SUB EAX,0x4                         ; 00478936
        ;   Label: LAB_00478936
    PUSH EAX                            ; 00478939
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 0047893a
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0047893f
    JMP 0x0047885a                      ; 00478942
        ;   XREF to: 0047885a (UNCONDITIONAL_JUMP)  ; LAB_0047885a

