; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; time_t __cdecl crt_time_c__time_FUN_00570a30(time_t *time)
;
; Parameters:
; time_t *         Stack[0x4]:4   time
;
; XREF[1]:
;   crt_io.c__utime_FUN_0056cb60 at 0056cbcc
;
; Called Functions:
;   crt_time.c__mktime_FUN_00565fb0
;   crt_time.c_get_local_time_FUN_00572b00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570a30
        ;   Label: crt_time.c__time_FUN_00570a30
    SUB ESP,0x24                        ; 00570a31
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00570a34
    MOV EAX,ESP                         ; 00570a38
    PUSH EAX                            ; 00570a3a
    CALL crt_time.c_get_local_time_FUN_00572b00 ; 00570a3b
        ;   XREF to: 00572b00 (UNCONDITIONAL_CALL)  ; int crt_time.c_get_local_time_FUN_00572b00(_tm * tm_output)
    ADD ESP,0x4                         ; 00570a40
    CMP EAX,0x1f4                       ; 00570a43
    JL 0x00570a4d                       ; 00570a48
        ;   XREF to: 00570a4d (CONDITIONAL_JUMP)  ; LAB_00570a4d
    INC dword ptr [ESP]                 ; 00570a4a
    MOV EAX,ESP                         ; 00570a4d
        ;   Label: LAB_00570a4d
    PUSH EAX                            ; 00570a4f
    CALL crt_time.c__mktime_FUN_00565fb0 ; 00570a50
        ;   XREF to: 00565fb0 (UNCONDITIONAL_CALL)  ; time_t crt_time.c__mktime_FUN_00565fb0(_tm * timeptr)
    ADD ESP,0x4                         ; 00570a55
    MOV EDX,EAX                         ; 00570a58
    TEST EBX,EBX                        ; 00570a5a
    JZ 0x00570a60                       ; 00570a5c
        ;   XREF to: 00570a60 (CONDITIONAL_JUMP)  ; LAB_00570a60
    MOV dword ptr [EBX],EAX             ; 00570a5e
    MOV EAX,EDX                         ; 00570a60
        ;   Label: LAB_00570a60
    ADD ESP,0x24                        ; 00570a62
    POP EBX                             ; 00570a65
    RET                                 ; 00570a66

