; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_heap_c_heapWalk_FUN_006012d0(HeapState *heap_state_ptr,Heap *heap_ptr)
;
; Parameters:
; HeapState *      Stack[0x4]:4   heap_state_ptr
; Heap *           Stack[0x8]:4   heap_ptr
;
; XREF[2]:
;   crt_heap.c_heapCheck_FUN_00601374 at 00601387
;   crt_watcom.c__heapchk_FUN_00600ad0 at 00600b1d
;
; Referenced Globals:
;   Heap* g_MainHeap = 00000000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 006012d0
        ;   Label: crt_heap.c_heapWalk_FUN_006012d0
    PUSH EBP                            ; 006012d1
    MOV ECX,dword ptr [ESP + 0xc]       ; 006012d2
    MOV EAX,dword ptr [ESP + 0x10]      ; 006012d6
    TEST EAX,EAX                        ; 006012da
    JNZ 0x006012e6                      ; 006012dc
        ;   XREF to: 006012e6 (CONDITIONAL_JUMP)  ; LAB_006012e6
    MOV EAX,0x1                         ; 006012de
    POP EBP                             ; 006012e3
    POP EBX                             ; 006012e4
    RET                                 ; 006012e5
    MOV EDX,dword ptr [ECX]             ; 006012e6
        ;   Label: LAB_006012e6
    TEST EDX,EDX                        ; 006012e8
    JNZ 0x006012f1                      ; 006012ea
        ;   XREF to: 006012f1 (CONDITIONAL_JUMP)  ; LAB_006012f1
    LEA EDX,[EAX + 0x2c]                ; 006012ec
    JMP 0x00601326                      ; 006012ef
        ;   XREF to: 00601326 (UNCONDITIONAL_JUMP)  ; LAB_00601326
    MOV EAX,[0x00684ed4]                ; 006012f1 | g_MainHeap
        ;   Label: LAB_006012f1
    CMP dword ptr [EAX + 0x8],0x0       ; 006012f6
    JZ 0x00601311                       ; 006012fa
        ;   XREF to: 00601311 (CONDITIONAL_JUMP)  ; LAB_00601311
    CMP EAX,EDX                         ; 006012fc
        ;   Label: LAB_006012fc
    JA 0x00601308                       ; 006012fe
        ;   XREF to: 00601308 (CONDITIONAL_JUMP)  ; LAB_00601308
    MOV EBX,dword ptr [EAX]             ; 00601300
    ADD EBX,EAX                         ; 00601302
    CMP EBX,EDX                         ; 00601304
    JA 0x00601311                       ; 00601306
        ;   XREF to: 00601311 (CONDITIONAL_JUMP)  ; LAB_00601311
    MOV EAX,dword ptr [EAX + 0x8]       ; 00601308
        ;   Label: LAB_00601308
    CMP dword ptr [EAX + 0x8],0x0       ; 0060130b
    JNZ 0x006012fc                      ; 0060130f
        ;   XREF to: 006012fc (CONDITIONAL_JUMP)  ; LAB_006012fc
    MOV EBX,dword ptr [EDX]             ; 00601311
        ;   Label: LAB_00601311
    AND BL,0xfe                         ; 00601313
    ADD EBX,EDX                         ; 00601316
    CMP EBX,EDX                         ; 00601318
    JA 0x00601324                       ; 0060131a
        ;   XREF to: 00601324 (CONDITIONAL_JUMP)  ; LAB_00601324
    MOV EAX,0x3                         ; 0060131c
    POP EBP                             ; 00601321
    POP EBX                             ; 00601322
    RET                                 ; 00601323
    MOV EDX,EBX                         ; 00601324
        ;   Label: LAB_00601324
    CMP dword ptr [EDX],-0x1            ; 00601326
        ;   Label: LAB_00601326
    JNZ 0x0060134f                      ; 00601329
        ;   XREF to: 0060134f (CONDITIONAL_JUMP)  ; LAB_0060134f
    MOV EBP,dword ptr [EAX + 0x8]       ; 0060132b
    TEST EBP,EBP                        ; 0060132e
    JNZ 0x00601348                      ; 00601330
        ;   XREF to: 00601348 (CONDITIONAL_JUMP)  ; LAB_00601348
    MOV word ptr [ECX + 0x4],0x0        ; 00601332
    MOV dword ptr [ECX + 0xa],EBP       ; 00601338
    MOV dword ptr [ECX + 0x6],EBP       ; 0060133b
    MOV EAX,0x4                         ; 0060133e
    MOV dword ptr [ECX],EBP             ; 00601343
    POP EBP                             ; 00601345
    POP EBX                             ; 00601346
    RET                                 ; 00601347
    MOV EAX,EBP                         ; 00601348
        ;   Label: LAB_00601348
    LEA EDX,[EBP + 0x2c]                ; 0060134a
    JMP 0x00601326                      ; 0060134d
        ;   XREF to: 00601326 (UNCONDITIONAL_JUMP)  ; LAB_00601326
    MOV dword ptr [ECX + 0xa],0x1       ; 0060134f
        ;   Label: LAB_0060134f
    MOV word ptr [ECX + 0x4],DS         ; 00601356
    MOV dword ptr [ECX],EDX             ; 00601359
    MOV EAX,dword ptr [EDX]             ; 0060135b
    AND AL,0xfe                         ; 0060135d
    MOV dword ptr [ECX + 0x6],EAX       ; 0060135f
    TEST byte ptr [EDX],0x1             ; 00601362
    JZ 0x0060136e                       ; 00601365
        ;   XREF to: 0060136e (CONDITIONAL_JUMP)  ; LAB_0060136e
    MOV dword ptr [ECX + 0xa],0x0       ; 00601367
    XOR EAX,EAX                         ; 0060136e
        ;   Label: LAB_0060136e
    POP EBP                             ; 00601370
    POP EBX                             ; 00601371
    RET                                 ; 00601372

