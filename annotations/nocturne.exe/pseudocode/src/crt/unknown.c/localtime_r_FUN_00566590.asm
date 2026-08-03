; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; _tm * __cdecl crt_unknown_c_localtime_r_FUN_00566590(time_t *timer,_tm *result)
;
; Parameters:
; time_t *         Stack[0x4]:4   timer
; _tm *            Stack[0x8]:4   result
;
; XREF[1]:
;   crt_time.c__localtime_FUN_005665e8 at 005665f7
;
; Referenced Globals:
;   undefined4 DAT_005c1f14
;   undefined4 DAT_005c1f1c
;
; Called Functions:
;   crt_time.c_determine_dst_status_FUN_0056d034
;   crt_time.c_gmtime_r_FUN_0056d340
;   crt_time.c_tzset_FUN_0056d608
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566590
        ;   Label: crt_unknown.c_localtime_r_FUN_00566590
    PUSH ESI                            ; 00566591
    MOV EBX,dword ptr [ESP + 0x10]      ; 00566592
    CALL crt_time.c_tzset_FUN_0056d608  ; 00566596
        ;   XREF to: 0056d608 (UNCONDITIONAL_CALL)  ; void crt_time.c_tzset_FUN_0056d608()
    PUSH EBX                            ; 0056659b
    MOV EDX,dword ptr [0x005c1f14]      ; 0056659c | DAT_005c1f14
    MOV ESI,dword ptr [ESP + 0x10]      ; 005665a2
    PUSH EDX                            ; 005665a6
    MOV ESI,dword ptr [ESI]             ; 005665a7
    PUSH ESI                            ; 005665a9
    PUSH 0x63df                         ; 005665aa
    CALL crt_time.c_gmtime_r_FUN_0056d340 ; 005665af
        ;   XREF to: 0056d340 (UNCONDITIONAL_CALL)  ; undefined1 crt_time.c_gmtime_r_FUN_0056d340(time_t days, time_t seconds, time_t timezone_offset, undefined1 result)
    ADD ESP,0x10                        ; 005665b4
    PUSH EBX                            ; 005665b7
    CALL crt_time.c_determine_dst_status_FUN_0056d034 ; 005665b8
        ;   XREF to: 0056d034 (UNCONDITIONAL_CALL)  ; int crt_time.c_determine_dst_status_FUN_0056d034(_tm * timeptr)
    ADD ESP,0x4                         ; 005665bd
    TEST EAX,EAX                        ; 005665c0
    JZ 0x005665e1                       ; 005665c2
        ;   XREF to: 005665e1 (CONDITIONAL_JUMP)  ; LAB_005665e1
    MOV EAX,[0x005c1f14]                ; 005665c4 | DAT_005c1f14
    MOV ECX,dword ptr [0x005c1f1c]      ; 005665c9 | DAT_005c1f1c
    PUSH EBX                            ; 005665cf
    SUB EAX,ECX                         ; 005665d0
    PUSH EAX                            ; 005665d2
    PUSH ESI                            ; 005665d3
    PUSH 0x63df                         ; 005665d4
    CALL crt_time.c_gmtime_r_FUN_0056d340 ; 005665d9
        ;   XREF to: 0056d340 (UNCONDITIONAL_CALL)  ; undefined1 crt_time.c_gmtime_r_FUN_0056d340(time_t days, time_t seconds, time_t timezone_offset, undefined1 result)
    ADD ESP,0x10                        ; 005665de
    MOV EAX,EBX                         ; 005665e1
        ;   Label: LAB_005665e1
    POP ESI                             ; 005665e3
    POP EBX                             ; 005665e4
    RET                                 ; 005665e5

