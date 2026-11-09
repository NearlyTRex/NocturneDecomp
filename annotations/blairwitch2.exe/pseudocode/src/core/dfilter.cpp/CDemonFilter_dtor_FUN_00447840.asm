; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonFilter * __cdecl core_dfilter_cpp_CDemonFilter_dtor_FUN_00447840(CDemonFilter *this_ptr,uint flags)
;
; Parameters:
; CDemonFilter *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_dfilter.cpp_CFilterCache_free_FUN_00447610 at 00447642
;
; Called Functions:
;   core_dfilter.cpp_CDemonFilter_freeMemory_FUN_004478b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00447840
        ;   Label: core_dfilter.cpp_CDemonFilter_dtor_FUN_00447840
    MOV EBX,dword ptr [ESP + 0x8]       ; 00447841
    PUSH EBX                            ; 00447845
    CALL core_dfilter.cpp_CDemonFilter_freeMemory_FUN_004478b0 ; 00447846
        ;   XREF to: 004478b0 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CDemonFilter_freeMemory_FUN_004478b0(CDemonFilter * this_ptr)
    ADD ESP,0x4                         ; 0044784b
    MOV EAX,EBX                         ; 0044784e
    POP EBX                             ; 00447850
    RET                                 ; 00447851

