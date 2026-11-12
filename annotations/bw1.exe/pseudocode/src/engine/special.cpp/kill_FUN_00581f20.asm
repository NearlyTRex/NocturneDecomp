; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_kill_FUN_00581f20(void)
;
;
; XREF[3]:
;   core_menu.cpp_configureGraphicsOptions_FUN_0050aa90 at 0050b2b5
;   engine_special.cpp_switchRenderer_FUN_00582ebe at 00582ec2
;   wincore_wddvmem.cpp_FUN_005ac1b0 at 005ac1dc
;
; Referenced Globals:
;   undefined4 DAT_02c8338c
;   undefined4 DAT_02c834ac
;
; Called Functions:
;   engine_special.cpp_shutdownExternalRenderer_FUN_00580740
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02c834ac],0x0      ; 00581f20 | DAT_02c834ac
        ;   Label: engine_special.cpp_kill_FUN_00581f20
    JNZ 0x00581f2f                      ; 00581f27
        ;   XREF to: 00581f2f (CONDITIONAL_JUMP)  ; LAB_00581f2f
    MOV EAX,0x1                         ; 00581f29
    RET                                 ; 00581f2e
    CALL dword ptr [0x02c8338c]         ; 00581f2f | DAT_02c8338c
        ;   Label: LAB_00581f2f
    CALL engine_special.cpp_shutdownExternalRenderer_FUN_00580740 ; 00581f35
        ;   XREF to: 00580740 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_shutdownExternalRenderer_FUN_00580740()
    MOV EAX,0x1                         ; 00581f3a
    RET                                 ; 00581f3f

