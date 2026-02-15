; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_optimizedMemcpy_FUN_00431528(void *dest_buffer,void *src_buffer,int byte_count)
;
; Parameters:
; void *           Stack[0x4]:4   dest_buffer
; void *           Stack[0x8]:4   src_buffer
; int              Stack[0xc]:4   byte_count
;
; XREF[1]:
;   cockpit_ckptutil.c_getOptimizedMemcpyFunction_FUN_00431780 at 0043178f
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00431528
        ;   Label: cockpit_ckptutil.c_optimizedMemcpy_FUN_00431528
    MOV EBP,ESP                         ; 00431529
    PUSH ESI                            ; 0043152b
    PUSH EDI                            ; 0043152c
    PUSH EAX                            ; 0043152d
    PUSH EBX                            ; 0043152e
    PUSH ECX                            ; 0043152f
    PUSH EDX                            ; 00431530
    MOV EDI,dword ptr [EBP + 0x8]       ; 00431531
    MOV EDX,dword ptr [EBP + 0x10]      ; 00431534
    MOV EBX,EDI                         ; 00431537
    MOV ESI,dword ptr [EBP + 0xc]       ; 00431539
    AND EBX,0x1f                        ; 0043153c
    JZ 0x00431573                       ; 0043153f
        ;   XREF to: 00431573 (CONDITIONAL_JUMP)  ; LAB_00431573
    MOV EAX,0x20                        ; 00431541
    NOP                                 ; 00431546
    SUB EAX,EBX                         ; 00431547
    NOP                                 ; 00431549
    CMP EDX,EAX                         ; 0043154a
    JGE 0x00431551                      ; 0043154c
        ;   XREF to: 00431551 (CONDITIONAL_JUMP)  ; LAB_00431551
    MOV EAX,EDX                         ; 0043154e
    NOP                                 ; 00431550
    SUB EDX,EAX                         ; 00431551
        ;   Label: LAB_00431551
    MOV ECX,EAX                         ; 00431553
    AND ECX,0x3                         ; 00431555
    JZ 0x0043155e                       ; 00431558
        ;   XREF to: 0043155e (CONDITIONAL_JUMP)  ; LAB_0043155e
    SUB EAX,ECX                         ; 0043155a
    MOVSB.REP ES:EDI,ESI                ; 0043155c
    SHR EAX,0x2                         ; 0043155e
        ;   Label: LAB_0043155e
    JZ 0x00431567                       ; 00431561
        ;   XREF to: 00431567 (CONDITIONAL_JUMP)  ; LAB_00431567
    MOV ECX,EAX                         ; 00431563
    MOVSD.REP ES:EDI,ESI                ; 00431565
    CMP EDX,0x0                         ; 00431567
        ;   Label: LAB_00431567
    JZ 0x0043161a                       ; 0043156a
        ;   XREF to: 0043161a (CONDITIONAL_JUMP)  ; LAB_0043161a
    MOV dword ptr [EBP + 0xc],ESI       ; 00431570
    MOV ECX,EDX                         ; 00431573
        ;   Label: LAB_00431573
    SUB ECX,0x100                       ; 00431575
    JS 0x004315b2                       ; 0043157b
        ;   XREF to: 004315b2 (CONDITIONAL_JUMP)  ; LAB_004315b2
    MOV EAX,EAX                         ; 0043157d
    MOV AL,byte ptr [ESI]               ; 00431580
        ;   Label: LAB_00431580
    MOV BL,byte ptr [ESI + 0x24]        ; 00431582
    MOV AL,byte ptr [ESI + 0x40]        ; 00431585
    MOV BL,byte ptr [ESI + 0x64]        ; 00431588
    MOV AL,byte ptr [ESI + 0x80]        ; 0043158b
    MOV BL,byte ptr [ESI + 0xa4]        ; 00431591
    MOV AL,byte ptr [ESI + 0xc0]        ; 00431597
    MOV BL,byte ptr [ESI + 0xe4]        ; 0043159d
    ADD ESI,0x100                       ; 004315a3
    NOP                                 ; 004315a9
    SUB ECX,0x100                       ; 004315aa
    JG 0x00431580                       ; 004315b0
        ;   XREF to: 00431580 (CONDITIONAL_JUMP)  ; LAB_00431580
    MOV ESI,dword ptr [EBP + 0xc]       ; 004315b2
        ;   Label: LAB_004315b2
    MOV ECX,EDX                         ; 004315b5
    SHR ECX,0x5                         ; 004315b7
    JZ 0x004315fe                       ; 004315ba
        ;   XREF to: 004315fe (CONDITIONAL_JUMP)  ; LAB_004315fe
    SHL ECX,0x5                         ; 004315bc
    NOP                                 ; 004315bf
    MOV EAX,ECX                         ; 004315c0
    SUB ECX,0x20                        ; 004315c2
    MOV EAX,EAX                         ; 004315c5
    MOV EAX,EAX                         ; 004315c8
    MOV EAX,EAX                         ; 004315cb
    MOV EAX,EAX                         ; 004315ce
    FILD qword ptr [ECX + ESI*0x1]      ; 004315d0
        ;   Label: LAB_004315d0
    FILD qword ptr [ECX + ESI*0x1 + 0x8] ; 004315d3
    FILD qword ptr [ECX + ESI*0x1 + 0x10] ; 004315d7
    FXCH ST2                            ; 004315db
    FILD qword ptr [ECX + ESI*0x1 + 0x18] ; 004315dd
    FXCH ST2                            ; 004315e1
    FISTP qword ptr [ECX + EDI*0x1 + 0x8] ; 004315e3
    FISTP qword ptr [ECX + EDI*0x1]     ; 004315e7
    FISTP qword ptr [ECX + EDI*0x1 + 0x18] ; 004315ea
    FISTP qword ptr [ECX + EDI*0x1 + 0x10] ; 004315ee
    SUB ECX,0x20                        ; 004315f2
    JGE 0x004315d0                      ; 004315f5
        ;   XREF to: 004315d0 (CONDITIONAL_JUMP)  ; LAB_004315d0
    SUB EDX,EAX                         ; 004315f7
    ADD ESI,EAX                         ; 004315f9
    ADD EDI,EAX                         ; 004315fb
    NOP                                 ; 004315fd
    CMP EDX,0x0                         ; 004315fe
        ;   Label: LAB_004315fe
    JZ 0x0043161a                       ; 00431601
        ;   XREF to: 0043161a (CONDITIONAL_JUMP)  ; LAB_0043161a
    MOV EBX,EDX                         ; 00431603
    NOP                                 ; 00431605
    SHR EBX,0x2                         ; 00431606
    JZ 0x00431616                       ; 00431609
        ;   XREF to: 00431616 (CONDITIONAL_JUMP)  ; LAB_00431616
    MOV ECX,EBX                         ; 0043160b
    MOVSD.REP ES:EDI,ESI                ; 0043160d
    SHL EBX,0x2                         ; 0043160f
    NOP                                 ; 00431612
    SUB EDX,EBX                         ; 00431613
    NOP                                 ; 00431615
    MOV ECX,EDX                         ; 00431616
        ;   Label: LAB_00431616
    MOVSB.REP ES:EDI,ESI                ; 00431618
    POP EDX                             ; 0043161a
        ;   Label: LAB_0043161a
    POP ECX                             ; 0043161b
    POP EBX                             ; 0043161c
    POP EAX                             ; 0043161d
    POP EDI                             ; 0043161e
    POP ESI                             ; 0043161f
    LEAVE                               ; 00431620
    RET                                 ; 00431621

