; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_setClipboardText_FUN_004a1bc0(CEditorTools *this_ptr,char *text_data)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text_data
;
; XREF[7]:
;   core_msnedit.cpp_CDemonMission_editActorsInSet_FUN_005390f0 at 0053ae4c
;   core_script.cpp_CScript_editorAction_FUN_00564820 at 00564b68
;   core_skeledit.cpp_CBoneStructure_showBoneHierarchy_FUN_0058afe0 at 0058b14c
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 at 005986b2
;   core_skeledit.cpp_CSkeleton_importSkeletonFile_FUN_00592690 at 00593839
;   shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0049d610 at 0049d649
;   shape_edittool.cpp_CStrList_copyToClipboard_FUN_004a3270 at 004a332e
;
; Referenced Globals:
;   CLOSE_CLIPBOARD_FUNC* g_CloseClipboardFunc = 00211a68
;   OPEN_CLIPBOARD_FUNC* g_OpenClipboardFunc = 00211b60
;   SET_CLIPBOARD_DATA_FUNC* g_SetClipboardDataFunc = 00211ba4
;   GLOBAL_ALLOC_FUNC* g_GlobalAllocFunc = 00211fd8
;   GLOBAL_FREE_FUNC* g_GlobalFreeFunc = 00211fe6
;   GLOBAL_LOCK_FUNC* g_GlobalLockFunc = 00211ff4
;   GLOBAL_UNLOCK_FUNC* g_GlobalUnlockFunc = 00212018
;   char s_EmptyChar_00623594 = \x00
;   TerminatedCString s_shape_edittool_cpp_00623595
;   char* g_ClipboardBackupText
;   HWND g_MainWindowHandle
;
; Called Functions:
;   CloseClipboard
;   GlobalAlloc
;   GlobalFree
;   GlobalLock
;   GlobalUnlock
;   OpenClipboard
;   SetClipboardData
;   shape_memdbg.cpp_debugRealloc_FUN_0050f540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a1bc0
        ;   Label: shape_edittool.cpp_CEditorTools_setClipboardText_FUN_004a1bc0
    PUSH ESI                            ; 004a1bc1
    PUSH EDI                            ; 004a1bc2
    PUSH EBP                            ; 004a1bc3
    CMP dword ptr [ESP + 0x18],0x0      ; 004a1bc4
    JNZ 0x004a1bd3                      ; 004a1bc9
        ;   XREF to: 004a1bd3 (CONDITIONAL_JUMP)  ; LAB_004a1bd3
    MOV dword ptr [ESP + 0x18],0x623594 ; 004a1bcb | s_EmptyChar_00623594
    MOV EDI,dword ptr [ESP + 0x18]      ; 004a1bd3
        ;   Label: LAB_004a1bd3
    SUB ECX,ECX                         ; 004a1bd7
    DEC ECX                             ; 004a1bd9
    XOR EAX,EAX                         ; 004a1bda
    SCASB.REPNE ES:EDI                  ; 004a1bdc | s_EmptyChar_00623594 | = "..\\shape\\edittool.cpp"
    NOT ECX                             ; 004a1bde
    DEC ECX                             ; 004a1be0
    MOV ESI,dword ptr [0x03f98468]      ; 004a1be1 | g_MainWindowHandle
    PUSH ESI                            ; 004a1be7
    LEA EBX,[ECX + 0x1]                 ; 004a1be8
    CALL dword ptr CS:[0x6114cc]        ; 004a1beb | g_OpenClipboardFunc
    TEST EAX,EAX                        ; 004a1bf2
    JZ 0x004a1c46                       ; 004a1bf4
        ;   XREF to: 004a1c46 (CONDITIONAL_JUMP)  ; LAB_004a1c46
    PUSH EBX                            ; 004a1bf6
    PUSH 0x2002                         ; 004a1bf7
    CALL dword ptr CS:[0x6115cc]        ; 004a1bfc | g_GlobalAllocFunc
    MOV EBP,EAX                         ; 004a1c03
    TEST EAX,EAX                        ; 004a1c05
    JZ 0x004a1c3f                       ; 004a1c07
        ;   XREF to: 004a1c3f (CONDITIONAL_JUMP)  ; LAB_004a1c3f
    PUSH EAX                            ; 004a1c09
    CALL dword ptr CS:[0x6115d4]        ; 004a1c0a | g_GlobalLockFunc
    TEST EAX,EAX                        ; 004a1c11
    JZ 0x004a1c6e                       ; 004a1c13
        ;   XREF to: 004a1c6e (CONDITIONAL_JUMP)  ; LAB_004a1c6e
    MOV ESI,dword ptr [ESP + 0x18]      ; 004a1c15
    MOV ECX,EBX                         ; 004a1c19
    MOV EDI,EAX                         ; 004a1c1b
    PUSH EDI                            ; 004a1c1d
    MOV EAX,ECX                         ; 004a1c1e
    SHR ECX,0x2                         ; 004a1c20
    MOVSD.REP ES:EDI,ESI                ; 004a1c23
    MOV CL,AL                           ; 004a1c25
    AND CL,0x3                          ; 004a1c27
    MOVSB.REP ES:EDI,ESI                ; 004a1c2a
    POP EDI                             ; 004a1c2c
    PUSH EBP                            ; 004a1c2d
    CALL dword ptr CS:[0x6115dc]        ; 004a1c2e | g_GlobalUnlockFunc
    PUSH EBP                            ; 004a1c35
    PUSH 0x1                            ; 004a1c36
    CALL dword ptr CS:[0x6114dc]        ; 004a1c38 | g_SetClipboardDataFunc
    CALL dword ptr CS:[0x611490]        ; 004a1c3f | g_CloseClipboardFunc
        ;   Label: LAB_004a1c3f
    PUSH 0x99f                          ; 004a1c46
        ;   Label: LAB_004a1c46
    PUSH 0x623595                       ; 004a1c4b | = "..\\shape\\edittool.cpp"
    PUSH EBX                            ; 004a1c50
    MOV EDI,dword ptr [0x02cf1cd8]      ; 004a1c51 | g_ClipboardBackupText
    PUSH EDI                            ; 004a1c57
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 004a1c58
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
    ADD ESP,0x10                        ; 004a1c5d
    MOV [0x02cf1cd8],EAX                ; 004a1c60 | g_ClipboardBackupText
    TEST EAX,EAX                        ; 004a1c65
    JNZ 0x004a1c78                      ; 004a1c67
        ;   XREF to: 004a1c78 (CONDITIONAL_JUMP)  ; LAB_004a1c78
    POP EBP                             ; 004a1c69
    POP EDI                             ; 004a1c6a
    POP ESI                             ; 004a1c6b
    POP EBX                             ; 004a1c6c
    RET                                 ; 004a1c6d
    PUSH EBP                            ; 004a1c6e
        ;   Label: LAB_004a1c6e
    CALL dword ptr CS:[0x6115d0]        ; 004a1c6f | g_GlobalFreeFunc
    JMP 0x004a1c3f                      ; 004a1c76
        ;   XREF to: 004a1c3f (UNCONDITIONAL_JUMP)  ; LAB_004a1c3f
    MOV ESI,dword ptr [ESP + 0x18]      ; 004a1c78
        ;   Label: LAB_004a1c78
    MOV ECX,EBX                         ; 004a1c7c
    MOV EDI,EAX                         ; 004a1c7e
    PUSH EDI                            ; 004a1c80
    MOV EAX,ECX                         ; 004a1c81
    SHR ECX,0x2                         ; 004a1c83
    MOVSD.REP ES:EDI,ESI                ; 004a1c86
    MOV CL,AL                           ; 004a1c88
    AND CL,0x3                          ; 004a1c8a
    MOVSB.REP ES:EDI,ESI                ; 004a1c8d
    POP EDI                             ; 004a1c8f
    POP EBP                             ; 004a1c90
    POP EDI                             ; 004a1c91
    POP ESI                             ; 004a1c92
    POP EBX                             ; 004a1c93
    RET                                 ; 004a1c94

