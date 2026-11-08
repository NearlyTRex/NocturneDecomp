; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_00497710(float param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   FUN_00497800 at 00498117
;
; Referenced Globals:
;   undefined4 DAT_005d5472
;   undefined4 DAT_005d547a
;   undefined4 DAT_005d5482
;   undefined4 DAT_005f64e4
;   undefined4 DAT_0060b280
;   undefined4 DAT_006141e4
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01c35e38
;   undefined4 DAT_01c35e3c
;
; Called Functions:
;   FUN_0055d723
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00497710
        ;   Label: FUN_00497710
    SUB ESP,0x30                        ; 00497711
    MOV EAX,dword ptr [ESP + 0x38]      ; 00497714
    XOR EDX,EDX                         ; 00497718
    MOV EBX,ESP                         ; 0049771a
    MOV dword ptr [ESP + 0xc],EDX       ; 0049771c
    MOV dword ptr [ESP + 0x10],EDX      ; 00497720
    MOV dword ptr [ESP + 0x14],EAX      ; 00497724
    LEA EAX,[ESP + 0xc]                 ; 00497728
    MOV EDX,dword ptr [0x0060b280]      ; 0049772c | DAT_0060b280
    FLD float ptr [EAX]                 ; 00497732
    FMUL float ptr [0x005f64e4]         ; 00497734 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 0049773a
    FLD float ptr [EAX + 0x4]           ; 0049773c
    FMUL float ptr [0x005f64e4]         ; 0049773f | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 00497745
    FLD float ptr [EAX + 0x8]           ; 00497748
    FMUL float ptr [0x005f64e4]         ; 0049774b | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 00497751
    MOV EAX,ESP                         ; 00497754
    PUSH EAX                            ; 00497756
    MOV EAX,dword ptr [EDX]             ; 00497757 | DAT_01ba5c50
    PUSH EAX                            ; 00497759
    CALL FUN_0055d723                   ; 0049775a
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d723()
    MOV EAX,[0x0060b280]                ; 0049775f | DAT_0060b280
    MOV EAX,dword ptr [EAX]             ; 00497764 | DAT_01ba5c50
    FILD dword ptr [EAX + 0x8]          ; 00497766
    FMUL double ptr [0x005d5472]        ; 00497769 | DAT_005d5472
    FLD double ptr [0x005d547a]         ; 0049776f | DAT_005d547a
    FILD dword ptr [0x006141e4]         ; 00497775 | DAT_006141e4
    FMUL ST1                            ; 0049777b
    FDIVP ST2,ST0                       ; 0049777d
    FILD dword ptr [0x01c35e38]         ; 0049777f | DAT_01c35e38
    FMUL ST1                            ; 00497785
    ADD ESP,0x8                         ; 00497787
    FXCH ST2                            ; 0049778a
    FMUL float ptr [0x005d5482]         ; 0049778c | DAT_005d5482
    FXCH ST2                            ; 00497792
    FDIVR ST0,ST2                       ; 00497794
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00497796
    MOV dword ptr [ESP + 0x2c],EAX      ; 0049779a
    FABS                                ; 0049779e
    FILD dword ptr [0x01c35e3c]         ; 004977a0 | DAT_01c35e3c
    FMULP ST2                           ; 004977a6
    FXCH                                ; 004977a8
    FDIVP ST2,ST0                       ; 004977aa
    FXCH                                ; 004977ac
    FABS                                ; 004977ae
    FLD float ptr [ESP + 0x3c]          ; 004977b0
    FXCH ST2                            ; 004977b4
    FSTP float ptr [ESP + 0x28]         ; 004977b6
    FSTP float ptr [ESP + 0x24]         ; 004977ba
    FCOMP float ptr [ESP + 0x28]        ; 004977be
    FNSTSW AX                           ; 004977c2
    SAHF                                ; 004977c4
    JC 0x004977dd                       ; 004977c5
        ;   XREF to: 004977dd (CONDITIONAL_JUMP)  ; LAB_004977dd
    FLD float ptr [ESP + 0x2c]          ; 004977c7
        ;   Label: LAB_004977c7
    FCOMP float ptr [ESP + 0x24]        ; 004977cb
    FNSTSW AX                           ; 004977cf
    SAHF                                ; 004977d1
    JC 0x004977e7                       ; 004977d2
        ;   XREF to: 004977e7 (CONDITIONAL_JUMP)  ; LAB_004977e7
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004977d4
    ADD ESP,0x30                        ; 004977d8
    POP EBX                             ; 004977db
    RET                                 ; 004977dc
    MOV EAX,dword ptr [ESP + 0x28]      ; 004977dd
        ;   Label: LAB_004977dd
    MOV dword ptr [ESP + 0x2c],EAX      ; 004977e1
    JMP 0x004977c7                      ; 004977e5
        ;   XREF to: 004977c7 (UNCONDITIONAL_JUMP)  ; LAB_004977c7
    MOV EAX,dword ptr [ESP + 0x24]      ; 004977e7
        ;   Label: LAB_004977e7
    MOV dword ptr [ESP + 0x2c],EAX      ; 004977eb
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004977ef
    ADD ESP,0x30                        ; 004977f3
    POP EBX                             ; 004977f6
    RET                                 ; 004977f7

