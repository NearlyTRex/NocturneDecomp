; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl crt_heap_c_AllocateNewHeapBlock_FUN_00609668(uint size)
;
; Parameters:
; uint             Stack[0x4]:4   size
;
; XREF[1]:
;   crt_heap.c_SystemAllocWrapper_FUN_00609718 at 00609722
;
; Referenced Globals:
;   VirtualAlloc* g_VirtualAllocFunc = 00212296
;   undefined4 DAT_00684fd0
;   undefined4 DAT_006854f0
;
; Called Functions:
;   crt_heap.c_CalculateHeapBlockSize_FUN_0060972c
;   crt_heap.c_InsertHeapBlockInOrder_FUN_006095f0
;   crt_heap.c_ValidateHeapIntegrity_FUN_00601ce0
;   VirtualAlloc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00609668
        ;   Label: crt_heap.c_AllocateNewHeapBlock_FUN_00609668
    PUSH ESI                            ; 00609669
    PUSH EDI                            ; 0060966a
    CMP dword ptr [0x006854f0],0x0      ; 0060966b | DAT_006854f0
    JNZ 0x0060967a                      ; 00609672
        ;   XREF to: 0060967a (CONDITIONAL_JUMP)  ; LAB_0060967a
    XOR EAX,EAX                         ; 00609674
    POP EDI                             ; 00609676
    POP ESI                             ; 00609677
    POP EBX                             ; 00609678
    RET                                 ; 00609679
    CMP dword ptr [0x00684fd0],-0x2     ; 0060967a | DAT_00684fd0
        ;   Label: LAB_0060967a
    JNZ 0x00609689                      ; 00609681
        ;   XREF to: 00609689 (CONDITIONAL_JUMP)  ; LAB_00609689
    XOR EAX,EAX                         ; 00609683
    POP EDI                             ; 00609685
    POP ESI                             ; 00609686
    POP EBX                             ; 00609687
    RET                                 ; 00609688
    LEA EAX,[ESP + 0x10]                ; 00609689
        ;   Label: LAB_00609689
    PUSH EAX                            ; 0060968d
    CALL crt_heap.c_CalculateHeapBlockSize_FUN_0060972c ; 0060968e
        ;   XREF to: 0060972c (UNCONDITIONAL_CALL)  ; int crt_heap.c_CalculateHeapBlockSize_FUN_0060972c(uint * pSize)
    ADD ESP,0x4                         ; 00609693
    TEST EAX,EAX                        ; 00609696
    JZ 0x00609713                       ; 00609698
        ;   XREF to: 00609713 (CONDITIONAL_JUMP)  ; LAB_00609713
    PUSH 0x40                           ; 0060969e
    PUSH 0x1000                         ; 006096a0
    MOV ECX,dword ptr [ESP + 0x18]      ; 006096a5
    PUSH ECX                            ; 006096a9
    PUSH 0x0                            ; 006096aa
    CALL dword ptr CS:[0x611660]        ; 006096ac | g_VirtualAllocFunc
    MOV EBX,EAX                         ; 006096b3
    TEST EAX,EAX                        ; 006096b5
    JZ 0x00609713                       ; 006096b7
        ;   XREF to: 00609713 (CONDITIONAL_JUMP)  ; LAB_00609713
    MOV EAX,dword ptr [ESP + 0x10]      ; 006096b9
    MOV ESI,dword ptr [ESP + 0x10]      ; 006096bd
    SUB EAX,0x4                         ; 006096c1
    CMP EAX,ESI                         ; 006096c4
    JBE 0x006096ce                      ; 006096c6
        ;   XREF to: 006096ce (CONDITIONAL_JUMP)  ; LAB_006096ce
    XOR EAX,EAX                         ; 006096c8
    POP EDI                             ; 006096ca
    POP ESI                             ; 006096cb
    POP EBX                             ; 006096cc
    RET                                 ; 006096cd
    MOV dword ptr [ESP + 0x10],EAX      ; 006096ce
        ;   Label: LAB_006096ce
    CMP EAX,0x38                        ; 006096d2
    JNC 0x006096dd                      ; 006096d5
        ;   XREF to: 006096dd (CONDITIONAL_JUMP)  ; LAB_006096dd
    XOR EAX,EAX                         ; 006096d7
    POP EDI                             ; 006096d9
    POP ESI                             ; 006096da
    POP EBX                             ; 006096db
    RET                                 ; 006096dc
    PUSH EBX                            ; 006096dd
        ;   Label: LAB_006096dd
    MOV dword ptr [EBX],EAX             ; 006096de
    CALL crt_heap.c_InsertHeapBlockInOrder_FUN_006095f0 ; 006096e0
        ;   XREF to: 006095f0 (UNCONDITIONAL_CALL)  ; HeapBlock * crt_heap.c_InsertHeapBlockInOrder_FUN_006095f0(HeapBlock * new_block)
    MOV EDX,EAX                         ; 006096e5
    ADD ESP,0x4                         ; 006096e7
    MOV EAX,dword ptr [EAX]             ; 006096ea
    MOV dword ptr [ESP + 0x10],EAX      ; 006096ec
    OR AL,0x1                           ; 006096f0
    MOV dword ptr [EDX],EAX             ; 006096f2
    ADD EDX,0x4                         ; 006096f4
    MOV EDI,dword ptr [EBX + 0x18]      ; 006096f7
    MOV dword ptr [EBX + 0x14],0x0      ; 006096fa
    INC EDI                             ; 00609701
    PUSH EDX                            ; 00609702
    MOV dword ptr [EBX + 0x18],EDI      ; 00609703
    CALL crt_heap.c_ValidateHeapIntegrity_FUN_00601ce0 ; 00609706
        ;   XREF to: 00601ce0 (UNCONDITIONAL_CALL)  ; void crt_heap.c_ValidateHeapIntegrity_FUN_00601ce0(void * ptr)
    MOV EAX,0x1                         ; 0060970b
    ADD ESP,0x4                         ; 00609710
    POP EDI                             ; 00609713
        ;   Label: LAB_00609713
    POP ESI                             ; 00609714
    POP EBX                             ; 00609715
    RET                                 ; 00609716

