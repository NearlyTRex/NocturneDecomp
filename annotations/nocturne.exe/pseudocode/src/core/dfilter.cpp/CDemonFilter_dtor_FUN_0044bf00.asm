; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_dfilter_cpp_CDemonFilter_dtor_FUN_0044bf00(undefined4 param_1)
;
;
; XREF[1]:
;   core_dfilter.cpp_CFilterCache_free_FUN_0044bcd0 at 0044bd02
;
; Called Functions:
;   core_dfilter.cpp_CDemonFilter_freeMemory_FUN_0044bf70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044bf00
        ;   Label: core_dfilter.cpp_CDemonFilter_dtor_FUN_0044bf00
    MOV EBX,dword ptr [ESP + 0x8]       ; 0044bf01
    PUSH EBX                            ; 0044bf05
    CALL core_dfilter.cpp_CDemonFilter_freeMemory_FUN_0044bf70 ; 0044bf06
        ;   XREF to: 0044bf70 (UNCONDITIONAL_CALL)  ; undefined core_dfilter.cpp_CDemonFilter_freeMemory_FUN_0044bf70()
    ADD ESP,0x4                         ; 0044bf0b
    MOV EAX,EBX                         ; 0044bf0e
    POP EBX                             ; 0044bf10
    RET                                 ; 0044bf11

