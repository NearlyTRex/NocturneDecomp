; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __watcallRegister crt_startup_cpp_WinMainBootstrap_FUN_00609e70(void)
;
; Local Variables:
; BYTE[8]          Stack[-0x10]:8  runtimeInitParams
;
; XREF[1]:
;   entry at 0060239a
;
; Referenced Globals:
;   GET_MODULE_HANDLE_A_FUNC* g_GetModuleHandleAFunc = 00211f6e
;   DWORD g_WinMainCmdShow = 0x0
;   DWORD g_StackAllocSize = 0x0
;   void* g_CrtStackBuffer = 00000000
;   DWORD g_RuntimeBufferSize = 0xf4
;
; Called Functions:
;   crt_init.c_ProcessInitTermHandlers_FUN_0060ac30
;   crt_memory.c_memset_FUN_005fde40
;   crt_stack.c_GetStackUsage_FUN_0060c260
;   crt_stack.c_ProbeStackSpace_FUN_005ffa2f
;   crt_startup.c_ExitApplication_FUN_0060b534
;   crt_startup.cpp_InitializeWinAppRuntime_FUN_006026a8
;   wincore_winrun.cpp_winMain_FUN_005f3680
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00609e70
        ;   Label: crt_startup.cpp_WinMainBootstrap_FUN_00609e70
    PUSH EBP                            ; 00609e71
    MOV EBP,ESP                         ; 00609e72
    SUB ESP,0x8                         ; 00609e74
    MOV EAX,0x1                         ; 00609e77
    CALL crt_init.c_ProcessInitTermHandlers_FUN_0060ac30 ; 00609e7c
        ;   XREF to: 0060ac30 (UNCONDITIONAL_CALL)  ; void crt_init.c_ProcessInitTermHandlers_FUN_0060ac30(int max_priority)
    MOV EAX,[0x006854f8]                ; 00609e81 | g_RuntimeBufferSize
    ADD EAX,0x3                         ; 00609e86
    AND AL,0xfc                         ; 00609e89
    SUB ESP,EAX                         ; 00609e8b
    MOV EBX,ESP                         ; 00609e8d
    MOV EDX,dword ptr [0x006854f8]      ; 00609e8f | g_RuntimeBufferSize
    PUSH EDX                            ; 00609e95
    PUSH 0x0                            ; 00609e96
    PUSH EBX                            ; 00609e98
    CALL crt_memory.c_memset_FUN_005fde40 ; 00609e99
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00609e9e
    MOV EAX,[0x006854f8]                ; 00609ea1 | g_RuntimeBufferSize
    PUSH EBX                            ; 00609ea6
    MOV dword ptr [EBX + 0xf0],EAX      ; 00609ea7
    LEA EAX,[EBP + -0x8]                ; 00609ead
    PUSH EAX                            ; 00609eb0
    CALL crt_startup.cpp_InitializeWinAppRuntime_FUN_006026a8 ; 00609eb1
        ;   XREF to: 006026a8 (UNCONDITIONAL_CALL)  ; void crt_startup.cpp_InitializeWinAppRuntime_FUN_006026a8(void * pParam)
    MOV EBX,dword ptr [0x00684ff8]      ; 00609eb6 | g_StackAllocSize
    ADD EBX,0x3                         ; 00609ebc
    ADD ESP,0x8                         ; 00609ebf
    AND BL,0xfc                         ; 00609ec2
    CALL crt_stack.c_GetStackUsage_FUN_0060c260 ; 00609ec5
        ;   XREF to: 0060c260 (UNCONDITIONAL_CALL)  ; int crt_stack.c_GetStackUsage_FUN_0060c260()
    CMP EBX,EAX                         ; 00609eca
    JNC 0x00609ee4                      ; 00609ecc
        ;   XREF to: 00609ee4 (CONDITIONAL_JUMP)  ; LAB_00609ee4
    PUSH EBX                            ; 00609ece
    CALL crt_stack.c_ProbeStackSpace_FUN_005ffa2f ; 00609ecf
        ;   XREF to: 005ffa2f (UNCONDITIONAL_CALL)  ; void crt_stack.c_ProbeStackSpace_FUN_005ffa2f(uint size)
    MOV EAX,[0x00684ff8]                ; 00609ed4 | g_StackAllocSize
    ADD EAX,0x3                         ; 00609ed9
    AND AL,0xfc                         ; 00609edc
    SUB ESP,EAX                         ; 00609ede
    MOV EAX,ESP                         ; 00609ee0
    JMP 0x00609ee6                      ; 00609ee2
        ;   XREF to: 00609ee6 (UNCONDITIONAL_JUMP)  ; LAB_00609ee6
    XOR EAX,EAX                         ; 00609ee4
        ;   Label: LAB_00609ee4
    MOV EBX,dword ptr [0x00684ff8]      ; 00609ee6 | g_StackAllocSize
        ;   Label: LAB_00609ee6
    ADD EAX,EBX                         ; 00609eec
    MOV [0x00684ffc],EAX                ; 00609eee | g_CrtStackBuffer
    CALL 0x0060ca80                     ; 00609ef3
        ;   XREF to: 0060ca80 (UNCONDITIONAL_CALL)  ; LAB_0060ca7e+2
    PUSH 0xa                            ; 00609ef8
    MOV EBX,dword ptr [0x00684fd4]      ; 00609efa | g_WinMainCmdShow
    PUSH EBX                            ; 00609f00
    PUSH 0x0                            ; 00609f01
    PUSH 0x0                            ; 00609f03
    CALL dword ptr CS:[0x6115b4]        ; 00609f05 | g_GetModuleHandleAFunc
    PUSH EAX                            ; 00609f0c
    CALL wincore_winrun.cpp_winMain_FUN_005f3680 ; 00609f0d
        ;   XREF to: 005f3680 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_winMain_FUN_005f3680(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow1, ...)
    PUSH EAX                            ; 00609f12
    CALL crt_startup.c_ExitApplication_FUN_0060b534 ; 00609f13
        ;   XREF to: 0060b534 (UNCONDITIONAL_CALL)  ; void crt_startup.c_ExitApplication_FUN_0060b534(int exit_code)
    ADD ESP,0x4                         ; 00609f18
    MOV ESP,EBP                         ; 00609f1b
    POP EBP                             ; 00609f1d
    POP EBX                             ; 00609f1e
    RET                                 ; 00609f1f

