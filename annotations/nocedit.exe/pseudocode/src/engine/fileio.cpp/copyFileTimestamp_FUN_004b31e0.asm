; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int engine_fileio.cpp_copyFileTimestamp_FUN_004b31e0(char * source_file, char * dest_file)
;
; Parameters:
; char *           Stack[0x4]:4   source_file
; char *           Stack[0x8]:4   dest_file
;
; Referenced Globals:
;   TerminatedCString s_WARNING_Error_setting_da_00626577
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsPtr
;
; Called Functions:
;   engine_dosio.c_copyFileTimestamp_FUN_00481910
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004b31e0
        ;   Label: engine_fileio.cpp_copyFileTimestamp_FUN_004b31e0
    PUSH EDX                            ; 004b31e4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004b31e5
    PUSH ECX                            ; 004b31e9
    CALL engine_dosio.c_copyFileTimestamp_FUN_00481910 ; 004b31ea | int engine_dosio.c_copyFileTimestamp_FUN_00481910(char * source_file, char * dest_file)
        ;   XREF to: 00481910 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b31ef
    TEST EAX,EAX                        ; 004b31f2
    JZ 0x004b31fc                       ; 004b31f4 | LAB_004b31fc
        ;   XREF to: 004b31fc (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 004b31f6
    RET                                 ; 004b31fb
    PUSH ESI                            ; 004b31fc
        ;   Label: LAB_004b31fc
    PUSH EBX                            ; 004b31fd
    MOV EBX,dword ptr [ESP + 0xc]       ; 004b31fe
    PUSH EBX                            ; 004b3202
    PUSH 0x626577                       ; 004b3203 | = "WARNING: Error setting date/time on %..." | s_WARNING_Error_setting_da_00626577 = WARNING: Error setting date/time on %s.
    Tried to set the file time to a time ; (Most likely reason
        ; newer than the current system time on your computer)
    MOV ESI,dword ptr [0x00678a60]      ; 004b3208 | CEditorTools * g_CEditorToolsPtr
    PUSH ESI                            ; 004b320e | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b320f | void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b3214
    XOR EAX,EAX                         ; 004b3217
    POP EBX                             ; 004b3219
    POP ESI                             ; 004b321a
    RET                                 ; 004b321b

