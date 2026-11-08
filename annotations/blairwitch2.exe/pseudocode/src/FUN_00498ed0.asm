; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00498ed0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x94]:1  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined        Stack[-0x60]:1  local_60
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   FUN_0049c780 at 0049ca43
;
; Referenced Globals:
;   undefined4 DAT_005d551a
;   undefined4 DAT_005d5522
;   undefined4 DAT_005d552a
;   undefined4 DAT_005d5532
;   undefined4 DAT_005d553a
;   undefined4 DAT_005d5542
;   undefined4 DAT_005f64e4
;   undefined4 DAT_0060b280
;   undefined4 DAT_00615244
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   FUN_00469c60
;   FUN_0046b2b0
;   FUN_0046b350
;   FUN_0046b670
;   FUN_0046b8d0
;   FUN_0046ca00
;   FUN_0055d723
;   FUN_005b7ff0
;   thunk_FUN_004e9810
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00498ed0
        ;   Label: FUN_00498ed0
    SUB ESP,0x90                        ; 00498ed1
    MOV EBP,dword ptr [ESP + 0x98]      ; 00498ed7
    TEST dword ptr [EBP + 0xc],0x7fffffff ; 00498ede
    JNZ 0x00498eef                      ; 00498ee5
        ;   XREF to: 00498eef (CONDITIONAL_JUMP)  ; LAB_00498eef
    ADD ESP,0x90                        ; 00498ee7
    POP EBP                             ; 00498eed
    RET                                 ; 00498eee
    PUSH EDI                            ; 00498eef
        ;   Label: LAB_00498eef
    PUSH ESI                            ; 00498ef0
    PUSH EBX                            ; 00498ef1
    FLD float ptr [EBP + 0xc]           ; 00498ef2
    FLD1                                ; 00498ef5
    FSUBRP                              ; 00498ef7
    FMUL double ptr [0x005d551a]        ; 00498ef9 | DAT_005d551a
    CALL FUN_005b7ff0                   ; 00498eff
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x88]        ; 00498f04
    MOV EDX,dword ptr [ESP + 0x88]      ; 00498f0b
    LEA EAX,[EDX*0x4 + 0x0]             ; 00498f12
    SUB EAX,EDX                         ; 00498f19
    SHL EAX,0x4                         ; 00498f1b
    ADD EAX,0x615244                    ; 00498f1e | DAT_00615244
    PUSH EAX                            ; 00498f23
    MOV ECX,dword ptr [0x0060b280]      ; 00498f24 | DAT_0060b280
    PUSH ECX                            ; 00498f2a | DAT_01ba5c50
    CALL FUN_0046ca00                   ; 00498f2b
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ca00()
    ADD ESP,0x8                         ; 00498f30
    PUSH EBP                            ; 00498f33
    MOV EBX,dword ptr [0x0060b280]      ; 00498f34 | DAT_0060b280
    PUSH EBX                            ; 00498f3a | DAT_01ba5c50
    CALL FUN_0046b2b0                   ; 00498f3b
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b2b0()
    ADD ESP,0x8                         ; 00498f40
    MOV ESI,dword ptr [0x0060b280]      ; 00498f43 | DAT_0060b280
    PUSH ESI                            ; 00498f49 | DAT_01ba5c50
    LEA ESI,[ESP + 0x74]                ; 00498f4a
    LEA EDI,[ESP + 0x44]                ; 00498f4e
    CALL FUN_0046b670                   ; 00498f52
        ;   XREF to: 0046b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b670()
    ADD ESP,0x4                         ; 00498f57
    LEA ESI,[ESP + 0x70]                ; 00498f5a
    LEA EAX,[ESP + 0x40]                ; 00498f5e
    PUSH 0x0                            ; 00498f62
    MOVSD ES:EDI,ESI                    ; 00498f64
    MOVSD ES:EDI,ESI                    ; 00498f65
    MOVSD ES:EDI,ESI                    ; 00498f66
    PUSH EAX                            ; 00498f67
    MOV EDI,dword ptr [0x0060b280]      ; 00498f68 | DAT_0060b280
    PUSH EDI                            ; 00498f6e | DAT_01ba5c50
    CALL FUN_0046b350                   ; 00498f6f
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b350()
    FLD float ptr [EBP + 0x10]          ; 00498f74
    FMUL double ptr [0x005d5532]        ; 00498f77 | DAT_005d5532
    FLD float ptr [EBP + 0x10]          ; 00498f7d
    FCHS                                ; 00498f80
    FMUL float ptr [0x005d5522]         ; 00498f82 | DAT_005d5522
    FXCH                                ; 00498f88
    FLD double ptr [0x005d552a]         ; 00498f8a | DAT_005d552a
    FXCH                                ; 00498f90
    FMUL ST1                            ; 00498f92
    FXCH ST2                            ; 00498f94
    FMULP                               ; 00498f96
    ADD ESP,0xc                         ; 00498f98
    MOV EAX,dword ptr [EBP + 0x18]      ; 00498f9b
    FXCH                                ; 00498f9e
    CALL FUN_005b7ff0                   ; 00498fa0
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH                                ; 00498fa5
    CALL FUN_005b7ff0                   ; 00498fa7
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH                                ; 00498fac
    FISTP dword ptr [ESP + 0x94]        ; 00498fae
    FISTP dword ptr [ESP + 0x90]        ; 00498fb5
    TEST EAX,EAX                        ; 00498fbc
    JZ 0x00498fe0                       ; 00498fbe
        ;   XREF to: 00498fe0 (CONDITIONAL_JUMP)  ; LAB_00498fe0
    MOV ECX,dword ptr [ESP + 0x94]      ; 00498fc0
    MOV EDX,dword ptr [ESP + 0x90]      ; 00498fc7
    NEG ECX                             ; 00498fce
    NEG EDX                             ; 00498fd0
    MOV dword ptr [ESP + 0x94],ECX      ; 00498fd2
    MOV dword ptr [ESP + 0x90],EDX      ; 00498fd9
    MOV EAX,dword ptr [ESP + 0x90]      ; 00498fe0
        ;   Label: LAB_00498fe0
    MOV dword ptr [ESP + 0x98],EAX      ; 00498fe7
    FILD dword ptr [ESP + 0x98]         ; 00498fee
    FSTP float ptr [ESP + 0x8c]         ; 00498ff5
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00498ffc
    MOV dword ptr [ESP + 0x58],EAX      ; 00499003
    FLD float ptr [EBP + 0x10]          ; 00499007
    FMUL float ptr [0x005d553a]         ; 0049900a | DAT_005d553a
    FMUL double ptr [0x005d552a]        ; 00499010 | DAT_005d552a
    MOV EDX,dword ptr [0x0060b280]      ; 00499016 | DAT_0060b280
    XOR EBX,EBX                         ; 0049901c
    LEA EAX,[ESP + 0x58]                ; 0049901e
    MOV dword ptr [ESP + 0x60],EBX      ; 00499022
    LEA EBX,[ESP + 0x7c]                ; 00499026
    FSTP float ptr [ESP + 0x5c]         ; 0049902a
    FLD float ptr [EAX]                 ; 0049902e
    FMUL float ptr [0x005f64e4]         ; 00499030 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 00499036
    FLD float ptr [EAX + 0x4]           ; 00499038
    FMUL float ptr [0x005f64e4]         ; 0049903b | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 00499041
    FLD float ptr [EAX + 0x8]           ; 00499044
    FMUL float ptr [0x005f64e4]         ; 00499047 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 0049904d
    LEA EAX,[ESP + 0x7c]                ; 00499050
    PUSH EAX                            ; 00499054
    MOV EAX,dword ptr [EDX]             ; 00499055 | DAT_01ba5c50
    PUSH EAX                            ; 00499057
    CALL FUN_0055d723                   ; 00499058
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d723()
    ADD ESP,0x8                         ; 0049905d
    MOV EAX,dword ptr [ESP + 0x94]      ; 00499060
    LEA EBX,[ESP + 0x4c]                ; 00499067
    MOV dword ptr [ESP + 0x98],EAX      ; 0049906b
    MOV EDX,dword ptr [0x0060b280]      ; 00499072 | DAT_0060b280
    FILD dword ptr [ESP + 0x98]         ; 00499078
    LEA EAX,[ESP + 0x58]                ; 0049907f
    FSTP float ptr [ESP + 0x58]         ; 00499083
    FLD float ptr [EAX]                 ; 00499087
    FMUL float ptr [0x005f64e4]         ; 00499089 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 0049908f
    FLD float ptr [EAX + 0x4]           ; 00499091
    FMUL float ptr [0x005f64e4]         ; 00499094 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 0049909a
    FLD float ptr [EAX + 0x8]           ; 0049909d
    FMUL float ptr [0x005f64e4]         ; 004990a0 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 004990a6
    LEA EAX,[ESP + 0x4c]                ; 004990a9
    PUSH EAX                            ; 004990ad
    MOV EAX,dword ptr [EDX]             ; 004990ae | DAT_01ba5c50
    ADD EAX,0x30                        ; 004990b0
    PUSH EAX                            ; 004990b3
    CALL FUN_0055d723                   ; 004990b4
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d723()
    FLD float ptr [EBP + 0x10]          ; 004990b9
    FCHS                                ; 004990bc
    FMUL double ptr [0x005d5542]        ; 004990be | DAT_005d5542
    FMUL double ptr [0x005d552a]        ; 004990c4 | DAT_005d552a
    LEA EBX,[ESP + 0x6c]                ; 004990ca
    LEA EAX,[ESP + 0x60]                ; 004990ce
    ADD ESP,0x8                         ; 004990d2
    MOV EDX,dword ptr [0x0060b280]      ; 004990d5 | DAT_0060b280
    FSTP float ptr [ESP + 0x5c]         ; 004990db
    FLD float ptr [EAX]                 ; 004990df
    FMUL float ptr [0x005f64e4]         ; 004990e1 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 004990e7
    FLD float ptr [EAX + 0x4]           ; 004990e9
    FMUL float ptr [0x005f64e4]         ; 004990ec | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 004990f2
    FLD float ptr [EAX + 0x8]           ; 004990f5
    FMUL float ptr [0x005f64e4]         ; 004990f8 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 004990fe
    LEA EAX,[ESP + 0x64]                ; 00499101
    PUSH EAX                            ; 00499105
    MOV EAX,dword ptr [EDX]             ; 00499106 | DAT_01ba5c50
    ADD EAX,0x60                        ; 00499108
    PUSH EAX                            ; 0049910b
    CALL FUN_0055d723                   ; 0049910c
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d723()
    ADD ESP,0x8                         ; 00499111
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00499114
    LEA EBX,[ESP + 0x34]                ; 0049911b
    MOV dword ptr [ESP + 0x58],EAX      ; 0049911f
    LEA EAX,[ESP + 0x58]                ; 00499123
    MOV EDX,dword ptr [0x0060b280]      ; 00499127 | DAT_0060b280
    FLD float ptr [EAX]                 ; 0049912d
    FMUL float ptr [0x005f64e4]         ; 0049912f | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 00499135
    FLD float ptr [EAX + 0x4]           ; 00499137
    FMUL float ptr [0x005f64e4]         ; 0049913a | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 00499140
    FLD float ptr [EAX + 0x8]           ; 00499143
    FMUL float ptr [0x005f64e4]         ; 00499146 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 0049914c
    LEA EAX,[ESP + 0x34]                ; 0049914f
    PUSH EAX                            ; 00499153
    MOV EAX,dword ptr [EDX]             ; 00499154 | DAT_01ba5c50
    ADD EAX,0x90                        ; 00499156
    PUSH EAX                            ; 0049915b
    CALL FUN_0055d723                   ; 0049915c
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d723()
    ADD ESP,0x8                         ; 00499161
    MOV EAX,[0x0060b280]                ; 00499164 | DAT_0060b280
    MOV EDX,dword ptr [EAX]             ; 00499169 | DAT_01ba5c50
    MOV dword ptr [EDX + 0x18],0x20000  ; 0049916b
    MOV EDX,dword ptr [EAX]             ; 00499172 | DAT_01ba5c50
    MOV dword ptr [EDX + 0x1c],0x20000  ; 00499174
    MOV EDX,dword ptr [EAX]             ; 0049917b | DAT_01ba5c50
    MOV dword ptr [EDX + 0x48],0xfe0000 ; 0049917d
    MOV EDX,dword ptr [EAX]             ; 00499184 | DAT_01ba5c50
    MOV dword ptr [EDX + 0x4c],0x20000  ; 00499186
    MOV EDX,dword ptr [EAX]             ; 0049918d | DAT_01ba5c50
    MOV dword ptr [EDX + 0x78],0xfe0000 ; 0049918f
    MOV EDX,dword ptr [EAX]             ; 00499196 | DAT_01ba5c50
    MOV dword ptr [EDX + 0x7c],0xfe0000 ; 00499198
    MOV EDX,dword ptr [EAX]             ; 0049919f | DAT_01ba5c50
    MOV dword ptr [EDX + 0xa8],0x20000  ; 004991a1
    MOV EDX,dword ptr [EAX]             ; 004991ab | DAT_01ba5c50
    MOV dword ptr [EDX + 0xac],0xfe0000 ; 004991ad
    MOV EDX,dword ptr [EAX]             ; 004991b7 | DAT_01ba5c50
    MOV dword ptr [EDX + 0x2c],0x8000   ; 004991b9
    MOV EDX,dword ptr [EAX]             ; 004991c0 | DAT_01ba5c50
    MOV dword ptr [EDX + 0x5c],0x8000   ; 004991c2
    MOV EDX,dword ptr [EAX]             ; 004991c9 | DAT_01ba5c50
    MOV dword ptr [EDX + 0x8c],0x8000   ; 004991cb
    MOV EDX,dword ptr [EAX]             ; 004991d5 | DAT_01ba5c50
    MOV ESI,0x4                         ; 004991d7
    MOV EBP,0x3                         ; 004991dc
    MOV dword ptr [EDX + 0xbc],0x8000   ; 004991e1
    XOR EDI,EDI                         ; 004991eb
    MOV dword ptr [ESP + 0x10],ESI      ; 004991ed
    MOV dword ptr [ESP + 0x20],EDI      ; 004991f1
    MOV dword ptr [ESP + 0x1c],EDI      ; 004991f5
    MOV dword ptr [ESP + 0x18],EDI      ; 004991f9
    MOV dword ptr [ESP + 0x14],EDI      ; 004991fd
    MOV ESI,0x1                         ; 00499201
    MOV dword ptr [ESP + 0x24],EDI      ; 00499206
    PUSH ESI                            ; 0049920a
    MOV dword ptr [ESP + 0x34],EBP      ; 0049920b
    MOV EDI,0x2                         ; 0049920f
    PUSH EAX                            ; 00499214 | DAT_01ba5c50
    MOV dword ptr [ESP + 0x30],ESI      ; 00499215
    MOV dword ptr [ESP + 0x34],EDI      ; 00499219
    CALL FUN_0046b8d0                   ; 0049921d
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b8d0()
    ADD ESP,0x8                         ; 00499222
    PUSH 0x123                          ; 00499225
    LEA EAX,[ESP + 0x10]                ; 0049922a
    PUSH EAX                            ; 0049922e
    MOV EAX,[0x0060b280]                ; 0049922f | DAT_0060b280
    PUSH EAX                            ; 00499234 | DAT_01ba5c50
    CALL FUN_00469c60                   ; 00499235
        ;   XREF to: 00469c60 (UNCONDITIONAL_CALL)  ; undefined FUN_00469c60()
    ADD ESP,0xc                         ; 0049923a
    XOR EBX,EBX                         ; 0049923d
    PUSH EBX                            ; 0049923f
    MOV EDX,dword ptr [0x0060b280]      ; 00499240 | DAT_0060b280
    PUSH EDX                            ; 00499246 | DAT_01ba5c50
    CALL FUN_0046b8d0                   ; 00499247
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b8d0()
    ADD ESP,0x8                         ; 0049924c
    MOV ECX,dword ptr [0x0060b280]      ; 0049924f | DAT_0060b280
    PUSH ECX                            ; 00499255 | DAT_01ba5c50
    CALL thunk_FUN_004e9810             ; 00499256
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004e9810()
    ADD ESP,0x4                         ; 0049925b
    POP EBX                             ; 0049925e
    POP ESI                             ; 0049925f
    POP EDI                             ; 00499260
    ADD ESP,0x90                        ; 00499261
    POP EBP                             ; 00499267
    RET                                 ; 00499268

