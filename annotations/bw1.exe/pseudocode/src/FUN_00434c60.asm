; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00434c60(int param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0x140]:1  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined        Stack[-0xec]:1  local_ec
; undefined        Stack[-0xe0]:1  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined        Stack[-0xd4]:1  local_d4
; undefined        Stack[-0x8c]:1  local_8c
; undefined        Stack[-0x5c]:1  local_5c
; undefined        Stack[-0x44]:1  local_44
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   FUN_004ed890 at 004ee4d3
;   FUN_004f1b50 at 004f2115
;   FUN_00520c10 at 00521001
;   FUN_005938c0 at 00593e85
;
; Referenced Globals:
;   TerminatedCString s_s_was_in_the_way_but_cou_005d5f63
;   undefined4 DAT_005d5f9f
;   undefined4 DAT_005d5fa7
;   undefined4 DAT_005d5faf
;   undefined4 DAT_005d5fb7
;   undefined4 DAT_005d5fbf
;   undefined4 DAT_005d5fc7
;   undefined4 DAT_005d5fcf
;   undefined4 DAT_005d5fd3
;   undefined4 DAT_005d5fd7
;   undefined4 DAT_005d5fdf
;   undefined4 DAT_00610cb0
;   void* PTR_DAT_00611100 = 007db5f0
;   undefined4 DAT_007db5f0
;   undefined4 DAT_02c8af28
;
; Called Functions:
;   FUN_00408bb0
;   FUN_0042ccf0
;   FUN_00445430
;   FUN_0045f3e0
;   FUN_0045f690
;   FUN_004ea640
;   FUN_005a7520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00434c60
        ;   Label: FUN_00434c60
    PUSH ESI                            ; 00434c61
    PUSH EDI                            ; 00434c62
    PUSH EBP                            ; 00434c63
    MOV EBP,ESP                         ; 00434c64
    SUB ESP,0x188                       ; 00434c66
    AND ESP,0xfffffff8                  ; 00434c6c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00434c6f
    FLD float ptr [EAX + 0x2fd0]        ; 00434c72
    FLDZ                                ; 00434c78
    FCOMPP                              ; 00434c7a
    FNSTSW AX                           ; 00434c7c
    SAHF                                ; 00434c7e
    JBE 0x00434d0f                      ; 00434c7f
        ;   XREF to: 00434d0f (CONDITIONAL_JUMP)  ; LAB_00434d0f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00434c85
    FLD float ptr [EAX + 0x2fd0]        ; 00434c88
    FADD float ptr [EBP + 0x18]         ; 00434c8e
    FST float ptr [EAX + 0x2fd0]        ; 00434c91
    FLDZ                                ; 00434c97
    FCOMPP                              ; 00434c99
    FNSTSW AX                           ; 00434c9b
    SAHF                                ; 00434c9d
    JBE 0x00434cb4                      ; 00434c9e
        ;   XREF to: 00434cb4 (CONDITIONAL_JUMP)  ; LAB_00434cb4
    MOV EAX,dword ptr [EBP + 0x14]      ; 00434ca0
    FLD float ptr [EAX + 0x2fe0]        ; 00434ca3
    FCOMP double ptr [0x005d5fa7]       ; 00434ca9 | DAT_005d5fa7
    FNSTSW AX                           ; 00434caf
    SAHF                                ; 00434cb1
    JBE 0x00434cca                      ; 00434cb2
        ;   XREF to: 00434cca (CONDITIONAL_JUMP)  ; LAB_00434cca
    MOV EAX,dword ptr [EBP + 0x14]      ; 00434cb4
        ;   Label: LAB_00434cb4
    MOV dword ptr [EAX + 0x2fd0],0x0    ; 00434cb7
    XOR EAX,EAX                         ; 00434cc1
        ;   Label: LAB_00434cc1
    MOV ESP,EBP                         ; 00434cc3
    POP EBP                             ; 00434cc5
    POP EDI                             ; 00434cc6
    POP ESI                             ; 00434cc7
    POP EBX                             ; 00434cc8
    RET                                 ; 00434cc9
    PUSH 0x0                            ; 00434cca
        ;   Label: LAB_00434cca
    PUSH 0x0                            ; 00434ccc
    PUSH 0x2c8af28                      ; 00434cce | DAT_02c8af28
    MOV EAX,dword ptr [EBP + 0x14]      ; 00434cd3
    PUSH 0x0                            ; 00434cd6
    ADD EAX,0x2fd4                      ; 00434cd8
    PUSH EAX                            ; 00434cdd
    MOV ESI,dword ptr [EBP + 0x14]      ; 00434cde
    PUSH ESI                            ; 00434ce1
    CALL FUN_0042ccf0                   ; 00434ce2
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042ccf0()
    ADD ESP,0x18                        ; 00434ce7
    TEST EAX,EAX                        ; 00434cea
    JZ 0x00434d03                       ; 00434cec
        ;   XREF to: 00434d03 (CONDITIONAL_JUMP)  ; LAB_00434d03
    MOV EAX,ESI                         ; 00434cee
    MOV dword ptr [ESI + 0x2fd0],0x0    ; 00434cf0
    XOR EAX,ESI                         ; 00434cfa
    MOV ESP,EBP                         ; 00434cfc
    POP EBP                             ; 00434cfe
    POP EDI                             ; 00434cff
    POP ESI                             ; 00434d00
    POP EBX                             ; 00434d01
    RET                                 ; 00434d02
    MOV EAX,0x1                         ; 00434d03
        ;   Label: LAB_00434d03
    MOV ESP,EBP                         ; 00434d08
    POP EBP                             ; 00434d0a
    POP EDI                             ; 00434d0b
    POP ESI                             ; 00434d0c
    POP EBX                             ; 00434d0d
    RET                                 ; 00434d0e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00434d0f
        ;   Label: LAB_00434d0f
    ADD EAX,0x20                        ; 00434d12
    PUSH EAX                            ; 00434d15
    MOV dword ptr [ESP + 0x188],EAX     ; 00434d16
    CALL FUN_004ea640                   ; 00434d1d
        ;   XREF to: 004ea640 (UNCONDITIONAL_CALL)  ; undefined FUN_004ea640()
    ADD ESP,0x4                         ; 00434d22
    MOV ECX,dword ptr [ESP + 0x184]     ; 00434d25
    PUSH ECX                            ; 00434d2c
    LEA ESI,[ESP + 0xc8]                ; 00434d2d
    LEA EDI,[ESP + 0x110]               ; 00434d34
    PUSH EAX                            ; 00434d3b
    MOV EBX,EAX                         ; 00434d3c
    MOV dword ptr [ESP + 0x16c],EAX     ; 00434d3e
    CALL FUN_00408bb0                   ; 00434d45
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408bb0()
    LEA ESI,[ESP + 0xcc]                ; 00434d4a
    ADD ESP,0x8                         ; 00434d51
    LEA EAX,[ESP + 0x10c]               ; 00434d54
    MOVSD ES:EDI,ESI                    ; 00434d5b
    MOVSD ES:EDI,ESI                    ; 00434d5c
    MOVSD ES:EDI,ESI                    ; 00434d5d
    PUSH EAX                            ; 00434d5e
    LEA ESI,[ESP + 0x140]               ; 00434d5f
    LEA EDI,[ESP + 0x5c]                ; 00434d66
    CALL FUN_005a7520                   ; 00434d6a
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined FUN_005a7520()
    LEA ESI,[ESP + 0x140]               ; 00434d6f
    ADD ESP,0x4                         ; 00434d76
    MOVSD ES:EDI,ESI                    ; 00434d79
    MOVSD ES:EDI,ESI                    ; 00434d7a
    MOVSD ES:EDI,ESI                    ; 00434d7b
    FLD float ptr [ESP + 0x5c]          ; 00434d7c
    FABS                                ; 00434d80
    MOV ESI,dword ptr [ESP + 0x184]     ; 00434d82
    LEA EDI,[ESP + 0xac]                ; 00434d89
    FLD float ptr [ESI]                 ; 00434d90
    FLD float ptr [ESI + 0x4]           ; 00434d92
    FLD float ptr [ESI + 0x8]           ; 00434d95
    LEA ESI,[ESP + 0x88]                ; 00434d98
    LEA EAX,[EBX + 0x20]                ; 00434d9f
    FXCH ST3                            ; 00434da2
    FSTP float ptr [ESP + 0x160]        ; 00434da4
    FXCH                                ; 00434dab
    FSUB float ptr [EAX]                ; 00434dad
    FXCH                                ; 00434daf
    FSUB float ptr [EAX + 0x4]          ; 00434db1
    FXCH ST2                            ; 00434db4
    FSUB float ptr [EAX + 0x8]          ; 00434db6
    FXCH                                ; 00434db9
    FSTP float ptr [ESP + 0x88]         ; 00434dbb
    FXCH                                ; 00434dc2
    FSTP float ptr [ESP + 0x8c]         ; 00434dc4
    FSTP float ptr [ESP + 0x90]         ; 00434dcb
    LEA EAX,[ESP + 0xac]                ; 00434dd2
    MOVSD ES:EDI,ESI                    ; 00434dd9
    MOVSD ES:EDI,ESI                    ; 00434dda
    MOVSD ES:EDI,ESI                    ; 00434ddb
    PUSH EAX                            ; 00434ddc
    LEA ESI,[ESP + 0x158]               ; 00434ddd
    LEA EDI,[ESP + 0xbc]                ; 00434de4
    CALL FUN_005a7520                   ; 00434deb
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined FUN_005a7520()
    LEA ESI,[ESP + 0x158]               ; 00434df0
    ADD ESP,0x4                         ; 00434df7
    MOVSD ES:EDI,ESI                    ; 00434dfa
    MOVSD ES:EDI,ESI                    ; 00434dfb
    MOVSD ES:EDI,ESI                    ; 00434dfc
    MOV EAX,dword ptr [ESP + 0xbc]      ; 00434dfd
    PUSH EBX                            ; 00434e04
    MOV dword ptr [ESP + 0x170],EAX     ; 00434e05
    MOV EAX,dword ptr [EBX + 0x154]     ; 00434e0c
    CALL dword ptr [EAX + 0x148]        ; 00434e12
    ADD ESP,0x4                         ; 00434e18
    TEST EAX,EAX                        ; 00434e1b
    JZ 0x0043500e                       ; 00434e1d
        ;   XREF to: 0043500e (CONDITIONAL_JUMP)  ; LAB_0043500e
    FLD float ptr [ESP + 0x160]         ; 00434e23
    FCOMP float ptr [0x005d5f9f]        ; 00434e2a | DAT_005d5f9f
    FNSTSW AX                           ; 00434e30
    SAHF                                ; 00434e32
    JNC 0x0043500e                      ; 00434e33
        ;   XREF to: 0043500e (CONDITIONAL_JUMP)  ; LAB_0043500e
    FLD float ptr [ESP + 0x10c]         ; 00434e39
    FLDZ                                ; 00434e40
    FCOMPP                              ; 00434e42
    FNSTSW AX                           ; 00434e44
    SAHF                                ; 00434e46
    JBE 0x00434fef                      ; 00434e47
        ;   XREF to: 00434fef (CONDITIONAL_JUMP)  ; LAB_00434fef
    MOV EAX,0x1                         ; 00434e4d
    MOV dword ptr [ESP + 0x168],EAX     ; 00434e52
        ;   Label: LAB_00434e52
    XOR EBX,EBX                         ; 00434e59
    MOV EAX,dword ptr [ESP + 0x164]     ; 00434e5b
    MOV dword ptr [ESP + 0x178],EBX     ; 00434e62
    MOV EBX,dword ptr [EBP + 0x14]      ; 00434e69
    ADD EAX,0x20                        ; 00434e6c
    ADD EBX,0x2fd4                      ; 00434e6f
    MOV dword ptr [ESP + 0x17c],EAX     ; 00434e75
    MOV EDI,dword ptr [ESP + 0x168]     ; 00434e7c
        ;   Label: LAB_00434e7c
    MOV EAX,dword ptr [ESP + 0x178]     ; 00434e83
    TEST EDI,EDI                        ; 00434e8a
    JNZ 0x004351a2                      ; 00434e8c
        ;   XREF to: 004351a2 (CONDITIONAL_JUMP)  ; LAB_004351a2
    FLD float ptr [ESP + 0x16c]         ; 00434e92
        ;   Label: LAB_00434e92
    FADD float ptr [EAX*0x4 + 0x610cb0] ; 00434e99 | DAT_00610cb0
    XOR EAX,EAX                         ; 00434ea0
    FSTP float ptr [ESP + 0x184]        ; 00434ea2
    MOV dword ptr [ESP + 0x148],EAX     ; 00434ea9
    MOV dword ptr [ESP + 0x150],EAX     ; 00434eb0
    MOV EAX,dword ptr [ESP + 0x184]     ; 00434eb7
    MOV dword ptr [ESP + 0x14c],EAX     ; 00434ebe
    LEA EAX,[ESP + 0xf4]                ; 00434ec5
    LEA EDI,[ESP + 0xf4]                ; 00434ecc
    PUSH EAX                            ; 00434ed3
    LEA EAX,[ESP + 0x34]                ; 00434ed4
    LEA ESI,[ESP + 0x14c]               ; 00434ed8
    PUSH EAX                            ; 00434edf
    MOVSD ES:EDI,ESI                    ; 00434ee0
    MOVSD ES:EDI,ESI                    ; 00434ee1
    MOVSD ES:EDI,ESI                    ; 00434ee2
    CALL FUN_0045f3e0                   ; 00434ee3
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f3e0()
    MOV ECX,0x40d00000                  ; 00434ee8
    ADD ESP,0x8                         ; 00434eed
    MOV dword ptr [ESP + 0x4],ECX       ; 00434ef0
    FLD float ptr [ESP + 0x4]           ; 00434ef4
        ;   Label: LAB_00434ef4
    FCOMP double ptr [0x005d5fd7]       ; 00434ef8 | DAT_005d5fd7
    FNSTSW AX                           ; 00434efe
    SAHF                                ; 00434f00
    JBE 0x00434ff6                      ; 00434f01
        ;   XREF to: 00434ff6 (CONDITIONAL_JUMP)  ; LAB_00434ff6
    XOR EAX,EAX                         ; 00434f07
    MOV dword ptr [ESP + 0xa0],EAX      ; 00434f09
    MOV dword ptr [ESP + 0xa4],EAX      ; 00434f10
    MOV EAX,dword ptr [ESP + 0x4]       ; 00434f17
    MOV dword ptr [ESP + 0xa8],EAX      ; 00434f1b
    LEA EAX,[ESP + 0xa0]                ; 00434f22
    PUSH EAX                            ; 00434f29
    LEA EAX,[ESP + 0x34]                ; 00434f2a
    PUSH EAX                            ; 00434f2e
    LEA ESI,[ESP + 0x138]               ; 00434f2f
    LEA EDI,[ESP + 0x108]               ; 00434f36
    CALL FUN_0045f690                   ; 00434f3d
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f690()
    ADD ESP,0x8                         ; 00434f42
    LEA ESI,[ESP + 0x130]               ; 00434f45
    MOV EAX,dword ptr [ESP + 0x17c]     ; 00434f4c
    MOVSD ES:EDI,ESI                    ; 00434f53
    MOVSD ES:EDI,ESI                    ; 00434f54
    MOVSD ES:EDI,ESI                    ; 00434f55
    FLD float ptr [EAX + 0x4]           ; 00434f56
    FLD float ptr [EAX + 0x8]           ; 00434f59
    FLD float ptr [EAX]                 ; 00434f5c
    LEA EDI,[ESP + 0x64]                ; 00434f5e
    LEA ESI,[ESP + 0x70]                ; 00434f62
    LEA EAX,[ESP + 0x64]                ; 00434f66
    FADD float ptr [ESP + 0x100]        ; 00434f6a
    FXCH ST2                            ; 00434f71
    FADD float ptr [ESP + 0x104]        ; 00434f73
    FXCH                                ; 00434f7a
    FADD float ptr [ESP + 0x108]        ; 00434f7c
    FXCH ST2                            ; 00434f83
    FSTP float ptr [ESP + 0x70]         ; 00434f85
    FSTP float ptr [ESP + 0x74]         ; 00434f89
    FSTP float ptr [ESP + 0x78]         ; 00434f8d
    MOVSD ES:EDI,ESI                    ; 00434f91
    MOVSD ES:EDI,ESI                    ; 00434f92
    MOVSD ES:EDI,ESI                    ; 00434f93
    CMP EBX,EAX                         ; 00434f94
    JZ 0x00434fac                       ; 00434f96
        ;   XREF to: 00434fac (CONDITIONAL_JUMP)  ; LAB_00434fac
    MOV EAX,dword ptr [ESP + 0x64]      ; 00434f98
    MOV dword ptr [EBX],EAX             ; 00434f9c
    MOV EAX,dword ptr [ESP + 0x68]      ; 00434f9e
    MOV dword ptr [EBX + 0x4],EAX       ; 00434fa2
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00434fa5
    MOV dword ptr [EBX + 0x8],EAX       ; 00434fa9
    PUSH 0x0                            ; 00434fac
        ;   Label: LAB_00434fac
    PUSH 0x0                            ; 00434fae
    PUSH 0x2c8af28                      ; 00434fb0 | DAT_02c8af28
    PUSH 0x0                            ; 00434fb5
    PUSH EBX                            ; 00434fb7
    MOV ECX,dword ptr [EBP + 0x14]      ; 00434fb8
    PUSH ECX                            ; 00434fbb
    CALL FUN_0042ccf0                   ; 00434fbc
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042ccf0()
    ADD ESP,0x18                        ; 00434fc1
    TEST EAX,EAX                        ; 00434fc4
    JL 0x004351a9                       ; 00434fc6
        ;   XREF to: 004351a9 (CONDITIONAL_JUMP)  ; LAB_004351a9
    MOV EAX,dword ptr [EBP + 0x14]      ; 00434fcc
    MOV dword ptr [EAX + 0x2fe0],0x0    ; 00434fcf
    MOV dword ptr [EAX + 0x2fd0],0xc0800000 ; 00434fd9
    MOV EAX,0x2                         ; 00434fe3
    MOV ESP,EBP                         ; 00434fe8
    POP EBP                             ; 00434fea
    POP EDI                             ; 00434feb
    POP ESI                             ; 00434fec
    POP EBX                             ; 00434fed
    RET                                 ; 00434fee
    XOR EAX,EAX                         ; 00434fef
        ;   Label: LAB_00434fef
    JMP 0x00434e52                      ; 00434ff1
        ;   XREF to: 00434e52 (UNCONDITIONAL_JUMP)  ; LAB_00434e52
    MOV ESI,dword ptr [ESP + 0x178]     ; 00434ff6
        ;   Label: LAB_00434ff6
    INC ESI                             ; 00434ffd
    MOV dword ptr [ESP + 0x178],ESI     ; 00434ffe
    CMP ESI,0x6                         ; 00435005
    JL 0x00434e7c                       ; 00435008
        ;   XREF to: 00434e7c (CONDITIONAL_JUMP)  ; LAB_00434e7c
    FLD float ptr [ESP + 0x110]         ; 0043500e
        ;   Label: LAB_0043500e
    FABS                                ; 00435015
    FCOMP double ptr [0x005d5faf]       ; 00435017 | DAT_005d5faf
    FNSTSW AX                           ; 0043501d
    SAHF                                ; 0043501f
    JA 0x00434cb4                       ; 00435020
        ;   XREF to: 00434cb4 (CONDITIONAL_JUMP)  ; LAB_00434cb4
    FLD float ptr [ESP + 0x160]         ; 00435026
    FCOMP float ptr [0x005d5fb7]        ; 0043502d | DAT_005d5fb7
    FNSTSW AX                           ; 00435033
    SAHF                                ; 00435035
    JA 0x00434cb4                       ; 00435036
        ;   XREF to: 00434cb4 (CONDITIONAL_JUMP)  ; LAB_00434cb4
    FLD float ptr [ESP + 0x110]         ; 0043503c
    FMUL ST0                            ; 00435043
    FLD float ptr [ESP + 0x10c]         ; 00435045
    FMUL ST0                            ; 0043504c
    FADDP                               ; 0043504e
    FLD float ptr [ESP + 0x114]         ; 00435050
    FMUL ST0                            ; 00435057
    FADDP                               ; 00435059
    FSQRT                               ; 0043505b
    FCOMP double ptr [0x005d5fbf]       ; 0043505d | DAT_005d5fbf
    FNSTSW AX                           ; 00435063
    SAHF                                ; 00435065
    JA 0x00434cb4                       ; 00435066
        ;   XREF to: 00434cb4 (CONDITIONAL_JUMP)  ; LAB_00434cb4
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043506c
    FLD float ptr [EAX + 0x2fd0]        ; 0043506f
    FADD float ptr [EBP + 0x18]         ; 00435075
    FST float ptr [EAX + 0x2fd0]        ; 00435078
    FCOMP double ptr [0x005d5fc7]       ; 0043507e | DAT_005d5fc7
    FNSTSW AX                           ; 00435084
    SAHF                                ; 00435086
    JC 0x00434cc1                       ; 00435087
        ;   XREF to: 00434cc1 (CONDITIONAL_JUMP)  ; LAB_00434cc1
    XOR EBX,EBX                         ; 0043508d
    MOV EAX,dword ptr [ESP + 0x164]     ; 0043508f
    MOV dword ptr [ESP + 0x174],EBX     ; 00435096
    ADD EAX,0x20                        ; 0043509d
    MOV EBX,dword ptr [EBP + 0x14]      ; 004350a0
    MOV dword ptr [ESP + 0x180],EAX     ; 004350a3
    ADD EBX,0x2fd4                      ; 004350aa
    MOV EAX,dword ptr [ESP + 0x174]     ; 004350b0
        ;   Label: LAB_004350b0
    MOV EDX,EAX                         ; 004350b7
    SAR EDX,0x1f                        ; 004350b9
    SUB EAX,EDX                         ; 004350bc
    SAR EAX,0x1                         ; 004350be
    MOV dword ptr [ESP + 0x184],EAX     ; 004350c0
    FILD dword ptr [ESP + 0x184]        ; 004350c7
    FMUL float ptr [0x005d5fcf]         ; 004350ce | DAT_005d5fcf
    FMUL float ptr [0x005d5fd3]         ; 004350d4 | DAT_005d5fd3
    MOV AH,byte ptr [ESP + 0x174]       ; 004350da
    FSTP float ptr [ESP + 0x170]        ; 004350e1
    TEST AH,0x1                         ; 004350e8
    JNZ 0x004351bc                      ; 004350eb
        ;   XREF to: 004351bc (CONDITIONAL_JUMP)  ; LAB_004351bc
    FLD float ptr [ESP + 0x16c]         ; 004350f1
        ;   Label: LAB_004350f1
    LEA EDI,[ESP + 0xdc]                ; 004350f8
    FADD float ptr [ESP + 0x170]        ; 004350ff
    XOR ESI,ESI                         ; 00435106
    FSTP float ptr [ESP + 0x184]        ; 00435108
    MOV EAX,dword ptr [ESP + 0x184]     ; 0043510f
    MOV dword ptr [ESP + 0x7c],ESI      ; 00435116
    MOV dword ptr [ESP + 0x80],EAX      ; 0043511a
    LEA EAX,[ESP + 0xdc]                ; 00435121
    MOV dword ptr [ESP + 0x84],ESI      ; 00435128
    PUSH EAX                            ; 0043512f
    LEA EAX,[ESP + 0xc]                 ; 00435130
    LEA ESI,[ESP + 0x80]                ; 00435134
    PUSH EAX                            ; 0043513b
    MOVSD ES:EDI,ESI                    ; 0043513c
    MOVSD ES:EDI,ESI                    ; 0043513d
    MOVSD ES:EDI,ESI                    ; 0043513e
    CALL FUN_0045f3e0                   ; 0043513f
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f3e0()
    MOV EAX,0x40900000                  ; 00435144
    ADD ESP,0x8                         ; 00435149
    MOV dword ptr [ESP],EAX             ; 0043514c
    FLD float ptr [ESP]                 ; 0043514f
        ;   Label: LAB_0043514f
    FCOMP double ptr [0x005d5fd7]       ; 00435152 | DAT_005d5fd7
    FNSTSW AX                           ; 00435158
    SAHF                                ; 0043515a
    JA 0x004351da                       ; 0043515b
        ;   XREF to: 004351da (CONDITIONAL_JUMP)  ; LAB_004351da
    MOV EDX,dword ptr [ESP + 0x174]     ; 0043515d
    INC EDX                             ; 00435164
    MOV dword ptr [ESP + 0x174],EDX     ; 00435165
    CMP EDX,0x8                         ; 0043516c
    JLE 0x004350b0                      ; 0043516f
        ;   XREF to: 004350b0 (CONDITIONAL_JUMP)  ; LAB_004350b0
    MOV EBX,dword ptr [EBP + 0x14]      ; 00435175
    PUSH EBX                            ; 00435178
    PUSH 0x5d5f63                       ; 00435179 | = "%s was in the way, but couldn't figur..."
    MOV ESI,dword ptr [0x00611100]      ; 0043517e | PTR_DAT_00611100
    PUSH ESI                            ; 00435184 | DAT_007db5f0
    CALL FUN_00445430                   ; 00435185
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined FUN_00445430()
    ADD ESP,0xc                         ; 0043518a
    MOV EAX,EBX                         ; 0043518d
    MOV dword ptr [EBX + 0x2fd0],0x0    ; 0043518f
    XOR EAX,EBX                         ; 00435199
    MOV ESP,EBP                         ; 0043519b
    POP EBP                             ; 0043519d
    POP EDI                             ; 0043519e
    POP ESI                             ; 0043519f
    POP EBX                             ; 004351a0
    RET                                 ; 004351a1
    XOR AL,0x1                          ; 004351a2
        ;   Label: LAB_004351a2
    JMP 0x00434e92                      ; 004351a4
        ;   XREF to: 00434e92 (UNCONDITIONAL_JUMP)  ; LAB_00434e92
    FLD float ptr [ESP + 0x4]           ; 004351a9
        ;   Label: LAB_004351a9
    FADD float ptr [0x005d5fdf]         ; 004351ad | DAT_005d5fdf
    FSTP float ptr [ESP + 0x4]          ; 004351b3
    JMP 0x00434ef4                      ; 004351b7
        ;   XREF to: 00434ef4 (UNCONDITIONAL_JUMP)  ; LAB_00434ef4
    XOR byte ptr [ESP + 0x173],0x80     ; 004351bc
        ;   Label: LAB_004351bc
    JMP 0x004350f1                      ; 004351c4
        ;   XREF to: 004350f1 (UNCONDITIONAL_JUMP)  ; LAB_004350f1
    FLD float ptr [ESP]                 ; 004351c9
        ;   Label: LAB_004351c9
    FADD float ptr [0x005d5fdf]         ; 004351cc | DAT_005d5fdf
    FSTP float ptr [ESP]                ; 004351d2
    JMP 0x0043514f                      ; 004351d5
        ;   XREF to: 0043514f (UNCONDITIONAL_JUMP)  ; LAB_0043514f
    MOV EAX,dword ptr [ESP]             ; 004351da
        ;   Label: LAB_004351da
    LEA ESI,[ESP + 0x94]                ; 004351dd
    MOV dword ptr [ESP + 0x12c],EAX     ; 004351e4
    LEA EAX,[ESP + 0x124]               ; 004351eb
    XOR EDI,EDI                         ; 004351f2
    PUSH EAX                            ; 004351f4
    LEA EAX,[ESP + 0xc]                 ; 004351f5
    MOV dword ptr [ESP + 0x128],EDI     ; 004351f9
    PUSH EAX                            ; 00435200
    MOV dword ptr [ESP + 0x130],EDI     ; 00435201
    LEA EDI,[ESP + 0x120]               ; 00435208
    CALL FUN_0045f690                   ; 0043520f
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f690()
    ADD ESP,0x8                         ; 00435214
    LEA ESI,[ESP + 0x94]                ; 00435217
    MOV EAX,dword ptr [ESP + 0x180]     ; 0043521e
    MOVSD ES:EDI,ESI                    ; 00435225
    MOVSD ES:EDI,ESI                    ; 00435226
    MOVSD ES:EDI,ESI                    ; 00435227
    FLD float ptr [EAX + 0x4]           ; 00435228
    FLD float ptr [EAX + 0x8]           ; 0043522b
    FLD float ptr [EAX]                 ; 0043522e
    LEA EDI,[ESP + 0xd0]                ; 00435230
    LEA ESI,[ESP + 0xe8]                ; 00435237
    LEA EAX,[ESP + 0xd0]                ; 0043523e
    FADD float ptr [ESP + 0x118]        ; 00435245
    FXCH ST2                            ; 0043524c
    FADD float ptr [ESP + 0x11c]        ; 0043524e
    FXCH                                ; 00435255
    FADD float ptr [ESP + 0x120]        ; 00435257
    FXCH ST2                            ; 0043525e
    FSTP float ptr [ESP + 0xe8]         ; 00435260
    FSTP float ptr [ESP + 0xec]         ; 00435267
    FSTP float ptr [ESP + 0xf0]         ; 0043526e
    MOVSD ES:EDI,ESI                    ; 00435275
    MOVSD ES:EDI,ESI                    ; 00435276
    MOVSD ES:EDI,ESI                    ; 00435277
    CMP EBX,EAX                         ; 00435278
    JZ 0x00435299                       ; 0043527a
        ;   XREF to: 00435299 (CONDITIONAL_JUMP)  ; LAB_00435299
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0043527c
    MOV dword ptr [EBX],EAX             ; 00435283
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00435285
    MOV dword ptr [EBX + 0x4],EAX       ; 0043528c
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0043528f
    MOV dword ptr [EBX + 0x8],EAX       ; 00435296
    PUSH 0x0                            ; 00435299
        ;   Label: LAB_00435299
    PUSH 0x0                            ; 0043529b
    PUSH 0x2c8af28                      ; 0043529d | DAT_02c8af28
    PUSH 0x0                            ; 004352a2
    PUSH EBX                            ; 004352a4
    MOV EDX,dword ptr [EBP + 0x14]      ; 004352a5
    PUSH EDX                            ; 004352a8
    CALL FUN_0042ccf0                   ; 004352a9
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042ccf0()
    ADD ESP,0x18                        ; 004352ae
    TEST EAX,EAX                        ; 004352b1
    JL 0x004351c9                       ; 004352b3
        ;   XREF to: 004351c9 (CONDITIONAL_JUMP)  ; LAB_004351c9
    MOV EAX,dword ptr [EBP + 0x14]      ; 004352b9
    MOV dword ptr [EAX + 0x2fe0],0x0    ; 004352bc
    MOV dword ptr [EAX + 0x2fd0],0xc0a00000 ; 004352c6
    MOV EAX,0x1                         ; 004352d0
    MOV ESP,EBP                         ; 004352d5
    POP EBP                             ; 004352d7
    POP EDI                             ; 004352d8
    POP ESI                             ; 004352d9
    POP EBX                             ; 004352da
    RET                                 ; 004352db

