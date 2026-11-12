; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_clear_FUN_00582790(void)
;
;
; XREF[3]:
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044ceb0 at 0044d0e8
;   engine_mini3d.cpp_FUN_0051117e at 00511187
;   engine_special.cpp_clearScreen_FUN_0057dc40 at 0057dc4b
;
; Referenced Globals:
;   undefined4 DAT_01c50948
;   undefined4 DAT_02c833e8
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c50948],0x0      ; 00582790 | DAT_01c50948
        ;   Label: engine_special.cpp_clear_FUN_00582790
    JNZ 0x0058279c                      ; 00582797
        ;   XREF to: 0058279c (CONDITIONAL_JUMP)  ; LAB_0058279c
    XOR EAX,EAX                         ; 00582799
    RET                                 ; 0058279b
    CALL dword ptr [0x02c833e8]         ; 0058279c | DAT_02c833e8
        ;   Label: LAB_0058279c
    RET                                 ; 005827a2

