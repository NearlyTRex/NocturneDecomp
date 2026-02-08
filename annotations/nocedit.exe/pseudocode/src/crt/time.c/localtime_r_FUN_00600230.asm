; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl _tm * __cdecl crt_time_c_localtime_r_FUN_00600230(time_t *timer,_tm *result)
;
; Parameters:
; time_t *         Stack[0x4]:4   timer
; _tm *            Stack[0x8]:4   result
;
; XREF[1]:
;   crt_time.c__localtime_FUN_00600288 at 00600297
;
; Referenced Globals:
;   int g_TimezoneOffset = 0x4650
;   int g_DaylightSavingOffset = 0xe10
;
; Called Functions:
;   crt_time.c_determine_dst_status_FUN_006079b4
;   crt_time.c_gmtime_r_FUN_00607690
;   crt_time.c_tzset_FUN_006072f8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00600230
        ;   Label: crt_time.c_localtime_r_FUN_00600230
    PUSH ESI                            ; 00600231
    MOV EBX,dword ptr [ESP + 0x10]      ; 00600232
    CALL crt_time.c_tzset_FUN_006072f8  ; 00600236
        ;   XREF to: 006072f8 (UNCONDITIONAL_CALL)  ; void crt_time.c_tzset_FUN_006072f8()
    PUSH EBX                            ; 0060023b
    MOV EDX,dword ptr [0x006851c8]      ; 0060023c | g_TimezoneOffset
    MOV ESI,dword ptr [ESP + 0x10]      ; 00600242
    PUSH EDX                            ; 00600246
    MOV ESI,dword ptr [ESI]             ; 00600247
    PUSH ESI                            ; 00600249
    PUSH 0x63df                         ; 0060024a
    CALL crt_time.c_gmtime_r_FUN_00607690 ; 0060024f
        ;   XREF to: 00607690 (UNCONDITIONAL_CALL)  ; undefined crt_time.c_gmtime_r_FUN_00607690(time_t days, time_t seconds, time_t timezone_offset, undefined1 result)
    ADD ESP,0x10                        ; 00600254
    PUSH EBX                            ; 00600257
    CALL crt_time.c_determine_dst_status_FUN_006079b4 ; 00600258
        ;   XREF to: 006079b4 (UNCONDITIONAL_CALL)  ; int crt_time.c_determine_dst_status_FUN_006079b4(_tm * timeptr)
    ADD ESP,0x4                         ; 0060025d
    TEST EAX,EAX                        ; 00600260
    JZ 0x00600281                       ; 00600262
        ;   XREF to: 00600281 (CONDITIONAL_JUMP)  ; LAB_00600281
    MOV EAX,[0x006851c8]                ; 00600264 | g_TimezoneOffset
    MOV ECX,dword ptr [0x006851d0]      ; 00600269 | g_DaylightSavingOffset
    PUSH EBX                            ; 0060026f
    SUB EAX,ECX                         ; 00600270
    PUSH EAX                            ; 00600272
    PUSH ESI                            ; 00600273
    PUSH 0x63df                         ; 00600274
    CALL crt_time.c_gmtime_r_FUN_00607690 ; 00600279
        ;   XREF to: 00607690 (UNCONDITIONAL_CALL)  ; undefined crt_time.c_gmtime_r_FUN_00607690(time_t days, time_t seconds, time_t timezone_offset, undefined1 result)
    ADD ESP,0x10                        ; 0060027e
    MOV EAX,EBX                         ; 00600281
        ;   Label: LAB_00600281
    POP ESI                             ; 00600283
    POP EBX                             ; 00600284
    RET                                 ; 00600285

