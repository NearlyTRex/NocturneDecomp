; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_flushLineList_FUN_00566040(void)
;
;
; Referenced Globals:
;   int g_INT_01c6cee8
;   void* g_PTR_02cf6040
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c6cee8],0x0      ; 00566040 | g_INT_01c6cee8
        ;   Label: engine_special.cpp_flushLineList_FUN_00566040
    JNZ 0x0056604c                      ; 00566047
        ;   XREF to: 0056604c (CONDITIONAL_JUMP)  ; LAB_0056604c
    XOR EAX,EAX                         ; 00566049
    RET                                 ; 0056604b
    CALL dword ptr [0x02cf6040]         ; 0056604c | g_PTR_02cf6040
        ;   Label: LAB_0056604c
    RET                                 ; 00566052

