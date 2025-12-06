; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_edittool.cpp_CStrList_sort_FUN_004a2f00(CStrList * this_ptr, int sort_type, int sort_order)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   sort_type
; int              Stack[0xc]:4   sort_order
;
; XREF[1]:
;   shape_edittool.cpp_CPickList_sort_FUN_004a57f0 at 004a5813
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_0062383b
;   TerminatedCString s_CStrList_sort_invalid_ra_00623851
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdlib.c_qsort_FUN_005fdf38
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a2f00
        ;   Label: shape_edittool.cpp_CStrList_sort_FUN_004a2f00
    PUSH ESI                            ; 004a2f01
    MOV EBX,dword ptr [ESP + 0x10]      ; 004a2f02
    MOV ESI,dword ptr [ESP + 0x14]      ; 004a2f06
    CMP EBX,ESI                         ; 004a2f0a
    JGE 0x004a2f61                      ; 004a2f0c | LAB_004a2f61
        ;   XREF to: 004a2f61 (CONDITIONAL_JUMP)
    TEST EBX,EBX                        ; 004a2f0e
    JL 0x004a2f1a                       ; 004a2f10 | LAB_004a2f1a
        ;   XREF to: 004a2f1a (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0xc]       ; 004a2f12
    CMP ESI,dword ptr [EAX]             ; 004a2f16
    JL 0x004a2f3f                       ; 004a2f18 | LAB_004a2f3f
        ;   XREF to: 004a2f3f (CONDITIONAL_JUMP)
    PUSH EDI                            ; 004a2f1a
        ;   Label: LAB_004a2f1a
    MOV ECX,0x62383b                    ; 004a2f1b | = "..\\shape\\edittool.cpp" | s_shape_edittool_cpp_0062383b = ..\shape\edittool.cpp
    MOV EDI,0xbaa                       ; 004a2f20
    PUSH 0x623851                       ; 004a2f25 | = "CStrList::sort - invalid range!" | s_CStrList_sort_invalid_ra_00623851 = CStrList::sort - invalid range!
    MOV dword ptr [0x02f0ca48],ECX      ; 004a2f2a | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 004a2f30 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a2f36 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004a2f3b
    POP EDI                             ; 004a2f3e
    MOV EAX,ESI                         ; 004a2f3f
        ;   Label: LAB_004a2f3f
    PUSH 0x4a2ee0                       ; 004a2f41
    SUB EAX,EBX                         ; 004a2f46
    PUSH 0x4                            ; 004a2f48
    INC EAX                             ; 004a2f4a
    PUSH EAX                            ; 004a2f4b
    MOV EAX,dword ptr [ESP + 0x18]      ; 004a2f4c
    SHL EBX,0x2                         ; 004a2f50
    MOV EAX,dword ptr [EAX + 0x8]       ; 004a2f53
    ADD EAX,EBX                         ; 004a2f56
    PUSH EAX                            ; 004a2f58
    CALL crt_stdlib.c_qsort_FUN_005fdf38 ; 004a2f59 | void crt_stdlib.c_qsort_FUN_005fdf38(void * base, SIZE_T num, SIZE_T size, QSORT_COMPARATOR compar)
        ;   XREF to: 005fdf38 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004a2f5e
    POP ESI                             ; 004a2f61
        ;   Label: LAB_004a2f61
    POP EBX                             ; 004a2f62
    RET                                 ; 004a2f63

