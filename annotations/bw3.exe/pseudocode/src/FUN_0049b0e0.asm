; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_0049b0e0(float param_1,float param_2)
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
;   FUN_0049b1d0 at 0049bafe
;
; Referenced Globals:
;   undefined4 DAT_005c05e8
;   undefined4 DAT_005c05f0
;   undefined4 DAT_005c05f8
;   undefined4 DAT_005df8e4
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fba44
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01c6b598
;   undefined4 DAT_01c6b59c
;
; Called Functions:
;   FUN_005632a3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049b0e0
        ;   Label: FUN_0049b0e0
    SUB ESP,0x30                        ; 0049b0e1
    MOV EAX,dword ptr [ESP + 0x38]      ; 0049b0e4
    XOR EDX,EDX                         ; 0049b0e8
    MOV EBX,ESP                         ; 0049b0ea
    MOV dword ptr [ESP + 0xc],EDX       ; 0049b0ec
    MOV dword ptr [ESP + 0x10],EDX      ; 0049b0f0
    MOV dword ptr [ESP + 0x14],EAX      ; 0049b0f4
    LEA EAX,[ESP + 0xc]                 ; 0049b0f8
    MOV EDX,dword ptr [0x005f2afc]      ; 0049b0fc | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0049b102
    FMUL float ptr [0x005df8e4]         ; 0049b104 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 0049b10a
    FLD float ptr [EAX + 0x4]           ; 0049b10c
    FMUL float ptr [0x005df8e4]         ; 0049b10f | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049b115
    FLD float ptr [EAX + 0x8]           ; 0049b118
    FMUL float ptr [0x005df8e4]         ; 0049b11b | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049b121
    MOV EAX,ESP                         ; 0049b124
    PUSH EAX                            ; 0049b126
    MOV EAX,dword ptr [EDX]             ; 0049b127 | DAT_01bdd7e4
    PUSH EAX                            ; 0049b129
    CALL FUN_005632a3                   ; 0049b12a
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    MOV EAX,[0x005f2afc]                ; 0049b12f | DAT_005f2afc
    MOV EAX,dword ptr [EAX]             ; 0049b134 | DAT_01bdd7e4
    FILD dword ptr [EAX + 0x8]          ; 0049b136
    FMUL double ptr [0x005c05e8]        ; 0049b139 | DAT_005c05e8
    FLD double ptr [0x005c05f0]         ; 0049b13f | DAT_005c05f0
    FILD dword ptr [0x005fba44]         ; 0049b145 | DAT_005fba44
    FMUL ST1                            ; 0049b14b
    FDIVP ST2,ST0                       ; 0049b14d
    FILD dword ptr [0x01c6b598]         ; 0049b14f | DAT_01c6b598
    FMUL ST1                            ; 0049b155
    ADD ESP,0x8                         ; 0049b157
    FXCH ST2                            ; 0049b15a
    FMUL float ptr [0x005c05f8]         ; 0049b15c | DAT_005c05f8
    FXCH ST2                            ; 0049b162
    FDIVR ST0,ST2                       ; 0049b164
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0049b166
    MOV dword ptr [ESP + 0x2c],EAX      ; 0049b16a
    FABS                                ; 0049b16e
    FILD dword ptr [0x01c6b59c]         ; 0049b170 | DAT_01c6b59c
    FMULP ST2                           ; 0049b176
    FXCH                                ; 0049b178
    FDIVP ST2,ST0                       ; 0049b17a
    FXCH                                ; 0049b17c
    FABS                                ; 0049b17e
    FLD float ptr [ESP + 0x3c]          ; 0049b180
    FXCH ST2                            ; 0049b184
    FSTP float ptr [ESP + 0x28]         ; 0049b186
    FSTP float ptr [ESP + 0x24]         ; 0049b18a
    FCOMP float ptr [ESP + 0x28]        ; 0049b18e
    FNSTSW AX                           ; 0049b192
    SAHF                                ; 0049b194
    JC 0x0049b1ad                       ; 0049b195
        ;   XREF to: 0049b1ad (CONDITIONAL_JUMP)  ; LAB_0049b1ad
    FLD float ptr [ESP + 0x2c]          ; 0049b197
        ;   Label: LAB_0049b197
    FCOMP float ptr [ESP + 0x24]        ; 0049b19b
    FNSTSW AX                           ; 0049b19f
    SAHF                                ; 0049b1a1
    JC 0x0049b1b7                       ; 0049b1a2
        ;   XREF to: 0049b1b7 (CONDITIONAL_JUMP)  ; LAB_0049b1b7
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0049b1a4
    ADD ESP,0x30                        ; 0049b1a8
    POP EBX                             ; 0049b1ab
    RET                                 ; 0049b1ac
    MOV EAX,dword ptr [ESP + 0x28]      ; 0049b1ad
        ;   Label: LAB_0049b1ad
    MOV dword ptr [ESP + 0x2c],EAX      ; 0049b1b1
    JMP 0x0049b197                      ; 0049b1b5
        ;   XREF to: 0049b197 (UNCONDITIONAL_JUMP)  ; LAB_0049b197
    MOV EAX,dword ptr [ESP + 0x24]      ; 0049b1b7
        ;   Label: LAB_0049b1b7
    MOV dword ptr [ESP + 0x2c],EAX      ; 0049b1bb
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0049b1bf
    ADD ESP,0x30                        ; 0049b1c3
    POP EBX                             ; 0049b1c6
    RET                                 ; 0049b1c7

