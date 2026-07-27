; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_2d_c_FUN_00403630(char *param_1)
;
; Local Variables:
; undefined1       Stack[-0x5c]:1  local_5c
; undefined1       Stack[-0x5b]:1  local_5b
;
; XREF[1]:
;   engine_2d.c_FUN_00401010 at 00401076
;
; Referenced Globals:
;   TerminatedCString s_engine_2d_c_00577244
;   TerminatedCString s_hose_00577253
;   TerminatedCString s_map_00577259
;   TerminatedCString s_rb_0057725e
;   TerminatedCString s_fog_00577261
;   TerminatedCString s_wb_00577265
;   TerminatedCString s_fog_00577268
;   TerminatedCString s_engine_2d_c_0057726c
;   TerminatedCString s_Unable_to_write_quick_ma_0057727b
;   undefined4 DAT_01bf7720
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fread_FUN_005636d0
;   crt_stdio.c_fwrite_FUN_00563a50
;   crt_stdio.c_sprintf_FUN_00563c90
;   engine_2d.c_buildColorLookupTable_FUN_00403570
;   engine_dosio.cpp_getFile_FUN_00456a60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403630
        ;   Label: engine_2d.c_FUN_00403630
    PUSH ESI                            ; 00403631
    PUSH EDI                            ; 00403632
    SUB ESP,0x50                        ; 00403633
    MOV ESI,dword ptr [ESP + 0x60]      ; 00403636
    MOV EDI,ESP                         ; 0040363a
    MOV DL,0x2e                         ; 0040363c
    PUSH EDI                            ; 0040363e
    MOV AL,byte ptr [ESI]               ; 0040363f
        ;   Label: LAB_0040363f
    MOV byte ptr [EDI],AL               ; 00403641
    CMP AL,0x0                          ; 00403643
    JZ 0x00403657                       ; 00403645
        ;   XREF to: 00403657 (CONDITIONAL_JUMP)  ; LAB_00403657
    MOV AL,byte ptr [ESI + 0x1]         ; 00403647
    ADD ESI,0x2                         ; 0040364a
    MOV byte ptr [EDI + 0x1],AL         ; 0040364d
    ADD EDI,0x2                         ; 00403650
    CMP AL,0x0                          ; 00403653
    JNZ 0x0040363f                      ; 00403655
        ;   XREF to: 0040363f (CONDITIONAL_JUMP)  ; LAB_0040363f
    POP EDI                             ; 00403657
        ;   Label: LAB_00403657
    MOV ESI,ESP                         ; 00403658
    MOV AL,byte ptr [ESI]               ; 0040365a
        ;   Label: LAB_0040365a
    CMP AL,DL                           ; 0040365c
    JZ 0x00403672                       ; 0040365e
        ;   XREF to: 00403672 (CONDITIONAL_JUMP)  ; LAB_00403672
    CMP AL,0x0                          ; 00403660
    JZ 0x00403670                       ; 00403662
        ;   XREF to: 00403670 (CONDITIONAL_JUMP)  ; LAB_00403670
    INC ESI                             ; 00403664
    MOV AL,byte ptr [ESI]               ; 00403665
    CMP AL,DL                           ; 00403667
    JZ 0x00403672                       ; 00403669
        ;   XREF to: 00403672 (CONDITIONAL_JUMP)  ; LAB_00403672
    INC ESI                             ; 0040366b
    CMP AL,0x0                          ; 0040366c
    JNZ 0x0040365a                      ; 0040366e
        ;   XREF to: 0040365a (CONDITIONAL_JUMP)  ; LAB_0040365a
    SUB ESI,ESI                         ; 00403670
        ;   Label: LAB_00403670
    MOV EBX,ESI                         ; 00403672
        ;   Label: LAB_00403672
    TEST ESI,ESI                        ; 00403674
    JNZ 0x0040369b                      ; 00403676
        ;   XREF to: 0040369b (CONDITIONAL_JUMP)  ; LAB_0040369b
    MOV EDX,0x577244                    ; 00403678 | = "..\\engine\\2d.c"
    MOV ECX,0x76e                       ; 0040367d
    PUSH 0x577253                       ; 00403682 | = "hose!"
    MOV dword ptr [0x01cc4800],EDX      ; 00403687 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 0040368d | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00403693
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00403698
    PUSH 0x577259                       ; 0040369b | = ".map"
        ;   Label: LAB_0040369b
    PUSH EBX                            ; 004036a0
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004036a1
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x8                         ; 004036a6
    PUSH 0x57725e                       ; 004036a9 | = "rb"
    LEA EAX,[ESP + 0x4]                 ; 004036ae
    PUSH EAX                            ; 004036b2
    PUSH 0x577261                       ; 004036b3 | = "fog"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 004036b8
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getFile_FUN_00456a60()
    MOV EBX,EAX                         ; 004036bd
    ADD ESP,0xc                         ; 004036bf
    TEST EAX,EAX                        ; 004036c2
    JNZ 0x00403730                      ; 004036c4
        ;   XREF to: 00403730 (CONDITIONAL_JUMP)  ; LAB_00403730
    CALL engine_2d.c_buildColorLookupTable_FUN_00403570 ; 004036c6
        ;   XREF to: 00403570 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_buildColorLookupTable_FUN_00403570()
    PUSH 0x577265                       ; 004036cb | = "wb"
    LEA EAX,[ESP + 0x4]                 ; 004036d0
    PUSH EAX                            ; 004036d4
    PUSH 0x577268                       ; 004036d5 | = "fog"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 004036da
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getFile_FUN_00456a60()
    ADD ESP,0xc                         ; 004036df
    MOV EBX,EAX                         ; 004036e2
    TEST EAX,EAX                        ; 004036e4
    JNZ 0x0040370b                      ; 004036e6
        ;   XREF to: 0040370b (CONDITIONAL_JUMP)  ; LAB_0040370b
    MOV ESI,0x57726c                    ; 004036e8 | = "..\\engine\\2d.c"
    MOV EDI,0x775                       ; 004036ed
    PUSH 0x57727b                       ; 004036f2 | = "Unable to write quick map!"
    MOV dword ptr [0x01cc4800],ESI      ; 004036f7 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 004036fd | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00403703
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00403708
    PUSH EBX                            ; 0040370b
        ;   Label: LAB_0040370b
    PUSH 0x8000                         ; 0040370c
    PUSH 0x1                            ; 00403711
    PUSH 0x1bf7720                      ; 00403713 | DAT_01bf7720
    CALL crt_stdio.c_fwrite_FUN_00563a50 ; 00403718
        ;   XREF to: 00563a50 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fwrite_FUN_00563a50()
    ADD ESP,0x10                        ; 0040371d
    PUSH EBX                            ; 00403720
    CALL crt_stdio.c_fclose_FUN_00563380 ; 00403721
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_00563380()
    ADD ESP,0x4                         ; 00403726
    ADD ESP,0x50                        ; 00403729
    POP EDI                             ; 0040372c
    POP ESI                             ; 0040372d
    POP EBX                             ; 0040372e
    RET                                 ; 0040372f
    PUSH EAX                            ; 00403730
        ;   Label: LAB_00403730
    PUSH 0x8000                         ; 00403731
    PUSH 0x1                            ; 00403736
    PUSH 0x1bf7720                      ; 00403738 | DAT_01bf7720
    CALL crt_stdio.c_fread_FUN_005636d0 ; 0040373d
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005636d0()
    ADD ESP,0x10                        ; 00403742
    PUSH EBX                            ; 00403745
    CALL crt_stdio.c_fclose_FUN_00563380 ; 00403746
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_00563380()
    ADD ESP,0x4                         ; 0040374b
    ADD ESP,0x50                        ; 0040374e
    POP EDI                             ; 00403751
    POP ESI                             ; 00403752
    POP EBX                             ; 00403753
    RET                                 ; 00403754

