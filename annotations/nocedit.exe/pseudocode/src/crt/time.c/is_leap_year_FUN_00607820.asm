; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int crt_time.c_is_leap_year_FUN_00607820(int year)
;
; Parameters:
; int              Stack[0x4]:4   year
;
; XREF[4]:
;   crt_time.c_determine_dst_status_FUN_006079b4 at 00607a14
;   crt_time.c_gmtime_r_FUN_00607690 at 00607748
;   crt_time.c_mktime_FUN_00600f80 at 00600feb
;   crt_unknown.c_FUN_00607858 at 00607879
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00607820
        ;   Label: crt_time.c_is_leap_year_FUN_00607820
    MOV EBX,dword ptr [ESP + 0x8]       ; 00607821
    TEST BL,0x3                         ; 00607825
    JNZ 0x00607854                      ; 00607828 | LAB_00607854
        ;   XREF to: 00607854 (CONDITIONAL_JUMP)
    MOV ECX,0x64                        ; 0060782a
    MOV EAX,EBX                         ; 0060782f
    XOR EDX,EDX                         ; 00607831
    DIV ECX                             ; 00607833
    TEST EDX,EDX                        ; 00607835
    JZ 0x00607840                       ; 00607837 | LAB_00607840
        ;   XREF to: 00607840 (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 00607839
    POP EBX                             ; 0060783e
    RET                                 ; 0060783f
    MOV ECX,0x190                       ; 00607840
        ;   Label: LAB_00607840
    MOV EAX,EBX                         ; 00607845
    DIV ECX                             ; 00607847
    TEST EDX,EDX                        ; 00607849
    JNZ 0x00607854                      ; 0060784b | LAB_00607854
        ;   XREF to: 00607854 (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 0060784d
    POP EBX                             ; 00607852
    RET                                 ; 00607853
    XOR EAX,EAX                         ; 00607854
        ;   Label: LAB_00607854
    POP EBX                             ; 00607856
    RET                                 ; 00607857

