; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_kill_FUN_0055f4d0(void)
;
;
; XREF[3]:
;   core_menu.cpp_FUN_004ebf10 at 004ec84f
;   engine_special.cpp_switchRenderer_FUN_0056046e at 00560472
;   wincore_wddvmem.cpp_FUN_00588900 at 0058892c
;
; Referenced Globals:
;   undefined4 DAT_0264bbbc
;   undefined4 DAT_0264bcdc
;
; Called Functions:
;   engine_special.cpp_shutdownExternalRenderer_FUN_0055dcf0
;
; *****************************************************************************

section .text

    CMP dword ptr [0x0264bcdc],0x0      ; 0055f4d0 | DAT_0264bcdc
        ;   Label: engine_special.cpp_kill_FUN_0055f4d0
    JNZ 0x0055f4df                      ; 0055f4d7
        ;   XREF to: 0055f4df (CONDITIONAL_JUMP)  ; LAB_0055f4df
    MOV EAX,0x1                         ; 0055f4d9
    RET                                 ; 0055f4de
    CALL dword ptr [0x0264bbbc]         ; 0055f4df | DAT_0264bbbc
        ;   Label: LAB_0055f4df
    CALL engine_special.cpp_shutdownExternalRenderer_FUN_0055dcf0 ; 0055f4e5
        ;   XREF to: 0055dcf0 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_shutdownExternalRenderer_FUN_0055dcf0()
    MOV EAX,0x1                         ; 0055f4ea
    RET                                 ; 0055f4ef

