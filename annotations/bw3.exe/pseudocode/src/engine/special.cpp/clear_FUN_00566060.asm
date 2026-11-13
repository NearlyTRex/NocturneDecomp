; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_clear_FUN_00566060(void)
;
;
; XREF[3]:
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_00448ff0 at 00449228
;   engine_mini3d.cpp_clear_FUN_004ec950 at 004ec957
;   engine_special.cpp_clearScreen_FUN_00560d70 at 00560d7b
;
; Referenced Globals:
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_02cf6044
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c6cee8],0x0      ; 00566060 | DAT_01c6cee8
        ;   Label: engine_special.cpp_clear_FUN_00566060
    JNZ 0x0056606c                      ; 00566067
        ;   XREF to: 0056606c (CONDITIONAL_JUMP)  ; LAB_0056606c
    XOR EAX,EAX                         ; 00566069
    RET                                 ; 0056606b
    CALL dword ptr [0x02cf6044]         ; 0056606c | DAT_02cf6044
        ;   Label: LAB_0056606c
    RET                                 ; 00566072

