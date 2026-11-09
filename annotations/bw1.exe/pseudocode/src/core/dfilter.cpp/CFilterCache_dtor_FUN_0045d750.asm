; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFilterCache * __cdecl core_dfilter_cpp_CFilterCache_dtor_FUN_0045d750(CFilterCache *this_ptr,uint flags)
;
; Parameters:
; CFilterCache *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_dfilter.cpp_CFilterCache_free_FUN_0045d770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045d750
        ;   Label: core_dfilter.cpp_CFilterCache_dtor_FUN_0045d750
    MOV EBX,dword ptr [ESP + 0x8]       ; 0045d751
    PUSH EBX                            ; 0045d755
    CALL core_dfilter.cpp_CFilterCache_free_FUN_0045d770 ; 0045d756
        ;   XREF to: 0045d770 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CFilterCache_free_FUN_0045d770(CFilterCache * this_ptr)
    ADD ESP,0x4                         ; 0045d75b
    MOV EAX,EBX                         ; 0045d75e
    POP EBX                             ; 0045d760
    RET                                 ; 0045d761

