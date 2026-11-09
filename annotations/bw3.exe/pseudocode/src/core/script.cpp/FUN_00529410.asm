; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_script_cpp_FUN_00529410(CScript *param_1,char *param_2)
;
; Local Variables:
; undefined1       Stack[-0x318]:1  local_318
; undefined        Stack[-0x118]:1  local_118
; undefined1       Stack[-0x117]:1  local_117
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_mission.cpp_FUN_004f63c0 at 004f63f3
;
; Referenced Globals:
;   TerminatedCString s_world_005cde33
;   undefined1 DAT_005cde39
;   undefined1 DAT_005cde3a
;   undefined1 DAT_005cde3b
;   undefined1 DAT_005cde3c
;   undefined4 DAT_005cde3e
;   TerminatedCString s_world_005cde41
;   TerminatedCString s_Probable_non_text_file_s_005cde47
;   CEditorTools* g_CEditorToolsPtr = 01c5b0e4
;
; Called Functions:
;   core_script.cpp_CScript_dbLoad_FUN_00530610
;   core_script.cpp_FUN_00528d50
;   core_script.cpp_FUN_005295e0
;   core_script.cpp_FUN_005297a0
;   crt_stdio.c_fclose_FUN_005a3a90
;   crt_stdio.c_fgetc_FUN_005a32b0
;   crt_stdio.c_ftell_FUN_005a5d00
;   crt_string.c_splitpath_FUN_005a5128
;   engine_dosio.cpp_FUN_004659c0
;   engine_dosio.cpp_getFileSize_FUN_004657f0
;   shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40
;   shape_edittool.cpp_CStrList_add_FUN_00482070
;   shape_edittool.cpp_FUN_00486af0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00529410
        ;   Label: core_script.cpp_FUN_00529410
    PUSH ESI                            ; 00529411
    PUSH EDI                            ; 00529412
    PUSH EBP                            ; 00529413
    SUB ESP,0x308                       ; 00529414
    MOV EDX,dword ptr [ESP + 0x31c]     ; 0052941a
    PUSH EDX                            ; 00529421
    CALL core_script.cpp_FUN_00528d50   ; 00529422
        ;   XREF to: 00528d50 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00528d50()
    ADD ESP,0x4                         ; 00529427
    MOV ECX,dword ptr [ESP + 0x320]     ; 0052942a
    PUSH ECX                            ; 00529431
    PUSH 0x5cde33                       ; 00529432 | = "world"
    CALL engine_dosio.cpp_getFileSize_FUN_004657f0 ; 00529437
        ;   XREF to: 004657f0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_004657f0(char * directory, char * filename)
    MOV EBX,EAX                         ; 0052943c
    ADD ESP,0x8                         ; 0052943e
    TEST EAX,EAX                        ; 00529441
    JG 0x00529455                       ; 00529443
        ;   XREF to: 00529455 (CONDITIONAL_JUMP)  ; LAB_00529455
    MOV EAX,0x1                         ; 00529445
        ;   Label: LAB_00529445
    ADD ESP,0x308                       ; 0052944a
    POP EBP                             ; 00529450
    POP EDI                             ; 00529451
    POP ESI                             ; 00529452
    POP EBX                             ; 00529453
    RET                                 ; 00529454
    PUSH 0x0                            ; 00529455
        ;   Label: LAB_00529455
    LEA EAX,[ESP + 0x204]               ; 00529457
    PUSH EAX                            ; 0052945e
    PUSH 0x0                            ; 0052945f
    PUSH 0x0                            ; 00529461
    MOV ESI,dword ptr [ESP + 0x330]     ; 00529463
    PUSH ESI                            ; 0052946a
    CALL crt_string.c_splitpath_FUN_005a5128 ; 0052946b
        ;   XREF to: 005a5128 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005a5128(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 00529470
    LEA EDI,[ESP + 0x200]               ; 00529473
    MOV ESI,0x5cde39                    ; 0052947a | DAT_005cde39
    PUSH EDI                            ; 0052947f
    SUB ECX,ECX                         ; 00529480
    DEC ECX                             ; 00529482
    MOV AL,0x0                          ; 00529483
    SCASB.REPNE ES:EDI                  ; 00529485
    DEC EDI                             ; 00529487
    MOV AL,byte ptr [ESI]               ; 00529488 | DAT_005cde39 | DAT_005cde3b
        ;   Label: LAB_00529488
    MOV byte ptr [EDI],AL               ; 0052948a
    CMP AL,0x0                          ; 0052948c
    JZ 0x005294a0                       ; 0052948e
        ;   XREF to: 005294a0 (CONDITIONAL_JUMP)  ; LAB_005294a0
    MOV AL,byte ptr [ESI + 0x1]         ; 00529490 | DAT_005cde3a | DAT_005cde3c
    ADD ESI,0x2                         ; 00529493
    MOV byte ptr [EDI + 0x1],AL         ; 00529496
    ADD EDI,0x2                         ; 00529499
    CMP AL,0x0                          ; 0052949c
    JNZ 0x00529488                      ; 0052949e
        ;   XREF to: 00529488 (CONDITIONAL_JUMP)  ; LAB_00529488
    POP EDI                             ; 005294a0
        ;   Label: LAB_005294a0
    LEA EAX,[ESP + 0x200]               ; 005294a1
    PUSH EAX                            ; 005294a8
    MOV EDI,dword ptr [ESP + 0x320]     ; 005294a9
    PUSH EDI                            ; 005294b0
    CALL core_script.cpp_CScript_dbLoad_FUN_00530610 ; 005294b1
        ;   XREF to: 00530610 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_dbLoad_FUN_00530610(CScript * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005294b6
    PUSH 0x5cde3e                       ; 005294b9 | DAT_005cde3e
    MOV EBP,dword ptr [ESP + 0x324]     ; 005294be
    PUSH EBP                            ; 005294c5
    PUSH 0x5cde41                       ; 005294c6 | = "world"
    CALL engine_dosio.cpp_FUN_004659c0  ; 005294cb
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_004659c0(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 005294d0
    MOV ESI,EAX                         ; 005294d3
    TEST EAX,EAX                        ; 005294d5
    JZ 0x00529445                       ; 005294d7
        ;   XREF to: 00529445 (CONDITIONAL_JUMP)  ; LAB_00529445
    PUSH EAX                            ; 005294dd
    CALL crt_stdio.c_ftell_FUN_005a5d00 ; 005294de
        ;   XREF to: 005a5d00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_ftell_FUN_005a5d00()
    ADD ESP,0x4                         ; 005294e3
    LEA EDI,[EBX + EAX*0x1]             ; 005294e6
    MOV EAX,dword ptr [ESP + 0x31c]     ; 005294e9
    ADD EAX,0x34                        ; 005294f0
    MOV EBP,0x1                         ; 005294f3
    MOV dword ptr [ESP + 0x304],EAX     ; 005294f8
    XOR EBX,EBX                         ; 005294ff
        ;   Label: LAB_005294ff
    PUSH ESI                            ; 00529501
        ;   Label: LAB_00529501
    CALL crt_stdio.c_ftell_FUN_005a5d00 ; 00529502
        ;   XREF to: 005a5d00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_ftell_FUN_005a5d00()
    ADD ESP,0x4                         ; 00529507
    CMP EAX,EDI                         ; 0052950a
    JL 0x0052955e                       ; 0052950c
        ;   XREF to: 0052955e (CONDITIONAL_JUMP)  ; LAB_0052955e
    XOR EBP,EBP                         ; 0052950e
    XOR AH,AH                           ; 00529510
        ;   Label: LAB_00529510
    MOV byte ptr [ESP + EBX*0x1],AH     ; 00529512
    MOV EAX,ESP                         ; 00529515
    PUSH EAX                            ; 00529517
    MOV EBX,dword ptr [ESP + 0x308]     ; 00529518
    PUSH EBX                            ; 0052951f
    CALL shape_edittool.cpp_CStrList_add_FUN_00482070 ; 00529520
        ;   XREF to: 00482070 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00482070(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00529525
    TEST EBP,EBP                        ; 00529528
    JNZ 0x005294ff                      ; 0052952a
        ;   XREF to: 005294ff (CONDITIONAL_JUMP)  ; LAB_005294ff
    PUSH ESI                            ; 0052952c
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 0052952d
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 00529532
    MOV ESI,dword ptr [ESP + 0x31c]     ; 00529535
    PUSH ESI                            ; 0052953c
    CALL core_script.cpp_FUN_005295e0   ; 0052953d
        ;   XREF to: 005295e0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_FUN_005295e0(CScript * this_ptr)
    ADD ESP,0x4                         ; 00529542
    PUSH ESI                            ; 00529545
    CALL core_script.cpp_FUN_005297a0   ; 00529546
        ;   XREF to: 005297a0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_FUN_005297a0(CScript * this_ptr)
    MOV EAX,0x1                         ; 0052954b
    ADD ESP,0x4                         ; 00529550
    ADD ESP,0x308                       ; 00529553
    POP EBP                             ; 00529559
    POP EDI                             ; 0052955a
    POP ESI                             ; 0052955b
    POP EBX                             ; 0052955c
    RET                                 ; 0052955d
    PUSH ESI                            ; 0052955e
        ;   Label: LAB_0052955e
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 0052955f
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005a32b0()
    ADD ESP,0x4                         ; 00529564
    MOV EDX,EAX                         ; 00529567
    CMP EAX,-0x1                        ; 00529569
    JZ 0x00529510                       ; 0052956c
        ;   XREF to: 00529510 (CONDITIONAL_JUMP)  ; LAB_00529510
    CMP EAX,0xd                         ; 0052956e
    JZ 0x00529501                       ; 00529571
        ;   XREF to: 00529501 (CONDITIONAL_JUMP)  ; LAB_00529501
    CMP EAX,0xa                         ; 00529573
    JZ 0x00529510                       ; 00529576
        ;   XREF to: 00529510 (CONDITIONAL_JUMP)  ; LAB_00529510
    TEST EAX,EAX                        ; 00529578
    JZ 0x00529586                       ; 0052957a
        ;   XREF to: 00529586 (CONDITIONAL_JUMP)  ; LAB_00529586
    INC EBX                             ; 0052957c
    MOV byte ptr [ESP + EBX*0x1 + -0x1],DL ; 0052957d
    JMP 0x00529501                      ; 00529581
        ;   XREF to: 00529501 (UNCONDITIONAL_JUMP)  ; LAB_00529501
    PUSH ESI                            ; 00529586
        ;   Label: LAB_00529586
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 00529587
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 0052958c
    MOV EAX,dword ptr [ESP + 0x31c]     ; 0052958f
    ADD EAX,0x34                        ; 00529596
    PUSH EAX                            ; 00529599
    CALL shape_edittool.cpp_FUN_00486af0 ; 0052959a
        ;   XREF to: 00486af0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_00486af0(CStrList * this_ptr)
    ADD ESP,0x4                         ; 0052959f
    INC EAX                             ; 005295a2
    PUSH EAX                            ; 005295a3
    MOV EAX,dword ptr [ESP + 0x324]     ; 005295a4
    PUSH EAX                            ; 005295ab
    PUSH 0x5cde47                       ; 005295ac | = "Probable non-text file %s detected ne..."
    MOV EDX,dword ptr [0x005fb140]      ; 005295b1 | g_CEditorToolsPtr
    PUSH EDX                            ; 005295b7
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40 ; 005295b8
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 005295bd
    MOV ECX,dword ptr [ESP + 0x31c]     ; 005295c0
    PUSH ECX                            ; 005295c7
    CALL core_script.cpp_FUN_00528d50   ; 005295c8
        ;   XREF to: 00528d50 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00528d50()
    ADD ESP,0x4                         ; 005295cd
    XOR EAX,EAX                         ; 005295d0
    ADD ESP,0x308                       ; 005295d2
    POP EBP                             ; 005295d8
    POP EDI                             ; 005295d9
    POP ESI                             ; 005295da
    POP EBX                             ; 005295db
    RET                                 ; 005295dc

