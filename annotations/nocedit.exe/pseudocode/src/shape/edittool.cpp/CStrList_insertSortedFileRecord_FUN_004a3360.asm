; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CStrList_insertSortedFileRecord_FUN_004a3360(CStrList *this_ptr,char *search_key,char *file_path,int file_size,time_t file_timestamp)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   search_key
; char *           Stack[0xc]:4   file_path
; int              Stack[0x10]:4   file_size
; time_t           Stack[0x14]:4   file_timestamp
; Local Variables:
; char[512]        Stack[-0xb04]:512  local_b04
; char[512]        Stack[-0x904]:512  local_904
; char[260]        Stack[-0x704]:260  local_704
; char[260]        Stack[-0x600]:260  local_600
; char[256]        Stack[-0x4fc]:256  local_4fc
; char             Stack[-0x3fc]:1  local_3fc
; undefined1[255]  Stack[-0x3fb]:255  local_3fb
; char[256]        Stack[-0x2fc]:256  local_2fc
; char[256]        Stack[-0x1fc]:256  local_1fc
; char[200]        Stack[-0xfc]:200  local_fc
; char[32]         Stack[-0x34]:32  local_34
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004a35b0 at 004a372e
;
; Referenced Globals:
;   TerminatedCString s_anon_006239af
;   TerminatedCString s_m_d_y_I_M_S_p_006239bb
;   TerminatedCString s_s_s_d_s_s_006239d0
;   char[512] g_Field1ParseBuffer
;   undefined4 g_Field1ParseBuffer+4
;   char[512] g_Field2ParseBuffer
;   undefined4 g_Field2ParseBuffer+4
;   char[260] g_FilePathBuffer
;   undefined4 g_FilePathBuffer+4
;
; Called Functions:
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_stdio.c_sscanf_FUN_0060013c
;   crt_string.c__stricmp_FUN_005fe7f0
;   crt_string.c_memmove_FUN_005fe5e0
;   crt_string.c_strupr_FUN_00600770
;   crt_time.c__localtime_FUN_00600288
;   crt_time.c__strftime_FUN_006002d4
;   engine_dosio.c_makePath_FUN_00481f50
;   engine_dosio.c_splitPath_FUN_00481f20
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3360
        ;   Label: shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_004a3360
    PUSH ESI                            ; 004a3361
    PUSH EDI                            ; 004a3362
    PUSH EBP                            ; 004a3363
    SUB ESP,0xaf4                       ; 004a3364
    MOV EBP,dword ptr [ESP + 0xb08]     ; 004a336a
    MOV EBP,dword ptr [EBP]             ; 004a3371
    XOR EDX,EDX                         ; 004a3374
    DEC EBP                             ; 004a3376
    MOV dword ptr [ESP + 0xaf0],EDX     ; 004a3377
    TEST EBP,EBP                        ; 004a337e
    JL 0x004a3441                       ; 004a3380
        ;   XREF to: 004a3441 (CONDITIONAL_JUMP)  ; LAB_004a3441
    MOV EDX,dword ptr [ESP + 0xaf0]     ; 004a3386
        ;   Label: LAB_004a3386
    ADD EDX,EBP                         ; 004a338d
    MOV EAX,EDX                         ; 004a338f
    SAR EDX,0x1f                        ; 004a3391
    SUB EAX,EDX                         ; 004a3394
    SAR EAX,0x1                         ; 004a3396
    MOV ECX,0x80                        ; 004a3398
    LEA EDI,[ESP + 0x200]               ; 004a339d
    MOV ESI,0x678d88                    ; 004a33a4 | g_Field1ParseBuffer
    MOV EBX,EAX                         ; 004a33a9
    MOV EAX,ESP                         ; 004a33ab
    MOVSD.REP ES:EDI,ESI                ; 004a33ad | g_Field1ParseBuffer | g_Field1ParseBuffer+4
    PUSH EAX                            ; 004a33af
    LEA EAX,[ESP + 0x204]               ; 004a33b0
    MOV ECX,0x80                        ; 004a33b7
    PUSH EAX                            ; 004a33bc
    LEA EDI,[ESP + 0x8]                 ; 004a33bd
    MOV ESI,0x678f88                    ; 004a33c1 | g_Field2ParseBuffer
    PUSH 0x6239af                       ; 004a33c6 | = "%[^\t]\t%[^\t]"
    MOVSD.REP ES:EDI,ESI                ; 004a33cb | g_Field2ParseBuffer | g_Field2ParseBuffer+4
    PUSH EBX                            ; 004a33cd
    MOV ESI,dword ptr [ESP + 0xb18]     ; 004a33ce
    PUSH ESI                            ; 004a33d5
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 004a33d6
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 004a33db
    PUSH EAX                            ; 004a33de
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004a33df
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x10                        ; 004a33e4
    MOV EAX,ESP                         ; 004a33e7
    PUSH EAX                            ; 004a33e9
    LEA EAX,[ESP + 0x204]               ; 004a33ea
    PUSH EAX                            ; 004a33f1
    PUSH 0x0                            ; 004a33f2
    PUSH 0x0                            ; 004a33f4
    LEA EAX,[ESP + 0x514]               ; 004a33f6
    PUSH EAX                            ; 004a33fd
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 004a33fe
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004a3403
    LEA EAX,[ESP + 0x504]               ; 004a3406
    PUSH EAX                            ; 004a340d
    MOV EDI,dword ptr [ESP + 0xb10]     ; 004a340e
    PUSH EDI                            ; 004a3415
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004a3416
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a341b
    TEST EAX,EAX                        ; 004a341e
    JZ 0x004a3595                       ; 004a3420
        ;   XREF to: 004a3595 (CONDITIONAL_JUMP)  ; LAB_004a3595
    JL 0x004a35a0                       ; 004a3426
        ;   XREF to: 004a35a0 (CONDITIONAL_JUMP)  ; LAB_004a35a0
    INC EBX                             ; 004a342c
    MOV dword ptr [ESP + 0xaf0],EBX     ; 004a342d
    CMP EBP,dword ptr [ESP + 0xaf0]     ; 004a3434
        ;   Label: LAB_004a3434
    JGE 0x004a3386                      ; 004a343b
        ;   XREF to: 004a3386 (CONDITIONAL_JUMP)  ; LAB_004a3386
    LEA EAX,[ESP + 0xb18]               ; 004a3441
        ;   Label: LAB_004a3441
    PUSH EAX                            ; 004a3448
    CALL crt_time.c__localtime_FUN_00600288 ; 004a3449
        ;   XREF to: 00600288 (UNCONDITIONAL_CALL)  ; _tm * crt_time.c__localtime_FUN_00600288(time_t * timer)
    ADD ESP,0x4                         ; 004a344e
    PUSH EAX                            ; 004a3451
    PUSH 0x6239bb                       ; 004a3452 | = "%m/%d/%y %I:%M:%S %p"
    PUSH 0x1e                           ; 004a3457
    LEA EAX,[ESP + 0xadc]               ; 004a3459
    PUSH EAX                            ; 004a3460
    LEA EDI,[ESP + 0x410]               ; 004a3461
    MOV ESI,0x679188                    ; 004a3468 | g_FilePathBuffer
    CALL crt_time.c__strftime_FUN_006002d4 ; 004a346d
        ;   XREF to: 006002d4 (UNCONDITIONAL_CALL)  ; uint crt_time.c__strftime_FUN_006002d4(char * dest_buffer, uint buffer_size, char * format_string, _tm * time_ptr)
    ADD ESP,0x10                        ; 004a3472
    MOV ECX,0x41                        ; 004a3475
    MOV EBX,dword ptr [ESP + 0xb10]     ; 004a347a
    MOVSD.REP ES:EDI,ESI                ; 004a3481 | g_FilePathBuffer | g_FilePathBuffer+4
    TEST EBX,EBX                        ; 004a3483
    JZ 0x004a34c8                       ; 004a3485
        ;   XREF to: 004a34c8 (CONDITIONAL_JUMP)  ; LAB_004a34c8
    LEA EAX,[ESP + 0x608]               ; 004a3487
    PUSH EAX                            ; 004a348e
    LEA EAX,[ESP + 0x90c]               ; 004a348f
    PUSH EAX                            ; 004a3496
    PUSH 0x0                            ; 004a3497
    PUSH 0x0                            ; 004a3499
    PUSH EBX                            ; 004a349b
    CALL engine_dosio.c_splitPath_FUN_00481f20 ; 004a349c
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004a34a1
    LEA EAX,[ESP + 0x608]               ; 004a34a4
    PUSH EAX                            ; 004a34ab
    LEA EAX,[ESP + 0x90c]               ; 004a34ac
    PUSH EAX                            ; 004a34b3
    PUSH 0x0                            ; 004a34b4
    PUSH 0x0                            ; 004a34b6
    LEA EAX,[ESP + 0x410]               ; 004a34b8
    PUSH EAX                            ; 004a34bf
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 004a34c0
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004a34c5
    LEA EAX,[ESP + 0x708]               ; 004a34c8
        ;   Label: LAB_004a34c8
    PUSH EAX                            ; 004a34cf
    LEA EAX,[ESP + 0x80c]               ; 004a34d0
    PUSH EAX                            ; 004a34d7
    PUSH 0x0                            ; 004a34d8
    PUSH 0x0                            ; 004a34da
    MOV EDI,dword ptr [ESP + 0xb1c]     ; 004a34dc
    PUSH EDI                            ; 004a34e3
    CALL engine_dosio.c_splitPath_FUN_00481f20 ; 004a34e4
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004a34e9
    CMP byte ptr [ESP + 0x708],0x2e     ; 004a34ec
    JNZ 0x004a3520                      ; 004a34f4
        ;   XREF to: 004a3520 (CONDITIONAL_JUMP)  ; LAB_004a3520
    LEA EDI,[ESP + 0x708]               ; 004a34f6
    SUB ECX,ECX                         ; 004a34fd
    DEC ECX                             ; 004a34ff
    XOR EAX,EAX                         ; 004a3500
    SCASB.REPNE ES:EDI                  ; 004a3502
    NOT ECX                             ; 004a3504
    DEC ECX                             ; 004a3506
    PUSH ECX                            ; 004a3507
    LEA EAX,[ESP + 0x70d]               ; 004a3508
    PUSH EAX                            ; 004a350f
    LEA EAX,[ESP + 0x710]               ; 004a3510
    PUSH EAX                            ; 004a3517
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004a3518
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004a351d
    LEA EAX,[ESP + 0x400]               ; 004a3520
        ;   Label: LAB_004a3520
    PUSH EAX                            ; 004a3527
    LEA EAX,[ESP + 0xad4]               ; 004a3528
    PUSH EAX                            ; 004a352f
    MOV EBP,dword ptr [ESP + 0xb1c]     ; 004a3530
    PUSH EBP                            ; 004a3537
    LEA EAX,[ESP + 0x714]               ; 004a3538
    PUSH EAX                            ; 004a353f
    LEA EAX,[ESP + 0x818]               ; 004a3540
    PUSH EAX                            ; 004a3547
    PUSH 0x6239d0                       ; 004a3548 | = "%s\t%s\t%d\t%s\t%s"
    LEA EAX,[ESP + 0xa20]               ; 004a354d
    PUSH EAX                            ; 004a3554
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004a3555
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x1c                        ; 004a355a
    LEA EAX,[ESP + 0xa08]               ; 004a355d
    PUSH EAX                            ; 004a3564
    CALL crt_string.c_strupr_FUN_00600770 ; 004a3565
        ;   XREF to: 00600770 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strupr_FUN_00600770(char * string)
    ADD ESP,0x4                         ; 004a356a
    LEA EAX,[ESP + 0xa08]               ; 004a356d
    PUSH EAX                            ; 004a3574
    MOV EAX,dword ptr [ESP + 0xaf4]     ; 004a3575
    MOV EDX,dword ptr [ESP + 0xb0c]     ; 004a357c
    PUSH EAX                            ; 004a3583
    MOV ECX,dword ptr [ESP + 0xb10]     ; 004a3584
    MOV EDX,dword ptr [EDX + 0xc]       ; 004a358b
    PUSH ECX                            ; 004a358e
    CALL dword ptr [EDX + 0xc]          ; 004a358f
    ADD ESP,0xc                         ; 004a3592
    ADD ESP,0xaf4                       ; 004a3595
        ;   Label: LAB_004a3595
    POP EBP                             ; 004a359b
    POP EDI                             ; 004a359c
    POP ESI                             ; 004a359d
    POP EBX                             ; 004a359e
    RET                                 ; 004a359f
    LEA EBP,[EBX + -0x1]                ; 004a35a0
        ;   Label: LAB_004a35a0
    JMP 0x004a3434                      ; 004a35a3
        ;   XREF to: 004a3434 (UNCONDITIONAL_JUMP)  ; LAB_004a3434

