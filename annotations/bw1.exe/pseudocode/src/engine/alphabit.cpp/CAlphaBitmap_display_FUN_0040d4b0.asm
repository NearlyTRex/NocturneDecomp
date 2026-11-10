; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0(CAlphaBitmap *this_ptr,int x,int y,int alpha)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   alpha
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[20]:
;   core_fldnotes.cpp_FUN_004ba930 at 004ba9a3
;   core_fldnotes.cpp_FUN_004bab40 at 004bab54
;   core_fldnotes.cpp_FUN_004badc0 at 004bade5
;   core_fldnotes.cpp_FUN_004bc830 at 004bc85b
;   core_fldnotes.cpp_FUN_004be0f0 at 004be1ae
;   core_game.cpp_CGame_displayActStats_FUN_004d8700 at 004d874f
;   core_game.cpp_CGame_finishAct_FUN_004d8a90 at 004d8b19
;   core_game.cpp_CGame_rollCredits_FUN_004d8e50 at 004d8ff0
;   core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004cf530 at 004cf5ab
;   core_game.cpp_FUN_004dc1a0 at 004dc1dc
;   ... and 10 more
;
; Referenced Globals:
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4354c
;
; Called Functions:
;   engine_alphabit.cpp_CAlphaBitmap_initPalette_FUN_0040d910
;   engine_special.cpp_renderAlphaRow16_FUN_0058000e
;   engine_special.cpp_renderAlphaRow32_FUN_0057ff73
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d4b0
        ;   Label: engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0
    PUSH ESI                            ; 0040d4b1
    PUSH EDI                            ; 0040d4b2
    PUSH EBP                            ; 0040d4b3
    SUB ESP,0x1c                        ; 0040d4b4
    MOV ESI,dword ptr [ESP + 0x30]      ; 0040d4b7
    MOV EDI,dword ptr [ESP + 0x34]      ; 0040d4bb
    MOV EAX,dword ptr [ESI + 0xc]       ; 0040d4bf
    ADD EAX,EDI                         ; 0040d4c2
    TEST EAX,EAX                        ; 0040d4c4
    JL 0x0040d4e7                       ; 0040d4c6
        ;   XREF to: 0040d4e7 (CONDITIONAL_JUMP)  ; LAB_0040d4e7
    CMP EDI,dword ptr [0x0061b498]      ; 0040d4c8 | DAT_0061b498
    JGE 0x0040d4e7                      ; 0040d4ce
        ;   XREF to: 0040d4e7 (CONDITIONAL_JUMP)  ; LAB_0040d4e7
    MOV EAX,dword ptr [ESP + 0x38]      ; 0040d4d0
    ADD EAX,dword ptr [ESI + 0x10]      ; 0040d4d4
    TEST EAX,EAX                        ; 0040d4d7
    JL 0x0040d4e7                       ; 0040d4d9
        ;   XREF to: 0040d4e7 (CONDITIONAL_JUMP)  ; LAB_0040d4e7
    MOV EAX,dword ptr [ESP + 0x38]      ; 0040d4db
    CMP EAX,dword ptr [0x0061b49c]      ; 0040d4df | DAT_0061b49c
    JL 0x0040d4ef                       ; 0040d4e5
        ;   XREF to: 0040d4ef (CONDITIONAL_JUMP)  ; LAB_0040d4ef
    ADD ESP,0x1c                        ; 0040d4e7
        ;   Label: LAB_0040d4e7
    POP EBP                             ; 0040d4ea
    POP EDI                             ; 0040d4eb
    POP ESI                             ; 0040d4ec
    POP EBX                             ; 0040d4ed
    RET                                 ; 0040d4ee
    PUSH ESI                            ; 0040d4ef
        ;   Label: LAB_0040d4ef
    CALL engine_alphabit.cpp_CAlphaBitmap_initPalette_FUN_0040d910 ; 0040d4f0
        ;   XREF to: 0040d910 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_initPalette_FUN_0040d910(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 0040d4f5
    MOV EAX,dword ptr [ESI]             ; 0040d4f8
    MOV dword ptr [ESP + 0x18],EAX      ; 0040d4fa
    MOV EAX,[0x0061b4a0]                ; 0040d4fe | DAT_0061b4a0
    MOV EBP,dword ptr [ESI + 0x4]       ; 0040d503
    CMP EAX,0x20                        ; 0040d506
    JNZ 0x0040d5b5                      ; 0040d509
        ;   XREF to: 0040d5b5 (CONDITIONAL_JUMP)  ; LAB_0040d5b5
    XOR EBX,EBX                         ; 0040d50f
    MOV EAX,dword ptr [ESI + 0x10]      ; 0040d511
    MOV dword ptr [ESP + 0x8],EBX       ; 0040d514
    TEST EAX,EAX                        ; 0040d518
    JLE 0x0040d4e7                      ; 0040d51a
        ;   XREF to: 0040d4e7 (CONDITIONAL_JUMP)  ; LAB_0040d4e7
    LEA EAX,[EDI*0x4 + 0x0]             ; 0040d51c
    MOV dword ptr [ESP + 0x4],EAX       ; 0040d523
    MOV EAX,dword ptr [ESP + 0x38]      ; 0040d527
    MOV dword ptr [ESP + 0x14],EAX      ; 0040d52b
    MOV ECX,dword ptr [ESP + 0x14]      ; 0040d52f
        ;   Label: LAB_0040d52f
    TEST ECX,ECX                        ; 0040d533
    JL 0x0040d57f                       ; 0040d535
        ;   XREF to: 0040d57f (CONDITIONAL_JUMP)  ; LAB_0040d57f
    CMP ECX,dword ptr [0x0061b49c]      ; 0040d537 | DAT_0061b49c
    JGE 0x0040d57f                      ; 0040d53d
        ;   XREF to: 0040d57f (CONDITIONAL_JUMP)  ; LAB_0040d57f
    MOV ECX,dword ptr [ECX*0x4 + 0x1c4354c] ; 0040d53f | DAT_01c4354c
    MOV EAX,dword ptr [ESI + 0xc]       ; 0040d546
    XOR EDX,EDX                         ; 0040d549
    TEST EDI,EDI                        ; 0040d54b
    JL 0x0040d5ad                       ; 0040d54d
        ;   XREF to: 0040d5ad (CONDITIONAL_JUMP)  ; LAB_0040d5ad
    ADD ECX,dword ptr [ESP + 0x4]       ; 0040d54f
    LEA EBX,[EDI + EAX*0x1]             ; 0040d553
        ;   Label: LAB_0040d553
    CMP EBX,dword ptr [0x0061b498]      ; 0040d556 | DAT_0061b498
    JLE 0x0040d565                      ; 0040d55c
        ;   XREF to: 0040d565 (CONDITIONAL_JUMP)  ; LAB_0040d565
    MOV EAX,[0x0061b498]                ; 0040d55e | DAT_0061b498
    SUB EAX,EDI                         ; 0040d563
    PUSH EAX                            ; 0040d565
        ;   Label: LAB_0040d565
    MOV EAX,dword ptr [ESP + 0x40]      ; 0040d566
    PUSH EAX                            ; 0040d56a
    LEA EAX,[EDX + EBP*0x1]             ; 0040d56b
    MOV EBX,dword ptr [ESP + 0x20]      ; 0040d56e
    PUSH EAX                            ; 0040d572
    ADD EDX,EBX                         ; 0040d573
    PUSH EDX                            ; 0040d575
    PUSH ECX                            ; 0040d576
    CALL engine_special.cpp_renderAlphaRow32_FUN_0057ff73 ; 0040d577
        ;   XREF to: 0057ff73 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_renderAlphaRow32_FUN_0057ff73(uint * destPixels, uchar * srcIndices, uchar * srcAlpha, int globalAlpha, ...)
    ADD ESP,0x14                        ; 0040d57c
    MOV EDX,dword ptr [ESP + 0x18]      ; 0040d57f
        ;   Label: LAB_0040d57f
    MOV EBX,dword ptr [ESP + 0x14]      ; 0040d583
    MOV EAX,dword ptr [ESI + 0xc]       ; 0040d587
    INC EBX                             ; 0040d58a
    ADD EDX,EAX                         ; 0040d58b
    ADD EBP,EAX                         ; 0040d58d
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040d58f
    MOV dword ptr [ESP + 0x18],EDX      ; 0040d593
    MOV dword ptr [ESP + 0x14],EBX      ; 0040d597
    INC EAX                             ; 0040d59b
    MOV EDX,dword ptr [ESI + 0x10]      ; 0040d59c
    MOV dword ptr [ESP + 0x8],EAX       ; 0040d59f
    CMP EAX,EDX                         ; 0040d5a3
    JGE 0x0040d4e7                      ; 0040d5a5
        ;   XREF to: 0040d4e7 (CONDITIONAL_JUMP)  ; LAB_0040d4e7
    JMP 0x0040d52f                      ; 0040d5ab
        ;   XREF to: 0040d52f (UNCONDITIONAL_JUMP)  ; LAB_0040d52f
    MOV EDX,EDI                         ; 0040d5ad
        ;   Label: LAB_0040d5ad
    NEG EDX                             ; 0040d5af
    SUB EAX,EDX                         ; 0040d5b1
    JMP 0x0040d553                      ; 0040d5b3
        ;   XREF to: 0040d553 (UNCONDITIONAL_JUMP)  ; LAB_0040d553
    XOR EDX,EDX                         ; 0040d5b5
        ;   Label: LAB_0040d5b5
    MOV ECX,dword ptr [ESI + 0x10]      ; 0040d5b7
    MOV dword ptr [ESP + 0xc],EDX       ; 0040d5ba
    TEST ECX,ECX                        ; 0040d5be
    JLE 0x0040d4e7                      ; 0040d5c0
        ;   XREF to: 0040d4e7 (CONDITIONAL_JUMP)  ; LAB_0040d4e7
    LEA EAX,[EDI + EDI*0x1]             ; 0040d5c6
    MOV dword ptr [ESP],EAX             ; 0040d5c9
    MOV EAX,dword ptr [ESP + 0x38]      ; 0040d5cc
    MOV dword ptr [ESP + 0x10],EAX      ; 0040d5d0
    MOV ECX,dword ptr [ESP + 0x10]      ; 0040d5d4
        ;   Label: LAB_0040d5d4
    TEST ECX,ECX                        ; 0040d5d8
    JL 0x0040d623                       ; 0040d5da
        ;   XREF to: 0040d623 (CONDITIONAL_JUMP)  ; LAB_0040d623
    CMP ECX,dword ptr [0x0061b49c]      ; 0040d5dc | DAT_0061b49c
    JGE 0x0040d623                      ; 0040d5e2
        ;   XREF to: 0040d623 (CONDITIONAL_JUMP)  ; LAB_0040d623
    MOV ECX,dword ptr [ECX*0x4 + 0x1c4354c] ; 0040d5e4 | DAT_01c4354c
    MOV EAX,dword ptr [ESI + 0xc]       ; 0040d5eb
    XOR EDX,EDX                         ; 0040d5ee
    TEST EDI,EDI                        ; 0040d5f0
    JL 0x0040d651                       ; 0040d5f2
        ;   XREF to: 0040d651 (CONDITIONAL_JUMP)  ; LAB_0040d651
    ADD ECX,dword ptr [ESP]             ; 0040d5f4
    LEA EBX,[EDI + EAX*0x1]             ; 0040d5f7
        ;   Label: LAB_0040d5f7
    CMP EBX,dword ptr [0x0061b498]      ; 0040d5fa | DAT_0061b498
    JLE 0x0040d609                      ; 0040d600
        ;   XREF to: 0040d609 (CONDITIONAL_JUMP)  ; LAB_0040d609
    MOV EAX,[0x0061b498]                ; 0040d602 | DAT_0061b498
    SUB EAX,EDI                         ; 0040d607
    PUSH EAX                            ; 0040d609
        ;   Label: LAB_0040d609
    MOV EAX,dword ptr [ESP + 0x40]      ; 0040d60a
    PUSH EAX                            ; 0040d60e
    LEA EAX,[EDX + EBP*0x1]             ; 0040d60f
    MOV EBX,dword ptr [ESP + 0x20]      ; 0040d612
    PUSH EAX                            ; 0040d616
    ADD EDX,EBX                         ; 0040d617
    PUSH EDX                            ; 0040d619
    PUSH ECX                            ; 0040d61a
    CALL engine_special.cpp_renderAlphaRow16_FUN_0058000e ; 0040d61b
        ;   XREF to: 0058000e (UNCONDITIONAL_CALL)  ; void engine_special.cpp_renderAlphaRow16_FUN_0058000e(ushort * destPixels, uchar * srcIndices, uchar * srcAlpha, int globalAlpha, ...)
    ADD ESP,0x14                        ; 0040d620
    MOV EDX,dword ptr [ESP + 0x18]      ; 0040d623
        ;   Label: LAB_0040d623
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040d627
    MOV EAX,dword ptr [ESI + 0xc]       ; 0040d62b
    INC EBX                             ; 0040d62e
    ADD EDX,EAX                         ; 0040d62f
    ADD EBP,EAX                         ; 0040d631
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040d633
    MOV dword ptr [ESP + 0x18],EDX      ; 0040d637
    MOV dword ptr [ESP + 0x10],EBX      ; 0040d63b
    INC EAX                             ; 0040d63f
    MOV EDX,dword ptr [ESI + 0x10]      ; 0040d640
    MOV dword ptr [ESP + 0xc],EAX       ; 0040d643
    CMP EAX,EDX                         ; 0040d647
    JGE 0x0040d4e7                      ; 0040d649
        ;   XREF to: 0040d4e7 (CONDITIONAL_JUMP)  ; LAB_0040d4e7
    JMP 0x0040d5d4                      ; 0040d64f
        ;   XREF to: 0040d5d4 (UNCONDITIONAL_JUMP)  ; LAB_0040d5d4
    MOV EDX,EDI                         ; 0040d651
        ;   Label: LAB_0040d651
    NEG EDX                             ; 0040d653
    SUB EAX,EDX                         ; 0040d655
    JMP 0x0040d5f7                      ; 0040d657
        ;   XREF to: 0040d5f7 (UNCONDITIONAL_JUMP)  ; LAB_0040d5f7

