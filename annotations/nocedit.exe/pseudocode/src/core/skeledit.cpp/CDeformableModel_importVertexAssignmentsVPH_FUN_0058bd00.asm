; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeledit_cpp_CDeformableModel_importVertexAssignmentsVPH_FUN_0058bd00(CDeformableModel *this_ptr,char *filename,CBoneStructure *bone_structure)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; CBoneStructure * Stack[0xc]:4   bone_structure
; Local Variables:
; int[200]         Stack[-0x430]:800  aiStack_430
; undefined1[2]    Stack[-0x110]:2  local_110
; int              Stack[-0x10e]:4  local_10e
; CMatrix3x4f      Stack[-0xd8]:48  local_d8
; CMatrix3x4f      Stack[-0xa8]:48  local_a8
; int[4]           Stack[-0x78]:16  local_78
; int              Stack[-0x68]:4  local_68
; float            Stack[-0x64]:4  local_64
; CVector3f        Stack[-0x58]:12  local_58
; CVector3f        Stack[-0x4c]:12  local_4c
; undefined1[4]    Stack[-0x40]:4  local_40
; long             Stack[-0x3c]:4  local_3c
; int              Stack[-0x38]:4  local_38
; float            Stack[-0x34]:4  local_34
; int              Stack[-0x30]:4  local_30
; int              Stack[-0x2c]:4  local_2c
; _FILE *          Stack[-0x28]:4  local_28
; SBoneData *      Stack[-0x24]:4  local_24
; uchar *          Stack[-0x20]:4  local_20
; uchar *          Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; SIZE_T           Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_Importing_vertex_assignm_0064a90c
;   TerminatedCString s_core_skeledit_cpp_0064a934
;   TerminatedCString s_rb_0064a949
;   TerminatedCString s_core_skeledit_cpp_0064a94c
;   TerminatedCString s_CDeformableModel_importV_0064a961
;   TerminatedCString s_core_skeledit_cpp_0064a99c
;   TerminatedCString s_Too_many_links_in_s_d_ma_0064a9b1
;   TerminatedCString s_core_skeledit_cpp_0064a9d5
;   TerminatedCString s_vertex_d_is_influenced_b_0064a9ea
;   TerminatedCString s_core_skeledit_cpp_0064aa34
;   TerminatedCString s_Imported_vertex_assignme_0064aa49
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsInstance
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   ... and 1 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_skeledit.cpp_CBoneStructure_findBoneByName_FUN_0058ac30
;   core_xform.cpp_inverse_FUN_005f6210
;   core_xform.cpp_transformVector3x4_FUN_005f4dc0
;   crt_memory.c_memset_FUN_005fde40
;   crt_stdio.c_fread_FUN_005fd990
;   crt_stdio.c_fseek_FUN_005ffacc
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;
; *****************************************************************************

