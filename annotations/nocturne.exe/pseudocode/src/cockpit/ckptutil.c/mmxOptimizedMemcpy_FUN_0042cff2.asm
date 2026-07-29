; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_mmxOptimizedMemcpy_FUN_0042cff2(void *dest_buffer,void *src_buffer,int byte_count)
;
; Parameters:
; void *           Stack[0x4]:4   dest_buffer
; void *           Stack[0x8]:4   src_buffer
; int              Stack[0xc]:4   byte_count
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0042cff2
        ;   Label: cockpit_ckptutil.c_mmxOptimizedMemcpy_FUN_0042cff2
    MOV EBP,ESP                         ; 0042cff3
    PUSH ESI                            ; 0042cff5
    PUSH EDI                            ; 0042cff6
    PUSH EAX                            ; 0042cff7
    PUSH EBX                            ; 0042cff8
    PUSH ECX                            ; 0042cff9
    PUSH EDX                            ; 0042cffa
    MOV EDI,dword ptr [EBP + 0x8]       ; 0042cffb
    MOV EDX,dword ptr [EBP + 0x10]      ; 0042cffe
    MOV EBX,EDI                         ; 0042d001
    MOV ESI,dword ptr [EBP + 0xc]       ; 0042d003
    AND EBX,0x1f                        ; 0042d006
    JZ 0x0042d03d                       ; 0042d009
        ;   XREF to: 0042d03d (CONDITIONAL_JUMP)  ; LAB_0042d03d
    MOV EAX,0x20                        ; 0042d00b
    NOP                                 ; 0042d010
    SUB EAX,EBX                         ; 0042d011
    NOP                                 ; 0042d013
    CMP EDX,EAX                         ; 0042d014
    JGE 0x0042d01b                      ; 0042d016
        ;   XREF to: 0042d01b (CONDITIONAL_JUMP)  ; LAB_0042d01b
    MOV EAX,EDX                         ; 0042d018
    NOP                                 ; 0042d01a
    SUB EDX,EAX                         ; 0042d01b
        ;   Label: LAB_0042d01b
    MOV ECX,EAX                         ; 0042d01d
    AND ECX,0x3                         ; 0042d01f
    JZ 0x0042d028                       ; 0042d022
        ;   XREF to: 0042d028 (CONDITIONAL_JUMP)  ; LAB_0042d028
    SUB EAX,ECX                         ; 0042d024
    MOVSB.REP ES:EDI,ESI                ; 0042d026
    SHR EAX,0x2                         ; 0042d028
        ;   Label: LAB_0042d028
    JZ 0x0042d031                       ; 0042d02b
        ;   XREF to: 0042d031 (CONDITIONAL_JUMP)  ; LAB_0042d031
    MOV ECX,EAX                         ; 0042d02d
    MOVSD.REP ES:EDI,ESI                ; 0042d02f
    CMP EDX,0x0                         ; 0042d031
        ;   Label: LAB_0042d031
    JZ 0x0042d0f0                       ; 0042d034
        ;   XREF to: 0042d0f0 (CONDITIONAL_JUMP)  ; LAB_0042d0f0
    MOV dword ptr [EBP + 0xc],ESI       ; 0042d03a
    MOV ECX,EDX                         ; 0042d03d
        ;   Label: LAB_0042d03d
    SUB ECX,0x100                       ; 0042d03f
    JS 0x0042d082                       ; 0042d045
        ;   XREF to: 0042d082 (CONDITIONAL_JUMP)  ; LAB_0042d082
    MOV EAX,EAX                         ; 0042d047
    MOV EAX,EAX                         ; 0042d04a
    MOV EAX,EAX                         ; 0042d04d
    MOV AL,byte ptr [ESI]               ; 0042d050
        ;   Label: LAB_0042d050
    MOV BL,byte ptr [ESI + 0x24]        ; 0042d052
    MOV AL,byte ptr [ESI + 0x40]        ; 0042d055
    MOV BL,byte ptr [ESI + 0x64]        ; 0042d058
    MOV AL,byte ptr [ESI + 0x80]        ; 0042d05b
    MOV BL,byte ptr [ESI + 0xa4]        ; 0042d061
    MOV AL,byte ptr [ESI + 0xc0]        ; 0042d067
    MOV BL,byte ptr [ESI + 0xe4]        ; 0042d06d
    ADD ESI,0x100                       ; 0042d073
    NOP                                 ; 0042d079
    SUB ECX,0x100                       ; 0042d07a
    JG 0x0042d050                       ; 0042d080
        ;   XREF to: 0042d050 (CONDITIONAL_JUMP)  ; LAB_0042d050
    MOV ESI,dword ptr [EBP + 0xc]       ; 0042d082
        ;   Label: LAB_0042d082
    MOV ECX,EDX                         ; 0042d085
    SHR ECX,0x5                         ; 0042d087
    JZ 0x0042d0d4                       ; 0042d08a
        ;   XREF to: 0042d0d4 (CONDITIONAL_JUMP)  ; LAB_0042d0d4
    SHL ECX,0x5                         ; 0042d08c
    NOP                                 ; 0042d08f
    MOV EAX,ECX                         ; 0042d090
    SUB ECX,0x20                        ; 0042d092
    MOV EAX,EAX                         ; 0042d095
    MOV EAX,EAX                         ; 0042d098
    MOV EAX,EAX                         ; 0042d09b
    MOV EAX,EAX                         ; 0042d09e
    MOVQ MM0,qword ptr [ECX + ESI*0x1]  ; 0042d0a0
        ;   Label: LAB_0042d0a0
    MOVQ MM1,qword ptr [ECX + ESI*0x1 + 0x8] ; 0042d0a4
    MOVQ MM2,qword ptr [ECX + ESI*0x1 + 0x10] ; 0042d0a9
    MOVQ MM3,qword ptr [ECX + ESI*0x1 + 0x18] ; 0042d0ae
    MOVQ qword ptr [ECX + EDI*0x1],MM0  ; 0042d0b3
    MOVQ qword ptr [ECX + EDI*0x1 + 0x8],MM1 ; 0042d0b7
    MOVQ qword ptr [ECX + EDI*0x1 + 0x10],MM2 ; 0042d0bc
    MOVQ qword ptr [ECX + EDI*0x1 + 0x18],MM3 ; 0042d0c1
    SUB ECX,0x20                        ; 0042d0c6
    JGE 0x0042d0a0                      ; 0042d0c9
        ;   XREF to: 0042d0a0 (CONDITIONAL_JUMP)  ; LAB_0042d0a0
    EMMS                                ; 0042d0cb
    SUB EDX,EAX                         ; 0042d0cd
    ADD ESI,EAX                         ; 0042d0cf
    ADD EDI,EAX                         ; 0042d0d1
    NOP                                 ; 0042d0d3
    CMP EDX,0x0                         ; 0042d0d4
        ;   Label: LAB_0042d0d4
    JZ 0x0042d0f0                       ; 0042d0d7
        ;   XREF to: 0042d0f0 (CONDITIONAL_JUMP)  ; LAB_0042d0f0
    MOV EBX,EDX                         ; 0042d0d9
    NOP                                 ; 0042d0db
    SHR EBX,0x2                         ; 0042d0dc
    JZ 0x0042d0ec                       ; 0042d0df
        ;   XREF to: 0042d0ec (CONDITIONAL_JUMP)  ; LAB_0042d0ec
    MOV ECX,EBX                         ; 0042d0e1
    MOVSD.REP ES:EDI,ESI                ; 0042d0e3
    SHL EBX,0x2                         ; 0042d0e5
    NOP                                 ; 0042d0e8
    SUB EDX,EBX                         ; 0042d0e9
    NOP                                 ; 0042d0eb
    MOV ECX,EDX                         ; 0042d0ec
        ;   Label: LAB_0042d0ec
    MOVSB.REP ES:EDI,ESI                ; 0042d0ee
    POP EDX                             ; 0042d0f0
        ;   Label: LAB_0042d0f0
    POP ECX                             ; 0042d0f1
    POP EBX                             ; 0042d0f2
    POP EAX                             ; 0042d0f3
    POP EDI                             ; 0042d0f4
    POP ESI                             ; 0042d0f5
    LEAVE                               ; 0042d0f6
    RET                                 ; 0042d0f7

