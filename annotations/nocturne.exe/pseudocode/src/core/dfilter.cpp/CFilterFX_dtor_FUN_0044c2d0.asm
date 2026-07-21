; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_dfilter_cpp_CFilterFX_dtor_FUN_0044c2d0(undefined4 param_1)
;
;
; Called Functions:
;   core_dfilter.cpp_CFilterFX_free_FUN_0044c2f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044c2d0
        ;   Label: core_dfilter.cpp_CFilterFX_dtor_FUN_0044c2d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0044c2d1
    PUSH EBX                            ; 0044c2d5
    CALL core_dfilter.cpp_CFilterFX_free_FUN_0044c2f0 ; 0044c2d6
        ;   XREF to: 0044c2f0 (UNCONDITIONAL_CALL)  ; undefined core_dfilter.cpp_CFilterFX_free_FUN_0044c2f0()
    ADD ESP,0x4                         ; 0044c2db
    MOV EAX,EBX                         ; 0044c2de
    POP EBX                             ; 0044c2e0
    RET                                 ; 0044c2e1

