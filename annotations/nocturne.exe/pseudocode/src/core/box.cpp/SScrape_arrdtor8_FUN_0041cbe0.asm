; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SScrape * __cdecl core_box_cpp_SScrape_arrdtor8_FUN_0041cbe0(SScrape *this_ptr,uint flags)
;
; Parameters:
; SScrape *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_box.cpp_CBox_dtor_FUN_0041a6c0 at 0041a6cc
;
; Referenced Globals:
;   WatcomTypeInfo g_SScrapeTypeInfo_0059aa60
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59aa60                       ; 0041cbe0 | g_SScrapeTypeInfo_0059aa60
        ;   Label: core_box.cpp_SScrape_arrdtor8_FUN_0041cbe0
    PUSH 0x8                            ; 0041cbe5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0041cbe7
    PUSH EDX                            ; 0041cbeb
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0041cbec
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0041cbf1
    RET                                 ; 0041cbf4

