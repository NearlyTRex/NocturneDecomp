; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_netgame.cpp_staticInit_FUN_0053f310(void)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_SChatHistoryTypeInfo
;   WatcomStaticDestructorNode DAT_006809f0
;   CNetGame g_CNetGameInstance
;   SChatHistory[400] g_ChatHistory
;   int g_NetworkPacketSize
;   char[1028] g_NetworkReceiveBuffer
;
; Called Functions:
;   core_netgame.cpp_CNetGame_ctor_FUN_0053f6d0
;   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
;   crt_stdlib.c_atexit_FUN_005ff060
;
; *****************************************************************************

section .text

    PUSH 0x2f7c740                      ; 0053f310 | g_CNetGameInstance
        ;   Label: core_netgame.cpp_staticInit_FUN_0053f310
    CALL core_netgame.cpp_CNetGame_ctor_FUN_0053f6d0 ; 0053f315
        ;   XREF to: 0053f6d0 (UNCONDITIONAL_CALL)  ; CNetGame * core_netgame.cpp_CNetGame_ctor_FUN_0053f6d0(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 0053f31a
    PUSH 0x6809f0                       ; 0053f31d | DAT_006809f0
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 0053f322
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 0053f327
    PUSH 0x661cc0                       ; 0053f32a | g_SChatHistoryTypeInfo
    PUSH 0x190                          ; 0053f32f
    PUSH 0x2f7c8d0                      ; 0053f334 | g_ChatHistory
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 0053f339
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    MOV EDX,0x405                       ; 0053f33e
    ADD ESP,0xc                         ; 0053f343
    XOR AH,AH                           ; 0053f346
    MOV dword ptr [0x02fa88c8],EDX      ; 0053f348 | g_NetworkPacketSize
    MOV byte ptr [0x02fa88cc],AH        ; 0053f34e | g_NetworkReceiveBuffer
    RET                                 ; 0053f354

