; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_box_cpp_SScrape_arrdtor_FUN_0041cbe0(undefined4 param_1)
;
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
        ;   Label: core_box.cpp_SScrape_arrdtor_FUN_0041cbe0
    PUSH 0x8                            ; 0041cbe5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0041cbe7
    PUSH EDX                            ; 0041cbeb
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0041cbec
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_0056494f()
    ADD ESP,0xc                         ; 0041cbf1
    RET                                 ; 0041cbf4

