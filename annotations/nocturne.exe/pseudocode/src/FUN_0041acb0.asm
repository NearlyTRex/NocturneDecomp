; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041acb0(undefined4 param_1,float param_2)
;
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[3]:
;   FUN_0041e5e0 at 0041e86f
;   FUN_004874d0 at 00487614
;   FUN_00554030 at 00554099
;
; Referenced Globals:
;   undefined4 DAT_0057969d
;   undefined4 DAT_005796a5
;
; Called Functions:
;   FUN_0041ad10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041acb0
        ;   Label: FUN_0041acb0
    PUSH EBP                            ; 0041acb1
    MOV EBP,ESP                         ; 0041acb2
    SUB ESP,0xc                         ; 0041acb4
    AND ESP,0xfffffff8                  ; 0041acb7
    MOV EBX,dword ptr [EBP + 0xc]       ; 0041acba
    FLD float ptr [EBP + 0x10]          ; 0041acbd
    FST double ptr [ESP]                ; 0041acc0
    FCOMP double ptr [0x0057969d]       ; 0041acc3 | DAT_0057969d
    FNSTSW AX                           ; 0041acc9
    SAHF                                ; 0041accb
    JBE 0x0041acfa                      ; 0041accc
        ;   XREF to: 0041acfa (CONDITIONAL_JUMP)  ; LAB_0041acfa
    FLD double ptr [ESP]                ; 0041acce
    FMUL double ptr [0x005796a5]        ; 0041acd1 | DAT_005796a5
    FSTP float ptr [ESP + 0x8]          ; 0041acd7
    PUSH dword ptr [ESP + 0x8]          ; 0041acdb
    PUSH EBX                            ; 0041acdf
    CALL FUN_0041acb0                   ; 0041ace0
        ;   XREF to: 0041acb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041acb0()
    ADD ESP,0x8                         ; 0041ace5
    PUSH dword ptr [ESP + 0x8]          ; 0041ace8
    PUSH EBX                            ; 0041acec
    CALL FUN_0041acb0                   ; 0041aced
        ;   XREF to: 0041acb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041acb0()
    ADD ESP,0x8                         ; 0041acf2
    MOV ESP,EBP                         ; 0041acf5
    POP EBP                             ; 0041acf7
    POP EBX                             ; 0041acf8
    RET                                 ; 0041acf9
    PUSH dword ptr [EBP + 0x10]         ; 0041acfa
        ;   Label: LAB_0041acfa
    PUSH EBX                            ; 0041acfd
    CALL FUN_0041ad10                   ; 0041acfe
        ;   XREF to: 0041ad10 (UNCONDITIONAL_CALL)  ; undefined FUN_0041ad10()
    ADD ESP,0x8                         ; 0041ad03
    MOV ESP,EBP                         ; 0041ad06
    POP EBP                             ; 0041ad08
    POP EBX                             ; 0041ad09
    RET                                 ; 0041ad0a

