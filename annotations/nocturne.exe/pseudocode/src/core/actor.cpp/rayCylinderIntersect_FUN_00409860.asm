; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_actor_cpp_rayCylinderIntersect_FUN_00409860(int param_1,float *param_2,float *param_3,float *param_4)
;
; Local Variables:
; undefined8       Stack[-0x108]:8  local_108
; undefined8       Stack[-0x100]:8  local_100
; undefined8       Stack[-0xf8]:8  local_f8
; undefined8       Stack[-0xf0]:8  local_f0
; undefined8       Stack[-0xe8]:8  local_e8
; undefined8       Stack[-0xe0]:8  local_e0
; undefined8       Stack[-0xd8]:8  local_d8
; undefined8       Stack[-0xd0]:8  local_d0
; undefined8       Stack[-0xc8]:8  local_c8
; undefined8       Stack[-0xc0]:8  local_c0
; undefined8       Stack[-0xb8]:8  local_b8
; undefined8       Stack[-0xb0]:8  local_b0
; undefined8       Stack[-0xa8]:8  local_a8
; undefined8       Stack[-0xa0]:8  local_a0
; undefined8       Stack[-0x98]:8  local_98
; undefined8       Stack[-0x90]:8  local_90
; undefined8       Stack[-0x88]:8  local_88
; undefined8       Stack[-0x80]:8  local_80
; undefined8       Stack[-0x78]:8  local_78
; undefined8       Stack[-0x70]:8  local_70
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_0040a420 at 0040a49a
;   core_actor.cpp_CDemonActor_rayIntersect_FUN_0040a740 at 0040a96a
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00409860
        ;   Label: core_actor.cpp_rayCylinderIntersect_FUN_00409860
    PUSH ESI                            ; 00409861
    PUSH EBP                            ; 00409862
    MOV EBP,ESP                         ; 00409863
    SUB ESP,0xfc                        ; 00409865
    AND ESP,0xfffffff8                  ; 0040986b
    MOV ESI,dword ptr [EBP + 0x10]      ; 0040986e
    MOV ECX,dword ptr [EBP + 0x14]      ; 00409871
    MOV EBX,dword ptr [EBP + 0x18]      ; 00409874
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00409877
    FLD float ptr [ECX + 0x8]           ; 0040987a
    FMUL ST0                            ; 0040987d
    FLD float ptr [ECX]                 ; 0040987f
    FMUL ST0                            ; 00409881
    FLD float ptr [ESI + 0x1c]          ; 00409883
    FMUL ST0                            ; 00409886
    FXCH                                ; 00409888
    FADDP ST2,ST0                       ; 0040988a
    FSTP double ptr [ESP + 0x90]        ; 0040988c
    FCOMP double ptr [ESP + 0x90]       ; 00409893
    FNSTSW AX                           ; 0040989a
    SAHF                                ; 0040989c
    JNC 0x0040997f                      ; 0040989d
        ;   XREF to: 0040997f (CONDITIONAL_JUMP)  ; LAB_0040997f
    FLD float ptr [ECX + 0x4]           ; 004098a3
    FCOMP float ptr [ESI + 0x14]        ; 004098a6
    FNSTSW AX                           ; 004098a9
    SAHF                                ; 004098ab
    JC 0x00409b56                       ; 004098ac
        ;   XREF to: 00409b56 (CONDITIONAL_JUMP)  ; LAB_00409b56
    FLD float ptr [ECX + 0x4]           ; 004098b2
    FCOMP float ptr [ESI + 0x18]        ; 004098b5
    FNSTSW AX                           ; 004098b8
    SAHF                                ; 004098ba
    JA 0x00409b56                       ; 004098bb
        ;   XREF to: 00409b56 (CONDITIONAL_JUMP)  ; LAB_00409b56
    FLD float ptr [EBX]                 ; 004098c1
    LEA EAX,[ESP + 0xa8]                ; 004098c3
    FCHS                                ; 004098ca
    FSTP float ptr [ESP + 0xa8]         ; 004098cc
    FLD float ptr [EBX + 0x4]           ; 004098d3
    FCHS                                ; 004098d6
    FSTP float ptr [ESP + 0xac]         ; 004098d8
    FLD float ptr [EBX + 0x8]           ; 004098df
    FCHS                                ; 004098e2
    FSTP float ptr [ESP + 0xb0]         ; 004098e4
    CMP EDX,EAX                         ; 004098eb
    JZ 0x0040990c                       ; 004098ed
        ;   XREF to: 0040990c (CONDITIONAL_JUMP)  ; LAB_0040990c
    MOV EAX,dword ptr [ESP + 0xa8]      ; 004098ef
    MOV dword ptr [EDX],EAX             ; 004098f6
    MOV EAX,dword ptr [ESP + 0xac]      ; 004098f8
    MOV dword ptr [EDX + 0x4],EAX       ; 004098ff
    MOV EAX,dword ptr [ESP + 0xb0]      ; 00409902
    MOV dword ptr [EDX + 0x8],EAX       ; 00409909
    FLD float ptr [EDX + 0x4]           ; 0040990c
        ;   Label: LAB_0040990c
    FMUL ST0                            ; 0040990f
    FLD float ptr [EDX]                 ; 00409911
    FMUL ST0                            ; 00409913
    FADDP                               ; 00409915
    FLD float ptr [EDX + 0x8]           ; 00409917
    FMUL ST0                            ; 0040991a
    FADDP                               ; 0040991c
    FSQRT                               ; 0040991e
    FST float ptr [ESP + 0xa0]          ; 00409920
    FLDZ                                ; 00409927
    FCOMPP                              ; 00409929
    FNSTSW AX                           ; 0040992b
    SAHF                                ; 0040992d
    JNC 0x0040996b                      ; 0040992e
        ;   XREF to: 0040996b (CONDITIONAL_JUMP)  ; LAB_0040996b
    FLD1                                ; 00409930
    FLD float ptr [EDX]                 ; 00409932
    FXCH                                ; 00409934
    FDIV float ptr [ESP + 0xa0]         ; 00409936
    FXCH                                ; 0040993d
    FMUL ST1                            ; 0040993f
    FLD float ptr [EDX + 0x4]           ; 00409941
    FMUL ST2                            ; 00409944
    FLD float ptr [EDX + 0x8]           ; 00409946
    FMULP ST3                           ; 00409949
    FXCH                                ; 0040994b
    FSTP float ptr [EDX]                ; 0040994d
    FSTP float ptr [EDX + 0x4]          ; 0040994f
    FSTP float ptr [EDX + 0x8]          ; 00409952
    XOR EAX,EAX                         ; 00409955
        ;   Label: LAB_00409955
    MOV dword ptr [ESP + 0xf4],EAX      ; 00409957
    MOV EAX,dword ptr [ESP + 0xf4]      ; 0040995e
    MOV ESP,EBP                         ; 00409965
    POP EBP                             ; 00409967
    POP ESI                             ; 00409968
    POP EBX                             ; 00409969
    RET                                 ; 0040996a
    MOV dword ptr [EDX + 0x8],0x0       ; 0040996b
        ;   Label: LAB_0040996b
    MOV EAX,dword ptr [EDX + 0x8]       ; 00409972
    MOV dword ptr [EDX + 0x4],EAX       ; 00409975
    MOV EAX,dword ptr [EDX + 0x4]       ; 00409978
    MOV dword ptr [EDX],EAX             ; 0040997b
    JMP 0x00409955                      ; 0040997d
        ;   XREF to: 00409955 (UNCONDITIONAL_JUMP)  ; LAB_00409955
    FLD float ptr [EBX + 0x8]           ; 0040997f
        ;   Label: LAB_0040997f
    FMUL ST0                            ; 00409982
    FLD float ptr [EBX]                 ; 00409984
    FMUL ST0                            ; 00409986
    FADDP                               ; 00409988
    FSQRT                               ; 0040998a
    FLDZ                                ; 0040998c
    FXCH                                ; 0040998e
    FSTP double ptr [ESP]               ; 00409990
    FCOMP double ptr [ESP]              ; 00409993
    FNSTSW AX                           ; 00409996
    SAHF                                ; 00409998
    JNC 0x00409b56                      ; 00409999
        ;   XREF to: 00409b56 (CONDITIONAL_JUMP)  ; LAB_00409b56
    FLD1                                ; 0040999f
    FDIV double ptr [ESP]               ; 004099a1
    FLD float ptr [EBX]                 ; 004099a4
    FST double ptr [ESP + 0x60]         ; 004099a6
    FXCH                                ; 004099aa
    FSTP double ptr [ESP + 0x20]        ; 004099ac
    FMUL double ptr [ESP + 0x20]        ; 004099b0
    FLD float ptr [EBX + 0x8]           ; 004099b4
    FST double ptr [ESP + 0x78]         ; 004099b7
    FMUL double ptr [ESP + 0x20]        ; 004099bb
    FLD float ptr [ECX + 0x8]           ; 004099bf
    FST double ptr [ESP + 0x8]          ; 004099c2
    FXCH                                ; 004099c6
    FSTP double ptr [ESP + 0x48]        ; 004099c8
    FMUL double ptr [ESP + 0x48]        ; 004099cc
    FXCH                                ; 004099d0
    FSTP double ptr [ESP + 0x58]        ; 004099d2
    FLD float ptr [ECX]                 ; 004099d6
    FST double ptr [ESP + 0x10]         ; 004099d8
    FMUL double ptr [ESP + 0x58]        ; 004099dc
    FADDP                               ; 004099e0
    FLDZ                                ; 004099e2
    FXCH                                ; 004099e4
    FCHS                                ; 004099e6
    FSTP double ptr [ESP + 0x88]        ; 004099e8
    FCOMP double ptr [ESP + 0x88]       ; 004099ef
    FNSTSW AX                           ; 004099f6
    SAHF                                ; 004099f8
    JNC 0x00409b56                      ; 004099f9
        ;   XREF to: 00409b56 (CONDITIONAL_JUMP)  ; LAB_00409b56
    FLD double ptr [ESP + 0x88]         ; 004099ff
    FLD double ptr [ESP + 0x58]         ; 00409a06
    FMUL ST1                            ; 00409a0a
    FLD double ptr [ESP + 0x48]         ; 00409a0c
    FMULP ST2                           ; 00409a10
    FADD double ptr [ESP + 0x10]        ; 00409a12
    FMUL ST0                            ; 00409a16
    FXCH                                ; 00409a18
    FADD double ptr [ESP + 0x8]         ; 00409a1a
    FMUL ST0                            ; 00409a1e
    FADDP                               ; 00409a20
    FST double ptr [ESP + 0x68]         ; 00409a22
    FCOMP double ptr [ESP + 0x90]       ; 00409a26
    FNSTSW AX                           ; 00409a2d
    SAHF                                ; 00409a2f
    JNC 0x00409b2a                      ; 00409a30
        ;   XREF to: 00409b2a (CONDITIONAL_JUMP)  ; LAB_00409b2a
    FLD double ptr [ESP + 0x90]         ; 00409a36
    FSUB double ptr [ESP + 0x68]        ; 00409a3d
    FSQRT                               ; 00409a41
    FSUBR double ptr [ESP + 0x88]       ; 00409a43
    FST double ptr [ESP + 0x70]         ; 00409a4a
    FCOMP double ptr [ESP]              ; 00409a4e
    FNSTSW AX                           ; 00409a51
    SAHF                                ; 00409a53
    JA 0x00409b2a                       ; 00409a54
        ;   XREF to: 00409b2a (CONDITIONAL_JUMP)  ; LAB_00409b2a
    FLD double ptr [ESP + 0x70]         ; 00409a5a
    FMUL double ptr [ESP + 0x20]        ; 00409a5e
    FLD float ptr [EBX + 0x4]           ; 00409a62
    FXCH                                ; 00409a65
    FSTP double ptr [ESP + 0x40]        ; 00409a67
    FMUL double ptr [ESP + 0x40]        ; 00409a6b
    FADD float ptr [ECX + 0x4]          ; 00409a6f
    FLD float ptr [ESI + 0x14]          ; 00409a72
    FXCH                                ; 00409a75
    FSTP double ptr [ESP + 0x80]        ; 00409a77
    FCOMP double ptr [ESP + 0x80]       ; 00409a7e
    FNSTSW AX                           ; 00409a85
    SAHF                                ; 00409a87
    JA 0x00409b56                       ; 00409a88
        ;   XREF to: 00409b56 (CONDITIONAL_JUMP)  ; LAB_00409b56
    FLD float ptr [ESI + 0x18]          ; 00409a8e
    FCOMP double ptr [ESP + 0x80]       ; 00409a91
    FNSTSW AX                           ; 00409a98
    SAHF                                ; 00409a9a
    JC 0x00409b56                       ; 00409a9b
        ;   XREF to: 00409b56 (CONDITIONAL_JUMP)  ; LAB_00409b56
    FLD double ptr [ESP + 0x40]         ; 00409aa1
    FLD double ptr [ESP + 0x60]         ; 00409aa5
    FMUL ST1                            ; 00409aa9
    FLD double ptr [ESP + 0x78]         ; 00409aab
    MOV dword ptr [EDX + 0x4],0x0       ; 00409aaf
    FMULP ST2                           ; 00409ab6
    FLD float ptr [EDX + 0x4]           ; 00409ab8
    FMUL ST0                            ; 00409abb
    FXCH                                ; 00409abd
    FADD double ptr [ESP + 0x10]        ; 00409abf
    FST float ptr [EDX]                 ; 00409ac3
    FMUL float ptr [EDX]                ; 00409ac5
    FXCH ST2                            ; 00409ac7
    FADD double ptr [ESP + 0x8]         ; 00409ac9
    FXCH ST2                            ; 00409acd
    FADDP                               ; 00409acf
    FXCH                                ; 00409ad1
    FST float ptr [EDX + 0x8]           ; 00409ad3
    FMUL float ptr [EDX + 0x8]          ; 00409ad6
    FADDP                               ; 00409ad9
    FSQRT                               ; 00409adb
    FST float ptr [ESP + 0xa4]          ; 00409add
    FLDZ                                ; 00409ae4
    FCOMPP                              ; 00409ae6
    FNSTSW AX                           ; 00409ae8
    SAHF                                ; 00409aea
    JNC 0x00409b42                      ; 00409aeb
        ;   XREF to: 00409b42 (CONDITIONAL_JUMP)  ; LAB_00409b42
    FLD1                                ; 00409aed
    FLD float ptr [EDX]                 ; 00409aef
    FXCH                                ; 00409af1
    FDIV float ptr [ESP + 0xa4]         ; 00409af3
    FXCH                                ; 00409afa
    FMUL ST1                            ; 00409afc
    FLD float ptr [EDX + 0x4]           ; 00409afe
    FMUL ST2                            ; 00409b01
    FLD float ptr [EDX + 0x8]           ; 00409b03
    FMULP ST3                           ; 00409b06
    FXCH                                ; 00409b08
    FSTP float ptr [EDX]                ; 00409b0a
    FSTP float ptr [EDX + 0x4]          ; 00409b0c
    FSTP float ptr [EDX + 0x8]          ; 00409b0f
    FLD double ptr [ESP + 0x40]         ; 00409b12
        ;   Label: LAB_00409b12
    FSTP float ptr [ESP + 0xf4]         ; 00409b16
    MOV EAX,dword ptr [ESP + 0xf4]      ; 00409b1d
    MOV ESP,EBP                         ; 00409b24
    POP EBP                             ; 00409b26
    POP ESI                             ; 00409b27
    POP EBX                             ; 00409b28
    RET                                 ; 00409b29
    MOV dword ptr [ESP + 0xf4],0x40000000 ; 00409b2a
        ;   Label: LAB_00409b2a
    MOV EAX,dword ptr [ESP + 0xf4]      ; 00409b35
    MOV ESP,EBP                         ; 00409b3c
    POP EBP                             ; 00409b3e
    POP ESI                             ; 00409b3f
    POP EBX                             ; 00409b40
    RET                                 ; 00409b41
    MOV dword ptr [EDX + 0x8],0x0       ; 00409b42
        ;   Label: LAB_00409b42
    MOV EAX,dword ptr [EDX + 0x8]       ; 00409b49
    MOV dword ptr [EDX + 0x4],EAX       ; 00409b4c
    MOV EAX,dword ptr [EDX + 0x4]       ; 00409b4f
    MOV dword ptr [EDX],EAX             ; 00409b52
    JMP 0x00409b12                      ; 00409b54
        ;   XREF to: 00409b12 (UNCONDITIONAL_JUMP)  ; LAB_00409b12
    FLD float ptr [ECX + 0x4]           ; 00409b56
        ;   Label: LAB_00409b56
    FCOMP float ptr [ESI + 0x14]        ; 00409b59
    FNSTSW AX                           ; 00409b5c
    SAHF                                ; 00409b5e
    JNC 0x00409c0c                      ; 00409b5f
        ;   XREF to: 00409c0c (CONDITIONAL_JUMP)  ; LAB_00409c0c
    FLDZ                                ; 00409b65
    FLD float ptr [EBX + 0x4]           ; 00409b67
    FSTP double ptr [ESP + 0x30]        ; 00409b6a
    FCOMP double ptr [ESP + 0x30]       ; 00409b6e
    FNSTSW AX                           ; 00409b72
    SAHF                                ; 00409b74
    JNC 0x00409c7b                      ; 00409b75
        ;   XREF to: 00409c7b (CONDITIONAL_JUMP)  ; LAB_00409c7b
    FLD float ptr [ESI + 0x14]          ; 00409b7b
    FSUB float ptr [ECX + 0x4]          ; 00409b7e
    FST double ptr [ESP + 0x38]         ; 00409b81
    FCOMP double ptr [ESP + 0x30]       ; 00409b85
    FNSTSW AX                           ; 00409b89
    SAHF                                ; 00409b8b
    JNC 0x00409c7b                      ; 00409b8c
        ;   XREF to: 00409c7b (CONDITIONAL_JUMP)  ; LAB_00409c7b
    FLD double ptr [ESP + 0x38]         ; 00409b92
    FDIV double ptr [ESP + 0x30]        ; 00409b96
    FLD float ptr [EBX]                 ; 00409b9a
    FXCH                                ; 00409b9c
    FSTP double ptr [ESP + 0x18]        ; 00409b9e
    FMUL double ptr [ESP + 0x18]        ; 00409ba2
    FLD float ptr [EBX + 0x8]           ; 00409ba6
    FMUL double ptr [ESP + 0x18]        ; 00409ba9
    FLD float ptr [ECX]                 ; 00409bad
    FADDP ST2,ST0                       ; 00409baf
    FLD ST1                             ; 00409bb1
    FMULP ST2                           ; 00409bb3
    FADD float ptr [ECX + 0x8]          ; 00409bb5
    FMUL ST0                            ; 00409bb8
    FADDP                               ; 00409bba
    FCOMP double ptr [ESP + 0x90]       ; 00409bbc
    FNSTSW AX                           ; 00409bc3
    SAHF                                ; 00409bc5
    JBE 0x00409be0                      ; 00409bc6
        ;   XREF to: 00409be0 (CONDITIONAL_JUMP)  ; LAB_00409be0
    MOV dword ptr [ESP + 0xf4],0x40000000 ; 00409bc8
    MOV EAX,dword ptr [ESP + 0xf4]      ; 00409bd3
    MOV ESP,EBP                         ; 00409bda
    POP EBP                             ; 00409bdc
    POP ESI                             ; 00409bdd
    POP EBX                             ; 00409bde
    RET                                 ; 00409bdf
    MOV dword ptr [EDX + 0x4],0xbf800000 ; 00409be0
        ;   Label: LAB_00409be0
    FLD double ptr [ESP + 0x18]         ; 00409be7
    MOV dword ptr [EDX + 0x8],0x0       ; 00409beb
    FSTP float ptr [ESP + 0xf4]         ; 00409bf2
    MOV dword ptr [EDX],0x0             ; 00409bf9
    MOV EAX,dword ptr [ESP + 0xf4]      ; 00409bff
    MOV ESP,EBP                         ; 00409c06
    POP EBP                             ; 00409c08
    POP ESI                             ; 00409c09
    POP EBX                             ; 00409c0a
    RET                                 ; 00409c0b
    FLD float ptr [ECX + 0x4]           ; 00409c0c
        ;   Label: LAB_00409c0c
    FCOMP float ptr [ESI + 0x18]        ; 00409c0f
    FNSTSW AX                           ; 00409c12
    SAHF                                ; 00409c14
    JBE 0x00409c7b                      ; 00409c15
        ;   XREF to: 00409c7b (CONDITIONAL_JUMP)  ; LAB_00409c7b
    FLDZ                                ; 00409c17
    FLD float ptr [EBX + 0x4]           ; 00409c19
    FSTP double ptr [ESP + 0x28]        ; 00409c1c
    FCOMP double ptr [ESP + 0x28]       ; 00409c20
    FNSTSW AX                           ; 00409c24
    SAHF                                ; 00409c26
    JBE 0x00409c7b                      ; 00409c27
        ;   XREF to: 00409c7b (CONDITIONAL_JUMP)  ; LAB_00409c7b
    FLD float ptr [ESI + 0x18]          ; 00409c29
    FSUB float ptr [ECX + 0x4]          ; 00409c2c
    FST double ptr [ESP + 0x50]         ; 00409c2f
    FCOMP double ptr [ESP + 0x28]       ; 00409c33
    FNSTSW AX                           ; 00409c37
    SAHF                                ; 00409c39
    JBE 0x00409c7b                      ; 00409c3a
        ;   XREF to: 00409c7b (CONDITIONAL_JUMP)  ; LAB_00409c7b
    FLD double ptr [ESP + 0x50]         ; 00409c3c
    FDIV double ptr [ESP + 0x28]        ; 00409c40
    FLD float ptr [EBX]                 ; 00409c44
    FXCH                                ; 00409c46
    FSTP double ptr [ESP + 0x98]        ; 00409c48
    FMUL double ptr [ESP + 0x98]        ; 00409c4f
    FLD float ptr [EBX + 0x8]           ; 00409c56
    FMUL double ptr [ESP + 0x98]        ; 00409c59
    FLD float ptr [ECX]                 ; 00409c60
    FADDP ST2,ST0                       ; 00409c62
    FLD ST1                             ; 00409c64
    FMULP ST2                           ; 00409c66
    FADD float ptr [ECX + 0x8]          ; 00409c68
    FMUL ST0                            ; 00409c6b
    FADDP                               ; 00409c6d
    FCOMP double ptr [ESP + 0x90]       ; 00409c6f
    FNSTSW AX                           ; 00409c76
    SAHF                                ; 00409c78
    JBE 0x00409c93                      ; 00409c79
        ;   XREF to: 00409c93 (CONDITIONAL_JUMP)  ; LAB_00409c93
    MOV dword ptr [ESP + 0xf4],0x40000000 ; 00409c7b
        ;   Label: LAB_00409c7b
    MOV EAX,dword ptr [ESP + 0xf4]      ; 00409c86
    MOV ESP,EBP                         ; 00409c8d
    POP EBP                             ; 00409c8f
    POP ESI                             ; 00409c90
    POP EBX                             ; 00409c91
    RET                                 ; 00409c92
    MOV dword ptr [EDX + 0x4],0x3f800000 ; 00409c93
        ;   Label: LAB_00409c93
    FLD double ptr [ESP + 0x98]         ; 00409c9a
    MOV dword ptr [EDX + 0x8],0x0       ; 00409ca1
    FSTP float ptr [ESP + 0xf4]         ; 00409ca8
    MOV dword ptr [EDX],0x0             ; 00409caf
    MOV EAX,dword ptr [ESP + 0xf4]      ; 00409cb5
    MOV ESP,EBP                         ; 00409cbc
    POP EBP                             ; 00409cbe
    POP ESI                             ; 00409cbf
    POP EBX                             ; 00409cc0
    RET                                 ; 00409cc1

