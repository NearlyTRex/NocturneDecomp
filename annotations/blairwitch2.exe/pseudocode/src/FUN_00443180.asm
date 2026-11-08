; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00443180(undefined4 param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   FUN_0043b4c0 at 0043b4d1
;   FUN_00534580 at 00534593
;
; Referenced Globals:
;   undefined4 DAT_005ce746
;   undefined4 DAT_005ce74e
;   undefined4 DAT_005ce756
;   undefined4 DAT_00609fa4
;   undefined4 DAT_00609fa8
;   undefined4 DAT_00609fac
;   undefined4 DAT_00b6639c
;   undefined4 DAT_00b6649c
;
; Called Functions:
;   FUN_0055fe90
;   FUN_005b7ff0
;   FUN_005b9484
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00443180
        ;   Label: FUN_00443180
    PUSH EBP                            ; 00443181
    MOV EBP,ESP                         ; 00443182
    SUB ESP,0xc                         ; 00443184
    MOV EAX,dword ptr [EBP + 0x10]      ; 00443187
    MOV dword ptr [EBP + -0x4],EAX      ; 0044318a
    FILD dword ptr [EBP + -0x4]         ; 0044318d
    FMUL double ptr [0x005ce746]        ; 00443190 | DAT_005ce746
    XOR EDX,EDX                         ; 00443196
    XOR ECX,ECX                         ; 00443198
    FSTP float ptr [EBP + -0x8]         ; 0044319a
    FLD double ptr [0x005ce756]         ; 0044319d | DAT_005ce756
    FLD float ptr [EBP + -0x8]          ; 004431a3
    FLD double ptr [0x005ce74e]         ; 004431a6 | DAT_005ce74e
    MOV dword ptr [EBP + -0x4],EDX      ; 004431ac
        ;   Label: LAB_004431ac
    FILD dword ptr [EBP + -0x4]         ; 004431af
    FMUL ST1                            ; 004431b2
    FLD ST2                             ; 004431b4
    FXCH                                ; 004431b6
    CALL FUN_005b9484                   ; 004431b8
        ;   XREF to: 005b9484 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9484()
    FMUL ST3                            ; 004431bd
    CALL FUN_005b7ff0                   ; 004431bf
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [EBP + -0xc]        ; 004431c4
    MOV EAX,dword ptr [EBP + -0xc]      ; 004431c7
    MOV EBX,dword ptr [EBP + -0xc]      ; 004431ca
    SHL EAX,0x8                         ; 004431cd
    OR EAX,EBX                          ; 004431d0
    SHL EBX,0x10                        ; 004431d2
    OR EBX,EAX                          ; 004431d5
    MOV EAX,dword ptr [EBP + -0xc]      ; 004431d7
    SHL EAX,0x18                        ; 004431da
    ADD ECX,0x4                         ; 004431dd
    OR EAX,EBX                          ; 004431e0
    INC EDX                             ; 004431e2
    MOV dword ptr [ECX + 0xb66398],EAX  ; 004431e3 | DAT_00b6639c
    CMP EDX,0x100                       ; 004431e9
    JL 0x004431ac                       ; 004431ef
        ;   XREF to: 004431ac (CONDITIONAL_JUMP)  ; LAB_004431ac
    MOV EAX,[0x00609fac]                ; 004431f1 | DAT_00609fac
    MOV EAX,dword ptr [EAX*0x4 + 0xb6639c] ; 004431f6 | DAT_00b6649c
    AND EAX,0xff                        ; 004431fd
    PUSH EAX                            ; 00443202
    MOV EAX,[0x00609fa8]                ; 00443203 | DAT_00609fa8
    MOV EAX,dword ptr [EAX*0x4 + 0xb6639c] ; 00443208 | DAT_00b6649c
    AND EAX,0xff                        ; 0044320f
    PUSH EAX                            ; 00443214
    MOV EAX,[0x00609fa4]                ; 00443215 | DAT_00609fa4
    MOV EAX,dword ptr [EAX*0x4 + 0xb6639c] ; 0044321a | DAT_00b6649c
    FSTP ST0                            ; 00443221
    AND EAX,0xff                        ; 00443223
    FSTP ST0                            ; 00443228
    PUSH EAX                            ; 0044322a
    FSTP ST0                            ; 0044322b
    CALL FUN_0055fe90                   ; 0044322d
        ;   XREF to: 0055fe90 (UNCONDITIONAL_CALL)  ; undefined FUN_0055fe90()
    ADD ESP,0xc                         ; 00443232
    MOV ESP,EBP                         ; 00443235
    POP EBP                             ; 00443237
    POP EBX                             ; 00443238
    RET                                 ; 00443239

