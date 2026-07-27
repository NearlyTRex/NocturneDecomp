; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dimage_cpp_FUN_0044d550(undefined1 *param_1,char *param_2,undefined4 param_3,undefined4 param_4)
;
; Local Variables:
; undefined1       Stack[-0x11c]:1  local_11c
; undefined1       Stack[-0x11b]:1  local_11b
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_rb_0057c3d6
;   TerminatedCString s_art_0057c3d9
;   TerminatedCString s_core_dimage_cpp_0057c3dd
;   TerminatedCString s_CDemonImage_load_Unable_0057c3f0
;   TerminatedCString s_core_dimage_cpp_0057c41a
;   TerminatedCString s_CDemonImage_load_Unable_0057c42d
;   TerminatedCString s_ACT_0057c45b
;   undefined4 s_ACT_0057c45b+1
;   undefined4 s_ACT_0057c45b+2
;   undefined4 s_ACT_0057c45b+3
;   TerminatedCString s_rb_0057c460
;   TerminatedCString s_art_0057c463
;   TerminatedCString s_core_dimage_cpp_0057c467
;   TerminatedCString s_CDemonImage_load_Unable_0057c47a
;   char* PTR_01cc4800
;   ... and 1 more
;
; Called Functions:
;   core_dimage.cpp_FUN_0044d460
;   core_dimage.cpp_FUN_0044d4f0
;   core_main.c_FUN_004c8440
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fread_FUN_005636d0
;   engine_dosio.cpp_getFile_FUN_00456a60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044d550
        ;   Label: core_dimage.cpp_FUN_0044d550
    PUSH ESI                            ; 0044d551
    PUSH EDI                            ; 0044d552
    PUSH EBP                            ; 0044d553
    SUB ESP,0x10c                       ; 0044d554
    MOV ESI,dword ptr [ESP + 0x124]     ; 0044d55a
    MOV EBP,dword ptr [ESP + 0x128]     ; 0044d561
    MOV EDI,ESP                         ; 0044d568
    PUSH EDI                            ; 0044d56a
    MOV AL,byte ptr [ESI]               ; 0044d56b
        ;   Label: LAB_0044d56b
    MOV byte ptr [EDI],AL               ; 0044d56d
    CMP AL,0x0                          ; 0044d56f
    JZ 0x0044d583                       ; 0044d571
        ;   XREF to: 0044d583 (CONDITIONAL_JUMP)  ; LAB_0044d583
    MOV AL,byte ptr [ESI + 0x1]         ; 0044d573
    ADD ESI,0x2                         ; 0044d576
    MOV byte ptr [EDI + 0x1],AL         ; 0044d579
    ADD EDI,0x2                         ; 0044d57c
    CMP AL,0x0                          ; 0044d57f
    JNZ 0x0044d56b                      ; 0044d581
        ;   XREF to: 0044d56b (CONDITIONAL_JUMP)  ; LAB_0044d56b
    POP EDI                             ; 0044d583
        ;   Label: LAB_0044d583
    PUSH 0x57c3d6                       ; 0044d584 | = "rb"
    LEA EAX,[ESP + 0x4]                 ; 0044d589
    PUSH EAX                            ; 0044d58d
    PUSH 0x57c3d9                       ; 0044d58e | = "art"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 0044d593
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getFile_FUN_00456a60()
    ADD ESP,0xc                         ; 0044d598
    MOV EBX,EAX                         ; 0044d59b
    TEST EAX,EAX                        ; 0044d59d
    JZ 0x0044d743                       ; 0044d59f
        ;   XREF to: 0044d743 (CONDITIONAL_JUMP)  ; LAB_0044d743
    MOV EAX,dword ptr [ESP + 0x120]     ; 0044d5a5
        ;   Label: LAB_0044d5a5
    MOV ESI,dword ptr [ESP + 0x120]     ; 0044d5ac
    MOV dword ptr [EAX + 0x304],EBP     ; 0044d5b3
    MOV EAX,dword ptr [ESP + 0x12c]     ; 0044d5b9
    PUSH ESI                            ; 0044d5c0
    MOV dword ptr [ESI + 0x308],EAX     ; 0044d5c1
    CALL core_dimage.cpp_FUN_0044d460   ; 0044d5c7
        ;   XREF to: 0044d460 (UNCONDITIONAL_CALL)  ; undefined core_dimage.cpp_FUN_0044d460()
    ADD ESP,0x4                         ; 0044d5cc
    PUSH EBX                            ; 0044d5cf
    MOV EDI,dword ptr [ESP + 0x130]     ; 0044d5d0
    PUSH EDI                            ; 0044d5d7
    PUSH EBP                            ; 0044d5d8
    MOV EBP,dword ptr [ESI + 0x300]     ; 0044d5d9
    PUSH EBP                            ; 0044d5df
    CALL crt_stdio.c_fread_FUN_005636d0 ; 0044d5e0
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005636d0()
    ADD ESP,0x10                        ; 0044d5e5
    PUSH EBX                            ; 0044d5e8
    CALL crt_stdio.c_fclose_FUN_00563380 ; 0044d5e9
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_00563380()
    ADD ESP,0x4                         ; 0044d5ee
    MOV ESI,ESP                         ; 0044d5f1
    MOV DL,0x2e                         ; 0044d5f3
    MOV AL,byte ptr [ESI]               ; 0044d5f5
        ;   Label: LAB_0044d5f5
    CMP AL,DL                           ; 0044d5f7
    JZ 0x0044d60d                       ; 0044d5f9
        ;   XREF to: 0044d60d (CONDITIONAL_JUMP)  ; LAB_0044d60d
    CMP AL,0x0                          ; 0044d5fb
    JZ 0x0044d60b                       ; 0044d5fd
        ;   XREF to: 0044d60b (CONDITIONAL_JUMP)  ; LAB_0044d60b
    INC ESI                             ; 0044d5ff
    MOV AL,byte ptr [ESI]               ; 0044d600
    CMP AL,DL                           ; 0044d602
    JZ 0x0044d60d                       ; 0044d604
        ;   XREF to: 0044d60d (CONDITIONAL_JUMP)  ; LAB_0044d60d
    INC ESI                             ; 0044d606
    CMP AL,0x0                          ; 0044d607
    JNZ 0x0044d5f5                      ; 0044d609
        ;   XREF to: 0044d5f5 (CONDITIONAL_JUMP)  ; LAB_0044d5f5
    SUB ESI,ESI                         ; 0044d60b
        ;   Label: LAB_0044d60b
    MOV EDI,ESI                         ; 0044d60d
        ;   Label: LAB_0044d60d
    TEST ESI,ESI                        ; 0044d60f
    JNZ 0x0044d635                      ; 0044d611
        ;   XREF to: 0044d635 (CONDITIONAL_JUMP)  ; LAB_0044d635
    MOV EAX,0x57c41a                    ; 0044d613 | = "..\\core\\dimage.cpp"
    MOV EDX,0x7b                        ; 0044d618
    PUSH 0x57c42d                       ; 0044d61d | = "CDemonImage::load - Unable to find ex..."
    MOV [0x01cc4800],EAX                ; 0044d622 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 0044d627 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0044d62d
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0044d632
    MOV ESI,0x57c45b                    ; 0044d635 | = ".ACT"
        ;   Label: LAB_0044d635
    PUSH EDI                            ; 0044d63a
    MOV AL,byte ptr [ESI]               ; 0044d63b | = ".ACT" | s_ACT_0057c45b+2
        ;   Label: LAB_0044d63b
    MOV byte ptr [EDI],AL               ; 0044d63d
    CMP AL,0x0                          ; 0044d63f
    JZ 0x0044d653                       ; 0044d641
        ;   XREF to: 0044d653 (CONDITIONAL_JUMP)  ; LAB_0044d653
    MOV AL,byte ptr [ESI + 0x1]         ; 0044d643 | s_ACT_0057c45b+1 | s_ACT_0057c45b+3
    ADD ESI,0x2                         ; 0044d646
    MOV byte ptr [EDI + 0x1],AL         ; 0044d649
    ADD EDI,0x2                         ; 0044d64c
    CMP AL,0x0                          ; 0044d64f
    JNZ 0x0044d63b                      ; 0044d651
        ;   XREF to: 0044d63b (CONDITIONAL_JUMP)  ; LAB_0044d63b
    POP EDI                             ; 0044d653
        ;   Label: LAB_0044d653
    PUSH 0x57c460                       ; 0044d654 | = "rb"
    LEA EAX,[ESP + 0x4]                 ; 0044d659
    PUSH EAX                            ; 0044d65d
    PUSH 0x57c463                       ; 0044d65e | = "art"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 0044d663
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getFile_FUN_00456a60()
    ADD ESP,0xc                         ; 0044d668
    MOV EBX,EAX                         ; 0044d66b
    TEST EAX,EAX                        ; 0044d66d
    JZ 0x0044d76b                       ; 0044d66f
        ;   XREF to: 0044d76b (CONDITIONAL_JUMP)  ; LAB_0044d76b
    PUSH EBX                            ; 0044d675
        ;   Label: LAB_0044d675
    PUSH 0x3                            ; 0044d676
    MOV EAX,dword ptr [ESP + 0x128]     ; 0044d678
    PUSH 0x100                          ; 0044d67f
    ADD EAX,0x30c                       ; 0044d684
    PUSH EAX                            ; 0044d689
    CALL crt_stdio.c_fread_FUN_005636d0 ; 0044d68a
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005636d0()
    ADD ESP,0x10                        ; 0044d68f
    PUSH EBX                            ; 0044d692
    CALL crt_stdio.c_fclose_FUN_00563380 ; 0044d693
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_00563380()
    ADD ESP,0x4                         ; 0044d698
    MOV EDI,dword ptr [ESP + 0x120]     ; 0044d69b
    MOV ESI,EDI                         ; 0044d6a2
    MOV EBX,EDI                         ; 0044d6a4
    LEA EAX,[EDI + 0x200]               ; 0044d6a6
    MOV dword ptr [ESP + 0x108],EAX     ; 0044d6ac
    XOR EAX,EAX                         ; 0044d6b3
        ;   Label: LAB_0044d6b3
    MOV AL,byte ptr [EBX + 0x30c]       ; 0044d6b5
    MOV dword ptr [ESP + 0x100],EAX     ; 0044d6bb
    XOR EAX,EAX                         ; 0044d6c2
    MOV AL,byte ptr [EBX + 0x30e]       ; 0044d6c4
    PUSH EAX                            ; 0044d6ca
    MOVZX EBP,byte ptr [EBX + 0x30d]    ; 0044d6cb
    PUSH EBP                            ; 0044d6d2
    MOV EDX,dword ptr [ESP + 0x108]     ; 0044d6d3
    PUSH EDX                            ; 0044d6da
    MOV ECX,dword ptr [ESP + 0x12c]     ; 0044d6db
    PUSH ECX                            ; 0044d6e2
    MOV dword ptr [ESP + 0x114],EAX     ; 0044d6e3
    CALL core_dimage.cpp_FUN_0044d4f0   ; 0044d6ea
        ;   XREF to: 0044d4f0 (UNCONDITIONAL_CALL)  ; undefined core_dimage.cpp_FUN_0044d4f0()
    ADD ESP,0x10                        ; 0044d6ef
    MOV word ptr [ESI + 0x100],AX       ; 0044d6f2
    MOV EAX,dword ptr [ESP + 0x100]     ; 0044d6f9
    SHR EBP,0x3                         ; 0044d700
    SHR EAX,0x3                         ; 0044d703
    SHL EBP,0x5                         ; 0044d706
    SHL EAX,0xa                         ; 0044d709
    INC EDI                             ; 0044d70c
    ADD EBP,EAX                         ; 0044d70d
    MOV EAX,dword ptr [ESP + 0x104]     ; 0044d70f
    ADD ESI,0x2                         ; 0044d716
    SHR EAX,0x3                         ; 0044d719
    ADD EBX,0x3                         ; 0044d71c
    MOV AL,byte ptr [EAX + EBP*0x1 + 0x1bf7720] ; 0044d71f
    MOV EBP,dword ptr [ESP + 0x108]     ; 0044d726
    MOV byte ptr [EDI + -0x1],AL        ; 0044d72d
    CMP ESI,EBP                         ; 0044d730
    JNZ 0x0044d6b3                      ; 0044d732
        ;   XREF to: 0044d6b3 (CONDITIONAL_JUMP)  ; LAB_0044d6b3
    ADD ESP,0x10c                       ; 0044d738
    POP EBP                             ; 0044d73e
    POP EDI                             ; 0044d73f
    POP ESI                             ; 0044d740
    POP EBX                             ; 0044d741
    RET                                 ; 0044d742
    MOV EDX,0x57c3dd                    ; 0044d743 | = "..\\core\\dimage.cpp"
        ;   Label: LAB_0044d743
    MOV ECX,0x68                        ; 0044d748
    PUSH 0x57c3f0                       ; 0044d74d | = "CDemonImage::load - Unable to load im..."
    MOV dword ptr [0x01cc4800],EDX      ; 0044d752 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 0044d758 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0044d75e
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0044d763
    JMP 0x0044d5a5                      ; 0044d766
        ;   XREF to: 0044d5a5 (UNCONDITIONAL_JUMP)  ; LAB_0044d5a5
    MOV ECX,0x57c467                    ; 0044d76b | = "..\\core\\dimage.cpp"
        ;   Label: LAB_0044d76b
    MOV ESI,0x7f                        ; 0044d770
    PUSH 0x57c47a                       ; 0044d775 | = "CDemonImage::load - Unable to load pa..."
    MOV dword ptr [0x01cc4800],ECX      ; 0044d77a | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 0044d780 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0044d786
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0044d78b
    JMP 0x0044d675                      ; 0044d78e
        ;   XREF to: 0044d675 (UNCONDITIONAL_JUMP)  ; LAB_0044d675

