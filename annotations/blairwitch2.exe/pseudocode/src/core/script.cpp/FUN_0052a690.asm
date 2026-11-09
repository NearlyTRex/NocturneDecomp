; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_script_cpp_FUN_0052a690(CDeformableModel *model_ptr)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   model_ptr
;
; XREF[1]:
;   core_script.cpp_FUN_00521500 at 00521590
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0052a690
        ;   Label: core_script.cpp_FUN_0052a690
    ADD EAX,0x2a70                      ; 0052a694
    RET                                 ; 0052a699

