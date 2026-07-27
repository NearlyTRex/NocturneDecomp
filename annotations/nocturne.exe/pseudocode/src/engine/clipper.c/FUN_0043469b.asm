; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_clipper_c_FUN_0043469b(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00766c70
;   undefined4 DAT_00766c74
;   undefined4 DAT_00766c78
;   undefined4 DAT_00766c78+1
;   undefined4 DAT_00766c7c
;   undefined4 DAT_00766ca4
;   undefined4 DAT_00766ca8
;   undefined4 DAT_00766cac
;   undefined4 DAT_00767b48
;
; *****************************************************************************

section .text

    XOR byte ptr [ECX + 0x30],BH        ; 0043469b
        ;   Label: engine_clipper.c_FUN_0043469b
    MOV ESI,EDX                         ; 004346a1
    ADD EDI,0x766c74                    ; 004346a3 | DAT_00766c74
    PUSH EDI                            ; 004346a9
    MOV EAX,ECX                         ; 004346aa
    SHR ECX,0x2                         ; 004346ac
    MOVSD.REP ES:EDI,ESI                ; 004346af | DAT_00766c74 | DAT_00766c78
    MOV CL,AL                           ; 004346b1
    AND CL,0x3                          ; 004346b3
    MOVSB.REP ES:EDI,ESI                ; 004346b6 | DAT_00766c78 | DAT_00766c78+1
    POP EDI                             ; 004346b8
    INC dword ptr [0x00766c70]          ; 004346b9 | DAT_00766c70
    MOV EDX,dword ptr [ESP + 0x14]      ; 004346bf
        ;   Label: caseD_3
    MOV ECX,dword ptr [0x00767b48]      ; 004346c3 | DAT_00767b48
    INC EDX                             ; 004346c9
    ADD EBX,0x30                        ; 004346ca
    MOV dword ptr [ESP + 0x14],EDX      ; 004346cd
    CMP EDX,ECX                         ; 004346d1
    JL 0x0043464b                       ; 004346d3
        ;   XREF to: 0043464b (CONDITIONAL_JUMP)  ; LAB_0043464b
    MOV EBX,dword ptr [0x00766c70]      ; 004346d9 | DAT_00766c70
        ;   Label: LAB_004346d9
    CMP EBX,0x3                         ; 004346df
    JL 0x00434714                       ; 004346e2
        ;   XREF to: 00434714 (CONDITIONAL_JUMP)  ; LAB_00434714
    MOV EAX,0x766c74                    ; 004346e4 | DAT_00766c74
    XOR EBP,EBP                         ; 004346e9
    TEST EBX,EBX                        ; 004346eb
    JLE 0x00434714                      ; 004346ed
        ;   XREF to: 00434714 (CONDITIONAL_JUMP)  ; LAB_00434714
    MOV ECX,dword ptr [EAX + 0x8]       ; 004346ef | DAT_00766c7c | DAT_00766cac
        ;   Label: LAB_004346ef
    TEST ECX,ECX                        ; 004346f2
    JNZ 0x0043491a                      ; 004346f4
        ;   XREF to: 0043491a (CONDITIONAL_JUMP)  ; LAB_0043491a
    MOV dword ptr [EAX + 0x8],0x1       ; 004346fa | DAT_00766c7c | DAT_00766cac
    MOV dword ptr [EAX],ECX             ; 00434701 | DAT_00766c74 | DAT_00766ca4
    MOV dword ptr [EAX + 0x4],ECX       ; 00434703 | DAT_00766c78 | DAT_00766ca8
    MOV EDX,dword ptr [0x00766c70]      ; 00434706 | DAT_00766c70
        ;   Label: LAB_00434706
    INC EBP                             ; 0043470c
    ADD EAX,0x30                        ; 0043470d
    CMP EBP,EDX                         ; 00434710
    JL 0x004346ef                       ; 00434712
        ;   XREF to: 004346ef (CONDITIONAL_JUMP)  ; LAB_004346ef
    XOR EAX,EAX                         ; 00434714
        ;   Label: LAB_00434714
    ADD ESP,0x1c                        ; 00434716
    POP EBP                             ; 00434719
    POP EDI                             ; 0043471a
    POP ESI                             ; 0043471b
    POP EBX                             ; 0043471c
    RET                                 ; 0043471d

