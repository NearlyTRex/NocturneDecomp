; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_CScript_dbLoad_FUN_00530610(CScript *this_ptr,char *filename)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; Local Variables:
; undefined        Stack[-0x334]:1  local_334
; undefined1       Stack[-0x333]:1  local_333
; undefined        Stack[-0x2f8]:1  local_2f8
; undefined1       Stack[-0x2f7]:1  local_2f7
; undefined1       Stack[-0x2bc]:1  local_2bc
; undefined        Stack[-0x29e]:1  local_29e
; undefined        Stack[-0x10c]:1  local_10c
; undefined1       Stack[-0x10b]:1  local_10b
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_script.cpp_FUN_00529410 at 005294b1
;
; Referenced Globals:
;   TerminatedCString s_world_005cfb52
;   undefined4 DAT_005cfb58
;   TerminatedCString s_world_005cfb5b
;   TerminatedCString s_core_script_cpp_005cfb61
;   TerminatedCString s_Can_t_open_world_s_005cfb74
;   undefined4 DAT_005cfb88
;   TerminatedCString s_anon_005cfb8a
;   TerminatedCString s_core_script_cpp_005cfb92
;   TerminatedCString s_SCScipt_dbLoad_error_par_005cfba5
;   TerminatedCString s_anon_005cfbd2
;   TerminatedCString s_core_script_cpp_005cfbd9
;   TerminatedCString s_SCScipt_dbLoad_error_par_005cfbec
;   TerminatedCString s_anon_005cfc19
;   TerminatedCString s_core_script_cpp_005cfc21
;   TerminatedCString s_SCScipt_dbLoad_error_par_005cfc34
;   ... and 10 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   core_script.cpp_CScript_findDialogEntry_FUN_00530990
;   core_script.cpp_trimString_FUN_00528830
;   crt_memory.c_realloc_FUN_005a3e50
;   crt_stdio.c_fclose_FUN_005a3a90
;   crt_stdio.c_fgetc_FUN_005a32b0
;   crt_stdio.c_fscanf_FUN_005a3230
;   crt_stdio.c_ftell_FUN_005a5d00
;   crt_stdio.c_ungetc_FUN_005a3480
;   crt_string.c_splitpath_FUN_005a5128
;   crt_unknown.c_sprintf_FUN_005a28c0
;   engine_dosio.cpp_FUN_004659c0
;   engine_dosio.cpp_getFileSize_FUN_004657f0
;   shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00530610
        ;   Label: core_script.cpp_CScript_dbLoad_FUN_00530610
    PUSH EBP                            ; 00530611
    SUB ESP,0x32c                       ; 00530612
    MOV EBX,dword ptr [ESP + 0x338]     ; 00530618
    MOV EDX,dword ptr [ESP + 0x33c]     ; 0053061f
    PUSH EDX                            ; 00530626
    PUSH 0x5cfb52                       ; 00530627 | = "world"
    MOV dword ptr [EBX + 0x20],0x0      ; 0053062c
    CALL engine_dosio.cpp_getFileSize_FUN_004657f0 ; 00530633
        ;   XREF to: 004657f0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_004657f0(char * directory, char * filename)
    ADD ESP,0x8                         ; 00530638
    MOV dword ptr [ESP + 0x328],EAX     ; 0053063b
    TEST EAX,EAX                        ; 00530642
    JG 0x0053064f                       ; 00530644
        ;   XREF to: 0053064f (CONDITIONAL_JUMP)  ; LAB_0053064f
    ADD ESP,0x32c                       ; 00530646
    POP EBP                             ; 0053064c
    POP EBX                             ; 0053064d
    RET                                 ; 0053064e
    PUSH EDI                            ; 0053064f
        ;   Label: LAB_0053064f
    PUSH ESI                            ; 00530650
    PUSH 0x5cfb58                       ; 00530651 | DAT_005cfb58
    MOV ECX,dword ptr [ESP + 0x348]     ; 00530656
    PUSH ECX                            ; 0053065d
    PUSH 0x5cfb5b                       ; 0053065e | = "world"
    CALL engine_dosio.cpp_FUN_004659c0  ; 00530663
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_004659c0(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00530668
    MOV EBP,EAX                         ; 0053066b
    TEST EAX,EAX                        ; 0053066d
    JZ 0x0053086c                       ; 0053066f
        ;   XREF to: 0053086c (CONDITIONAL_JUMP)  ; LAB_0053086c
    PUSH EBP                            ; 00530675
        ;   Label: LAB_00530675
    CALL crt_stdio.c_ftell_FUN_005a5d00 ; 00530676
        ;   XREF to: 005a5d00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_ftell_FUN_005a5d00()
    ADD ESP,0x4                         ; 0053067b
    ADD dword ptr [ESP + 0x330],EAX     ; 0053067e
    PUSH 0x5cfb88                       ; 00530685 | DAT_005cfb88
        ;   Label: LAB_00530685
    PUSH EBP                            ; 0053068a
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0053068b
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x8                         ; 00530690
    PUSH EBP                            ; 00530693
    CALL crt_stdio.c_ftell_FUN_005a5d00 ; 00530694
        ;   XREF to: 005a5d00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_ftell_FUN_005a5d00()
    ADD ESP,0x4                         ; 00530699
    CMP EAX,dword ptr [ESP + 0x330]     ; 0053069c
    JGE 0x00530979                      ; 005306a3
        ;   XREF to: 00530979 (CONDITIONAL_JUMP)  ; LAB_00530979
    LEA EAX,[ESP + 0x8]                 ; 005306a9
    PUSH EAX                            ; 005306ad
    PUSH 0x5cfb8a                       ; 005306ae | = "%[^,], "
    PUSH EBP                            ; 005306b3
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 005306b4
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 005306b9
    CMP EAX,0x1                         ; 005306bc
    JZ 0x005306f0                       ; 005306bf
        ;   XREF to: 005306f0 (CONDITIONAL_JUMP)  ; LAB_005306f0
    MOV EAX,dword ptr [EBX + 0x20]      ; 005306c1
    PUSH EAX                            ; 005306c4
    MOV EDX,dword ptr [ESP + 0x348]     ; 005306c5
    PUSH EDX                            ; 005306cc
    MOV ESI,0x5cfb92                    ; 005306cd | = "..\\core\\script.cpp"
    MOV EDI,0x1062                      ; 005306d2
    PUSH 0x5cfba5                       ; 005306d7 | = "SCScipt::dbLoad - error parsing %s re..."
    MOV dword ptr [0x01d71de0],ESI      ; 005306dc | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 005306e2 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 005306e8
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0xc                         ; 005306ed
    PUSH EBP                            ; 005306f0
        ;   Label: LAB_005306f0
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 005306f1
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005a32b0()
    ADD ESP,0x4                         ; 005306f6
    CMP EAX,0x2c                        ; 005306f9
    JNZ 0x0053089c                      ; 005306fc
        ;   XREF to: 0053089c (CONDITIONAL_JUMP)  ; LAB_0053089c
    XOR AH,AH                           ; 00530702
    MOV byte ptr [ESP + 0x80],AH        ; 00530704
    LEA EAX,[ESP + 0x9e]                ; 0053070b
        ;   Label: LAB_0053070b
    PUSH EAX                            ; 00530712
    PUSH 0x5cfc19                       ; 00530713 | = " %[^\n]\n"
    PUSH EBP                            ; 00530718
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00530719
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 0053071e
    CMP EAX,0x1                         ; 00530721
    JZ 0x00530755                       ; 00530724
        ;   XREF to: 00530755 (CONDITIONAL_JUMP)  ; LAB_00530755
    MOV ESI,dword ptr [EBX + 0x20]      ; 00530726
    PUSH ESI                            ; 00530729
    MOV EDI,dword ptr [ESP + 0x348]     ; 0053072a
    PUSH EDI                            ; 00530731
    MOV EDX,0x5cfc21                    ; 00530732 | = "..\\core\\script.cpp"
    MOV ECX,0x1070                      ; 00530737
    PUSH 0x5cfc34                       ; 0053073c | = "SCScipt::dbLoad - error parsing %s re..."
    MOV dword ptr [0x01d71de0],EDX      ; 00530741 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00530747 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0053074d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0xc                         ; 00530752
    LEA EAX,[ESP + 0x8]                 ; 00530755
        ;   Label: LAB_00530755
    PUSH EAX                            ; 00530759
    CALL core_script.cpp_trimString_FUN_00528830 ; 0053075a
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0053075f
    LEA EAX,[ESP + 0x80]                ; 00530762
    PUSH EAX                            ; 00530769
    CALL core_script.cpp_trimString_FUN_00528830 ; 0053076a
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0053076f
    LEA EAX,[ESP + 0x9e]                ; 00530772
    PUSH EAX                            ; 00530779
    CALL core_script.cpp_trimString_FUN_00528830 ; 0053077a
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0053077f
    PUSH 0x0                            ; 00530782
    LEA EAX,[ESP + 0x234]               ; 00530784
    PUSH EAX                            ; 0053078b
    PUSH 0x0                            ; 0053078c
    PUSH 0x0                            ; 0053078e
    LEA EAX,[ESP + 0x18]                ; 00530790
    PUSH EAX                            ; 00530794
    CALL crt_string.c_splitpath_FUN_005a5128 ; 00530795
        ;   XREF to: 005a5128 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005a5128(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 0053079a
    LEA ESI,[ESP + 0x230]               ; 0053079d
    LEA EDI,[ESP + 0x8]                 ; 005307a4
    PUSH EDI                            ; 005307a8
    MOV AL,byte ptr [ESI]               ; 005307a9
        ;   Label: LAB_005307a9
    MOV byte ptr [EDI],AL               ; 005307ab
    CMP AL,0x0                          ; 005307ad
    JZ 0x005307c1                       ; 005307af
        ;   XREF to: 005307c1 (CONDITIONAL_JUMP)  ; LAB_005307c1
    MOV AL,byte ptr [ESI + 0x1]         ; 005307b1
    ADD ESI,0x2                         ; 005307b4
    MOV byte ptr [EDI + 0x1],AL         ; 005307b7
    ADD EDI,0x2                         ; 005307ba
    CMP AL,0x0                          ; 005307bd
    JNZ 0x005307a9                      ; 005307bf
        ;   XREF to: 005307a9 (CONDITIONAL_JUMP)  ; LAB_005307a9
    POP EDI                             ; 005307c1
        ;   Label: LAB_005307c1
    LEA EAX,[ESP + 0x8]                 ; 005307c2
    PUSH EAX                            ; 005307c6
    PUSH EBX                            ; 005307c7
    CALL core_script.cpp_CScript_findDialogEntry_FUN_00530990 ; 005307c8
        ;   XREF to: 00530990 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_findDialogEntry_FUN_00530990(CScript * this_ptr, char * path)
    ADD ESP,0x8                         ; 005307cd
    TEST EAX,EAX                        ; 005307d0
    JL 0x005307f5                       ; 005307d2
        ;   XREF to: 005307f5 (CONDITIONAL_JUMP)  ; LAB_005307f5
    MOV EAX,dword ptr [ESP + 0x344]     ; 005307d4
    PUSH EAX                            ; 005307db
    LEA EAX,[ESP + 0xc]                 ; 005307dc
    PUSH EAX                            ; 005307e0
    PUSH 0x5cfc61                       ; 005307e1 | = "Warning! Duplicate wav string %s dete..."
    MOV EDX,dword ptr [0x005fb140]      ; 005307e6 | g_CEditorToolsPtr
    PUSH EDX                            ; 005307ec
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40 ; 005307ed
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 005307f2
    LEA EAX,[ESP + 0x8]                 ; 005307f5
        ;   Label: LAB_005307f5
    PUSH EAX                            ; 005307f9
    PUSH 0x5cfc91                       ; 005307fa | = "%s.wav"
    LEA EAX,[ESP + 0x4c]                ; 005307ff
    PUSH EAX                            ; 00530803
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00530804
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00530809
    LEA EAX,[ESP + 0x44]                ; 0053080c
    PUSH EAX                            ; 00530810
    PUSH 0x5cfc98                       ; 00530811 | = "sound"
    CALL engine_dosio.cpp_getFileSize_FUN_004657f0 ; 00530816
        ;   XREF to: 004657f0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_004657f0(char * directory, char * filename)
    ADD ESP,0x8                         ; 0053081b
    TEST EAX,EAX                        ; 0053081e
    JLE 0x005308f9                      ; 00530820
        ;   XREF to: 005308f9 (CONDITIONAL_JUMP)  ; LAB_005308f9
    MOV ECX,dword ptr [EBX + 0x20]      ; 00530826
        ;   Label: LAB_00530826
    INC ECX                             ; 00530829
    MOV dword ptr [EBX + 0x20],ECX      ; 0053082a
    IMUL EAX,ECX,0x226                  ; 0053082d
    PUSH EAX                            ; 00530833
    MOV EDI,dword ptr [EBX + 0x24]      ; 00530834
    PUSH EDI                            ; 00530837
    CALL crt_memory.c_realloc_FUN_005a3e50 ; 00530838
        ;   XREF to: 005a3e50 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005a3e50(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 0053083d
    MOV dword ptr [EBX + 0x24],EAX      ; 00530840
    TEST EAX,EAX                        ; 00530843
    JZ 0x00530951                       ; 00530845
        ;   XREF to: 00530951 (CONDITIONAL_JUMP)  ; LAB_00530951
    MOV EAX,dword ptr [EBX + 0x20]      ; 0053084b
        ;   Label: LAB_0053084b
    DEC EAX                             ; 0053084e
    IMUL EAX,EAX,0x226                  ; 0053084f
    MOV ECX,0x89                        ; 00530855
    MOV EDI,dword ptr [EBX + 0x24]      ; 0053085a
    LEA ESI,[ESP + 0x8]                 ; 0053085d
    ADD EDI,EAX                         ; 00530861
    MOVSD.REP ES:EDI,ESI                ; 00530863
    MOVSW ES:EDI,ESI                    ; 00530865
    JMP 0x00530685                      ; 00530867
        ;   XREF to: 00530685 (UNCONDITIONAL_JUMP)  ; LAB_00530685
    MOV EAX,dword ptr [ESP + 0x344]     ; 0053086c
        ;   Label: LAB_0053086c
    PUSH EAX                            ; 00530873
    MOV ESI,0x5cfb61                    ; 00530874 | = "..\\core\\script.cpp"
    MOV EDI,0x104d                      ; 00530879
    PUSH 0x5cfb74                       ; 0053087e | = "Can't open world\\%s"
    MOV dword ptr [0x01d71de0],ESI      ; 00530883 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 00530889 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0053088f
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 00530894
    JMP 0x00530675                      ; 00530897
        ;   XREF to: 00530675 (UNCONDITIONAL_JUMP)  ; LAB_00530675
    PUSH EBP                            ; 0053089c
        ;   Label: LAB_0053089c
    PUSH EAX                            ; 0053089d
    CALL crt_stdio.c_ungetc_FUN_005a3480 ; 0053089e
        ;   XREF to: 005a3480 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_ungetc_FUN_005a3480()
    ADD ESP,0x8                         ; 005308a3
    LEA EAX,[ESP + 0x80]                ; 005308a6
    PUSH EAX                            ; 005308ad
    PUSH 0x5cfbd2                       ; 005308ae | = "%[^,],"
    PUSH EBP                            ; 005308b3
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 005308b4
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 005308b9
    CMP EAX,0x1                         ; 005308bc
    JZ 0x0053070b                       ; 005308bf
        ;   XREF to: 0053070b (CONDITIONAL_JUMP)  ; LAB_0053070b
    MOV EDI,dword ptr [EBX + 0x20]      ; 005308c5
    PUSH EDI                            ; 005308c8
    MOV EAX,dword ptr [ESP + 0x348]     ; 005308c9
    PUSH EAX                            ; 005308d0
    MOV ECX,0x5cfbd9                    ; 005308d1 | = "..\\core\\script.cpp"
    MOV ESI,0x106b                      ; 005308d6
    PUSH 0x5cfbec                       ; 005308db | = "SCScipt::dbLoad - error parsing %s re..."
    MOV dword ptr [0x01d71de0],ECX      ; 005308e0 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 005308e6 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 005308ec
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0xc                         ; 005308f1
    JMP 0x0053070b                      ; 005308f4
        ;   XREF to: 0053070b (UNCONDITIONAL_JUMP)  ; LAB_0053070b
    LEA EAX,[ESP + 0x8]                 ; 005308f9
        ;   Label: LAB_005308f9
    PUSH EAX                            ; 005308fd
    PUSH 0x5cfc9e                       ; 005308fe | = "%s.mp3"
    LEA EAX,[ESP + 0x4c]                ; 00530903
    PUSH EAX                            ; 00530907
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00530908
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0053090d
    LEA EAX,[ESP + 0x44]                ; 00530910
    PUSH EAX                            ; 00530914
    PUSH 0x5cfca5                       ; 00530915 | = "sound"
    CALL engine_dosio.cpp_getFileSize_FUN_004657f0 ; 0053091a
        ;   XREF to: 004657f0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_004657f0(char * directory, char * filename)
    ADD ESP,0x8                         ; 0053091f
    TEST EAX,EAX                        ; 00530922
    JG 0x00530826                       ; 00530924
        ;   XREF to: 00530826 (CONDITIONAL_JUMP)  ; LAB_00530826
    LEA ESI,[ESP + 0x8]                 ; 0053092a
    LEA EDI,[ESP + 0x44]                ; 0053092e
    PUSH EDI                            ; 00530932
    MOV AL,byte ptr [ESI]               ; 00530933
        ;   Label: LAB_00530933
    MOV byte ptr [EDI],AL               ; 00530935
    CMP AL,0x0                          ; 00530937
    JZ 0x0053094b                       ; 00530939
        ;   XREF to: 0053094b (CONDITIONAL_JUMP)  ; LAB_0053094b
    MOV AL,byte ptr [ESI + 0x1]         ; 0053093b
    ADD ESI,0x2                         ; 0053093e
    MOV byte ptr [EDI + 0x1],AL         ; 00530941
    ADD EDI,0x2                         ; 00530944
    CMP AL,0x0                          ; 00530947
    JNZ 0x00530933                      ; 00530949
        ;   XREF to: 00530933 (CONDITIONAL_JUMP)  ; LAB_00530933
    POP EDI                             ; 0053094b
        ;   Label: LAB_0053094b
    JMP 0x00530826                      ; 0053094c
        ;   XREF to: 00530826 (UNCONDITIONAL_JUMP)  ; LAB_00530826
    MOV EDX,0x5cfcab                    ; 00530951 | = "..\\core\\script.cpp"
        ;   Label: LAB_00530951
    MOV ECX,0x1091                      ; 00530956
    PUSH 0x5cfcbe                       ; 0053095b | = "SCScipt::dbLoad - out of memory"
    MOV dword ptr [0x01d71de0],EDX      ; 00530960 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00530966 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0053096c
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00530971
    JMP 0x0053084b                      ; 00530974
        ;   XREF to: 0053084b (UNCONDITIONAL_JUMP)  ; LAB_0053084b
    PUSH EBP                            ; 00530979
        ;   Label: LAB_00530979
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 0053097a
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 0053097f
    POP ESI                             ; 00530982
    POP EDI                             ; 00530983
    ADD ESP,0x32c                       ; 00530984
    POP EBP                             ; 0053098a
    POP EBX                             ; 0053098b
    RET                                 ; 0053098c

