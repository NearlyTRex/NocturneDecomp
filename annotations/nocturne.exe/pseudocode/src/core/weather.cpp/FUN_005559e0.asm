; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_weather_cpp_FUN_005559e0(void)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo_005993b0
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5993b0                       ; 005559e0 | g_CVectorTypeInfo_005993b0
        ;   Label: core_weather.cpp_FUN_005559e0
    PUSH 0xc8                           ; 005559e5
    MOV EDX,dword ptr [ESP + 0xc]       ; 005559ea
    PUSH EDX                            ; 005559ee
    CALL crt_memory.c___arrfini_FUN_0056494f ; 005559ef
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_0056494f()
    ADD ESP,0xc                         ; 005559f4
    RET                                 ; 005559f7

