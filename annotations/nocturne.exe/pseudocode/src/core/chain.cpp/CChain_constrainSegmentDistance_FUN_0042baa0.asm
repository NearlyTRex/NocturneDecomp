; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_chain_cpp_CChain_constrainSegmentDistance_FUN_0042baa0(int param_1,float *param_2,float *param_3)
;
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
;   core_chain.cpp_CChain_process_FUN_0042bca0 at 0042bfab
;
; Referenced Globals:
;   undefined4 DAT_01c7070c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042baa0
        ;   Label: core_chain.cpp_CChain_constrainSegmentDistance_FUN_0042baa0
    PUSH ESI                            ; 0042baa1
    PUSH EDI                            ; 0042baa2
    SUB ESP,0x5c                        ; 0042baa3
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0042baa6
    MOV EDX,dword ptr [ESP + 0x70]      ; 0042baaa
    MOV ECX,dword ptr [ESP + 0x74]      ; 0042baae
    CMP dword ptr [EBX + 0x280],0x0     ; 0042bab2
    JZ 0x0042bae7                       ; 0042bab9
        ;   XREF to: 0042bae7 (CONDITIONAL_JUMP)  ; LAB_0042bae7
    FLD float ptr [EDX + 0x4]           ; 0042babb
    FCOMP float ptr [EBX + 0x564]       ; 0042babe
    FNSTSW AX                           ; 0042bac4
    SAHF                                ; 0042bac6
    JNC 0x0042bae7                      ; 0042bac7
        ;   XREF to: 0042bae7 (CONDITIONAL_JUMP)  ; LAB_0042bae7
    LEA EAX,[EDX + 0xc]                 ; 0042bac9
    MOV dword ptr [EAX + 0x8],0x0       ; 0042bacc
    MOV ESI,dword ptr [EAX + 0x8]       ; 0042bad3
    MOV dword ptr [EAX + 0x4],ESI       ; 0042bad6
    MOV ESI,dword ptr [EAX + 0x4]       ; 0042bad9
    MOV dword ptr [EAX],ESI             ; 0042badc
    MOV EAX,dword ptr [EBX + 0x564]     ; 0042bade
    MOV dword ptr [EDX + 0x4],EAX       ; 0042bae4
    FLD float ptr [EDX]                 ; 0042bae7
        ;   Label: LAB_0042bae7
    FSUB float ptr [ECX]                ; 0042bae9
    FSTP float ptr [ESP]                ; 0042baeb
    FLD float ptr [EDX + 0x4]           ; 0042baee
    FSUB float ptr [ECX + 0x4]          ; 0042baf1
    MOV EAX,ESP                         ; 0042baf4
    FSTP float ptr [ESP + 0x4]          ; 0042baf6
    FLD float ptr [EDX + 0x8]           ; 0042bafa
    FSUB float ptr [ECX + 0x8]          ; 0042bafd
    LEA ESI,[ESP + 0x30]                ; 0042bb00
    FSTP float ptr [ESP + 0x8]          ; 0042bb04
    CMP ESI,EAX                         ; 0042bb08
    JZ 0x0042bb23                       ; 0042bb0a
        ;   XREF to: 0042bb23 (CONDITIONAL_JUMP)  ; LAB_0042bb23
    MOV EAX,dword ptr [ESP]             ; 0042bb0c
    MOV dword ptr [ESP + 0x30],EAX      ; 0042bb0f
    MOV EAX,dword ptr [ESP + 0x4]       ; 0042bb13
    MOV dword ptr [ESP + 0x34],EAX      ; 0042bb17
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042bb1b
    MOV dword ptr [ESP + 0x38],EAX      ; 0042bb1f
    FLD float ptr [ESP + 0x34]          ; 0042bb23
        ;   Label: LAB_0042bb23
    FMUL ST0                            ; 0042bb27
    FLD float ptr [ESP + 0x30]          ; 0042bb29
    FMUL ST0                            ; 0042bb2d
    FADDP                               ; 0042bb2f
    FLD float ptr [ESP + 0x38]          ; 0042bb31
    FMUL ST0                            ; 0042bb35
    FADDP                               ; 0042bb37
    FSTP float ptr [ESP + 0x48]         ; 0042bb39
    MOV EAX,dword ptr [ESP + 0x48]      ; 0042bb3d
    MOV EDI,dword ptr [0x01c7070c]      ; 0042bb41 | DAT_01c7070c
    SAR EAX,0x1                         ; 0042bb47
    ADD EAX,EDI                         ; 0042bb49
    MOV dword ptr [ESP + 0x54],EAX      ; 0042bb4b
    MOV EAX,dword ptr [EBX + 0x158]     ; 0042bb4f
    MOV dword ptr [ESP + 0x50],EAX      ; 0042bb55
    FLD float ptr [ESP + 0x54]          ; 0042bb59
    FCOMP float ptr [ESP + 0x50]        ; 0042bb5d
    FNSTSW AX                           ; 0042bb61
    SAHF                                ; 0042bb63
    JA 0x0042bb6d                       ; 0042bb64
        ;   XREF to: 0042bb6d (CONDITIONAL_JUMP)  ; LAB_0042bb6d
    ADD ESP,0x5c                        ; 0042bb66
    POP EDI                             ; 0042bb69
    POP ESI                             ; 0042bb6a
    POP EBX                             ; 0042bb6b
    RET                                 ; 0042bb6c
    FLD float ptr [ESP + 0x54]          ; 0042bb6d
        ;   Label: LAB_0042bb6d
    FLD ST0                             ; 0042bb71
    FSUB float ptr [ESP + 0x50]         ; 0042bb73
    FLD float ptr [ESP + 0x30]          ; 0042bb77
    FXCH                                ; 0042bb7b
    FSTP float ptr [ESP + 0x58]         ; 0042bb7d
    FMUL float ptr [ESP + 0x58]         ; 0042bb81
    FLD float ptr [ESP + 0x34]          ; 0042bb85
    FMUL float ptr [ESP + 0x58]         ; 0042bb89
    FLD float ptr [ESP + 0x38]          ; 0042bb8d
    FMUL float ptr [ESP + 0x58]         ; 0042bb91
    FLD1                                ; 0042bb95
    FXCH ST3                            ; 0042bb97
    FST float ptr [ESP + 0x24]          ; 0042bb99
    FXCH ST3                            ; 0042bb9d
    FDIVRP ST4,ST0                      ; 0042bb9f
    FXCH ST2                            ; 0042bba1
    FMUL ST3                            ; 0042bba3
    FXCH                                ; 0042bba5
    FST float ptr [ESP + 0x28]          ; 0042bba7
    FMUL ST3                            ; 0042bbab
    FXCH ST2                            ; 0042bbad
    FST float ptr [ESP + 0x2c]          ; 0042bbaf
    FMULP ST3                           ; 0042bbb3
    FSTP float ptr [ESP + 0x18]         ; 0042bbb5
    FSTP float ptr [ESP + 0x1c]         ; 0042bbb9
    FSTP float ptr [ESP + 0x20]         ; 0042bbbd
    FLD float ptr [EDX]                 ; 0042bbc1
    FSUB float ptr [ESP + 0x18]         ; 0042bbc3
    FLD float ptr [EDX + 0x4]           ; 0042bbc7
    FXCH                                ; 0042bbca
    FSTP float ptr [EDX]                ; 0042bbcc
    FSUB float ptr [ESP + 0x1c]         ; 0042bbce
    FLD float ptr [EDX + 0x8]           ; 0042bbd2
    FXCH                                ; 0042bbd5
    FSTP float ptr [EDX + 0x4]          ; 0042bbd7
    FSUB float ptr [ESP + 0x20]         ; 0042bbda
    LEA EAX,[EBX + 0x568]               ; 0042bbde
    FSTP float ptr [EDX + 0x8]          ; 0042bbe4
    FLD float ptr [ESP + 0x18]          ; 0042bbe7
    FMUL float ptr [EAX]                ; 0042bbeb
    FLD float ptr [ESP + 0x1c]          ; 0042bbed
    FXCH                                ; 0042bbf1
    FSTP float ptr [ESP + 0x3c]         ; 0042bbf3
    FMUL float ptr [EAX]                ; 0042bbf7
    FLD float ptr [ESP + 0x20]          ; 0042bbf9
    FXCH                                ; 0042bbfd
    FSTP float ptr [ESP + 0x40]         ; 0042bbff
    FMUL float ptr [EAX]                ; 0042bc03
    FSTP float ptr [ESP + 0x44]         ; 0042bc05
    FLD float ptr [EDX + 0xc]           ; 0042bc09
    FSUB float ptr [ESP + 0x3c]         ; 0042bc0c
    FLD float ptr [EDX + 0x10]          ; 0042bc10
    FXCH                                ; 0042bc13
    FSTP float ptr [EDX + 0xc]          ; 0042bc15
    FSUB float ptr [ESP + 0x40]         ; 0042bc18
    FLD float ptr [EDX + 0x14]          ; 0042bc1c
    FXCH                                ; 0042bc1f
    FSTP float ptr [EDX + 0x10]         ; 0042bc21
    FSUB float ptr [ESP + 0x44]         ; 0042bc24
    FSTP float ptr [EDX + 0x14]         ; 0042bc28
    FLD float ptr [ECX]                 ; 0042bc2b
    FADD float ptr [ESP + 0x18]         ; 0042bc2d
    FLD float ptr [ECX + 0x4]           ; 0042bc31
    FXCH                                ; 0042bc34
    FSTP float ptr [ECX]                ; 0042bc36
    FADD float ptr [ESP + 0x1c]         ; 0042bc38
    FLD float ptr [ECX + 0x8]           ; 0042bc3c
    FXCH                                ; 0042bc3f
    FSTP float ptr [ECX + 0x4]          ; 0042bc41
    FADD float ptr [ESP + 0x20]         ; 0042bc44
    FSTP float ptr [ECX + 0x8]          ; 0042bc48
    FLD float ptr [ESP + 0x18]          ; 0042bc4b
    FMUL float ptr [EAX]                ; 0042bc4f
    FLD float ptr [ESP + 0x1c]          ; 0042bc51
    FXCH                                ; 0042bc55
    FSTP float ptr [ESP + 0xc]          ; 0042bc57
    FMUL float ptr [EAX]                ; 0042bc5b
    FLD float ptr [ESP + 0x20]          ; 0042bc5d
    FXCH                                ; 0042bc61
    FSTP float ptr [ESP + 0x10]         ; 0042bc63
    FMUL float ptr [EAX]                ; 0042bc67
    FSTP float ptr [ESP + 0x14]         ; 0042bc69
    FLD float ptr [ECX + 0xc]           ; 0042bc6d
    FADD float ptr [ESP + 0xc]          ; 0042bc70
    FLD float ptr [ECX + 0x10]          ; 0042bc74
    FXCH                                ; 0042bc77
    FSTP float ptr [ECX + 0xc]          ; 0042bc79
    FADD float ptr [ESP + 0x10]         ; 0042bc7c
    FLD float ptr [ECX + 0x14]          ; 0042bc80
    FXCH                                ; 0042bc83
    FSTP float ptr [ECX + 0x10]         ; 0042bc85
    FADD float ptr [ESP + 0x14]         ; 0042bc88
    FSTP float ptr [ECX + 0x14]         ; 0042bc8c
    ADD ESP,0x5c                        ; 0042bc8f
    POP EDI                             ; 0042bc92
    POP ESI                             ; 0042bc93
    POP EBX                             ; 0042bc94
    RET                                 ; 0042bc95

