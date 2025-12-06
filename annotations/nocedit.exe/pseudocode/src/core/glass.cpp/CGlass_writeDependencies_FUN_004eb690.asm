; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_glass.cpp_CGlass_writeDependencies_FUN_004eb690(CGlass * this_ptr, FILE * file_handle)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
; FILE *           Stack[0x8]:4   file_handle
; Local Variables:
; undefined1       Stack[-0x110]:1  local_110
; undefined1       Stack[-0x10f]:1  local_10f
;
; Referenced Globals:
;   undefined4 s_change_the_thickness_(z-size)_0062e22e
;   TerminatedCString s_ART_s_0062e24c
;   TerminatedCString s_core_glass_cpp_0062e254
;   TerminatedCString s_Cannot_find_glass_textur_0062e266
;   TerminatedCString s_ACT_0062e28a
;   undefined4 DAT_0062e28b
;   undefined4 DAT_0062e28c
;   undefined4 DAT_0062e28d
;   TerminatedCString s_ART_s_0062e28f
;   TerminatedCString s_ART_s_0062e297
;   TerminatedCString s_core_glass_cpp_0062e29f
;   TerminatedCString s_Cannot_find_glass_textur_0062e2b1
;   TerminatedCString s_ACT_0062e2d5
;   undefined4 DAT_0062e2d6
;   undefined4 DAT_0062e2d7
;   ... and 4 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eb690
        ;   Label: core_glass.cpp_CGlass_writeDependencies_FUN_004eb690
    PUSH ESI                            ; 004eb691
    PUSH EDI                            ; 004eb692
    PUSH EBP                            ; 004eb693
    SUB ESP,0x100                       ; 004eb694
    MOV EBP,dword ptr [ESP + 0x114]     ; 004eb69a
    MOV EBX,dword ptr [ESP + 0x118]     ; 004eb6a1
    LEA ESI,[EBP + 0x16c]               ; 004eb6a8
    PUSH ESI                            ; 004eb6ae
    PUSH 0x62e24c                       ; 004eb6af | = "ART\\%s\n" | s_ART_s_0062e24c = ART\%s

    PUSH EBX                            ; 004eb6b4
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004eb6b5 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004eb6ba
    MOV EDI,ESP                         ; 004eb6bd
    MOV DL,0x2e                         ; 004eb6bf
    PUSH EDI                            ; 004eb6c1
    MOV AL,byte ptr [ESI]               ; 004eb6c2
        ;   Label: LAB_004eb6c2
    MOV byte ptr [EDI],AL               ; 004eb6c4
    CMP AL,0x0                          ; 004eb6c6
    JZ 0x004eb6da                       ; 004eb6c8 | LAB_004eb6da
        ;   XREF to: 004eb6da (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 004eb6ca
    ADD ESI,0x2                         ; 004eb6cd
    MOV byte ptr [EDI + 0x1],AL         ; 004eb6d0
    ADD EDI,0x2                         ; 004eb6d3
    CMP AL,0x0                          ; 004eb6d6
    JNZ 0x004eb6c2                      ; 004eb6d8 | LAB_004eb6c2
        ;   XREF to: 004eb6c2 (CONDITIONAL_JUMP)
    POP EDI                             ; 004eb6da
        ;   Label: LAB_004eb6da
    MOV ESI,ESP                         ; 004eb6db
    MOV AL,byte ptr [ESI]               ; 004eb6dd
        ;   Label: LAB_004eb6dd
    CMP AL,DL                           ; 004eb6df
    JZ 0x004eb6f5                       ; 004eb6e1 | LAB_004eb6f5
        ;   XREF to: 004eb6f5 (CONDITIONAL_JUMP)
    CMP AL,0x0                          ; 004eb6e3
    JZ 0x004eb6f3                       ; 004eb6e5 | LAB_004eb6f3
        ;   XREF to: 004eb6f3 (CONDITIONAL_JUMP)
    INC ESI                             ; 004eb6e7
    MOV AL,byte ptr [ESI]               ; 004eb6e8
    CMP AL,DL                           ; 004eb6ea
    JZ 0x004eb6f5                       ; 004eb6ec | LAB_004eb6f5
        ;   XREF to: 004eb6f5 (CONDITIONAL_JUMP)
    INC ESI                             ; 004eb6ee
    CMP AL,0x0                          ; 004eb6ef
    JNZ 0x004eb6dd                      ; 004eb6f1 | LAB_004eb6dd
        ;   XREF to: 004eb6dd (CONDITIONAL_JUMP)
    SUB ESI,ESI                         ; 004eb6f3
        ;   Label: LAB_004eb6f3
    MOV EDI,ESI                         ; 004eb6f5
        ;   Label: LAB_004eb6f5
    TEST ESI,ESI                        ; 004eb6f7
    JNZ 0x004eb71e                      ; 004eb6f9 | LAB_004eb71e
        ;   XREF to: 004eb71e (CONDITIONAL_JUMP)
    MOV EDX,0x62e254                    ; 004eb6fb | = "..\\core\\glass.cpp" | s_core_glass_cpp_0062e254 = ..\core\glass.cpp
    MOV ECX,0x3cd                       ; 004eb700
    PUSH 0x62e266                       ; 004eb705 | = "Cannot find glass texture extension" | s_Cannot_find_glass_textur_0062e266 = Cannot find glass texture extension
    MOV dword ptr [0x02f0ca48],EDX      ; 004eb70a | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 004eb710 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004eb716 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004eb71b
    MOV ESI,0x62e28a                    ; 004eb71e | = ".ACT" | s_ACT_0062e28a = .ACT
        ;   Label: LAB_004eb71e
    PUSH EDI                            ; 004eb723
    MOV AL,byte ptr [ESI]               ; 004eb724 | = ".ACT" | s_ACT_0062e28a = .ACT
        ;   Label: LAB_004eb724
    MOV byte ptr [EDI],AL               ; 004eb726
    CMP AL,0x0                          ; 004eb728
    JZ 0x004eb73c                       ; 004eb72a | LAB_004eb73c
        ;   XREF to: 004eb73c (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 004eb72c | DAT_0062e28b
    ADD ESI,0x2                         ; 004eb72f
    MOV byte ptr [EDI + 0x1],AL         ; 004eb732
    ADD EDI,0x2                         ; 004eb735
    CMP AL,0x0                          ; 004eb738
    JNZ 0x004eb724                      ; 004eb73a | LAB_004eb724
        ;   XREF to: 004eb724 (CONDITIONAL_JUMP)
    POP EDI                             ; 004eb73c
        ;   Label: LAB_004eb73c
    MOV ESI,ESP                         ; 004eb73d
    PUSH ESI                            ; 004eb73f
    PUSH 0x62e28f                       ; 004eb740 | = "ART\\%s\n" | s_ART_s_0062e28f = ART\%s

    PUSH EBX                            ; 004eb745
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004eb746 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    MOV ESI,dword ptr [EBP + 0x370]     ; 004eb74b
    ADD ESP,0xc                         ; 004eb751
    TEST ESI,ESI                        ; 004eb754
    JNZ 0x004eb763                      ; 004eb756 | LAB_004eb763
        ;   XREF to: 004eb763 (CONDITIONAL_JUMP)
    ADD ESP,0x100                       ; 004eb758
    POP EBP                             ; 004eb75e
    POP EDI                             ; 004eb75f
    POP ESI                             ; 004eb760
    POP EBX                             ; 004eb761
    RET                                 ; 004eb762
    LEA ESI,[EBP + 0x37c]               ; 004eb763
        ;   Label: LAB_004eb763
    PUSH ESI                            ; 004eb769
    PUSH 0x62e297                       ; 004eb76a | = "ART\\%s\n" | s_ART_s_0062e297 = ART\%s

    PUSH EBX                            ; 004eb76f
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004eb770 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004eb775
    MOV EDI,ESP                         ; 004eb778
    MOV DL,0x2e                         ; 004eb77a | s_change_the_thickness_(z-size)_0062e22e
    PUSH EDI                            ; 004eb77c
    MOV AL,byte ptr [ESI]               ; 004eb77d
        ;   Label: LAB_004eb77d
    MOV byte ptr [EDI],AL               ; 004eb77f
    CMP AL,0x0                          ; 004eb781
    JZ 0x004eb795                       ; 004eb783 | LAB_004eb795
        ;   XREF to: 004eb795 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 004eb785
    ADD ESI,0x2                         ; 004eb788
    MOV byte ptr [EDI + 0x1],AL         ; 004eb78b
    ADD EDI,0x2                         ; 004eb78e
    CMP AL,0x0                          ; 004eb791
    JNZ 0x004eb77d                      ; 004eb793 | LAB_004eb77d
        ;   XREF to: 004eb77d (CONDITIONAL_JUMP)
    POP EDI                             ; 004eb795
        ;   Label: LAB_004eb795
    MOV ESI,ESP                         ; 004eb796
    MOV AL,byte ptr [ESI]               ; 004eb798
        ;   Label: LAB_004eb798
    CMP AL,DL                           ; 004eb79a
    JZ 0x004eb7b0                       ; 004eb79c | LAB_004eb7b0
        ;   XREF to: 004eb7b0 (CONDITIONAL_JUMP)
    CMP AL,0x0                          ; 004eb79e
    JZ 0x004eb7ae                       ; 004eb7a0 | LAB_004eb7ae
        ;   XREF to: 004eb7ae (CONDITIONAL_JUMP)
    INC ESI                             ; 004eb7a2
    MOV AL,byte ptr [ESI]               ; 004eb7a3
    CMP AL,DL                           ; 004eb7a5
    JZ 0x004eb7b0                       ; 004eb7a7 | LAB_004eb7b0
        ;   XREF to: 004eb7b0 (CONDITIONAL_JUMP)
    INC ESI                             ; 004eb7a9
    CMP AL,0x0                          ; 004eb7aa
    JNZ 0x004eb798                      ; 004eb7ac | LAB_004eb798
        ;   XREF to: 004eb798 (CONDITIONAL_JUMP)
    SUB ESI,ESI                         ; 004eb7ae
        ;   Label: LAB_004eb7ae
    MOV EDI,ESI                         ; 004eb7b0
        ;   Label: LAB_004eb7b0
    TEST ESI,ESI                        ; 004eb7b2
    JNZ 0x004eb7d8                      ; 004eb7b4 | LAB_004eb7d8
        ;   XREF to: 004eb7d8 (CONDITIONAL_JUMP)
    MOV EBP,0x62e29f                    ; 004eb7b6 | = "..\\core\\glass.cpp" | s_core_glass_cpp_0062e29f = ..\core\glass.cpp
    MOV EAX,0x3d4                       ; 004eb7bb
    PUSH 0x62e2b1                       ; 004eb7c0 | = "Cannot find glass texture extension" | s_Cannot_find_glass_textur_0062e2b1 = Cannot find glass texture extension
    MOV dword ptr [0x02f0ca48],EBP      ; 004eb7c5 | char * g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 004eb7cb | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004eb7d0 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004eb7d5
    MOV ESI,0x62e2d5                    ; 004eb7d8 | = ".ACT" | s_ACT_0062e2d5 = .ACT
        ;   Label: LAB_004eb7d8
    PUSH EDI                            ; 004eb7dd
    MOV AL,byte ptr [ESI]               ; 004eb7de | = ".ACT" | s_ACT_0062e2d5 = .ACT
        ;   Label: LAB_004eb7de
    MOV byte ptr [EDI],AL               ; 004eb7e0
    CMP AL,0x0                          ; 004eb7e2
    JZ 0x004eb7f6                       ; 004eb7e4 | LAB_004eb7f6
        ;   XREF to: 004eb7f6 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 004eb7e6 | DAT_0062e2d6
    ADD ESI,0x2                         ; 004eb7e9
    MOV byte ptr [EDI + 0x1],AL         ; 004eb7ec
    ADD EDI,0x2                         ; 004eb7ef
    CMP AL,0x0                          ; 004eb7f2
    JNZ 0x004eb7de                      ; 004eb7f4 | LAB_004eb7de
        ;   XREF to: 004eb7de (CONDITIONAL_JUMP)
    POP EDI                             ; 004eb7f6
        ;   Label: LAB_004eb7f6
    MOV ESI,ESP                         ; 004eb7f7
    PUSH ESI                            ; 004eb7f9
    PUSH 0x62e2da                       ; 004eb7fa | = "ART\\%s\n" | s_ART_s_0062e2da = ART\%s

    PUSH EBX                            ; 004eb7ff
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004eb800 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004eb805
    ADD ESP,0x100                       ; 004eb808
    POP EBP                             ; 004eb80e
    POP EDI                             ; 004eb80f
    POP ESI                             ; 004eb810
    POP EBX                             ; 004eb811
    RET                                 ; 004eb812

