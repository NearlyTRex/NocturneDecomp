; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_heap.c_UnlinkAndFreeBlock_FUN_0060c9bc(HeapBlock * block)
;
; Parameters:
; HeapBlock *      Stack[0x4]:4   block
;
; XREF[1]:
;   crt_heap.c_CompactHeapBlocks_FUN_0060c920 at 0060c943
;
; Referenced Globals:
;   Heap* g_MainHeap = 00000000
;
; Called Functions:
;   crt_heap.c_VirtualFreeBlock_FUN_0060c95c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060c9bc
        ;   Label: crt_heap.c_UnlinkAndFreeBlock_FUN_0060c9bc
    PUSH ESI                            ; 0060c9bd
    MOV EAX,dword ptr [ESP + 0xc]       ; 0060c9be
    PUSH EAX                            ; 0060c9c2
    MOV ESI,dword ptr [EAX + 0x4]       ; 0060c9c3
    MOV EBX,dword ptr [EAX + 0x8]       ; 0060c9c6
    CALL crt_heap.c_VirtualFreeBlock_FUN_0060c95c ; 0060c9c9
        ;   XREF to: 0060c95c (UNCONDITIONAL_CALL)  ; int crt_heap.c_VirtualFreeBlock_FUN_0060c95c(HeapBlock * block)
    ADD ESP,0x4                         ; 0060c9ce
    TEST EAX,EAX                        ; 0060c9d1
    JNZ 0x0060c9eb                      ; 0060c9d3
        ;   XREF to: 0060c9eb (CONDITIONAL_JUMP)  ; LAB_0060c9eb
    TEST ESI,ESI                        ; 0060c9d5
    JNZ 0x0060c9e1                      ; 0060c9d7
        ;   XREF to: 0060c9e1 (CONDITIONAL_JUMP)  ; LAB_0060c9e1
    MOV dword ptr [0x00684ed4],EBX      ; 0060c9d9 | g_MainHeap
    JMP 0x0060c9e4                      ; 0060c9df
        ;   XREF to: 0060c9e4 (UNCONDITIONAL_JUMP)  ; LAB_0060c9e4
    MOV dword ptr [ESI + 0x8],EBX       ; 0060c9e1
        ;   Label: LAB_0060c9e1
    TEST EBX,EBX                        ; 0060c9e4
        ;   Label: LAB_0060c9e4
    JZ 0x0060c9eb                       ; 0060c9e6
        ;   XREF to: 0060c9eb (CONDITIONAL_JUMP)  ; LAB_0060c9eb
    MOV dword ptr [EBX + 0x4],ESI       ; 0060c9e8
    POP ESI                             ; 0060c9eb
        ;   Label: LAB_0060c9eb
    POP EBX                             ; 0060c9ec
    RET                                 ; 0060c9ed

