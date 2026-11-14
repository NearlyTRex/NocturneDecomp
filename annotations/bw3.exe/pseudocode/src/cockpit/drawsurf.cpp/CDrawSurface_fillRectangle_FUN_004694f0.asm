; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_fillRectangle_FUN_004694f0(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x1
; int              Stack[0xc]:4   y1
; int              Stack[0x10]:4   x2
; int              Stack[0x14]:4   y2
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00469690 at 004696a2
;
; Referenced Globals:
;   TerminatedCString s_cockpit_drawsurf_cpp_005bc344
;   TerminatedCString s_Invalid_bitsPerPixel_005bc35c
;   undefined4 DAT_005fba20
;   undefined4 DAT_01bdd7bc
;   undefined4 DAT_01bdd7c8
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01c5faf0
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   cockpit_drawsurf.cpp_drawHorizontalLineWithEffect_FUN_00468090
;   core_main.c_FUN_004e4330
;   crt_memory.c_memset_FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004694f0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_fillRectangle_FUN_004694f0
    PUSH ESI                            ; 004694f1
    PUSH EDI                            ; 004694f2
    PUSH EBP                            ; 004694f3
    SUB ESP,0x14                        ; 004694f4
    MOV EAX,dword ptr [ESP + 0x28]      ; 004694f7
    MOV EDI,dword ptr [ESP + 0x2c]      ; 004694fb
    MOV ESI,dword ptr [ESP + 0x30]      ; 004694ff
    MOV EBX,dword ptr [ESP + 0x34]      ; 00469503
    MOV EBP,dword ptr [ESP + 0x38]      ; 00469507
    MOV EDX,dword ptr [EAX + 0x8]       ; 0046950b
    MOV ECX,dword ptr [EAX + 0xc]       ; 0046950e
    ADD EBX,EDX                         ; 00469511
    ADD EDI,EDX                         ; 00469513
    ADD ESI,ECX                         ; 00469515
    MOV EDX,dword ptr [EAX + 0x10]      ; 00469517
    ADD EBP,ECX                         ; 0046951a
    CMP EDI,EDX                         ; 0046951c
    JGE 0x00469522                      ; 0046951e
        ;   XREF to: 00469522 (CONDITIONAL_JUMP)  ; LAB_00469522
    MOV EDI,EDX                         ; 00469520
    MOV ECX,dword ptr [EAX + 0x18]      ; 00469522
        ;   Label: LAB_00469522
    CMP EBX,ECX                         ; 00469525
    JLE 0x0046952b                      ; 00469527
        ;   XREF to: 0046952b (CONDITIONAL_JUMP)  ; LAB_0046952b
    MOV EBX,ECX                         ; 00469529
    CMP EDI,EBX                         ; 0046952b
        ;   Label: LAB_0046952b
    JG 0x00469570                       ; 0046952d
        ;   XREF to: 00469570 (CONDITIONAL_JUMP)  ; LAB_00469570
    MOV EDX,dword ptr [EAX + 0x14]      ; 0046952f
    CMP ESI,EDX                         ; 00469532
    JGE 0x00469538                      ; 00469534
        ;   XREF to: 00469538 (CONDITIONAL_JUMP)  ; LAB_00469538
    MOV ESI,EDX                         ; 00469536
    MOV ECX,dword ptr [EAX + 0x1c]      ; 00469538
        ;   Label: LAB_00469538
    CMP EBP,ECX                         ; 0046953b
    JLE 0x00469541                      ; 0046953d
        ;   XREF to: 00469541 (CONDITIONAL_JUMP)  ; LAB_00469541
    MOV EBP,ECX                         ; 0046953f
    CMP ESI,EBP                         ; 00469541
        ;   Label: LAB_00469541
    JG 0x00469570                       ; 00469543
        ;   XREF to: 00469570 (CONDITIONAL_JUMP)  ; LAB_00469570
    CMP dword ptr [0x01bdd7c8],0x0      ; 00469545 | DAT_01bdd7c8
    JZ 0x00469630                       ; 0046954c
        ;   XREF to: 00469630 (CONDITIONAL_JUMP)  ; LAB_00469630
    PUSH ESI                            ; 00469552
        ;   Label: LAB_00469552
    PUSH EBX                            ; 00469553
    PUSH EDI                            ; 00469554
    INC ESI                             ; 00469555
    CALL cockpit_drawsurf.cpp_drawHorizontalLineWithEffect_FUN_00468090 ; 00469556
        ;   XREF to: 00468090 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_drawHorizontalLineWithEffect_FUN_00468090(int start_x, int end_x, int y)
    ADD ESP,0xc                         ; 0046955b
    CMP ESI,EBP                         ; 0046955e
    JLE 0x00469552                      ; 00469560
        ;   XREF to: 00469552 (CONDITIONAL_JUMP)  ; LAB_00469552
    LEA EAX,[EAX]                       ; 00469562
    LEA EDX,[EDX]                       ; 00469568
    MOV EAX,EAX                         ; 0046956e
    ADD ESP,0x14                        ; 00469570
        ;   Label: LAB_00469570
    POP EBP                             ; 00469573
    POP EDI                             ; 00469574
    POP ESI                             ; 00469575
    POP EBX                             ; 00469576
    RET                                 ; 00469577
    SUB EBX,EDI                         ; 00469578
        ;   Label: LAB_00469578
    INC EBX                             ; 0046957a
    MOV dword ptr [ESP],EBX             ; 0046957b
    MOV EBX,EBP                         ; 0046957e
    MOV EBP,EDX                         ; 00469580
    MOV EDX,dword ptr [ESP]             ; 00469582
        ;   Label: LAB_00469582
    PUSH EDX                            ; 00469585
    MOV ECX,dword ptr [0x01bdd7bc]      ; 00469586 | DAT_01bdd7bc
    MOV EAX,dword ptr [EBX + 0x1c5faec] ; 0046958c | DAT_01c5faec | DAT_01c5faf0
    PUSH ECX                            ; 00469592
    ADD EAX,EDI                         ; 00469593
    PUSH EAX                            ; 00469595
    ADD EBX,0x4                         ; 00469596
    INC ESI                             ; 00469599
    CALL crt_memory.c_memset_FUN_005a28f0 ; 0046959a
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0046959f
    CMP EBX,EBP                         ; 004695a2
    JLE 0x00469582                      ; 004695a4
        ;   XREF to: 00469582 (CONDITIONAL_JUMP)  ; LAB_00469582
    ADD ESP,0x14                        ; 004695a6
    POP EBP                             ; 004695a9
    POP EDI                             ; 004695aa
    POP ESI                             ; 004695ab
    POP EBX                             ; 004695ac
    RET                                 ; 004695ad
    MOV dword ptr [ESP + 0x8],EDX       ; 004695ae
        ;   Label: LAB_004695ae
    MOV EAX,dword ptr [EBP + 0x1c5faec] ; 004695b2 | DAT_01c5faec | DAT_01c5faf0
        ;   Label: LAB_004695b2
    MOV dword ptr [ESP + 0x10],EAX      ; 004695b8
    MOV EAX,EDI                         ; 004695bc
    CMP EDI,EBX                         ; 004695be
    JG 0x004695de                       ; 004695c0
        ;   XREF to: 004695de (CONDITIONAL_JUMP)  ; LAB_004695de
    MOV ECX,dword ptr [ESP + 0x10]      ; 004695c2
    LEA EDX,[EDI + EDI*0x1]             ; 004695c6
    ADD EDX,ECX                         ; 004695c9
    ADD EDX,0x2                         ; 004695cb
        ;   Label: LAB_004695cb
    MOV CX,word ptr [0x01bdd7bc]        ; 004695ce | DAT_01bdd7bc
    INC EAX                             ; 004695d5
    MOV word ptr [EDX + -0x2],CX        ; 004695d6
    CMP EAX,EBX                         ; 004695da
    JLE 0x004695cb                      ; 004695dc
        ;   XREF to: 004695cb (CONDITIONAL_JUMP)  ; LAB_004695cb
    MOV EAX,dword ptr [ESP + 0x8]       ; 004695de
        ;   Label: LAB_004695de
    ADD EBP,0x4                         ; 004695e2
    INC ESI                             ; 004695e5
    CMP EBP,EAX                         ; 004695e6
    JG 0x00469570                       ; 004695e8
        ;   XREF to: 00469570 (CONDITIONAL_JUMP)  ; LAB_00469570
    JMP 0x004695b2                      ; 004695ea
        ;   XREF to: 004695b2 (UNCONDITIONAL_JUMP)  ; LAB_004695b2
    MOV dword ptr [ESP + 0x4],EDX       ; 004695ec
        ;   Label: LAB_004695ec
    MOV EAX,dword ptr [EBP + 0x1c5faec] ; 004695f0 | DAT_01c5faec | DAT_01c5faf0
        ;   Label: LAB_004695f0
    MOV EDX,EDI                         ; 004695f6
    MOV dword ptr [ESP + 0xc],EAX       ; 004695f8
    CMP EDI,EBX                         ; 004695fc
    JG 0x0046961e                       ; 004695fe
        ;   XREF to: 0046961e (CONDITIONAL_JUMP)  ; LAB_0046961e
    MOV ECX,dword ptr [ESP + 0xc]       ; 00469600
    LEA EAX,[EDI*0x4 + 0x0]             ; 00469604
    ADD EAX,ECX                         ; 0046960b
    ADD EAX,0x4                         ; 0046960d
        ;   Label: LAB_0046960d
    MOV ECX,dword ptr [0x01bdd7bc]      ; 00469610 | DAT_01bdd7bc
    INC EDX                             ; 00469616
    MOV dword ptr [EAX + -0x4],ECX      ; 00469617
    CMP EDX,EBX                         ; 0046961a
    JLE 0x0046960d                      ; 0046961c
        ;   XREF to: 0046960d (CONDITIONAL_JUMP)  ; LAB_0046960d
    MOV EAX,dword ptr [ESP + 0x4]       ; 0046961e
        ;   Label: LAB_0046961e
    ADD EBP,0x4                         ; 00469622
    INC ESI                             ; 00469625
    CMP EBP,EAX                         ; 00469626
    JG 0x00469570                       ; 00469628
        ;   XREF to: 00469570 (CONDITIONAL_JUMP)  ; LAB_00469570
    JMP 0x004695f0                      ; 0046962e
        ;   XREF to: 004695f0 (UNCONDITIONAL_JUMP)  ; LAB_004695f0
    LEA EDX,[EBP*0x4 + 0x0]             ; 00469630
        ;   Label: LAB_00469630
    MOV EAX,[0x005fba20]                ; 00469637 | DAT_005fba20
    LEA EBP,[ESI*0x4 + 0x0]             ; 0046963c
    CMP EAX,0x10                        ; 00469643
    JNC 0x00469653                      ; 00469646
        ;   XREF to: 00469653 (CONDITIONAL_JUMP)  ; LAB_00469653
    CMP EAX,0x8                         ; 00469648
    JZ 0x00469578                       ; 0046964b
        ;   XREF to: 00469578 (CONDITIONAL_JUMP)  ; LAB_00469578
    JMP 0x0046965e                      ; 00469651
        ;   XREF to: 0046965e (UNCONDITIONAL_JUMP)  ; LAB_0046965e
    JBE 0x004695ae                      ; 00469653
        ;   XREF to: 004695ae (CONDITIONAL_JUMP)  ; LAB_004695ae
        ;   Label: LAB_00469653
    CMP EAX,0x20                        ; 00469659
    JZ 0x004695ec                       ; 0046965c
        ;   XREF to: 004695ec (CONDITIONAL_JUMP)  ; LAB_004695ec
    MOV EDX,0x5bc344                    ; 0046965e | = "..\\cockpit\\drawsurf.cpp"
        ;   Label: LAB_0046965e
    MOV ECX,0x525                       ; 00469663
    PUSH 0x5bc35c                       ; 00469668 | = "Invalid bitsPerPixel!"
    MOV dword ptr [0x01d71de0],EDX      ; 0046966d | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00469673 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00469679
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0046967e
    ADD ESP,0x14                        ; 00469681
    POP EBP                             ; 00469684
    POP EDI                             ; 00469685
    POP ESI                             ; 00469686
    POP EBX                             ; 00469687
    RET                                 ; 00469688

