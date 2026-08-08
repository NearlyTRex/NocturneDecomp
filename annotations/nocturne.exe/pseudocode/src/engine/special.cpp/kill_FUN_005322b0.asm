; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_kill_FUN_005322b0(void)
;
;
; XREF[3]:
;   core_menu.cpp_configureGraphicsOptions_FUN_004d0080 at 004d022d
;   engine_special.cpp_FUN_00532f50 at 00532f52
;   wincore_wddvmem.cpp_cleanupGraphicsSystem_FUN_00552cb0 at 00552cdc
;
; Referenced Globals:
;   APIDLL_kill* g_APIDLL_kill
;   int g_LoadedExternalDLLRenderer
;
; Called Functions:
;   engine_special.cpp_shutdownExternalRenderer_FUN_00530d40
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02dc9e04],0x0      ; 005322b0 | g_LoadedExternalDLLRenderer
        ;   Label: engine_special.cpp_kill_FUN_005322b0
    JNZ 0x005322bf                      ; 005322b7
        ;   XREF to: 005322bf (CONDITIONAL_JUMP)  ; LAB_005322bf
    MOV EAX,0x1                         ; 005322b9
    RET                                 ; 005322be
    CALL dword ptr [0x02dc9d78]         ; 005322bf | g_APIDLL_kill
        ;   Label: LAB_005322bf
    CALL engine_special.cpp_shutdownExternalRenderer_FUN_00530d40 ; 005322c5
        ;   XREF to: 00530d40 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_shutdownExternalRenderer_FUN_00530d40()
    MOV EAX,0x1                         ; 005322ca
    RET                                 ; 005322cf

