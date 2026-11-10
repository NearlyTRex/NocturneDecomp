; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawVerticalLine_FUN_0047f5c0(CDrawSurface *this_ptr,int x,int start_y,int end_y)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   start_y
; int              Stack[0x10]:4   end_y
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_0047f860 at 0047f89c
;
; Referenced Globals:
;   TerminatedCString s_cockpit_drawsurf_cpp_005db14c
;   TerminatedCString s_Invalid_bitsPerPixel_005db164
;   TerminatedCString s_cockpit_drawsurf_cpp_005db17a
;   TerminatedCString s_Invalid_bitsPerPixel_005db192
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01bc11e4
;   undefined4 DAT_01bc11f0
;   undefined4 DAT_01bc11f4
;   undefined4 DAT_01bc1204
;   undefined4 DAT_01c4354c
;   undefined4 DAT_01c43550
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047f5c0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawVerticalLine_FUN_0047f5c0
    PUSH ESI                            ; 0047f5c1
    PUSH EDI                            ; 0047f5c2
    PUSH EBP                            ; 0047f5c3
    SUB ESP,0x8                         ; 0047f5c4
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0047f5c7
    MOV ESI,dword ptr [ESP + 0x20]      ; 0047f5cb
    MOV EAX,dword ptr [ESP + 0x24]      ; 0047f5cf
    MOV EBX,dword ptr [ESP + 0x28]      ; 0047f5d3
    MOV ECX,dword ptr [EDX + 0x8]       ; 0047f5d7
    MOV EDI,dword ptr [EDX + 0xc]       ; 0047f5da
    ADD ESI,ECX                         ; 0047f5dd
    ADD EAX,EDI                         ; 0047f5df
    MOV ECX,dword ptr [EDX + 0x10]      ; 0047f5e1
    ADD EBX,EDI                         ; 0047f5e4
    CMP ESI,ECX                         ; 0047f5e6
    JL 0x0047f660                       ; 0047f5e8
        ;   XREF to: 0047f660 (CONDITIONAL_JUMP)  ; LAB_0047f660
    CMP ESI,dword ptr [EDX + 0x18]      ; 0047f5ee
    JG 0x0047f660                       ; 0047f5f1
        ;   XREF to: 0047f660 (CONDITIONAL_JUMP)  ; LAB_0047f660
    MOV EBP,dword ptr [EDX + 0x14]      ; 0047f5f7
    CMP EAX,EBP                         ; 0047f5fa
    JGE 0x0047f600                      ; 0047f5fc
        ;   XREF to: 0047f600 (CONDITIONAL_JUMP)  ; LAB_0047f600
    MOV EAX,EBP                         ; 0047f5fe
    MOV ECX,dword ptr [EDX + 0x1c]      ; 0047f600
        ;   Label: LAB_0047f600
    CMP EBX,ECX                         ; 0047f603
    JLE 0x0047f609                      ; 0047f605
        ;   XREF to: 0047f609 (CONDITIONAL_JUMP)  ; LAB_0047f609
    MOV EBX,ECX                         ; 0047f607
    CMP EAX,EBX                         ; 0047f609
        ;   Label: LAB_0047f609
    JG 0x0047f660                       ; 0047f60b
        ;   XREF to: 0047f660 (CONDITIONAL_JUMP)  ; LAB_0047f660
    LEA EDI,[ESI + ESI*0x1]             ; 0047f60d
    MOV EBP,dword ptr [0x01bc11f0]      ; 0047f610 | DAT_01bc11f0
    LEA EDX,[ESI*0x4 + 0x0]             ; 0047f616
    SHL EBX,0x2                         ; 0047f61d
    MOV dword ptr [ESP],EDX             ; 0047f620
    LEA EDX,[EAX*0x4 + 0x0]             ; 0047f623
    TEST EBP,EBP                        ; 0047f62a
    JNZ 0x0047f746                      ; 0047f62c
        ;   XREF to: 0047f746 (CONDITIONAL_JUMP)  ; LAB_0047f746
    MOV ECX,dword ptr [0x0061b4a0]      ; 0047f632 | DAT_0061b4a0
    CMP ECX,0x10                        ; 0047f638
    JNC 0x0047f6ce                      ; 0047f63b
        ;   XREF to: 0047f6ce (CONDITIONAL_JUMP)  ; LAB_0047f6ce
    CMP ECX,0x8                         ; 0047f641
    JNZ 0x0047f6a3                      ; 0047f644
        ;   XREF to: 0047f6a3 (CONDITIONAL_JUMP)  ; LAB_0047f6a3
    MOV EDI,EBX                         ; 0047f646
    MOV CL,byte ptr [0x01bc11e4]        ; 0047f648 | DAT_01bc11e4
        ;   Label: LAB_0047f648
    MOV EBX,dword ptr [EDX + 0x1c4354c] ; 0047f64e | DAT_01c4354c | DAT_01c43550
    ADD EDX,0x4                         ; 0047f654
    INC EAX                             ; 0047f657
    MOV byte ptr [ESI + EBX*0x1],CL     ; 0047f658
    CMP EDX,EDI                         ; 0047f65b
    JLE 0x0047f648                      ; 0047f65d
        ;   XREF to: 0047f648 (CONDITIONAL_JUMP)  ; LAB_0047f648
    NOP                                 ; 0047f65f
    ADD ESP,0x8                         ; 0047f660
        ;   Label: LAB_0047f660
    POP EBP                             ; 0047f663
    POP EDI                             ; 0047f664
    POP ESI                             ; 0047f665
    POP EBX                             ; 0047f666
    RET                                 ; 0047f667
    MOV ESI,EBX                         ; 0047f668
        ;   Label: LAB_0047f668
    MOV BX,word ptr [0x01bc11e4]        ; 0047f66a | DAT_01bc11e4
        ;   Label: LAB_0047f66a
    MOV ECX,dword ptr [EDX + 0x1c4354c] ; 0047f671 | DAT_01c4354c | DAT_01c43550
    ADD EDX,0x4                         ; 0047f677
    INC EAX                             ; 0047f67a
    MOV word ptr [ECX + EDI*0x1],BX     ; 0047f67b
    CMP EDX,ESI                         ; 0047f67f
    JLE 0x0047f66a                      ; 0047f681
        ;   XREF to: 0047f66a (CONDITIONAL_JUMP)  ; LAB_0047f66a
    JMP 0x0047f660                      ; 0047f683
        ;   XREF to: 0047f660 (UNCONDITIONAL_JUMP)  ; LAB_0047f660
    MOV EDI,dword ptr [ESP]             ; 0047f685
        ;   Label: LAB_0047f685
    MOV ESI,EBX                         ; 0047f688
    MOV EBX,dword ptr [0x01bc11e4]      ; 0047f68a | DAT_01bc11e4
        ;   Label: LAB_0047f68a
    MOV ECX,dword ptr [EDX + 0x1c4354c] ; 0047f690 | DAT_01c4354c | DAT_01c43550
    ADD EDX,0x4                         ; 0047f696
    INC EAX                             ; 0047f699
    MOV dword ptr [ECX + EDI*0x1],EBX   ; 0047f69a
    CMP EDX,ESI                         ; 0047f69d
    JLE 0x0047f68a                      ; 0047f69f
        ;   XREF to: 0047f68a (CONDITIONAL_JUMP)  ; LAB_0047f68a
    JMP 0x0047f660                      ; 0047f6a1
        ;   XREF to: 0047f660 (UNCONDITIONAL_JUMP)  ; LAB_0047f660
    MOV ECX,0x5db14c                    ; 0047f6a3 | = "..\\cockpit\\drawsurf.cpp"
        ;   Label: LAB_0047f6a3
    MOV EBX,0x3dc                       ; 0047f6a8
    PUSH 0x5db164                       ; 0047f6ad | = "Invalid bitsPerPixel!"
    MOV dword ptr [0x01d1d400],ECX      ; 0047f6b2 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 0047f6b8 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0047f6be
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0047f6c3
    ADD ESP,0x8                         ; 0047f6c6
    POP EBP                             ; 0047f6c9
    POP EDI                             ; 0047f6ca
    POP ESI                             ; 0047f6cb
    POP EBX                             ; 0047f6cc
    RET                                 ; 0047f6cd
    JBE 0x0047f668                      ; 0047f6ce
        ;   XREF to: 0047f668 (CONDITIONAL_JUMP)  ; LAB_0047f668
        ;   Label: LAB_0047f6ce
    CMP ECX,0x20                        ; 0047f6d0
    JZ 0x0047f685                       ; 0047f6d3
        ;   XREF to: 0047f685 (CONDITIONAL_JUMP)  ; LAB_0047f685
    JMP 0x0047f6a3                      ; 0047f6d5
        ;   XREF to: 0047f6a3 (UNCONDITIONAL_JUMP)  ; LAB_0047f6a3
    MOV EBP,EDI                         ; 0047f6d7
        ;   Label: LAB_0047f6d7
    MOV EDI,EBX                         ; 0047f6d9
    MOV EBX,dword ptr [EDX + 0x1c4354c] ; 0047f6db | DAT_01c4354c | DAT_01c43550
        ;   Label: LAB_0047f6db
    XOR ESI,ESI                         ; 0047f6e1
    MOV CL,byte ptr [0x01bc11f4]        ; 0047f6e3 | DAT_01bc11f4
    MOV SI,word ptr [EBX + EBP*0x1]     ; 0047f6e9
    SHR ESI,CL                          ; 0047f6ed
    MOV ECX,dword ptr [0x01bc1204]      ; 0047f6ef | DAT_01bc1204
    ADD EDX,0x4                         ; 0047f6f5
    AND ESI,ECX                         ; 0047f6f8
    INC EAX                             ; 0047f6fa
    MOV word ptr [EBX + EBP*0x1],SI     ; 0047f6fb
    CMP EDX,EDI                         ; 0047f6ff
    JLE 0x0047f6db                      ; 0047f701
        ;   XREF to: 0047f6db (CONDITIONAL_JUMP)  ; LAB_0047f6db
    ADD ESP,0x8                         ; 0047f703
    POP EBP                             ; 0047f706
    POP EDI                             ; 0047f707
    POP ESI                             ; 0047f708
    POP EBX                             ; 0047f709
    RET                                 ; 0047f70a
    MOV ECX,dword ptr [ESP]             ; 0047f70b
        ;   Label: LAB_0047f70b
    MOV dword ptr [ESP + 0x4],ECX       ; 0047f70e
    MOV EDI,EBX                         ; 0047f712
    MOV EBP,dword ptr [ESP + 0x4]       ; 0047f714
    MOV ESI,dword ptr [EDX + 0x1c4354c] ; 0047f718 | DAT_01c4354c | DAT_01c43550
        ;   Label: LAB_0047f718
    ADD ESI,EBP                         ; 0047f71e
    MOV CL,byte ptr [0x01bc11f4]        ; 0047f720 | DAT_01bc11f4
    MOV EBX,dword ptr [ESI]             ; 0047f726
    SHR EBX,CL                          ; 0047f728
    MOV ECX,EBX                         ; 0047f72a
    MOV EBX,dword ptr [0x01bc1204]      ; 0047f72c | DAT_01bc1204
    ADD EDX,0x4                         ; 0047f732
    AND ECX,EBX                         ; 0047f735
    INC EAX                             ; 0047f737
    MOV dword ptr [ESI],ECX             ; 0047f738
    CMP EDX,EDI                         ; 0047f73a
    JLE 0x0047f718                      ; 0047f73c
        ;   XREF to: 0047f718 (CONDITIONAL_JUMP)  ; LAB_0047f718
    ADD ESP,0x8                         ; 0047f73e
    POP EBP                             ; 0047f741
    POP EDI                             ; 0047f742
    POP ESI                             ; 0047f743
    POP EBX                             ; 0047f744
    RET                                 ; 0047f745
    MOV ECX,dword ptr [0x0061b4a0]      ; 0047f746 | DAT_0061b4a0
        ;   Label: LAB_0047f746
    CMP ECX,0x10                        ; 0047f74c
    JNC 0x0047f75c                      ; 0047f74f
        ;   XREF to: 0047f75c (CONDITIONAL_JUMP)  ; LAB_0047f75c
    CMP ECX,0x8                         ; 0047f751
    JZ 0x0047f660                       ; 0047f754
        ;   XREF to: 0047f660 (CONDITIONAL_JUMP)  ; LAB_0047f660
    JMP 0x0047f767                      ; 0047f75a
        ;   XREF to: 0047f767 (UNCONDITIONAL_JUMP)  ; LAB_0047f767
    JBE 0x0047f6d7                      ; 0047f75c
        ;   XREF to: 0047f6d7 (CONDITIONAL_JUMP)  ; LAB_0047f6d7
        ;   Label: LAB_0047f75c
    CMP ECX,0x20                        ; 0047f762
    JZ 0x0047f70b                       ; 0047f765
        ;   XREF to: 0047f70b (CONDITIONAL_JUMP)  ; LAB_0047f70b
    MOV EAX,0x5db17a                    ; 0047f767 | = "..\\cockpit\\drawsurf.cpp"
        ;   Label: LAB_0047f767
    MOV EDX,0x3fc                       ; 0047f76c
    PUSH 0x5db192                       ; 0047f771 | = "Invalid bitsPerPixel!"
    MOV [0x01d1d400],EAX                ; 0047f776 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 0047f77b | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0047f781
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0047f786
    ADD ESP,0x8                         ; 0047f789
    POP EBP                             ; 0047f78c
    POP EDI                             ; 0047f78d
    POP ESI                             ; 0047f78e
    POP EBX                             ; 0047f78f
    RET                                 ; 0047f790

