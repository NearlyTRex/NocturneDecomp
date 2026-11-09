; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_optimizedMemcpy_FUN_00437038(void *dest_buffer,void *src_buffer,int byte_count)
;
; Parameters:
; void *           Stack[0x4]:4   dest_buffer
; void *           Stack[0x8]:4   src_buffer
; int              Stack[0xc]:4   byte_count
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00437038
        ;   Label: cockpit_ckptutil.c_optimizedMemcpy_FUN_00437038
    MOV EBP,ESP                         ; 00437039
    PUSH ESI                            ; 0043703b
    PUSH EDI                            ; 0043703c
    PUSH EAX                            ; 0043703d
    PUSH EBX                            ; 0043703e
    PUSH ECX                            ; 0043703f
    PUSH EDX                            ; 00437040
    MOV EDI,dword ptr [EBP + 0x8]       ; 00437041
    MOV EDX,dword ptr [EBP + 0x10]      ; 00437044
    MOV EBX,EDI                         ; 00437047
    MOV ESI,dword ptr [EBP + 0xc]       ; 00437049
    AND EBX,0x1f                        ; 0043704c
    JZ 0x00437083                       ; 0043704f
        ;   XREF to: 00437083 (CONDITIONAL_JUMP)  ; LAB_00437083
    MOV EAX,0x20                        ; 00437051
    NOP                                 ; 00437056
    SUB EAX,EBX                         ; 00437057
    NOP                                 ; 00437059
    CMP EDX,EAX                         ; 0043705a
    JGE 0x00437061                      ; 0043705c
        ;   XREF to: 00437061 (CONDITIONAL_JUMP)  ; LAB_00437061
    MOV EAX,EDX                         ; 0043705e
    NOP                                 ; 00437060
    SUB EDX,EAX                         ; 00437061
        ;   Label: LAB_00437061
    MOV ECX,EAX                         ; 00437063
    AND ECX,0x3                         ; 00437065
    JZ 0x0043706e                       ; 00437068
        ;   XREF to: 0043706e (CONDITIONAL_JUMP)  ; LAB_0043706e
    SUB EAX,ECX                         ; 0043706a
    MOVSB.REP ES:EDI,ESI                ; 0043706c
    SHR EAX,0x2                         ; 0043706e
        ;   Label: LAB_0043706e
    JZ 0x00437077                       ; 00437071
        ;   XREF to: 00437077 (CONDITIONAL_JUMP)  ; LAB_00437077
    MOV ECX,EAX                         ; 00437073
    MOVSD.REP ES:EDI,ESI                ; 00437075
    CMP EDX,0x0                         ; 00437077
        ;   Label: LAB_00437077
    JZ 0x0043712a                       ; 0043707a
        ;   XREF to: 0043712a (CONDITIONAL_JUMP)  ; LAB_0043712a
    MOV dword ptr [EBP + 0xc],ESI       ; 00437080
    MOV ECX,EDX                         ; 00437083
        ;   Label: LAB_00437083
    SUB ECX,0x100                       ; 00437085
    JS 0x004370c2                       ; 0043708b
        ;   XREF to: 004370c2 (CONDITIONAL_JUMP)  ; LAB_004370c2
    MOV EAX,EAX                         ; 0043708d
    MOV AL,byte ptr [ESI]               ; 00437090
        ;   Label: LAB_00437090
    MOV BL,byte ptr [ESI + 0x24]        ; 00437092
    MOV AL,byte ptr [ESI + 0x40]        ; 00437095
    MOV BL,byte ptr [ESI + 0x64]        ; 00437098
    MOV AL,byte ptr [ESI + 0x80]        ; 0043709b
    MOV BL,byte ptr [ESI + 0xa4]        ; 004370a1
    MOV AL,byte ptr [ESI + 0xc0]        ; 004370a7
    MOV BL,byte ptr [ESI + 0xe4]        ; 004370ad
    ADD ESI,0x100                       ; 004370b3
    NOP                                 ; 004370b9
    SUB ECX,0x100                       ; 004370ba
    JG 0x00437090                       ; 004370c0
        ;   XREF to: 00437090 (CONDITIONAL_JUMP)  ; LAB_00437090
    MOV ESI,dword ptr [EBP + 0xc]       ; 004370c2
        ;   Label: LAB_004370c2
    MOV ECX,EDX                         ; 004370c5
    SHR ECX,0x5                         ; 004370c7
    JZ 0x0043710e                       ; 004370ca
        ;   XREF to: 0043710e (CONDITIONAL_JUMP)  ; LAB_0043710e
    SHL ECX,0x5                         ; 004370cc
    NOP                                 ; 004370cf
    MOV EAX,ECX                         ; 004370d0
    SUB ECX,0x20                        ; 004370d2
    MOV EAX,EAX                         ; 004370d5
    MOV EAX,EAX                         ; 004370d8
    MOV EAX,EAX                         ; 004370db
    MOV EAX,EAX                         ; 004370de
    FILD qword ptr [ECX + ESI*0x1]      ; 004370e0
        ;   Label: LAB_004370e0
    FILD qword ptr [ECX + ESI*0x1 + 0x8] ; 004370e3
    FILD qword ptr [ECX + ESI*0x1 + 0x10] ; 004370e7
    FXCH ST2                            ; 004370eb
    FILD qword ptr [ECX + ESI*0x1 + 0x18] ; 004370ed
    FXCH ST2                            ; 004370f1
    FISTP qword ptr [ECX + EDI*0x1 + 0x8] ; 004370f3
    FISTP qword ptr [ECX + EDI*0x1]     ; 004370f7
    FISTP qword ptr [ECX + EDI*0x1 + 0x18] ; 004370fa
    FISTP qword ptr [ECX + EDI*0x1 + 0x10] ; 004370fe
    SUB ECX,0x20                        ; 00437102
    JGE 0x004370e0                      ; 00437105
        ;   XREF to: 004370e0 (CONDITIONAL_JUMP)  ; LAB_004370e0
    SUB EDX,EAX                         ; 00437107
    ADD ESI,EAX                         ; 00437109
    ADD EDI,EAX                         ; 0043710b
    NOP                                 ; 0043710d
    CMP EDX,0x0                         ; 0043710e
        ;   Label: LAB_0043710e
    JZ 0x0043712a                       ; 00437111
        ;   XREF to: 0043712a (CONDITIONAL_JUMP)  ; LAB_0043712a
    MOV EBX,EDX                         ; 00437113
    NOP                                 ; 00437115
    SHR EBX,0x2                         ; 00437116
    JZ 0x00437126                       ; 00437119
        ;   XREF to: 00437126 (CONDITIONAL_JUMP)  ; LAB_00437126
    MOV ECX,EBX                         ; 0043711b
    MOVSD.REP ES:EDI,ESI                ; 0043711d
    SHL EBX,0x2                         ; 0043711f
    NOP                                 ; 00437122
    SUB EDX,EBX                         ; 00437123
    NOP                                 ; 00437125
    MOV ECX,EDX                         ; 00437126
        ;   Label: LAB_00437126
    MOVSB.REP ES:EDI,ESI                ; 00437128
    POP EDX                             ; 0043712a
        ;   Label: LAB_0043712a
    POP ECX                             ; 0043712b
    POP EBX                             ; 0043712c
    POP EAX                             ; 0043712d
    POP EDI                             ; 0043712e
    POP ESI                             ; 0043712f
    LEAVE                               ; 00437130
    RET                                 ; 00437131

