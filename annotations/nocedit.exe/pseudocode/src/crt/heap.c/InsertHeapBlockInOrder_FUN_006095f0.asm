; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl HeapBlock * crt_heap.c_InsertHeapBlockInOrder_FUN_006095f0(HeapBlock * new_block)
;
; Parameters:
; HeapBlock *      Stack[0x4]:4   new_block
;
; XREF[1]:
;   crt_heap.c_AllocateNewHeapBlock_FUN_00609668 at 006096e0
;
; Referenced Globals:
;   Heap* g_MainHeap = 00000000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 006095f0
        ;   Label: crt_heap.c_InsertHeapBlockInOrder_FUN_006095f0
    MOV EDX,dword ptr [ESP + 0x8]       ; 006095f1
    MOV EAX,[0x00684ed4]                ; 006095f5 | Heap * g_MainHeap
    XOR EBX,EBX                         ; 006095fa
    TEST EAX,EAX                        ; 006095fc
    JZ 0x0060960d                       ; 006095fe | LAB_0060960d
        ;   XREF to: 0060960d (CONDITIONAL_JUMP)
    CMP EDX,EAX                         ; 00609600
        ;   Label: LAB_00609600
    JC 0x0060960d                       ; 00609602 | LAB_0060960d
        ;   XREF to: 0060960d (CONDITIONAL_JUMP)
    MOV EBX,EAX                         ; 00609604
    MOV EAX,dword ptr [EAX + 0x8]       ; 00609606
    TEST EAX,EAX                        ; 00609609
    JNZ 0x00609600                      ; 0060960b | LAB_00609600
        ;   XREF to: 00609600 (CONDITIONAL_JUMP)
    MOV dword ptr [EDX + 0x4],EBX       ; 0060960d
        ;   Label: LAB_0060960d
    MOV dword ptr [EDX + 0x8],EAX       ; 00609610
    TEST EBX,EBX                        ; 00609613
    JZ 0x0060961c                       ; 00609615 | LAB_0060961c
        ;   XREF to: 0060961c (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x8],EDX       ; 00609617
    JMP 0x00609622                      ; 0060961a | LAB_00609622
        ;   XREF to: 00609622 (UNCONDITIONAL_JUMP)
    MOV dword ptr [0x00684ed4],EDX      ; 0060961c | Heap * g_MainHeap
        ;   Label: LAB_0060961c
    TEST EAX,EAX                        ; 00609622
        ;   Label: LAB_00609622
    JZ 0x00609629                       ; 00609624 | LAB_00609629
        ;   XREF to: 00609629 (CONDITIONAL_JUMP)
    MOV dword ptr [EAX + 0x4],EDX       ; 00609626
    LEA EBX,[EDX + 0x20]                ; 00609629
        ;   Label: LAB_00609629
    ADD EDX,0x2c                        ; 0060962c
    MOV dword ptr [EDX + -0xc],0x0      ; 0060962f
    MOV dword ptr [EDX + -0x1c],0x0     ; 00609636
    MOV dword ptr [EDX + -0x14],0x0     ; 0060963d
    MOV dword ptr [EDX + -0x10],0x0     ; 00609644
    MOV dword ptr [EDX + -0x8],EBX      ; 0060964b
    MOV EAX,dword ptr [EDX + -0x2c]     ; 0060964e
    MOV dword ptr [EDX + -0x4],EBX      ; 00609651
    SUB EAX,0x2c                        ; 00609654
    MOV dword ptr [EDX + -0x20],EBX     ; 00609657
    MOV dword ptr [EDX],EAX             ; 0060965a
    MOV dword ptr [EDX + EAX*0x1],0xffffffff ; 0060965c
    MOV EAX,EDX                         ; 00609663
    POP EBX                             ; 00609665
    RET                                 ; 00609666

