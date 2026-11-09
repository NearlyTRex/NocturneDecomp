; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFilterCache * __cdecl core_dfilter_cpp_CFilterCache_dtor_FUN_004596a0(CFilterCache *this_ptr,uint flags)
;
; Parameters:
; CFilterCache *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_dfilter.cpp_CFilterCache_free_FUN_004596c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004596a0
        ;   Label: core_dfilter.cpp_CFilterCache_dtor_FUN_004596a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004596a1
    PUSH EBX                            ; 004596a5
    CALL core_dfilter.cpp_CFilterCache_free_FUN_004596c0 ; 004596a6
        ;   XREF to: 004596c0 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CFilterCache_free_FUN_004596c0(CFilterCache * this_ptr)
    ADD ESP,0x4                         ; 004596ab
    MOV EAX,EBX                         ; 004596ae
    POP EBX                             ; 004596b0
    RET                                 ; 004596b1

