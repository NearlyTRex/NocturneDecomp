; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dracbrid_cpp_FUN_00486e30(void)
;
;
; XREF[3]:
;   core_dracbrid.cpp_dtor_FUN_00486d50 at 00486d5a
;   core_flies.cpp_FUN_004ccd40 at 004ccd4a
;   core_gore.cpp_FUN_004ee390 at 004ee39a
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x6598c0                       ; 00486e30 | g_CVectorTypeInfo
        ;   Label: core_dracbrid.cpp_FUN_00486e30
    PUSH 0x4                            ; 00486e35
    MOV EDX,dword ptr [ESP + 0xc]       ; 00486e37
    PUSH EDX                            ; 00486e3b
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 00486e3c
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; int crt_memory.c___arrfini_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00486e41
    RET                                 ; 00486e44

