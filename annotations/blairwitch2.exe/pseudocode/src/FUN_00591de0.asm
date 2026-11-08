; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * FUN_00591de0(float *param_1)
;
; Local Variables:
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
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
;
; XREF[30]:
;   FUN_00416d70 at 004171f6
;   FUN_0041d020 at 0041d21a
;   FUN_00425aa0 at 00425b41
;   FUN_004277e0 at 00427968
;   FUN_00428e30 at 00428fd5
;   FUN_0042b620 at 0042b66d
;   FUN_00438c40 at 00438ca4
;   FUN_00455d10 at 00456164
;   FUN_004567c0 at 00456886
;   FUN_004568e0 at 00457a76
;   ... and 20 more
;
; Referenced Globals:
;   undefined4 DAT_005eecfa
;   undefined4 DAT_005eecfe
;   undefined4 DAT_005eed02
;   undefined4 DAT_005eed06
;   undefined4 DAT_005eed0a
;   undefined4 DAT_005eed0e
;   undefined4 DAT_005eed12
;   undefined4 DAT_005eed16
;   undefined4 DAT_005eed1a
;   undefined4 DAT_005eed1e
;
; Called Functions:
;   FUN_005b98f6
;   FUN_005b9924
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00591de0
        ;   Label: FUN_00591de0
    PUSH EDI                            ; 00591de1
    PUSH EBP                            ; 00591de2
    MOV EBP,ESP                         ; 00591de3
    SUB ESP,0x60                        ; 00591de5
    AND ESP,0xfffffff8                  ; 00591de8
    MOV EDX,dword ptr [EBP + 0x10]      ; 00591deb
    MOV ECX,ESI                         ; 00591dee
    FLD float ptr [EDX + 0x4]           ; 00591df0
    FMUL ST0                            ; 00591df3
    FLD float ptr [EDX]                 ; 00591df5
    FMUL ST0                            ; 00591df7
    FADDP                               ; 00591df9
    FLD float ptr [EDX + 0x8]           ; 00591dfb
    FMUL ST0                            ; 00591dfe
    FADDP                               ; 00591e00
    FSQRT                               ; 00591e02
    FLDZ                                ; 00591e04
    FXCH                                ; 00591e06
    FSTP float ptr [ESP + 0x48]         ; 00591e08
    FCOMP float ptr [ESP + 0x48]        ; 00591e0c
    FNSTSW AX                           ; 00591e10
    SAHF                                ; 00591e12
    JC 0x00591f6b                       ; 00591e13
        ;   XREF to: 00591f6b (CONDITIONAL_JUMP)  ; LAB_00591f6b
    FLD float ptr [EDX + 0x10]          ; 00591e19
        ;   Label: LAB_00591e19
    FMUL ST0                            ; 00591e1c
    FLD float ptr [EDX + 0x14]          ; 00591e1e
    FMUL ST0                            ; 00591e21
    FADDP                               ; 00591e23
    FLD float ptr [EDX + 0x18]          ; 00591e25
    FMUL ST0                            ; 00591e28
    FADDP                               ; 00591e2a
    FSQRT                               ; 00591e2c
    FLDZ                                ; 00591e2e
    FXCH                                ; 00591e30
    FSTP float ptr [ESP + 0x50]         ; 00591e32
    FCOMP float ptr [ESP + 0x50]        ; 00591e36
    FNSTSW AX                           ; 00591e3a
    SAHF                                ; 00591e3c
    JNC 0x00591e49                      ; 00591e3d
        ;   XREF to: 00591e49 (CONDITIONAL_JUMP)  ; LAB_00591e49
    FLD1                                ; 00591e3f
    FDIV float ptr [ESP + 0x50]         ; 00591e41
    FSTP float ptr [ESP + 0x50]         ; 00591e45
    FLD float ptr [EDX + 0x20]          ; 00591e49
        ;   Label: LAB_00591e49
    FMUL ST0                            ; 00591e4c
    FLD float ptr [EDX + 0x24]          ; 00591e4e
    FMUL ST0                            ; 00591e51
    FADDP                               ; 00591e53
    FLD float ptr [EDX + 0x28]          ; 00591e55
    FMUL ST0                            ; 00591e58
    FADDP                               ; 00591e5a
    FSQRT                               ; 00591e5c
    FLDZ                                ; 00591e5e
    FXCH                                ; 00591e60
    FSTP float ptr [ESP + 0x4c]         ; 00591e62
    FCOMP float ptr [ESP + 0x4c]        ; 00591e66
    FNSTSW AX                           ; 00591e6a
    SAHF                                ; 00591e6c
    JNC 0x00591e79                      ; 00591e6d
        ;   XREF to: 00591e79 (CONDITIONAL_JUMP)  ; LAB_00591e79
    FLD1                                ; 00591e6f
    FDIV float ptr [ESP + 0x4c]         ; 00591e71
    FSTP float ptr [ESP + 0x4c]         ; 00591e75
    FLD float ptr [EDX + 0x18]          ; 00591e79
        ;   Label: LAB_00591e79
    FCHS                                ; 00591e7c
    FMUL float ptr [ESP + 0x50]         ; 00591e7e
    FST float ptr [ESP + 0x10]          ; 00591e82
    FCOMP float ptr [0x005eecfa]        ; 00591e86 | DAT_005eecfa
    FNSTSW AX                           ; 00591e8c
    SAHF                                ; 00591e8e
    JNC 0x00591f7a                      ; 00591e8f
        ;   XREF to: 00591f7a (CONDITIONAL_JUMP)  ; LAB_00591f7a
    MOV dword ptr [ESP + 0x1c],0xbfc90fdb ; 00591e95
    FLD float ptr [EDX]                 ; 00591e9d
        ;   Label: LAB_00591e9d
    FMUL float ptr [ESP + 0x48]         ; 00591e9f
    FLD float ptr [EDX + 0x20]          ; 00591ea3
    FCHS                                ; 00591ea6
    XOR EBX,EBX                         ; 00591ea8
    FMUL float ptr [ESP + 0x4c]         ; 00591eaa
    MOV dword ptr [ESP + 0x24],EBX      ; 00591eae
    FSTP float ptr [ESP + 0x14]         ; 00591eb2
    MOV EAX,dword ptr [ESP + 0x14]      ; 00591eb6
    FSTP float ptr [ESP + 0x38]         ; 00591eba
    MOV dword ptr [ESP + 0x2c],EAX      ; 00591ebe
    MOV EAX,dword ptr [ESP + 0x38]      ; 00591ec2
    FLD float ptr [ESP + 0x14]          ; 00591ec6
    MOV dword ptr [ESP + 0x4],EAX       ; 00591eca
    FCOMP float ptr [0x005eed0e]        ; 00591ece | DAT_005eed0e
    FNSTSW AX                           ; 00591ed4
    SAHF                                ; 00591ed6
    JNC 0x00592183                      ; 00591ed7
        ;   XREF to: 00592183 (CONDITIONAL_JUMP)  ; LAB_00592183
    FLD float ptr [ESP + 0x14]          ; 00591edd
    FCOMP float ptr [0x005eed12]        ; 00591ee1 | DAT_005eed12
    FNSTSW AX                           ; 00591ee7
    SAHF                                ; 00591ee9
    JBE 0x00592183                      ; 00591eea
        ;   XREF to: 00592183 (CONDITIONAL_JUMP)  ; LAB_00592183
    FLD float ptr [ESP + 0x14]          ; 00591ef0
    CALL FUN_005b98f6                   ; 00591ef4
        ;   XREF to: 005b98f6 (UNCONDITIONAL_CALL)  ; undefined FUN_005b98f6()
    FLDZ                                ; 00591ef9
    FXCH                                ; 00591efb
    FSTP float ptr [ESP + 0x58]         ; 00591efd
    FCOMP float ptr [ESP + 0x38]        ; 00591f01
    FNSTSW AX                           ; 00591f05
    SAHF                                ; 00591f07
    JBE 0x00591f18                      ; 00591f08
        ;   XREF to: 00591f18 (CONDITIONAL_JUMP)  ; LAB_00591f18
    FLD float ptr [0x005eed1a]          ; 00591f0a | DAT_005eed1a
    FSUB float ptr [ESP + 0x58]         ; 00591f10
    FSTP float ptr [ESP + 0x58]         ; 00591f14
    FLD float ptr [ESP + 0x58]          ; 00591f18
        ;   Label: LAB_00591f18
    FCOMP float ptr [0x005eed02]        ; 00591f1c | DAT_005eed02
    FNSTSW AX                           ; 00591f22
    SAHF                                ; 00591f24
    JNC 0x00591f35                      ; 00591f25
        ;   XREF to: 00591f35 (CONDITIONAL_JUMP)  ; LAB_00591f35
    FLD float ptr [ESP + 0x58]          ; 00591f27
    FADD float ptr [0x005eed06]         ; 00591f2b | DAT_005eed06
    FSTP float ptr [ESP + 0x58]         ; 00591f31
    FLD float ptr [ESP + 0x58]          ; 00591f35
        ;   Label: LAB_00591f35
    FCOMP float ptr [0x005eed1a]        ; 00591f39 | DAT_005eed1a
    FNSTSW AX                           ; 00591f3f
    SAHF                                ; 00591f41
    JBE 0x00591f52                      ; 00591f42
        ;   XREF to: 00591f52 (CONDITIONAL_JUMP)  ; LAB_00591f52
    FLD float ptr [ESP + 0x58]          ; 00591f44
    FADD float ptr [0x005eed1e]         ; 00591f48 | DAT_005eed1e
    FSTP float ptr [ESP + 0x58]         ; 00591f4e
    MOV EAX,dword ptr [ESP + 0x58]      ; 00591f52
        ;   Label: LAB_00591f52
    MOV dword ptr [ESP + 0x20],EAX      ; 00591f56
    LEA ESI,[ESP + 0x1c]                ; 00591f5a
    MOV EDI,ECX                         ; 00591f5e
    MOVSD ES:EDI,ESI                    ; 00591f60
    MOVSD ES:EDI,ESI                    ; 00591f61
    MOVSD ES:EDI,ESI                    ; 00591f62
    MOV EAX,ECX                         ; 00591f63
    MOV ESP,EBP                         ; 00591f65
    POP EBP                             ; 00591f67
    POP EDI                             ; 00591f68
    POP EBX                             ; 00591f69
    RET                                 ; 00591f6a
    FLD1                                ; 00591f6b
        ;   Label: LAB_00591f6b
    FDIV float ptr [ESP + 0x48]         ; 00591f6d
    FSTP float ptr [ESP + 0x48]         ; 00591f71
    JMP 0x00591e19                      ; 00591f75
        ;   XREF to: 00591e19 (UNCONDITIONAL_JUMP)  ; LAB_00591e19
    FLD float ptr [ESP + 0x10]          ; 00591f7a
        ;   Label: LAB_00591f7a
    FCOMP float ptr [0x005eecfe]        ; 00591f7e | DAT_005eecfe
    FNSTSW AX                           ; 00591f84
    SAHF                                ; 00591f86
    JBE 0x00591f96                      ; 00591f87
        ;   XREF to: 00591f96 (CONDITIONAL_JUMP)  ; LAB_00591f96
    MOV dword ptr [ESP + 0x1c],0x3fc90fdb ; 00591f89
    JMP 0x00591e9d                      ; 00591f91
        ;   XREF to: 00591e9d (UNCONDITIONAL_JUMP)  ; LAB_00591e9d
    FLD float ptr [ESP + 0x10]          ; 00591f96
        ;   Label: LAB_00591f96
    FLD ST0                             ; 00591f9a
    CALL FUN_005b98f6                   ; 00591f9c
        ;   XREF to: 005b98f6 (UNCONDITIONAL_CALL)  ; undefined FUN_005b98f6()
    FLD ST1                             ; 00591fa1
    FMULP ST2                           ; 00591fa3
    FLD1                                ; 00591fa5
    FSUBRP ST2,ST0                      ; 00591fa7
    FXCH                                ; 00591fa9
    FSQRT                               ; 00591fab
    FXCH                                ; 00591fad
    FST float ptr [ESP + 0x1c]          ; 00591faf
    FXCH                                ; 00591fb3
    FSTP float ptr [ESP + 0x3c]         ; 00591fb5
    FCOMP float ptr [0x005eed02]        ; 00591fb9 | DAT_005eed02
    FNSTSW AX                           ; 00591fbf
    SAHF                                ; 00591fc1
    JNC 0x00591fd2                      ; 00591fc2
        ;   XREF to: 00591fd2 (CONDITIONAL_JUMP)  ; LAB_00591fd2
    FLD float ptr [ESP + 0x1c]          ; 00591fc4
    FADD float ptr [0x005eed06]         ; 00591fc8 | DAT_005eed06
    FSTP float ptr [ESP + 0x1c]         ; 00591fce
    FLD float ptr [ESP + 0x3c]          ; 00591fd2
        ;   Label: LAB_00591fd2
    FCOMP float ptr [0x005eed0a]        ; 00591fd6 | DAT_005eed0a
    FNSTSW AX                           ; 00591fdc
    SAHF                                ; 00591fde
    JC 0x00591e9d                       ; 00591fdf
        ;   XREF to: 00591e9d (CONDITIONAL_JUMP)  ; LAB_00591e9d
    FLD1                                ; 00591fe5
    FDIV float ptr [ESP + 0x3c]         ; 00591fe7
    FLD float ptr [EDX + 0x28]          ; 00591feb
    FMUL float ptr [ESP + 0x4c]         ; 00591fee
    FLD float ptr [EDX + 0x8]           ; 00591ff2
    FMUL float ptr [ESP + 0x48]         ; 00591ff5
    FXCH ST2                            ; 00591ff9
    FSTP float ptr [ESP + 0x40]         ; 00591ffb
    FXCH                                ; 00591fff
    FMUL float ptr [ESP + 0x40]         ; 00592001
    FXCH                                ; 00592005
    FMUL float ptr [ESP + 0x40]         ; 00592007
    FXCH                                ; 0059200b
    FSTP float ptr [ESP + 0x8]          ; 0059200d
    MOV EAX,dword ptr [ESP + 0x8]       ; 00592011
    FSTP float ptr [ESP + 0x30]         ; 00592015
    MOV dword ptr [ESP + 0x28],EAX      ; 00592019
    MOV EAX,dword ptr [ESP + 0x30]      ; 0059201d
    FLD float ptr [ESP + 0x8]           ; 00592021
    MOV dword ptr [ESP + 0xc],EAX       ; 00592025
    FCOMP float ptr [0x005eed0e]        ; 00592029 | DAT_005eed0e
    FNSTSW AX                           ; 0059202f
    SAHF                                ; 00592031
    JNC 0x005921d4                      ; 00592032
        ;   XREF to: 005921d4 (CONDITIONAL_JUMP)  ; LAB_005921d4
    FLD float ptr [ESP + 0x8]           ; 00592038
    FCOMP float ptr [0x005eed12]        ; 0059203c | DAT_005eed12
    FNSTSW AX                           ; 00592042
    SAHF                                ; 00592044
    JBE 0x005921d4                      ; 00592045
        ;   XREF to: 005921d4 (CONDITIONAL_JUMP)  ; LAB_005921d4
    FLD float ptr [ESP + 0x8]           ; 0059204b
    CALL FUN_005b98f6                   ; 0059204f
        ;   XREF to: 005b98f6 (UNCONDITIONAL_CALL)  ; undefined FUN_005b98f6()
    FLDZ                                ; 00592054
    FXCH                                ; 00592056
    FSTP float ptr [ESP + 0x5c]         ; 00592058
    FCOMP float ptr [ESP + 0x30]        ; 0059205c
    FNSTSW AX                           ; 00592060
    SAHF                                ; 00592062
    JBE 0x00592073                      ; 00592063
        ;   XREF to: 00592073 (CONDITIONAL_JUMP)  ; LAB_00592073
    FLD float ptr [0x005eed1a]          ; 00592065 | DAT_005eed1a
    FSUB float ptr [ESP + 0x5c]         ; 0059206b
    FSTP float ptr [ESP + 0x5c]         ; 0059206f
    FLD float ptr [ESP + 0x5c]          ; 00592073
        ;   Label: LAB_00592073
    FCOMP float ptr [0x005eed02]        ; 00592077 | DAT_005eed02
    FNSTSW AX                           ; 0059207d
    SAHF                                ; 0059207f
    JNC 0x00592090                      ; 00592080
        ;   XREF to: 00592090 (CONDITIONAL_JUMP)  ; LAB_00592090
    FLD float ptr [ESP + 0x5c]          ; 00592082
    FADD float ptr [0x005eed06]         ; 00592086 | DAT_005eed06
    FSTP float ptr [ESP + 0x5c]         ; 0059208c
    FLD float ptr [ESP + 0x5c]          ; 00592090
        ;   Label: LAB_00592090
    FCOMP float ptr [0x005eed1a]        ; 00592094 | DAT_005eed1a
    FNSTSW AX                           ; 0059209a
    SAHF                                ; 0059209c
    JBE 0x005920ad                      ; 0059209d
        ;   XREF to: 005920ad (CONDITIONAL_JUMP)  ; LAB_005920ad
    FLD float ptr [ESP + 0x5c]          ; 0059209f
    FADD float ptr [0x005eed1e]         ; 005920a3 | DAT_005eed1e
    FSTP float ptr [ESP + 0x5c]         ; 005920a9
    FLD float ptr [ESP + 0x50]          ; 005920ad
        ;   Label: LAB_005920ad
    FLD float ptr [EDX + 0x14]          ; 005920b1
    FMUL ST1                            ; 005920b4
    FLD float ptr [EDX + 0x10]          ; 005920b6
    FMULP ST2                           ; 005920b9
    FLD float ptr [ESP + 0x40]          ; 005920bb
    FXCH                                ; 005920bf
    FMUL ST1                            ; 005920c1
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005920c3
    FXCH ST2                            ; 005920c7
    FMULP                               ; 005920c9
    MOV dword ptr [ESP + 0x20],EAX      ; 005920cb
    FSTP float ptr [ESP]                ; 005920cf
    MOV EAX,dword ptr [ESP]             ; 005920d2
    FSTP float ptr [ESP + 0x34]         ; 005920d5
    MOV dword ptr [ESP + 0x44],EAX      ; 005920d9
    MOV EAX,dword ptr [ESP + 0x34]      ; 005920dd
    FLD float ptr [ESP]                 ; 005920e1
    MOV dword ptr [ESP + 0x18],EAX      ; 005920e4
    FCOMP float ptr [0x005eed0e]        ; 005920e8 | DAT_005eed0e
    FNSTSW AX                           ; 005920ee
    SAHF                                ; 005920f0
    JNC 0x00592225                      ; 005920f1
        ;   XREF to: 00592225 (CONDITIONAL_JUMP)  ; LAB_00592225
    FLD float ptr [ESP]                 ; 005920f7
    FCOMP float ptr [0x005eed12]        ; 005920fa | DAT_005eed12
    FNSTSW AX                           ; 00592100
    SAHF                                ; 00592102
    JBE 0x00592225                      ; 00592103
        ;   XREF to: 00592225 (CONDITIONAL_JUMP)  ; LAB_00592225
    FLD float ptr [ESP]                 ; 00592109
    CALL FUN_005b98f6                   ; 0059210c
        ;   XREF to: 005b98f6 (UNCONDITIONAL_CALL)  ; undefined FUN_005b98f6()
    FLDZ                                ; 00592111
    FXCH                                ; 00592113
    FSTP float ptr [ESP + 0x54]         ; 00592115
    FCOMP float ptr [ESP + 0x34]        ; 00592119
    FNSTSW AX                           ; 0059211d
    SAHF                                ; 0059211f
    JBE 0x00592130                      ; 00592120
        ;   XREF to: 00592130 (CONDITIONAL_JUMP)  ; LAB_00592130
    FLD float ptr [0x005eed1a]          ; 00592122 | DAT_005eed1a
    FSUB float ptr [ESP + 0x54]         ; 00592128
    FSTP float ptr [ESP + 0x54]         ; 0059212c
    FLD float ptr [ESP + 0x54]          ; 00592130
        ;   Label: LAB_00592130
    FCOMP float ptr [0x005eed02]        ; 00592134 | DAT_005eed02
    FNSTSW AX                           ; 0059213a
    SAHF                                ; 0059213c
    JNC 0x0059214d                      ; 0059213d
        ;   XREF to: 0059214d (CONDITIONAL_JUMP)  ; LAB_0059214d
    FLD float ptr [ESP + 0x54]          ; 0059213f
    FADD float ptr [0x005eed06]         ; 00592143 | DAT_005eed06
    FSTP float ptr [ESP + 0x54]         ; 00592149
    FLD float ptr [ESP + 0x54]          ; 0059214d
        ;   Label: LAB_0059214d
    FCOMP float ptr [0x005eed1a]        ; 00592151 | DAT_005eed1a
    FNSTSW AX                           ; 00592157
    SAHF                                ; 00592159
    JBE 0x0059216a                      ; 0059215a
        ;   XREF to: 0059216a (CONDITIONAL_JUMP)  ; LAB_0059216a
    FLD float ptr [ESP + 0x54]          ; 0059215c
    FADD float ptr [0x005eed1e]         ; 00592160 | DAT_005eed1e
    FSTP float ptr [ESP + 0x54]         ; 00592166
    MOV EAX,dword ptr [ESP + 0x54]      ; 0059216a
        ;   Label: LAB_0059216a
    MOV dword ptr [ESP + 0x24],EAX      ; 0059216e
    LEA ESI,[ESP + 0x1c]                ; 00592172
    MOV EDI,ECX                         ; 00592176
    MOVSD ES:EDI,ESI                    ; 00592178
    MOVSD ES:EDI,ESI                    ; 00592179
    MOVSD ES:EDI,ESI                    ; 0059217a
    MOV EAX,ECX                         ; 0059217b
    MOV ESP,EBP                         ; 0059217d
    POP EBP                             ; 0059217f
    POP EDI                             ; 00592180
    POP EBX                             ; 00592181
    RET                                 ; 00592182
    FLD float ptr [ESP + 0x4]           ; 00592183
        ;   Label: LAB_00592183
    FCOMP float ptr [0x005eed16]        ; 00592187 | DAT_005eed16
    FNSTSW AX                           ; 0059218d
    SAHF                                ; 0059218f
    JA 0x005921b3                       ; 00592190
        ;   XREF to: 005921b3 (CONDITIONAL_JUMP)  ; LAB_005921b3
    MOV dword ptr [ESP + 0x58],0x40490fdb ; 00592192
    FLDZ                                ; 0059219a
        ;   Label: LAB_0059219a
    FCOMP float ptr [ESP + 0x2c]        ; 0059219c
    FNSTSW AX                           ; 005921a0
    SAHF                                ; 005921a2
    JBE 0x00591f18                      ; 005921a3
        ;   XREF to: 00591f18 (CONDITIONAL_JUMP)  ; LAB_00591f18
    XOR byte ptr [ESP + 0x5b],0x80      ; 005921a9
    JMP 0x00591f18                      ; 005921ae
        ;   XREF to: 00591f18 (UNCONDITIONAL_JUMP)  ; LAB_00591f18
    CMP dword ptr [ESP + 0x4],0x3f800000 ; 005921b3
        ;   Label: LAB_005921b3
    JL 0x005921c5                       ; 005921bb
        ;   XREF to: 005921c5 (CONDITIONAL_JUMP)  ; LAB_005921c5
    XOR EDI,EDI                         ; 005921bd
    MOV dword ptr [ESP + 0x58],EDI      ; 005921bf
    JMP 0x0059219a                      ; 005921c3
        ;   XREF to: 0059219a (UNCONDITIONAL_JUMP)  ; LAB_0059219a
    FLD float ptr [ESP + 0x4]           ; 005921c5
        ;   Label: LAB_005921c5
    CALL FUN_005b9924                   ; 005921c9
        ;   XREF to: 005b9924 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9924()
    FSTP float ptr [ESP + 0x58]         ; 005921ce
    JMP 0x0059219a                      ; 005921d2
        ;   XREF to: 0059219a (UNCONDITIONAL_JUMP)  ; LAB_0059219a
    FLD float ptr [ESP + 0xc]           ; 005921d4
        ;   Label: LAB_005921d4
    FCOMP float ptr [0x005eed16]        ; 005921d8 | DAT_005eed16
    FNSTSW AX                           ; 005921de
    SAHF                                ; 005921e0
    JA 0x00592204                       ; 005921e1
        ;   XREF to: 00592204 (CONDITIONAL_JUMP)  ; LAB_00592204
    MOV dword ptr [ESP + 0x5c],0x40490fdb ; 005921e3
    FLDZ                                ; 005921eb
        ;   Label: LAB_005921eb
    FCOMP float ptr [ESP + 0x28]        ; 005921ed
    FNSTSW AX                           ; 005921f1
    SAHF                                ; 005921f3
    JBE 0x00592073                      ; 005921f4
        ;   XREF to: 00592073 (CONDITIONAL_JUMP)  ; LAB_00592073
    XOR byte ptr [ESP + 0x5f],0x80      ; 005921fa
    JMP 0x00592073                      ; 005921ff
        ;   XREF to: 00592073 (UNCONDITIONAL_JUMP)  ; LAB_00592073
    CMP dword ptr [ESP + 0xc],0x3f800000 ; 00592204
        ;   Label: LAB_00592204
    JL 0x00592216                       ; 0059220c
        ;   XREF to: 00592216 (CONDITIONAL_JUMP)  ; LAB_00592216
    XOR ESI,ESI                         ; 0059220e
    MOV dword ptr [ESP + 0x5c],ESI      ; 00592210
    JMP 0x005921eb                      ; 00592214
        ;   XREF to: 005921eb (UNCONDITIONAL_JUMP)  ; LAB_005921eb
    FLD float ptr [ESP + 0xc]           ; 00592216
        ;   Label: LAB_00592216
    CALL FUN_005b9924                   ; 0059221a
        ;   XREF to: 005b9924 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9924()
    FSTP float ptr [ESP + 0x5c]         ; 0059221f
    JMP 0x005921eb                      ; 00592223
        ;   XREF to: 005921eb (UNCONDITIONAL_JUMP)  ; LAB_005921eb
    FLD float ptr [ESP + 0x18]          ; 00592225
        ;   Label: LAB_00592225
    FCOMP float ptr [0x005eed16]        ; 00592229 | DAT_005eed16
    FNSTSW AX                           ; 0059222f
    SAHF                                ; 00592231
    JA 0x00592255                       ; 00592232
        ;   XREF to: 00592255 (CONDITIONAL_JUMP)  ; LAB_00592255
    MOV dword ptr [ESP + 0x54],0x40490fdb ; 00592234
    FLDZ                                ; 0059223c
        ;   Label: LAB_0059223c
    FCOMP float ptr [ESP + 0x44]        ; 0059223e
    FNSTSW AX                           ; 00592242
    SAHF                                ; 00592244
    JBE 0x00592130                      ; 00592245
        ;   XREF to: 00592130 (CONDITIONAL_JUMP)  ; LAB_00592130
    XOR byte ptr [ESP + 0x57],0x80      ; 0059224b
    JMP 0x00592130                      ; 00592250
        ;   XREF to: 00592130 (UNCONDITIONAL_JUMP)  ; LAB_00592130
    CMP dword ptr [ESP + 0x18],0x3f800000 ; 00592255
        ;   Label: LAB_00592255
    JL 0x00592267                       ; 0059225d
        ;   XREF to: 00592267 (CONDITIONAL_JUMP)  ; LAB_00592267
    XOR EBX,EBX                         ; 0059225f
    MOV dword ptr [ESP + 0x54],EBX      ; 00592261
    JMP 0x0059223c                      ; 00592265
        ;   XREF to: 0059223c (UNCONDITIONAL_JUMP)  ; LAB_0059223c
    FLD float ptr [ESP + 0x18]          ; 00592267
        ;   Label: LAB_00592267
    CALL FUN_005b9924                   ; 0059226b
        ;   XREF to: 005b9924 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9924()
    FSTP float ptr [ESP + 0x54]         ; 00592270
    JMP 0x0059223c                      ; 00592274
        ;   XREF to: 0059223c (UNCONDITIONAL_JUMP)  ; LAB_0059223c

