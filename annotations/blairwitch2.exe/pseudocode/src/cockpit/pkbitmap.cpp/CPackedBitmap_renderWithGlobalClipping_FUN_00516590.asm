; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_renderWithGlobalClipping_FUN_00516590(CPackedBitmap *this_ptr,int dest_x,int dest_y,int src_left,int src_top,int width,int height)
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
;   cockpit_pkbitmap.cpp_FUN_0051668e at 00516735
;
; Referenced Globals:
;   undefined4 DAT_01c35e48
;   undefined4 DAT_01c35e4c
;   undefined4 DAT_01c35e50
;   undefined4 DAT_01c35e54
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_renderClippedRegion_FUN_00516410
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516590
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_renderWithGlobalClipping_FUN_00516590
    PUSH ESI                            ; 00516591
    PUSH EDI                            ; 00516592
    PUSH EBP                            ; 00516593
    MOV ECX,dword ptr [ESP + 0x14]      ; 00516594
    MOV EBX,dword ptr [ESP + 0x18]      ; 00516598
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0051659c
    MOV EDX,dword ptr [ESP + 0x20]      ; 005165a0
    MOV EAX,dword ptr [ESP + 0x24]      ; 005165a4
    MOV EDI,dword ptr [ESP + 0x2c]      ; 005165a8
    CMP dword ptr [ECX + 0x20],0x0      ; 005165ac
    JZ 0x00516671                       ; 005165b0
        ;   XREF to: 00516671 (CONDITIONAL_JUMP)  ; LAB_00516671
    CMP dword ptr [ECX + 0x14],0x0      ; 005165b6
    JZ 0x00516671                       ; 005165ba
        ;   XREF to: 00516671 (CONDITIONAL_JUMP)  ; LAB_00516671
    MOV EBP,dword ptr [0x01c35e48]      ; 005165c0 | DAT_01c35e48
    CMP EBX,EBP                         ; 005165c6
    JGE 0x005165d4                      ; 005165c8
        ;   XREF to: 005165d4 (CONDITIONAL_JUMP)  ; LAB_005165d4
    SUB EBP,EBX                         ; 005165ca
    MOV EBX,dword ptr [0x01c35e48]      ; 005165cc | DAT_01c35e48
    ADD EDX,EBP                         ; 005165d2
    MOV EBP,dword ptr [0x01c35e4c]      ; 005165d4 | DAT_01c35e4c
        ;   Label: LAB_005165d4
    CMP ESI,EBP                         ; 005165da
    JGE 0x005165e8                      ; 005165dc
        ;   XREF to: 005165e8 (CONDITIONAL_JUMP)  ; LAB_005165e8
    SUB EBP,ESI                         ; 005165de
    MOV ESI,dword ptr [0x01c35e4c]      ; 005165e0 | DAT_01c35e4c
    ADD EAX,EBP                         ; 005165e6
    MOV EBP,dword ptr [ESP + 0x28]      ; 005165e8
        ;   Label: LAB_005165e8
    ADD EBP,EBX                         ; 005165ec
    SUB EBP,EDX                         ; 005165ee
    CMP EBP,dword ptr [0x01c35e50]      ; 005165f0 | DAT_01c35e50
    JLE 0x00516606                      ; 005165f6
        ;   XREF to: 00516606 (CONDITIONAL_JUMP)  ; LAB_00516606
    MOV EBP,dword ptr [0x01c35e50]      ; 005165f8 | DAT_01c35e50
    SUB EBP,EBX                         ; 005165fe
    ADD EBP,EDX                         ; 00516600
    MOV dword ptr [ESP + 0x28],EBP      ; 00516602
    LEA EBP,[ESI + EDI*0x1]             ; 00516606
        ;   Label: LAB_00516606
    SUB EBP,EAX                         ; 00516609
    CMP EBP,dword ptr [0x01c35e54]      ; 0051660b | DAT_01c35e54
    JLE 0x0051661d                      ; 00516611
        ;   XREF to: 0051661d (CONDITIONAL_JUMP)  ; LAB_0051661d
    MOV EDI,dword ptr [0x01c35e54]      ; 00516613 | DAT_01c35e54
    SUB EDI,ESI                         ; 00516619
    ADD EDI,EAX                         ; 0051661b
    MOV EBP,dword ptr [ESP + 0x28]      ; 0051661d
        ;   Label: LAB_0051661d
    CMP EDX,EBP                         ; 00516621
    JG 0x00516671                       ; 00516623
        ;   XREF to: 00516671 (CONDITIONAL_JUMP)  ; LAB_00516671
    CMP EAX,EDI                         ; 00516625
    JG 0x00516671                       ; 00516627
        ;   XREF to: 00516671 (CONDITIONAL_JUMP)  ; LAB_00516671
    TEST EBP,EBP                        ; 00516629
    JLE 0x00516671                      ; 0051662b
        ;   XREF to: 00516671 (CONDITIONAL_JUMP)  ; LAB_00516671
    TEST EDI,EDI                        ; 0051662d
    JLE 0x00516671                      ; 0051662f
        ;   XREF to: 00516671 (CONDITIONAL_JUMP)  ; LAB_00516671
    CMP EDX,dword ptr [ECX + 0x18]      ; 00516631
    JGE 0x00516671                      ; 00516634
        ;   XREF to: 00516671 (CONDITIONAL_JUMP)  ; LAB_00516671
    CMP EAX,dword ptr [ECX + 0x1c]      ; 00516636
    JGE 0x00516671                      ; 00516639
        ;   XREF to: 00516671 (CONDITIONAL_JUMP)  ; LAB_00516671
    TEST EDX,EDX                        ; 0051663b
    JL 0x00516676                       ; 0051663d
        ;   XREF to: 00516676 (CONDITIONAL_JUMP)  ; LAB_00516676
    TEST EAX,EAX                        ; 0051663f
        ;   Label: LAB_0051663f
    JL 0x0051667c                       ; 00516641
        ;   XREF to: 0051667c (CONDITIONAL_JUMP)  ; LAB_0051667c
    MOV EBP,dword ptr [ESP + 0x28]      ; 00516643
        ;   Label: LAB_00516643
    CMP EBP,dword ptr [ECX + 0x18]      ; 00516647
    JL 0x00516654                       ; 0051664a
        ;   XREF to: 00516654 (CONDITIONAL_JUMP)  ; LAB_00516654
    MOV EBP,dword ptr [ECX + 0x18]      ; 0051664c
    DEC EBP                             ; 0051664f
    MOV dword ptr [ESP + 0x28],EBP      ; 00516650
    MOV EBP,dword ptr [ECX + 0x1c]      ; 00516654
        ;   Label: LAB_00516654
    CMP EDI,EBP                         ; 00516657
    JL 0x0051665e                       ; 00516659
        ;   XREF to: 0051665e (CONDITIONAL_JUMP)  ; LAB_0051665e
    LEA EDI,[EBP + -0x1]                ; 0051665b
    PUSH EDI                            ; 0051665e
        ;   Label: LAB_0051665e
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0051665f
    PUSH EDI                            ; 00516663
    PUSH EAX                            ; 00516664
    PUSH EDX                            ; 00516665
    PUSH ESI                            ; 00516666
    PUSH EBX                            ; 00516667
    PUSH ECX                            ; 00516668
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_renderClippedRegion_FUN_00516410 ; 00516669
        ;   XREF to: 00516410 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_renderClippedRegion_FUN_00516410(CPackedBitmap * this_ptr, int dest_x, int dest_y, int clip_left, ...)
    ADD ESP,0x1c                        ; 0051666e
    POP EBP                             ; 00516671
        ;   Label: LAB_00516671
    POP EDI                             ; 00516672
    POP ESI                             ; 00516673
    POP EBX                             ; 00516674
    RET                                 ; 00516675
    SUB EBX,EDX                         ; 00516676
        ;   Label: LAB_00516676
    XOR EDX,EDX                         ; 00516678
    JMP 0x0051663f                      ; 0051667a
        ;   XREF to: 0051663f (UNCONDITIONAL_JUMP)  ; LAB_0051663f
    SUB ESI,EAX                         ; 0051667c
        ;   Label: LAB_0051667c
    XOR EAX,EAX                         ; 0051667e
    JMP 0x00516643                      ; 00516680
        ;   XREF to: 00516643 (UNCONDITIONAL_JUMP)  ; LAB_00516643

