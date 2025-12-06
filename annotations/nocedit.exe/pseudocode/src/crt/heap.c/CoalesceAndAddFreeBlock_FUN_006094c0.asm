; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallRegister void crt_heap.c_CoalesceAndAddFreeBlock_FUN_006094c0(void * ptr, HeapBlock * heap_block, ushort segment)
;
;
; XREF[1]:
;   crt_heap.c_ValidateHeapIntegrity_FUN_00601ce0 at 00601dad
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 006094c0
        ;   Label: crt_heap.c_CoalesceAndAddFreeBlock_FUN_006094c0
    PUSH EDI                            ; 006094c1
    PUSH EBP                            ; 006094c2
    MOV ECX,EBX                         ; 006094c3
    TEST EAX,EAX                        ; 006094c5
    JZ 0x006095ea                       ; 006094c7 | LAB_006095ea
        ;   XREF to: 006095ea (CONDITIONAL_JUMP)
    LEA EBX,[EAX + -0x4]                ; 006094cd
    TEST byte ptr [EBX],0x1             ; 006094d0
    JZ 0x006095ea                       ; 006094d3 | LAB_006095ea
        ;   XREF to: 006095ea (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EBX]             ; 006094d9
    AND DL,0xfe                         ; 006094db
    LEA EAX,[EBX + EDX*0x1]             ; 006094de
    MOV ESI,ECX                         ; 006094e1
    TEST byte ptr [EAX],0x1             ; 006094e3
    JNZ 0x0060950a                      ; 006094e6 | LAB_0060950a
        ;   XREF to: 0060950a (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EAX]             ; 006094e8
    ADD EDX,EDI                         ; 006094ea
    MOV dword ptr [EBX],EDX             ; 006094ec
    CMP EAX,dword ptr [ECX + 0xc]       ; 006094ee
    JNZ 0x006094f6                      ; 006094f1 | LAB_006094f6
        ;   XREF to: 006094f6 (CONDITIONAL_JUMP)
    MOV dword ptr [ECX + 0xc],EBX       ; 006094f3
    MOV EDX,dword ptr [EAX + 0x4]       ; 006094f6
        ;   Label: LAB_006094f6
    MOV EAX,dword ptr [EAX + 0x8]       ; 006094f9
    MOV dword ptr [EDX + 0x8],EAX       ; 006094fc
    MOV dword ptr [EAX + 0x4],EDX       ; 006094ff
    DEC dword ptr [ESI + 0x1c]          ; 00609502
    JMP 0x0060959e                      ; 00609505 | LAB_0060959e
        ;   XREF to: 0060959e (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBX],EDX             ; 0060950a
        ;   Label: LAB_0060950a
    MOV EAX,dword ptr [ECX + 0xc]       ; 0060950c
    CMP EBX,EAX                         ; 0060950f
    JNC 0x00609529                      ; 00609511 | LAB_00609529
        ;   XREF to: 00609529 (CONDITIONAL_JUMP)
    CMP EBX,dword ptr [EAX + 0x4]       ; 00609513
    JA 0x0060959e                       ; 00609516 | LAB_0060959e
        ;   XREF to: 0060959e (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ECX + 0x28]      ; 0060951c
    CMP EBX,EAX                         ; 0060951f
    JC 0x0060959e                       ; 00609521 | LAB_0060959e
        ;   XREF to: 0060959e (CONDITIONAL_JUMP)
    JMP 0x00609542                      ; 00609527 | LAB_00609542
        ;   XREF to: 00609542 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EAX + 0x8]       ; 00609529
        ;   Label: LAB_00609529
    CMP EBX,EAX                         ; 0060952c
    JC 0x0060959e                       ; 0060952e | LAB_0060959e
        ;   XREF to: 0060959e (CONDITIONAL_JUMP)
    LEA EAX,[ECX + 0x20]                ; 00609534
    MOV EDX,dword ptr [EAX + 0x4]       ; 00609537
    CMP EBX,EDX                         ; 0060953a
    JA 0x0060959e                       ; 0060953c | LAB_0060959e
        ;   XREF to: 0060959e (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESI + 0x1c]      ; 00609542
        ;   Label: LAB_00609542
    MOV EAX,dword ptr [ESI + 0x18]      ; 00609545
    XOR EDX,EDX                         ; 00609548
    LEA ECX,[EDI + 0x1]                 ; 0060954a
    DIV ECX                             ; 0060954d
    MOV ECX,EAX                         ; 0060954f
    CMP EAX,EDI                         ; 00609551
    JNC 0x0060957d                      ; 00609553 | LAB_0060957d
        ;   XREF to: 0060957d (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESI + 0x18]      ; 00609555
    SUB EAX,EDI                         ; 00609558
    ADD ECX,ECX                         ; 0060955a
    CMP EAX,EDI                         ; 0060955c
    JA 0x00609565                       ; 0060955e | LAB_00609565
        ;   XREF to: 00609565 (CONDITIONAL_JUMP)
    MOV ECX,0xffffffff                  ; 00609560
    MOV EAX,dword ptr [EBX]             ; 00609565
        ;   Label: LAB_00609565
    ADD EAX,EBX                         ; 00609567
    MOV EDX,dword ptr [EAX]             ; 00609569
        ;   Label: LAB_00609569
    TEST DL,0x1                         ; 0060956b
    JZ 0x0060959e                       ; 0060956e | LAB_0060959e
        ;   XREF to: 0060959e (CONDITIONAL_JUMP)
    CMP EDX,-0x1                        ; 00609570
    JZ 0x0060957d                       ; 00609573 | LAB_0060957d
        ;   XREF to: 0060957d (CONDITIONAL_JUMP)
    AND DL,0xfe                         ; 00609575
    ADD EAX,EDX                         ; 00609578
    DEC ECX                             ; 0060957a
    JNZ 0x00609569                      ; 0060957b | LAB_00609569
        ;   XREF to: 00609569 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESI + 0xc]       ; 0060957d
        ;   Label: LAB_0060957d
    CMP EBX,EAX                         ; 00609580
    JNC 0x00609587                      ; 00609582 | LAB_00609587
        ;   XREF to: 00609587 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESI + 0x28]      ; 00609584
    CMP EBX,EAX                         ; 00609587
        ;   Label: LAB_00609587
    JC 0x0060959e                       ; 00609589 | LAB_0060959e
        ;   XREF to: 0060959e (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EAX + 0x8]       ; 0060958b
    CMP EBX,EAX                         ; 0060958e
    JC 0x0060959e                       ; 00609590 | LAB_0060959e
        ;   XREF to: 0060959e (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EAX + 0x8]       ; 00609592
    CMP EBX,EAX                         ; 00609595
    JC 0x0060959e                       ; 00609597 | LAB_0060959e
        ;   XREF to: 0060959e (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EAX + 0x8]       ; 00609599
    JMP 0x00609587                      ; 0060959c | LAB_00609587
        ;   XREF to: 00609587 (UNCONDITIONAL_JUMP)
    MOV EDX,dword ptr [EAX + 0x4]       ; 0060959e
        ;   Label: LAB_0060959e
    MOV EDI,dword ptr [EDX]             ; 006095a1
    ADD EDI,EDX                         ; 006095a3
    MOV ECX,dword ptr [EBX]             ; 006095a5
    CMP EDI,EBX                         ; 006095a7
    JNZ 0x006095bd                      ; 006095a9 | LAB_006095bd
        ;   XREF to: 006095bd (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [EDX]             ; 006095ab
    ADD ECX,EBP                         ; 006095ad
    MOV dword ptr [EDX],ECX             ; 006095af
    CMP EBX,dword ptr [ESI + 0xc]       ; 006095b1
    JNZ 0x006095b9                      ; 006095b4 | LAB_006095b9
        ;   XREF to: 006095b9 (CONDITIONAL_JUMP)
    MOV dword ptr [ESI + 0xc],EDX       ; 006095b6
    MOV EBX,EDX                         ; 006095b9
        ;   Label: LAB_006095b9
    JMP 0x006095cc                      ; 006095bb | LAB_006095cc
        ;   XREF to: 006095cc (UNCONDITIONAL_JUMP)
    INC dword ptr [ESI + 0x1c]          ; 006095bd
        ;   Label: LAB_006095bd
    MOV dword ptr [EBX + 0x8],EAX       ; 006095c0
    MOV dword ptr [EBX + 0x4],EDX       ; 006095c3
    MOV dword ptr [EDX + 0x8],EBX       ; 006095c6
    MOV dword ptr [EAX + 0x4],EBX       ; 006095c9
    MOV EDX,dword ptr [ESI + 0x18]      ; 006095cc
        ;   Label: LAB_006095cc
    DEC EDX                             ; 006095cf
    MOV EDI,dword ptr [ESI + 0xc]       ; 006095d0
    MOV dword ptr [ESI + 0x18],EDX      ; 006095d3
    CMP EBX,EDI                         ; 006095d6
    JNC 0x006095e2                      ; 006095d8 | LAB_006095e2
        ;   XREF to: 006095e2 (CONDITIONAL_JUMP)
    CMP ECX,dword ptr [ESI + 0x10]      ; 006095da
    JBE 0x006095e2                      ; 006095dd | LAB_006095e2
        ;   XREF to: 006095e2 (CONDITIONAL_JUMP)
    MOV dword ptr [ESI + 0x10],ECX      ; 006095df
    CMP ECX,dword ptr [ESI + 0x14]      ; 006095e2
        ;   Label: LAB_006095e2
    JBE 0x006095ea                      ; 006095e5 | LAB_006095ea
        ;   XREF to: 006095ea (CONDITIONAL_JUMP)
    MOV dword ptr [ESI + 0x14],ECX      ; 006095e7
    POP EBP                             ; 006095ea
        ;   Label: LAB_006095ea
    POP EDI                             ; 006095eb
    POP ESI                             ; 006095ec
    RET                                 ; 006095ed

