; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_ioinit.c_staticInit_FUN_00608f20(void)
;
;
; Referenced Globals:
;   TerminatedCString s_Not_enough_memory_to_all_00659070
;   FILE* g_StaticFilePoolStart = 00000000
;   undefined4 DAT_00684ccc
;   undefined4 DAT_00684cd0
;   undefined4 DAT_00684cea
;   undefined1 DAT_00684d05
;   FileListNode* g_AllocatedListHead
;   undefined4 g_FreeListHeadPointer
;
; Called Functions:
;   crt_heap.c_InternalHeapAlloc_FUN_00601bc0
;   crt_memory.c_malloc_FUN_00601bb0
;   crt_startup.c_HandleRuntimeError_FUN_00606660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00608f20
        ;   Label: crt_ioinit.c_staticInit_FUN_00608f20
    PUSH ESI                            ; 00608f21
    MOV AH,byte ptr [0x00684d05]        ; 00608f22 | DAT_00684d05
    AND AH,0xf8                         ; 00608f28
    MOV DL,AH                           ; 00608f2b
    MOV byte ptr [0x00684d05],AH        ; 00608f2d | DAT_00684d05
    OR DL,0x4                           ; 00608f33
    MOV byte ptr [0x00684d05],DL        ; 00608f36 | DAT_00684d05
    MOV EDX,dword ptr [0x00684cd0]      ; 00608f3c | DAT_00684cd0
    MOV EBX,0x684cc4                    ; 00608f42 | g_StaticFilePoolStart
    TEST EDX,EDX                        ; 00608f47
    JZ 0x00608fb1                       ; 00608f49
        ;   XREF to: 00608fb1 (CONDITIONAL_JUMP)  ; LAB_00608fb1
    PUSH 0x1d                           ; 00608f4b
        ;   Label: LAB_00608f4b
    CALL crt_heap.c_InternalHeapAlloc_FUN_00601bc0 ; 00608f4d
        ;   XREF to: 00601bc0 (UNCONDITIONAL_CALL)  ; void * crt_heap.c_InternalHeapAlloc_FUN_00601bc0(ulong size)
    ADD ESP,0x4                         ; 00608f52
    TEST EAX,EAX                        ; 00608f55
    JNZ 0x00608f7a                      ; 00608f57
        ;   XREF to: 00608f7a (CONDITIONAL_JUMP)  ; LAB_00608f7a
    PUSH 0x1d                           ; 00608f59
    CALL crt_memory.c_malloc_FUN_00601bb0 ; 00608f5b
        ;   XREF to: 00601bb0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_00601bb0(ulong size)
    ADD ESP,0x4                         ; 00608f60
    MOV ESI,EAX                         ; 00608f63
    TEST EAX,EAX                        ; 00608f65
    JNZ 0x00608f7c                      ; 00608f67
        ;   XREF to: 00608f7c (CONDITIONAL_JUMP)  ; LAB_00608f7c
    PUSH 0x1                            ; 00608f69
    PUSH 0x659070                       ; 00608f6b | = "Not enough memory to allocate file st..."
    CALL crt_startup.c_HandleRuntimeError_FUN_00606660 ; 00608f70
        ;   XREF to: 00606660 (UNCONDITIONAL_CALL)  ; void crt_startup.c_HandleRuntimeError_FUN_00606660(char * error_message, int error_level)
    ADD ESP,0x8                         ; 00608f75
    JMP 0x00608f7c                      ; 00608f78
        ;   XREF to: 00608f7c (UNCONDITIONAL_JUMP)  ; LAB_00608f7c
    MOV ESI,EAX                         ; 00608f7a
        ;   Label: LAB_00608f7a
    MOV EAX,[0x03f9b200]                ; 00608f7c | g_AllocatedListHead
        ;   Label: LAB_00608f7c
    MOV dword ptr [ESI + 0x4],EBX       ; 00608f81 | g_StaticFilePoolStart
    MOV dword ptr [ESI],EAX             ; 00608f84
    MOV dword ptr [EBX + 0x8],ESI       ; 00608f86 | DAT_00684ccc
    MOV dword ptr [ESI + 0x8],0x0       ; 00608f89
    MOV EAX,dword ptr [EBX + 0x8]       ; 00608f90 | DAT_00684ccc
    MOV byte ptr [EAX + 0x14],0x0       ; 00608f93
    MOV EAX,dword ptr [EBX + 0x8]       ; 00608f97 | DAT_00684ccc
    MOV dword ptr [EAX + 0xc],0x0       ; 00608f9a
    MOV dword ptr [0x03f9b200],ESI      ; 00608fa1 | g_AllocatedListHead
    MOV ECX,dword ptr [EBX + 0x26]      ; 00608fa7 | DAT_00684cea
    ADD EBX,0x1a                        ; 00608faa
    TEST ECX,ECX                        ; 00608fad
    JNZ 0x00608f4b                      ; 00608faf
        ;   XREF to: 00608f4b (CONDITIONAL_JUMP)  ; LAB_00608f4b
    XOR ESI,ESI                         ; 00608fb1
        ;   Label: LAB_00608fb1
    MOV dword ptr [0x03f9b204],ESI      ; 00608fb3 | g_FreeListHeadPointer
    POP ESI                             ; 00608fb9
    POP EBX                             ; 00608fba
    RET                                 ; 00608fbb

