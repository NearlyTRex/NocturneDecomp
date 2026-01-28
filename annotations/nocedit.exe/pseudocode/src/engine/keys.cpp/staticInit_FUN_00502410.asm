; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_keys_cpp_staticInit_FUN_00502410(void)
;
;
; Referenced Globals:
;   CKeys_vtable g_CKeysVTable
;   CKeys g_CKeysInstance
;
; *****************************************************************************

section .text

    MOV dword ptr [0x02dcd7d4],0x6605bc ; 00502410 | g_CKeysInstance | g_CKeysVTable
        ;   Label: engine_keys.cpp_staticInit_FUN_00502410
    RET                                 ; 0050241a

