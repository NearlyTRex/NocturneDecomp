; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c9fa0(void)
;
;
; Referenced Globals:
;   undefined1 DAT_006262e0
;   undefined4 DAT_00626315
;   undefined4 DAT_02c9f050
;   undefined4 DAT_02c9f054
;
; Called Functions:
;   crt_memory.c_malloc_FUN_005c08d0
;   crt_unknown.c_FUN_005c9f70
;   crt_unknown.c_InternalHeapAlloc_FUN_005c08e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c9fa0
        ;   Label: crt_unknown.c_FUN_005c9fa0
    PUSH ESI                            ; 005c9fa1
    MOV AH,byte ptr [0x00626315]        ; 005c9fa2 | DAT_00626315
    AND AH,0xf8                         ; 005c9fa8
    MOV DL,AH                           ; 005c9fab
    MOV byte ptr [0x00626315],AH        ; 005c9fad | DAT_00626315
    OR DL,0x4                           ; 005c9fb3
    MOV byte ptr [0x00626315],DL        ; 005c9fb6 | DAT_00626315
    MOV EDX,dword ptr [0x006262e0]      ; 005c9fbc | DAT_006262e0
    MOV EBX,0x6262d4                    ; 005c9fc2
    TEST EDX,EDX                        ; 005c9fc7
    JZ 0x005ca031                       ; 005c9fc9
        ;   XREF to: 005ca031 (CONDITIONAL_JUMP)  ; LAB_005ca031
    PUSH 0x1d                           ; 005c9fcb
        ;   Label: LAB_005c9fcb
    CALL crt_unknown.c_InternalHeapAlloc_FUN_005c08e0 ; 005c9fcd
        ;   XREF to: 005c08e0 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_InternalHeapAlloc_FUN_005c08e0(ulong size)
    ADD ESP,0x4                         ; 005c9fd2
    TEST EAX,EAX                        ; 005c9fd5
    JNZ 0x005c9ffa                      ; 005c9fd7
        ;   XREF to: 005c9ffa (CONDITIONAL_JUMP)  ; LAB_005c9ffa
    PUSH 0x1d                           ; 005c9fd9
    CALL crt_memory.c_malloc_FUN_005c08d0 ; 005c9fdb
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 005c9fe0
    MOV ESI,EAX                         ; 005c9fe3
    TEST EAX,EAX                        ; 005c9fe5
    JNZ 0x005c9ffc                      ; 005c9fe7
        ;   XREF to: 005c9ffc (CONDITIONAL_JUMP)  ; LAB_005c9ffc
    PUSH 0x1                            ; 005c9fe9
    PUSH 0x5fac04                       ; 005c9feb
    CALL crt_unknown.c_FUN_005c9f70     ; 005c9ff0
        ;   XREF to: 005c9f70 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c9f70()
    ADD ESP,0x8                         ; 005c9ff5
    JMP 0x005c9ffc                      ; 005c9ff8
        ;   XREF to: 005c9ffc (UNCONDITIONAL_JUMP)  ; LAB_005c9ffc
    MOV ESI,EAX                         ; 005c9ffa
        ;   Label: LAB_005c9ffa
    MOV EAX,[0x02c9f050]                ; 005c9ffc | DAT_02c9f050
        ;   Label: LAB_005c9ffc
    MOV dword ptr [ESI + 0x4],EBX       ; 005ca001
    MOV dword ptr [ESI],EAX             ; 005ca004
    MOV dword ptr [EBX + 0x8],ESI       ; 005ca006
    MOV dword ptr [ESI + 0x8],0x0       ; 005ca009
    MOV EAX,dword ptr [EBX + 0x8]       ; 005ca010
    MOV byte ptr [EAX + 0x14],0x0       ; 005ca013
    MOV EAX,dword ptr [EBX + 0x8]       ; 005ca017
    MOV dword ptr [EAX + 0xc],0x0       ; 005ca01a
    MOV dword ptr [0x02c9f050],ESI      ; 005ca021 | DAT_02c9f050
    MOV ECX,dword ptr [EBX + 0x26]      ; 005ca027
    ADD EBX,0x1a                        ; 005ca02a
    TEST ECX,ECX                        ; 005ca02d
    JNZ 0x005c9fcb                      ; 005ca02f
        ;   XREF to: 005c9fcb (CONDITIONAL_JUMP)  ; LAB_005c9fcb
    XOR ESI,ESI                         ; 005ca031
        ;   Label: LAB_005ca031
    MOV dword ptr [0x02c9f054],ESI      ; 005ca033 | DAT_02c9f054
    POP ESI                             ; 005ca039
    POP EBX                             ; 005ca03a
    RET                                 ; 005ca03b

