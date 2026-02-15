; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl crt_memory_c_realloc__FUN_00601e08(void *ptr,ulong new_size)
;
; Parameters:
; void *           Stack[0x4]:4   ptr
; ulong            Stack[0x8]:4   new_size
;
; XREF[1]:
;   crt_memory.c_realloc_FUN_00601df0 at 00601dfb
;
; Called Functions:
;   crt_heap.c_GetBlockSize_FUN_00609790
;   crt_heap.c_InternalHeapAlloc_FUN_00601bc0
;   crt_heap.c_TryResizeInPlace_FUN_00609974
;   crt_heap.c_ValidateHeapIntegrity_FUN_00601ce0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00601e08
        ;   Label: crt_memory.c_realloc__FUN_00601e08
    PUSH ESI                            ; 00601e09
    PUSH EDI                            ; 00601e0a
    PUSH EBP                            ; 00601e0b
    MOV EBX,dword ptr [ESP + 0x14]      ; 00601e0c
    MOV EDI,dword ptr [ESP + 0x18]      ; 00601e10
    TEST EBX,EBX                        ; 00601e14
    JNZ 0x00601e26                      ; 00601e16
        ;   XREF to: 00601e26 (CONDITIONAL_JUMP)  ; LAB_00601e26
    PUSH EDI                            ; 00601e18
    CALL crt_heap.c_InternalHeapAlloc_FUN_00601bc0 ; 00601e19
        ;   XREF to: 00601bc0 (UNCONDITIONAL_CALL)  ; void * crt_heap.c_InternalHeapAlloc_FUN_00601bc0(ulong size)
    ADD ESP,0x4                         ; 00601e1e
    POP EBP                             ; 00601e21
    POP EDI                             ; 00601e22
    POP ESI                             ; 00601e23
    POP EBX                             ; 00601e24
    RET                                 ; 00601e25
    TEST EDI,EDI                        ; 00601e26
        ;   Label: LAB_00601e26
    JNZ 0x00601e3a                      ; 00601e28
        ;   XREF to: 00601e3a (CONDITIONAL_JUMP)  ; LAB_00601e3a
    PUSH EBX                            ; 00601e2a
    CALL crt_heap.c_ValidateHeapIntegrity_FUN_00601ce0 ; 00601e2b
        ;   XREF to: 00601ce0 (UNCONDITIONAL_CALL)  ; void crt_heap.c_ValidateHeapIntegrity_FUN_00601ce0(void * ptr)
    ADD ESP,0x4                         ; 00601e30
    XOR EAX,EAX                         ; 00601e33
    POP EBP                             ; 00601e35
    POP EDI                             ; 00601e36
    POP ESI                             ; 00601e37
    POP EBX                             ; 00601e38
    RET                                 ; 00601e39
    PUSH EBX                            ; 00601e3a
        ;   Label: LAB_00601e3a
    CALL crt_heap.c_GetBlockSize_FUN_00609790 ; 00601e3b
        ;   XREF to: 00609790 (UNCONDITIONAL_CALL)  ; ulong crt_heap.c_GetBlockSize_FUN_00609790(void * ptr)
    ADD ESP,0x4                         ; 00601e40
    PUSH EDI                            ; 00601e43
    PUSH EBX                            ; 00601e44
    MOV ESI,EAX                         ; 00601e45
    CALL crt_heap.c_TryResizeInPlace_FUN_00609974 ; 00601e47
        ;   XREF to: 00609974 (UNCONDITIONAL_CALL)  ; void * crt_heap.c_TryResizeInPlace_FUN_00609974(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 00601e4c
    MOV EBP,EAX                         ; 00601e4f
    TEST EAX,EAX                        ; 00601e51
    JNZ 0x00601e95                      ; 00601e53
        ;   XREF to: 00601e95 (CONDITIONAL_JUMP)  ; LAB_00601e95
    PUSH EDI                            ; 00601e55
    CALL crt_heap.c_InternalHeapAlloc_FUN_00601bc0 ; 00601e56
        ;   XREF to: 00601bc0 (UNCONDITIONAL_CALL)  ; void * crt_heap.c_InternalHeapAlloc_FUN_00601bc0(ulong size)
    ADD ESP,0x4                         ; 00601e5b
    MOV EBP,EAX                         ; 00601e5e
    TEST EAX,EAX                        ; 00601e60
    JZ 0x00601e8b                       ; 00601e62
        ;   XREF to: 00601e8b (CONDITIONAL_JUMP)  ; LAB_00601e8b
    MOV ECX,ESI                         ; 00601e64
    MOV EDI,EAX                         ; 00601e66
    MOV ESI,EBX                         ; 00601e68
    PUSH ES                             ; 00601e6a
    MOV AX,DS                           ; 00601e6b
    MOV ES,AX                           ; 00601e6d
    PUSH EDI                            ; 00601e6f
    MOV EAX,ECX                         ; 00601e70
    SHR ECX,0x2                         ; 00601e72
    MOVSD.REP ES:EDI,ESI                ; 00601e75
    MOV CL,AL                           ; 00601e77
    AND CL,0x3                          ; 00601e79
    MOVSB.REP ES:EDI,ESI                ; 00601e7c
    POP EDI                             ; 00601e7e
    POP ES                              ; 00601e7f
    PUSH EBX                            ; 00601e80
    CALL crt_heap.c_ValidateHeapIntegrity_FUN_00601ce0 ; 00601e81
        ;   XREF to: 00601ce0 (UNCONDITIONAL_CALL)  ; void crt_heap.c_ValidateHeapIntegrity_FUN_00601ce0(void * ptr)
    ADD ESP,0x4                         ; 00601e86
    JMP 0x00601e95                      ; 00601e89
        ;   XREF to: 00601e95 (UNCONDITIONAL_JUMP)  ; LAB_00601e95
    PUSH ESI                            ; 00601e8b
        ;   Label: LAB_00601e8b
    PUSH EBX                            ; 00601e8c
    CALL crt_heap.c_TryResizeInPlace_FUN_00609974 ; 00601e8d
        ;   XREF to: 00609974 (UNCONDITIONAL_CALL)  ; void * crt_heap.c_TryResizeInPlace_FUN_00609974(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 00601e92
    MOV EAX,EBP                         ; 00601e95
        ;   Label: LAB_00601e95
    POP EBP                             ; 00601e97
    POP EDI                             ; 00601e98
    POP ESI                             ; 00601e99
    POP EBX                             ; 00601e9a
    RET                                 ; 00601e9b

