; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl crt_memory_c___GetStackLimits_FUN_0060a6a0(ThreadData *pStackBound,uint *pHeapBound)
;
; Parameters:
; ThreadData *     Stack[0x4]:4   pStackBound
; uint *           Stack[0x8]:4   pHeapBound
; Local Variables:
; undefined1       Stack[-0x28]:1  local_28
; undefined1       Stack[-0xc]:1  local_c
;
; XREF[2]:
;   crt_startup.cpp_InitializeWinAppRuntime_FUN_006026a8 at 006026ce
;   crt_thread.c_InitializeThreadContext_FUN_0060ccf0 at 0060cd03
;
; Referenced Globals:
;   VIRTUAL_QUERY_FUNC* g_VirtualQueryFunc = 002122b4
;   BYTE g_WindowsMinorVersion = \x00
;   WORD g_WindowsPlatformVersion = 0x0
;
; Called Functions:
;   VirtualQuery
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060a6a0
        ;   Label: crt_memory.c___GetStackLimits_FUN_0060a6a0
    PUSH ESI                            ; 0060a6a1
    SUB ESP,0x20                        ; 0060a6a2
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0060a6a5
    PUSH 0x1c                           ; 0060a6a9
    LEA EAX,[ESP + 0x4]                 ; 0060a6ab
    PUSH EAX                            ; 0060a6af
    LEA EAX,[ESP + 0x24]                ; 0060a6b0
    PUSH EAX                            ; 0060a6b4
    CALL dword ptr CS:[0x611668]        ; 0060a6b5 | g_VirtualQueryFunc
    MOV EDX,dword ptr [ESP]             ; 0060a6bc
    ADD EDX,dword ptr [ESP + 0xc]       ; 0060a6bf
    MOV CX,word ptr [0x00685019]        ; 0060a6c3 | g_WindowsPlatformVersion
    MOV EAX,dword ptr [ESP + 0x4]       ; 0060a6ca
    CMP CX,0x8000                       ; 0060a6ce
    JNC 0x0060a6dc                      ; 0060a6d3
        ;   XREF to: 0060a6dc (CONDITIONAL_JUMP)  ; LAB_0060a6dc
    ADD EAX,0x3000                      ; 0060a6d5
    JMP 0x0060a6f3                      ; 0060a6da
        ;   XREF to: 0060a6f3 (UNCONDITIONAL_JUMP)  ; LAB_0060a6f3
    JC 0x0060a6ee                       ; 0060a6dc
        ;   XREF to: 0060a6ee (CONDITIONAL_JUMP)  ; LAB_0060a6ee
        ;   Label: LAB_0060a6dc
    CMP byte ptr [0x00685017],0x4       ; 0060a6de | g_WindowsMinorVersion
    JNC 0x0060a6ee                      ; 0060a6e5
        ;   XREF to: 0060a6ee (CONDITIONAL_JUMP)  ; LAB_0060a6ee
    ADD EAX,0x12000                     ; 0060a6e7
    JMP 0x0060a6f3                      ; 0060a6ec
        ;   XREF to: 0060a6f3 (UNCONDITIONAL_JUMP)  ; LAB_0060a6f3
    ADD EAX,0x13000                     ; 0060a6ee
        ;   Label: LAB_0060a6ee
    TEST EBX,EBX                        ; 0060a6f3
        ;   Label: LAB_0060a6f3
    JZ 0x0060a6f9                       ; 0060a6f5
        ;   XREF to: 0060a6f9 (CONDITIONAL_JUMP)  ; LAB_0060a6f9
    MOV dword ptr [EBX],EAX             ; 0060a6f7
    MOV ESI,dword ptr [ESP + 0x30]      ; 0060a6f9
        ;   Label: LAB_0060a6f9
    TEST ESI,ESI                        ; 0060a6fd
    JZ 0x0060a703                       ; 0060a6ff
        ;   XREF to: 0060a703 (CONDITIONAL_JUMP)  ; LAB_0060a703
    MOV dword ptr [ESI],EDX             ; 0060a701
    ADD ESP,0x20                        ; 0060a703
        ;   Label: LAB_0060a703
    POP ESI                             ; 0060a706
    POP EBX                             ; 0060a707
    RET                                 ; 0060a708

