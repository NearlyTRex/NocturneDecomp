; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; time_t __cdecl crt_time_c__mktime_FUN_00565fb0(_tm *timeptr)
;
; Parameters:
; _tm *            Stack[0x4]:4   timeptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   crt_time.c__time_FUN_00570a30 at 00570a50
;   crt_time.c_dos_datetime_to_time_t_FUN_005709b0 at 00570a15
;   crt_unknown.c_FUN_0056ced8 at 0056cf59
;   engine_dosio.cpp_CFileFinder_convertStruct_FUN_00456d90 at 00456ed0
;
; Referenced Globals:
;   undefined4 DAT_005a4a78
;   undefined4 DAT_005a4a92
;   undefined4 DAT_005c1f14
;   undefined4 DAT_005c1f1c
;
; Called Functions:
;   crt_time.c_determine_dst_status_FUN_0056d034
;   crt_time.c_gmtime_r_FUN_0056d340
;   crt_time.c_is_leap_year_FUN_0056cea0
;   crt_time.c_tzset_FUN_0056d608
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00565fb0
        ;   Label: crt_time.c__mktime_FUN_00565fb0
    PUSH ESI                            ; 00565fb1
    PUSH EDI                            ; 00565fb2
    PUSH EBP                            ; 00565fb3
    SUB ESP,0x4                         ; 00565fb4
    MOV EDI,dword ptr [ESP + 0x18]      ; 00565fb7
    MOV EAX,dword ptr [EDI + 0x10]      ; 00565fbb
    MOV EDX,EAX                         ; 00565fbe
    MOV EBX,0xc                         ; 00565fc0
    SAR EDX,0x1f                        ; 00565fc5
    IDIV EBX                            ; 00565fc8
    MOV EBP,0x5a4a78                    ; 00565fca | DAT_005a4a78
    MOV ESI,dword ptr [EDI + 0x14]      ; 00565fcf
    MOV EBX,EDX                         ; 00565fd2
    CMP ESI,0xf4fb7ea1                  ; 00565fd4
    JGE 0x00565fe6                      ; 00565fda
        ;   XREF to: 00565fe6 (CONDITIONAL_JUMP)  ; LAB_00565fe6
    MOV EAX,0xffffffff                  ; 00565fdc
    JMP 0x0056615b                      ; 00565fe1
        ;   XREF to: 0056615b (UNCONDITIONAL_JUMP)  ; LAB_0056615b
    MOV EAX,dword ptr [EDI + 0x10]      ; 00565fe6
        ;   Label: LAB_00565fe6
    MOV EDX,EAX                         ; 00565fe9
    MOV ECX,0xc                         ; 00565feb
    SAR EDX,0x1f                        ; 00565ff0
    IDIV ECX                            ; 00565ff3
    ADD ESI,EAX                         ; 00565ff5
    TEST EBX,EBX                        ; 00565ff7
    JGE 0x00566003                      ; 00565ff9
        ;   XREF to: 00566003 (CONDITIONAL_JUMP)  ; LAB_00566003
    ADD EBX,0xc                         ; 00565ffb
        ;   Label: LAB_00565ffb
    DEC ESI                             ; 00565ffe
    TEST EBX,EBX                        ; 00565fff
    JL 0x00565ffb                       ; 00566001
        ;   XREF to: 00565ffb (CONDITIONAL_JUMP)  ; LAB_00565ffb
    TEST ESI,ESI                        ; 00566003
        ;   Label: LAB_00566003
    JGE 0x00566014                      ; 00566005
        ;   XREF to: 00566014 (CONDITIONAL_JUMP)  ; LAB_00566014
    MOV EAX,0xffffffff                  ; 00566007
    ADD ESP,0x4                         ; 0056600c
    POP EBP                             ; 0056600f
    POP EDI                             ; 00566010
    POP ESI                             ; 00566011
    POP EBX                             ; 00566012
    RET                                 ; 00566013
    LEA EAX,[ESI + 0x76c]               ; 00566014
        ;   Label: LAB_00566014
    PUSH EAX                            ; 0056601a
    CALL crt_time.c_is_leap_year_FUN_0056cea0 ; 0056601b
        ;   XREF to: 0056cea0 (UNCONDITIONAL_CALL)  ; int crt_time.c_is_leap_year_FUN_0056cea0(int year)
    ADD ESP,0x4                         ; 00566020
    TEST EAX,EAX                        ; 00566023
    JZ 0x0056602c                       ; 00566025
        ;   XREF to: 0056602c (CONDITIONAL_JUMP)  ; LAB_0056602c
    MOV EBP,0x5a4a92                    ; 00566027 | DAT_005a4a92
    LEA EDX,[ESI + 0x3]                 ; 0056602c
        ;   Label: LAB_0056602c
    MOV EAX,EDX                         ; 0056602f
    SAR EDX,0x1f                        ; 00566031
    SHL EDX,0x2                         ; 00566034
    SBB EAX,EDX                         ; 00566037
    SAR EAX,0x2                         ; 00566039
    MOV ECX,EAX                         ; 0056603c
    LEA EAX,[ESI*0x8 + 0x0]             ; 0056603e
    ADD EAX,ESI                         ; 00566045
    SHL EAX,0x3                         ; 00566047
    ADD EAX,ESI                         ; 0056604a
    MOV EDX,EAX                         ; 0056604c
    SHL EAX,0x2                         ; 0056604e
    ADD EAX,EDX                         ; 00566051
    LEA EDX,[ESI + 0x63]                ; 00566053
    ADD EAX,ECX                         ; 00566056
    MOV ECX,0x64                        ; 00566058
    MOV dword ptr [ESP],EAX             ; 0056605d
    MOV EAX,EDX                         ; 00566060
    SAR EDX,0x1f                        ; 00566062
    IDIV ECX                            ; 00566065
    LEA EDX,[ESI + 0x12b]               ; 00566067
    MOV ECX,dword ptr [ESP]             ; 0056606d
    MOV ESI,0x190                       ; 00566070
    SUB ECX,EAX                         ; 00566075
    MOV EAX,EDX                         ; 00566077
    SAR EDX,0x1f                        ; 00566079
    IDIV ESI                            ; 0056607c
    ADD ECX,EAX                         ; 0056607e
    MOVSX EAX,word ptr [EBP + EBX*0x2]  ; 00566080 | DAT_005a4a92
    MOV EDX,dword ptr [EDI + 0xc]       ; 00566085
    ADD EAX,ECX                         ; 00566088
    ADD EAX,EDX                         ; 0056608a
    LEA ESI,[EAX + -0x1]                ; 0056608c
    MOV EDX,dword ptr [EDI + 0x8]       ; 0056608f
    MOV EAX,EDX                         ; 00566092
    SHL EAX,0x4                         ; 00566094
    SUB EAX,EDX                         ; 00566097
    SHL EAX,0x2                         ; 00566099
    MOV EDX,dword ptr [EDI + 0x4]       ; 0056609c
    ADD EDX,EAX                         ; 0056609f
    MOV EAX,EDX                         ; 005660a1
    SHL EAX,0x4                         ; 005660a3
    SUB EAX,EDX                         ; 005660a6
    MOV EBX,dword ptr [EDI]             ; 005660a8
    SHL EAX,0x2                         ; 005660aa
    ADD EBX,EAX                         ; 005660ad
    TEST EBX,EBX                        ; 005660af
    JGE 0x005660be                      ; 005660b1
        ;   XREF to: 005660be (CONDITIONAL_JUMP)  ; LAB_005660be
    ADD EBX,0x15180                     ; 005660b3
        ;   Label: LAB_005660b3
    DEC ESI                             ; 005660b9
    TEST EBX,EBX                        ; 005660ba
    JL 0x005660b3                       ; 005660bc
        ;   XREF to: 005660b3 (CONDITIONAL_JUMP)  ; LAB_005660b3
    PUSH EDI                            ; 005660be
        ;   Label: LAB_005660be
    PUSH 0x0                            ; 005660bf
    PUSH EBX                            ; 005660c1
    PUSH ESI                            ; 005660c2
    CALL crt_time.c_gmtime_r_FUN_0056d340 ; 005660c3
        ;   XREF to: 0056d340 (UNCONDITIONAL_CALL)  ; undefined1 crt_time.c_gmtime_r_FUN_0056d340(time_t days, time_t seconds, time_t timezone_offset, undefined1 result)
    ADD ESP,0x10                        ; 005660c8
    CALL crt_time.c_tzset_FUN_0056d608  ; 005660cb
        ;   XREF to: 0056d608 (UNCONDITIONAL_CALL)  ; void crt_time.c_tzset_FUN_0056d608()
    MOV ECX,dword ptr [0x005c1f14]      ; 005660d0 | DAT_005c1f14
    MOV EBP,dword ptr [EDI + 0x20]      ; 005660d6
    ADD EBX,ECX                         ; 005660d9
    TEST EBP,EBP                        ; 005660db
    JGE 0x005660e8                      ; 005660dd
        ;   XREF to: 005660e8 (CONDITIONAL_JUMP)  ; LAB_005660e8
    PUSH EDI                            ; 005660df
    CALL crt_time.c_determine_dst_status_FUN_0056d034 ; 005660e0
        ;   XREF to: 0056d034 (UNCONDITIONAL_CALL)  ; int crt_time.c_determine_dst_status_FUN_0056d034(_tm * timeptr)
    ADD ESP,0x4                         ; 005660e5
    CMP dword ptr [EDI + 0x20],0x0      ; 005660e8
        ;   Label: LAB_005660e8
    JLE 0x005660f4                      ; 005660ec
        ;   XREF to: 005660f4 (CONDITIONAL_JUMP)  ; LAB_005660f4
    SUB EBX,dword ptr [0x005c1f1c]      ; 005660ee | DAT_005c1f1c
    TEST EBX,EBX                        ; 005660f4
        ;   Label: LAB_005660f4
    JGE 0x00566101                      ; 005660f6
        ;   XREF to: 00566101 (CONDITIONAL_JUMP)  ; LAB_00566101
    DEC ESI                             ; 005660f8
    ADD EBX,0x15180                     ; 005660f9
    JMP 0x005660f4                      ; 005660ff
        ;   XREF to: 005660f4 (UNCONDITIONAL_JUMP)  ; LAB_005660f4
    CMP ESI,0x63de                      ; 00566101
        ;   Label: LAB_00566101
    JGE 0x00566116                      ; 00566107
        ;   XREF to: 00566116 (CONDITIONAL_JUMP)  ; LAB_00566116
    MOV EAX,0xffffffff                  ; 00566109
    ADD ESP,0x4                         ; 0056610e
    POP EBP                             ; 00566111
    POP EDI                             ; 00566112
    POP ESI                             ; 00566113
    POP EBX                             ; 00566114
    RET                                 ; 00566115
    JNZ 0x00566139                      ; 00566116
        ;   XREF to: 00566139 (CONDITIONAL_JUMP)  ; LAB_00566139
        ;   Label: LAB_00566116
    MOV ECX,dword ptr [0x005c1f14]      ; 00566118 | DAT_005c1f14
    SUB EBX,0x15180                     ; 0056611e
    TEST ECX,ECX                        ; 00566124
    JLE 0x0056612c                      ; 00566126
        ;   XREF to: 0056612c (CONDITIONAL_JUMP)  ; LAB_0056612c
    TEST EBX,EBX                        ; 00566128
    JGE 0x00566159                      ; 0056612a
        ;   XREF to: 00566159 (CONDITIONAL_JUMP)  ; LAB_00566159
    MOV EAX,0xffffffff                  ; 0056612c
        ;   Label: LAB_0056612c
    ADD ESP,0x4                         ; 00566131
    POP EBP                             ; 00566134
    POP EDI                             ; 00566135
    POP ESI                             ; 00566136
    POP EBX                             ; 00566137
    RET                                 ; 00566138
    LEA EAX,[ESI + 0xffff9c21]          ; 00566139
        ;   Label: LAB_00566139
    LEA ESI,[EAX*0x8 + 0x0]             ; 0056613f
    SUB ESI,EAX                         ; 00566146
    SHL ESI,0x5                         ; 00566148
    ADD ESI,EAX                         ; 0056614b
    SHL ESI,0x7                         ; 0056614d
    MOV EAX,ESI                         ; 00566150
    SHL ESI,0x2                         ; 00566152
    SUB ESI,EAX                         ; 00566155
    ADD EBX,ESI                         ; 00566157
    MOV EAX,EBX                         ; 00566159
        ;   Label: LAB_00566159
    ADD ESP,0x4                         ; 0056615b
        ;   Label: LAB_0056615b
    POP EBP                             ; 0056615e
    POP EDI                             ; 0056615f
    POP ESI                             ; 00566160
    POP EBX                             ; 00566161
    RET                                 ; 00566162

