; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_FUN_00560140(void)
;
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00440760 at 0044078e
;
; Referenced Globals:
;   undefined4 DAT_0264bc50
;
; *****************************************************************************

section .text

    CMP dword ptr [0x0264bc50],0x0      ; 00560140 | DAT_0264bc50
        ;   Label: engine_special.cpp_FUN_00560140
    JNZ 0x0056014c                      ; 00560147
        ;   XREF to: 0056014c (CONDITIONAL_JUMP)  ; LAB_0056014c
    XOR EAX,EAX                         ; 00560149
    RET                                 ; 0056014b
    CALL dword ptr [0x0264bc50]         ; 0056014c | DAT_0264bc50
        ;   Label: LAB_0056014c
    RET                                 ; 00560152

