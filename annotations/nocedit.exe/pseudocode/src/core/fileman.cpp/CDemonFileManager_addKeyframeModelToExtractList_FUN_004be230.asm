; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fileman_cpp_CDemonFileManager_addKeyframeModelToExtractList_FUN_004be230(CDemonFileManager *this_ptr,char *filename)
;
; Parameters:
; CDemonFileManager * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; XREF[1]:
;   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 at 004bdf52
;
; Referenced Globals:
;   TerminatedCString s_Adding_files_for_s_to_ex_006297fa
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsInstance
;
; Called Functions:
;   core_dmodel.cpp_writeModelDependencies_FUN_0047ee30
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004be230
        ;   Label: core_fileman.cpp_CDemonFileManager_addKeyframeModelToExtractList_FUN_004be230
    PUSH ESI                            ; 004be231
    MOV EDX,dword ptr [ESP + 0x10]      ; 004be232
    PUSH EDX                            ; 004be236
    PUSH 0x6297fa                       ; 004be237 | = "Adding files for %s to extract list..."
    MOV ECX,dword ptr [0x00678a60]      ; 004be23c | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 004be242 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004be243
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0xc                         ; 004be248
    MOV EBX,dword ptr [ESP + 0x10]      ; 004be24b
    MOV EAX,dword ptr [ESP + 0xc]       ; 004be24f
    PUSH EBX                            ; 004be253
    MOV ESI,dword ptr [EAX]             ; 004be254
    PUSH ESI                            ; 004be256
    CALL core_dmodel.cpp_writeModelDependencies_FUN_0047ee30 ; 004be257
        ;   XREF to: 0047ee30 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_writeModelDependencies_FUN_0047ee30(_FILE * dependency_file, char * model_filename)
    ADD ESP,0x8                         ; 004be25c
    POP ESI                             ; 004be25f
    POP EBX                             ; 004be260
    RET                                 ; 004be261

