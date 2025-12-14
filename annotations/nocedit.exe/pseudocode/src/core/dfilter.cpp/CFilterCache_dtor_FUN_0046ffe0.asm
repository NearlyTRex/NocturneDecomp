; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CFilterCache * core_dfilter.cpp_CFilterCache_dtor_FUN_0046ffe0(CFilterCache * this_ptr)
;
; Parameters:
; CFilterCache *   Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_dfilter.cpp_CFilterCache_free_FUN_00470000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046ffe0
        ;   Label: core_dfilter.cpp_CFilterCache_dtor_FUN_0046ffe0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0046ffe1
    PUSH EBX                            ; 0046ffe5
    CALL core_dfilter.cpp_CFilterCache_free_FUN_00470000 ; 0046ffe6
        ;   XREF to: 00470000 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CFilterCache_free_FUN_00470000(CFilterCache * this_ptr)
    ADD ESP,0x4                         ; 0046ffeb
    MOV EAX,EBX                         ; 0046ffee
    POP EBX                             ; 0046fff0
    RET                                 ; 0046fff1

