; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dmodel_cpp_CKeyFramedModel_weldAndRemoveUnusedVertices_FUN_0047ada0(CKeyFramedModel *this_ptr,float weld_tolerance)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   weld_tolerance
; Local Variables:
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
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
; XREF[1]:
;   core_dmodel.cpp_CKeyFramedModel_reducePolygons_FUN_0047aa00 at 0047aa09
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_00620314
;   TerminatedCString s_core_dmodel_cpp_00620327
;   TerminatedCString s_CKeyFramedModel_removeUn_0062033a
;   TerminatedCString s_Reducing_vertices_0062038d
;   TerminatedCString s_core_dmodel_cpp_006203a2
;   TerminatedCString s_Vertex_reducer_bug_or_CK_006203b5
;   TerminatedCString s_core_dmodel_cpp_006203e7
;   TerminatedCString s_Vertex_reducer_bug_or_CK_006203fa
;   TerminatedCString s_core_dmodel_cpp_0062042c
;   double DOUBLE_00620443 = 65536
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   char* g_CurrentDebugFilename = 0067d200
;   CEditorTools g_CEditorToolsInstance
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   ... and 1 more
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00477e60
;   core_dmodel.cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30
;   core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
;   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
;   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047ada0
        ;   Label: core_dmodel.cpp_CKeyFramedModel_weldAndRemoveUnusedVertices_FUN_0047ada0
    PUSH ESI                            ; 0047ada1
    PUSH EDI                            ; 0047ada2
    PUSH EBP                            ; 0047ada3
    SUB ESP,0x44                        ; 0047ada4
    MOV ESI,dword ptr [ESP + 0x58]      ; 0047ada7
    PUSH ESI                            ; 0047adab
    CALL core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40 ; 0047adac
        ;   XREF to: 0047bf40 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(CKeyFramedModel * this_ptr)
    MOV EDX,dword ptr [ESI + 0x104]     ; 0047adb1
    ADD ESP,0x4                         ; 0047adb7
    CMP EDX,0x1                         ; 0047adba
    JL 0x0047adc8                       ; 0047adbd
        ;   XREF to: 0047adc8 (CONDITIONAL_JUMP)  ; LAB_0047adc8
    CMP dword ptr [ESI + 0x100],0x1     ; 0047adbf
    JGE 0x0047add0                      ; 0047adc6
        ;   XREF to: 0047add0 (CONDITIONAL_JUMP)  ; LAB_0047add0
    ADD ESP,0x44                        ; 0047adc8
        ;   Label: LAB_0047adc8
    POP EBP                             ; 0047adcb
    POP EDI                             ; 0047adcc
    POP ESI                             ; 0047adcd
    POP EBX                             ; 0047adce
    RET                                 ; 0047adcf
    PUSH ESI                            ; 0047add0
        ;   Label: LAB_0047add0
    CALL core_dmodel.cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30 ; 0047add1
        ;   XREF to: 0047aa30 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 0047add6
    PUSH 0x8df                          ; 0047add9
    MOV EAX,dword ptr [ESI + 0x104]     ; 0047adde
    PUSH 0x620314                       ; 0047ade4 | = "..\\core\\dmodel.cpp"
    SHL EAX,0x2                         ; 0047ade9
    PUSH EAX                            ; 0047adec
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 0047aded
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0047adf2
    MOV dword ptr [ESP + 0x1c],EAX      ; 0047adf5
    TEST EAX,EAX                        ; 0047adf9
    JNZ 0x0047ae27                      ; 0047adfb
        ;   XREF to: 0047ae27 (CONDITIONAL_JUMP)  ; LAB_0047ae27
    MOV EBP,dword ptr [ESI + 0x104]     ; 0047adfd
    PUSH EBP                            ; 0047ae03
    MOV EBX,0x620327                    ; 0047ae04 | = "..\\core\\dmodel.cpp"
    MOV EDI,0x8e0                       ; 0047ae09
    PUSH 0x62033a                       ; 0047ae0e | = "CKeyFramedModel::removeUnusedVertices..."
    MOV dword ptr [0x02f0ca48],EBX      ; 0047ae13 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 0047ae19 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0047ae1f
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0047ae24
    MOV EDX,dword ptr [ESI + 0x104]     ; 0047ae27
        ;   Label: LAB_0047ae27
    XOR EAX,EAX                         ; 0047ae2d
    TEST EDX,EDX                        ; 0047ae2f
    JLE 0x0047ae50                      ; 0047ae31
        ;   XREF to: 0047ae50 (CONDITIONAL_JUMP)  ; LAB_0047ae50
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0047ae33
    MOV dword ptr [EBX],EAX             ; 0047ae37
        ;   Label: LAB_0047ae37
    INC EAX                             ; 0047ae39
    MOV ECX,dword ptr [ESI + 0x104]     ; 0047ae3a
    ADD EBX,0x4                         ; 0047ae40
    CMP EAX,ECX                         ; 0047ae43
    JL 0x0047ae37                       ; 0047ae45
        ;   XREF to: 0047ae37 (CONDITIONAL_JUMP)  ; LAB_0047ae37
    LEA EAX,[EAX]                       ; 0047ae47
    LEA EDX,[EDX]                       ; 0047ae4d
    FLD float ptr [ESP + 0x5c]          ; 0047ae50
        ;   Label: LAB_0047ae50
    FMUL ST0                            ; 0047ae54
    FMUL double ptr [0x00620443]        ; 0047ae56 | DOUBLE_00620443
    XOR EBX,EBX                         ; 0047ae5c
    MOV EDI,dword ptr [ESI + 0x104]     ; 0047ae5e
    MOV dword ptr [ESP + 0x18],EBX      ; 0047ae64
    FSTP float ptr [ESP + 0x3c]         ; 0047ae68
    CMP EDI,0x7d0                       ; 0047ae6c
    JLE 0x0047ae91                      ; 0047ae72
        ;   XREF to: 0047ae91 (CONDITIONAL_JUMP)  ; LAB_0047ae91
    PUSH 0x62038d                       ; 0047ae74 | = "Reducing vertices..."
    MOV EBP,dword ptr [0x00678a60]      ; 0047ae79 | g_CEditorToolsPtr
    PUSH EBP                            ; 0047ae7f | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430 ; 0047ae80
        ;   XREF to: 004a0430 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430(CEditorTools * this_ptr, char * message_text)
    MOV EAX,0x1                         ; 0047ae85
    ADD ESP,0x8                         ; 0047ae8a
    MOV dword ptr [ESP + 0x18],EAX      ; 0047ae8d
    XOR EBX,EBX                         ; 0047ae91
        ;   Label: LAB_0047ae91
    MOV ECX,dword ptr [ESI + 0x5584]    ; 0047ae93
    MOV dword ptr [ESP + 0x10],EBX      ; 0047ae99
    TEST ECX,ECX                        ; 0047ae9d
    JLE 0x0047af79                      ; 0047ae9f
        ;   XREF to: 0047af79 (CONDITIONAL_JUMP)  ; LAB_0047af79
    MOV dword ptr [ESP + 0xc],ESI       ; 0047aea5
    MOV EAX,dword ptr [ESP + 0xc]       ; 0047aea9
        ;   Label: LAB_0047aea9
    MOV EAX,dword ptr [EAX + 0x5588]    ; 0047aead
    ADD EAX,EBX                         ; 0047aeb3
    MOV EDX,dword ptr [ESI + 0x104]     ; 0047aeb5
    MOV dword ptr [ESP + 0x2c],EAX      ; 0047aebb
    CMP EAX,EDX                         ; 0047aebf
    JLE 0x0047aee6                      ; 0047aec1
        ;   XREF to: 0047aee6 (CONDITIONAL_JUMP)  ; LAB_0047aee6
    MOV ECX,0x6203a2                    ; 0047aec3 | = "..\\core\\dmodel.cpp"
    MOV EDI,0x8f8                       ; 0047aec8
    PUSH 0x6203b5                       ; 0047aecd | = "Vertex reducer bug or CKeyFramedModel..."
    MOV dword ptr [0x02f0ca48],ECX      ; 0047aed2 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 0047aed8 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0047aede
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0047aee3
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0047aee6
        ;   Label: LAB_0047aee6
    MOV dword ptr [ESP + 0x30],EBX      ; 0047aeea
    CMP EBX,EBP                         ; 0047aeee
    JGE 0x0047af53                      ; 0047aef0
        ;   XREF to: 0047af53 (CONDITIONAL_JUMP)  ; LAB_0047af53
    LEA EAX,[EBX*0x4 + 0x0]             ; 0047aef2
    IMUL EBX,EBX,0xc                    ; 0047aef9
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0047aefc
    ADD EAX,ECX                         ; 0047af00
    MOV dword ptr [ESP + 0x24],EAX      ; 0047af02
    MOV dword ptr [ESP + 0x20],EBX      ; 0047af06
    CMP dword ptr [ESP + 0x18],0x0      ; 0047af0a
        ;   Label: LAB_0047af0a
    JZ 0x0047af1c                       ; 0047af0f
        ;   XREF to: 0047af1c (CONDITIONAL_JUMP)  ; LAB_0047af1c
    TEST byte ptr [ESP + 0x30],0xff     ; 0047af11
    JZ 0x0047b05c                       ; 0047af16
        ;   XREF to: 0047b05c (CONDITIONAL_JUMP)  ; LAB_0047b05c
    MOV EAX,dword ptr [ESP + 0x24]      ; 0047af1c
        ;   Label: LAB_0047af1c
    MOV EBP,dword ptr [ESP + 0x30]      ; 0047af20
    CMP EBP,dword ptr [EAX]             ; 0047af24
    JZ 0x0047b08e                       ; 0047af26
        ;   XREF to: 0047b08e (CONDITIONAL_JUMP)  ; LAB_0047b08e
    MOV EBX,dword ptr [ESP + 0x24]      ; 0047af2c
        ;   Label: LAB_0047af2c
    MOV EDI,dword ptr [ESP + 0x20]      ; 0047af30
    MOV EBP,dword ptr [ESP + 0x30]      ; 0047af34
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0047af38
    ADD EBX,0x4                         ; 0047af3c
    ADD EDI,0xc                         ; 0047af3f
    INC EBP                             ; 0047af42
    MOV dword ptr [ESP + 0x24],EBX      ; 0047af43
    MOV dword ptr [ESP + 0x20],EDI      ; 0047af47
    MOV dword ptr [ESP + 0x30],EBP      ; 0047af4b
    CMP EBP,EDX                         ; 0047af4f
    JL 0x0047af0a                       ; 0047af51
        ;   XREF to: 0047af0a (CONDITIONAL_JUMP)  ; LAB_0047af0a
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0047af53
        ;   Label: LAB_0047af53
    MOV EDI,dword ptr [ESP + 0xc]       ; 0047af57
    MOV EBP,dword ptr [ESP + 0x10]      ; 0047af5b
    MOV EDX,dword ptr [ESI + 0x5584]    ; 0047af5f
    ADD EDI,0x8                         ; 0047af65
    INC EBP                             ; 0047af68
    MOV dword ptr [ESP + 0xc],EDI       ; 0047af69
    MOV dword ptr [ESP + 0x10],EBP      ; 0047af6d
    CMP EBP,EDX                         ; 0047af71
    JL 0x0047aea9                       ; 0047af73
        ;   XREF to: 0047aea9 (CONDITIONAL_JUMP)  ; LAB_0047aea9
    CMP EBX,dword ptr [ESI + 0x104]     ; 0047af79
        ;   Label: LAB_0047af79
    JZ 0x0047afa4                       ; 0047af7f
        ;   XREF to: 0047afa4 (CONDITIONAL_JUMP)  ; LAB_0047afa4
    MOV EBX,0x6203e7                    ; 0047af81 | = "..\\core\\dmodel.cpp"
    MOV EDI,0x931                       ; 0047af86
    PUSH 0x6203fa                       ; 0047af8b | = "Vertex reducer bug or CKeyFramedModel..."
    MOV dword ptr [0x02f0ca48],EBX      ; 0047af90 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 0047af96 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0047af9c
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0047afa1
    MOV EBP,dword ptr [ESI + 0x110]     ; 0047afa4
        ;   Label: LAB_0047afa4
    XOR EDI,EDI                         ; 0047afaa
    TEST EBP,EBP                        ; 0047afac
    JLE 0x0047affd                      ; 0047afae
        ;   XREF to: 0047affd (CONDITIONAL_JUMP)  ; LAB_0047affd
    MOV dword ptr [ESP + 0x14],EDI      ; 0047afb0
    MOV ECX,dword ptr [ESP + 0x14]      ; 0047afb4
        ;   Label: LAB_0047afb4
    MOV EBX,dword ptr [ESI + 0x114]     ; 0047afb8
    ADD EBX,ECX                         ; 0047afbe
    MOV EBP,dword ptr [EBX + 0x4]       ; 0047afc0
    XOR EDX,EDX                         ; 0047afc3
    TEST EBP,EBP                        ; 0047afc5
    JLE 0x0047afe7                      ; 0047afc7
        ;   XREF to: 0047afe7 (CONDITIONAL_JUMP)  ; LAB_0047afe7
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0047afc9
    MOV EAX,EBX                         ; 0047afcd
    MOV ECX,dword ptr [EAX + 0x18]      ; 0047afcf
        ;   Label: LAB_0047afcf
    SHL ECX,0x2                         ; 0047afd2
    ADD ECX,EBP                         ; 0047afd5
    MOV ECX,dword ptr [ECX]             ; 0047afd7
    MOV dword ptr [EAX + 0x18],ECX      ; 0047afd9
    INC EDX                             ; 0047afdc
    MOV ECX,dword ptr [EBX + 0x4]       ; 0047afdd
    ADD EAX,0xc                         ; 0047afe0
    CMP EDX,ECX                         ; 0047afe3
    JL 0x0047afcf                       ; 0047afe5
        ;   XREF to: 0047afcf (CONDITIONAL_JUMP)  ; LAB_0047afcf
    MOV EAX,dword ptr [ESP + 0x14]      ; 0047afe7
        ;   Label: LAB_0047afe7
    INC EDI                             ; 0047afeb
    ADD EAX,0x48                        ; 0047afec
    MOV EDX,dword ptr [ESI + 0x110]     ; 0047afef
    MOV dword ptr [ESP + 0x14],EAX      ; 0047aff5
    CMP EDI,EDX                         ; 0047aff9
    JL 0x0047afb4                       ; 0047affb
        ;   XREF to: 0047afb4 (CONDITIONAL_JUMP)  ; LAB_0047afb4
    MOV ECX,0x62042c                    ; 0047affd | = "..\\core\\dmodel.cpp"
        ;   Label: LAB_0047affd
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0047b002
    MOV EBX,0x943                       ; 0047b006
    PUSH EDI                            ; 0047b00b
    MOV dword ptr [0x0067d20c],ECX      ; 0047b00c | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EBX      ; 0047b012 | g_CurrentDebugLine
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 0047b018
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0047b01d
    PUSH ESI                            ; 0047b020
    CALL core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40 ; 0047b021
        ;   XREF to: 0047bf40 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 0047b026
    PUSH ESI                            ; 0047b029
    CALL core_dmodel.cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30 ; 0047b02a
        ;   XREF to: 0047aa30 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 0047b02f
    PUSH ESI                            ; 0047b032
    CALL core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00477e60 ; 0047b033
        ;   XREF to: 00477e60 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00477e60(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 0047b038
    CMP dword ptr [ESP + 0x18],0x0      ; 0047b03b
    JZ 0x0047adc8                       ; 0047b040
        ;   XREF to: 0047adc8 (CONDITIONAL_JUMP)  ; LAB_0047adc8
    MOV EAX,[0x00678a60]                ; 0047b046 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 0047b04b | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 0047b04c
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 0047b051
    ADD ESP,0x44                        ; 0047b054
    POP EBP                             ; 0047b057
    POP EDI                             ; 0047b058
    POP ESI                             ; 0047b059
    POP EBX                             ; 0047b05a
    RET                                 ; 0047b05b
    SUB ESP,0x4                         ; 0047b05c
        ;   Label: LAB_0047b05c
    MOV EAX,dword ptr [ESP + 0x34]      ; 0047b05f
    FILD dword ptr [ESI + 0x104]        ; 0047b063
    MOV dword ptr [ESP + 0x44],EAX      ; 0047b069
    FSTP float ptr [ESP]                ; 0047b06d
    FILD dword ptr [ESP + 0x44]         ; 0047b070
    SUB ESP,0x4                         ; 0047b074
    MOV EDI,dword ptr [0x00678a60]      ; 0047b077 | g_CEditorToolsPtr
    FSTP float ptr [ESP]                ; 0047b07d
    PUSH EDI                            ; 0047b080 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530 ; 0047b081
        ;   XREF to: 004a0530 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530(CEditorTools * this_ptr, float progress_min, float progress_max)
    ADD ESP,0xc                         ; 0047b086
    JMP 0x0047af1c                      ; 0047b089
        ;   XREF to: 0047af1c (UNCONDITIONAL_JUMP)  ; LAB_0047af1c
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0047b08e
        ;   Label: LAB_0047b08e
    LEA EDI,[EBP + 0x1]                 ; 0047b092
    CMP EDI,EAX                         ; 0047b095
    JGE 0x0047af2c                      ; 0047b097
        ;   XREF to: 0047af2c (CONDITIONAL_JUMP)  ; LAB_0047af2c
    MOV EAX,dword ptr [ESP + 0x20]      ; 0047b09d
    MOV dword ptr [ESP + 0x28],EAX      ; 0047b0a1
    IMUL EAX,EDI,0xc                    ; 0047b0a5
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0047b0a8
    LEA EBP,[EDI*0x4 + 0x0]             ; 0047b0ac
    MOV dword ptr [ESP + 0x38],EAX      ; 0047b0b3
    ADD EBP,EBX                         ; 0047b0b7
    MOV EDX,dword ptr [ESP + 0x38]      ; 0047b0b9
        ;   Label: LAB_0047b0b9
    MOV ECX,dword ptr [ESI + 0x10c]     ; 0047b0bd
    MOV EAX,dword ptr [EBP]             ; 0047b0c3
    ADD EDX,ECX                         ; 0047b0c6
    CMP EDI,EAX                         ; 0047b0c8
    JZ 0x0047b0e9                       ; 0047b0ca
        ;   XREF to: 0047b0e9 (CONDITIONAL_JUMP)  ; LAB_0047b0e9
    MOV EDX,dword ptr [ESP + 0x38]      ; 0047b0cc
        ;   Label: LAB_0047b0cc
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0047b0d0
    ADD EBP,0x4                         ; 0047b0d4
    ADD EDX,0xc                         ; 0047b0d7
    INC EDI                             ; 0047b0da
    MOV dword ptr [ESP + 0x38],EDX      ; 0047b0db
    CMP EDI,ECX                         ; 0047b0df
    JGE 0x0047af2c                      ; 0047b0e1
        ;   XREF to: 0047af2c (CONDITIONAL_JUMP)  ; LAB_0047af2c
    JMP 0x0047b0b9                      ; 0047b0e7
        ;   XREF to: 0047b0b9 (UNCONDITIONAL_JUMP)  ; LAB_0047b0b9
    MOV EAX,0x1                         ; 0047b0e9
        ;   Label: LAB_0047b0e9
    MOV EBX,dword ptr [ESP + 0x28]      ; 0047b0ee
    MOV dword ptr [ESP + 0x34],EAX      ; 0047b0f2
    ADD ECX,EBX                         ; 0047b0f6
    MOV EAX,dword ptr [ESI + 0x100]     ; 0047b0f8
    XOR EBX,EBX                         ; 0047b0fe
    TEST EAX,EAX                        ; 0047b100
    JLE 0x0047b154                      ; 0047b102
        ;   XREF to: 0047b154 (CONDITIONAL_JUMP)  ; LAB_0047b154
    MOV EAX,dword ptr [ECX]             ; 0047b104
        ;   Label: LAB_0047b104
    SUB EAX,dword ptr [EDX]             ; 0047b106
    MOV dword ptr [ESP + 0x40],EAX      ; 0047b108
    MOV EAX,dword ptr [ECX + 0x4]       ; 0047b10c
    FILD dword ptr [ESP + 0x40]         ; 0047b10f
    SUB EAX,dword ptr [EDX + 0x4]       ; 0047b113
    FLD ST0                             ; 0047b116
    MOV dword ptr [ESP + 0x40],EAX      ; 0047b118
    FMULP                               ; 0047b11c
    FILD dword ptr [ESP + 0x40]         ; 0047b11e
    MOV EAX,dword ptr [ECX + 0x8]       ; 0047b122
    FLD ST0                             ; 0047b125
    SUB EAX,dword ptr [EDX + 0x8]       ; 0047b127
    FMULP                               ; 0047b12a
    MOV dword ptr [ESP + 0x40],EAX      ; 0047b12c
    FADDP                               ; 0047b130
    FILD dword ptr [ESP + 0x40]         ; 0047b132
    FMUL ST0                            ; 0047b136
    FADDP                               ; 0047b138
    FCOMP float ptr [ESP + 0x3c]        ; 0047b13a
    FNSTSW AX                           ; 0047b13e
    SAHF                                ; 0047b140
    JA 0x0047b0cc                       ; 0047b141
        ;   XREF to: 0047b0cc (CONDITIONAL_JUMP)  ; LAB_0047b0cc
    ADD ECX,0xc                         ; 0047b143
    INC EBX                             ; 0047b146
    MOV EAX,dword ptr [ESI + 0x100]     ; 0047b147
    ADD EDX,0xc                         ; 0047b14d
    CMP EBX,EAX                         ; 0047b150
    JL 0x0047b104                       ; 0047b152
        ;   XREF to: 0047b104 (CONDITIONAL_JUMP)  ; LAB_0047b104
    CMP dword ptr [ESP + 0x34],0x0      ; 0047b154
        ;   Label: LAB_0047b154
    JZ 0x0047b0cc                       ; 0047b159
        ;   XREF to: 0047b0cc (CONDITIONAL_JUMP)  ; LAB_0047b0cc
    MOV EAX,dword ptr [ESP + 0x30]      ; 0047b15f
    MOV dword ptr [EBP],EAX             ; 0047b163
    JMP 0x0047b0cc                      ; 0047b166
        ;   XREF to: 0047b0cc (UNCONDITIONAL_JUMP)  ; LAB_0047b0cc

