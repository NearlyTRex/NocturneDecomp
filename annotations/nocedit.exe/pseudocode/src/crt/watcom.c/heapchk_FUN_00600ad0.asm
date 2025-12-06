; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl undefined crt_watcom.c_heapchk_FUN_00600ad0()
;
;
; XREF[1]:
;   shape_design.c_displayHeapStatus_FUN_0046e760 at 0046e76c
;
; Referenced Globals:
;   Heap* g_MainHeap = 00000000
;   void* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f00 = 00602434
;   void* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f08 = 00602434
;   undefined1 DAT_03f9b850
;
; Called Functions:
;   crt_heap.c_heapWalk_FUN_006012d0
;   crt_sync.c_CriticalSectionStub_FUN_00602434
;   crt_unknown.c_FUN_00600990
;   crt_unknown.c_FUN_00600a64
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00600ad0
        ;   Label: crt_watcom.c_heapchk_FUN_00600ad0
    SUB ESP,0x14                        ; 00600ad1
    CALL dword ptr [0x00684f00]         ; 00600ad4 | void * PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f00
    CMP byte ptr [0x03f9b850],0x0       ; 00600ada | undefined1 DAT_03f9b850
    JZ 0x00600af0                       ; 00600ae1 | LAB_00600af0
        ;   XREF to: 00600af0 (CONDITIONAL_JUMP)
    CALL dword ptr [0x00684f08]         ; 00600ae3 | void * PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f08
    XOR EAX,EAX                         ; 00600ae9
    ADD ESP,0x14                        ; 00600aeb
    POP EBX                             ; 00600aee
    RET                                 ; 00600aef
    LEA EAX,[ESP + 0x10]                ; 00600af0
        ;   Label: LAB_00600af0
    PUSH EAX                            ; 00600af4
    CALL crt_unknown.c_FUN_00600990     ; 00600af5 | undefined crt_unknown.c_FUN_00600990()
        ;   XREF to: 00600990 (UNCONDITIONAL_CALL)
    MOV EBX,EAX                         ; 00600afa
    ADD ESP,0x4                         ; 00600afc
    TEST EAX,EAX                        ; 00600aff
    JNZ 0x00600b87                      ; 00600b01 | LAB_00600b87
        ;   XREF to: 00600b87 (CONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 00600b07
    MOV dword ptr [ESP],EAX             ; 00600b09
    MOV word ptr [ESP + 0x4],DX         ; 00600b0c
    MOV EBX,dword ptr [0x00684ed4]      ; 00600b11 | Heap * g_MainHeap
        ;   Label: LAB_00600b11
    PUSH EBX                            ; 00600b17
    LEA EAX,[ESP + 0x4]                 ; 00600b18
    PUSH EAX                            ; 00600b1c
    CALL crt_heap.c_heapWalk_FUN_006012d0 ; 00600b1d | int crt_heap.c_heapWalk_FUN_006012d0(HeapState * heap_state_ptr, Heap * heap_ptr)
        ;   XREF to: 006012d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00600b22
    MOV EBX,EAX                         ; 00600b25
    TEST EAX,EAX                        ; 00600b27
    JNZ 0x00600b4e                      ; 00600b29 | LAB_00600b4e
        ;   XREF to: 00600b4e (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0xa],0x1       ; 00600b2b
    JNZ 0x00600b11                      ; 00600b30 | LAB_00600b11
        ;   XREF to: 00600b11 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP]             ; 00600b32
    PUSH EAX                            ; 00600b35
    CALL crt_unknown.c_FUN_00600a64     ; 00600b36 | undefined crt_unknown.c_FUN_00600a64()
        ;   XREF to: 00600a64 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00600b3b
    MOV EBX,EAX                         ; 00600b3e
    TEST EAX,EAX                        ; 00600b40
    JNZ 0x00600b4e                      ; 00600b42 | LAB_00600b4e
        ;   XREF to: 00600b4e (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x6]       ; 00600b44
    SUB dword ptr [ESP + 0x10],EAX      ; 00600b48
    JMP 0x00600b11                      ; 00600b4c | LAB_00600b11
        ;   XREF to: 00600b11 (UNCONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x10],0x0      ; 00600b4e
        ;   Label: LAB_00600b4e
    JZ 0x00600b5c                       ; 00600b53 | LAB_00600b5c
        ;   XREF to: 00600b5c (CONDITIONAL_JUMP)
    MOV EBX,0x3                         ; 00600b55
    JMP 0x00600b87                      ; 00600b5a | LAB_00600b87
        ;   XREF to: 00600b87 (UNCONDITIONAL_JUMP)
    CMP EBX,0x5                         ; 00600b5c
        ;   Label: LAB_00600b5c
    JNZ 0x00600b73                      ; 00600b5f | LAB_00600b73
        ;   XREF to: 00600b73 (CONDITIONAL_JUMP)
    MOV EBX,0x3                         ; 00600b61
    CALL dword ptr [0x00684f08]         ; 00600b66 | void * PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f08
    MOV EAX,EBX                         ; 00600b6c
    ADD ESP,0x14                        ; 00600b6e
    POP EBX                             ; 00600b71
    RET                                 ; 00600b72
    CMP EBX,0x4                         ; 00600b73
        ;   Label: LAB_00600b73
    JNZ 0x00600b7c                      ; 00600b76 | LAB_00600b7c
        ;   XREF to: 00600b7c (CONDITIONAL_JUMP)
    XOR EBX,EBX                         ; 00600b78
    JMP 0x00600b80                      ; 00600b7a | LAB_00600b80
        ;   XREF to: 00600b80 (UNCONDITIONAL_JUMP)
    TEST EBX,EBX                        ; 00600b7c
        ;   Label: LAB_00600b7c
    JNZ 0x00600b87                      ; 00600b7e | LAB_00600b87
        ;   XREF to: 00600b87 (CONDITIONAL_JUMP)
    MOV byte ptr [0x03f9b850],0x1       ; 00600b80 | undefined1 DAT_03f9b850
        ;   Label: LAB_00600b80
    CALL dword ptr [0x00684f08]         ; 00600b87 | void * PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f08
        ;   Label: LAB_00600b87
    MOV EAX,EBX                         ; 00600b8d
    ADD ESP,0x14                        ; 00600b8f
    POP EBX                             ; 00600b92
    RET                                 ; 00600b93

