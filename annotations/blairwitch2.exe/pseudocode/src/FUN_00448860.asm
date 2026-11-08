; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00448860(int param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[11]:
;   FUN_0041d020 at 0041d12d
;   FUN_00486cb0 at 00486e2d
;   FUN_00495960 at 004959fa
;   FUN_004969a0 at 004969cd
;   FUN_004a0590 at 004a0649
;   FUN_004df1c0 at 004df237
;   FUN_0053c500 at 0053d008
;   FUN_00589fd0 at 0058a1d1
;   FUN_0059d360 at 0059d38d
;   FUN_005a6bc0 at 005a6c69
;   ... and 1 more
;
; Referenced Globals:
;   undefined4 DAT_005cf002
;   undefined4 DAT_005cf00a
;
; Called Functions:
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 00448860
        ;   Label: FUN_00448860
    MOV EDX,dword ptr [ESP + 0xc]       ; 00448863
    FLD float ptr [ESP + 0x10]          ; 00448867
    FMUL ST0                            ; 0044886b
    FLD float ptr [ESP + 0x10]          ; 0044886d
    FMUL float ptr [0x005cf002]         ; 00448871 | DAT_005cf002
    MOV EAX,dword ptr [ESP + 0x10]      ; 00448877
    FXCH                                ; 0044887b
    FMUL double ptr [0x005cf00a]        ; 0044887d | DAT_005cf00a
    MOV dword ptr [EDX + 0x30],EAX      ; 00448883
    FXCH                                ; 00448886
    CALL FUN_005b7ff0                   ; 00448888
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH                                ; 0044888d
    CALL FUN_005b7ff0                   ; 0044888f
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [EDX + 0x10]        ; 00448894
    MOV ECX,dword ptr [EDX + 0x10]      ; 00448897
    FISTP dword ptr [EDX + 0xc]         ; 0044889a
    CMP ECX,0x10000                     ; 0044889d
    JL 0x004488f1                       ; 004488a3
        ;   XREF to: 004488f1 (CONDITIONAL_JUMP)  ; LAB_004488f1
    FLD float ptr [ESP + 0x10]          ; 004488a5
        ;   Label: LAB_004488a5
    FLD ST0                             ; 004488a9
    FLD1                                ; 004488ab
    FDIVRP                              ; 004488ad
    FLD ST1                             ; 004488af
    FMULP ST2                           ; 004488b1
    FXCH                                ; 004488b3
    FST float ptr [EDX + 0x18]          ; 004488b5
    FLD1                                ; 004488b8
    FDIVRP                              ; 004488ba
    XOR EAX,EAX                         ; 004488bc
    MOV AL,byte ptr [EDX + 0x1c]        ; 004488be
    MOV dword ptr [ESP + 0x4],EAX       ; 004488c1
    MOV EAX,dword ptr [EDX + 0x10]      ; 004488c5
    FILD word ptr [ESP + 0x4]           ; 004488c8
    SAR EAX,0x10                        ; 004488cc
    FMUL double ptr [0x005cf00a]        ; 004488cf | DAT_005cf00a
    MOV dword ptr [ESP],EAX             ; 004488d5
    FILD dword ptr [ESP]                ; 004488d8
    FDIVP                               ; 004488db
    FXCH ST2                            ; 004488dd
    FSTP float ptr [EDX + 0x34]         ; 004488df
    FSTP float ptr [EDX + 0x38]         ; 004488e2
    CALL FUN_005b7ff0                   ; 004488e5
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [EDX + 0x14]        ; 004488ea
    ADD ESP,0x8                         ; 004488ed
    RET                                 ; 004488f0
    MOV dword ptr [EDX + 0x10],0x10000  ; 004488f1
        ;   Label: LAB_004488f1
    JMP 0x004488a5                      ; 004488f8
        ;   XREF to: 004488a5 (UNCONDITIONAL_JUMP)  ; LAB_004488a5

