; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_renderWithGlobalClipping_FUN_0050f5c0(CPackedBitmap *this_ptr,int dest_x,int dest_y,int src_left,int src_top,int width,int height)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   dest_x
; int              Stack[0xc]:4   dest_y
; int              Stack[0x10]:4   src_left
; int              Stack[0x14]:4   src_top
; int              Stack[0x18]:4   width
; int              Stack[0x1c]:4   height
;
; XREF[1]:
;   cockpit_pkbitmap.cpp_FUN_0050f6be at 0050f765
;
; Referenced Globals:
;   undefined4 DAT_01c6b5a8
;   undefined4 DAT_01c6b5ac
;   undefined4 DAT_01c6b5b0
;   undefined4 DAT_01c6b5b4
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_renderClippedRegion_FUN_0050f440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050f5c0
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_renderWithGlobalClipping_FUN_0050f5c0
    PUSH ESI                            ; 0050f5c1
    PUSH EDI                            ; 0050f5c2
    PUSH EBP                            ; 0050f5c3
    MOV ECX,dword ptr [ESP + 0x14]      ; 0050f5c4
    MOV EBX,dword ptr [ESP + 0x18]      ; 0050f5c8
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0050f5cc
    MOV EDX,dword ptr [ESP + 0x20]      ; 0050f5d0
    MOV EAX,dword ptr [ESP + 0x24]      ; 0050f5d4
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0050f5d8
    CMP dword ptr [ECX + 0x20],0x0      ; 0050f5dc
    JZ 0x0050f6a1                       ; 0050f5e0
        ;   XREF to: 0050f6a1 (CONDITIONAL_JUMP)  ; LAB_0050f6a1
    CMP dword ptr [ECX + 0x14],0x0      ; 0050f5e6
    JZ 0x0050f6a1                       ; 0050f5ea
        ;   XREF to: 0050f6a1 (CONDITIONAL_JUMP)  ; LAB_0050f6a1
    MOV EBP,dword ptr [0x01c6b5a8]      ; 0050f5f0 | DAT_01c6b5a8
    CMP EBX,EBP                         ; 0050f5f6
    JGE 0x0050f604                      ; 0050f5f8
        ;   XREF to: 0050f604 (CONDITIONAL_JUMP)  ; LAB_0050f604
    SUB EBP,EBX                         ; 0050f5fa
    MOV EBX,dword ptr [0x01c6b5a8]      ; 0050f5fc | DAT_01c6b5a8
    ADD EDX,EBP                         ; 0050f602
    MOV EBP,dword ptr [0x01c6b5ac]      ; 0050f604 | DAT_01c6b5ac
        ;   Label: LAB_0050f604
    CMP ESI,EBP                         ; 0050f60a
    JGE 0x0050f618                      ; 0050f60c
        ;   XREF to: 0050f618 (CONDITIONAL_JUMP)  ; LAB_0050f618
    SUB EBP,ESI                         ; 0050f60e
    MOV ESI,dword ptr [0x01c6b5ac]      ; 0050f610 | DAT_01c6b5ac
    ADD EAX,EBP                         ; 0050f616
    MOV EBP,dword ptr [ESP + 0x28]      ; 0050f618
        ;   Label: LAB_0050f618
    ADD EBP,EBX                         ; 0050f61c
    SUB EBP,EDX                         ; 0050f61e
    CMP EBP,dword ptr [0x01c6b5b0]      ; 0050f620 | DAT_01c6b5b0
    JLE 0x0050f636                      ; 0050f626
        ;   XREF to: 0050f636 (CONDITIONAL_JUMP)  ; LAB_0050f636
    MOV EBP,dword ptr [0x01c6b5b0]      ; 0050f628 | DAT_01c6b5b0
    SUB EBP,EBX                         ; 0050f62e
    ADD EBP,EDX                         ; 0050f630
    MOV dword ptr [ESP + 0x28],EBP      ; 0050f632
    LEA EBP,[ESI + EDI*0x1]             ; 0050f636
        ;   Label: LAB_0050f636
    SUB EBP,EAX                         ; 0050f639
    CMP EBP,dword ptr [0x01c6b5b4]      ; 0050f63b | DAT_01c6b5b4
    JLE 0x0050f64d                      ; 0050f641
        ;   XREF to: 0050f64d (CONDITIONAL_JUMP)  ; LAB_0050f64d
    MOV EDI,dword ptr [0x01c6b5b4]      ; 0050f643 | DAT_01c6b5b4
    SUB EDI,ESI                         ; 0050f649
    ADD EDI,EAX                         ; 0050f64b
    MOV EBP,dword ptr [ESP + 0x28]      ; 0050f64d
        ;   Label: LAB_0050f64d
    CMP EDX,EBP                         ; 0050f651
    JG 0x0050f6a1                       ; 0050f653
        ;   XREF to: 0050f6a1 (CONDITIONAL_JUMP)  ; LAB_0050f6a1
    CMP EAX,EDI                         ; 0050f655
    JG 0x0050f6a1                       ; 0050f657
        ;   XREF to: 0050f6a1 (CONDITIONAL_JUMP)  ; LAB_0050f6a1
    TEST EBP,EBP                        ; 0050f659
    JLE 0x0050f6a1                      ; 0050f65b
        ;   XREF to: 0050f6a1 (CONDITIONAL_JUMP)  ; LAB_0050f6a1
    TEST EDI,EDI                        ; 0050f65d
    JLE 0x0050f6a1                      ; 0050f65f
        ;   XREF to: 0050f6a1 (CONDITIONAL_JUMP)  ; LAB_0050f6a1
    CMP EDX,dword ptr [ECX + 0x18]      ; 0050f661
    JGE 0x0050f6a1                      ; 0050f664
        ;   XREF to: 0050f6a1 (CONDITIONAL_JUMP)  ; LAB_0050f6a1
    CMP EAX,dword ptr [ECX + 0x1c]      ; 0050f666
    JGE 0x0050f6a1                      ; 0050f669
        ;   XREF to: 0050f6a1 (CONDITIONAL_JUMP)  ; LAB_0050f6a1
    TEST EDX,EDX                        ; 0050f66b
    JL 0x0050f6a6                       ; 0050f66d
        ;   XREF to: 0050f6a6 (CONDITIONAL_JUMP)  ; LAB_0050f6a6
    TEST EAX,EAX                        ; 0050f66f
        ;   Label: LAB_0050f66f
    JL 0x0050f6ac                       ; 0050f671
        ;   XREF to: 0050f6ac (CONDITIONAL_JUMP)  ; LAB_0050f6ac
    MOV EBP,dword ptr [ESP + 0x28]      ; 0050f673
        ;   Label: LAB_0050f673
    CMP EBP,dword ptr [ECX + 0x18]      ; 0050f677
    JL 0x0050f684                       ; 0050f67a
        ;   XREF to: 0050f684 (CONDITIONAL_JUMP)  ; LAB_0050f684
    MOV EBP,dword ptr [ECX + 0x18]      ; 0050f67c
    DEC EBP                             ; 0050f67f
    MOV dword ptr [ESP + 0x28],EBP      ; 0050f680
    MOV EBP,dword ptr [ECX + 0x1c]      ; 0050f684
        ;   Label: LAB_0050f684
    CMP EDI,EBP                         ; 0050f687
    JL 0x0050f68e                       ; 0050f689
        ;   XREF to: 0050f68e (CONDITIONAL_JUMP)  ; LAB_0050f68e
    LEA EDI,[EBP + -0x1]                ; 0050f68b
    PUSH EDI                            ; 0050f68e
        ;   Label: LAB_0050f68e
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0050f68f
    PUSH EDI                            ; 0050f693
    PUSH EAX                            ; 0050f694
    PUSH EDX                            ; 0050f695
    PUSH ESI                            ; 0050f696
    PUSH EBX                            ; 0050f697
    PUSH ECX                            ; 0050f698
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_renderClippedRegion_FUN_0050f440 ; 0050f699
        ;   XREF to: 0050f440 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_renderClippedRegion_FUN_0050f440(CPackedBitmap * this_ptr, int dest_x, int dest_y, int clip_left, ...)
    ADD ESP,0x1c                        ; 0050f69e
    POP EBP                             ; 0050f6a1
        ;   Label: LAB_0050f6a1
    POP EDI                             ; 0050f6a2
    POP ESI                             ; 0050f6a3
    POP EBX                             ; 0050f6a4
    RET                                 ; 0050f6a5
    SUB EBX,EDX                         ; 0050f6a6
        ;   Label: LAB_0050f6a6
    XOR EDX,EDX                         ; 0050f6a8
    JMP 0x0050f66f                      ; 0050f6aa
        ;   XREF to: 0050f66f (UNCONDITIONAL_JUMP)  ; LAB_0050f66f
    SUB ESI,EAX                         ; 0050f6ac
        ;   Label: LAB_0050f6ac
    XOR EAX,EAX                         ; 0050f6ae
    JMP 0x0050f673                      ; 0050f6b0
        ;   XREF to: 0050f673 (UNCONDITIONAL_JUMP)  ; LAB_0050f673

