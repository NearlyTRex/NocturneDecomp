; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_fileio.cpp_CFileManager_verifyPodCRC_FUN_004b7c90(CFileManager * this_ptr, char * pod_filename)
;
; Parameters:
; CFileManager *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   pod_filename
; Local Variables:
; undefined1       Stack[-0x108]:1  local_108
; undefined1       Stack[-0x107]:1  local_107
;
; XREF[2]:
;   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 at 004be485
;   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 at 004b6bb1
;
; Referenced Globals:
;   TerminatedCString s_pod_006280ad
;   TerminatedCString s_Select_POD_file_to_check_006280b3
;   TerminatedCString s_WARNING_CRC_is_invalid_T_006280cc
;   TerminatedCString s_CRC_check_is_valid_006280ff
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CDemonPod* g_CDemonPodPtr = 030e5090
;   CEditorTools g_CEditorToolsPtr
;   CDemonPod g_CDemonPodInstance
;
; Called Functions:
;   engine_pod.cpp_CPod_verifyIntegrity_FUN_00551280
;   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
;   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004b7c90
        ;   Label: engine_fileio.cpp_CFileManager_verifyPodCRC_FUN_004b7c90
    PUSH EDI                            ; 004b7c91
    SUB ESP,0x100                       ; 004b7c92
    MOV ESI,dword ptr [ESP + 0x110]     ; 004b7c98
    TEST ESI,ESI                        ; 004b7c9f
    JNZ 0x004b7ccf                      ; 004b7ca1 | LAB_004b7ccf
        ;   XREF to: 004b7ccf (CONDITIONAL_JUMP)
    PUSH ESI                            ; 004b7ca3
    LEA EAX,[ESP + 0x4]                 ; 004b7ca4
    PUSH EAX                            ; 004b7ca8
    PUSH 0x6280ad                       ; 004b7ca9 | = "*.pod" | s_pod_006280ad = *.pod
    PUSH 0x6280b3                       ; 004b7cae | = "Select POD file to check" | s_Select_POD_file_to_check_006280b3 = Select POD file to check
    MOV EDX,dword ptr [0x00678a60]      ; 004b7cb3 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH EDX                            ; 004b7cb9 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420 ; 004b7cba | bool shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420(CEditorTools * this_ptr, char * file_pattern, bool include_files, char * initial_path)
        ;   XREF to: 0049f420 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004b7cbf
    TEST EAX,EAX                        ; 004b7cc2
    JNZ 0x004b7ceb                      ; 004b7cc4 | LAB_004b7ceb
        ;   XREF to: 004b7ceb (CONDITIONAL_JUMP)
    ADD ESP,0x100                       ; 004b7cc6
    POP EDI                             ; 004b7ccc
    POP ESI                             ; 004b7ccd
    RET                                 ; 004b7cce
    MOV EDI,ESP                         ; 004b7ccf
        ;   Label: LAB_004b7ccf
    PUSH EDI                            ; 004b7cd1
    MOV AL,byte ptr [ESI]               ; 004b7cd2
        ;   Label: LAB_004b7cd2
    MOV byte ptr [EDI],AL               ; 004b7cd4
    CMP AL,0x0                          ; 004b7cd6
    JZ 0x004b7cea                       ; 004b7cd8 | LAB_004b7cea
        ;   XREF to: 004b7cea (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 004b7cda
    ADD ESI,0x2                         ; 004b7cdd
    MOV byte ptr [EDI + 0x1],AL         ; 004b7ce0
    ADD EDI,0x2                         ; 004b7ce3
    CMP AL,0x0                          ; 004b7ce6
    JNZ 0x004b7cd2                      ; 004b7ce8 | LAB_004b7cd2
        ;   XREF to: 004b7cd2 (CONDITIONAL_JUMP)
    POP EDI                             ; 004b7cea
        ;   Label: LAB_004b7cea
    MOV EAX,ESP                         ; 004b7ceb
        ;   Label: LAB_004b7ceb
    PUSH EAX                            ; 004b7ced
    MOV ECX,dword ptr [0x00680cdc]      ; 004b7cee | CDemonPod g_CDemonPodInstance | CDemonPod * g_CDemonPodPtr
    PUSH ECX                            ; 004b7cf4 | CDemonPod g_CDemonPodInstance
    CALL engine_pod.cpp_CPod_verifyIntegrity_FUN_00551280 ; 004b7cf5 | int engine_pod.cpp_CPod_verifyIntegrity_FUN_00551280(CPod * this_ptr, char * pod_filename)
        ;   XREF to: 00551280 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b7cfa
    TEST EAX,EAX                        ; 004b7cfd
    JNZ 0x004b7d20                      ; 004b7cff | LAB_004b7d20
        ;   XREF to: 004b7d20 (CONDITIONAL_JUMP)
    PUSH EAX                            ; 004b7d01
    PUSH EAX                            ; 004b7d02
    PUSH 0x6280cc                       ; 004b7d03 | = "WARNING!  CRC is invalid.  This may b..." | s_WARNING_CRC_is_invalid_T_006280cc = WARNING!  CRC is invalid.  This may be an old .POD
    MOV ESI,dword ptr [0x00678a60]      ; 004b7d08 | CEditorTools * g_CEditorToolsPtr
    PUSH ESI                            ; 004b7d0e | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 004b7d0f | void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004b7d14
    ADD ESP,0x100                       ; 004b7d17
    POP EDI                             ; 004b7d1d
    POP ESI                             ; 004b7d1e
    RET                                 ; 004b7d1f
    PUSH EBX                            ; 004b7d20
        ;   Label: LAB_004b7d20
    PUSH 0x0                            ; 004b7d21
    PUSH 0x0                            ; 004b7d23
    PUSH 0x6280ff                       ; 004b7d25 | = "CRC check is valid" | s_CRC_check_is_valid_006280ff = CRC check is valid
    MOV EBX,dword ptr [0x00678a60]      ; 004b7d2a | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH EBX                            ; 004b7d30 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 004b7d31 | void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004b7d36
    POP EBX                             ; 004b7d39
    ADD ESP,0x100                       ; 004b7d3a
    POP EDI                             ; 004b7d40
    POP ESI                             ; 004b7d41
    RET                                 ; 004b7d42

