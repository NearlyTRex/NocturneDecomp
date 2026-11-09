; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_optimizedMemcpy_FUN_0042c1d8(void *dest_buffer,void *src_buffer,int byte_count)
;
; Parameters:
; void *           Stack[0x4]:4   dest_buffer
; void *           Stack[0x8]:4   src_buffer
; int              Stack[0xc]:4   byte_count
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0042c1d8
        ;   Label: cockpit_ckptutil.c_optimizedMemcpy_FUN_0042c1d8
    MOV EBP,ESP                         ; 0042c1d9
    PUSH ESI                            ; 0042c1db
    PUSH EDI                            ; 0042c1dc
    PUSH EAX                            ; 0042c1dd
    PUSH EBX                            ; 0042c1de
    PUSH ECX                            ; 0042c1df
    PUSH EDX                            ; 0042c1e0
    MOV EDI,dword ptr [EBP + 0x8]       ; 0042c1e1
    MOV EDX,dword ptr [EBP + 0x10]      ; 0042c1e4
    MOV EBX,EDI                         ; 0042c1e7
    MOV ESI,dword ptr [EBP + 0xc]       ; 0042c1e9
    AND EBX,0x1f                        ; 0042c1ec
    JZ 0x0042c223                       ; 0042c1ef
        ;   XREF to: 0042c223 (CONDITIONAL_JUMP)  ; LAB_0042c223
    MOV EAX,0x20                        ; 0042c1f1
    NOP                                 ; 0042c1f6
    SUB EAX,EBX                         ; 0042c1f7
    NOP                                 ; 0042c1f9
    CMP EDX,EAX                         ; 0042c1fa
    JGE 0x0042c201                      ; 0042c1fc
        ;   XREF to: 0042c201 (CONDITIONAL_JUMP)  ; LAB_0042c201
    MOV EAX,EDX                         ; 0042c1fe
    NOP                                 ; 0042c200
    SUB EDX,EAX                         ; 0042c201
        ;   Label: LAB_0042c201
    MOV ECX,EAX                         ; 0042c203
    AND ECX,0x3                         ; 0042c205
    JZ 0x0042c20e                       ; 0042c208
        ;   XREF to: 0042c20e (CONDITIONAL_JUMP)  ; LAB_0042c20e
    SUB EAX,ECX                         ; 0042c20a
    MOVSB.REP ES:EDI,ESI                ; 0042c20c
    SHR EAX,0x2                         ; 0042c20e
        ;   Label: LAB_0042c20e
    JZ 0x0042c217                       ; 0042c211
        ;   XREF to: 0042c217 (CONDITIONAL_JUMP)  ; LAB_0042c217
    MOV ECX,EAX                         ; 0042c213
    MOVSD.REP ES:EDI,ESI                ; 0042c215
    CMP EDX,0x0                         ; 0042c217
        ;   Label: LAB_0042c217
    JZ 0x0042c2ca                       ; 0042c21a
        ;   XREF to: 0042c2ca (CONDITIONAL_JUMP)  ; LAB_0042c2ca
    MOV dword ptr [EBP + 0xc],ESI       ; 0042c220
    MOV ECX,EDX                         ; 0042c223
        ;   Label: LAB_0042c223
    SUB ECX,0x100                       ; 0042c225
    JS 0x0042c262                       ; 0042c22b
        ;   XREF to: 0042c262 (CONDITIONAL_JUMP)  ; LAB_0042c262
    MOV EAX,EAX                         ; 0042c22d
    MOV AL,byte ptr [ESI]               ; 0042c230
        ;   Label: LAB_0042c230
    MOV BL,byte ptr [ESI + 0x24]        ; 0042c232
    MOV AL,byte ptr [ESI + 0x40]        ; 0042c235
    MOV BL,byte ptr [ESI + 0x64]        ; 0042c238
    MOV AL,byte ptr [ESI + 0x80]        ; 0042c23b
    MOV BL,byte ptr [ESI + 0xa4]        ; 0042c241
    MOV AL,byte ptr [ESI + 0xc0]        ; 0042c247
    MOV BL,byte ptr [ESI + 0xe4]        ; 0042c24d
    ADD ESI,0x100                       ; 0042c253
    NOP                                 ; 0042c259
    SUB ECX,0x100                       ; 0042c25a
    JG 0x0042c230                       ; 0042c260
        ;   XREF to: 0042c230 (CONDITIONAL_JUMP)  ; LAB_0042c230
    MOV ESI,dword ptr [EBP + 0xc]       ; 0042c262
        ;   Label: LAB_0042c262
    MOV ECX,EDX                         ; 0042c265
    SHR ECX,0x5                         ; 0042c267
    JZ 0x0042c2ae                       ; 0042c26a
        ;   XREF to: 0042c2ae (CONDITIONAL_JUMP)  ; LAB_0042c2ae
    SHL ECX,0x5                         ; 0042c26c
    NOP                                 ; 0042c26f
    MOV EAX,ECX                         ; 0042c270
    SUB ECX,0x20                        ; 0042c272
    MOV EAX,EAX                         ; 0042c275
    MOV EAX,EAX                         ; 0042c278
    MOV EAX,EAX                         ; 0042c27b
    MOV EAX,EAX                         ; 0042c27e
    FILD qword ptr [ECX + ESI*0x1]      ; 0042c280
        ;   Label: LAB_0042c280
    FILD qword ptr [ECX + ESI*0x1 + 0x8] ; 0042c283
    FILD qword ptr [ECX + ESI*0x1 + 0x10] ; 0042c287
    FXCH ST2                            ; 0042c28b
    FILD qword ptr [ECX + ESI*0x1 + 0x18] ; 0042c28d
    FXCH ST2                            ; 0042c291
    FISTP qword ptr [ECX + EDI*0x1 + 0x8] ; 0042c293
    FISTP qword ptr [ECX + EDI*0x1]     ; 0042c297
    FISTP qword ptr [ECX + EDI*0x1 + 0x18] ; 0042c29a
    FISTP qword ptr [ECX + EDI*0x1 + 0x10] ; 0042c29e
    SUB ECX,0x20                        ; 0042c2a2
    JGE 0x0042c280                      ; 0042c2a5
        ;   XREF to: 0042c280 (CONDITIONAL_JUMP)  ; LAB_0042c280
    SUB EDX,EAX                         ; 0042c2a7
    ADD ESI,EAX                         ; 0042c2a9
    ADD EDI,EAX                         ; 0042c2ab
    NOP                                 ; 0042c2ad
    CMP EDX,0x0                         ; 0042c2ae
        ;   Label: LAB_0042c2ae
    JZ 0x0042c2ca                       ; 0042c2b1
        ;   XREF to: 0042c2ca (CONDITIONAL_JUMP)  ; LAB_0042c2ca
    MOV EBX,EDX                         ; 0042c2b3
    NOP                                 ; 0042c2b5
    SHR EBX,0x2                         ; 0042c2b6
    JZ 0x0042c2c6                       ; 0042c2b9
        ;   XREF to: 0042c2c6 (CONDITIONAL_JUMP)  ; LAB_0042c2c6
    MOV ECX,EBX                         ; 0042c2bb
    MOVSD.REP ES:EDI,ESI                ; 0042c2bd
    SHL EBX,0x2                         ; 0042c2bf
    NOP                                 ; 0042c2c2
    SUB EDX,EBX                         ; 0042c2c3
    NOP                                 ; 0042c2c5
    MOV ECX,EDX                         ; 0042c2c6
        ;   Label: LAB_0042c2c6
    MOVSB.REP ES:EDI,ESI                ; 0042c2c8
    POP EDX                             ; 0042c2ca
        ;   Label: LAB_0042c2ca
    POP ECX                             ; 0042c2cb
    POP EBX                             ; 0042c2cc
    POP EAX                             ; 0042c2cd
    POP EDI                             ; 0042c2ce
    POP ESI                             ; 0042c2cf
    LEAVE                               ; 0042c2d0
    RET                                 ; 0042c2d1

