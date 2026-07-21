; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CStrList_insertSortedFileRecord_FUN_00474460(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)
;
; Local Variables:
; undefined        Stack[-0xb04]:1  local_b04
; undefined        Stack[-0x904]:1  local_904
; undefined        Stack[-0x704]:1  local_704
; undefined        Stack[-0x600]:1  local_600
; undefined        Stack[-0x4fc]:1  local_4fc
; undefined        Stack[-0x3fc]:1  local_3fc
; undefined        Stack[-0x3fb]:1  local_3fb
; undefined        Stack[-0x2fc]:1  local_2fc
; undefined        Stack[-0x1fc]:1  local_1fc
; undefined        Stack[-0xfc]:1  local_fc
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004746b0 at 004747bd
;
; Referenced Globals:
;   string s_%[^_]_%[^_]_0057ede3
;   string s_%m/%d/%y_%I:%M:%S_%p_0057edef
;   string s_%s_%s_%d_%s_%s_0057ee04
;   undefined4 DAT_005b7078
;   undefined4 DAT_005b707c
;   undefined4 DAT_005b7278
;   undefined4 DAT_005b727c
;   undefined4 DAT_005b7478
;   undefined4 DAT_005b747c
;
; Called Functions:
;   crt_file.c_makepath_FUN_0056626c
;   crt_stdio.c_sprintf_FUN_00563c90
;   crt_stdio.c_sscanf_FUN_00566b5c
;   crt_string.c__stricmp_FUN_00564520
;   crt_string.c_memmove_FUN_00566170
;   crt_string.c_splitpath_FUN_00566498
;   crt_string.c_strupr_FUN_00566ad0
;   crt_time.c__localtime_FUN_005665e8
;   crt_time.c__strftime_FUN_00566634
;   shape_edittool.cpp_CStrList_getStringAt_FUN_00474080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00474460
        ;   Label: shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_00474460
    PUSH ESI                            ; 00474461
    PUSH EDI                            ; 00474462
    PUSH EBP                            ; 00474463
    SUB ESP,0xaf4                       ; 00474464
    MOV EBP,dword ptr [ESP + 0xb08]     ; 0047446a
    MOV EBP,dword ptr [EBP]             ; 00474471
    XOR EDX,EDX                         ; 00474474
    DEC EBP                             ; 00474476
    MOV dword ptr [ESP + 0xaf0],EDX     ; 00474477
    TEST EBP,EBP                        ; 0047447e
    JL 0x00474541                       ; 00474480
        ;   XREF to: 00474541 (CONDITIONAL_JUMP)  ; LAB_00474541
    MOV EDX,dword ptr [ESP + 0xaf0]     ; 00474486
        ;   Label: LAB_00474486
    ADD EDX,EBP                         ; 0047448d
    MOV EAX,EDX                         ; 0047448f
    SAR EDX,0x1f                        ; 00474491
    SUB EAX,EDX                         ; 00474494
    SAR EAX,0x1                         ; 00474496
    MOV ECX,0x80                        ; 00474498
    LEA EDI,[ESP + 0x200]               ; 0047449d
    MOV ESI,0x5b7078                    ; 004744a4 | DAT_005b7078
    MOV EBX,EAX                         ; 004744a9
    MOV EAX,ESP                         ; 004744ab
    MOVSD.REP ES:EDI,ESI                ; 004744ad | DAT_005b7078 | DAT_005b707c
    PUSH EAX                            ; 004744af
    LEA EAX,[ESP + 0x204]               ; 004744b0
    MOV ECX,0x80                        ; 004744b7
    PUSH EAX                            ; 004744bc
    LEA EDI,[ESP + 0x8]                 ; 004744bd
    MOV ESI,0x5b7278                    ; 004744c1 | DAT_005b7278
    PUSH 0x57ede3                       ; 004744c6 | = "%[^\t]\t%[^\t]"
    MOVSD.REP ES:EDI,ESI                ; 004744cb | DAT_005b7278 | DAT_005b727c
    PUSH EBX                            ; 004744cd
    MOV ESI,dword ptr [ESP + 0xb18]     ; 004744ce
    PUSH ESI                            ; 004744d5
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00474080 ; 004744d6
        ;   XREF to: 00474080 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_getStringAt_FUN_00474080()
    ADD ESP,0x8                         ; 004744db
    PUSH EAX                            ; 004744de
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 004744df
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sscanf_FUN_00566b5c()
    ADD ESP,0x10                        ; 004744e4
    MOV EAX,ESP                         ; 004744e7
    PUSH EAX                            ; 004744e9
    LEA EAX,[ESP + 0x204]               ; 004744ea
    PUSH EAX                            ; 004744f1
    PUSH 0x0                            ; 004744f2
    PUSH 0x0                            ; 004744f4
    LEA EAX,[ESP + 0x514]               ; 004744f6
    PUSH EAX                            ; 004744fd
    CALL crt_file.c_makepath_FUN_0056626c ; 004744fe
        ;   XREF to: 0056626c (UNCONDITIONAL_CALL)  ; undefined crt_file.c_makepath_FUN_0056626c()
    ADD ESP,0x14                        ; 00474503
    LEA EAX,[ESP + 0x504]               ; 00474506
    PUSH EAX                            ; 0047450d
    MOV EDI,dword ptr [ESP + 0xb10]     ; 0047450e
    PUSH EDI                            ; 00474515
    CALL crt_string.c__stricmp_FUN_00564520 ; 00474516
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0047451b
    TEST EAX,EAX                        ; 0047451e
    JZ 0x00474695                       ; 00474520
        ;   XREF to: 00474695 (CONDITIONAL_JUMP)  ; LAB_00474695
    JL 0x004746a0                       ; 00474526
        ;   XREF to: 004746a0 (CONDITIONAL_JUMP)  ; LAB_004746a0
    INC EBX                             ; 0047452c
    MOV dword ptr [ESP + 0xaf0],EBX     ; 0047452d
    CMP EBP,dword ptr [ESP + 0xaf0]     ; 00474534
        ;   Label: LAB_00474534
    JGE 0x00474486                      ; 0047453b
        ;   XREF to: 00474486 (CONDITIONAL_JUMP)  ; LAB_00474486
    LEA EAX,[ESP + 0xb18]               ; 00474541
        ;   Label: LAB_00474541
    PUSH EAX                            ; 00474548
    CALL crt_time.c__localtime_FUN_005665e8 ; 00474549
        ;   XREF to: 005665e8 (UNCONDITIONAL_CALL)  ; undefined crt_time.c__localtime_FUN_005665e8()
    ADD ESP,0x4                         ; 0047454e
    PUSH EAX                            ; 00474551
    PUSH 0x57edef                       ; 00474552 | = "%m/%d/%y %I:%M:%S %p"
    PUSH 0x1e                           ; 00474557
    LEA EAX,[ESP + 0xadc]               ; 00474559
    PUSH EAX                            ; 00474560
    LEA EDI,[ESP + 0x410]               ; 00474561
    MOV ESI,0x5b7478                    ; 00474568 | DAT_005b7478
    CALL crt_time.c__strftime_FUN_00566634 ; 0047456d
        ;   XREF to: 00566634 (UNCONDITIONAL_CALL)  ; undefined crt_time.c__strftime_FUN_00566634()
    ADD ESP,0x10                        ; 00474572
    MOV ECX,0x41                        ; 00474575
    MOV EBX,dword ptr [ESP + 0xb10]     ; 0047457a
    MOVSD.REP ES:EDI,ESI                ; 00474581 | DAT_005b7478 | DAT_005b747c
    TEST EBX,EBX                        ; 00474583
    JZ 0x004745c8                       ; 00474585
        ;   XREF to: 004745c8 (CONDITIONAL_JUMP)  ; LAB_004745c8
    LEA EAX,[ESP + 0x608]               ; 00474587
    PUSH EAX                            ; 0047458e
    LEA EAX,[ESP + 0x90c]               ; 0047458f
    PUSH EAX                            ; 00474596
    PUSH 0x0                            ; 00474597
    PUSH 0x0                            ; 00474599
    PUSH EBX                            ; 0047459b
    CALL crt_string.c_splitpath_FUN_00566498 ; 0047459c
        ;   XREF to: 00566498 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_splitpath_FUN_00566498()
    ADD ESP,0x14                        ; 004745a1
    LEA EAX,[ESP + 0x608]               ; 004745a4
    PUSH EAX                            ; 004745ab
    LEA EAX,[ESP + 0x90c]               ; 004745ac
    PUSH EAX                            ; 004745b3
    PUSH 0x0                            ; 004745b4
    PUSH 0x0                            ; 004745b6
    LEA EAX,[ESP + 0x410]               ; 004745b8
    PUSH EAX                            ; 004745bf
    CALL crt_file.c_makepath_FUN_0056626c ; 004745c0
        ;   XREF to: 0056626c (UNCONDITIONAL_CALL)  ; undefined crt_file.c_makepath_FUN_0056626c()
    ADD ESP,0x14                        ; 004745c5
    LEA EAX,[ESP + 0x708]               ; 004745c8
        ;   Label: LAB_004745c8
    PUSH EAX                            ; 004745cf
    LEA EAX,[ESP + 0x80c]               ; 004745d0
    PUSH EAX                            ; 004745d7
    PUSH 0x0                            ; 004745d8
    PUSH 0x0                            ; 004745da
    MOV EDI,dword ptr [ESP + 0xb1c]     ; 004745dc
    PUSH EDI                            ; 004745e3
    CALL crt_string.c_splitpath_FUN_00566498 ; 004745e4
        ;   XREF to: 00566498 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_splitpath_FUN_00566498()
    ADD ESP,0x14                        ; 004745e9
    CMP byte ptr [ESP + 0x708],0x2e     ; 004745ec
    JNZ 0x00474620                      ; 004745f4
        ;   XREF to: 00474620 (CONDITIONAL_JUMP)  ; LAB_00474620
    LEA EDI,[ESP + 0x708]               ; 004745f6
    SUB ECX,ECX                         ; 004745fd
    DEC ECX                             ; 004745ff
    XOR EAX,EAX                         ; 00474600
    SCASB.REPNE ES:EDI                  ; 00474602
    NOT ECX                             ; 00474604
    DEC ECX                             ; 00474606
    PUSH ECX                            ; 00474607
    LEA EAX,[ESP + 0x70d]               ; 00474608
    PUSH EAX                            ; 0047460f
    LEA EAX,[ESP + 0x710]               ; 00474610
    PUSH EAX                            ; 00474617
    CALL crt_string.c_memmove_FUN_00566170 ; 00474618
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_memmove_FUN_00566170()
    ADD ESP,0xc                         ; 0047461d
    LEA EAX,[ESP + 0x400]               ; 00474620
        ;   Label: LAB_00474620
    PUSH EAX                            ; 00474627
    LEA EAX,[ESP + 0xad4]               ; 00474628
    PUSH EAX                            ; 0047462f
    MOV EBP,dword ptr [ESP + 0xb1c]     ; 00474630
    PUSH EBP                            ; 00474637
    LEA EAX,[ESP + 0x714]               ; 00474638
    PUSH EAX                            ; 0047463f
    LEA EAX,[ESP + 0x818]               ; 00474640
    PUSH EAX                            ; 00474647
    PUSH 0x57ee04                       ; 00474648 | = "%s\t%s\t%d\t%s\t%s"
    LEA EAX,[ESP + 0xa20]               ; 0047464d
    PUSH EAX                            ; 00474654
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00474655
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x1c                        ; 0047465a
    LEA EAX,[ESP + 0xa08]               ; 0047465d
    PUSH EAX                            ; 00474664
    CALL crt_string.c_strupr_FUN_00566ad0 ; 00474665
        ;   XREF to: 00566ad0 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_strupr_FUN_00566ad0()
    ADD ESP,0x4                         ; 0047466a
    LEA EAX,[ESP + 0xa08]               ; 0047466d
    PUSH EAX                            ; 00474674
    MOV EAX,dword ptr [ESP + 0xaf4]     ; 00474675
    MOV EDX,dword ptr [ESP + 0xb0c]     ; 0047467c
    PUSH EAX                            ; 00474683
    MOV ECX,dword ptr [ESP + 0xb10]     ; 00474684
    MOV EDX,dword ptr [EDX + 0xc]       ; 0047468b
    PUSH ECX                            ; 0047468e
    CALL dword ptr [EDX + 0xc]          ; 0047468f
    ADD ESP,0xc                         ; 00474692
    ADD ESP,0xaf4                       ; 00474695
        ;   Label: LAB_00474695
    POP EBP                             ; 0047469b
    POP EDI                             ; 0047469c
    POP ESI                             ; 0047469d
    POP EBX                             ; 0047469e
    RET                                 ; 0047469f
    LEA EBP,[EBX + -0x1]                ; 004746a0
        ;   Label: LAB_004746a0
    JMP 0x00474534                      ; 004746a3
        ;   XREF to: 00474534 (UNCONDITIONAL_JUMP)  ; LAB_00474534

