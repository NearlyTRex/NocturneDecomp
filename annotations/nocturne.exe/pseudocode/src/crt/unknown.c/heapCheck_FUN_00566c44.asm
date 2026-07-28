; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_unknown_c_heapCheck_FUN_00566c44(void *heap_state_ptr)
;
; Parameters:
; void *           Stack[0x4]:4   heap_state_ptr
;
; XREF[1]:
;   crt_heap.c__heapwalk_FUN_00566b90 at 00566b95
;
; Referenced Globals:
;   undefined4 DAT_005c1680
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ad8 = 005671e4
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ae0 = 005671e4
;
; Called Functions:
;   crt_sync.c_CriticalSectionStub_FUN_005671e4
;   crt_unknown.c_heapWalk_FUN_00566ba0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566c44
        ;   Label: crt_unknown.c_heapCheck_FUN_00566c44
    CALL dword ptr [0x005c1ad8]         ; 00566c45 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ad8
    MOV EDX,dword ptr [0x005c1680]      ; 00566c4b | DAT_005c1680
    PUSH EDX                            ; 00566c51
    MOV EBX,dword ptr [ESP + 0xc]       ; 00566c52
    PUSH EBX                            ; 00566c56
    CALL crt_unknown.c_heapWalk_FUN_00566ba0 ; 00566c57
        ;   XREF to: 00566ba0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_heapWalk_FUN_00566ba0(HeapState * heap_state_ptr, Heap * heap_ptr)
    ADD ESP,0x8                         ; 00566c5c
    MOV EBX,EAX                         ; 00566c5f
    CALL dword ptr [0x005c1ae0]         ; 00566c61 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ae0
    MOV EAX,EBX                         ; 00566c67
    POP EBX                             ; 00566c69
    RET                                 ; 00566c6a

