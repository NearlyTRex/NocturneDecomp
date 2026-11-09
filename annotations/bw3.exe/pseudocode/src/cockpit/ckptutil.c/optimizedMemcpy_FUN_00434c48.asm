; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_optimizedMemcpy_FUN_00434c48(void *dest_buffer,void *src_buffer,int byte_count)
;
; Parameters:
; void *           Stack[0x4]:4   dest_buffer
; void *           Stack[0x8]:4   src_buffer
; int              Stack[0xc]:4   byte_count
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00434c48
        ;   Label: cockpit_ckptutil.c_optimizedMemcpy_FUN_00434c48
    MOV EBP,ESP                         ; 00434c49
    PUSH ESI                            ; 00434c4b
    PUSH EDI                            ; 00434c4c
    PUSH EAX                            ; 00434c4d
    PUSH EBX                            ; 00434c4e
    PUSH ECX                            ; 00434c4f
    PUSH EDX                            ; 00434c50
    MOV EDI,dword ptr [EBP + 0x8]       ; 00434c51
    MOV EDX,dword ptr [EBP + 0x10]      ; 00434c54
    MOV EBX,EDI                         ; 00434c57
    MOV ESI,dword ptr [EBP + 0xc]       ; 00434c59
    AND EBX,0x1f                        ; 00434c5c
    JZ 0x00434c93                       ; 00434c5f
        ;   XREF to: 00434c93 (CONDITIONAL_JUMP)  ; LAB_00434c93
    MOV EAX,0x20                        ; 00434c61
    NOP                                 ; 00434c66
    SUB EAX,EBX                         ; 00434c67
    NOP                                 ; 00434c69
    CMP EDX,EAX                         ; 00434c6a
    JGE 0x00434c71                      ; 00434c6c
        ;   XREF to: 00434c71 (CONDITIONAL_JUMP)  ; LAB_00434c71
    MOV EAX,EDX                         ; 00434c6e
    NOP                                 ; 00434c70
    SUB EDX,EAX                         ; 00434c71
        ;   Label: LAB_00434c71
    MOV ECX,EAX                         ; 00434c73
    AND ECX,0x3                         ; 00434c75
    JZ 0x00434c7e                       ; 00434c78
        ;   XREF to: 00434c7e (CONDITIONAL_JUMP)  ; LAB_00434c7e
    SUB EAX,ECX                         ; 00434c7a
    MOVSB.REP ES:EDI,ESI                ; 00434c7c
    SHR EAX,0x2                         ; 00434c7e
        ;   Label: LAB_00434c7e
    JZ 0x00434c87                       ; 00434c81
        ;   XREF to: 00434c87 (CONDITIONAL_JUMP)  ; LAB_00434c87
    MOV ECX,EAX                         ; 00434c83
    MOVSD.REP ES:EDI,ESI                ; 00434c85
    CMP EDX,0x0                         ; 00434c87
        ;   Label: LAB_00434c87
    JZ 0x00434d3a                       ; 00434c8a
        ;   XREF to: 00434d3a (CONDITIONAL_JUMP)  ; LAB_00434d3a
    MOV dword ptr [EBP + 0xc],ESI       ; 00434c90
    MOV ECX,EDX                         ; 00434c93
        ;   Label: LAB_00434c93
    SUB ECX,0x100                       ; 00434c95
    JS 0x00434cd2                       ; 00434c9b
        ;   XREF to: 00434cd2 (CONDITIONAL_JUMP)  ; LAB_00434cd2
    MOV EAX,EAX                         ; 00434c9d
    MOV AL,byte ptr [ESI]               ; 00434ca0
        ;   Label: LAB_00434ca0
    MOV BL,byte ptr [ESI + 0x24]        ; 00434ca2
    MOV AL,byte ptr [ESI + 0x40]        ; 00434ca5
    MOV BL,byte ptr [ESI + 0x64]        ; 00434ca8
    MOV AL,byte ptr [ESI + 0x80]        ; 00434cab
    MOV BL,byte ptr [ESI + 0xa4]        ; 00434cb1
    MOV AL,byte ptr [ESI + 0xc0]        ; 00434cb7
    MOV BL,byte ptr [ESI + 0xe4]        ; 00434cbd
    ADD ESI,0x100                       ; 00434cc3
    NOP                                 ; 00434cc9
    SUB ECX,0x100                       ; 00434cca
    JG 0x00434ca0                       ; 00434cd0
        ;   XREF to: 00434ca0 (CONDITIONAL_JUMP)  ; LAB_00434ca0
    MOV ESI,dword ptr [EBP + 0xc]       ; 00434cd2
        ;   Label: LAB_00434cd2
    MOV ECX,EDX                         ; 00434cd5
    SHR ECX,0x5                         ; 00434cd7
    JZ 0x00434d1e                       ; 00434cda
        ;   XREF to: 00434d1e (CONDITIONAL_JUMP)  ; LAB_00434d1e
    SHL ECX,0x5                         ; 00434cdc
    NOP                                 ; 00434cdf
    MOV EAX,ECX                         ; 00434ce0
    SUB ECX,0x20                        ; 00434ce2
    MOV EAX,EAX                         ; 00434ce5
    MOV EAX,EAX                         ; 00434ce8
    MOV EAX,EAX                         ; 00434ceb
    MOV EAX,EAX                         ; 00434cee
    FILD qword ptr [ECX + ESI*0x1]      ; 00434cf0
        ;   Label: LAB_00434cf0
    FILD qword ptr [ECX + ESI*0x1 + 0x8] ; 00434cf3
    FILD qword ptr [ECX + ESI*0x1 + 0x10] ; 00434cf7
    FXCH ST2                            ; 00434cfb
    FILD qword ptr [ECX + ESI*0x1 + 0x18] ; 00434cfd
    FXCH ST2                            ; 00434d01
    FISTP qword ptr [ECX + EDI*0x1 + 0x8] ; 00434d03
    FISTP qword ptr [ECX + EDI*0x1]     ; 00434d07
    FISTP qword ptr [ECX + EDI*0x1 + 0x18] ; 00434d0a
    FISTP qword ptr [ECX + EDI*0x1 + 0x10] ; 00434d0e
    SUB ECX,0x20                        ; 00434d12
    JGE 0x00434cf0                      ; 00434d15
        ;   XREF to: 00434cf0 (CONDITIONAL_JUMP)  ; LAB_00434cf0
    SUB EDX,EAX                         ; 00434d17
    ADD ESI,EAX                         ; 00434d19
    ADD EDI,EAX                         ; 00434d1b
    NOP                                 ; 00434d1d
    CMP EDX,0x0                         ; 00434d1e
        ;   Label: LAB_00434d1e
    JZ 0x00434d3a                       ; 00434d21
        ;   XREF to: 00434d3a (CONDITIONAL_JUMP)  ; LAB_00434d3a
    MOV EBX,EDX                         ; 00434d23
    NOP                                 ; 00434d25
    SHR EBX,0x2                         ; 00434d26
    JZ 0x00434d36                       ; 00434d29
        ;   XREF to: 00434d36 (CONDITIONAL_JUMP)  ; LAB_00434d36
    MOV ECX,EBX                         ; 00434d2b
    MOVSD.REP ES:EDI,ESI                ; 00434d2d
    SHL EBX,0x2                         ; 00434d2f
    NOP                                 ; 00434d32
    SUB EDX,EBX                         ; 00434d33
    NOP                                 ; 00434d35
    MOV ECX,EDX                         ; 00434d36
        ;   Label: LAB_00434d36
    MOVSB.REP ES:EDI,ESI                ; 00434d38
    POP EDX                             ; 00434d3a
        ;   Label: LAB_00434d3a
    POP ECX                             ; 00434d3b
    POP EBX                             ; 00434d3c
    POP EAX                             ; 00434d3d
    POP EDI                             ; 00434d3e
    POP ESI                             ; 00434d3f
    LEAVE                               ; 00434d40
    RET                                 ; 00434d41

