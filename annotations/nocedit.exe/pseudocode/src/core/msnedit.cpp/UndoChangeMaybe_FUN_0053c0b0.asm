; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_msnedit.cpp_UndoChangeMaybe_FUN_0053c0b0()
;
;
; XREF[1]:
;   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 at 00539cb3
;
; Referenced Globals:
;   TerminatedCString s_core_msnedit_cpp_0063c7eb
;   TerminatedCString s_rt_0063c7ff
;   TerminatedCString s_Can_t_open_s_0063c802
;   TerminatedCString s_core_msnedit_cpp_0063c811
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   TerminatedCString s_UNDO_TMP_00680800
;   CEditorTools g_CEditorToolsPtr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_load_FUN_0040b050
;   core_actor.cpp_syncActorTypeIDs_FUN_0040c7c0
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053c0b0
        ;   Label: core_msnedit.cpp_UndoChangeMaybe_FUN_0053c0b0
    PUSH ESI                            ; 0053c0b1
    MOV ESI,dword ptr [ESP + 0xc]       ; 0053c0b2
    CMP dword ptr [ESI + 0x28],0x0      ; 0053c0b6
    JNZ 0x0053c0bf                      ; 0053c0ba
        ;   XREF to: 0053c0bf (CONDITIONAL_JUMP)  ; LAB_0053c0bf
    POP ESI                             ; 0053c0bc
    POP EBX                             ; 0053c0bd
    RET                                 ; 0053c0be
    CALL core_actor.cpp_syncActorTypeIDs_FUN_0040c7c0 ; 0053c0bf
        ;   XREF to: 0040c7c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_syncActorTypeIDs_FUN_0040c7c0()
        ;   Label: LAB_0053c0bf
    PUSH 0x9ca                          ; 0053c0c4
    PUSH 0x63c7eb                       ; 0053c0c9 | = "..\\core\\msnedit.cpp"
    PUSH 0x63c7ff                       ; 0053c0ce | = "rt"
    PUSH 0x0                            ; 0053c0d3
    PUSH 0x680800                       ; 0053c0d5 | = "$$UNDO$$.TMP"
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 0053c0da
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    MOV EBX,EAX                         ; 0053c0df
    ADD ESP,0x14                        ; 0053c0e1
    TEST EAX,EAX                        ; 0053c0e4
    JNZ 0x0053c104                      ; 0053c0e6
        ;   XREF to: 0053c104 (CONDITIONAL_JUMP)  ; LAB_0053c104
    PUSH 0x680800                       ; 0053c0e8 | = "$$UNDO$$.TMP"
    PUSH 0x63c802                       ; 0053c0ed | = "Can't open %s."
    MOV EBX,dword ptr [0x00678a60]      ; 0053c0f2 | g_CEditorToolsPtr
    PUSH EBX                            ; 0053c0f8 | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0053c0f9
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 0053c0fe
    POP ESI                             ; 0053c101
    POP EBX                             ; 0053c102
    RET                                 ; 0053c103
    PUSH EAX                            ; 0053c104
        ;   Label: LAB_0053c104
    MOV ECX,dword ptr [ESI + 0x28]      ; 0053c105
    PUSH ECX                            ; 0053c108
    CALL core_actor.cpp_CDemonActor_load_FUN_0040b050 ; 0053c109
        ;   XREF to: 0040b050 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_load_FUN_0040b050(CDemonActor * this_ptr, FILE * file_handle)
    ADD ESP,0x8                         ; 0053c10e
    MOV EAX,dword ptr [ESI + 0x28]      ; 0053c111
    PUSH EAX                            ; 0053c114
    MOV ESI,dword ptr [EAX + 0x154]     ; 0053c115
    CALL dword ptr [ESI]                ; 0053c11b
    ADD ESP,0x4                         ; 0053c11d
    PUSH 0x9d1                          ; 0053c120
    PUSH 0x63c811                       ; 0053c125 | = "..\\core\\msnedit.cpp"
    PUSH EBX                            ; 0053c12a
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0053c12b
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0053c130
    POP ESI                             ; 0053c133
    POP EBX                             ; 0053c134
    RET                                 ; 0053c135

