; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_copyScreenRegion_FUN_004363a0(undefined4 *param_1,int param_2,int param_3,int param_4,uint param_5,int param_6)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004363a0
        ;   Label: cockpit_ckptutil.c_copyScreenRegion_FUN_004363a0
    PUSH ESI                            ; 004363a1
    PUSH EBP                            ; 004363a2
    SUB ESP,0x4                         ; 004363a3
    MOV ECX,dword ptr [ESP + 0x20]      ; 004363a6
    MOV EBP,dword ptr [ESP + 0x24]      ; 004363aa
    MOV ESI,dword ptr [ESP + 0x28]      ; 004363ae
    MOV EBX,dword ptr [ESP + 0x14]      ; 004363b2
    TEST ESI,ESI                        ; 004363b6
    JLE 0x004363f8                      ; 004363b8
        ;   XREF to: 004363f8 (CONDITIONAL_JUMP)  ; LAB_004363f8
    PUSH EDI                            ; 004363ba
    MOV EDX,ECX                         ; 004363bb
    ADD ECX,ESI                         ; 004363bd
    MOV dword ptr [ESP + 0x4],ECX       ; 004363bf
    MOV ESI,dword ptr [0x005fba18]      ; 004363c3 | DAT_005fba18
        ;   Label: LAB_004363c3
    IMUL ESI,EDX                        ; 004363c9
    MOV ECX,dword ptr [ESP + 0x20]      ; 004363cc
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004363d0
    ADD ESI,ECX                         ; 004363d4
    MOV ECX,EBP                         ; 004363d6
    ADD ESI,EDI                         ; 004363d8
    MOV EDI,EBX                         ; 004363da
    INC EDX                             ; 004363dc
    PUSH EDI                            ; 004363dd
    MOV EAX,ECX                         ; 004363de
    SHR ECX,0x2                         ; 004363e0
    MOVSD.REP ES:EDI,ESI                ; 004363e3
    MOV CL,AL                           ; 004363e5
    AND CL,0x3                          ; 004363e7
    MOVSB.REP ES:EDI,ESI                ; 004363ea
    POP EDI                             ; 004363ec
    MOV EAX,dword ptr [ESP + 0x4]       ; 004363ed
    ADD EBX,EBP                         ; 004363f1
    CMP EDX,EAX                         ; 004363f3
    JL 0x004363c3                       ; 004363f5
        ;   XREF to: 004363c3 (CONDITIONAL_JUMP)  ; LAB_004363c3
    POP EDI                             ; 004363f7
    ADD ESP,0x4                         ; 004363f8
        ;   Label: LAB_004363f8
    POP EBP                             ; 004363fb
    POP ESI                             ; 004363fc
    POP EBX                             ; 004363fd
    RET                                 ; 004363fe

