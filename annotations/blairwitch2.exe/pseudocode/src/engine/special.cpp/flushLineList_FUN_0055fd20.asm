; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_flushLineList_FUN_0055fd20(void)
;
;
; Referenced Globals:
;   int g_INT_01c37788
;   void* g_PTR_0264bc14
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c37788],0x0      ; 0055fd20 | g_INT_01c37788
        ;   Label: engine_special.cpp_flushLineList_FUN_0055fd20
    JNZ 0x0055fd2c                      ; 0055fd27
        ;   XREF to: 0055fd2c (CONDITIONAL_JUMP)  ; LAB_0055fd2c
    XOR EAX,EAX                         ; 0055fd29
    RET                                 ; 0055fd2b
    CALL dword ptr [0x0264bc14]         ; 0055fd2c | g_PTR_0264bc14
        ;   Label: LAB_0055fd2c
    RET                                 ; 0055fd32

