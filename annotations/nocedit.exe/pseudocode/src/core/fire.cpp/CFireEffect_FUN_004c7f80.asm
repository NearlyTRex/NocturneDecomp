; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_fire_cpp_CFireEffect_FUN_004c7f80(CFireEffect *this_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; Local Variables:
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
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_stranger.cpp_CStranger_renderOpaque_FUN_005c3150 at 005c329d
;
; Referenced Globals:
;   float FLOAT_0062a05f = 0.05000000
;   double DOUBLE_0062a063 = 0.0500000000000000
;   double DOUBLE_0062a06b = 0.5
;   float FLOAT_0065dcc0 = 0.02000000
;
; Called Functions:
;   core_fire.cpp_CFireEffect_FUN_004c7eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c7f80
        ;   Label: core_fire.cpp_CFireEffect_FUN_004c7f80
    PUSH ESI                            ; 004c7f81
    PUSH EDI                            ; 004c7f82
    PUSH EBP                            ; 004c7f83
    MOV EBP,ESP                         ; 004c7f84
    SUB ESP,0x78                        ; 004c7f86
    AND ESP,0xfffffff8                  ; 004c7f89
    MOV ESI,dword ptr [EBP + 0x14]      ; 004c7f8c
    MOV ECX,dword ptr [EBP + 0x18]      ; 004c7f8f
    MOV EDX,dword ptr [EBP + 0x1c]      ; 004c7f92
    MOV EAX,dword ptr [EBP + 0x2c]      ; 004c7f95
    MOV EDI,dword ptr [EBP + 0x30]      ; 004c7f98
    MOV EBX,dword ptr [EBP + 0x34]      ; 004c7f9b
    MOV dword ptr [ESP + 0x8],EAX       ; 004c7f9e
    FLD float ptr [ESP + 0x8]           ; 004c7fa2
    FMUL float ptr [0x0062a05f]         ; 004c7fa6 | FLOAT_0062a05f
    FST float ptr [ESP]                 ; 004c7fac
    FCOMP double ptr [0x0062a063]       ; 004c7faf | DOUBLE_0062a063
    FNSTSW AX                           ; 004c7fb5
    SAHF                                ; 004c7fb7
    JC 0x004c8194                       ; 004c7fb8
        ;   XREF to: 004c8194 (CONDITIONAL_JUMP)  ; LAB_004c8194
    MOV EAX,dword ptr [ECX]             ; 004c7fbe
        ;   Label: LAB_004c7fbe
    MOV dword ptr [ESP + 0x18],EAX      ; 004c7fc0
    LEA EAX,[ECX + 0x4]                 ; 004c7fc4
    MOV EAX,dword ptr [EAX]             ; 004c7fc7
    MOV dword ptr [ESP + 0x1c],EAX      ; 004c7fc9
    MOV EAX,dword ptr [ECX + 0x8]       ; 004c7fcd
    MOV dword ptr [ESP + 0x20],EAX      ; 004c7fd0
    MOV EAX,dword ptr [EDX]             ; 004c7fd4
    MOV dword ptr [ESP + 0x60],EAX      ; 004c7fd6
    LEA EAX,[EDX + 0x4]                 ; 004c7fda
    MOV EAX,dword ptr [EAX]             ; 004c7fdd
    MOV dword ptr [ESP + 0x64],EAX      ; 004c7fdf
    LEA EAX,[EDX + 0x8]                 ; 004c7fe3
    MOV ECX,0xc2000000                  ; 004c7fe6
    MOV EAX,dword ptr [EAX]             ; 004c7feb
    XOR EDX,EDX                         ; 004c7fed
    MOV dword ptr [ESP + 0x68],EAX      ; 004c7fef
    MOV dword ptr [ESP + 0xc],EDX       ; 004c7ff3
    MOV dword ptr [ESP + 0x10],ECX      ; 004c7ff7
    MOV dword ptr [ESP + 0x14],EDX      ; 004c7ffb
    MOV EAX,dword ptr [ESP + 0x8]       ; 004c7fff
        ;   Label: LAB_004c7fff
    FLD float ptr [ESP + 0x8]           ; 004c8003
    MOV dword ptr [ESP + 0x4],EAX       ; 004c8007
    FCOMP float ptr [ESP]               ; 004c800b
    FNSTSW AX                           ; 004c800e
    SAHF                                ; 004c8010
    JBE 0x004c801a                      ; 004c8011
        ;   XREF to: 004c801a (CONDITIONAL_JUMP)  ; LAB_004c801a
    MOV EAX,dword ptr [ESP]             ; 004c8013
    MOV dword ptr [ESP + 0x4],EAX       ; 004c8016
    FLD float ptr [ESP + 0x60]          ; 004c801a
        ;   Label: LAB_004c801a
    FMUL float ptr [ESP + 0x4]          ; 004c801e
    FLD float ptr [ESP + 0x64]          ; 004c8022
    FMUL float ptr [ESP + 0x4]          ; 004c8026
    FLD float ptr [ESP + 0x4]           ; 004c802a
    FLD ST0                             ; 004c802e
    FMUL double ptr [0x0062a06b]        ; 004c8030 | DOUBLE_0062a06b
    FLD float ptr [ESP + 0x68]          ; 004c8036
    FMUL float ptr [ESP + 0x4]          ; 004c803a
    FXCH                                ; 004c803e
    FMULP ST2                           ; 004c8040
    FLD float ptr [ESP + 0xc]           ; 004c8042
    FXCH ST2                            ; 004c8046
    FSTP float ptr [ESP + 0x74]         ; 004c8048
    FXCH                                ; 004c804c
    FMUL float ptr [ESP + 0x74]         ; 004c804e
    FLD float ptr [ESP + 0x10]          ; 004c8052
    FMUL float ptr [ESP + 0x74]         ; 004c8056
    FLD float ptr [ESP + 0x14]          ; 004c805a
    FMUL float ptr [ESP + 0x74]         ; 004c805e
    FLD float ptr [ESP + 0x18]          ; 004c8062
    FXCH ST6                            ; 004c8066
    FSTP float ptr [ESP + 0x54]         ; 004c8068
    FLD float ptr [ESP + 0x1c]          ; 004c806c
    FXCH ST5                            ; 004c8070
    FSTP float ptr [ESP + 0x58]         ; 004c8072
    FLD float ptr [ESP + 0x20]          ; 004c8076
    FXCH ST4                            ; 004c807a
    FSTP float ptr [ESP + 0x5c]         ; 004c807c
    FLD float ptr [ESP + 0x8]           ; 004c8080
    FSUB float ptr [ESP + 0x4]          ; 004c8084
    FXCH ST6                            ; 004c8088
    FADD float ptr [ESP + 0x54]         ; 004c808a
    FXCH ST6                            ; 004c808e
    FSTP float ptr [ESP + 0x8]          ; 004c8090
    FXCH ST5                            ; 004c8094
    FSTP float ptr [ESP + 0x30]         ; 004c8096
    FLD float ptr [ESP + 0x8]           ; 004c809a
    FXCH ST4                            ; 004c809e
    FADD float ptr [ESP + 0x58]         ; 004c80a0
    FXCH ST3                            ; 004c80a4
    FADD float ptr [ESP + 0x5c]         ; 004c80a6
    FXCH ST3                            ; 004c80aa
    FSTP float ptr [ESP + 0x34]         ; 004c80ac
    FLDZ                                ; 004c80b0
    FXCH ST3                            ; 004c80b2
    FSTP float ptr [ESP + 0x38]         ; 004c80b4
    FLD float ptr [ESP + 0x30]          ; 004c80b8
    FXCH ST2                            ; 004c80bc
    FSTP float ptr [ESP + 0x24]         ; 004c80be
    FLD float ptr [ESP + 0x34]          ; 004c80c2
    FXCH                                ; 004c80c6
    FSTP float ptr [ESP + 0x28]         ; 004c80c8
    FLD float ptr [ESP + 0x38]          ; 004c80cc
    FXCH ST5                            ; 004c80d0
    FSTP float ptr [ESP + 0x2c]         ; 004c80d2
    FXCH                                ; 004c80d6
    FADD float ptr [ESP + 0x24]         ; 004c80d8
    FXCH                                ; 004c80dc
    FADD float ptr [ESP + 0x28]         ; 004c80de
    FXCH ST4                            ; 004c80e2
    FADD float ptr [ESP + 0x2c]         ; 004c80e4
    FXCH                                ; 004c80e8
    FSTP float ptr [ESP + 0x48]         ; 004c80ea
    FXCH ST3                            ; 004c80ee
    FSTP float ptr [ESP + 0x4c]         ; 004c80f0
    FXCH ST2                            ; 004c80f4
    FSTP float ptr [ESP + 0x50]         ; 004c80f6
    FXCH                                ; 004c80fa
    FCOMPP                              ; 004c80fc
    FNSTSW AX                           ; 004c80fe
    SAHF                                ; 004c8100
    JNC 0x004c81ba                      ; 004c8101
        ;   XREF to: 004c81ba (CONDITIONAL_JUMP)  ; LAB_004c81ba
    MOV EDX,dword ptr [EBP + 0x38]      ; 004c8107
    PUSH dword ptr [0x0065dcc0]         ; 004c810a | FLOAT_0065dcc0
    PUSH EDX                            ; 004c8110
    PUSH EBX                            ; 004c8111
    PUSH EDI                            ; 004c8112
    MOV ECX,dword ptr [EBP + 0x28]      ; 004c8113
    PUSH ECX                            ; 004c8116
    PUSH 0x0                            ; 004c8117
    LEA EAX,[ESP + 0x60]                ; 004c8119
    PUSH dword ptr [EBP + 0x20]         ; 004c811d
    PUSH EAX                            ; 004c8120
    LEA EAX,[ESP + 0x38]                ; 004c8121
    PUSH EAX                            ; 004c8125
    PUSH ESI                            ; 004c8126
    CALL core_fire.cpp_CFireEffect_FUN_004c7eb0 ; 004c8127
        ;   XREF to: 004c7eb0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_FUN_004c7eb0(CFireEffect * this_ptr)
    LEA EDX,[ESP + 0x70]                ; 004c812c
    LEA EAX,[ESP + 0x40]                ; 004c8130
    ADD ESP,0x28                        ; 004c8134
    CMP EAX,EDX                         ; 004c8137
    JNZ 0x004c81a0                      ; 004c8139
        ;   XREF to: 004c81a0 (CONDITIONAL_JUMP)  ; LAB_004c81a0
    FLD float ptr [ESP + 0x4]           ; 004c813b
        ;   Label: LAB_004c813b
    FLD float ptr [ESP + 0xc]           ; 004c813f
    FMUL ST1                            ; 004c8143
    FLD float ptr [ESP + 0x10]          ; 004c8145
    FMUL ST2                            ; 004c8149
    FLD float ptr [ESP + 0x14]          ; 004c814b
    FMULP ST3                           ; 004c814f
    FLD float ptr [ESP + 0x60]          ; 004c8151
    FLD float ptr [ESP + 0x64]          ; 004c8155
    FLD float ptr [ESP + 0x68]          ; 004c8159
    FXCH ST4                            ; 004c815d
    FSTP float ptr [ESP + 0x3c]         ; 004c815f
    FXCH ST2                            ; 004c8163
    FSTP float ptr [ESP + 0x40]         ; 004c8165
    FXCH ST3                            ; 004c8169
    FSTP float ptr [ESP + 0x44]         ; 004c816b
    FXCH ST2                            ; 004c816f
    FADD float ptr [ESP + 0x3c]         ; 004c8171
    FXCH ST2                            ; 004c8175
    FADD float ptr [ESP + 0x40]         ; 004c8177
    FXCH                                ; 004c817b
    FADD float ptr [ESP + 0x44]         ; 004c817d
    FXCH ST2                            ; 004c8181
    FSTP float ptr [ESP + 0x60]         ; 004c8183
    FSTP float ptr [ESP + 0x64]         ; 004c8187
    FSTP float ptr [ESP + 0x68]         ; 004c818b
    JMP 0x004c7fff                      ; 004c818f
        ;   XREF to: 004c7fff (UNCONDITIONAL_JUMP)  ; LAB_004c7fff
    MOV dword ptr [ESP],0x3d4ccccd      ; 004c8194
        ;   Label: LAB_004c8194
    JMP 0x004c7fbe                      ; 004c819b
        ;   XREF to: 004c7fbe (UNCONDITIONAL_JUMP)  ; LAB_004c7fbe
    MOV EAX,dword ptr [ESP + 0x48]      ; 004c81a0
        ;   Label: LAB_004c81a0
    MOV dword ptr [ESP + 0x18],EAX      ; 004c81a4
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004c81a8
    MOV dword ptr [ESP + 0x1c],EAX      ; 004c81ac
    MOV EAX,dword ptr [ESP + 0x50]      ; 004c81b0
    MOV dword ptr [ESP + 0x20],EAX      ; 004c81b4
    JMP 0x004c813b                      ; 004c81b8
        ;   XREF to: 004c813b (UNCONDITIONAL_JUMP)  ; LAB_004c813b
    MOV EAX,dword ptr [EBP + 0x38]      ; 004c81ba
        ;   Label: LAB_004c81ba
    PUSH dword ptr [0x0065dcc0]         ; 004c81bd | FLOAT_0065dcc0
    PUSH EAX                            ; 004c81c3
    PUSH EBX                            ; 004c81c4
    PUSH EDI                            ; 004c81c5
    MOV EDX,dword ptr [EBP + 0x28]      ; 004c81c6
    PUSH EDX                            ; 004c81c9
    PUSH dword ptr [EBP + 0x24]         ; 004c81ca
    LEA EAX,[ESP + 0x60]                ; 004c81cd
    PUSH dword ptr [EBP + 0x20]         ; 004c81d1
    PUSH EAX                            ; 004c81d4
    LEA EAX,[ESP + 0x38]                ; 004c81d5
    PUSH EAX                            ; 004c81d9
    PUSH ESI                            ; 004c81da
    CALL core_fire.cpp_CFireEffect_FUN_004c7eb0 ; 004c81db
        ;   XREF to: 004c7eb0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_FUN_004c7eb0(CFireEffect * this_ptr)
    ADD ESP,0x28                        ; 004c81e0
    MOV ESP,EBP                         ; 004c81e3
    POP EBP                             ; 004c81e5
    POP EDI                             ; 004c81e6
    POP ESI                             ; 004c81e7
    POP EBX                             ; 004c81e8
    RET                                 ; 004c81e9