section .text

    NOP                                 ; 0058bd00
        ;   Label: core_skeledit.cpp_CDeformableModel_importVertexAssignmentsVPH_FUN_0058bd00
    NOP                                 ; 0058bd01
    NOP                                 ; 0058bd02
    NOP                                 ; 0058bd03
    NOP                                 ; 0058bd04
    NOP                                 ; 0058bd05
    NOP                                 ; 0058bd06
    NOP                                 ; 0058bd07
    NOP                                 ; 0058bd08
    NOP                                 ; 0058bd09
    PUSH EBX                            ; 0058bd0a
    PUSH ESI                            ; 0058bd0b
    PUSH EDI                            ; 0058bd0c
    PUSH EBP                            ; 0058bd0d
    MOV EBP,ESP                         ; 0058bd0e
    SUB ESP,0x420                       ; 0058bd10
    AND ESP,0xfffffff8                  ; 0058bd16
    MOV EDX,dword ptr [EBP + 0x18]      ; 0058bd19
    PUSH EDX                            ; 0058bd1c
    PUSH 0x64a90c                       ; 0058bd1d | = "Importing vertex assignments from %s..."
    MOV ECX,dword ptr [0x00678a60]      ; 0058bd22 | g_CEditorToolsPtr
    PUSH ECX                            ; 0058bd28 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0058bd29
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 0058bd2e
    PUSH 0x593                          ; 0058bd31
    PUSH 0x64a934                       ; 0058bd36 | = "..\\core\\skeledit.cpp"
    PUSH 0x64a949                       ; 0058bd3b | = "rb"
    PUSH 0x0                            ; 0058bd40
    MOV EBX,dword ptr [EBP + 0x18]      ; 0058bd42
    PUSH EBX                            ; 0058bd45
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 0058bd46
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 0058bd4b
    MOV dword ptr [ESP + 0x408],EAX     ; 0058bd4e
    TEST EAX,EAX                        ; 0058bd55
    JZ 0x0058c07b                       ; 0058bd57
        ;   XREF to: 0058c07b (CONDITIONAL_JUMP)  ; LAB_0058c07b
    MOV EDX,dword ptr [ESP + 0x408]     ; 0058bd5d
        ;   Label: LAB_0058bd5d
    PUSH EDX                            ; 0058bd64
    PUSH 0x1                            ; 0058bd65
    PUSH 0x36                           ; 0058bd67
    LEA EAX,[ESP + 0x32c]               ; 0058bd69
    PUSH EAX                            ; 0058bd70
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0058bd71
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0058bd76
    MOV ECX,dword ptr [ESP + 0x322]     ; 0058bd79
    CMP ECX,0xc8                        ; 0058bd80
    JLE 0x0058bdb5                      ; 0058bd86
        ;   XREF to: 0058bdb5 (CONDITIONAL_JUMP)  ; LAB_0058bdb5
    PUSH 0xc8                           ; 0058bd88
    PUSH ECX                            ; 0058bd8d
    MOV EAX,dword ptr [EBP + 0x18]      ; 0058bd8e
    PUSH EAX                            ; 0058bd91
    MOV EBX,0x64a99c                    ; 0058bd92 | = "..\\core\\skeledit.cpp"
    MOV ESI,0x59b                       ; 0058bd97
    PUSH 0x64a9b1                       ; 0058bd9c | = "Too many links in %s: %d, max is %d"
    MOV dword ptr [0x02f0ca48],EBX      ; 0058bda1 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0058bda7 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0058bdad
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x10                        ; 0058bdb2
    MOV EDX,dword ptr [ESP + 0x322]     ; 0058bdb5
        ;   Label: LAB_0058bdb5
    XOR ESI,ESI                         ; 0058bdbc
    TEST EDX,EDX                        ; 0058bdbe
    JLE 0x0058be50                      ; 0058bdc0
        ;   XREF to: 0058be50 (CONDITIONAL_JUMP)  ; LAB_0058be50
    MOV EBX,0x365a3e8                   ; 0058bdc6 | g_SkeletonBoneNames
    XOR EDI,EDI                         ; 0058bdcb
    MOV ECX,dword ptr [ESP + 0x408]     ; 0058bdcd
        ;   Label: LAB_0058bdcd
    PUSH ECX                            ; 0058bdd4
    PUSH 0x1                            ; 0058bdd5
    PUSH 0x4                            ; 0058bdd7
    LEA EAX,[ESP + 0x428]               ; 0058bdd9
    PUSH EAX                            ; 0058bde0
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0058bde1
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0058bde6
    PUSH 0x32                           ; 0058bde9
    PUSH 0x0                            ; 0058bdeb
    PUSH EBX                            ; 0058bded | g_SkeletonBoneNames
    CALL crt_memory.c_memset_FUN_005fde40 ; 0058bdee
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0058bdf3
    MOV EAX,dword ptr [ESP + 0x408]     ; 0058bdf6
    PUSH EAX                            ; 0058bdfd
    PUSH 0x1                            ; 0058bdfe
    MOV EDX,dword ptr [ESP + 0x424]     ; 0058be00
    PUSH EDX                            ; 0058be07
    PUSH EBX                            ; 0058be08 | g_SkeletonBoneNames
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0058be09
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0058be0e
    PUSH EBX                            ; 0058be11 | g_SkeletonBoneNames
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0058be12
    PUSH ECX                            ; 0058be15
    CALL core_skeledit.cpp_CBoneStructure_findBoneByName_FUN_0058ac30 ; 0058be16
        ;   XREF to: 0058ac30 (UNCONDITIONAL_CALL)  ; int core_skeledit.cpp_CBoneStructure_findBoneByName_FUN_0058ac30(CBoneStructure * this_ptr, char * bone_name)
    ADD ESP,0x8                         ; 0058be1b
    PUSH 0x1                            ; 0058be1e
    PUSH 0x102                          ; 0058be20
    MOV dword ptr [ESP + EDI*0x1 + 0x8],EAX ; 0058be25
    MOV EAX,dword ptr [ESP + 0x410]     ; 0058be29
    PUSH EAX                            ; 0058be30
    ADD EDI,0x4                         ; 0058be31
    CALL crt_stdio.c_fseek_FUN_005ffacc ; 0058be34
        ;   XREF to: 005ffacc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005ffacc(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 0058be39
    INC ESI                             ; 0058be3c
    MOV EDX,dword ptr [ESP + 0x322]     ; 0058be3d
    ADD EBX,0x32                        ; 0058be44
    CMP ESI,EDX                         ; 0058be47
    JL 0x0058bdcd                       ; 0058be49
        ;   XREF to: 0058bdcd (CONDITIONAL_JUMP)  ; LAB_0058bdcd
    LEA EAX,[EAX]                       ; 0058be4b
    MOV ECX,ECX                         ; 0058be4e
    MOV ECX,dword ptr [ESP + 0x408]     ; 0058be50
        ;   Label: LAB_0058be50
    PUSH ECX                            ; 0058be57
    PUSH 0x1                            ; 0058be58
    PUSH 0x4                            ; 0058be5a
    LEA EAX,[ESP + 0x3fc]               ; 0058be5c
    PUSH EAX                            ; 0058be63
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0058be64
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0058be69
    MOV EBX,dword ptr [ESP + 0x408]     ; 0058be6c
    PUSH EBX                            ; 0058be73
    PUSH 0x1                            ; 0058be74
    PUSH 0x4                            ; 0058be76
    LEA EAX,[ESP + 0x400]               ; 0058be78
    PUSH EAX                            ; 0058be7f
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0058be80
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0058be85
    PUSH 0x1                            ; 0058be88
    MOV ESI,dword ptr [ESP + 0x3f8]     ; 0058be8a
    PUSH ESI                            ; 0058be91
    PUSH EBX                            ; 0058be92
    CALL crt_stdio.c_fseek_FUN_005ffacc ; 0058be93
        ;   XREF to: 005ffacc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005ffacc(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 0058be98
    PUSH 0x1                            ; 0058be9b
    PUSH 0x30                           ; 0058be9d
    PUSH EBX                            ; 0058be9f
    CALL crt_stdio.c_fseek_FUN_005ffacc ; 0058bea0
        ;   XREF to: 005ffacc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005ffacc(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 0058bea5
    PUSH EBX                            ; 0058bea8
    PUSH 0x1                            ; 0058bea9
    PUSH 0x4                            ; 0058beab
    LEA EAX,[ESP + 0x404]               ; 0058bead
    PUSH EAX                            ; 0058beb4
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0058beb5
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0058beba
    XOR ECX,ECX                         ; 0058bebd
    MOV EBX,dword ptr [ESP + 0x3f8]     ; 0058bebf
    MOV dword ptr [ESP + 0x404],ECX     ; 0058bec6
    TEST EBX,EBX                        ; 0058becd
    JLE 0x0058c0d3                      ; 0058becf
        ;   XREF to: 0058c0d3 (CONDITIONAL_JUMP)  ; LAB_0058c0d3
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0058bed5
    ADD EAX,0x4                         ; 0058bed8
    MOV dword ptr [ESP + 0x400],ECX     ; 0058bedb
    MOV dword ptr [ESP + 0x40c],EAX     ; 0058bee2
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058bee9
        ;   Label: LAB_0058bee9
    MOV EBX,dword ptr [ESP + 0x400]     ; 0058beec
    MOV EAX,dword ptr [EAX + 0x40]      ; 0058bef3
    ADD EBX,EAX                         ; 0058bef6
    MOV dword ptr [ESP + 0x410],EBX     ; 0058bef8
    MOV EBX,dword ptr [ESP + 0x408]     ; 0058beff
    PUSH EBX                            ; 0058bf06
    PUSH 0x1                            ; 0058bf07
    PUSH 0x20                           ; 0058bf09
    LEA EAX,[ESP + 0x3c4]               ; 0058bf0b
    PUSH EAX                            ; 0058bf12
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0058bf13
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0058bf18
    MOV EAX,dword ptr [ESP + 0x3c8]     ; 0058bf1b
    TEST EAX,EAX                        ; 0058bf22
    JNZ 0x0058c10c                      ; 0058bf24
        ;   XREF to: 0058c10c (CONDITIONAL_JUMP)  ; LAB_0058c10c
    XOR EBX,EBX                         ; 0058bf2a
    IMUL EAX,EBX,0x84                   ; 0058bf2c
        ;   Label: LAB_0058bf2c
    ADD EAX,dword ptr [EBP + 0x1c]      ; 0058bf32
    CMP dword ptr [EAX + 0x24],0x0      ; 0058bf35
    JLE 0x0058c15b                      ; 0058bf39
        ;   XREF to: 0058c15b (CONDITIONAL_JUMP)  ; LAB_0058c15b
    CMP dword ptr [ESP + 0x3c8],0x0     ; 0058bf3f
    JLE 0x0058c15b                      ; 0058bf47
        ;   XREF to: 0058c15b (CONDITIONAL_JUMP)  ; LAB_0058c15b
    MOV ESI,dword ptr [ESP + 0x410]     ; 0058bf4d
    MOV byte ptr [ESI],0x2              ; 0058bf54
    MOV ESI,dword ptr [ESP + 0x3cc]     ; 0058bf57
    MOV dword ptr [ESP + 0x3fc],ESI     ; 0058bf5e
    FLD float ptr [ESP + 0x3fc]         ; 0058bf65
    FMUL ST0                            ; 0058bf6c
    MOV ESI,dword ptr [ESP + 0x410]     ; 0058bf6e
    FMUL float ptr [ESP + 0x3fc]        ; 0058bf75
    MOV byte ptr [ESI + 0x1],BL         ; 0058bf7c
    FST float ptr [ESI + 0x4]           ; 0058bf7f
    FLD1                                ; 0058bf82
    MOV AL,byte ptr [EAX + 0x24]        ; 0058bf84
    FSUBRP                              ; 0058bf87
    MOV byte ptr [ESI + 0x2],AL         ; 0058bf89
    FSTP float ptr [ESI + 0x8]          ; 0058bf8c
    MOV EBX,dword ptr [ESP + 0x410]     ; 0058bf8f
        ;   Label: LAB_0058bf8f
    MOV EAX,dword ptr [EBX + 0x10]      ; 0058bf96
    ADD EBX,0x10                        ; 0058bf99
    MOV dword ptr [ESP + 0x3d8],EAX     ; 0058bf9c
    LEA EAX,[EBX + 0x4]                 ; 0058bfa3
    MOV EAX,dword ptr [EAX]             ; 0058bfa6
    MOV dword ptr [ESP + 0x3dc],EAX     ; 0058bfa8
    LEA EAX,[EBX + 0x8]                 ; 0058bfaf
    MOV EAX,dword ptr [EAX]             ; 0058bfb2
    XOR ESI,ESI                         ; 0058bfb4
    MOV dword ptr [ESP + 0x3e0],EAX     ; 0058bfb6
    MOV EAX,dword ptr [ESP + 0x410]     ; 0058bfbd
    MOV dword ptr [ESP + 0x418],ESI     ; 0058bfc4
    MOV dword ptr [ESP + 0x414],EAX     ; 0058bfcb
    MOV ESI,dword ptr [ESP + 0x410]     ; 0058bfd2
        ;   Label: LAB_0058bfd2
    XOR EAX,EAX                         ; 0058bfd9
    MOV EDI,dword ptr [ESP + 0x418]     ; 0058bfdb
    MOV AL,byte ptr [ESI]               ; 0058bfe2
    CMP EAX,EDI                         ; 0058bfe4
    JLE 0x0058c0a4                      ; 0058bfe6
        ;   XREF to: 0058c0a4 (CONDITIONAL_JUMP)  ; LAB_0058c0a4
    MOV ESI,dword ptr [ESP + 0x414]     ; 0058bfec
    XOR EAX,EAX                         ; 0058bff3
    MOV AL,byte ptr [ESI + 0x1]         ; 0058bff5
    IMUL EAX,EAX,0x84                   ; 0058bff8
    ADD EAX,dword ptr [ESP + 0x40c]     ; 0058bffe
    ADD EAX,0x54                        ; 0058c005
    PUSH EAX                            ; 0058c008
    LEA ESI,[ESP + 0x35c]               ; 0058c009
    CALL core_xform.cpp_inverse_FUN_005f6210 ; 0058c010
        ;   XREF to: 005f6210 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_inverse_FUN_005f6210(CMatrix3x4f * matrix_in, CMatrix3x4f * matrix_out)
    ADD ESP,0x4                         ; 0058c015
    LEA EAX,[ESP + 0x388]               ; 0058c018
    LEA EDI,[ESP + 0x388]               ; 0058c01f
    PUSH EAX                            ; 0058c026
    LEA EAX,[ESP + 0x3dc]               ; 0058c027
    JMP 0x03fc3e88                      ; 0058c02e
        ;   XREF to: 03fc3e88 (UNCONDITIONAL_JUMP)  ; LAB_03fc3e88
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 0058c045
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
        ;   Label: LAB_0058c045
    ADD ESP,0xc                         ; 0058c04a
    CMP EBX,EAX                         ; 0058c04d
    JNZ 0x0058c174                      ; 0058c04f
        ;   XREF to: 0058c174 (CONDITIONAL_JUMP)  ; LAB_0058c174
    MOV ECX,dword ptr [ESP + 0x414]     ; 0058c055
        ;   Label: LAB_0058c055
    MOV ESI,dword ptr [ESP + 0x418]     ; 0058c05c
    ADD EBX,0xc                         ; 0058c063
    INC ECX                             ; 0058c066
    INC ESI                             ; 0058c067
    MOV dword ptr [ESP + 0x414],ECX     ; 0058c068
    MOV dword ptr [ESP + 0x418],ESI     ; 0058c06f
    JMP 0x0058bfd2                      ; 0058c076
        ;   XREF to: 0058bfd2 (UNCONDITIONAL_JUMP)  ; LAB_0058bfd2
    PUSH EBX                            ; 0058c07b
        ;   Label: LAB_0058c07b
    MOV ESI,0x64a94c                    ; 0058c07c | = "..\\core\\skeledit.cpp"
    MOV EDI,0x594                       ; 0058c081
    PUSH 0x64a961                       ; 0058c086 | = "CDeformableModel::importVertexAssignm..."
    MOV dword ptr [0x02f0ca48],ESI      ; 0058c08b | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 0058c091 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0058c097
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0058c09c
    JMP 0x0058bd5d                      ; 0058c09f
        ;   XREF to: 0058bd5d (UNCONDITIONAL_JUMP)  ; LAB_0058bd5d
    MOV ESI,dword ptr [ESP + 0x400]     ; 0058c0a4
        ;   Label: LAB_0058c0a4
    MOV EDI,dword ptr [ESP + 0x404]     ; 0058c0ab
    MOV EDX,dword ptr [ESP + 0x3f8]     ; 0058c0b2
    ADD ESI,0x34                        ; 0058c0b9
    INC EDI                             ; 0058c0bc
    MOV dword ptr [ESP + 0x400],ESI     ; 0058c0bd
    MOV dword ptr [ESP + 0x404],EDI     ; 0058c0c4
    CMP EDI,EDX                         ; 0058c0cb
    JL 0x0058bee9                       ; 0058c0cd
        ;   XREF to: 0058bee9 (CONDITIONAL_JUMP)  ; LAB_0058bee9
    PUSH 0x5f9                          ; 0058c0d3
        ;   Label: LAB_0058c0d3
    PUSH 0x64aa34                       ; 0058c0d8 | = "..\\core\\skeledit.cpp"
    MOV EDI,dword ptr [ESP + 0x410]     ; 0058c0dd
    PUSH EDI                            ; 0058c0e4
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0058c0e5
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0058c0ea
    MOV EAX,dword ptr [EBP + 0x18]      ; 0058c0ed
    PUSH EAX                            ; 0058c0f0
    PUSH 0x64aa49                       ; 0058c0f1 | = "Imported vertex assignments from %s OK"
    MOV EDX,dword ptr [0x00678a60]      ; 0058c0f6 | g_CEditorToolsPtr
    PUSH EDX                            ; 0058c0fc | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0058c0fd
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 0058c102
    MOV ESP,EBP                         ; 0058c105
    POP EBP                             ; 0058c107
    POP EDI                             ; 0058c108
    POP ESI                             ; 0058c109
    POP EBX                             ; 0058c10a
    RET                                 ; 0058c10b
    JL 0x0058c152                       ; 0058c10c
        ;   XREF to: 0058c152 (CONDITIONAL_JUMP)  ; LAB_0058c152
        ;   Label: LAB_0058c10c
    MOV EBX,dword ptr [ESP + EAX*0x4]   ; 0058c10e
        ;   Label: LAB_0058c10e
    TEST EBX,EBX                        ; 0058c111
    JGE 0x0058bf2c                      ; 0058c113
        ;   XREF to: 0058bf2c (CONDITIONAL_JUMP)  ; LAB_0058bf2c
    IMUL EAX,EAX,0x32                   ; 0058c119
    ADD EAX,0x365a3e8                   ; 0058c11c | g_SkeletonBoneNames
    PUSH EAX                            ; 0058c121
    MOV ESI,dword ptr [ESP + 0x408]     ; 0058c122
    PUSH ESI                            ; 0058c129
    MOV EDX,0x64a9d5                    ; 0058c12a | = "..\\core\\skeledit.cpp"
    MOV ECX,0x5cc                       ; 0058c12f
    PUSH 0x64a9ea                       ; 0058c134 | = "vertex %d is influenced by bone %s, b..."
    MOV dword ptr [0x02f0ca48],EDX      ; 0058c139 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0058c13f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0058c145
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 0058c14a
    JMP 0x0058bf2c                      ; 0058c14d
        ;   XREF to: 0058bf2c (UNCONDITIONAL_JUMP)  ; LAB_0058bf2c
    MOV EAX,dword ptr [ESP + 0x3b8]     ; 0058c152
        ;   Label: LAB_0058c152
    JMP 0x0058c10e                      ; 0058c159
        ;   XREF to: 0058c10e (UNCONDITIONAL_JUMP)  ; LAB_0058c10e
    MOV EAX,dword ptr [ESP + 0x410]     ; 0058c15b
        ;   Label: LAB_0058c15b
    MOV dword ptr [EAX + 0x4],0x3f800000 ; 0058c162
    MOV byte ptr [EAX],0x1              ; 0058c169
    MOV byte ptr [EAX + 0x1],BL         ; 0058c16c
    JMP 0x0058bf8f                      ; 0058c16f
        ;   XREF to: 0058bf8f (UNCONDITIONAL_JUMP)  ; LAB_0058bf8f
    MOV EDX,dword ptr [EAX]             ; 0058c174
        ;   Label: LAB_0058c174
    MOV dword ptr [EBX],EDX             ; 0058c176
    MOV EDX,dword ptr [EAX + 0x4]       ; 0058c178
    MOV dword ptr [EBX + 0x4],EDX       ; 0058c17b
    MOV EDX,dword ptr [EAX + 0x8]       ; 0058c17e
    MOV dword ptr [EBX + 0x8],EDX       ; 0058c181
    JMP 0x0058c055                      ; 0058c184
        ;   XREF to: 0058c055 (UNCONDITIONAL_JUMP)  ; LAB_0058c055
    MOV ECX,0xc                         ; 03fc3e88
        ;   Label: LAB_03fc3e88
    PUSH EAX                            ; 03fc3e8d
    LEA EAX,[ESP + 0x3ec]               ; 03fc3e8e
    LEA ESI,[ESP + 0x360]               ; 03fc3e95
    PUSH EAX                            ; 03fc3e9c
    MOV ECX,dword ptr [ESI]             ; 03fc3e9d
    MOV dword ptr [EDI],ECX             ; 03fc3e9f
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc3ea1
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc3ea4
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc3ea7
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc3eaa
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc3ead
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc3eb0
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc3eb3
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc3eb6
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc3eb9
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc3ebc
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc3ebf
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc3ec2
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc3ec5
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc3ec8
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc3ecb
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc3ece
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc3ed1
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc3ed4
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc3ed7
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc3eda
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc3edd
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc3ee0
    ADD ESI,0x30                        ; 03fc3ee3
    ADD EDI,0x30                        ; 03fc3ee6
    XOR ECX,ECX                         ; 03fc3ee9
    JMP 0x0058c045                      ; 03fc3eeb
        ;   XREF to: 0058c045 (UNCONDITIONAL_JUMP)  ; LAB_0058c045

