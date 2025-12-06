; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_pkbitmap.cpp_CPackedBitmap_freePackedData_FUN_0054a940(CPackedBitmap * this_ptr)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_ensureBitmapLoaded_FUN_0054c72e at 0054c760
;
; Referenced Globals:
;   TerminatedCString s_cockpit_pkbitmap_cpp_0063eee8
;
; Called Functions:
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054a940
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_freePackedData_FUN_0054a940
    MOV EBX,dword ptr [ESP + 0x8]       ; 0054a941
    MOV EDX,dword ptr [EBX + 0x14]      ; 0054a945
    TEST EDX,EDX                        ; 0054a948
    JNZ 0x0054a94e                      ; 0054a94a | LAB_0054a94e
        ;   XREF to: 0054a94e (CONDITIONAL_JUMP)
    POP EBX                             ; 0054a94c
    RET                                 ; 0054a94d
    PUSH 0xa4                           ; 0054a94e
        ;   Label: LAB_0054a94e
    PUSH 0x63eee8                       ; 0054a953 | = "..\\cockpit\\pkbitmap.cpp" | s_cockpit_pkbitmap_cpp_0063eee8 = ..\cockpit\pkbitmap.cpp
    PUSH EDX                            ; 0054a958
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 0054a959 | void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0054a95e
    MOV dword ptr [EBX + 0x14],0x0      ; 0054a961
    POP EBX                             ; 0054a968
    RET                                 ; 0054a969

