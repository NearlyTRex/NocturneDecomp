; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __watcallRegister crt_startup_cpp_WinMainBootstrap_FUN_0056df10(void)
;
; Local Variables:
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   entry at 00567152
;
; Referenced Globals:
;   void* PTR_GetModuleHandleA_0057552c = 00175dbc
;   undefined4 DAT_005c1ccc
;   undefined4 DAT_005c1cf0
;   undefined4 DAT_005c1cf4
;   undefined4 DAT_005c20cc
;
; Called Functions:
;   crt_init.c_ProcessInitTermHandlers_FUN_0056ef60
;   crt_memory.c_memset_FUN_00563cc0
;   crt_stack.c_GetStackUsage_FUN_00571150
;   crt_startup.c_ExitApplication_FUN_0056fcd4
;   crt_startup.cpp_InitializeWinAppRuntime_FUN_00567458
;   crt_unknown.c_FUN_00571160
;   crt_unknown.c_ProbeStackSpace_FUN_005670ed
;   GetModuleHandleA
;   wincore_winrun.cpp_winMain_FUN_00559260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056df10
        ;   Label: crt_startup.cpp_WinMainBootstrap_FUN_0056df10
    PUSH EBP                            ; 0056df11
    MOV EBP,ESP                         ; 0056df12
    SUB ESP,0x8                         ; 0056df14
    MOV EAX,0x1                         ; 0056df17
    CALL crt_init.c_ProcessInitTermHandlers_FUN_0056ef60 ; 0056df1c
        ;   XREF to: 0056ef60 (UNCONDITIONAL_CALL)  ; void crt_init.c_ProcessInitTermHandlers_FUN_0056ef60(int max_priority)
    MOV EAX,[0x005c20cc]                ; 0056df21 | DAT_005c20cc
    ADD EAX,0x3                         ; 0056df26
    AND AL,0xfc                         ; 0056df29
    SUB ESP,EAX                         ; 0056df2b
    MOV EBX,ESP                         ; 0056df2d
    MOV EDX,dword ptr [0x005c20cc]      ; 0056df2f | DAT_005c20cc
    PUSH EDX                            ; 0056df35
    PUSH 0x0                            ; 0056df36
    PUSH EBX                            ; 0056df38
    CALL crt_memory.c_memset_FUN_00563cc0 ; 0056df39
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0056df3e
    MOV EAX,[0x005c20cc]                ; 0056df41 | DAT_005c20cc
    PUSH EBX                            ; 0056df46
    MOV dword ptr [EBX + 0xf0],EAX      ; 0056df47
    LEA EAX,[EBP + -0x8]                ; 0056df4d
    PUSH EAX                            ; 0056df50
    CALL crt_startup.cpp_InitializeWinAppRuntime_FUN_00567458 ; 0056df51
        ;   XREF to: 00567458 (UNCONDITIONAL_CALL)  ; void crt_startup.cpp_InitializeWinAppRuntime_FUN_00567458(void * pParam)
    MOV EBX,dword ptr [0x005c1cf0]      ; 0056df56 | DAT_005c1cf0
    ADD EBX,0x3                         ; 0056df5c
    ADD ESP,0x8                         ; 0056df5f
    AND BL,0xfc                         ; 0056df62
    CALL crt_stack.c_GetStackUsage_FUN_00571150 ; 0056df65
        ;   XREF to: 00571150 (UNCONDITIONAL_CALL)  ; int crt_stack.c_GetStackUsage_FUN_00571150()
    CMP EBX,EAX                         ; 0056df6a
    JNC 0x0056df84                      ; 0056df6c
        ;   XREF to: 0056df84 (CONDITIONAL_JUMP)  ; LAB_0056df84
    PUSH EBX                            ; 0056df6e
    CALL crt_unknown.c_ProbeStackSpace_FUN_005670ed ; 0056df6f
        ;   XREF to: 005670ed (UNCONDITIONAL_CALL)  ; void crt_unknown.c_ProbeStackSpace_FUN_005670ed(uint size)
    MOV EAX,[0x005c1cf0]                ; 0056df74 | DAT_005c1cf0
    ADD EAX,0x3                         ; 0056df79
    AND AL,0xfc                         ; 0056df7c
    SUB ESP,EAX                         ; 0056df7e
    MOV EAX,ESP                         ; 0056df80
    JMP 0x0056df86                      ; 0056df82
        ;   XREF to: 0056df86 (UNCONDITIONAL_JUMP)  ; LAB_0056df86
    XOR EAX,EAX                         ; 0056df84
        ;   Label: LAB_0056df84
    MOV EBX,dword ptr [0x005c1cf0]      ; 0056df86 | DAT_005c1cf0
        ;   Label: LAB_0056df86
    ADD EAX,EBX                         ; 0056df8c
    MOV [0x005c1cf4],EAX                ; 0056df8e | DAT_005c1cf4
    CALL crt_unknown.c_FUN_00571160     ; 0056df93
        ;   XREF to: 00571160 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00571160()
    PUSH 0xa                            ; 0056df98
    MOV EBX,dword ptr [0x005c1ccc]      ; 0056df9a | DAT_005c1ccc
    PUSH EBX                            ; 0056dfa0
    PUSH 0x0                            ; 0056dfa1
    PUSH 0x0                            ; 0056dfa3
    CALL dword ptr CS:[0x57552c]        ; 0056dfa5 | PTR_GetModuleHandleA_0057552c
    PUSH EAX                            ; 0056dfac
    CALL wincore_winrun.cpp_winMain_FUN_00559260 ; 0056dfad
        ;   XREF to: 00559260 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_winMain_FUN_00559260(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
    PUSH EAX                            ; 0056dfb2
    CALL crt_startup.c_ExitApplication_FUN_0056fcd4 ; 0056dfb3
        ;   XREF to: 0056fcd4 (UNCONDITIONAL_CALL)  ; void crt_startup.c_ExitApplication_FUN_0056fcd4(int exit_code)
    ADD ESP,0x4                         ; 0056dfb8
    MOV ESP,EBP                         ; 0056dfbb
    POP EBP                             ; 0056dfbd
    POP EBX                             ; 0056dfbe
    RET                                 ; 0056dfbf

