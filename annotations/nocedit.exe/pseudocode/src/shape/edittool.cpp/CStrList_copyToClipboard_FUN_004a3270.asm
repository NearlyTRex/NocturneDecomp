; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_edittool.cpp_CStrList_copyToClipboard_FUN_004a3270(CStrList * this_ptr)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_edittool.cpp_CPickList_handleInput_FUN_004a3f20 at 004a3fcd
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_00623928
;   TerminatedCString s_shape_edittool_cpp_0062393e
;   TerminatedCString s_CStrList_copyToClipboard_00623954
;   TerminatedCString s_s_00623995
;   TerminatedCString s_shape_edittool_cpp_00623999
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   char* g_CurrentDebugFilename = 0067d200
;   CEditorTools g_CEditorToolsPtr
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_CurrentDebugLine
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_memory.c_free_FUN_005fe659
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   shape_edittool.cpp_CEditorTools_setClipboardText_FUN_004a1bc0
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3270
        ;   Label: shape_edittool.cpp_CStrList_copyToClipboard_FUN_004a3270
    PUSH ESI                            ; 004a3271
    PUSH EDI                            ; 004a3272
    PUSH EBP                            ; 004a3273
    SUB ESP,0x4                         ; 004a3274
    MOV EBX,dword ptr [ESP + 0x18]      ; 004a3277
    MOV EDX,dword ptr [EBX]             ; 004a327b
    XOR ESI,ESI                         ; 004a327d
    XOR EBP,EBP                         ; 004a327f
    TEST EDX,EDX                        ; 004a3281
    JLE 0x004a32b0                      ; 004a3283 | LAB_004a32b0
        ;   XREF to: 004a32b0 (CONDITIONAL_JUMP)
    PUSH ESI                            ; 004a3285
        ;   Label: LAB_004a3285
    PUSH EBX                            ; 004a3286
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 004a3287 | char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004a328c
    MOV EDI,EAX                         ; 004a328f
    SUB ECX,ECX                         ; 004a3291
    DEC ECX                             ; 004a3293
    XOR EAX,EAX                         ; 004a3294
    SCASB.REPNE ES:EDI                  ; 004a3296
    NOT ECX                             ; 004a3298
    DEC ECX                             ; 004a329a
    INC ECX                             ; 004a329b
    INC ESI                             ; 004a329c
    ADD EBP,ECX                         ; 004a329d
    CMP ESI,dword ptr [EBX]             ; 004a329f
    JL 0x004a3285                       ; 004a32a1 | LAB_004a3285
        ;   XREF to: 004a3285 (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 004a32a3
    LEA EDX,[EDX]                       ; 004a32a9
    NOP                                 ; 004a32af
    PUSH 0xc50                          ; 004a32b0
        ;   Label: LAB_004a32b0
    PUSH 0x623928                       ; 004a32b5 | = "..\\shape\\edittool.cpp" | s_shape_edittool_cpp_00623928 = ..\shape\edittool.cpp
    INC EBP                             ; 004a32ba
    PUSH EBP                            ; 004a32bb
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 004a32bc | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004a32c1
    MOV dword ptr [ESP],EAX             ; 004a32c4
    TEST EAX,EAX                        ; 004a32c7
    JNZ 0x004a32f2                      ; 004a32c9 | LAB_004a32f2
        ;   XREF to: 004a32f2 (CONDITIONAL_JUMP)
    PUSH EBP                            ; 004a32cb
    MOV EBP,dword ptr [EBX]             ; 004a32cc
    PUSH EBP                            ; 004a32ce
    MOV ESI,0x62393e                    ; 004a32cf | = "..\\shape\\edittool.cpp" | s_shape_edittool_cpp_0062393e = ..\shape\edittool.cpp
    MOV EDI,0xc51                       ; 004a32d4
    PUSH 0x623954                       ; 004a32d9 | = "CStrList::copyToClipboard - out of me..." | s_CStrList_copyToClipboard_00623954 = CStrList::copyToClipboard - out of memory for %d items, %d bytes
    MOV dword ptr [0x02f0ca48],ESI      ; 004a32de | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 004a32e4 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a32ea | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004a32ef
    MOV EDI,dword ptr [ESP]             ; 004a32f2
        ;   Label: LAB_004a32f2
    MOV EAX,dword ptr [EBX]             ; 004a32f5
    XOR ESI,ESI                         ; 004a32f7
    TEST EAX,EAX                        ; 004a32f9
    JLE 0x004a3320                      ; 004a32fb | LAB_004a3320
        ;   XREF to: 004a3320 (CONDITIONAL_JUMP)
    PUSH ESI                            ; 004a32fd
        ;   Label: LAB_004a32fd
    PUSH EBX                            ; 004a32fe
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 004a32ff | char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004a3304
    PUSH EAX                            ; 004a3307
    PUSH 0x623995                       ; 004a3308 | = "%s\n" | s_s_00623995 = %s

    PUSH EDI                            ; 004a330d
    INC ESI                             ; 004a330e
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004a330f | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004a3314
    MOV EDX,dword ptr [EBX]             ; 004a3317
    ADD EDI,EAX                         ; 004a3319
    CMP ESI,EDX                         ; 004a331b
    JL 0x004a32fd                       ; 004a331d | LAB_004a32fd
        ;   XREF to: 004a32fd (CONDITIONAL_JUMP)
    NOP                                 ; 004a331f
    MOV ECX,dword ptr [ESP]             ; 004a3320
        ;   Label: LAB_004a3320
    PUSH ECX                            ; 004a3323
    MOV EBX,dword ptr [0x00678a60]      ; 004a3324 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH EBX                            ; 004a332a | CEditorTools g_CEditorToolsPtr
    MOV byte ptr [EDI],0x0              ; 004a332b
    CALL shape_edittool.cpp_CEditorTools_setClipboardText_FUN_004a1bc0 ; 004a332e | void shape_edittool.cpp_CEditorTools_setClipboardText_FUN_004a1bc0(CEditorTools * this_ptr, char * text_data)
        ;   XREF to: 004a1bc0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004a3333
    MOV ESI,0x623999                    ; 004a3336 | = "..\\shape\\edittool.cpp" | s_shape_edittool_cpp_00623999 = ..\shape\edittool.cpp
    MOV EBP,dword ptr [ESP]             ; 004a333b
    MOV EDI,0xc61                       ; 004a333e
    PUSH EBP                            ; 004a3343
    MOV dword ptr [0x0067d20c],ESI      ; 004a3344 | char * g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EDI      ; 004a334a | int g_CurrentDebugLine
    CALL crt_memory.c_free_FUN_005fe659 ; 004a3350 | void crt_memory.c_free_FUN_005fe659(void * ptr)
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004a3355
    ADD ESP,0x4                         ; 004a3358
    POP EBP                             ; 004a335b
    POP EDI                             ; 004a335c
    POP ESI                             ; 004a335d
    POP EBX                             ; 004a335e
    RET                                 ; 004a335f

