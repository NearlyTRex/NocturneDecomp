; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00459e90(int *param_1)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   FUN_004bf4b0 at 004bf517
;
; Referenced Globals:
;   TerminatedCString s_movscrn_raw_005bac92
;   undefined4 DAT_005baca2
;   undefined4 DAT_005f190c
;   undefined4 DAT_005fe9dc
;   undefined4 DAT_01d21620
;
; Called Functions:
;   FUN_00459850
;   FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00459e90
        ;   Label: FUN_00459e90
    PUSH EDI                            ; 00459e91
    SUB ESP,0xc                         ; 00459e92
    MOV EBX,dword ptr [ESP + 0x18]      ; 00459e95
    PUSH 0x5bac92                       ; 00459e99 | = "movscrn.raw"
    MOV EDX,dword ptr [0x005f190c]      ; 00459e9e | DAT_005f190c
    PUSH EDX                            ; 00459ea4
    CALL FUN_00459850                   ; 00459ea5
        ;   XREF to: 00459850 (UNCONDITIONAL_CALL)  ; undefined FUN_00459850()
    ADD ESP,0x8                         ; 00459eaa
    MOV EDI,EAX                         ; 00459ead
    TEST EAX,EAX                        ; 00459eaf
    JZ 0x00459f1b                       ; 00459eb1
        ;   XREF to: 00459f1b (CONDITIONAL_JUMP)  ; LAB_00459f1b
    CMP dword ptr [EBX + 0x4],0x0       ; 00459eb3
    JZ 0x00459f1b                       ; 00459eb7
        ;   XREF to: 00459f1b (CONDITIONAL_JUMP)  ; LAB_00459f1b
    PUSH ESI                            ; 00459eb9
    MOV ESI,dword ptr [0x005fe9dc]      ; 00459eba | DAT_005fe9dc
    FLD float ptr [ESI + 0x314]         ; 00459ec0 | DAT_01d21620
    FMUL double ptr [0x005baca2]        ; 00459ec6 | DAT_005baca2
    LEA EAX,[EBX + 0x8]                 ; 00459ecc
    FADD float ptr [EAX]                ; 00459ecf
    FSTP float ptr [EAX]                ; 00459ed1
    FILD dword ptr [EBX]                ; 00459ed3
    FCOMP float ptr [EBX + 0x8]         ; 00459ed5
    FNSTSW AX                           ; 00459ed8
    SAHF                                ; 00459eda
    JA 0x00459ee4                       ; 00459edb
        ;   XREF to: 00459ee4 (CONDITIONAL_JUMP)  ; LAB_00459ee4
    MOV dword ptr [EBX + 0x8],0x0       ; 00459edd
    FLD float ptr [EBX + 0x8]           ; 00459ee4
        ;   Label: LAB_00459ee4
    MOV ECX,0x2000                      ; 00459ee7
    CALL FUN_005a3120                   ; 00459eec
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    MOV EDI,dword ptr [EDI + 0x48]      ; 00459ef1
    FISTP dword ptr [ESP + 0xc]         ; 00459ef4
    MOV EAX,dword ptr [ESP + 0xc]       ; 00459ef8
    MOV ESI,dword ptr [EBX + 0x4]       ; 00459efc
    SHL EAX,0xd                         ; 00459eff
    ADD EDI,0x1000                      ; 00459f02
    ADD ESI,EAX                         ; 00459f08
    PUSH EDI                            ; 00459f0a
    MOV EAX,ECX                         ; 00459f0b
    SHR ECX,0x2                         ; 00459f0d
    MOVSD.REP ES:EDI,ESI                ; 00459f10
    MOV CL,AL                           ; 00459f12
    AND CL,0x3                          ; 00459f14
    MOVSB.REP ES:EDI,ESI                ; 00459f17
    POP EDI                             ; 00459f19
    POP ESI                             ; 00459f1a
    ADD ESP,0xc                         ; 00459f1b
        ;   Label: LAB_00459f1b
    POP EDI                             ; 00459f1e
    POP EBX                             ; 00459f1f
    RET                                 ; 00459f20

