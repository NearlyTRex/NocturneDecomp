; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CStrList_insertSortedFileRecord_FUN_00481620(CStrList *this_ptr,char *search_key,char *file_path,int file_size,time_t file_timestamp)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   search_key
; char *           Stack[0xc]:4   file_path
; int              Stack[0x10]:4   file_size
; time_t           Stack[0x14]:4   file_timestamp
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
;   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_00481870 at 0048197d
;
; Referenced Globals:
;   TerminatedCString s_anon_005d2828
;   TerminatedCString s_m_d_y_I_M_S_p_005d2834
;   TerminatedCString s_s_s_d_s_s_005d2849
;   undefined4 DAT_00613c08
;   undefined4 DAT_00613c0c
;   undefined4 DAT_00613e08
;   undefined4 DAT_00613e0c
;   undefined4 DAT_00614008
;   undefined4 DAT_0061400c
;
; Called Functions:
;   crt_stdio.c_sscanf_FUN_005ba8cc
;   crt_string.c__stricmp_FUN_005b8130
;   crt_string.c_memmove_FUN_005ba1f0
;   crt_string.c_strupr_FUN_005ba840
;   crt_time.c__localtime_FUN_005ba358
;   crt_time.c__strftime_FUN_005ba3a4
;   crt_unknown.c_sprintf_FUN_005b7790
;   engine_dosio.cpp_makePath_FUN_004610a0
;   engine_dosio.cpp_splitPath_FUN_00461070
;   shape_edittool.cpp_CStrList_getStringAt_FUN_00481240
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481620
        ;   Label: shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_00481620
    PUSH ESI                            ; 00481621
    PUSH EDI                            ; 00481622
    PUSH EBP                            ; 00481623
    SUB ESP,0xaf4                       ; 00481624
    MOV EBP,dword ptr [ESP + 0xb08]     ; 0048162a
    MOV EBP,dword ptr [EBP]             ; 00481631
    XOR EDX,EDX                         ; 00481634
    DEC EBP                             ; 00481636
    MOV dword ptr [ESP + 0xaf0],EDX     ; 00481637
    TEST EBP,EBP                        ; 0048163e
    JL 0x00481701                       ; 00481640
        ;   XREF to: 00481701 (CONDITIONAL_JUMP)  ; LAB_00481701
    MOV EDX,dword ptr [ESP + 0xaf0]     ; 00481646
        ;   Label: LAB_00481646
    ADD EDX,EBP                         ; 0048164d
    MOV EAX,EDX                         ; 0048164f
    SAR EDX,0x1f                        ; 00481651
    SUB EAX,EDX                         ; 00481654
    SAR EAX,0x1                         ; 00481656
    MOV ECX,0x80                        ; 00481658
    LEA EDI,[ESP + 0x200]               ; 0048165d
    MOV ESI,0x613c08                    ; 00481664 | DAT_00613c08
    MOV EBX,EAX                         ; 00481669
    MOV EAX,ESP                         ; 0048166b
    MOVSD.REP ES:EDI,ESI                ; 0048166d | DAT_00613c08 | DAT_00613c0c
    PUSH EAX                            ; 0048166f
    LEA EAX,[ESP + 0x204]               ; 00481670
    MOV ECX,0x80                        ; 00481677
    PUSH EAX                            ; 0048167c
    LEA EDI,[ESP + 0x8]                 ; 0048167d
    MOV ESI,0x613e08                    ; 00481681 | DAT_00613e08
    PUSH 0x5d2828                       ; 00481686 | = "%[^\t]\t%[^\t]"
    MOVSD.REP ES:EDI,ESI                ; 0048168b | DAT_00613e08 | DAT_00613e0c
    PUSH EBX                            ; 0048168d
    MOV ESI,dword ptr [ESP + 0xb18]     ; 0048168e
    PUSH ESI                            ; 00481695
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00481240 ; 00481696
        ;   XREF to: 00481240 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_00481240(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 0048169b
    PUSH EAX                            ; 0048169e
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 0048169f
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0x10                        ; 004816a4
    MOV EAX,ESP                         ; 004816a7
    PUSH EAX                            ; 004816a9
    LEA EAX,[ESP + 0x204]               ; 004816aa
    PUSH EAX                            ; 004816b1
    PUSH 0x0                            ; 004816b2
    PUSH 0x0                            ; 004816b4
    LEA EAX,[ESP + 0x514]               ; 004816b6
    PUSH EAX                            ; 004816bd
    CALL engine_dosio.cpp_makePath_FUN_004610a0 ; 004816be
        ;   XREF to: 004610a0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_makePath_FUN_004610a0(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004816c3
    LEA EAX,[ESP + 0x504]               ; 004816c6
    PUSH EAX                            ; 004816cd
    MOV EDI,dword ptr [ESP + 0xb10]     ; 004816ce
    PUSH EDI                            ; 004816d5
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004816d6
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004816db
    TEST EAX,EAX                        ; 004816de
    JZ 0x00481855                       ; 004816e0
        ;   XREF to: 00481855 (CONDITIONAL_JUMP)  ; LAB_00481855
    JL 0x00481860                       ; 004816e6
        ;   XREF to: 00481860 (CONDITIONAL_JUMP)  ; LAB_00481860
    INC EBX                             ; 004816ec
    MOV dword ptr [ESP + 0xaf0],EBX     ; 004816ed
    CMP EBP,dword ptr [ESP + 0xaf0]     ; 004816f4
        ;   Label: LAB_004816f4
    JGE 0x00481646                      ; 004816fb
        ;   XREF to: 00481646 (CONDITIONAL_JUMP)  ; LAB_00481646
    LEA EAX,[ESP + 0xb18]               ; 00481701
        ;   Label: LAB_00481701
    PUSH EAX                            ; 00481708
    CALL crt_time.c__localtime_FUN_005ba358 ; 00481709
        ;   XREF to: 005ba358 (UNCONDITIONAL_CALL)  ; _tm * crt_time.c__localtime_FUN_005ba358(time_t * timer)
    ADD ESP,0x4                         ; 0048170e
    PUSH EAX                            ; 00481711
    PUSH 0x5d2834                       ; 00481712 | = "%m/%d/%y %I:%M:%S %p"
    PUSH 0x1e                           ; 00481717
    LEA EAX,[ESP + 0xadc]               ; 00481719
    PUSH EAX                            ; 00481720
    LEA EDI,[ESP + 0x410]               ; 00481721
    MOV ESI,0x614008                    ; 00481728 | DAT_00614008
    CALL crt_time.c__strftime_FUN_005ba3a4 ; 0048172d
        ;   XREF to: 005ba3a4 (UNCONDITIONAL_CALL)  ; uint crt_time.c__strftime_FUN_005ba3a4(char * dest_buffer, uint buffer_size, char * format_string, _tm * time_ptr)
    ADD ESP,0x10                        ; 00481732
    MOV ECX,0x41                        ; 00481735
    MOV EBX,dword ptr [ESP + 0xb10]     ; 0048173a
    MOVSD.REP ES:EDI,ESI                ; 00481741 | DAT_00614008 | DAT_0061400c
    TEST EBX,EBX                        ; 00481743
    JZ 0x00481788                       ; 00481745
        ;   XREF to: 00481788 (CONDITIONAL_JUMP)  ; LAB_00481788
    LEA EAX,[ESP + 0x608]               ; 00481747
    PUSH EAX                            ; 0048174e
    LEA EAX,[ESP + 0x90c]               ; 0048174f
    PUSH EAX                            ; 00481756
    PUSH 0x0                            ; 00481757
    PUSH 0x0                            ; 00481759
    PUSH EBX                            ; 0048175b
    CALL engine_dosio.cpp_splitPath_FUN_00461070 ; 0048175c
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00461070(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00481761
    LEA EAX,[ESP + 0x608]               ; 00481764
    PUSH EAX                            ; 0048176b
    LEA EAX,[ESP + 0x90c]               ; 0048176c
    PUSH EAX                            ; 00481773
    PUSH 0x0                            ; 00481774
    PUSH 0x0                            ; 00481776
    LEA EAX,[ESP + 0x410]               ; 00481778
    PUSH EAX                            ; 0048177f
    CALL engine_dosio.cpp_makePath_FUN_004610a0 ; 00481780
        ;   XREF to: 004610a0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_makePath_FUN_004610a0(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00481785
    LEA EAX,[ESP + 0x708]               ; 00481788
        ;   Label: LAB_00481788
    PUSH EAX                            ; 0048178f
    LEA EAX,[ESP + 0x80c]               ; 00481790
    PUSH EAX                            ; 00481797
    PUSH 0x0                            ; 00481798
    PUSH 0x0                            ; 0048179a
    MOV EDI,dword ptr [ESP + 0xb1c]     ; 0048179c
    PUSH EDI                            ; 004817a3
    CALL engine_dosio.cpp_splitPath_FUN_00461070 ; 004817a4
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00461070(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004817a9
    CMP byte ptr [ESP + 0x708],0x2e     ; 004817ac
    JNZ 0x004817e0                      ; 004817b4
        ;   XREF to: 004817e0 (CONDITIONAL_JUMP)  ; LAB_004817e0
    LEA EDI,[ESP + 0x708]               ; 004817b6
    SUB ECX,ECX                         ; 004817bd
    DEC ECX                             ; 004817bf
    XOR EAX,EAX                         ; 004817c0
    SCASB.REPNE ES:EDI                  ; 004817c2
    NOT ECX                             ; 004817c4
    DEC ECX                             ; 004817c6
    PUSH ECX                            ; 004817c7
    LEA EAX,[ESP + 0x70d]               ; 004817c8
    PUSH EAX                            ; 004817cf
    LEA EAX,[ESP + 0x710]               ; 004817d0
    PUSH EAX                            ; 004817d7
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 004817d8
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004817dd
    LEA EAX,[ESP + 0x400]               ; 004817e0
        ;   Label: LAB_004817e0
    PUSH EAX                            ; 004817e7
    LEA EAX,[ESP + 0xad4]               ; 004817e8
    PUSH EAX                            ; 004817ef
    MOV EBP,dword ptr [ESP + 0xb1c]     ; 004817f0
    PUSH EBP                            ; 004817f7
    LEA EAX,[ESP + 0x714]               ; 004817f8
    PUSH EAX                            ; 004817ff
    LEA EAX,[ESP + 0x818]               ; 00481800
    PUSH EAX                            ; 00481807
    PUSH 0x5d2849                       ; 00481808 | = "%s\t%s\t%d\t%s\t%s"
    LEA EAX,[ESP + 0xa20]               ; 0048180d
    PUSH EAX                            ; 00481814
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00481815
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x1c                        ; 0048181a
    LEA EAX,[ESP + 0xa08]               ; 0048181d
    PUSH EAX                            ; 00481824
    CALL crt_string.c_strupr_FUN_005ba840 ; 00481825
        ;   XREF to: 005ba840 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strupr_FUN_005ba840(char * string)
    ADD ESP,0x4                         ; 0048182a
    LEA EAX,[ESP + 0xa08]               ; 0048182d
    PUSH EAX                            ; 00481834
    MOV EAX,dword ptr [ESP + 0xaf4]     ; 00481835
    MOV EDX,dword ptr [ESP + 0xb0c]     ; 0048183c
    PUSH EAX                            ; 00481843
    MOV ECX,dword ptr [ESP + 0xb10]     ; 00481844
    MOV EDX,dword ptr [EDX + 0xc]       ; 0048184b
    PUSH ECX                            ; 0048184e
    CALL dword ptr [EDX + 0xc]          ; 0048184f
    ADD ESP,0xc                         ; 00481852
    ADD ESP,0xaf4                       ; 00481855
        ;   Label: LAB_00481855
    POP EBP                             ; 0048185b
    POP EDI                             ; 0048185c
    POP ESI                             ; 0048185d
    POP EBX                             ; 0048185e
    RET                                 ; 0048185f
    LEA EBP,[EBX + -0x1]                ; 00481860
        ;   Label: LAB_00481860
    JMP 0x004816f4                      ; 00481863
        ;   XREF to: 004816f4 (UNCONDITIONAL_JUMP)  ; LAB_004816f4

