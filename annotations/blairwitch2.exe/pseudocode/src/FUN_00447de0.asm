; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00447de0(int *param_1)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   FUN_004bd570 at 004bd5e0
;
; Referenced Globals:
;   TerminatedCString s_movscrn_raw_005ced40
;   undefined4 DAT_005ced50
;   undefined4 DAT_0060a0b4
;   undefined4 DAT_00616494
;   undefined4 DAT_01cb6b84
;
; Called Functions:
;   FUN_004477a0
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00447de0
        ;   Label: FUN_00447de0
    PUSH EDI                            ; 00447de1
    SUB ESP,0xc                         ; 00447de2
    MOV EBX,dword ptr [ESP + 0x18]      ; 00447de5
    PUSH 0x5ced40                       ; 00447de9 | = "movscrn.raw"
    MOV EDX,dword ptr [0x0060a0b4]      ; 00447dee | DAT_0060a0b4
    PUSH EDX                            ; 00447df4
    CALL FUN_004477a0                   ; 00447df5
        ;   XREF to: 004477a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004477a0()
    ADD ESP,0x8                         ; 00447dfa
    MOV EDI,EAX                         ; 00447dfd
    TEST EAX,EAX                        ; 00447dff
    JZ 0x00447e6b                       ; 00447e01
        ;   XREF to: 00447e6b (CONDITIONAL_JUMP)  ; LAB_00447e6b
    CMP dword ptr [EBX + 0x4],0x0       ; 00447e03
    JZ 0x00447e6b                       ; 00447e07
        ;   XREF to: 00447e6b (CONDITIONAL_JUMP)  ; LAB_00447e6b
    PUSH ESI                            ; 00447e09
    MOV ESI,dword ptr [0x00616494]      ; 00447e0a | DAT_00616494
    FLD float ptr [ESI + 0x284]         ; 00447e10 | DAT_01cb6b84
    FMUL double ptr [0x005ced50]        ; 00447e16 | DAT_005ced50
    LEA EAX,[EBX + 0x8]                 ; 00447e1c
    FADD float ptr [EAX]                ; 00447e1f
    FSTP float ptr [EAX]                ; 00447e21
    FILD dword ptr [EBX]                ; 00447e23
    FCOMP float ptr [EBX + 0x8]         ; 00447e25
    FNSTSW AX                           ; 00447e28
    SAHF                                ; 00447e2a
    JA 0x00447e34                       ; 00447e2b
        ;   XREF to: 00447e34 (CONDITIONAL_JUMP)  ; LAB_00447e34
    MOV dword ptr [EBX + 0x8],0x0       ; 00447e2d
    FLD float ptr [EBX + 0x8]           ; 00447e34
        ;   Label: LAB_00447e34
    MOV ECX,0x2000                      ; 00447e37
    CALL FUN_005b7ff0                   ; 00447e3c
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    MOV EDI,dword ptr [EDI + 0x48]      ; 00447e41
    FISTP dword ptr [ESP + 0xc]         ; 00447e44
    MOV EAX,dword ptr [ESP + 0xc]       ; 00447e48
    MOV ESI,dword ptr [EBX + 0x4]       ; 00447e4c
    SHL EAX,0xd                         ; 00447e4f
    ADD EDI,0x1000                      ; 00447e52
    ADD ESI,EAX                         ; 00447e58
    PUSH EDI                            ; 00447e5a
    MOV EAX,ECX                         ; 00447e5b
    SHR ECX,0x2                         ; 00447e5d
    MOVSD.REP ES:EDI,ESI                ; 00447e60
    MOV CL,AL                           ; 00447e62
    AND CL,0x3                          ; 00447e64
    MOVSB.REP ES:EDI,ESI                ; 00447e67
    POP EDI                             ; 00447e69
    POP ESI                             ; 00447e6a
    ADD ESP,0xc                         ; 00447e6b
        ;   Label: LAB_00447e6b
    POP EDI                             ; 00447e6e
    POP EBX                             ; 00447e6f
    RET                                 ; 00447e70

