; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_course_cpp_CCourse_load_FUN_0043b690(int *param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   FUN_004f5f60 at 004f5fbd
;   core_bat.cpp_CBat_setup_FUN_00411ae0 at 00411b05
;   core_frankgen.cpp_CFrankenstienMachine_setup_FUN_004946c0 at 004948d0
;   core_marquee.cpp_CMarquee_setup_FUN_004cc2e0 at 004cc2fc
;   core_moon.cpp_CMoon_init_FUN_004de860 at 004dea12
;   core_vehicle.cpp_CVehicle_setup_FUN_0054e7f0 at 0054eaa7
;
; Referenced Globals:
;   TerminatedCString s_rt_0057b261
;   TerminatedCString s_data_0057b264
;   TerminatedCString s_core_course_cpp_0057b269
;   TerminatedCString s_CCourse_load_can_t_open_0057b27c
;   TerminatedCString s_d_0057b29f
;   TerminatedCString s_d_d_0057b2a3
;   TerminatedCString s_f_f_f_f_f_f_f_0057b2aa
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   core_course.cpp_CCourse_allocMemory_FUN_0043b610
;   core_course.cpp_CCourse_free_FUN_0043b7c0
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fgetc_FUN_00564570
;   crt_stdio.c_fscanf_FUN_00563350
;   engine_dosio.cpp_getFile_FUN_00456a60
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043b690
        ;   Label: core_course.cpp_CCourse_load_FUN_0043b690
    PUSH ESI                            ; 0043b691
    PUSH EDI                            ; 0043b692
    PUSH EBP                            ; 0043b693
    SUB ESP,0x8                         ; 0043b694
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0043b697
    MOV EBX,dword ptr [ESP + 0x20]      ; 0043b69b
    PUSH EDI                            ; 0043b69f
    CALL core_course.cpp_CCourse_free_FUN_0043b7c0 ; 0043b6a0
        ;   XREF to: 0043b7c0 (UNCONDITIONAL_CALL)  ; undefined core_course.cpp_CCourse_free_FUN_0043b7c0()
    ADD ESP,0x4                         ; 0043b6a5
    PUSH 0x57b261                       ; 0043b6a8 | = "rt"
    PUSH EBX                            ; 0043b6ad
    PUSH 0x57b264                       ; 0043b6ae | = "data"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 0043b6b3
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getFile_FUN_00456a60()
    ADD ESP,0xc                         ; 0043b6b8
    MOV EBP,EAX                         ; 0043b6bb
    TEST EAX,EAX                        ; 0043b6bd
    JZ 0x0043b791                       ; 0043b6bf
        ;   XREF to: 0043b791 (CONDITIONAL_JUMP)  ; LAB_0043b791
    MOV EBX,EBP                         ; 0043b6c5
        ;   Label: LAB_0043b6c5
    PUSH EBX                            ; 0043b6c7
        ;   Label: LAB_0043b6c7
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 0043b6c8
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 0043b6cd
    TEST EAX,EAX                        ; 0043b6d0
    JL 0x0043b6d9                       ; 0043b6d2
        ;   XREF to: 0043b6d9 (CONDITIONAL_JUMP)  ; LAB_0043b6d9
    CMP EAX,0xa                         ; 0043b6d4
    JNZ 0x0043b6c7                      ; 0043b6d7
        ;   XREF to: 0043b6c7 (CONDITIONAL_JUMP)  ; LAB_0043b6c7
    MOV EAX,ESP                         ; 0043b6d9
        ;   Label: LAB_0043b6d9
    PUSH EAX                            ; 0043b6db
    PUSH 0x57b29f                       ; 0043b6dc | = "%d\n"
    PUSH EBP                            ; 0043b6e1
    MOV EBX,EBP                         ; 0043b6e2
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0043b6e4
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 0043b6e9
    PUSH EBX                            ; 0043b6ec
        ;   Label: LAB_0043b6ec
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 0043b6ed
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 0043b6f2
    TEST EAX,EAX                        ; 0043b6f5
    JL 0x0043b6fe                       ; 0043b6f7
        ;   XREF to: 0043b6fe (CONDITIONAL_JUMP)  ; LAB_0043b6fe
    CMP EAX,0xa                         ; 0043b6f9
    JNZ 0x0043b6ec                      ; 0043b6fc
        ;   XREF to: 0043b6ec (CONDITIONAL_JUMP)  ; LAB_0043b6ec
    LEA EAX,[EDI + 0x8]                 ; 0043b6fe
        ;   Label: LAB_0043b6fe
    PUSH EAX                            ; 0043b701
    LEA EAX,[ESP + 0x8]                 ; 0043b702
    PUSH EAX                            ; 0043b706
    PUSH 0x57b2a3                       ; 0043b707 | = "%d,%d\n"
    PUSH EBP                            ; 0043b70c
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0043b70d
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x10                        ; 0043b712
    MOV EBX,dword ptr [ESP + 0x4]       ; 0043b715
    PUSH EBX                            ; 0043b719
    PUSH EDI                            ; 0043b71a
    CALL core_course.cpp_CCourse_allocMemory_FUN_0043b610 ; 0043b71b
        ;   XREF to: 0043b610 (UNCONDITIONAL_CALL)  ; undefined core_course.cpp_CCourse_allocMemory_FUN_0043b610()
    MOV EBX,EBP                         ; 0043b720
    ADD ESP,0x8                         ; 0043b722
    PUSH EBX                            ; 0043b725
        ;   Label: LAB_0043b725
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 0043b726
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 0043b72b
    TEST EAX,EAX                        ; 0043b72e
    JL 0x0043b737                       ; 0043b730
        ;   XREF to: 0043b737 (CONDITIONAL_JUMP)  ; LAB_0043b737
    CMP EAX,0xa                         ; 0043b732
    JNZ 0x0043b725                      ; 0043b735
        ;   XREF to: 0043b725 (CONDITIONAL_JUMP)  ; LAB_0043b725
    MOV ESI,dword ptr [EDI]             ; 0043b737
        ;   Label: LAB_0043b737
    XOR EBX,EBX                         ; 0043b739
    TEST ESI,ESI                        ; 0043b73b
    JLE 0x0043b780                      ; 0043b73d
        ;   XREF to: 0043b780 (CONDITIONAL_JUMP)  ; LAB_0043b780
    XOR ESI,ESI                         ; 0043b73f
    MOV EAX,dword ptr [EDI + 0x4]       ; 0043b741
        ;   Label: LAB_0043b741
    ADD EAX,ESI                         ; 0043b744
    LEA EDX,[EAX + 0x18]                ; 0043b746
    PUSH EDX                            ; 0043b749
    LEA EDX,[EAX + 0x14]                ; 0043b74a
    PUSH EDX                            ; 0043b74d
    LEA EDX,[EAX + 0x10]                ; 0043b74e
    PUSH EDX                            ; 0043b751
    LEA EDX,[EAX + 0xc]                 ; 0043b752
    PUSH EDX                            ; 0043b755
    LEA EDX,[EAX + 0x8]                 ; 0043b756
    PUSH EDX                            ; 0043b759
    LEA EDX,[EAX + 0x4]                 ; 0043b75a
    PUSH EDX                            ; 0043b75d
    PUSH EAX                            ; 0043b75e
    PUSH 0x57b2aa                       ; 0043b75f | = "%f,%f,%f, %f,%f,%f,%f\n"
    PUSH EBP                            ; 0043b764
    INC EBX                             ; 0043b765
    ADD ESI,0x1c                        ; 0043b766
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0043b769
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    MOV EAX,dword ptr [EDI]             ; 0043b76e
    ADD ESP,0x24                        ; 0043b770
    CMP EBX,EAX                         ; 0043b773
    JL 0x0043b741                       ; 0043b775
        ;   XREF to: 0043b741 (CONDITIONAL_JUMP)  ; LAB_0043b741
    LEA EAX,[EAX]                       ; 0043b777
    LEA EDX,[EDX]                       ; 0043b77d
    PUSH EBP                            ; 0043b780
        ;   Label: LAB_0043b780
    CALL crt_stdio.c_fclose_FUN_00563380 ; 0043b781
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_00563380()
    ADD ESP,0x4                         ; 0043b786
    ADD ESP,0x8                         ; 0043b789
    POP EBP                             ; 0043b78c
    POP EDI                             ; 0043b78d
    POP ESI                             ; 0043b78e
    POP EBX                             ; 0043b78f
    RET                                 ; 0043b790
    PUSH EBX                            ; 0043b791
        ;   Label: LAB_0043b791
    MOV EDX,0x57b269                    ; 0043b792 | = "..\\core\\course.cpp"
    MOV ECX,0x7c                        ; 0043b797
    PUSH 0x57b27c                       ; 0043b79c | = "CCourse::load - can't open data\\%s"
    MOV dword ptr [0x01cc4800],EDX      ; 0043b7a1 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 0043b7a7 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0043b7ad
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 0043b7b2
    JMP 0x0043b6c5                      ; 0043b7b5
        ;   XREF to: 0043b6c5 (UNCONDITIONAL_JUMP)  ; LAB_0043b6c5

