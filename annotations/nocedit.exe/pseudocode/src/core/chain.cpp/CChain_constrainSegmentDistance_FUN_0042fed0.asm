; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_chain_cpp_CChain_constrainSegmentDistance_FUN_0042fed0(CChain *this_ptr,SChainVertex *vertex_a,SChainVertex *vertex_b)
;
; Parameters:
; CChain *         Stack[0x4]:4   this_ptr
; SChainVertex *   Stack[0x8]:4   vertex_a
; SChainVertex *   Stack[0xc]:4   vertex_b
; Local Variables:
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
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_chain.cpp_CChain_process_FUN_004300d0 at 004303e9
;
; Referenced Globals:
;   int INT_02d7a7b8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042fed0
        ;   Label: core_chain.cpp_CChain_constrainSegmentDistance_FUN_0042fed0
    PUSH ESI                            ; 0042fed1
    PUSH EDI                            ; 0042fed2
    SUB ESP,0x5c                        ; 0042fed3
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0042fed6
    MOV EDX,dword ptr [ESP + 0x70]      ; 0042feda
    MOV ECX,dword ptr [ESP + 0x74]      ; 0042fede
    CMP dword ptr [EBX + 0x288],0x0     ; 0042fee2
    JZ 0x0042ff17                       ; 0042fee9
        ;   XREF to: 0042ff17 (CONDITIONAL_JUMP)  ; LAB_0042ff17
    FLD float ptr [EDX + 0x4]           ; 0042feeb
    FCOMP float ptr [EBX + 0x56c]       ; 0042feee
    FNSTSW AX                           ; 0042fef4
    SAHF                                ; 0042fef6
    JNC 0x0042ff17                      ; 0042fef7
        ;   XREF to: 0042ff17 (CONDITIONAL_JUMP)  ; LAB_0042ff17
    LEA EAX,[EDX + 0xc]                 ; 0042fef9
    MOV dword ptr [EAX + 0x8],0x0       ; 0042fefc
    MOV ESI,dword ptr [EAX + 0x8]       ; 0042ff03
    MOV dword ptr [EAX + 0x4],ESI       ; 0042ff06
    MOV ESI,dword ptr [EAX + 0x4]       ; 0042ff09
    MOV dword ptr [EAX],ESI             ; 0042ff0c
    MOV EAX,dword ptr [EBX + 0x56c]     ; 0042ff0e
    MOV dword ptr [EDX + 0x4],EAX       ; 0042ff14
    FLD float ptr [EDX]                 ; 0042ff17
        ;   Label: LAB_0042ff17
    FSUB float ptr [ECX]                ; 0042ff19
    FSTP float ptr [ESP]                ; 0042ff1b
    FLD float ptr [EDX + 0x4]           ; 0042ff1e
    FSUB float ptr [ECX + 0x4]          ; 0042ff21
    MOV EAX,ESP                         ; 0042ff24
    FSTP float ptr [ESP + 0x4]          ; 0042ff26
    FLD float ptr [EDX + 0x8]           ; 0042ff2a
    FSUB float ptr [ECX + 0x8]          ; 0042ff2d
    LEA ESI,[ESP + 0x30]                ; 0042ff30
    FSTP float ptr [ESP + 0x8]          ; 0042ff34
    CMP ESI,EAX                         ; 0042ff38
    JZ 0x0042ff53                       ; 0042ff3a
        ;   XREF to: 0042ff53 (CONDITIONAL_JUMP)  ; LAB_0042ff53
    MOV EAX,dword ptr [ESP]             ; 0042ff3c
    MOV dword ptr [ESP + 0x30],EAX      ; 0042ff3f
    MOV EAX,dword ptr [ESP + 0x4]       ; 0042ff43
    MOV dword ptr [ESP + 0x34],EAX      ; 0042ff47
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042ff4b
    MOV dword ptr [ESP + 0x38],EAX      ; 0042ff4f
    FLD float ptr [ESP + 0x34]          ; 0042ff53
        ;   Label: LAB_0042ff53
    FMUL ST0                            ; 0042ff57
    FLD float ptr [ESP + 0x30]          ; 0042ff59
    FMUL ST0                            ; 0042ff5d
    FADDP                               ; 0042ff5f
    FLD float ptr [ESP + 0x38]          ; 0042ff61
    FMUL ST0                            ; 0042ff65
    FADDP                               ; 0042ff67
    FSTP float ptr [ESP + 0x48]         ; 0042ff69
    MOV EAX,dword ptr [ESP + 0x48]      ; 0042ff6d
    MOV EDI,dword ptr [0x02d7a7b8]      ; 0042ff71 | INT_02d7a7b8
    SAR EAX,0x1                         ; 0042ff77
    ADD EAX,EDI                         ; 0042ff79
    MOV dword ptr [ESP + 0x54],EAX      ; 0042ff7b
    MOV EAX,dword ptr [EBX + 0x160]     ; 0042ff7f
    MOV dword ptr [ESP + 0x50],EAX      ; 0042ff85
    FLD float ptr [ESP + 0x54]          ; 0042ff89
    FCOMP float ptr [ESP + 0x50]        ; 0042ff8d
    FNSTSW AX                           ; 0042ff91
    SAHF                                ; 0042ff93
    JA 0x0042ff9d                       ; 0042ff94
        ;   XREF to: 0042ff9d (CONDITIONAL_JUMP)  ; LAB_0042ff9d
    ADD ESP,0x5c                        ; 0042ff96
    POP EDI                             ; 0042ff99
    POP ESI                             ; 0042ff9a
    POP EBX                             ; 0042ff9b
    RET                                 ; 0042ff9c
    FLD float ptr [ESP + 0x54]          ; 0042ff9d
        ;   Label: LAB_0042ff9d
    FLD ST0                             ; 0042ffa1
    FSUB float ptr [ESP + 0x50]         ; 0042ffa3
    FLD float ptr [ESP + 0x30]          ; 0042ffa7
    FXCH                                ; 0042ffab
    FSTP float ptr [ESP + 0x58]         ; 0042ffad
    FMUL float ptr [ESP + 0x58]         ; 0042ffb1
    FLD float ptr [ESP + 0x34]          ; 0042ffb5
    FMUL float ptr [ESP + 0x58]         ; 0042ffb9
    FLD float ptr [ESP + 0x38]          ; 0042ffbd
    FMUL float ptr [ESP + 0x58]         ; 0042ffc1
    FLD1                                ; 0042ffc5
    FXCH ST3                            ; 0042ffc7
    FST float ptr [ESP + 0x24]          ; 0042ffc9
    FXCH ST3                            ; 0042ffcd
    FDIVRP ST4,ST0                      ; 0042ffcf
    FXCH ST2                            ; 0042ffd1
    FMUL ST3                            ; 0042ffd3
    FXCH                                ; 0042ffd5
    FST float ptr [ESP + 0x28]          ; 0042ffd7
    FMUL ST3                            ; 0042ffdb
    FXCH ST2                            ; 0042ffdd
    FST float ptr [ESP + 0x2c]          ; 0042ffdf
    FMULP ST3                           ; 0042ffe3
    FSTP float ptr [ESP + 0x18]         ; 0042ffe5
    FSTP float ptr [ESP + 0x1c]         ; 0042ffe9
    FSTP float ptr [ESP + 0x20]         ; 0042ffed
    FLD float ptr [EDX]                 ; 0042fff1
    FSUB float ptr [ESP + 0x18]         ; 0042fff3
    FLD float ptr [EDX + 0x4]           ; 0042fff7
    FXCH                                ; 0042fffa
    FSTP float ptr [EDX]                ; 0042fffc
    FSUB float ptr [ESP + 0x1c]         ; 0042fffe
    FLD float ptr [EDX + 0x8]           ; 00430002
    FXCH                                ; 00430005
    FSTP float ptr [EDX + 0x4]          ; 00430007
    FSUB float ptr [ESP + 0x20]         ; 0043000a
    LEA EAX,[EBX + 0x570]               ; 0043000e
    FSTP float ptr [EDX + 0x8]          ; 00430014
    FLD float ptr [ESP + 0x18]          ; 00430017
    FMUL float ptr [EAX]                ; 0043001b
    FLD float ptr [ESP + 0x1c]          ; 0043001d
    FXCH                                ; 00430021
    FSTP float ptr [ESP + 0x3c]         ; 00430023
    FMUL float ptr [EAX]                ; 00430027
    FLD float ptr [ESP + 0x20]          ; 00430029
    FXCH                                ; 0043002d
    FSTP float ptr [ESP + 0x40]         ; 0043002f
    FMUL float ptr [EAX]                ; 00430033
    FSTP float ptr [ESP + 0x44]         ; 00430035
    FLD float ptr [EDX + 0xc]           ; 00430039
    FSUB float ptr [ESP + 0x3c]         ; 0043003c
    FLD float ptr [EDX + 0x10]          ; 00430040
    FXCH                                ; 00430043
    FSTP float ptr [EDX + 0xc]          ; 00430045
    FSUB float ptr [ESP + 0x40]         ; 00430048
    FLD float ptr [EDX + 0x14]          ; 0043004c
    FXCH                                ; 0043004f
    FSTP float ptr [EDX + 0x10]         ; 00430051
    FSUB float ptr [ESP + 0x44]         ; 00430054
    FSTP float ptr [EDX + 0x14]         ; 00430058
    FLD float ptr [ECX]                 ; 0043005b
    FADD float ptr [ESP + 0x18]         ; 0043005d
    FLD float ptr [ECX + 0x4]           ; 00430061
    FXCH                                ; 00430064
    FSTP float ptr [ECX]                ; 00430066
    FADD float ptr [ESP + 0x1c]         ; 00430068
    FLD float ptr [ECX + 0x8]           ; 0043006c
    FXCH                                ; 0043006f
    FSTP float ptr [ECX + 0x4]          ; 00430071
    FADD float ptr [ESP + 0x20]         ; 00430074
    FSTP float ptr [ECX + 0x8]          ; 00430078
    FLD float ptr [ESP + 0x18]          ; 0043007b
    FMUL float ptr [EAX]                ; 0043007f
    FLD float ptr [ESP + 0x1c]          ; 00430081
    FXCH                                ; 00430085
    FSTP float ptr [ESP + 0xc]          ; 00430087
    FMUL float ptr [EAX]                ; 0043008b
    FLD float ptr [ESP + 0x20]          ; 0043008d
    FXCH                                ; 00430091
    FSTP float ptr [ESP + 0x10]         ; 00430093
    FMUL float ptr [EAX]                ; 00430097
    FSTP float ptr [ESP + 0x14]         ; 00430099
    FLD float ptr [ECX + 0xc]           ; 0043009d
    FADD float ptr [ESP + 0xc]          ; 004300a0
    FLD float ptr [ECX + 0x10]          ; 004300a4
    FXCH                                ; 004300a7
    FSTP float ptr [ECX + 0xc]          ; 004300a9
    FADD float ptr [ESP + 0x10]         ; 004300ac
    FLD float ptr [ECX + 0x14]          ; 004300b0
    FXCH                                ; 004300b3
    FSTP float ptr [ECX + 0x10]         ; 004300b5
    FADD float ptr [ESP + 0x14]         ; 004300b8
    FSTP float ptr [ECX + 0x14]         ; 004300bc
    ADD ESP,0x5c                        ; 004300bf
    POP EDI                             ; 004300c2
    POP ESI                             ; 004300c3
    POP EBX                             ; 004300c4
    RET                                 ; 004300c5

