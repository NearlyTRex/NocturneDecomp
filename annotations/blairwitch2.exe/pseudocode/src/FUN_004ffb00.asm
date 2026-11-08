; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ffb00(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   FUN_004fde80 at 004fe5ba
;
; Called Functions:
;   FUN_0040cf60
;   FUN_00503620
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ffb00
        ;   Label: FUN_004ffb00
    SUB ESP,0x4                         ; 004ffb01
    MOV EBX,dword ptr [ESP + 0xc]       ; 004ffb04
    FLD float ptr [EBX + 0x10bcc]       ; 004ffb08
    FLDZ                                ; 004ffb0e
    FCOMPP                              ; 004ffb10
    FNSTSW AX                           ; 004ffb12
    SAHF                                ; 004ffb14
    JNC 0x004ffb1c                      ; 004ffb15
        ;   XREF to: 004ffb1c (CONDITIONAL_JUMP)  ; LAB_004ffb1c
    ADD ESP,0x4                         ; 004ffb17
    POP EBX                             ; 004ffb1a
    RET                                 ; 004ffb1b
    PUSH 0x3f800000                     ; 004ffb1c
        ;   Label: LAB_004ffb1c
    PUSH 0x3f000000                     ; 004ffb21
    CALL FUN_0040cf60                   ; 004ffb26
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0x8],EAX       ; 004ffb2b
    MOV EDX,dword ptr [EBX + 0x2620]    ; 004ffb2f
    FLD float ptr [ESP + 0x8]           ; 004ffb35
    LEA EAX,[EBX + 0x2b4]               ; 004ffb39
    FSTP float ptr [EBX + 0x10bcc]      ; 004ffb3f
    ADD ESP,0x8                         ; 004ffb45
    TEST EDX,EDX                        ; 004ffb48
    JZ 0x004ffb5e                       ; 004ffb4a
        ;   XREF to: 004ffb5e (CONDITIONAL_JUMP)  ; LAB_004ffb5e
    PUSH 0x1                            ; 004ffb4c
    PUSH 0x6                            ; 004ffb4e
    PUSH EAX                            ; 004ffb50
    CALL FUN_00503620                   ; 004ffb51
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004ffb56
    ADD ESP,0x4                         ; 004ffb59
    POP EBX                             ; 004ffb5c
    RET                                 ; 004ffb5d
    PUSH 0x1                            ; 004ffb5e
        ;   Label: LAB_004ffb5e
    PUSH 0x2                            ; 004ffb60
    PUSH EAX                            ; 004ffb62
    CALL FUN_00503620                   ; 004ffb63
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004ffb68
    ADD ESP,0x4                         ; 004ffb6b
    POP EBX                             ; 004ffb6e
    RET                                 ; 004ffb6f

