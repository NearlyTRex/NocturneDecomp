; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005779b0(float param_1)
;
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_00578f80 at 00579047
;
; Referenced Globals:
;   undefined4 DAT_005f4cab
;
; Called Functions:
;   FUN_005c03a0
;   FUN_005c0880
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005779b0
        ;   Label: FUN_005779b0
    PUSH EBP                            ; 005779b1
    MOV EBP,ESP                         ; 005779b2
    SUB ESP,0x14                        ; 005779b4
    AND ESP,0xfffffff8                  ; 005779b7
    FLD float ptr [EBP + 0xc]           ; 005779ba
    FLDZ                                ; 005779bd
    FXCH                                ; 005779bf
    FSTP double ptr [ESP]               ; 005779c1
    FCOMP double ptr [ESP]              ; 005779c4
    FNSTSW AX                           ; 005779c7
    SAHF                                ; 005779c9
    JNC 0x005779dd                      ; 005779ca
        ;   XREF to: 005779dd (CONDITIONAL_JUMP)  ; LAB_005779dd
    FLD1                                ; 005779cc
    FCOMP double ptr [ESP]              ; 005779ce
    FNSTSW AX                           ; 005779d1
    SAHF                                ; 005779d3
    JA 0x005779e7                       ; 005779d4
        ;   XREF to: 005779e7 (CONDITIONAL_JUMP)  ; LAB_005779e7
    XOR EAX,EAX                         ; 005779d6
    MOV ESP,EBP                         ; 005779d8
    POP EBP                             ; 005779da
    POP ESI                             ; 005779db
    RET                                 ; 005779dc
    MOV EAX,0xffffd8f0                  ; 005779dd
        ;   Label: LAB_005779dd
    MOV ESP,EBP                         ; 005779e2
    POP EBP                             ; 005779e4
    POP ESI                             ; 005779e5
    RET                                 ; 005779e6
    FLD double ptr [ESP]                ; 005779e7
        ;   Label: LAB_005779e7
    FLDLN2                              ; 005779ea
    FXCH                                ; 005779ec
    FYL2X                               ; 005779ee
    FMUL double ptr [0x005f4cab]        ; 005779f0 | DAT_005f4cab
    SUB ESP,0x8                         ; 005779f6
    FSTP double ptr [ESP]               ; 005779f9
    CALL FUN_005c0880                   ; 005779fc
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0880()
    MOV dword ptr [ESP + 0x10],EAX      ; 00577a01
    MOV dword ptr [ESP + 0x14],EDX      ; 00577a05
    FLD double ptr [ESP + 0x10]         ; 00577a09
    ADD ESP,0x8                         ; 00577a0d
    CALL FUN_005c03a0                   ; 00577a10
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x10]        ; 00577a15
    MOV EDX,dword ptr [ESP + 0x10]      ; 00577a19
    TEST EDX,EDX                        ; 00577a1d
    JLE 0x00577a30                      ; 00577a1f
        ;   XREF to: 00577a30 (CONDITIONAL_JUMP)  ; LAB_00577a30
    XOR ESI,ESI                         ; 00577a21
    MOV dword ptr [ESP + 0x10],ESI      ; 00577a23
    MOV EAX,dword ptr [ESP + 0x10]      ; 00577a27
        ;   Label: LAB_00577a27
    MOV ESP,EBP                         ; 00577a2b
    POP EBP                             ; 00577a2d
    POP ESI                             ; 00577a2e
    RET                                 ; 00577a2f
    CMP EDX,0xffffd8f0                  ; 00577a30
        ;   Label: LAB_00577a30
    JGE 0x00577a27                      ; 00577a36
        ;   XREF to: 00577a27 (CONDITIONAL_JUMP)  ; LAB_00577a27
    MOV dword ptr [ESP + 0x10],0xffffd8f0 ; 00577a38
    MOV EAX,dword ptr [ESP + 0x10]      ; 00577a40
    MOV ESP,EBP                         ; 00577a44
    POP EBP                             ; 00577a46
    POP ESI                             ; 00577a47
    RET                                 ; 00577a48

