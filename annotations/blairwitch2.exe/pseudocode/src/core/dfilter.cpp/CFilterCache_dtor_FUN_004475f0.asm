; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFilterCache * __cdecl core_dfilter_cpp_CFilterCache_dtor_FUN_004475f0(CFilterCache *this_ptr,uint flags)
;
; Parameters:
; CFilterCache *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_dfilter.cpp_CFilterCache_free_FUN_00447610
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004475f0
        ;   Label: core_dfilter.cpp_CFilterCache_dtor_FUN_004475f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004475f1
    PUSH EBX                            ; 004475f5
    CALL core_dfilter.cpp_CFilterCache_free_FUN_00447610 ; 004475f6
        ;   XREF to: 00447610 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CFilterCache_free_FUN_00447610(CFilterCache * this_ptr)
    ADD ESP,0x4                         ; 004475fb
    MOV EAX,EBX                         ; 004475fe
    POP EBX                             ; 00447600
    RET                                 ; 00447601

