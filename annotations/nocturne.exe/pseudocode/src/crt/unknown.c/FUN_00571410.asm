; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * crt_unknown_c_FUN_00571410(undefined4 *param_1,undefined4 *param_2,uint param_3)
;
;
; XREF[3]:
;   crt_unknown.c_FUN_0056e990 at 0056e9bd
;   crt_unknown.c_FUN_005740b0 at 00574122
;   crt_unknown.c_FUN_00574264 at 00574375
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00571410
        ;   Label: crt_unknown.c_FUN_00571410
    PUSH EDI                            ; 00571411
    MOV ECX,dword ptr [ESP + 0x14]      ; 00571412
    MOV ESI,dword ptr [ESP + 0x10]      ; 00571416
    MOV EDI,dword ptr [ESP + 0xc]       ; 0057141a
    PUSH ES                             ; 0057141e
    MOV AX,DS                           ; 0057141f
    MOV ES,AX                           ; 00571421
    PUSH EDI                            ; 00571423
    MOV EAX,ECX                         ; 00571424
    SHR ECX,0x2                         ; 00571426
    MOVSD.REP ES:EDI,ESI                ; 00571429
    MOV CL,AL                           ; 0057142b
    AND CL,0x3                          ; 0057142d
    MOVSB.REP ES:EDI,ESI                ; 00571430
    POP EDI                             ; 00571432
    POP ES                              ; 00571433
    MOV EAX,EDI                         ; 00571434
    POP EDI                             ; 00571436
    POP ESI                             ; 00571437
    RET                                 ; 00571438

