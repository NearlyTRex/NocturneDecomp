; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30(CKeyFramedModel *this_ptr)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; Local Variables:
; int              Stack[-0x28]:4  local_28
; CKeyFramedModelPart * Stack[-0x24]:4  local_24
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
; SMRGLPrimitiveQuad * Stack[-0x10]:4  local_10
;
; XREF[2]:
;   core_dmodel.cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0 at 0047b49b
;   core_dmodel.cpp_CKeyFramedModel_weldAndRemoveUnusedVertices_FUN_0047ada0 at 0047b02a
;
; Referenced Globals:
;   TerminatedCString s_Removing_unused_vertices_0062023b
;   TerminatedCString s_core_dmodel_cpp_00620257
;   TerminatedCString s_core_dmodel_cpp_0062026a
;   TerminatedCString s_CKeyFramedModel_removeUn_0062027d
;   TerminatedCString s_core_dmodel_cpp_006202d0
;   TerminatedCString s_Part_vertex_overlap_dete_006202e3
;   TerminatedCString s_core_dmodel_cpp_00620301
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   char* g_CurrentDebugFilename = 0067d200
;   CEditorTools g_CEditorToolsInstance
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_CurrentDebugLine
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00477e60
;   core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_memory.c_memset_FUN_005fde40
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047aa30
        ;   Label: core_dmodel.cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30
    PUSH EDI                            ; 0047aa31
    PUSH EBP                            ; 0047aa32
    SUB ESP,0x1c                        ; 0047aa33
    PUSH 0x62023b                       ; 0047aa36 | = "Removing unused vertices..."
    MOV EDX,dword ptr [0x00678a60]      ; 0047aa3b | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 0047aa41 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0047aa42
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0047aa47
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0047aa4a
    PUSH ECX                            ; 0047aa4e
    CALL core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40 ; 0047aa4f
        ;   XREF to: 0047bf40 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 0047aa54
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0047aa57
    MOV EBX,dword ptr [EAX + 0x104]     ; 0047aa5b
    CMP EBX,0x1                         ; 0047aa61
    JL 0x0047aa6f                       ; 0047aa64
        ;   XREF to: 0047aa6f (CONDITIONAL_JUMP)  ; LAB_0047aa6f
    CMP dword ptr [EAX + 0x100],0x1     ; 0047aa66
    JGE 0x0047aa76                      ; 0047aa6d
        ;   XREF to: 0047aa76 (CONDITIONAL_JUMP)  ; LAB_0047aa76
    ADD ESP,0x1c                        ; 0047aa6f
        ;   Label: LAB_0047aa6f
    POP EBP                             ; 0047aa72
    POP EDI                             ; 0047aa73
    POP EBX                             ; 0047aa74
    RET                                 ; 0047aa75
    PUSH 0x868                          ; 0047aa76
        ;   Label: LAB_0047aa76
    PUSH 0x620257                       ; 0047aa7b | = "..\\core\\dmodel.cpp"
    LEA EAX,[EBX*0x4 + 0x0]             ; 0047aa80
    PUSH EAX                            ; 0047aa87
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 0047aa88
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0047aa8d
    MOV dword ptr [ESP + 0xc],EAX       ; 0047aa90
    TEST EAX,EAX                        ; 0047aa94
    JNZ 0x0047aac6                      ; 0047aa96
        ;   XREF to: 0047aac6 (CONDITIONAL_JUMP)  ; LAB_0047aac6
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0047aa98
    MOV EDX,dword ptr [EAX + 0x104]     ; 0047aa9c
    PUSH EDX                            ; 0047aaa2
    MOV EDI,0x62026a                    ; 0047aaa3 | = "..\\core\\dmodel.cpp"
    MOV EBP,0x869                       ; 0047aaa8
    PUSH 0x62027d                       ; 0047aaad | = "CKeyFramedModel::removeUnusedVertices..."
    MOV dword ptr [0x02f0ca48],EDI      ; 0047aab2 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 0047aab8 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0047aabe
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0047aac3
    PUSH ESI                            ; 0047aac6
        ;   Label: LAB_0047aac6
    MOV EAX,dword ptr [ESP + 0x30]      ; 0047aac7
    MOV EAX,dword ptr [EAX + 0x104]     ; 0047aacb
    SHL EAX,0x2                         ; 0047aad1
    PUSH EAX                            ; 0047aad4
    PUSH 0x0                            ; 0047aad5
    MOV ECX,dword ptr [ESP + 0x18]      ; 0047aad7
    PUSH ECX                            ; 0047aadb
    CALL crt_memory.c_memset_FUN_005fde40 ; 0047aadc
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0047aae1
    MOV EAX,dword ptr [ESP + 0x30]      ; 0047aae4
    MOV EBX,dword ptr [EAX + 0x110]     ; 0047aae8
    XOR EBP,EBP                         ; 0047aaee
    TEST EBX,EBX                        ; 0047aaf0
    JLE 0x0047ab3c                      ; 0047aaf2
        ;   XREF to: 0047ab3c (CONDITIONAL_JUMP)  ; LAB_0047ab3c
    MOV ECX,dword ptr [ESP + 0x10]      ; 0047aaf4
    XOR EDI,EDI                         ; 0047aaf8
    MOV ESI,dword ptr [ESP + 0x30]      ; 0047aafa
        ;   Label: LAB_0047aafa
    MOV ESI,dword ptr [ESI + 0x114]     ; 0047aafe
    ADD ESI,EDI                         ; 0047ab04
    MOV EDX,dword ptr [ESI + 0x4]       ; 0047ab06
    XOR EAX,EAX                         ; 0047ab09
    TEST EDX,EDX                        ; 0047ab0b
    JLE 0x0047ab2a                      ; 0047ab0d
        ;   XREF to: 0047ab2a (CONDITIONAL_JUMP)  ; LAB_0047ab2a
    MOV EBX,ESI                         ; 0047ab0f
    MOV EDX,dword ptr [EBX + 0x18]      ; 0047ab11
        ;   Label: LAB_0047ab11
    SHL EDX,0x2                         ; 0047ab14
    ADD EDX,ECX                         ; 0047ab17
    MOV dword ptr [EDX],0x1             ; 0047ab19
    INC EAX                             ; 0047ab1f
    MOV EDX,dword ptr [ESI + 0x4]       ; 0047ab20
    ADD EBX,0xc                         ; 0047ab23
    CMP EAX,EDX                         ; 0047ab26
    JL 0x0047ab11                       ; 0047ab28
        ;   XREF to: 0047ab11 (CONDITIONAL_JUMP)  ; LAB_0047ab11
    MOV EAX,dword ptr [ESP + 0x30]      ; 0047ab2a
        ;   Label: LAB_0047ab2a
    INC EBP                             ; 0047ab2e
    MOV ESI,dword ptr [EAX + 0x110]     ; 0047ab2f
    ADD EDI,0x48                        ; 0047ab35
    CMP EBP,ESI                         ; 0047ab38
    JL 0x0047aafa                       ; 0047ab3a
        ;   XREF to: 0047aafa (CONDITIONAL_JUMP)  ; LAB_0047aafa
    MOV EAX,dword ptr [ESP + 0x30]      ; 0047ab3c
        ;   Label: LAB_0047ab3c
    XOR EDI,EDI                         ; 0047ab40
    MOV EBP,dword ptr [EAX + 0x104]     ; 0047ab42
    MOV dword ptr [ESP + 0x18],EDI      ; 0047ab48
    TEST EBP,EBP                        ; 0047ab4c
    JLE 0x0047ab7a                      ; 0047ab4e
        ;   XREF to: 0047ab7a (CONDITIONAL_JUMP)  ; LAB_0047ab7a
    MOV EAX,dword ptr [ESP + 0x10]      ; 0047ab50
    CMP dword ptr [EAX],0x0             ; 0047ab54
        ;   Label: LAB_0047ab54
    JZ 0x0047ad8b                       ; 0047ab57
        ;   XREF to: 0047ad8b (CONDITIONAL_JUMP)  ; LAB_0047ad8b
    MOV EDX,dword ptr [ESP + 0x18]      ; 0047ab5d
    MOV dword ptr [EAX],EDX             ; 0047ab61
    INC EDX                             ; 0047ab63
    MOV dword ptr [ESP + 0x18],EDX      ; 0047ab64
    MOV EDX,dword ptr [ESP + 0x30]      ; 0047ab68
        ;   Label: LAB_0047ab68
    INC EDI                             ; 0047ab6c
    MOV ECX,dword ptr [EDX + 0x104]     ; 0047ab6d
    ADD EAX,0x4                         ; 0047ab73
    CMP EDI,ECX                         ; 0047ab76
    JL 0x0047ab54                       ; 0047ab78
        ;   XREF to: 0047ab54 (CONDITIONAL_JUMP)  ; LAB_0047ab54
    MOV EDX,dword ptr [ESP + 0x30]      ; 0047ab7a
        ;   Label: LAB_0047ab7a
    MOV EAX,dword ptr [ESP + 0x18]      ; 0047ab7e
    CMP EAX,dword ptr [EDX + 0x104]     ; 0047ab82
    JGE 0x0047ad4a                      ; 0047ab88
        ;   XREF to: 0047ad4a (CONDITIONAL_JUMP)  ; LAB_0047ad4a
    MOV ESI,dword ptr [EDX + 0x110]     ; 0047ab8e
    XOR EBP,EBP                         ; 0047ab94
    TEST ESI,ESI                        ; 0047ab96
    JLE 0x0047abe1                      ; 0047ab98
        ;   XREF to: 0047abe1 (CONDITIONAL_JUMP)  ; LAB_0047abe1
    XOR ECX,ECX                         ; 0047ab9a
    MOV ESI,dword ptr [ESP + 0x30]      ; 0047ab9c
        ;   Label: LAB_0047ab9c
    MOV ESI,dword ptr [ESI + 0x114]     ; 0047aba0
    ADD ESI,ECX                         ; 0047aba6
    MOV EDI,dword ptr [ESI + 0x4]       ; 0047aba8
    XOR EAX,EAX                         ; 0047abab
    TEST EDI,EDI                        ; 0047abad
    JLE 0x0047abcf                      ; 0047abaf
        ;   XREF to: 0047abcf (CONDITIONAL_JUMP)  ; LAB_0047abcf
    MOV EDI,dword ptr [ESP + 0x10]      ; 0047abb1
    MOV EBX,ESI                         ; 0047abb5
    MOV EDX,dword ptr [EBX + 0x18]      ; 0047abb7
        ;   Label: LAB_0047abb7
    SHL EDX,0x2                         ; 0047abba
    ADD EDX,EDI                         ; 0047abbd
    MOV EDX,dword ptr [EDX]             ; 0047abbf
    MOV dword ptr [EBX + 0x18],EDX      ; 0047abc1
    INC EAX                             ; 0047abc4
    MOV EDX,dword ptr [ESI + 0x4]       ; 0047abc5
    ADD EBX,0xc                         ; 0047abc8
    CMP EAX,EDX                         ; 0047abcb
    JL 0x0047abb7                       ; 0047abcd
        ;   XREF to: 0047abb7 (CONDITIONAL_JUMP)  ; LAB_0047abb7
    MOV EAX,dword ptr [ESP + 0x30]      ; 0047abcf
        ;   Label: LAB_0047abcf
    INC EBP                             ; 0047abd3
    MOV EBX,dword ptr [EAX + 0x110]     ; 0047abd4
    ADD ECX,0x48                        ; 0047abda
    CMP EBP,EBX                         ; 0047abdd
    JL 0x0047ab9c                       ; 0047abdf
        ;   XREF to: 0047ab9c (CONDITIONAL_JUMP)  ; LAB_0047ab9c
    MOV EBX,dword ptr [ESP + 0x30]      ; 0047abe1
        ;   Label: LAB_0047abe1
    MOV EAX,dword ptr [ESP + 0x30]      ; 0047abe5
    XOR ECX,ECX                         ; 0047abe9
    MOV EBX,dword ptr [EBX + 0x10c]     ; 0047abeb
    MOV ESI,dword ptr [EAX + 0x100]     ; 0047abf1
    MOV EBP,EBX                         ; 0047abf7
    TEST ESI,ESI                        ; 0047abf9
    JLE 0x0047ac46                      ; 0047abfb
        ;   XREF to: 0047ac46 (CONDITIONAL_JUMP)  ; LAB_0047ac46
    MOV EDX,dword ptr [ESP + 0x30]      ; 0047abfd
        ;   Label: LAB_0047abfd
    MOV ESI,dword ptr [EDX + 0x104]     ; 0047ac01
    XOR EAX,EAX                         ; 0047ac07
    TEST ESI,ESI                        ; 0047ac09
    JLE 0x0047ac39                      ; 0047ac0b
        ;   XREF to: 0047ac39 (CONDITIONAL_JUMP)  ; LAB_0047ac39
    MOV EDX,dword ptr [ESP + 0x10]      ; 0047ac0d
    CMP dword ptr [EDX],0x0             ; 0047ac11
        ;   Label: LAB_0047ac11
    JL 0x0047ac24                       ; 0047ac14
        ;   XREF to: 0047ac24 (CONDITIONAL_JUMP)  ; LAB_0047ac24
    CMP EBP,EBX                         ; 0047ac16
    JNC 0x0047ac21                      ; 0047ac18
        ;   XREF to: 0047ac21 (CONDITIONAL_JUMP)  ; LAB_0047ac21
    MOV EDI,EBP                         ; 0047ac1a
    MOV ESI,EBX                         ; 0047ac1c
    MOVSD ES:EDI,ESI                    ; 0047ac1e
    MOVSD ES:EDI,ESI                    ; 0047ac1f
    MOVSD ES:EDI,ESI                    ; 0047ac20
    ADD EBP,0xc                         ; 0047ac21
        ;   Label: LAB_0047ac21
    MOV ESI,dword ptr [ESP + 0x30]      ; 0047ac24
        ;   Label: LAB_0047ac24
    ADD EBX,0xc                         ; 0047ac28
    INC EAX                             ; 0047ac2b
    MOV EDI,dword ptr [ESI + 0x104]     ; 0047ac2c
    ADD EDX,0x4                         ; 0047ac32
    CMP EAX,EDI                         ; 0047ac35
    JL 0x0047ac11                       ; 0047ac37
        ;   XREF to: 0047ac11 (CONDITIONAL_JUMP)  ; LAB_0047ac11
    MOV EAX,dword ptr [ESP + 0x30]      ; 0047ac39
        ;   Label: LAB_0047ac39
    INC ECX                             ; 0047ac3d
    CMP ECX,dword ptr [EAX + 0x100]     ; 0047ac3e
    JL 0x0047abfd                       ; 0047ac44
        ;   XREF to: 0047abfd (CONDITIONAL_JUMP)  ; LAB_0047abfd
    MOV EDX,dword ptr [ESP + 0x30]      ; 0047ac46
        ;   Label: LAB_0047ac46
    XOR EDI,EDI                         ; 0047ac4a
    MOV EAX,dword ptr [ESP + 0x18]      ; 0047ac4c
    MOV dword ptr [ESP + 0x18],EDI      ; 0047ac50
    MOV dword ptr [EDX + 0x104],EAX     ; 0047ac54
    MOV dword ptr [ESP + 0x4],EDI       ; 0047ac5a
    MOV EAX,dword ptr [EDX + 0x114]     ; 0047ac5e
    MOV EDX,dword ptr [EDX + 0x5584]    ; 0047ac64
    MOV dword ptr [ESP + 0x1c],EAX      ; 0047ac6a
    TEST EDX,EDX                        ; 0047ac6e
    JLE 0x0047ad4a                      ; 0047ac70
        ;   XREF to: 0047ad4a (CONDITIONAL_JUMP)  ; LAB_0047ad4a
    MOV EAX,dword ptr [ESP + 0x30]      ; 0047ac76
    ADD EAX,0x5588                      ; 0047ac7a
    MOV dword ptr [ESP + 0x8],EAX       ; 0047ac7f
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047ac83
        ;   Label: LAB_0047ac83
    XOR EBX,EBX                         ; 0047ac87
    MOV EBP,0xffffffff                  ; 0047ac89
    MOV dword ptr [ESP + 0x14],EBX      ; 0047ac8e
    MOV ESI,dword ptr [EAX + 0x4]       ; 0047ac92
    MOV dword ptr [ESP + 0xc],EAX       ; 0047ac95
    TEST ESI,ESI                        ; 0047ac99
    JLE 0x0047ad12                      ; 0047ac9b
        ;   XREF to: 0047ad12 (CONDITIONAL_JUMP)  ; LAB_0047ad12
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0047aca1
        ;   Label: LAB_0047aca1
    MOV EBX,dword ptr [EAX + 0x4]       ; 0047aca5
    XOR ESI,ESI                         ; 0047aca8
    TEST EBX,EBX                        ; 0047acaa
    JLE 0x0047acf3                      ; 0047acac
        ;   XREF to: 0047acf3 (CONDITIONAL_JUMP)  ; LAB_0047acf3
    MOV EDI,EAX                         ; 0047acae
    MOV ECX,dword ptr [ESP + 0x18]      ; 0047acb0
        ;   Label: LAB_0047acb0
    MOV EBX,dword ptr [EDI + 0x18]      ; 0047acb4
    CMP EBX,ECX                         ; 0047acb7
    JGE 0x0047acdd                      ; 0047acb9
        ;   XREF to: 0047acdd (CONDITIONAL_JUMP)  ; LAB_0047acdd
    MOV EAX,0x6202d0                    ; 0047acbb | = "..\\core\\dmodel.cpp"
    MOV EDX,0x8ae                       ; 0047acc0
    PUSH 0x6202e3                       ; 0047acc5 | = "Part vertex overlap detected!"
    MOV [0x02f0ca48],EAX                ; 0047acca | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 0047accf | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0047acd5
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0047acda
    CMP EBX,EBP                         ; 0047acdd
        ;   Label: LAB_0047acdd
    JL 0x0047ace4                       ; 0047acdf
        ;   XREF to: 0047ace4 (CONDITIONAL_JUMP)  ; LAB_0047ace4
    LEA EBP,[EBX + 0x1]                 ; 0047ace1
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0047ace4
        ;   Label: LAB_0047ace4
    INC ESI                             ; 0047ace8
    MOV EDX,dword ptr [EAX + 0x4]       ; 0047ace9
    ADD EDI,0xc                         ; 0047acec
    CMP ESI,EDX                         ; 0047acef
    JL 0x0047acb0                       ; 0047acf1
        ;   XREF to: 0047acb0 (CONDITIONAL_JUMP)  ; LAB_0047acb0
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0047acf3
        ;   Label: LAB_0047acf3
    MOV EAX,dword ptr [ESP + 0x14]      ; 0047acf7
    MOV EDX,dword ptr [ESP + 0xc]       ; 0047acfb
    ADD EDI,0x48                        ; 0047acff
    INC EAX                             ; 0047ad02
    MOV ECX,dword ptr [EDX + 0x4]       ; 0047ad03
    MOV dword ptr [ESP + 0x1c],EDI      ; 0047ad06
    MOV dword ptr [ESP + 0x14],EAX      ; 0047ad0a
    CMP EAX,ECX                         ; 0047ad0e
    JL 0x0047aca1                       ; 0047ad10
        ;   XREF to: 0047aca1 (CONDITIONAL_JUMP)  ; LAB_0047aca1
    MOV EDI,dword ptr [ESP + 0x18]      ; 0047ad12
        ;   Label: LAB_0047ad12
    MOV EDX,dword ptr [ESP + 0xc]       ; 0047ad16
    MOV EAX,EBP                         ; 0047ad1a
    MOV dword ptr [ESP + 0x18],EBP      ; 0047ad1c
    SUB EAX,EDI                         ; 0047ad20
    MOV EBP,dword ptr [ESP + 0x8]       ; 0047ad22
    MOV dword ptr [EDX],EAX             ; 0047ad26
    MOV EAX,dword ptr [ESP + 0x4]       ; 0047ad28
    ADD EBP,0x8                         ; 0047ad2c
    MOV EDX,dword ptr [ESP + 0x30]      ; 0047ad2f
    MOV dword ptr [ESP + 0x8],EBP       ; 0047ad33
    INC EAX                             ; 0047ad37
    MOV ECX,dword ptr [EDX + 0x5584]    ; 0047ad38
    MOV dword ptr [ESP + 0x4],EAX       ; 0047ad3e
    CMP EAX,ECX                         ; 0047ad42
    JL 0x0047ac83                       ; 0047ad44
        ;   XREF to: 0047ac83 (CONDITIONAL_JUMP)  ; LAB_0047ac83
    MOV ECX,0x620301                    ; 0047ad4a | = "..\\core\\dmodel.cpp"
        ;   Label: LAB_0047ad4a
    MOV ESI,dword ptr [ESP + 0x10]      ; 0047ad4f
    MOV EBX,0x8bc                       ; 0047ad53
    PUSH ESI                            ; 0047ad58
    MOV dword ptr [0x0067d20c],ECX      ; 0047ad59 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EBX      ; 0047ad5f | g_CurrentDebugLine
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 0047ad65
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0047ad6a
    MOV EDI,dword ptr [ESP + 0x30]      ; 0047ad6d
    PUSH EDI                            ; 0047ad71
    CALL core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40 ; 0047ad72
        ;   XREF to: 0047bf40 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 0047ad77
    PUSH EDI                            ; 0047ad7a
    CALL core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00477e60 ; 0047ad7b
        ;   XREF to: 00477e60 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00477e60(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 0047ad80
    POP ESI                             ; 0047ad83
    ADD ESP,0x1c                        ; 0047ad84
    POP EBP                             ; 0047ad87
    POP EDI                             ; 0047ad88
    POP EBX                             ; 0047ad89
    RET                                 ; 0047ad8a
    MOV dword ptr [EAX],0xffffffff      ; 0047ad8b
        ;   Label: LAB_0047ad8b
    JMP 0x0047ab68                      ; 0047ad91
        ;   XREF to: 0047ab68 (UNCONDITIONAL_JUMP)  ; LAB_0047ab68

