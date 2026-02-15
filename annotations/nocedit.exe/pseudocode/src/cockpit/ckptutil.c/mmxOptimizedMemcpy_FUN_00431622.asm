; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_mmxOptimizedMemcpy_FUN_00431622(void *dest_buffer,void *src_buffer,int byte_count)
;
; Parameters:
; void *           Stack[0x4]:4   dest_buffer
; void *           Stack[0x8]:4   src_buffer
; int              Stack[0xc]:4   byte_count
;
; XREF[1]:
;   cockpit_ckptutil.c_getOptimizedMemcpyFunction_FUN_00431780 at 00431789
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00431622
        ;   Label: cockpit_ckptutil.c_mmxOptimizedMemcpy_FUN_00431622
    MOV EBP,ESP                         ; 00431623
    PUSH ESI                            ; 00431625
    PUSH EDI                            ; 00431626
    PUSH EAX                            ; 00431627
    PUSH EBX                            ; 00431628
    PUSH ECX                            ; 00431629
    PUSH EDX                            ; 0043162a
    MOV EDI,dword ptr [EBP + 0x8]       ; 0043162b
    MOV EDX,dword ptr [EBP + 0x10]      ; 0043162e
    MOV EBX,EDI                         ; 00431631
    MOV ESI,dword ptr [EBP + 0xc]       ; 00431633
    AND EBX,0x1f                        ; 00431636
    JZ 0x0043166d                       ; 00431639
        ;   XREF to: 0043166d (CONDITIONAL_JUMP)  ; LAB_0043166d
    MOV EAX,0x20                        ; 0043163b
    NOP                                 ; 00431640
    SUB EAX,EBX                         ; 00431641
    NOP                                 ; 00431643
    CMP EDX,EAX                         ; 00431644
    JGE 0x0043164b                      ; 00431646
        ;   XREF to: 0043164b (CONDITIONAL_JUMP)  ; LAB_0043164b
    MOV EAX,EDX                         ; 00431648
    NOP                                 ; 0043164a
    SUB EDX,EAX                         ; 0043164b
        ;   Label: LAB_0043164b
    MOV ECX,EAX                         ; 0043164d
    AND ECX,0x3                         ; 0043164f
    JZ 0x00431658                       ; 00431652
        ;   XREF to: 00431658 (CONDITIONAL_JUMP)  ; LAB_00431658
    SUB EAX,ECX                         ; 00431654
    MOVSB.REP ES:EDI,ESI                ; 00431656
    SHR EAX,0x2                         ; 00431658
        ;   Label: LAB_00431658
    JZ 0x00431661                       ; 0043165b
        ;   XREF to: 00431661 (CONDITIONAL_JUMP)  ; LAB_00431661
    MOV ECX,EAX                         ; 0043165d
    MOVSD.REP ES:EDI,ESI                ; 0043165f
    CMP EDX,0x0                         ; 00431661
        ;   Label: LAB_00431661
    JZ 0x00431720                       ; 00431664
        ;   XREF to: 00431720 (CONDITIONAL_JUMP)  ; LAB_00431720
    MOV dword ptr [EBP + 0xc],ESI       ; 0043166a
    MOV ECX,EDX                         ; 0043166d
        ;   Label: LAB_0043166d
    SUB ECX,0x100                       ; 0043166f
    JS 0x004316b2                       ; 00431675
        ;   XREF to: 004316b2 (CONDITIONAL_JUMP)  ; LAB_004316b2
    MOV EAX,EAX                         ; 00431677
    MOV EAX,EAX                         ; 0043167a
    MOV EAX,EAX                         ; 0043167d
    MOV AL,byte ptr [ESI]               ; 00431680
        ;   Label: LAB_00431680
    MOV BL,byte ptr [ESI + 0x24]        ; 00431682
    MOV AL,byte ptr [ESI + 0x40]        ; 00431685
    MOV BL,byte ptr [ESI + 0x64]        ; 00431688
    MOV AL,byte ptr [ESI + 0x80]        ; 0043168b
    MOV BL,byte ptr [ESI + 0xa4]        ; 00431691
    MOV AL,byte ptr [ESI + 0xc0]        ; 00431697
    MOV BL,byte ptr [ESI + 0xe4]        ; 0043169d
    ADD ESI,0x100                       ; 004316a3
    NOP                                 ; 004316a9
    SUB ECX,0x100                       ; 004316aa
    JG 0x00431680                       ; 004316b0
        ;   XREF to: 00431680 (CONDITIONAL_JUMP)  ; LAB_00431680
    MOV ESI,dword ptr [EBP + 0xc]       ; 004316b2
        ;   Label: LAB_004316b2
    MOV ECX,EDX                         ; 004316b5
    SHR ECX,0x5                         ; 004316b7
    JZ 0x00431704                       ; 004316ba
        ;   XREF to: 00431704 (CONDITIONAL_JUMP)  ; LAB_00431704
    SHL ECX,0x5                         ; 004316bc
    NOP                                 ; 004316bf
    MOV EAX,ECX                         ; 004316c0
    SUB ECX,0x20                        ; 004316c2
    MOV EAX,EAX                         ; 004316c5
    MOV EAX,EAX                         ; 004316c8
    MOV EAX,EAX                         ; 004316cb
    MOV EAX,EAX                         ; 004316ce
    MOVQ MM0,qword ptr [ECX + ESI*0x1]  ; 004316d0
        ;   Label: LAB_004316d0
    MOVQ MM1,qword ptr [ECX + ESI*0x1 + 0x8] ; 004316d4
    MOVQ MM2,qword ptr [ECX + ESI*0x1 + 0x10] ; 004316d9
    MOVQ MM3,qword ptr [ECX + ESI*0x1 + 0x18] ; 004316de
    MOVQ qword ptr [ECX + EDI*0x1],MM0  ; 004316e3
    MOVQ qword ptr [ECX + EDI*0x1 + 0x8],MM1 ; 004316e7
    MOVQ qword ptr [ECX + EDI*0x1 + 0x10],MM2 ; 004316ec
    MOVQ qword ptr [ECX + EDI*0x1 + 0x18],MM3 ; 004316f1
    SUB ECX,0x20                        ; 004316f6
    JGE 0x004316d0                      ; 004316f9
        ;   XREF to: 004316d0 (CONDITIONAL_JUMP)  ; LAB_004316d0
    EMMS                                ; 004316fb
    SUB EDX,EAX                         ; 004316fd
    ADD ESI,EAX                         ; 004316ff
    ADD EDI,EAX                         ; 00431701
    NOP                                 ; 00431703
    CMP EDX,0x0                         ; 00431704
        ;   Label: LAB_00431704
    JZ 0x00431720                       ; 00431707
        ;   XREF to: 00431720 (CONDITIONAL_JUMP)  ; LAB_00431720
    MOV EBX,EDX                         ; 00431709
    NOP                                 ; 0043170b
    SHR EBX,0x2                         ; 0043170c
    JZ 0x0043171c                       ; 0043170f
        ;   XREF to: 0043171c (CONDITIONAL_JUMP)  ; LAB_0043171c
    MOV ECX,EBX                         ; 00431711
    MOVSD.REP ES:EDI,ESI                ; 00431713
    SHL EBX,0x2                         ; 00431715
    NOP                                 ; 00431718
    SUB EDX,EBX                         ; 00431719
    NOP                                 ; 0043171b
    MOV ECX,EDX                         ; 0043171c
        ;   Label: LAB_0043171c
    MOVSB.REP ES:EDI,ESI                ; 0043171e
    POP EDX                             ; 00431720
        ;   Label: LAB_00431720
    POP ECX                             ; 00431721
    POP EBX                             ; 00431722
    POP EAX                             ; 00431723
    POP EDI                             ; 00431724
    POP ESI                             ; 00431725
    LEAVE                               ; 00431726
    RET                                 ; 00431727

