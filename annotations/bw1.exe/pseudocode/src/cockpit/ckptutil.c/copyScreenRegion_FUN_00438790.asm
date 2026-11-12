; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_copyScreenRegion_FUN_00438790(undefined4 *param_1,int param_2,int param_3,int param_4,uint param_5,int param_6)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b498
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438790
        ;   Label: cockpit_ckptutil.c_copyScreenRegion_FUN_00438790
    PUSH ESI                            ; 00438791
    PUSH EBP                            ; 00438792
    SUB ESP,0x4                         ; 00438793
    MOV ECX,dword ptr [ESP + 0x20]      ; 00438796
    MOV EBP,dword ptr [ESP + 0x24]      ; 0043879a
    MOV ESI,dword ptr [ESP + 0x28]      ; 0043879e
    MOV EBX,dword ptr [ESP + 0x14]      ; 004387a2
    TEST ESI,ESI                        ; 004387a6
    JLE 0x004387e8                      ; 004387a8
        ;   XREF to: 004387e8 (CONDITIONAL_JUMP)  ; LAB_004387e8
    PUSH EDI                            ; 004387aa
    MOV EDX,ECX                         ; 004387ab
    ADD ECX,ESI                         ; 004387ad
    MOV dword ptr [ESP + 0x4],ECX       ; 004387af
    MOV ESI,dword ptr [0x0061b498]      ; 004387b3 | DAT_0061b498
        ;   Label: LAB_004387b3
    IMUL ESI,EDX                        ; 004387b9
    MOV ECX,dword ptr [ESP + 0x20]      ; 004387bc
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004387c0
    ADD ESI,ECX                         ; 004387c4
    MOV ECX,EBP                         ; 004387c6
    ADD ESI,EDI                         ; 004387c8
    MOV EDI,EBX                         ; 004387ca
    INC EDX                             ; 004387cc
    PUSH EDI                            ; 004387cd
    MOV EAX,ECX                         ; 004387ce
    SHR ECX,0x2                         ; 004387d0
    MOVSD.REP ES:EDI,ESI                ; 004387d3
    MOV CL,AL                           ; 004387d5
    AND CL,0x3                          ; 004387d7
    MOVSB.REP ES:EDI,ESI                ; 004387da
    POP EDI                             ; 004387dc
    MOV EAX,dword ptr [ESP + 0x4]       ; 004387dd
    ADD EBX,EBP                         ; 004387e1
    CMP EDX,EAX                         ; 004387e3
    JL 0x004387b3                       ; 004387e5
        ;   XREF to: 004387b3 (CONDITIONAL_JUMP)  ; LAB_004387b3
    POP EDI                             ; 004387e7
    ADD ESP,0x4                         ; 004387e8
        ;   Label: LAB_004387e8
    POP EBP                             ; 004387eb
    POP ESI                             ; 004387ec
    POP EBX                             ; 004387ed
    RET                                 ; 004387ee

