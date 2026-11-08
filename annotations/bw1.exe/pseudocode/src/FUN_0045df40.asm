; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045df40(int *param_1)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   FUN_004d8060 at 004d80c7
;
; Referenced Globals:
;   TerminatedCString s_movscrn_raw_005d8639
;   undefined4 DAT_005d8649
;   undefined4 DAT_00611358
;   undefined4 DAT_0061d95c
;   undefined4 DAT_01ccf624
;
; Called Functions:
;   FUN_0045d900
;   FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045df40
        ;   Label: FUN_0045df40
    PUSH EDI                            ; 0045df41
    SUB ESP,0xc                         ; 0045df42
    MOV EBX,dword ptr [ESP + 0x18]      ; 0045df45
    PUSH 0x5d8639                       ; 0045df49 | = "movscrn.raw"
    MOV EDX,dword ptr [0x00611358]      ; 0045df4e | DAT_00611358
    PUSH EDX                            ; 0045df54
    CALL FUN_0045d900                   ; 0045df55
        ;   XREF to: 0045d900 (UNCONDITIONAL_CALL)  ; undefined FUN_0045d900()
    ADD ESP,0x8                         ; 0045df5a
    MOV EDI,EAX                         ; 0045df5d
    TEST EAX,EAX                        ; 0045df5f
    JZ 0x0045dfcb                       ; 0045df61
        ;   XREF to: 0045dfcb (CONDITIONAL_JUMP)  ; LAB_0045dfcb
    CMP dword ptr [EBX + 0x4],0x0       ; 0045df63
    JZ 0x0045dfcb                       ; 0045df67
        ;   XREF to: 0045dfcb (CONDITIONAL_JUMP)  ; LAB_0045dfcb
    PUSH ESI                            ; 0045df69
    MOV ESI,dword ptr [0x0061d95c]      ; 0045df6a | DAT_0061d95c
    FLD float ptr [ESI + 0x294]         ; 0045df70 | DAT_01ccf624
    FMUL double ptr [0x005d8649]        ; 0045df76 | DAT_005d8649
    LEA EAX,[EBX + 0x8]                 ; 0045df7c
    FADD float ptr [EAX]                ; 0045df7f
    FSTP float ptr [EAX]                ; 0045df81
    FILD dword ptr [EBX]                ; 0045df83
    FCOMP float ptr [EBX + 0x8]         ; 0045df85
    FNSTSW AX                           ; 0045df88
    SAHF                                ; 0045df8a
    JA 0x0045df94                       ; 0045df8b
        ;   XREF to: 0045df94 (CONDITIONAL_JUMP)  ; LAB_0045df94
    MOV dword ptr [EBX + 0x8],0x0       ; 0045df8d
    FLD float ptr [EBX + 0x8]           ; 0045df94
        ;   Label: LAB_0045df94
    MOV ECX,0x2000                      ; 0045df97
    CALL FUN_005c03a0                   ; 0045df9c
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    MOV EDI,dword ptr [EDI + 0x48]      ; 0045dfa1
    FISTP dword ptr [ESP + 0xc]         ; 0045dfa4
    MOV EAX,dword ptr [ESP + 0xc]       ; 0045dfa8
    MOV ESI,dword ptr [EBX + 0x4]       ; 0045dfac
    SHL EAX,0xd                         ; 0045dfaf
    ADD EDI,0x1000                      ; 0045dfb2
    ADD ESI,EAX                         ; 0045dfb8
    PUSH EDI                            ; 0045dfba
    MOV EAX,ECX                         ; 0045dfbb
    SHR ECX,0x2                         ; 0045dfbd
    MOVSD.REP ES:EDI,ESI                ; 0045dfc0
    MOV CL,AL                           ; 0045dfc2
    AND CL,0x3                          ; 0045dfc4
    MOVSB.REP ES:EDI,ESI                ; 0045dfc7
    POP EDI                             ; 0045dfc9
    POP ESI                             ; 0045dfca
    ADD ESP,0xc                         ; 0045dfcb
        ;   Label: LAB_0045dfcb
    POP EDI                             ; 0045dfce
    POP EBX                             ; 0045dfcf
    RET                                 ; 0045dfd0

