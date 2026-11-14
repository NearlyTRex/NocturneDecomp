; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_FUN_00467610(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x1
; int              Stack[0xc]:4   y1
; int              Stack[0x10]:4   x2
; int              Stack[0x14]:4   y2
;
; XREF[2]:
;   cockpit_drawsurf.cpp_FUN_004674b0 at 004674f2
;   cockpit_drawsurf.cpp_FUN_004677e0 at 004677f2
;
; Referenced Globals:
;   undefined4 DAT_005d13b0
;   undefined4 DAT_0060b270
;   undefined4 DAT_0060b274
;   undefined4 DAT_01ba599c
;   undefined4 DAT_01ba59a0
;   undefined4 DAT_01ba59a4
;   undefined4 DAT_01c2a370
;   undefined4 DAT_01c2a374
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00467610
        ;   Label: cockpit_drawsurf.cpp_FUN_00467610
    PUSH ESI                            ; 00467611
    PUSH EDI                            ; 00467612
    PUSH EBP                            ; 00467613
    SUB ESP,0x8                         ; 00467614
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00467617
    MOV EBP,dword ptr [ESP + 0x20]      ; 0046761b
    MOV EDI,dword ptr [ESP + 0x28]      ; 0046761f
    MOV ECX,dword ptr [0x01c2a374]      ; 00467623 | DAT_01c2a374
    CMP ECX,dword ptr [0x01ba59a4]      ; 00467629 | DAT_01ba59a4
    JNZ 0x0046775a                      ; 0046762f
        ;   XREF to: 0046775a (CONDITIONAL_JUMP)  ; LAB_0046775a
    FLD float ptr [0x01ba59a0]          ; 00467635 | DAT_01ba59a0
        ;   Label: LAB_00467635
    CALL crt_math.c_round_FUN_005b7ff0  ; 0046763b
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP]               ; 00467640
    CMP EBP,EDI                         ; 00467643
    JLE 0x0046764d                      ; 00467645
        ;   XREF to: 0046764d (CONDITIONAL_JUMP)  ; LAB_0046764d
    MOV EDX,EBP                         ; 00467647
    MOV EBP,EDI                         ; 00467649
    MOV EDI,EDX                         ; 0046764b
    MOV EDX,dword ptr [ESP + 0x24]      ; 0046764d
        ;   Label: LAB_0046764d
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00467651
    CMP EDX,ECX                         ; 00467655
    JLE 0x00467661                      ; 00467657
        ;   XREF to: 00467661 (CONDITIONAL_JUMP)  ; LAB_00467661
    MOV dword ptr [ESP + 0x24],ECX      ; 00467659
    MOV dword ptr [ESP + 0x2c],EDX      ; 0046765d
    MOV EBX,EBP                         ; 00467661
        ;   Label: LAB_00467661
    CMP EBP,EDI                         ; 00467663
    JGE 0x0046769c                      ; 00467665
        ;   XREF to: 0046769c (CONDITIONAL_JUMP)  ; LAB_0046769c
    MOV EAX,dword ptr [ESP]             ; 00467667
        ;   Label: LAB_00467667
    MOV ECX,dword ptr [0x0060b270]      ; 0046766a | DAT_0060b270
    MOV EDX,EAX                         ; 00467670
    ADD ECX,ECX                         ; 00467672
    SAR EDX,0x1f                        ; 00467674
    IDIV ECX                            ; 00467677
    CMP EDX,dword ptr [0x0060b270]      ; 00467679 | DAT_0060b270
    JGE 0x00467690                      ; 0046767f
        ;   XREF to: 00467690 (CONDITIONAL_JUMP)  ; LAB_00467690
    MOV EDX,dword ptr [ESP + 0x24]      ; 00467681
    PUSH EDX                            ; 00467685
    PUSH EBX                            ; 00467686
    PUSH ESI                            ; 00467687
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360 ; 00467688
        ;   XREF to: 00466360 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0046768d
    MOV EAX,dword ptr [ESP]             ; 00467690
        ;   Label: LAB_00467690
    INC EAX                             ; 00467693
    INC EBX                             ; 00467694
    MOV dword ptr [ESP],EAX             ; 00467695
    CMP EBX,EDI                         ; 00467698
    JL 0x00467667                       ; 0046769a
        ;   XREF to: 00467667 (CONDITIONAL_JUMP)  ; LAB_00467667
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0046769c
        ;   Label: LAB_0046769c
    MOV EBX,dword ptr [ESP + 0x24]      ; 004676a0
    CMP EBX,ECX                         ; 004676a4
    JGE 0x004676dd                      ; 004676a6
        ;   XREF to: 004676dd (CONDITIONAL_JUMP)  ; LAB_004676dd
    MOV EAX,dword ptr [ESP]             ; 004676a8
        ;   Label: LAB_004676a8
    MOV ECX,dword ptr [0x0060b270]      ; 004676ab | DAT_0060b270
    MOV EDX,EAX                         ; 004676b1
    ADD ECX,ECX                         ; 004676b3
    SAR EDX,0x1f                        ; 004676b5
    IDIV ECX                            ; 004676b8
    CMP EDX,dword ptr [0x0060b270]      ; 004676ba | DAT_0060b270
    JGE 0x004676cd                      ; 004676c0
        ;   XREF to: 004676cd (CONDITIONAL_JUMP)  ; LAB_004676cd
    PUSH EBX                            ; 004676c2
    PUSH EDI                            ; 004676c3
    PUSH ESI                            ; 004676c4
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360 ; 004676c5
        ;   XREF to: 00466360 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 004676ca
    MOV ECX,dword ptr [ESP]             ; 004676cd
        ;   Label: LAB_004676cd
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004676d0
    INC ECX                             ; 004676d4
    INC EBX                             ; 004676d5
    MOV dword ptr [ESP],ECX             ; 004676d6
    CMP EBX,EAX                         ; 004676d9
    JL 0x004676a8                       ; 004676db
        ;   XREF to: 004676a8 (CONDITIONAL_JUMP)  ; LAB_004676a8
    MOV EBX,EDI                         ; 004676dd
        ;   Label: LAB_004676dd
    CMP EDI,EBP                         ; 004676df
    JLE 0x00467718                      ; 004676e1
        ;   XREF to: 00467718 (CONDITIONAL_JUMP)  ; LAB_00467718
    MOV EAX,dword ptr [ESP]             ; 004676e3
        ;   Label: LAB_004676e3
    MOV EDI,dword ptr [0x0060b270]      ; 004676e6 | DAT_0060b270
    MOV EDX,EAX                         ; 004676ec
    ADD EDI,EDI                         ; 004676ee
    SAR EDX,0x1f                        ; 004676f0
    IDIV EDI                            ; 004676f3
    CMP EDX,dword ptr [0x0060b270]      ; 004676f5 | DAT_0060b270
    JGE 0x0046770c                      ; 004676fb
        ;   XREF to: 0046770c (CONDITIONAL_JUMP)  ; LAB_0046770c
    MOV EDI,dword ptr [ESP + 0x2c]      ; 004676fd
    PUSH EDI                            ; 00467701
    PUSH EBX                            ; 00467702
    PUSH ESI                            ; 00467703
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360 ; 00467704
        ;   XREF to: 00466360 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 00467709
    MOV EDI,dword ptr [ESP]             ; 0046770c
        ;   Label: LAB_0046770c
    INC EDI                             ; 0046770f
    DEC EBX                             ; 00467710
    MOV dword ptr [ESP],EDI             ; 00467711
    CMP EBX,EBP                         ; 00467714
    JG 0x004676e3                       ; 00467716
        ;   XREF to: 004676e3 (CONDITIONAL_JUMP)  ; LAB_004676e3
    MOV EAX,dword ptr [ESP + 0x24]      ; 00467718
        ;   Label: LAB_00467718
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0046771c
    CMP EBX,EAX                         ; 00467720
    JLE 0x00467752                      ; 00467722
        ;   XREF to: 00467752 (CONDITIONAL_JUMP)  ; LAB_00467752
    MOV EAX,dword ptr [ESP]             ; 00467724
        ;   Label: LAB_00467724
    MOV ECX,dword ptr [0x0060b270]      ; 00467727 | DAT_0060b270
    MOV EDX,EAX                         ; 0046772d
    ADD ECX,ECX                         ; 0046772f
    SAR EDX,0x1f                        ; 00467731
    IDIV ECX                            ; 00467734
    CMP EDX,dword ptr [0x0060b270]      ; 00467736 | DAT_0060b270
    JL 0x004677d0                       ; 0046773c
        ;   XREF to: 004677d0 (CONDITIONAL_JUMP)  ; LAB_004677d0
    MOV EAX,dword ptr [ESP]             ; 00467742
        ;   Label: LAB_00467742
    MOV EDX,dword ptr [ESP + 0x24]      ; 00467745
    INC EAX                             ; 00467749
    DEC EBX                             ; 0046774a
    MOV dword ptr [ESP],EAX             ; 0046774b
    CMP EBX,EDX                         ; 0046774e
    JG 0x00467724                       ; 00467750
        ;   XREF to: 00467724 (CONDITIONAL_JUMP)  ; LAB_00467724
    ADD ESP,0x8                         ; 00467752
        ;   Label: LAB_00467752
    POP EBP                             ; 00467755
    POP EDI                             ; 00467756
    POP ESI                             ; 00467757
    POP EBX                             ; 00467758
    RET                                 ; 00467759
    FILD dword ptr [0x01c2a370]         ; 0046775a | DAT_01c2a370
        ;   Label: LAB_0046775a
    FMUL float ptr [0x005d13b0]         ; 00467760 | DAT_005d13b0
    FADD float ptr [0x01ba599c]         ; 00467766 | DAT_01ba599c
    MOV dword ptr [0x01ba59a4],ECX      ; 0046776c | DAT_01ba59a4
    FST float ptr [0x01ba599c]          ; 00467772 | DAT_01ba599c
    FCOMP float ptr [0x0060b274]        ; 00467778 | DAT_0060b274
    FNSTSW AX                           ; 0046777e
    SAHF                                ; 00467780
    JBE 0x00467635                      ; 00467781
        ;   XREF to: 00467635 (CONDITIONAL_JUMP)  ; LAB_00467635
    FLD float ptr [0x01ba599c]          ; 00467787 | DAT_01ba599c
    FDIV float ptr [0x0060b274]         ; 0046778d | DAT_0060b274
    MOV EDX,dword ptr [0x0060b270]      ; 00467793 | DAT_0060b270
    ADD EDX,EDX                         ; 00467799
    MOV dword ptr [ESP + 0x4],EDX       ; 0046779b
    FADD float ptr [0x01ba59a0]         ; 0046779f | DAT_01ba59a0
    FILD dword ptr [ESP + 0x4]          ; 004677a5
    FXCH                                ; 004677a9
    FSTP float ptr [0x01ba59a0]         ; 004677ab | DAT_01ba59a0
    FCOMP float ptr [0x01ba59a0]        ; 004677b1 | DAT_01ba59a0
    FNSTSW AX                           ; 004677b7
    SAHF                                ; 004677b9
    JNC 0x004677c4                      ; 004677ba
        ;   XREF to: 004677c4 (CONDITIONAL_JUMP)  ; LAB_004677c4
    XOR EBX,EBX                         ; 004677bc
    MOV dword ptr [0x01ba59a0],EBX      ; 004677be | DAT_01ba59a0
    XOR EAX,EAX                         ; 004677c4
        ;   Label: LAB_004677c4
    MOV [0x01ba599c],EAX                ; 004677c6 | DAT_01ba599c
    JMP 0x00467635                      ; 004677cb
        ;   XREF to: 00467635 (UNCONDITIONAL_JUMP)  ; LAB_00467635
    PUSH EBX                            ; 004677d0
        ;   Label: LAB_004677d0
    PUSH EBP                            ; 004677d1
    PUSH ESI                            ; 004677d2
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360 ; 004677d3
        ;   XREF to: 00466360 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 004677d8
    JMP 0x00467742                      ; 004677db
        ;   XREF to: 00467742 (UNCONDITIONAL_JUMP)  ; LAB_00467742

