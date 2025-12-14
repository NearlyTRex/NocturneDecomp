; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int wincore_windll.cpp_kill_FUN_005b71e0(void)
;
;
; XREF[3]:
;   core_menu.cpp_configureGraphicsOptions_FUN_00510c80 at 00510e03
;   wincore_wddvmem.cpp_cleanupGraphicsSystem_FUN_005ecd90 at 005ecdc6
;   wincore_windll.cpp_switchRenderer_FUN_005b8140 at 005b8142
;
; Referenced Globals:
;   APIDLL_kill* g_APIDLL_kill
;   int g_ExternalRendererActive
;
; Called Functions:
;   wincore_windll.cpp_shutdownExternalRenderer_FUN_005b5d20
;
; *****************************************************************************

section .text

    CMP dword ptr [0x03f6b978],0x0      ; 005b71e0 | g_ExternalRendererActive
        ;   Label: wincore_windll.cpp_kill_FUN_005b71e0
    JNZ 0x005b71ef                      ; 005b71e7
        ;   XREF to: 005b71ef (CONDITIONAL_JUMP)  ; LAB_005b71ef
    MOV EAX,0x1                         ; 005b71e9
    RET                                 ; 005b71ee
    CALL dword ptr [0x03f6b890]         ; 005b71ef | g_APIDLL_kill
        ;   Label: LAB_005b71ef
    CALL wincore_windll.cpp_shutdownExternalRenderer_FUN_005b5d20 ; 005b71f5
        ;   XREF to: 005b5d20 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_shutdownExternalRenderer_FUN_005b5d20()
    MOV EAX,0x1                         ; 005b71fa
    RET                                 ; 005b71ff

