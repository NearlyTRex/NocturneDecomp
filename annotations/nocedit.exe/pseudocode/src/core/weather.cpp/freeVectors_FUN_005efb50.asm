; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CVector3f * __cdecl core_weather_cpp_freeVectors_FUN_005efb50(CVector3f *objs)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   objs
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x6598c0                       ; 005efb50 | g_CVectorTypeInfo
        ;   Label: core_weather.cpp_freeVectors_FUN_005efb50
    PUSH 0xc8                           ; 005efb55
    MOV EDX,dword ptr [ESP + 0xc]       ; 005efb5a
    PUSH EDX                            ; 005efb5e
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 005efb5f
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005efb64
    RET                                 ; 005efb67

