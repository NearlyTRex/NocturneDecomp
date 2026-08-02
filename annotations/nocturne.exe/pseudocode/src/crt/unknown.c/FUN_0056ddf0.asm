; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056ddf0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_Not_enough_memory_to_all_00598bec
;   undefined1 DAT_005c18a0
;   undefined4 DAT_005c18d5
;   undefined4 DAT_02de4e20
;   undefined4 DAT_02de4e24
;
; Called Functions:
;   crt_memory.c_malloc_FUN_005635b0
;   crt_startup.c_HandleRuntimeError_FUN_0056ddc0
;   crt_unknown.c_InternalHeapAlloc_FUN_005635c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056ddf0
        ;   Label: crt_unknown.c_FUN_0056ddf0
    PUSH ESI                            ; 0056ddf1
    MOV AH,byte ptr [0x005c18d5]        ; 0056ddf2 | DAT_005c18d5
    AND AH,0xf8                         ; 0056ddf8
    MOV DL,AH                           ; 0056ddfb
    MOV byte ptr [0x005c18d5],AH        ; 0056ddfd | DAT_005c18d5
    OR DL,0x4                           ; 0056de03
    MOV byte ptr [0x005c18d5],DL        ; 0056de06 | DAT_005c18d5
    MOV EDX,dword ptr [0x005c18a0]      ; 0056de0c | DAT_005c18a0
    MOV EBX,0x5c1894                    ; 0056de12
    TEST EDX,EDX                        ; 0056de17
    JZ 0x0056de81                       ; 0056de19
        ;   XREF to: 0056de81 (CONDITIONAL_JUMP)  ; LAB_0056de81
    PUSH 0x1d                           ; 0056de1b
        ;   Label: LAB_0056de1b
    CALL crt_unknown.c_InternalHeapAlloc_FUN_005635c0 ; 0056de1d
        ;   XREF to: 005635c0 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_InternalHeapAlloc_FUN_005635c0(ulong size)
    ADD ESP,0x4                         ; 0056de22
    TEST EAX,EAX                        ; 0056de25
    JNZ 0x0056de4a                      ; 0056de27
        ;   XREF to: 0056de4a (CONDITIONAL_JUMP)  ; LAB_0056de4a
    PUSH 0x1d                           ; 0056de29
    CALL crt_memory.c_malloc_FUN_005635b0 ; 0056de2b
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005635b0(ulong size)
    ADD ESP,0x4                         ; 0056de30
    MOV ESI,EAX                         ; 0056de33
    TEST EAX,EAX                        ; 0056de35
    JNZ 0x0056de4c                      ; 0056de37
        ;   XREF to: 0056de4c (CONDITIONAL_JUMP)  ; LAB_0056de4c
    PUSH 0x1                            ; 0056de39
    PUSH 0x598bec                       ; 0056de3b | = "Not enough memory to allocate file st..."
    CALL crt_startup.c_HandleRuntimeError_FUN_0056ddc0 ; 0056de40
        ;   XREF to: 0056ddc0 (UNCONDITIONAL_CALL)  ; void crt_startup.c_HandleRuntimeError_FUN_0056ddc0(char * error_message, int error_level)
    ADD ESP,0x8                         ; 0056de45
    JMP 0x0056de4c                      ; 0056de48
        ;   XREF to: 0056de4c (UNCONDITIONAL_JUMP)  ; LAB_0056de4c
    MOV ESI,EAX                         ; 0056de4a
        ;   Label: LAB_0056de4a
    MOV EAX,[0x02de4e20]                ; 0056de4c | DAT_02de4e20
        ;   Label: LAB_0056de4c
    MOV dword ptr [ESI + 0x4],EBX       ; 0056de51
    MOV dword ptr [ESI],EAX             ; 0056de54
    MOV dword ptr [EBX + 0x8],ESI       ; 0056de56
    MOV dword ptr [ESI + 0x8],0x0       ; 0056de59
    MOV EAX,dword ptr [EBX + 0x8]       ; 0056de60
    MOV byte ptr [EAX + 0x14],0x0       ; 0056de63
    MOV EAX,dword ptr [EBX + 0x8]       ; 0056de67
    MOV dword ptr [EAX + 0xc],0x0       ; 0056de6a
    MOV dword ptr [0x02de4e20],ESI      ; 0056de71 | DAT_02de4e20
    MOV ECX,dword ptr [EBX + 0x26]      ; 0056de77
    ADD EBX,0x1a                        ; 0056de7a
    TEST ECX,ECX                        ; 0056de7d
    JNZ 0x0056de1b                      ; 0056de7f
        ;   XREF to: 0056de1b (CONDITIONAL_JUMP)  ; LAB_0056de1b
    XOR ESI,ESI                         ; 0056de81
        ;   Label: LAB_0056de81
    MOV dword ptr [0x02de4e24],ESI      ; 0056de83 | DAT_02de4e24
    POP ESI                             ; 0056de89
    POP EBX                             ; 0056de8a
    RET                                 ; 0056de8b

