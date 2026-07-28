; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl crt_heap_c_TryResizeInPlace_FUN_0056b1a4(void *ptr,ulong new_size)
;
; Parameters:
; void *           Stack[0x4]:4   ptr
; ulong            Stack[0x8]:4   new_size
;
; XREF[2]:
;   FUN_0056afd0 at 0056afdb
;   crt_unknown.c_realloc__FUN_00564a88 at 00564ac7
;
; Referenced Globals:
;   undefined4 DAT_005c1680
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ad8 = 005671e4
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ae0 = 005671e4
;
; Called Functions:
;   crt_heap.c_ResizeBlockInPlace_FUN_0056afe8
;   crt_sync.c_CriticalSectionStub_FUN_005671e4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056b1a4
        ;   Label: crt_heap.c_TryResizeInPlace_FUN_0056b1a4
    SUB ESP,0x4                         ; 0056b1a5
    CALL dword ptr [0x005c1ad8]         ; 0056b1a8 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ad8
    MOV EAX,ESP                         ; 0056b1ae
    PUSH EAX                            ; 0056b1b0
    MOV EDX,dword ptr [ESP + 0x14]      ; 0056b1b1
    PUSH EDX                            ; 0056b1b5
    MOV EBX,dword ptr [ESP + 0x14]      ; 0056b1b6
    PUSH EBX                            ; 0056b1ba
    MOV EAX,0x5c1680                    ; 0056b1bb | DAT_005c1680
    MOV DX,DS                           ; 0056b1c0
    XOR EAX,EAX                         ; 0056b1c2
    MOV AX,DX                           ; 0056b1c4
    PUSH EAX                            ; 0056b1c7
    CALL crt_heap.c_ResizeBlockInPlace_FUN_0056afe8 ; 0056b1c8
        ;   XREF to: 0056afe8 (UNCONDITIONAL_CALL)  ; undefined crt_heap.c_ResizeBlockInPlace_FUN_0056afe8()
    ADD ESP,0x10                        ; 0056b1cd
    TEST EAX,EAX                        ; 0056b1d0
    JNZ 0x0056b1e1                      ; 0056b1d2
        ;   XREF to: 0056b1e1 (CONDITIONAL_JUMP)  ; LAB_0056b1e1
    CALL dword ptr [0x005c1ae0]         ; 0056b1d4 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ae0
    MOV EAX,EBX                         ; 0056b1da
    ADD ESP,0x4                         ; 0056b1dc
    POP EBX                             ; 0056b1df
    RET                                 ; 0056b1e0
    CALL dword ptr [0x005c1ae0]         ; 0056b1e1 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ae0
        ;   Label: LAB_0056b1e1
    XOR EAX,EAX                         ; 0056b1e7
    ADD ESP,0x4                         ; 0056b1e9
    POP EBX                             ; 0056b1ec
    RET                                 ; 0056b1ed

