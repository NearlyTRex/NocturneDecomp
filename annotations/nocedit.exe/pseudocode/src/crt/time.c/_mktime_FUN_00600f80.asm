; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; time_t __cdecl crt_time_c__mktime_FUN_00600f80(_tm *timeptr)
;
; Parameters:
; _tm *            Stack[0x4]:4   timeptr
;
; XREF[6]:
;   crt_time.c__time_FUN_006001f0 at 00600210
;   crt_time.c_dos_datetime_to_time_t_FUN_0060c1e0 at 0060c245
;   crt_time.c_filetime_to_time_t_FUN_00609da0 at 00609e59
;   crt_unknown.c_FUN_00607858 at 006078d9
;   engine_dosio.c_CFileFinder_convertStruct_FUN_00481dc0 at 00481f00
;   engine_fileio.cpp_CFileManager_removeAuditRecords_FUN_004bd190 at 004bd3ab
;
; Referenced Globals:
;   short g_DaysInMonth_Normal = 0x0
;   short g_DaysInMonth_Leap = 0x0
;   int g_TimezoneOffset = 0x4650
;   int g_DaylightSavingOffset = 0xe10
;
; Called Functions:
;   crt_time.c_determine_dst_status_FUN_006079b4
;   crt_time.c_gmtime_r_FUN_00607690
;   crt_time.c_is_leap_year_FUN_00607820
;   crt_time.c_tzset_FUN_006072f8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00600f80
        ;   Label: crt_time.c__mktime_FUN_00600f80
    PUSH ESI                            ; 00600f81
    PUSH EDI                            ; 00600f82
    PUSH EBP                            ; 00600f83
    SUB ESP,0x4                         ; 00600f84
    MOV EDI,dword ptr [ESP + 0x18]      ; 00600f87
    MOV EAX,dword ptr [EDI + 0x10]      ; 00600f8b
    MOV EDX,EAX                         ; 00600f8e
    MOV EBX,0xc                         ; 00600f90
    SAR EDX,0x1f                        ; 00600f95
    IDIV EBX                            ; 00600f98
    MOV EBP,0x665f38                    ; 00600f9a | g_DaysInMonth_Normal
    MOV ESI,dword ptr [EDI + 0x14]      ; 00600f9f
    MOV EBX,EDX                         ; 00600fa2
    CMP ESI,0xf4fb7ea1                  ; 00600fa4
    JGE 0x00600fb6                      ; 00600faa
        ;   XREF to: 00600fb6 (CONDITIONAL_JUMP)  ; LAB_00600fb6
    MOV EAX,0xffffffff                  ; 00600fac
    JMP 0x0060112b                      ; 00600fb1
        ;   XREF to: 0060112b (UNCONDITIONAL_JUMP)  ; LAB_0060112b
    MOV EAX,dword ptr [EDI + 0x10]      ; 00600fb6
        ;   Label: LAB_00600fb6
    MOV EDX,EAX                         ; 00600fb9
    MOV ECX,0xc                         ; 00600fbb
    SAR EDX,0x1f                        ; 00600fc0
    IDIV ECX                            ; 00600fc3
    ADD ESI,EAX                         ; 00600fc5
    TEST EBX,EBX                        ; 00600fc7
    JGE 0x00600fd3                      ; 00600fc9
        ;   XREF to: 00600fd3 (CONDITIONAL_JUMP)  ; LAB_00600fd3
    ADD EBX,0xc                         ; 00600fcb
        ;   Label: LAB_00600fcb
    DEC ESI                             ; 00600fce
    TEST EBX,EBX                        ; 00600fcf
    JL 0x00600fcb                       ; 00600fd1
        ;   XREF to: 00600fcb (CONDITIONAL_JUMP)  ; LAB_00600fcb
    TEST ESI,ESI                        ; 00600fd3
        ;   Label: LAB_00600fd3
    JGE 0x00600fe4                      ; 00600fd5
        ;   XREF to: 00600fe4 (CONDITIONAL_JUMP)  ; LAB_00600fe4
    MOV EAX,0xffffffff                  ; 00600fd7
    ADD ESP,0x4                         ; 00600fdc
    POP EBP                             ; 00600fdf
    POP EDI                             ; 00600fe0
    POP ESI                             ; 00600fe1
    POP EBX                             ; 00600fe2
    RET                                 ; 00600fe3
    LEA EAX,[ESI + 0x76c]               ; 00600fe4
        ;   Label: LAB_00600fe4
    PUSH EAX                            ; 00600fea
    CALL crt_time.c_is_leap_year_FUN_00607820 ; 00600feb
        ;   XREF to: 00607820 (UNCONDITIONAL_CALL)  ; int crt_time.c_is_leap_year_FUN_00607820(int year)
    ADD ESP,0x4                         ; 00600ff0
    TEST EAX,EAX                        ; 00600ff3
    JZ 0x00600ffc                       ; 00600ff5
        ;   XREF to: 00600ffc (CONDITIONAL_JUMP)  ; LAB_00600ffc
    MOV EBP,0x665f52                    ; 00600ff7 | g_DaysInMonth_Leap
    LEA EDX,[ESI + 0x3]                 ; 00600ffc
        ;   Label: LAB_00600ffc
    MOV EAX,EDX                         ; 00600fff
    SAR EDX,0x1f                        ; 00601001
    SHL EDX,0x2                         ; 00601004
    SBB EAX,EDX                         ; 00601007
    SAR EAX,0x2                         ; 00601009
    MOV ECX,EAX                         ; 0060100c
    LEA EAX,[ESI*0x8 + 0x0]             ; 0060100e
    ADD EAX,ESI                         ; 00601015
    SHL EAX,0x3                         ; 00601017
    ADD EAX,ESI                         ; 0060101a
    MOV EDX,EAX                         ; 0060101c
    SHL EAX,0x2                         ; 0060101e
    ADD EAX,EDX                         ; 00601021
    LEA EDX,[ESI + 0x63]                ; 00601023
    ADD EAX,ECX                         ; 00601026
    MOV ECX,0x64                        ; 00601028
    MOV dword ptr [ESP],EAX             ; 0060102d
    MOV EAX,EDX                         ; 00601030
    SAR EDX,0x1f                        ; 00601032
    IDIV ECX                            ; 00601035
    LEA EDX,[ESI + 0x12b]               ; 00601037
    MOV ECX,dword ptr [ESP]             ; 0060103d
    MOV ESI,0x190                       ; 00601040
    SUB ECX,EAX                         ; 00601045
    MOV EAX,EDX                         ; 00601047
    SAR EDX,0x1f                        ; 00601049
    IDIV ESI                            ; 0060104c
    ADD ECX,EAX                         ; 0060104e
    MOVSX EAX,word ptr [EBP + EBX*0x2]  ; 00601050 | g_DaysInMonth_Normal | g_DaysInMonth_Leap
    MOV EDX,dword ptr [EDI + 0xc]       ; 00601055
    ADD EAX,ECX                         ; 00601058
    ADD EAX,EDX                         ; 0060105a
    LEA ESI,[EAX + -0x1]                ; 0060105c
    MOV EDX,dword ptr [EDI + 0x8]       ; 0060105f
    MOV EAX,EDX                         ; 00601062
    SHL EAX,0x4                         ; 00601064
    SUB EAX,EDX                         ; 00601067
    SHL EAX,0x2                         ; 00601069
    MOV EDX,dword ptr [EDI + 0x4]       ; 0060106c
    ADD EDX,EAX                         ; 0060106f
    MOV EAX,EDX                         ; 00601071
    SHL EAX,0x4                         ; 00601073
    SUB EAX,EDX                         ; 00601076
    MOV EBX,dword ptr [EDI]             ; 00601078
    SHL EAX,0x2                         ; 0060107a
    ADD EBX,EAX                         ; 0060107d
    TEST EBX,EBX                        ; 0060107f
    JGE 0x0060108e                      ; 00601081
        ;   XREF to: 0060108e (CONDITIONAL_JUMP)  ; LAB_0060108e
    ADD EBX,0x15180                     ; 00601083
        ;   Label: LAB_00601083
    DEC ESI                             ; 00601089
    TEST EBX,EBX                        ; 0060108a
    JL 0x00601083                       ; 0060108c
        ;   XREF to: 00601083 (CONDITIONAL_JUMP)  ; LAB_00601083
    PUSH EDI                            ; 0060108e
        ;   Label: LAB_0060108e
    PUSH 0x0                            ; 0060108f
    PUSH EBX                            ; 00601091
    PUSH ESI                            ; 00601092
    CALL crt_time.c_gmtime_r_FUN_00607690 ; 00601093
        ;   XREF to: 00607690 (UNCONDITIONAL_CALL)  ; undefined crt_time.c_gmtime_r_FUN_00607690(time_t days, time_t seconds, time_t timezone_offset, undefined1 result)
    ADD ESP,0x10                        ; 00601098
    CALL crt_time.c_tzset_FUN_006072f8  ; 0060109b
        ;   XREF to: 006072f8 (UNCONDITIONAL_CALL)  ; void crt_time.c_tzset_FUN_006072f8()
    MOV ECX,dword ptr [0x006851c8]      ; 006010a0 | g_TimezoneOffset
    MOV EBP,dword ptr [EDI + 0x20]      ; 006010a6
    ADD EBX,ECX                         ; 006010a9
    TEST EBP,EBP                        ; 006010ab
    JGE 0x006010b8                      ; 006010ad
        ;   XREF to: 006010b8 (CONDITIONAL_JUMP)  ; LAB_006010b8
    PUSH EDI                            ; 006010af
    CALL crt_time.c_determine_dst_status_FUN_006079b4 ; 006010b0
        ;   XREF to: 006079b4 (UNCONDITIONAL_CALL)  ; int crt_time.c_determine_dst_status_FUN_006079b4(_tm * timeptr)
    ADD ESP,0x4                         ; 006010b5
    CMP dword ptr [EDI + 0x20],0x0      ; 006010b8
        ;   Label: LAB_006010b8
    JLE 0x006010c4                      ; 006010bc
        ;   XREF to: 006010c4 (CONDITIONAL_JUMP)  ; LAB_006010c4
    SUB EBX,dword ptr [0x006851d0]      ; 006010be | g_DaylightSavingOffset
    TEST EBX,EBX                        ; 006010c4
        ;   Label: LAB_006010c4
    JGE 0x006010d1                      ; 006010c6
        ;   XREF to: 006010d1 (CONDITIONAL_JUMP)  ; LAB_006010d1
    DEC ESI                             ; 006010c8
    ADD EBX,0x15180                     ; 006010c9
    JMP 0x006010c4                      ; 006010cf
        ;   XREF to: 006010c4 (UNCONDITIONAL_JUMP)  ; LAB_006010c4
    CMP ESI,0x63de                      ; 006010d1
        ;   Label: LAB_006010d1
    JGE 0x006010e6                      ; 006010d7
        ;   XREF to: 006010e6 (CONDITIONAL_JUMP)  ; LAB_006010e6
    MOV EAX,0xffffffff                  ; 006010d9
    ADD ESP,0x4                         ; 006010de
    POP EBP                             ; 006010e1
    POP EDI                             ; 006010e2
    POP ESI                             ; 006010e3
    POP EBX                             ; 006010e4
    RET                                 ; 006010e5
    JNZ 0x00601109                      ; 006010e6
        ;   XREF to: 00601109 (CONDITIONAL_JUMP)  ; LAB_00601109
        ;   Label: LAB_006010e6
    MOV ECX,dword ptr [0x006851c8]      ; 006010e8 | g_TimezoneOffset
    SUB EBX,0x15180                     ; 006010ee
    TEST ECX,ECX                        ; 006010f4
    JLE 0x006010fc                      ; 006010f6
        ;   XREF to: 006010fc (CONDITIONAL_JUMP)  ; LAB_006010fc
    TEST EBX,EBX                        ; 006010f8
    JGE 0x00601129                      ; 006010fa
        ;   XREF to: 00601129 (CONDITIONAL_JUMP)  ; LAB_00601129
    MOV EAX,0xffffffff                  ; 006010fc
        ;   Label: LAB_006010fc
    ADD ESP,0x4                         ; 00601101
    POP EBP                             ; 00601104
    POP EDI                             ; 00601105
    POP ESI                             ; 00601106
    POP EBX                             ; 00601107
    RET                                 ; 00601108
    LEA EAX,[ESI + 0xffff9c21]          ; 00601109
        ;   Label: LAB_00601109
    LEA ESI,[EAX*0x8 + 0x0]             ; 0060110f
    SUB ESI,EAX                         ; 00601116
    SHL ESI,0x5                         ; 00601118
    ADD ESI,EAX                         ; 0060111b
    SHL ESI,0x7                         ; 0060111d
    MOV EAX,ESI                         ; 00601120
    SHL ESI,0x2                         ; 00601122
    SUB ESI,EAX                         ; 00601125
    ADD EBX,ESI                         ; 00601127
    MOV EAX,EBX                         ; 00601129
        ;   Label: LAB_00601129
    ADD ESP,0x4                         ; 0060112b
        ;   Label: LAB_0060112b
    POP EBP                             ; 0060112e
    POP EDI                             ; 0060112f
    POP ESI                             ; 00601130
    POP EBX                             ; 00601131
    RET                                 ; 00601132

