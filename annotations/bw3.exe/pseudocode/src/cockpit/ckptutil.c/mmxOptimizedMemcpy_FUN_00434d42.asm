; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_mmxOptimizedMemcpy_FUN_00434d42(void *dest_buffer,void *src_buffer,int byte_count)
;
; Parameters:
; void *           Stack[0x4]:4   dest_buffer
; void *           Stack[0x8]:4   src_buffer
; int              Stack[0xc]:4   byte_count
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00434d42
        ;   Label: cockpit_ckptutil.c_mmxOptimizedMemcpy_FUN_00434d42
    MOV EBP,ESP                         ; 00434d43
    PUSH ESI                            ; 00434d45
    PUSH EDI                            ; 00434d46
    PUSH EAX                            ; 00434d47
    PUSH EBX                            ; 00434d48
    PUSH ECX                            ; 00434d49
    PUSH EDX                            ; 00434d4a
    MOV EDI,dword ptr [EBP + 0x8]       ; 00434d4b
    MOV EDX,dword ptr [EBP + 0x10]      ; 00434d4e
    MOV EBX,EDI                         ; 00434d51
    MOV ESI,dword ptr [EBP + 0xc]       ; 00434d53
    AND EBX,0x1f                        ; 00434d56
    JZ 0x00434d8d                       ; 00434d59
        ;   XREF to: 00434d8d (CONDITIONAL_JUMP)  ; LAB_00434d8d
    MOV EAX,0x20                        ; 00434d5b
    NOP                                 ; 00434d60
    SUB EAX,EBX                         ; 00434d61
    NOP                                 ; 00434d63
    CMP EDX,EAX                         ; 00434d64
    JGE 0x00434d6b                      ; 00434d66
        ;   XREF to: 00434d6b (CONDITIONAL_JUMP)  ; LAB_00434d6b
    MOV EAX,EDX                         ; 00434d68
    NOP                                 ; 00434d6a
    SUB EDX,EAX                         ; 00434d6b
        ;   Label: LAB_00434d6b
    MOV ECX,EAX                         ; 00434d6d
    AND ECX,0x3                         ; 00434d6f
    JZ 0x00434d78                       ; 00434d72
        ;   XREF to: 00434d78 (CONDITIONAL_JUMP)  ; LAB_00434d78
    SUB EAX,ECX                         ; 00434d74
    MOVSB.REP ES:EDI,ESI                ; 00434d76
    SHR EAX,0x2                         ; 00434d78
        ;   Label: LAB_00434d78
    JZ 0x00434d81                       ; 00434d7b
        ;   XREF to: 00434d81 (CONDITIONAL_JUMP)  ; LAB_00434d81
    MOV ECX,EAX                         ; 00434d7d
    MOVSD.REP ES:EDI,ESI                ; 00434d7f
    CMP EDX,0x0                         ; 00434d81
        ;   Label: LAB_00434d81
    JZ 0x00434e40                       ; 00434d84
        ;   XREF to: 00434e40 (CONDITIONAL_JUMP)  ; LAB_00434e40
    MOV dword ptr [EBP + 0xc],ESI       ; 00434d8a
    MOV ECX,EDX                         ; 00434d8d
        ;   Label: LAB_00434d8d
    SUB ECX,0x100                       ; 00434d8f
    JS 0x00434dd2                       ; 00434d95
        ;   XREF to: 00434dd2 (CONDITIONAL_JUMP)  ; LAB_00434dd2
    MOV EAX,EAX                         ; 00434d97
    MOV EAX,EAX                         ; 00434d9a
    MOV EAX,EAX                         ; 00434d9d
    MOV AL,byte ptr [ESI]               ; 00434da0
        ;   Label: LAB_00434da0
    MOV BL,byte ptr [ESI + 0x24]        ; 00434da2
    MOV AL,byte ptr [ESI + 0x40]        ; 00434da5
    MOV BL,byte ptr [ESI + 0x64]        ; 00434da8
    MOV AL,byte ptr [ESI + 0x80]        ; 00434dab
    MOV BL,byte ptr [ESI + 0xa4]        ; 00434db1
    MOV AL,byte ptr [ESI + 0xc0]        ; 00434db7
    MOV BL,byte ptr [ESI + 0xe4]        ; 00434dbd
    ADD ESI,0x100                       ; 00434dc3
    NOP                                 ; 00434dc9
    SUB ECX,0x100                       ; 00434dca
    JG 0x00434da0                       ; 00434dd0
        ;   XREF to: 00434da0 (CONDITIONAL_JUMP)  ; LAB_00434da0
    MOV ESI,dword ptr [EBP + 0xc]       ; 00434dd2
        ;   Label: LAB_00434dd2
    MOV ECX,EDX                         ; 00434dd5
    SHR ECX,0x5                         ; 00434dd7
    JZ 0x00434e24                       ; 00434dda
        ;   XREF to: 00434e24 (CONDITIONAL_JUMP)  ; LAB_00434e24
    SHL ECX,0x5                         ; 00434ddc
    NOP                                 ; 00434ddf
    MOV EAX,ECX                         ; 00434de0
    SUB ECX,0x20                        ; 00434de2
    MOV EAX,EAX                         ; 00434de5
    MOV EAX,EAX                         ; 00434de8
    MOV EAX,EAX                         ; 00434deb
    MOV EAX,EAX                         ; 00434dee
    MOVQ MM0,qword ptr [ECX + ESI*0x1]  ; 00434df0
        ;   Label: LAB_00434df0
    MOVQ MM1,qword ptr [ECX + ESI*0x1 + 0x8] ; 00434df4
    MOVQ MM2,qword ptr [ECX + ESI*0x1 + 0x10] ; 00434df9
    MOVQ MM3,qword ptr [ECX + ESI*0x1 + 0x18] ; 00434dfe
    MOVQ qword ptr [ECX + EDI*0x1],MM0  ; 00434e03
    MOVQ qword ptr [ECX + EDI*0x1 + 0x8],MM1 ; 00434e07
    MOVQ qword ptr [ECX + EDI*0x1 + 0x10],MM2 ; 00434e0c
    MOVQ qword ptr [ECX + EDI*0x1 + 0x18],MM3 ; 00434e11
    SUB ECX,0x20                        ; 00434e16
    JGE 0x00434df0                      ; 00434e19
        ;   XREF to: 00434df0 (CONDITIONAL_JUMP)  ; LAB_00434df0
    EMMS                                ; 00434e1b
    SUB EDX,EAX                         ; 00434e1d
    ADD ESI,EAX                         ; 00434e1f
    ADD EDI,EAX                         ; 00434e21
    NOP                                 ; 00434e23
    CMP EDX,0x0                         ; 00434e24
        ;   Label: LAB_00434e24
    JZ 0x00434e40                       ; 00434e27
        ;   XREF to: 00434e40 (CONDITIONAL_JUMP)  ; LAB_00434e40
    MOV EBX,EDX                         ; 00434e29
    NOP                                 ; 00434e2b
    SHR EBX,0x2                         ; 00434e2c
    JZ 0x00434e3c                       ; 00434e2f
        ;   XREF to: 00434e3c (CONDITIONAL_JUMP)  ; LAB_00434e3c
    MOV ECX,EBX                         ; 00434e31
    MOVSD.REP ES:EDI,ESI                ; 00434e33
    SHL EBX,0x2                         ; 00434e35
    NOP                                 ; 00434e38
    SUB EDX,EBX                         ; 00434e39
    NOP                                 ; 00434e3b
    MOV ECX,EDX                         ; 00434e3c
        ;   Label: LAB_00434e3c
    MOVSB.REP ES:EDI,ESI                ; 00434e3e
    POP EDX                             ; 00434e40
        ;   Label: LAB_00434e40
    POP ECX                             ; 00434e41
    POP EBX                             ; 00434e42
    POP EAX                             ; 00434e43
    POP EDI                             ; 00434e44
    POP ESI                             ; 00434e45
    LEAVE                               ; 00434e46
    RET                                 ; 00434e47

