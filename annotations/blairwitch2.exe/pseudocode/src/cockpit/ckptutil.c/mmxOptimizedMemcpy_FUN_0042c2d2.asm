; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_mmxOptimizedMemcpy_FUN_0042c2d2(void *dest_buffer,void *src_buffer,int byte_count)
;
; Parameters:
; void *           Stack[0x4]:4   dest_buffer
; void *           Stack[0x8]:4   src_buffer
; int              Stack[0xc]:4   byte_count
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0042c2d2
        ;   Label: cockpit_ckptutil.c_mmxOptimizedMemcpy_FUN_0042c2d2
    MOV EBP,ESP                         ; 0042c2d3
    PUSH ESI                            ; 0042c2d5
    PUSH EDI                            ; 0042c2d6
    PUSH EAX                            ; 0042c2d7
    PUSH EBX                            ; 0042c2d8
    PUSH ECX                            ; 0042c2d9
    PUSH EDX                            ; 0042c2da
    MOV EDI,dword ptr [EBP + 0x8]       ; 0042c2db
    MOV EDX,dword ptr [EBP + 0x10]      ; 0042c2de
    MOV EBX,EDI                         ; 0042c2e1
    MOV ESI,dword ptr [EBP + 0xc]       ; 0042c2e3
    AND EBX,0x1f                        ; 0042c2e6
    JZ 0x0042c31d                       ; 0042c2e9
        ;   XREF to: 0042c31d (CONDITIONAL_JUMP)  ; LAB_0042c31d
    MOV EAX,0x20                        ; 0042c2eb
    NOP                                 ; 0042c2f0
    SUB EAX,EBX                         ; 0042c2f1
    NOP                                 ; 0042c2f3
    CMP EDX,EAX                         ; 0042c2f4
    JGE 0x0042c2fb                      ; 0042c2f6
        ;   XREF to: 0042c2fb (CONDITIONAL_JUMP)  ; LAB_0042c2fb
    MOV EAX,EDX                         ; 0042c2f8
    NOP                                 ; 0042c2fa
    SUB EDX,EAX                         ; 0042c2fb
        ;   Label: LAB_0042c2fb
    MOV ECX,EAX                         ; 0042c2fd
    AND ECX,0x3                         ; 0042c2ff
    JZ 0x0042c308                       ; 0042c302
        ;   XREF to: 0042c308 (CONDITIONAL_JUMP)  ; LAB_0042c308
    SUB EAX,ECX                         ; 0042c304
    MOVSB.REP ES:EDI,ESI                ; 0042c306
    SHR EAX,0x2                         ; 0042c308
        ;   Label: LAB_0042c308
    JZ 0x0042c311                       ; 0042c30b
        ;   XREF to: 0042c311 (CONDITIONAL_JUMP)  ; LAB_0042c311
    MOV ECX,EAX                         ; 0042c30d
    MOVSD.REP ES:EDI,ESI                ; 0042c30f
    CMP EDX,0x0                         ; 0042c311
        ;   Label: LAB_0042c311
    JZ 0x0042c3d0                       ; 0042c314
        ;   XREF to: 0042c3d0 (CONDITIONAL_JUMP)  ; LAB_0042c3d0
    MOV dword ptr [EBP + 0xc],ESI       ; 0042c31a
    MOV ECX,EDX                         ; 0042c31d
        ;   Label: LAB_0042c31d
    SUB ECX,0x100                       ; 0042c31f
    JS 0x0042c362                       ; 0042c325
        ;   XREF to: 0042c362 (CONDITIONAL_JUMP)  ; LAB_0042c362
    MOV EAX,EAX                         ; 0042c327
    MOV EAX,EAX                         ; 0042c32a
    MOV EAX,EAX                         ; 0042c32d
    MOV AL,byte ptr [ESI]               ; 0042c330
        ;   Label: LAB_0042c330
    MOV BL,byte ptr [ESI + 0x24]        ; 0042c332
    MOV AL,byte ptr [ESI + 0x40]        ; 0042c335
    MOV BL,byte ptr [ESI + 0x64]        ; 0042c338
    MOV AL,byte ptr [ESI + 0x80]        ; 0042c33b
    MOV BL,byte ptr [ESI + 0xa4]        ; 0042c341
    MOV AL,byte ptr [ESI + 0xc0]        ; 0042c347
    MOV BL,byte ptr [ESI + 0xe4]        ; 0042c34d
    ADD ESI,0x100                       ; 0042c353
    NOP                                 ; 0042c359
    SUB ECX,0x100                       ; 0042c35a
    JG 0x0042c330                       ; 0042c360
        ;   XREF to: 0042c330 (CONDITIONAL_JUMP)  ; LAB_0042c330
    MOV ESI,dword ptr [EBP + 0xc]       ; 0042c362
        ;   Label: LAB_0042c362
    MOV ECX,EDX                         ; 0042c365
    SHR ECX,0x5                         ; 0042c367
    JZ 0x0042c3b4                       ; 0042c36a
        ;   XREF to: 0042c3b4 (CONDITIONAL_JUMP)  ; LAB_0042c3b4
    SHL ECX,0x5                         ; 0042c36c
    NOP                                 ; 0042c36f
    MOV EAX,ECX                         ; 0042c370
    SUB ECX,0x20                        ; 0042c372
    MOV EAX,EAX                         ; 0042c375
    MOV EAX,EAX                         ; 0042c378
    MOV EAX,EAX                         ; 0042c37b
    MOV EAX,EAX                         ; 0042c37e
    MOVQ MM0,qword ptr [ECX + ESI*0x1]  ; 0042c380
        ;   Label: LAB_0042c380
    MOVQ MM1,qword ptr [ECX + ESI*0x1 + 0x8] ; 0042c384
    MOVQ MM2,qword ptr [ECX + ESI*0x1 + 0x10] ; 0042c389
    MOVQ MM3,qword ptr [ECX + ESI*0x1 + 0x18] ; 0042c38e
    MOVQ qword ptr [ECX + EDI*0x1],MM0  ; 0042c393
    MOVQ qword ptr [ECX + EDI*0x1 + 0x8],MM1 ; 0042c397
    MOVQ qword ptr [ECX + EDI*0x1 + 0x10],MM2 ; 0042c39c
    MOVQ qword ptr [ECX + EDI*0x1 + 0x18],MM3 ; 0042c3a1
    SUB ECX,0x20                        ; 0042c3a6
    JGE 0x0042c380                      ; 0042c3a9
        ;   XREF to: 0042c380 (CONDITIONAL_JUMP)  ; LAB_0042c380
    EMMS                                ; 0042c3ab
    SUB EDX,EAX                         ; 0042c3ad
    ADD ESI,EAX                         ; 0042c3af
    ADD EDI,EAX                         ; 0042c3b1
    NOP                                 ; 0042c3b3
    CMP EDX,0x0                         ; 0042c3b4
        ;   Label: LAB_0042c3b4
    JZ 0x0042c3d0                       ; 0042c3b7
        ;   XREF to: 0042c3d0 (CONDITIONAL_JUMP)  ; LAB_0042c3d0
    MOV EBX,EDX                         ; 0042c3b9
    NOP                                 ; 0042c3bb
    SHR EBX,0x2                         ; 0042c3bc
    JZ 0x0042c3cc                       ; 0042c3bf
        ;   XREF to: 0042c3cc (CONDITIONAL_JUMP)  ; LAB_0042c3cc
    MOV ECX,EBX                         ; 0042c3c1
    MOVSD.REP ES:EDI,ESI                ; 0042c3c3
    SHL EBX,0x2                         ; 0042c3c5
    NOP                                 ; 0042c3c8
    SUB EDX,EBX                         ; 0042c3c9
    NOP                                 ; 0042c3cb
    MOV ECX,EDX                         ; 0042c3cc
        ;   Label: LAB_0042c3cc
    MOVSB.REP ES:EDI,ESI                ; 0042c3ce
    POP EDX                             ; 0042c3d0
        ;   Label: LAB_0042c3d0
    POP ECX                             ; 0042c3d1
    POP EBX                             ; 0042c3d2
    POP EAX                             ; 0042c3d3
    POP EDI                             ; 0042c3d4
    POP ESI                             ; 0042c3d5
    LEAVE                               ; 0042c3d6
    RET                                 ; 0042c3d7

