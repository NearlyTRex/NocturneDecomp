; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl char * shape_edittool.cpp_CEditorTools_getClipboardText_FUN_004a1b30(CEditorTools * this_ptr)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_script.cpp_CScript_editorAction_FUN_00564820 at 00564bb6
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 at 00598545
;   shape_edittool.cpp_CInputString_pasteFromClipboard_FUN_0049d660 at 0049d66d
;
; Referenced Globals:
;   CloseClipboard* CloseClipboard = 00211a68
;   GetClipboardData* GetClipboardData = 00211ad0
;   OpenClipboard* OpenClipboard = 00211b60
;   TerminatedCString s_shape_edittool_cpp_0062357d
;   char s_EmptyChar_00623593 = \x00
;   char* g_ClipboardBackupText
;   HWND g_MainWindowHandle
;
; Called Functions:
;   CloseClipboard
;   GetClipboardData
;   OpenClipboard
;   shape_memdbg.cpp_debugRealloc_FUN_0050f540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a1b30
        ;   Label: shape_edittool.cpp_CEditorTools_getClipboardText_FUN_004a1b30
    MOV EDX,dword ptr [0x03f98468]      ; 004a1b31 | HWND g_MainWindowHandle
    PUSH EDX                            ; 004a1b37
    CALL dword ptr CS:[0x6114cc]        ; 004a1b38 | OpenClipboard * OpenClipboard
    TEST EAX,EAX                        ; 004a1b3f
    JNZ 0x004a1b54                      ; 004a1b41 | LAB_004a1b54
        ;   XREF to: 004a1b54 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [0x02cf1cd8]      ; 004a1b43 | char * g_ClipboardBackupText
        ;   Label: LAB_004a1b43
    TEST EBX,EBX                        ; 004a1b49
    JNZ 0x004a1bb6                      ; 004a1b4b | LAB_004a1bb6
        ;   XREF to: 004a1bb6 (CONDITIONAL_JUMP)
    MOV EAX,0x623593                    ; 004a1b4d | char s_EmptyChar_00623593
    POP EBX                             ; 004a1b52
    RET                                 ; 004a1b53
    PUSH EDI                            ; 004a1b54
        ;   Label: LAB_004a1b54
    PUSH ESI                            ; 004a1b55
    PUSH 0x1                            ; 004a1b56
    CALL dword ptr CS:[0x6114a8]        ; 004a1b58 | GetClipboardData * GetClipboardData
    MOV ESI,EAX                         ; 004a1b5f
    TEST EAX,EAX                        ; 004a1b61
    JZ 0x004a1bab                       ; 004a1b63 | LAB_004a1bab
        ;   XREF to: 004a1bab (CONDITIONAL_JUMP)
    MOV EDI,EAX                         ; 004a1b65
    SUB ECX,ECX                         ; 004a1b67
    DEC ECX                             ; 004a1b69
    XOR EAX,EAX                         ; 004a1b6a
    SCASB.REPNE ES:EDI                  ; 004a1b6c
    NOT ECX                             ; 004a1b6e
    DEC ECX                             ; 004a1b70
    PUSH 0x94e                          ; 004a1b71
    PUSH 0x62357d                       ; 004a1b76 | = "..\\shape\\edittool.cpp" | s_shape_edittool_cpp_0062357d = ..\shape\edittool.cpp
    LEA EBX,[ECX + 0x1]                 ; 004a1b7b
    PUSH EBX                            ; 004a1b7e
    MOV ECX,dword ptr [0x02cf1cd8]      ; 004a1b7f | char * g_ClipboardBackupText
    PUSH ECX                            ; 004a1b85
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 004a1b86 | void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004a1b8b
    MOV [0x02cf1cd8],EAX                ; 004a1b8e | char * g_ClipboardBackupText
    TEST EAX,EAX                        ; 004a1b93
    JZ 0x004a1bab                       ; 004a1b95 | LAB_004a1bab
        ;   XREF to: 004a1bab (CONDITIONAL_JUMP)
    MOV ECX,EBX                         ; 004a1b97
    MOV EDI,EAX                         ; 004a1b99
    PUSH EDI                            ; 004a1b9b
    MOV EAX,ECX                         ; 004a1b9c
    SHR ECX,0x2                         ; 004a1b9e
    MOVSD.REP ES:EDI,ESI                ; 004a1ba1
    MOV CL,AL                           ; 004a1ba3
    AND CL,0x3                          ; 004a1ba5
    MOVSB.REP ES:EDI,ESI                ; 004a1ba8
    POP EDI                             ; 004a1baa
    CALL dword ptr CS:[0x611490]        ; 004a1bab | CloseClipboard * CloseClipboard
        ;   Label: LAB_004a1bab
    POP ESI                             ; 004a1bb2
    POP EDI                             ; 004a1bb3
    JMP 0x004a1b43                      ; 004a1bb4 | LAB_004a1b43
        ;   XREF to: 004a1b43 (UNCONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 004a1bb6
        ;   Label: LAB_004a1bb6
    POP EBX                             ; 004a1bb8
    RET                                 ; 004a1bb9

