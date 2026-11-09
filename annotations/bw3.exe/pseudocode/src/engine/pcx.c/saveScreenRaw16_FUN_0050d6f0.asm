; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_pcx_c_saveScreenRaw16_FUN_0050d6f0(char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; Local Variables:
; undefined1       Stack[-0x70]:1  local_70
; undefined1       Stack[-0x6f]:1  local_6f
; undefined1       Stack[-0x6d]:1  local_6d
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_pcx.c_FUN_0050da60 at 0050dc0a
;
; Referenced Globals:
;   TerminatedCString s_engine_pcx_c_005cb9b2
;   TerminatedCString s_saveScreenRaw16_No_ext_f_005cb9c2
;   undefined1 DAT_005cb9e1
;   undefined1 DAT_005cb9e2
;   undefined1 DAT_005cb9e3
;   undefined1 DAT_005cb9e4
;   undefined4 DAT_005cb9e6
;   TerminatedCString s_engine_pcx_c_005cb9e9
;   TerminatedCString s_saveScreenRaw16_Unable_t_005cb9f9
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01c5faf0
;   undefined4 DAT_01c6af74
;   undefined4 DAT_01c6af78
;   ... and 6 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_stdio.c_fclose_FUN_005a3a90
;   crt_stdio.c_fopen_FUN_005a43ec
;   crt_stdio.c_fputc_FUN_005a5d70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050d6f0
        ;   Label: engine_pcx.c_saveScreenRaw16_FUN_0050d6f0
    PUSH ESI                            ; 0050d6f1
    PUSH EDI                            ; 0050d6f2
    PUSH EBP                            ; 0050d6f3
    SUB ESP,0x60                        ; 0050d6f4
    MOV ESI,dword ptr [ESP + 0x74]      ; 0050d6f7
    MOV EDI,ESP                         ; 0050d6fb
    MOV DL,0x2e                         ; 0050d6fd
    PUSH EDI                            ; 0050d6ff
    MOV AL,byte ptr [ESI]               ; 0050d700
        ;   Label: LAB_0050d700
    MOV byte ptr [EDI],AL               ; 0050d702
    CMP AL,0x0                          ; 0050d704
    JZ 0x0050d718                       ; 0050d706
        ;   XREF to: 0050d718 (CONDITIONAL_JUMP)  ; LAB_0050d718
    MOV AL,byte ptr [ESI + 0x1]         ; 0050d708
    ADD ESI,0x2                         ; 0050d70b
    MOV byte ptr [EDI + 0x1],AL         ; 0050d70e
    ADD EDI,0x2                         ; 0050d711
    CMP AL,0x0                          ; 0050d714
    JNZ 0x0050d700                      ; 0050d716
        ;   XREF to: 0050d700 (CONDITIONAL_JUMP)  ; LAB_0050d700
    POP EDI                             ; 0050d718
        ;   Label: LAB_0050d718
    MOV ESI,ESP                         ; 0050d719
    MOV AL,byte ptr [ESI]               ; 0050d71b
        ;   Label: LAB_0050d71b
    CMP AL,DL                           ; 0050d71d
    JZ 0x0050d733                       ; 0050d71f
        ;   XREF to: 0050d733 (CONDITIONAL_JUMP)  ; LAB_0050d733
    CMP AL,0x0                          ; 0050d721
    JZ 0x0050d731                       ; 0050d723
        ;   XREF to: 0050d731 (CONDITIONAL_JUMP)  ; LAB_0050d731
    INC ESI                             ; 0050d725
    MOV AL,byte ptr [ESI]               ; 0050d726
    CMP AL,DL                           ; 0050d728
    JZ 0x0050d733                       ; 0050d72a
        ;   XREF to: 0050d733 (CONDITIONAL_JUMP)  ; LAB_0050d733
    INC ESI                             ; 0050d72c
    CMP AL,0x0                          ; 0050d72d
    JNZ 0x0050d71b                      ; 0050d72f
        ;   XREF to: 0050d71b (CONDITIONAL_JUMP)  ; LAB_0050d71b
    SUB ESI,ESI                         ; 0050d731
        ;   Label: LAB_0050d731
    MOV EDI,ESI                         ; 0050d733
        ;   Label: LAB_0050d733
    TEST ESI,ESI                        ; 0050d735
    JZ 0x0050d887                       ; 0050d737
        ;   XREF to: 0050d887 (CONDITIONAL_JUMP)  ; LAB_0050d887
    MOV ESI,0x5cb9e1                    ; 0050d73d | DAT_005cb9e1
        ;   Label: LAB_0050d73d
    PUSH EDI                            ; 0050d742
    MOV AL,byte ptr [ESI]               ; 0050d743 | DAT_005cb9e1 | DAT_005cb9e3
        ;   Label: LAB_0050d743
    MOV byte ptr [EDI],AL               ; 0050d745
    CMP AL,0x0                          ; 0050d747
    JZ 0x0050d75b                       ; 0050d749
        ;   XREF to: 0050d75b (CONDITIONAL_JUMP)  ; LAB_0050d75b
    MOV AL,byte ptr [ESI + 0x1]         ; 0050d74b | DAT_005cb9e2 | DAT_005cb9e4
    ADD ESI,0x2                         ; 0050d74e
    MOV byte ptr [EDI + 0x1],AL         ; 0050d751
    ADD EDI,0x2                         ; 0050d754
    CMP AL,0x0                          ; 0050d757
    JNZ 0x0050d743                      ; 0050d759
        ;   XREF to: 0050d743 (CONDITIONAL_JUMP)  ; LAB_0050d743
    POP EDI                             ; 0050d75b
        ;   Label: LAB_0050d75b
    PUSH 0x5cb9e6                       ; 0050d75c | DAT_005cb9e6
    LEA EAX,[ESP + 0x4]                 ; 0050d761
    PUSH EAX                            ; 0050d765
    CALL crt_stdio.c_fopen_FUN_005a43ec ; 0050d766
        ;   XREF to: 005a43ec (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_005a43ec()
    ADD ESP,0x8                         ; 0050d76b
    MOV EDI,EAX                         ; 0050d76e
    TEST EAX,EAX                        ; 0050d770
    JNZ 0x0050d797                      ; 0050d772
        ;   XREF to: 0050d797 (CONDITIONAL_JUMP)  ; LAB_0050d797
    MOV EBX,0x5cb9e9                    ; 0050d774 | = "..\\engine\\pcx.c"
    MOV ESI,0x6d                        ; 0050d779
    PUSH 0x5cb9f9                       ; 0050d77e | = "saveScreenRaw16 - Unable to open output"
    MOV dword ptr [0x01d71de0],EBX      ; 0050d783 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0050d789 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0050d78f
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0050d794
    XOR EBP,EBP                         ; 0050d797
        ;   Label: LAB_0050d797
    MOV EAX,[0x005fba1c]                ; 0050d799 | DAT_005fba1c
    MOV dword ptr [ESP + 0x5c],EBP      ; 0050d79e
    TEST EAX,EAX                        ; 0050d7a2
    JLE 0x0050d876                      ; 0050d7a4
        ;   XREF to: 0050d876 (CONDITIONAL_JUMP)  ; LAB_0050d876
    MOV dword ptr [ESP + 0x58],EBP      ; 0050d7aa
    MOV ESI,dword ptr [ESP + 0x58]      ; 0050d7ae
        ;   Label: LAB_0050d7ae
    MOV EBP,dword ptr [0x005fba18]      ; 0050d7b2 | DAT_005fba18
    XOR EBX,EBX                         ; 0050d7b8
    MOV ESI,dword ptr [ESI + 0x1c5faec] ; 0050d7ba | DAT_01c5faec | DAT_01c5faf0
    TEST EBP,EBP                        ; 0050d7c0
    JLE 0x0050d854                      ; 0050d7c2
        ;   XREF to: 0050d854 (CONDITIONAL_JUMP)  ; LAB_0050d854
    XOR EAX,EAX                         ; 0050d7c8
        ;   Label: LAB_0050d7c8
    MOV AX,word ptr [ESI]               ; 0050d7ca
    MOV CL,byte ptr [0x01c6af74]        ; 0050d7cd | DAT_01c6af74
    MOV EDX,EAX                         ; 0050d7d3
    SHR EDX,CL                          ; 0050d7d5
    IMUL EDX,dword ptr [0x01c6af78]     ; 0050d7d7 | DAT_01c6af78
    AND EDX,0xff                        ; 0050d7de
    MOV CL,byte ptr [0x01c6af80]        ; 0050d7e4 | DAT_01c6af80
    MOV dword ptr [ESP + 0x50],EDX      ; 0050d7ea
    MOV EDX,EAX                         ; 0050d7ee
    MOV EBP,dword ptr [0x01c6af84]      ; 0050d7f0 | DAT_01c6af84
    SHR EDX,CL                          ; 0050d7f6
    IMUL EDX,EBP                        ; 0050d7f8
    MOV CL,byte ptr [0x01c6af8c]        ; 0050d7fb | DAT_01c6af8c
    AND EDX,0xff                        ; 0050d801
    MOV EBP,EAX                         ; 0050d807
    MOV dword ptr [ESP + 0x54],EDX      ; 0050d809
    SHR EBP,CL                          ; 0050d80d
    IMUL EBP,dword ptr [0x01c6af90]     ; 0050d80f | DAT_01c6af90
    PUSH EDI                            ; 0050d816
    MOV ECX,dword ptr [ESP + 0x54]      ; 0050d817
    PUSH ECX                            ; 0050d81b
    CALL crt_stdio.c_fputc_FUN_005a5d70 ; 0050d81c
        ;   XREF to: 005a5d70 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fputc_FUN_005a5d70()
    ADD ESP,0x8                         ; 0050d821
    PUSH EDI                            ; 0050d824
    MOV EAX,dword ptr [ESP + 0x58]      ; 0050d825
    PUSH EAX                            ; 0050d829
    CALL crt_stdio.c_fputc_FUN_005a5d70 ; 0050d82a
        ;   XREF to: 005a5d70 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fputc_FUN_005a5d70()
    ADD ESP,0x8                         ; 0050d82f
    PUSH EDI                            ; 0050d832
    AND EBP,0xff                        ; 0050d833
    PUSH EBP                            ; 0050d839
    ADD ESI,0x2                         ; 0050d83a
    INC EBX                             ; 0050d83d
    CALL crt_stdio.c_fputc_FUN_005a5d70 ; 0050d83e
        ;   XREF to: 005a5d70 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fputc_FUN_005a5d70()
    MOV EDX,dword ptr [0x005fba18]      ; 0050d843 | DAT_005fba18
    ADD ESP,0x8                         ; 0050d849
    CMP EBX,EDX                         ; 0050d84c
    JL 0x0050d7c8                       ; 0050d84e
        ;   XREF to: 0050d7c8 (CONDITIONAL_JUMP)  ; LAB_0050d7c8
    MOV EDX,dword ptr [ESP + 0x58]      ; 0050d854
        ;   Label: LAB_0050d854
    MOV ECX,dword ptr [ESP + 0x5c]      ; 0050d858
    MOV EBX,dword ptr [0x005fba1c]      ; 0050d85c | DAT_005fba1c
    ADD EDX,0x4                         ; 0050d862
    INC ECX                             ; 0050d865
    MOV dword ptr [ESP + 0x58],EDX      ; 0050d866
    MOV dword ptr [ESP + 0x5c],ECX      ; 0050d86a
    CMP ECX,EBX                         ; 0050d86e
    JL 0x0050d7ae                       ; 0050d870
        ;   XREF to: 0050d7ae (CONDITIONAL_JUMP)  ; LAB_0050d7ae
    PUSH EDI                            ; 0050d876
        ;   Label: LAB_0050d876
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 0050d877
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 0050d87c
    ADD ESP,0x60                        ; 0050d87f
    POP EBP                             ; 0050d882
    POP EDI                             ; 0050d883
    POP ESI                             ; 0050d884
    POP EBX                             ; 0050d885
    RET                                 ; 0050d886
    MOV EDX,0x5cb9b2                    ; 0050d887 | = "..\\engine\\pcx.c"
        ;   Label: LAB_0050d887
    MOV ECX,0x67                        ; 0050d88c
    PUSH 0x5cb9c2                       ; 0050d891 | = "saveScreenRaw16 - No ext found"
    MOV dword ptr [0x01d71de0],EDX      ; 0050d896 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0050d89c | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0050d8a2
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0050d8a7
    JMP 0x0050d73d                      ; 0050d8aa
        ;   XREF to: 0050d73d (UNCONDITIONAL_JUMP)  ; LAB_0050d73d

