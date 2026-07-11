; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040a000(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[20]:
;   FUN_00409d30 at 00409da4
;   FUN_00409fc0 at 00409fd0
;   FUN_0040b150 at 0040b189
;   FUN_00415b30 at 00415bb1
;   FUN_00417320 at 004175d1
;   FUN_0041e5e0 at 0041e895
;   FUN_00425050 at 00425566
;   FUN_00429220 at 004293b8
;   FUN_0042a060 at 0042a0af
;   FUN_004552a0 at 00455324
;   ... and 10 more
;
; Called Functions:
;   FUN_0040df00
;   FUN_0044d7a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040a000
        ;   Label: FUN_0040a000
    SUB ESP,0x4                         ; 0040a001
    MOV EBX,dword ptr [ESP + 0xc]       ; 0040a004
    PUSH dword ptr [EBX + 0x30]         ; 0040a008
    CALL FUN_0040df00                   ; 0040a00b
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040df00()
    MOV dword ptr [ESP + 0x4],EAX       ; 0040a010
    FLD float ptr [ESP + 0x4]           ; 0040a014
    ADD ESP,0x4                         ; 0040a018
    PUSH dword ptr [EBX + 0x38]         ; 0040a01b
    FSTP float ptr [EBX + 0x30]         ; 0040a01e
    CALL FUN_0040df00                   ; 0040a021
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040df00()
    MOV dword ptr [ESP + 0x4],EAX       ; 0040a026
    FLD float ptr [ESP + 0x4]           ; 0040a02a
    ADD ESP,0x4                         ; 0040a02e
    PUSH dword ptr [EBX + 0x34]         ; 0040a031
    FSTP float ptr [EBX + 0x38]         ; 0040a034
    CALL FUN_0040df00                   ; 0040a037
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040df00()
    MOV dword ptr [ESP + 0x4],EAX       ; 0040a03c
    FLD float ptr [ESP + 0x4]           ; 0040a040
    ADD ESP,0x4                         ; 0040a044
    LEA EAX,[EBX + 0x30]                ; 0040a047
    PUSH EAX                            ; 0040a04a
    ADD EBX,0x3c                        ; 0040a04b
    PUSH EBX                            ; 0040a04e
    FSTP float ptr [EBX + -0x8]         ; 0040a04f
    CALL FUN_0044d7a0                   ; 0040a052
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044d7a0()
    ADD ESP,0x8                         ; 0040a057
    ADD ESP,0x4                         ; 0040a05a
    POP EBX                             ; 0040a05d
    RET                                 ; 0040a05e

