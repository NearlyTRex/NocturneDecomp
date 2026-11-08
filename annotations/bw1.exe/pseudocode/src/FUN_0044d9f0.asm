; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044d9f0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
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
;   FUN_0044dc90 at 0044dd57
;
; Referenced Globals:
;   undefined4 DAT_005d768f
;   undefined4 DAT_005d7697
;
; Called Functions:
;   FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0044d9f0
        ;   Label: FUN_0044d9f0
    MOV EBP,ESP                         ; 0044d9f1
    SUB ESP,0x54                        ; 0044d9f3
    AND ESP,0xfffffff8                  ; 0044d9f6
    MOV EAX,dword ptr [EBP + 0x8]       ; 0044d9f9
    FILD dword ptr [EAX + 0x178]        ; 0044d9fc
    FMUL double ptr [0x005d768f]        ; 0044da02 | DAT_005d768f
    FILD dword ptr [EAX + 0x17c]        ; 0044da08
    FMUL double ptr [0x005d768f]        ; 0044da0e | DAT_005d768f
    FILD dword ptr [EAX + 0x180]        ; 0044da14
    FMUL double ptr [0x005d768f]        ; 0044da1a | DAT_005d768f
    FILD dword ptr [EAX + 0x184]        ; 0044da20
    FMUL double ptr [0x005d768f]        ; 0044da26 | DAT_005d768f
    FILD dword ptr [EAX + 0x188]        ; 0044da2c
    FMUL double ptr [0x005d768f]        ; 0044da32 | DAT_005d768f
    FILD dword ptr [EAX + 0x18c]        ; 0044da38
    FMUL double ptr [0x005d768f]        ; 0044da3e | DAT_005d768f
    FILD dword ptr [EAX + 0x190]        ; 0044da44
    FMUL double ptr [0x005d768f]        ; 0044da4a | DAT_005d768f
    FXCH ST6                            ; 0044da50
    FSTP float ptr [ESP + 0x50]         ; 0044da52
    FILD dword ptr [EAX + 0x194]        ; 0044da56
    FMUL double ptr [0x005d768f]        ; 0044da5c | DAT_005d768f
    FXCH ST2                            ; 0044da62
    FSTP float ptr [ESP + 0x44]         ; 0044da64
    FILD dword ptr [EAX + 0x198]        ; 0044da68
    FMUL double ptr [0x005d768f]        ; 0044da6e | DAT_005d768f
    FXCH                                ; 0044da74
    FST float ptr [ESP + 0x1c]          ; 0044da76
    FXCH ST2                            ; 0044da7a
    FSTP float ptr [ESP + 0xc]          ; 0044da7c
    FXCH                                ; 0044da80
    FMUL float ptr [ESP + 0xc]          ; 0044da82
    FLD float ptr [ESP + 0x44]          ; 0044da86
    FXCH ST2                            ; 0044da8a
    FSTP float ptr [ESP + 0x4]          ; 0044da8c
    FXCH                                ; 0044da90
    FMUL float ptr [ESP + 0x4]          ; 0044da92
    FSUBRP                              ; 0044da96
    FLD float ptr [ESP + 0x50]          ; 0044da98
    FXCH                                ; 0044da9c
    FSTP float ptr [ESP + 0x3c]         ; 0044da9e
    FMUL float ptr [ESP + 0x3c]         ; 0044daa2
    FXCH                                ; 0044daa6
    FST float ptr [ESP + 0x48]          ; 0044daa8
    FMUL float ptr [ESP + 0x4]          ; 0044daac
    FXCH ST3                            ; 0044dab0
    FST float ptr [ESP + 0x4c]          ; 0044dab2
    FMUL float ptr [ESP + 0x4]          ; 0044dab6
    FLD float ptr [ESP + 0x1c]          ; 0044daba
    FXCH ST5                            ; 0044dabe
    FSTP float ptr [ESP + 0x8]          ; 0044dac0
    FXCH ST4                            ; 0044dac4
    FMUL float ptr [ESP + 0x8]          ; 0044dac6
    FLD float ptr [ESP + 0x50]          ; 0044daca
    FXCH                                ; 0044dace
    FSUBP ST4,ST0                       ; 0044dad0
    FMUL float ptr [ESP + 0x4]          ; 0044dad2
    FXCH ST3                            ; 0044dad6
    FSTP float ptr [ESP + 0x14]         ; 0044dad8
    FLD float ptr [ESP + 0x4c]          ; 0044dadc
    FMUL float ptr [ESP + 0x14]         ; 0044dae0
    FLD float ptr [ESP + 0x50]          ; 0044dae4
    FXCH                                ; 0044dae8
    FSUBP ST2,ST0                       ; 0044daea
    FMUL float ptr [ESP + 0xc]          ; 0044daec
    FLD float ptr [ESP + 0x48]          ; 0044daf0
    FMUL float ptr [ESP + 0xc]          ; 0044daf4
    FXCH ST3                            ; 0044daf8
    FSTP float ptr [ESP + 0x18]         ; 0044dafa
    FLD float ptr [ESP + 0x4c]          ; 0044dafe
    FMUL float ptr [ESP + 0x1c]         ; 0044db02
    FXCH ST3                            ; 0044db06
    FSTP float ptr [ESP + 0x20]         ; 0044db08
    FLD float ptr [ESP + 0x44]          ; 0044db0c
    FMUL float ptr [ESP + 0x8]          ; 0044db10
    FLD float ptr [ESP + 0x18]          ; 0044db14
    FMUL float ptr [ESP + 0xc]          ; 0044db18
    FXCH                                ; 0044db1c
    FSUBR float ptr [ESP + 0x20]        ; 0044db1e
    FXCH                                ; 0044db22
    FSUBP ST6,ST0                       ; 0044db24
    FSTP float ptr [ESP + 0x40]         ; 0044db26
    FLD float ptr [ESP + 0x18]          ; 0044db2a
    FMUL float ptr [ESP + 0x40]         ; 0044db2e
    FXCH ST5                            ; 0044db32
    FCHS                                ; 0044db34
    FSTP float ptr [ESP + 0x30]         ; 0044db36
    FLD float ptr [ESP + 0x18]          ; 0044db3a
    FMUL float ptr [ESP + 0x8]          ; 0044db3e
    FLD float ptr [ESP + 0x50]          ; 0044db42
    FXCH                                ; 0044db46
    FSUBP ST5,ST0                       ; 0044db48
    FMUL float ptr [ESP + 0x1c]         ; 0044db4a
    FXCH ST4                            ; 0044db4e
    FSTP float ptr [ESP + 0x34]         ; 0044db50
    FLD float ptr [ESP + 0x4c]          ; 0044db54
    FMUL float ptr [ESP + 0x8]          ; 0044db58
    FLD float ptr [ESP + 0x18]          ; 0044db5c
    FMUL float ptr [ESP + 0x44]         ; 0044db60
    FXCH                                ; 0044db64
    FSUBP ST2,ST0                       ; 0044db66
    FLD float ptr [ESP + 0x18]          ; 0044db68
    FMUL float ptr [ESP + 0x48]         ; 0044db6c
    FXCH                                ; 0044db70
    FSUBP ST4,ST0                       ; 0044db72
    FSUBP ST4,ST0                       ; 0044db74
    FCHS                                ; 0044db76
    FXCH ST2                            ; 0044db78
    FSTP float ptr [ESP + 0x28]         ; 0044db7a
    FXCH ST2                            ; 0044db7e
    FCHS                                ; 0044db80
    FXCH                                ; 0044db82
    FSTP float ptr [ESP + 0x2c]         ; 0044db84
    FSTP float ptr [ESP + 0x38]         ; 0044db88
    FLD float ptr [ESP + 0x14]          ; 0044db8c
    FCHS                                ; 0044db90
    FXCH ST2                            ; 0044db92
    FADDP                               ; 0044db94
    FXCH                                ; 0044db96
    FSTP float ptr [ESP + 0x24]         ; 0044db98
    FSTP float ptr [ESP]                ; 0044db9c
    FLD float ptr [ESP]                 ; 0044db9f
    FDIVR double ptr [0x005d7697]       ; 0044dba2 | DAT_005d7697
    FLD float ptr [ESP + 0x50]          ; 0044dba8
    FMUL float ptr [ESP + 0x44]         ; 0044dbac
    FLD float ptr [ESP + 0x4c]          ; 0044dbb0
    FMUL float ptr [ESP + 0x48]         ; 0044dbb4
    FLD float ptr [ESP + 0x3c]          ; 0044dbb8
    FXCH ST3                            ; 0044dbbc
    FSTP float ptr [ESP]                ; 0044dbbe
    FXCH ST2                            ; 0044dbc1
    FMUL float ptr [ESP]                ; 0044dbc3
    FLD float ptr [ESP + 0x30]          ; 0044dbc6
    FMUL float ptr [ESP]                ; 0044dbca
    FLD float ptr [ESP + 0x28]          ; 0044dbcd
    FMUL float ptr [ESP]                ; 0044dbd1
    FLD float ptr [ESP + 0x24]          ; 0044dbd4
    FMUL float ptr [ESP]                ; 0044dbd8
    FXCH ST5                            ; 0044dbdb
    FSUBP ST4,ST0                       ; 0044dbdd
    FXCH ST3                            ; 0044dbdf
    FSTP float ptr [ESP + 0x10]         ; 0044dbe1
    FLD float ptr [ESP + 0x34]          ; 0044dbe5
    FMUL float ptr [ESP]                ; 0044dbe9
    FLD float ptr [ESP + 0x38]          ; 0044dbec
    FMUL float ptr [ESP]                ; 0044dbf0
    FLD float ptr [ESP + 0x40]          ; 0044dbf3
    FMUL float ptr [ESP]                ; 0044dbf7
    FXCH ST4                            ; 0044dbfa
    CALL FUN_005c03a0                   ; 0044dbfc
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [EAX + 0x19c]       ; 0044dc01
    FLD float ptr [ESP + 0x2c]          ; 0044dc07
    FMUL float ptr [ESP]                ; 0044dc0b
    FXCH ST3                            ; 0044dc0e
    CALL FUN_005c03a0                   ; 0044dc10
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [EAX + 0x1a0]       ; 0044dc15
    FLD float ptr [ESP + 0x10]          ; 0044dc1b
    FMUL float ptr [ESP]                ; 0044dc1f
    FXCH ST5                            ; 0044dc22
    CALL FUN_005c03a0                   ; 0044dc24
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH ST6                            ; 0044dc29
    CALL FUN_005c03a0                   ; 0044dc2b
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH ST2                            ; 0044dc30
    CALL FUN_005c03a0                   ; 0044dc32
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH                                ; 0044dc37
    CALL FUN_005c03a0                   ; 0044dc39
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH ST4                            ; 0044dc3e
    CALL FUN_005c03a0                   ; 0044dc40
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH ST3                            ; 0044dc45
    CALL FUN_005c03a0                   ; 0044dc47
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH ST5                            ; 0044dc4c
    CALL FUN_005c03a0                   ; 0044dc4e
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH ST6                            ; 0044dc53
    FISTP dword ptr [EAX + 0x1a4]       ; 0044dc55
    FXCH                                ; 0044dc5b
    FISTP dword ptr [EAX + 0x1a8]       ; 0044dc5d
    FISTP dword ptr [EAX + 0x1ac]       ; 0044dc63
    FXCH                                ; 0044dc69
    FISTP dword ptr [EAX + 0x1b0]       ; 0044dc6b
    FISTP dword ptr [EAX + 0x1b4]       ; 0044dc71
    FISTP dword ptr [EAX + 0x1b8]       ; 0044dc77
    FISTP dword ptr [EAX + 0x1bc]       ; 0044dc7d
    MOV ESP,EBP                         ; 0044dc83
    POP EBP                             ; 0044dc85
    RET                                 ; 0044dc86

