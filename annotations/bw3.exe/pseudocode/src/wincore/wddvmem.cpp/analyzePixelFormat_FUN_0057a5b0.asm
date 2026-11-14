; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_wddvmem_cpp_analyzePixelFormat_FUN_0057a5b0(void)
;
; Local Variables:
; undefined4       Stack[-0x70]:4  local_70
;
; XREF[1]:
;   wincore_wddvmem.cpp_setupColorPalette_FUN_0057a770 at 0057a88f
;
; Referenced Globals:
;   TerminatedCString s_wincore_wddvmem_cpp_005d766a
;   TerminatedCString s_setColorTable16_Unable_t_005d7681
;   TerminatedCString s_wincore_wddvmem_cpp_005d76af
;   TerminatedCString s_setColorTable16_Unable_t_005d76c6
;   undefined4 DAT_01c6af74
;   undefined4 DAT_01c6af78
;   undefined4 DAT_01c6af7c
;   undefined4 DAT_01c6af80
;   undefined4 DAT_01c6af84
;   undefined4 DAT_01c6af88
;   undefined4 DAT_01c6af8c
;   undefined4 DAT_01c6af90
;   undefined4 DAT_01c6af94
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   ... and 1 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_memory.c_memset_FUN_005a28f0
;   wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004d4eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057a5b0
        ;   Label: wincore_wddvmem.cpp_analyzePixelFormat_FUN_0057a5b0
    SUB ESP,0x6c                        ; 0057a5b1
    PUSH 0x6c                           ; 0057a5b4
    PUSH 0x0                            ; 0057a5b6
    LEA EAX,[ESP + 0x8]                 ; 0057a5b8
    PUSH EAX                            ; 0057a5bc
    CALL crt_memory.c_memset_FUN_005a28f0 ; 0057a5bd
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0057a5c2
    PUSH 0x0                            ; 0057a5c5
    PUSH 0x1                            ; 0057a5c7
    LEA ECX,[ESP + 0x8]                 ; 0057a5c9
    MOV EDX,0x6c                        ; 0057a5cd
    PUSH ECX                            ; 0057a5d2
    MOV EAX,[0x02d0bce8]                ; 0057a5d3 | DAT_02d0bce8
    MOV dword ptr [ESP + 0xc],EDX       ; 0057a5d8
    PUSH 0x0                            ; 0057a5dc
    MOV EDX,dword ptr [EAX]             ; 0057a5de
    PUSH EAX                            ; 0057a5e0
    CALL dword ptr [EDX + 0x64]         ; 0057a5e1
    TEST EAX,EAX                        ; 0057a5e4
    JNZ 0x0057a670                      ; 0057a5e6
        ;   XREF to: 0057a670 (CONDITIONAL_JUMP)  ; LAB_0057a670
    PUSH 0x0                            ; 0057a5ec
        ;   Label: LAB_0057a5ec
    MOV EAX,[0x02d0bce8]                ; 0057a5ee | DAT_02d0bce8
    PUSH EAX                            ; 0057a5f3
    MOV ECX,dword ptr [EAX]             ; 0057a5f4
    CALL dword ptr [ECX + 0x80]         ; 0057a5f6
    TEST EAX,EAX                        ; 0057a5fc
    JZ 0x0057a627                       ; 0057a5fe
        ;   XREF to: 0057a627 (CONDITIONAL_JUMP)  ; LAB_0057a627
    PUSH EDI                            ; 0057a600
    PUSH ESI                            ; 0057a601
    MOV ESI,0x5d76af                    ; 0057a602 | = "..\\wincore\\wddvmem.cpp"
    MOV EDI,0x2c0                       ; 0057a607
    PUSH 0x5d76c6                       ; 0057a60c | = "setColorTable16 - Unable to unlock ba..."
    MOV dword ptr [0x01d71de0],ESI      ; 0057a611 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 0057a617 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0057a61d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0057a622
    POP ESI                             ; 0057a625
    POP EDI                             ; 0057a626
    MOV EAX,dword ptr [ESP + 0x58]      ; 0057a627
        ;   Label: LAB_0057a627
    MOV DL,byte ptr [ESP + 0x58]        ; 0057a62b
    XOR ECX,ECX                         ; 0057a62f
    TEST DL,0x1                         ; 0057a631
    JNZ 0x0057a640                      ; 0057a634
        ;   XREF to: 0057a640 (CONDITIONAL_JUMP)  ; LAB_0057a640
    SHR EAX,0x1                         ; 0057a636
        ;   Label: LAB_0057a636
    INC ECX                             ; 0057a638
    TEST AL,0x1                         ; 0057a639
    JZ 0x0057a636                       ; 0057a63b
        ;   XREF to: 0057a636 (CONDITIONAL_JUMP)  ; LAB_0057a636
    LEA EAX,[EAX]                       ; 0057a63d
    MOV EAX,dword ptr [ESP + 0x58]      ; 0057a640
        ;   Label: LAB_0057a640
    MOV dword ptr [0x01c6af74],ECX      ; 0057a644 | DAT_01c6af74
    SHR EAX,CL                          ; 0057a64a
    XOR EDX,EDX                         ; 0057a64c
    MOV ECX,EAX                         ; 0057a64e
    MOV EAX,0xff                        ; 0057a650
    DIV ECX                             ; 0057a655
    MOV [0x01c6af78],EAX                ; 0057a657 | DAT_01c6af78
    XOR ECX,ECX                         ; 0057a65c
    TEST EAX,EAX                        ; 0057a65e
    JZ 0x0057a698                       ; 0057a660
        ;   XREF to: 0057a698 (CONDITIONAL_JUMP)  ; LAB_0057a698
    CMP EAX,0x1                         ; 0057a662
        ;   Label: LAB_0057a662
    JBE 0x0057a6ec                      ; 0057a665
        ;   XREF to: 0057a6ec (CONDITIONAL_JUMP)  ; LAB_0057a6ec
    INC ECX                             ; 0057a66b
    SHR EAX,0x1                         ; 0057a66c
    JMP 0x0057a662                      ; 0057a66e
        ;   XREF to: 0057a662 (UNCONDITIONAL_JUMP)  ; LAB_0057a662
    MOV ECX,0x5d766a                    ; 0057a670 | = "..\\wincore\\wddvmem.cpp"
        ;   Label: LAB_0057a670
    MOV EBX,0x2be                       ; 0057a675
    PUSH 0x5d7681                       ; 0057a67a | = "setColorTable16 - Unable to lock back..."
    MOV dword ptr [0x01d71de0],ECX      ; 0057a67f | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 0057a685 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0057a68b
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0057a690
    JMP 0x0057a5ec                      ; 0057a693
        ;   XREF to: 0057a5ec (UNCONDITIONAL_JUMP)  ; LAB_0057a5ec
    MOV EAX,0x20                        ; 0057a698
        ;   Label: LAB_0057a698
    MOV DH,byte ptr [ESP + 0x5c]        ; 0057a69d
        ;   Label: LAB_0057a69d
    MOV [0x01c6af7c],EAX                ; 0057a6a1 | DAT_01c6af7c
    XOR ECX,ECX                         ; 0057a6a6
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0057a6a8
    TEST DH,0x1                         ; 0057a6ac
    JNZ 0x0057a6c0                      ; 0057a6af
        ;   XREF to: 0057a6c0 (CONDITIONAL_JUMP)  ; LAB_0057a6c0
    SHR EAX,0x1                         ; 0057a6b1
        ;   Label: LAB_0057a6b1
    INC ECX                             ; 0057a6b3
    TEST AL,0x1                         ; 0057a6b4
    JZ 0x0057a6b1                       ; 0057a6b6
        ;   XREF to: 0057a6b1 (CONDITIONAL_JUMP)  ; LAB_0057a6b1
    LEA EAX,[EAX]                       ; 0057a6b8
    MOV EDX,EDX                         ; 0057a6be
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0057a6c0
        ;   Label: LAB_0057a6c0
    MOV dword ptr [0x01c6af80],ECX      ; 0057a6c4 | DAT_01c6af80
    SHR EAX,CL                          ; 0057a6ca
    XOR EDX,EDX                         ; 0057a6cc
    MOV ECX,EAX                         ; 0057a6ce
    MOV EAX,0xff                        ; 0057a6d0
    DIV ECX                             ; 0057a6d5
    MOV [0x01c6af84],EAX                ; 0057a6d7 | DAT_01c6af84
    XOR ECX,ECX                         ; 0057a6dc
    TEST EAX,EAX                        ; 0057a6de
    JZ 0x0057a6f0                       ; 0057a6e0
        ;   XREF to: 0057a6f0 (CONDITIONAL_JUMP)  ; LAB_0057a6f0
    CMP EAX,0x1                         ; 0057a6e2
        ;   Label: LAB_0057a6e2
    JBE 0x0057a73c                      ; 0057a6e5
        ;   XREF to: 0057a73c (CONDITIONAL_JUMP)  ; LAB_0057a73c
    INC ECX                             ; 0057a6e7
    SHR EAX,0x1                         ; 0057a6e8
    JMP 0x0057a6e2                      ; 0057a6ea
        ;   XREF to: 0057a6e2 (UNCONDITIONAL_JUMP)  ; LAB_0057a6e2
    MOV EAX,ECX                         ; 0057a6ec
        ;   Label: LAB_0057a6ec
    JMP 0x0057a69d                      ; 0057a6ee
        ;   XREF to: 0057a69d (UNCONDITIONAL_JUMP)  ; LAB_0057a69d
    MOV EAX,0x20                        ; 0057a6f0
        ;   Label: LAB_0057a6f0
    MOV BL,byte ptr [ESP + 0x60]        ; 0057a6f5
        ;   Label: LAB_0057a6f5
    MOV [0x01c6af88],EAX                ; 0057a6f9 | DAT_01c6af88
    XOR ECX,ECX                         ; 0057a6fe
    MOV EAX,dword ptr [ESP + 0x60]      ; 0057a700
    TEST BL,0x1                         ; 0057a704
    JNZ 0x0057a710                      ; 0057a707
        ;   XREF to: 0057a710 (CONDITIONAL_JUMP)  ; LAB_0057a710
    SHR EAX,0x1                         ; 0057a709
        ;   Label: LAB_0057a709
    INC ECX                             ; 0057a70b
    TEST AL,0x1                         ; 0057a70c
    JZ 0x0057a709                       ; 0057a70e
        ;   XREF to: 0057a709 (CONDITIONAL_JUMP)  ; LAB_0057a709
    MOV EAX,dword ptr [ESP + 0x60]      ; 0057a710
        ;   Label: LAB_0057a710
    MOV dword ptr [0x01c6af8c],ECX      ; 0057a714 | DAT_01c6af8c
    SHR EAX,CL                          ; 0057a71a
    XOR EDX,EDX                         ; 0057a71c
    MOV ECX,EAX                         ; 0057a71e
    MOV EAX,0xff                        ; 0057a720
    DIV ECX                             ; 0057a725
    MOV [0x01c6af90],EAX                ; 0057a727 | DAT_01c6af90
    XOR ECX,ECX                         ; 0057a72c
    TEST EAX,EAX                        ; 0057a72e
    JZ 0x0057a740                       ; 0057a730
        ;   XREF to: 0057a740 (CONDITIONAL_JUMP)  ; LAB_0057a740
    CMP EAX,0x1                         ; 0057a732
        ;   Label: LAB_0057a732
    JBE 0x0057a754                      ; 0057a735
        ;   XREF to: 0057a754 (CONDITIONAL_JUMP)  ; LAB_0057a754
    INC ECX                             ; 0057a737
    SHR EAX,0x1                         ; 0057a738
    JMP 0x0057a732                      ; 0057a73a
        ;   XREF to: 0057a732 (UNCONDITIONAL_JUMP)  ; LAB_0057a732
    MOV EAX,ECX                         ; 0057a73c
        ;   Label: LAB_0057a73c
    JMP 0x0057a6f5                      ; 0057a73e
        ;   XREF to: 0057a6f5 (UNCONDITIONAL_JUMP)  ; LAB_0057a6f5
    MOV EAX,0x20                        ; 0057a740
        ;   Label: LAB_0057a740
    MOV [0x01c6af94],EAX                ; 0057a745 | DAT_01c6af94
    CALL wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004d4eb0 ; 0057a74a
        ;   XREF to: 004d4eb0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004d4eb0()
    ADD ESP,0x6c                        ; 0057a74f
    POP EBX                             ; 0057a752
    RET                                 ; 0057a753
    MOV EAX,ECX                         ; 0057a754
        ;   Label: LAB_0057a754
    MOV [0x01c6af94],EAX                ; 0057a756 | DAT_01c6af94
    CALL wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004d4eb0 ; 0057a75b
        ;   XREF to: 004d4eb0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004d4eb0()
    ADD ESP,0x6c                        ; 0057a760
    POP EBX                             ; 0057a763
    RET                                 ; 0057a764

