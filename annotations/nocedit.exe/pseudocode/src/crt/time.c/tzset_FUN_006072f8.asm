; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_time.c_tzset_FUN_006072f8(void)
;
;
; XREF[3]:
;   crt_time.c_localtime_r_FUN_00600230 at 00600236
;   crt_time.c_mktime_FUN_00600f80 at 0060109b
;   crt_time.c_strftime_FUN_006002d4 at 006006a3
;
; Referenced Globals:
;   GetTimeZoneInformation* PTR_GetTimeZoneInformation_006115c4 = 00211fb0
;   TerminatedCString s_TZ_00659058
;   TerminatedCString s_EST_006850bc
;   undefined4 DAT_0068513c
;   TerminatedCString s_EDT_0068513d
;   undefined4 DAT_006851bd
;   int g_TimezoneOffset = 0x4650
;   int g_DaylightSavingActive = 0x1
;   int g_DaylightSavingOffset = 0xe10
;   byte g_TimezoneInitFlags = 0x1
;
; Called Functions:
;   crt_env.c_getenv_FUN_006013f0
;   crt_string.c_wcstombs_FUN_0060c0c0
;   crt_time.c_parse_tz_string_FUN_0060756c
;   GetTimeZoneInformation
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 006071fc
        ;   Label: LAB_006071fc
    PUSH ESI                            ; 006071fd
    SUB ESP,0xac                        ; 006071fe
    MOV AH,byte ptr [0x006851d4]        ; 00607204 | g_TimezoneInitFlags
    TEST AH,0x1                         ; 0060720a
    JZ 0x00607218                       ; 0060720d
        ;   XREF to: 00607218 (CONDITIONAL_JUMP)  ; LAB_00607218
    TEST AH,0x2                         ; 0060720f
    JNZ 0x006072ed                      ; 00607212
        ;   XREF to: 006072ed (CONDITIONAL_JUMP)  ; LAB_006072ed
    MOV DH,byte ptr [0x006851d4]        ; 00607218 | g_TimezoneInitFlags
        ;   Label: LAB_00607218
    MOV EAX,ESP                         ; 0060721e
    OR DH,0x2                           ; 00607220
    PUSH EAX                            ; 00607223
    MOV byte ptr [0x006851d4],DH        ; 00607224 | g_TimezoneInitFlags
    CALL dword ptr CS:[0x6115c4]        ; 0060722a | PTR_GetTimeZoneInformation_006115c4
    CMP EAX,0x1                         ; 00607231
    JC 0x006072ed                       ; 00607234
        ;   XREF to: 006072ed (CONDITIONAL_JUMP)  ; LAB_006072ed
    JBE 0x00607271                      ; 0060723a
        ;   XREF to: 00607271 (CONDITIONAL_JUMP)  ; LAB_00607271
    CMP EAX,0x2                         ; 0060723c
    JNZ 0x006072ed                      ; 0060723f
        ;   XREF to: 006072ed (CONDITIONAL_JUMP)  ; LAB_006072ed
    MOV dword ptr [0x006851cc],0x1      ; 00607245 | g_DaylightSavingActive
    MOV EDX,dword ptr [ESP + 0xa8]      ; 0060724f
    MOV EAX,EDX                         ; 00607256
    SHL EAX,0x4                         ; 00607258
    SUB EAX,EDX                         ; 0060725b
    SHL EAX,0x2                         ; 0060725d
    MOV EBX,EAX                         ; 00607260
    MOV [0x006851d0],EAX                ; 00607262 | g_DaylightSavingOffset
    NEG EBX                             ; 00607267
    MOV dword ptr [0x006851d0],EBX      ; 00607269 | g_DaylightSavingOffset
    JMP 0x00607279                      ; 0060726f
        ;   XREF to: 00607279 (UNCONDITIONAL_JUMP)  ; LAB_00607279
    XOR ECX,ECX                         ; 00607271
        ;   Label: LAB_00607271
    MOV dword ptr [0x006851cc],ECX      ; 00607273 | g_DaylightSavingActive
    MOV EDX,dword ptr [ESP + 0x54]      ; 00607279
        ;   Label: LAB_00607279
    MOV ESI,dword ptr [ESP]             ; 0060727d
    ADD EDX,ESI                         ; 00607280
    MOV EAX,EDX                         ; 00607282
    SHL EAX,0x4                         ; 00607284
    SUB EAX,EDX                         ; 00607287
    SHL EAX,0x2                         ; 00607289
    PUSH 0x80                           ; 0060728c
    MOV [0x006851c8],EAX                ; 00607291 | g_TimezoneOffset
    LEA EAX,[ESP + 0x8]                 ; 00607296
    PUSH EAX                            ; 0060729a
    PUSH 0x6850bc                       ; 0060729b | = "EST"
    CALL crt_string.c_wcstombs_FUN_0060c0c0 ; 006072a0
        ;   XREF to: 0060c0c0 (UNCONDITIONAL_CALL)  ; int crt_string.c_wcstombs_FUN_0060c0c0(char * dest, wchar_t * src, SIZE_T dest_size)
    ADD ESP,0xc                         ; 006072a5
    CMP EAX,-0x1                        ; 006072a8
    JNZ 0x006072b7                      ; 006072ab
        ;   XREF to: 006072b7 (CONDITIONAL_JUMP)  ; LAB_006072b7
    XOR BH,BH                           ; 006072ad
    MOV byte ptr [0x006850bc],BH        ; 006072af | = "EST"
    JMP 0x006072bf                      ; 006072b5
        ;   XREF to: 006072bf (UNCONDITIONAL_JUMP)  ; LAB_006072bf
    XOR BL,BL                           ; 006072b7
        ;   Label: LAB_006072b7
    MOV byte ptr [0x0068513c],BL        ; 006072b9 | DAT_0068513c
    PUSH 0x80                           ; 006072bf
        ;   Label: LAB_006072bf
    LEA EAX,[ESP + 0x5c]                ; 006072c4
    PUSH EAX                            ; 006072c8
    PUSH 0x68513d                       ; 006072c9 | = "EDT"
    CALL crt_string.c_wcstombs_FUN_0060c0c0 ; 006072ce
        ;   XREF to: 0060c0c0 (UNCONDITIONAL_CALL)  ; int crt_string.c_wcstombs_FUN_0060c0c0(char * dest, wchar_t * src, SIZE_T dest_size)
    ADD ESP,0xc                         ; 006072d3
    CMP EAX,-0x1                        ; 006072d6
    JNZ 0x006072e5                      ; 006072d9
        ;   XREF to: 006072e5 (CONDITIONAL_JUMP)  ; LAB_006072e5
    XOR CH,CH                           ; 006072db
    MOV byte ptr [0x0068513d],CH        ; 006072dd | = "EDT"
    JMP 0x006072ed                      ; 006072e3
        ;   XREF to: 006072ed (UNCONDITIONAL_JUMP)  ; LAB_006072ed
    XOR CL,CL                           ; 006072e5
        ;   Label: LAB_006072e5
    MOV byte ptr [0x006851bd],CL        ; 006072e7 | DAT_006851bd
    ADD ESP,0xac                        ; 006072ed
        ;   Label: LAB_006072ed
    POP ESI                             ; 006072f3
    POP EBX                             ; 006072f4
    RET                                 ; 006072f5
    PUSH 0x659058                       ; 006072f8 | = "TZ"
        ;   Label: crt_time.c_tzset_FUN_006072f8
    CALL crt_env.c_getenv_FUN_006013f0  ; 006072fd
        ;   XREF to: 006013f0 (UNCONDITIONAL_CALL)  ; char * crt_env.c_getenv_FUN_006013f0(char * name)
    ADD ESP,0x4                         ; 00607302
    TEST EAX,EAX                        ; 00607305
    JZ 0x006071fc                       ; 00607307
        ;   XREF to: 006071fc (CONDITIONAL_JUMP)  ; LAB_006071fc
    PUSH EAX                            ; 0060730d
    CALL crt_time.c_parse_tz_string_FUN_0060756c ; 0060730e
        ;   XREF to: 0060756c (UNCONDITIONAL_CALL)  ; void crt_time.c_parse_tz_string_FUN_0060756c(char * tz_string)
    ADD ESP,0x4                         ; 00607313
    RET                                 ; 00607316

