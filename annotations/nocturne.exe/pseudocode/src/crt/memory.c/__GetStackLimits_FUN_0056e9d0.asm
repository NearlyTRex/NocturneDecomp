; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_memory_c___GetStackLimits_FUN_0056e9d0(ThreadData *pStackBound,uint *pHeapBound)
;
; Parameters:
; ThreadData *     Stack[0x4]:4   pStackBound
; uint *           Stack[0x8]:4   pHeapBound
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined        Stack[-0xc]:1  local_c
;
; XREF[2]:
;   FUN_005713a0 at 005713b3
;   crt_startup.cpp_InitializeWinAppRuntime_FUN_00567458 at 0056747e
;
; Referenced Globals:
;   void* PTR_VirtualQuery_005755dc = 001760f2
;   undefined1 DAT_005c1d0f
;   undefined2 DAT_005c1d11
;
; Called Functions:
;   VirtualQuery
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056e9d0
        ;   Label: crt_memory.c___GetStackLimits_FUN_0056e9d0
    PUSH ESI                            ; 0056e9d1
    SUB ESP,0x20                        ; 0056e9d2
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0056e9d5
    PUSH 0x1c                           ; 0056e9d9
    LEA EAX,[ESP + 0x4]                 ; 0056e9db
    PUSH EAX                            ; 0056e9df
    LEA EAX,[ESP + 0x24]                ; 0056e9e0
    PUSH EAX                            ; 0056e9e4
    CALL dword ptr CS:[0x5755dc]        ; 0056e9e5 | PTR_VirtualQuery_005755dc
    MOV EDX,dword ptr [ESP]             ; 0056e9ec
    ADD EDX,dword ptr [ESP + 0xc]       ; 0056e9ef
    MOV CX,word ptr [0x005c1d11]        ; 0056e9f3 | DAT_005c1d11
    MOV EAX,dword ptr [ESP + 0x4]       ; 0056e9fa
    CMP CX,0x8000                       ; 0056e9fe
    JNC 0x0056ea0c                      ; 0056ea03
        ;   XREF to: 0056ea0c (CONDITIONAL_JUMP)  ; LAB_0056ea0c
    ADD EAX,0x3000                      ; 0056ea05
    JMP 0x0056ea23                      ; 0056ea0a
        ;   XREF to: 0056ea23 (UNCONDITIONAL_JUMP)  ; LAB_0056ea23
    JC 0x0056ea1e                       ; 0056ea0c
        ;   XREF to: 0056ea1e (CONDITIONAL_JUMP)  ; LAB_0056ea1e
        ;   Label: LAB_0056ea0c
    CMP byte ptr [0x005c1d0f],0x4       ; 0056ea0e | DAT_005c1d0f
    JNC 0x0056ea1e                      ; 0056ea15
        ;   XREF to: 0056ea1e (CONDITIONAL_JUMP)  ; LAB_0056ea1e
    ADD EAX,0x12000                     ; 0056ea17
    JMP 0x0056ea23                      ; 0056ea1c
        ;   XREF to: 0056ea23 (UNCONDITIONAL_JUMP)  ; LAB_0056ea23
    ADD EAX,0x13000                     ; 0056ea1e
        ;   Label: LAB_0056ea1e
    TEST EBX,EBX                        ; 0056ea23
        ;   Label: LAB_0056ea23
    JZ 0x0056ea29                       ; 0056ea25
        ;   XREF to: 0056ea29 (CONDITIONAL_JUMP)  ; LAB_0056ea29
    MOV dword ptr [EBX],EAX             ; 0056ea27
    MOV ESI,dword ptr [ESP + 0x30]      ; 0056ea29
        ;   Label: LAB_0056ea29
    TEST ESI,ESI                        ; 0056ea2d
    JZ 0x0056ea33                       ; 0056ea2f
        ;   XREF to: 0056ea33 (CONDITIONAL_JUMP)  ; LAB_0056ea33
    MOV dword ptr [ESI],EDX             ; 0056ea31
    ADD ESP,0x20                        ; 0056ea33
        ;   Label: LAB_0056ea33
    POP ESI                             ; 0056ea36
    POP EBX                             ; 0056ea37
    RET                                 ; 0056ea38

