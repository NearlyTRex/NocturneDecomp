; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_fileio_cpp_logOnAsVersionControlUser_FUN_004b2770(void)
;
;
; XREF[6]:
;   engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920 at 004b39ef
;   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 at 004b463e
;   engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0 at 004b35e5
;   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 at 004bb716
;   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 at 004ba932
;   engine_fileio.cpp_logOnAsVersionControlUserThunk_FUN_004bcea0 at 004bcea0
;
; Referenced Globals:
;   IMPERSONATE_LOGGED_ON_USER_FUNC* g_ImpersonateLoggedOnUserFunc = 002119b4
;   LOGON_USER_A_FUNC* g_LogonUserAFunc = 002119ce
;   CLOSE_HANDLE_FUNC* g_CloseHandleFunc = 00211c38
;   GET_LAST_ERROR_FUNC* g_GetLastErrorFunc = 00211f22
;   TerminatedCString s_engine_fileio_cpp_006261fd
;   TerminatedCString s_fileManager_logOnAsVersi_00626212
;   TerminatedCString s_Can_t_log_on_to_server_a_0062624e
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsInstance
;   undefined4 g_VersionControlSession.network_username[0]
;   undefined4 g_VersionControlSession.password[0]
;   undefined4 g_VersionControlSession.domain[0]
;   undefined4 g_VersionControlSessionHandle
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004b2770
        ;   Label: engine_fileio.cpp_logOnAsVersionControlUser_FUN_004b2770
    PUSH EDI                            ; 004b2771
    PUSH EBP                            ; 004b2772
    CMP byte ptr [0x02d12bf8],0x0       ; 004b2773 | g_VersionControlSession.network_username[0]
    JZ 0x004b2819                       ; 004b277a
        ;   XREF to: 004b2819 (CONDITIONAL_JUMP)  ; LAB_004b2819
    CMP dword ptr [0x02d12d2c],0x0      ; 004b2780 | g_VersionControlSessionHandle
    JZ 0x004b27ae                       ; 004b2787
        ;   XREF to: 004b27ae (CONDITIONAL_JUMP)  ; LAB_004b27ae
    PUSH EBX                            ; 004b2789
    MOV ECX,0x6261fd                    ; 004b278a | = "..\\engine\\fileio.cpp"
    MOV EBX,0x215                       ; 004b278f
    PUSH 0x626212                       ; 004b2794 | = "fileManager::logOnAsVersionControlUse..."
    MOV dword ptr [0x02f0ca48],ECX      ; 004b2799 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 004b279f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b27a5
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004b27aa
    POP EBX                             ; 004b27ad
    PUSH 0x2d12d2c                      ; 004b27ae | g_VersionControlSessionHandle
        ;   Label: LAB_004b27ae
    PUSH 0x0                            ; 004b27b3
    PUSH 0x2                            ; 004b27b5
    PUSH 0x2d12c60                      ; 004b27b7 | g_VersionControlSession.password[0]
    PUSH 0x2d12cc8                      ; 004b27bc | g_VersionControlSession.domain[0]
    PUSH 0x2d12bf8                      ; 004b27c1 | g_VersionControlSession.network_username[0]
    CALL dword ptr CS:[0x611468]        ; 004b27c6 | g_LogonUserAFunc
    TEST EAX,EAX                        ; 004b27cd
    JZ 0x004b27f9                       ; 004b27cf
        ;   XREF to: 004b27f9 (CONDITIONAL_JUMP)  ; LAB_004b27f9
    MOV ESI,dword ptr [0x02d12d2c]      ; 004b27d1 | g_VersionControlSessionHandle
    PUSH ESI                            ; 004b27d7
    CALL dword ptr CS:[0x611464]        ; 004b27d8 | g_ImpersonateLoggedOnUserFunc
    TEST EAX,EAX                        ; 004b27df
    JNZ 0x004b2819                      ; 004b27e1
        ;   XREF to: 004b2819 (CONDITIONAL_JUMP)  ; LAB_004b2819
    MOV EDI,dword ptr [0x02d12d2c]      ; 004b27e3 | g_VersionControlSessionHandle
    PUSH EDI                            ; 004b27e9
    XOR EBP,EBP                         ; 004b27ea
    CALL dword ptr CS:[0x611504]        ; 004b27ec | g_CloseHandleFunc
    MOV dword ptr [0x02d12d2c],EBP      ; 004b27f3 | g_VersionControlSessionHandle
    CALL dword ptr CS:[0x6115a4]        ; 004b27f9 | g_GetLastErrorFunc
        ;   Label: LAB_004b27f9
    PUSH 0x62624e                       ; 004b2800 | = "Can't log on to server as version con..."
    MOV EAX,[0x00678a60]                ; 004b2805 | g_CEditorToolsPtr
    PUSH EAX                            ; 004b280a | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b280b
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004b2810
    XOR EAX,EAX                         ; 004b2813
    POP EBP                             ; 004b2815
    POP EDI                             ; 004b2816
    POP ESI                             ; 004b2817
    RET                                 ; 004b2818
    MOV EAX,0x1                         ; 004b2819
        ;   Label: LAB_004b2819
    POP EBP                             ; 004b281e
    POP EDI                             ; 004b281f
    POP ESI                             ; 004b2820
    RET                                 ; 004b2821

