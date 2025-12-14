; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_keys.cpp_staticInit_FUN_00502410(void)
;
;
; Referenced Globals:
;   void* g_CKeysVTable = 00502420
;   void* g_CKeysPtr
;
; *****************************************************************************

section .text

    MOV dword ptr [0x02dcd7d4],0x6605bc ; 00502410 | g_CKeysPtr | g_CKeysVTable
        ;   Label: engine_keys.cpp_staticInit_FUN_00502410
    RET                                 ; 0050241a

