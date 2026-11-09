; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_FUN_00582000(void)
;
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_endScene_FUN_0044d610 at 0044d637
;
; Referenced Globals:
;   undefined4 DAT_01c50948
;   undefined4 DAT_02c833a4
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c50948],0x0      ; 00582000 | DAT_01c50948
        ;   Label: engine_special.cpp_FUN_00582000
    JNZ 0x0058200c                      ; 00582007
        ;   XREF to: 0058200c (CONDITIONAL_JUMP)  ; LAB_0058200c
    XOR EAX,EAX                         ; 00582009
    RET                                 ; 0058200b
    CALL dword ptr [0x02c833a4]         ; 0058200c | DAT_02c833a4
        ;   Label: LAB_0058200c
    RET                                 ; 00582012

