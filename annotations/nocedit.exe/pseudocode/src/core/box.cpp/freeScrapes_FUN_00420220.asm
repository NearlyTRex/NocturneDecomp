; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_box_cpp_freeScrapes_FUN_00420220(SScrape **array)
;
; Parameters:
; SScrape * *      Stack[0x4]:4   array
;
; XREF[1]:
;   core_box.cpp_CBox_dtor_FUN_0041dd00 at 0041dd0c
;
; Referenced Globals:
;   WatcomTypeInfo g_SScrapeTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65b140                       ; 00420220 | g_SScrapeTypeInfo
        ;   Label: core_box.cpp_freeScrapes_FUN_00420220
    PUSH 0x8                            ; 00420225
    MOV EDX,dword ptr [ESP + 0xc]       ; 00420227
    PUSH EDX                            ; 0042022b
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 0042022c
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; int crt_memory.c___arrfini_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00420231
    RET                                 ; 00420234

