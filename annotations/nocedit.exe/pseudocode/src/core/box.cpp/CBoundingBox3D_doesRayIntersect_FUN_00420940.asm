; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940(CBoundingBox3D * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction, CVector3f * out_normal)
;
; Parameters:
; CBoundingBox3D * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   ray_origin
; CVector3f *      Stack[0xc]:4   ray_direction
; CVector3f *      Stack[0x10]:4   out_normal
; Local Variables:
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
;
; XREF[8]:
;   core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470 at 004095af
;   core_boxactor.cpp_FUN_00422390 at 00422413
;   core_dmodel.cpp_CKeyFramedModel_intersectRay_FUN_004781d0 at 0047821d
;   core_manpuz.cpp_FUN_00509330 at 005096a4
;   core_msnedit.cpp_FUN_0053c340 at 0053c493
;   core_setdir.cpp_FUN_005763a0 at 005765ab
;   core_setedit.cpp_CDemonSet_FUN_00583170 at 005840f5
;   core_wateract.cpp_CWaterActor_customRayIntersect_FUN_005eb740 at 005eb76f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00420940
        ;   Label: core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
    PUSH ESI                            ; 00420941
    PUSH EDI                            ; 00420942
    PUSH EBP                            ; 00420943
    MOV EBP,ESP                         ; 00420944
    SUB ESP,0x4c                        ; 00420946
    AND ESP,0xfffffff8                  ; 00420949
    MOV ECX,dword ptr [EBP + 0x14]      ; 0042094c
    MOV ESI,dword ptr [EBP + 0x18]      ; 0042094f
    MOV EBX,dword ptr [EBP + 0x1c]      ; 00420952
    MOV EDX,dword ptr [EBP + 0x20]      ; 00420955
    FLD float ptr [ESI]                 ; 00420958
    MOV EDI,0x1                         ; 0042095a
    FCOMP float ptr [ECX]               ; 0042095f
    FNSTSW AX                           ; 00420961
    SAHF                                ; 00420963
    JC 0x00420ac1                       ; 00420964
        ;   XREF to: 00420ac1 (CONDITIONAL_JUMP)  ; LAB_00420ac1
    FLD float ptr [ESI]                 ; 0042096a
    FCOMP float ptr [ECX + 0xc]         ; 0042096c
    FNSTSW AX                           ; 0042096f
    SAHF                                ; 00420971
    JBE 0x00420af3                      ; 00420972
        ;   XREF to: 00420af3 (CONDITIONAL_JUMP)  ; LAB_00420af3
    FLD float ptr [ECX + 0xc]           ; 00420978
    FSUB float ptr [ESI]                ; 0042097b
    FST float ptr [ESP + 0x2c]          ; 0042097d
    FCOMP float ptr [EBX]               ; 00420981
    FNSTSW AX                           ; 00420983
    SAHF                                ; 00420985
    JC 0x00420ae0                       ; 00420986
        ;   XREF to: 00420ae0 (CONDITIONAL_JUMP)  ; LAB_00420ae0
    FLD float ptr [ESP + 0x2c]          ; 0042098c
    FDIV float ptr [EBX]                ; 00420990
    MOV EAX,0x3f800000                  ; 00420992
    XOR EDI,EDI                         ; 00420997
        ;   Label: LAB_00420997
    MOV dword ptr [ESP + 0x20],EAX      ; 00420999
    FSTP float ptr [ESP + 0x2c]         ; 0042099d
    FLD float ptr [ESI + 0x4]           ; 004209a1
        ;   Label: LAB_004209a1
    FCOMP float ptr [ECX + 0x4]         ; 004209a4
    FNSTSW AX                           ; 004209a7
    SAHF                                ; 004209a9
    JNC 0x00420b00                      ; 004209aa
        ;   XREF to: 00420b00 (CONDITIONAL_JUMP)  ; LAB_00420b00
    FLD float ptr [ECX + 0x4]           ; 004209b0
    FSUB float ptr [ESI + 0x4]          ; 004209b3
    FST float ptr [ESP + 0x30]          ; 004209b6
    FCOMP float ptr [EBX + 0x4]         ; 004209ba
    FNSTSW AX                           ; 004209bd
    SAHF                                ; 004209bf
    JA 0x00420ae0                       ; 004209c0
        ;   XREF to: 00420ae0 (CONDITIONAL_JUMP)  ; LAB_00420ae0
    FLD float ptr [ESP + 0x30]          ; 004209c6
    FDIV float ptr [EBX + 0x4]          ; 004209ca
    MOV EAX,0xbf800000                  ; 004209cd
    XOR EDI,EDI                         ; 004209d2
        ;   Label: LAB_004209d2
    MOV dword ptr [ESP + 0x1c],EAX      ; 004209d4
    FSTP float ptr [ESP + 0x30]         ; 004209d8
    FLD float ptr [ESI + 0x8]           ; 004209dc
        ;   Label: LAB_004209dc
    FCOMP float ptr [ECX + 0x8]         ; 004209df
    FNSTSW AX                           ; 004209e2
    SAHF                                ; 004209e4
    JNC 0x00420b3b                      ; 004209e5
        ;   XREF to: 00420b3b (CONDITIONAL_JUMP)  ; LAB_00420b3b
    FLD float ptr [ECX + 0x8]           ; 004209eb
    FSUB float ptr [ESI + 0x8]          ; 004209ee
    FST float ptr [ESP + 0x28]          ; 004209f1
    FCOMP float ptr [EBX + 0x8]         ; 004209f5
    FNSTSW AX                           ; 004209f8
    SAHF                                ; 004209fa
    JA 0x00420ae0                       ; 004209fb
        ;   XREF to: 00420ae0 (CONDITIONAL_JUMP)  ; LAB_00420ae0
    FLD float ptr [ESP + 0x28]          ; 00420a01
    FDIV float ptr [EBX + 0x8]          ; 00420a05
    MOV dword ptr [ESP + 0x40],0xbf800000 ; 00420a08
    FSTP float ptr [ESP + 0x28]         ; 00420a10
        ;   Label: LAB_00420a10
    FLD float ptr [ESP + 0x30]          ; 00420a14
        ;   Label: LAB_00420a14
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00420a18
    XOR EDI,EDI                         ; 00420a1c
    MOV dword ptr [ESP + 0x34],EAX      ; 00420a1e
    FCOMP float ptr [ESP + 0x2c]        ; 00420a22
    FNSTSW AX                           ; 00420a26
    SAHF                                ; 00420a28
    JBE 0x00420a38                      ; 00420a29
        ;   XREF to: 00420a38 (CONDITIONAL_JUMP)  ; LAB_00420a38
    MOV EAX,dword ptr [ESP + 0x30]      ; 00420a2b
    MOV EDI,0x1                         ; 00420a2f
    MOV dword ptr [ESP + 0x34],EAX      ; 00420a34
    FLD float ptr [ESP + 0x28]          ; 00420a38
        ;   Label: LAB_00420a38
    FCOMP float ptr [ESP + 0x34]        ; 00420a3c
    FNSTSW AX                           ; 00420a40
    SAHF                                ; 00420a42
    JBE 0x00420d28                      ; 00420a43
        ;   XREF to: 00420d28 (CONDITIONAL_JUMP)  ; LAB_00420d28
    MOV EAX,dword ptr [ESP + 0x28]      ; 00420a49
    MOV dword ptr [ESP + 0x34],EAX      ; 00420a4d
    FLD float ptr [EBX]                 ; 00420a51
        ;   Label: LAB_00420a51
    FMUL float ptr [ESP + 0x34]         ; 00420a53
    FADD float ptr [ESI]                ; 00420a57
    FST float ptr [ESP + 0x44]          ; 00420a59
    FCOMP float ptr [ECX]               ; 00420a5d
    FNSTSW AX                           ; 00420a5f
    SAHF                                ; 00420a61
    JC 0x00420ae0                       ; 00420a62
        ;   XREF to: 00420ae0 (CONDITIONAL_JUMP)  ; LAB_00420ae0
    FLD float ptr [ESP + 0x44]          ; 00420a68
    FCOMP float ptr [ECX + 0xc]         ; 00420a6c
    FNSTSW AX                           ; 00420a6f
    SAHF                                ; 00420a71
    JA 0x00420ae0                       ; 00420a72
        ;   XREF to: 00420ae0 (CONDITIONAL_JUMP)  ; LAB_00420ae0
    FLD float ptr [EBX + 0x4]           ; 00420a74
    FMUL float ptr [ESP + 0x34]         ; 00420a77
    FADD float ptr [ESI + 0x4]          ; 00420a7b
    FST float ptr [ESP + 0x24]          ; 00420a7e
    FCOMP float ptr [ECX + 0x4]         ; 00420a82
    FNSTSW AX                           ; 00420a85
    SAHF                                ; 00420a87
    JC 0x00420ae0                       ; 00420a88
        ;   XREF to: 00420ae0 (CONDITIONAL_JUMP)  ; LAB_00420ae0
    FLD float ptr [ESP + 0x24]          ; 00420a8a
    FCOMP float ptr [ECX + 0x10]        ; 00420a8e
    FNSTSW AX                           ; 00420a91
    SAHF                                ; 00420a93
    JA 0x00420ae0                       ; 00420a94
        ;   XREF to: 00420ae0 (CONDITIONAL_JUMP)  ; LAB_00420ae0
    TEST EDX,EDX                        ; 00420a96
    JZ 0x00420aae                       ; 00420a98
        ;   XREF to: 00420aae (CONDITIONAL_JUMP)  ; LAB_00420aae
    MOV dword ptr [EDX + 0x4],0x0       ; 00420a9a
    MOV EAX,dword ptr [ESP + 0x40]      ; 00420aa1
    MOV dword ptr [EDX],0x0             ; 00420aa5
    MOV dword ptr [EDX + 0x8],EAX       ; 00420aab
    MOV EAX,dword ptr [ESP + 0x34]      ; 00420aae
        ;   Label: LAB_00420aae
    MOV dword ptr [ESP + 0x38],EAX      ; 00420ab2
    MOV EAX,dword ptr [ESP + 0x38]      ; 00420ab6
    MOV ESP,EBP                         ; 00420aba
    POP EBP                             ; 00420abc
    POP EDI                             ; 00420abd
    POP ESI                             ; 00420abe
    POP EBX                             ; 00420abf
    RET                                 ; 00420ac0
    FLD float ptr [ECX]                 ; 00420ac1
        ;   Label: LAB_00420ac1
    FSUB float ptr [ESI]                ; 00420ac3
    FST float ptr [ESP + 0x2c]          ; 00420ac5
    FCOMP float ptr [EBX]               ; 00420ac9
    FNSTSW AX                           ; 00420acb
    SAHF                                ; 00420acd
    JA 0x00420ae0                       ; 00420ace
        ;   XREF to: 00420ae0 (CONDITIONAL_JUMP)  ; LAB_00420ae0
    FLD float ptr [ESP + 0x2c]          ; 00420ad0
    FDIV float ptr [EBX]                ; 00420ad4
    MOV EAX,0xbf800000                  ; 00420ad6
    JMP 0x00420997                      ; 00420adb
        ;   XREF to: 00420997 (UNCONDITIONAL_JUMP)  ; LAB_00420997
    MOV dword ptr [ESP + 0x38],0xbf800000 ; 00420ae0
        ;   Label: LAB_00420ae0
    MOV EAX,dword ptr [ESP + 0x38]      ; 00420ae8
    MOV ESP,EBP                         ; 00420aec
    POP EBP                             ; 00420aee
    POP EDI                             ; 00420aef
    POP ESI                             ; 00420af0
    POP EBX                             ; 00420af1
    RET                                 ; 00420af2
    MOV dword ptr [ESP + 0x2c],0xbf800000 ; 00420af3
        ;   Label: LAB_00420af3
    JMP 0x004209a1                      ; 00420afb
        ;   XREF to: 004209a1 (UNCONDITIONAL_JUMP)  ; LAB_004209a1
    FLD float ptr [ESI + 0x4]           ; 00420b00
        ;   Label: LAB_00420b00
    FCOMP float ptr [ECX + 0x10]        ; 00420b03
    FNSTSW AX                           ; 00420b06
    SAHF                                ; 00420b08
    JBE 0x00420b2e                      ; 00420b09
        ;   XREF to: 00420b2e (CONDITIONAL_JUMP)  ; LAB_00420b2e
    FLD float ptr [ECX + 0x10]          ; 00420b0b
    FSUB float ptr [ESI + 0x4]          ; 00420b0e
    FST float ptr [ESP + 0x30]          ; 00420b11
    FCOMP float ptr [EBX + 0x4]         ; 00420b15
    FNSTSW AX                           ; 00420b18
    SAHF                                ; 00420b1a
    JC 0x00420ae0                       ; 00420b1b
        ;   XREF to: 00420ae0 (CONDITIONAL_JUMP)  ; LAB_00420ae0
    FLD float ptr [ESP + 0x30]          ; 00420b1d
    FDIV float ptr [EBX + 0x4]          ; 00420b21
    MOV EAX,0x3f800000                  ; 00420b24
    JMP 0x004209d2                      ; 00420b29
        ;   XREF to: 004209d2 (UNCONDITIONAL_JUMP)  ; LAB_004209d2
    MOV dword ptr [ESP + 0x30],0xbf800000 ; 00420b2e
        ;   Label: LAB_00420b2e
    JMP 0x004209dc                      ; 00420b36
        ;   XREF to: 004209dc (UNCONDITIONAL_JUMP)  ; LAB_004209dc
    FLD float ptr [ESI + 0x8]           ; 00420b3b
        ;   Label: LAB_00420b3b
    FCOMP float ptr [ECX + 0x14]        ; 00420b3e
    FNSTSW AX                           ; 00420b41
    SAHF                                ; 00420b43
    JBE 0x00420b6c                      ; 00420b44
        ;   XREF to: 00420b6c (CONDITIONAL_JUMP)  ; LAB_00420b6c
    FLD float ptr [ECX + 0x14]          ; 00420b46
    FSUB float ptr [ESI + 0x8]          ; 00420b49
    FST float ptr [ESP + 0x28]          ; 00420b4c
    FCOMP float ptr [EBX + 0x8]         ; 00420b50
    FNSTSW AX                           ; 00420b53
    SAHF                                ; 00420b55
    JC 0x00420ae0                       ; 00420b56
        ;   XREF to: 00420ae0 (CONDITIONAL_JUMP)  ; LAB_00420ae0
    FLD float ptr [ESP + 0x28]          ; 00420b58
    FDIV float ptr [EBX + 0x8]          ; 00420b5c
    MOV dword ptr [ESP + 0x40],0x3f800000 ; 00420b5f
    JMP 0x00420a10                      ; 00420b67
        ;   XREF to: 00420a10 (UNCONDITIONAL_JUMP)  ; LAB_00420a10
    MOV dword ptr [ESP + 0x28],0xbf800000 ; 00420b6c
        ;   Label: LAB_00420b6c
    TEST EDI,EDI                        ; 00420b74
    JZ 0x00420a14                       ; 00420b76
        ;   XREF to: 00420a14 (CONDITIONAL_JUMP)  ; LAB_00420a14
    TEST EDX,EDX                        ; 00420b7c
    JZ 0x00420be3                       ; 00420b7e
        ;   XREF to: 00420be3 (CONDITIONAL_JUMP)  ; LAB_00420be3
    FLD float ptr [EBX]                 ; 00420b80
    LEA EAX,[ESP + 0x4]                 ; 00420b82
    FCHS                                ; 00420b86
    FSTP float ptr [ESP + 0x4]          ; 00420b88
    FLD float ptr [EBX + 0x4]           ; 00420b8c
    FCHS                                ; 00420b8f
    FSTP float ptr [ESP + 0x8]          ; 00420b91
    FLD float ptr [EBX + 0x8]           ; 00420b95
    FCHS                                ; 00420b98
    FSTP float ptr [ESP + 0xc]          ; 00420b9a
    CMP EDX,EAX                         ; 00420b9e
    JNZ 0x00420bf4                      ; 00420ba0
        ;   XREF to: 00420bf4 (CONDITIONAL_JUMP)  ; LAB_00420bf4
    FLD float ptr [EDX + 0x4]           ; 00420ba2
        ;   Label: LAB_00420ba2
    FMUL ST0                            ; 00420ba5
    FLD float ptr [EDX]                 ; 00420ba7
    FMUL ST0                            ; 00420ba9
    FADDP                               ; 00420bab
    FLD float ptr [EDX + 0x8]           ; 00420bad
    FMUL ST0                            ; 00420bb0
    FADDP                               ; 00420bb2
    FSQRT                               ; 00420bb4
    FST float ptr [ESP]                 ; 00420bb6
    FLDZ                                ; 00420bb9
    FCOMPP                              ; 00420bbb
    FNSTSW AX                           ; 00420bbd
    SAHF                                ; 00420bbf
    JNC 0x00420c0a                      ; 00420bc0
        ;   XREF to: 00420c0a (CONDITIONAL_JUMP)  ; LAB_00420c0a
    FLD1                                ; 00420bc2
    FLD float ptr [EDX]                 ; 00420bc4
    FXCH                                ; 00420bc6
    FDIV float ptr [ESP]                ; 00420bc8
    FXCH                                ; 00420bcb
    FMUL ST1                            ; 00420bcd
    FLD float ptr [EDX + 0x4]           ; 00420bcf
    FMUL ST2                            ; 00420bd2
    FLD float ptr [EDX + 0x8]           ; 00420bd4
    FMULP ST3                           ; 00420bd7
    FXCH                                ; 00420bd9
    FSTP float ptr [EDX]                ; 00420bdb
    FSTP float ptr [EDX + 0x4]          ; 00420bdd
    FSTP float ptr [EDX + 0x8]          ; 00420be0
    XOR EDX,EDX                         ; 00420be3
        ;   Label: LAB_00420be3
    MOV dword ptr [ESP + 0x38],EDX      ; 00420be5
    MOV EAX,dword ptr [ESP + 0x38]      ; 00420be9
    MOV ESP,EBP                         ; 00420bed
    POP EBP                             ; 00420bef
    POP EDI                             ; 00420bf0
    POP ESI                             ; 00420bf1
    POP EBX                             ; 00420bf2
    RET                                 ; 00420bf3
    MOV EAX,dword ptr [ESP + 0x4]       ; 00420bf4
        ;   Label: LAB_00420bf4
    MOV dword ptr [EDX],EAX             ; 00420bf8
    MOV EAX,dword ptr [ESP + 0x8]       ; 00420bfa
    MOV dword ptr [EDX + 0x4],EAX       ; 00420bfe
    MOV EAX,dword ptr [ESP + 0xc]       ; 00420c01
    MOV dword ptr [EDX + 0x8],EAX       ; 00420c05
    JMP 0x00420ba2                      ; 00420c08
        ;   XREF to: 00420ba2 (UNCONDITIONAL_JUMP)  ; LAB_00420ba2
    MOV dword ptr [EDX + 0x8],0x0       ; 00420c0a
        ;   Label: LAB_00420c0a
    MOV EAX,dword ptr [EDX + 0x8]       ; 00420c11
    MOV dword ptr [EDX + 0x4],EAX       ; 00420c14
    MOV EAX,dword ptr [EDX + 0x4]       ; 00420c17
    MOV dword ptr [EDX],EAX             ; 00420c1a
    XOR EDX,EDX                         ; 00420c1c
    MOV dword ptr [ESP + 0x38],EDX      ; 00420c1e
    MOV EAX,dword ptr [ESP + 0x38]      ; 00420c22
    MOV ESP,EBP                         ; 00420c26
    POP EBP                             ; 00420c28
    POP EDI                             ; 00420c29
    POP ESI                             ; 00420c2a
    POP EBX                             ; 00420c2b
    RET                                 ; 00420c2c
    FLD float ptr [EBX + 0x4]           ; 00420c2d
        ;   Label: LAB_00420c2d
    FMUL float ptr [ESP + 0x34]         ; 00420c30
    FADD float ptr [ESI + 0x4]          ; 00420c34
    FST float ptr [ESP + 0x18]          ; 00420c37
    FCOMP float ptr [ECX + 0x4]         ; 00420c3b
    FNSTSW AX                           ; 00420c3e
    SAHF                                ; 00420c40
    JC 0x00420ae0                       ; 00420c41
        ;   XREF to: 00420ae0 (CONDITIONAL_JUMP)  ; LAB_00420ae0
    FLD float ptr [ESP + 0x18]          ; 00420c47
    FCOMP float ptr [ECX + 0x10]        ; 00420c4b
    FNSTSW AX                           ; 00420c4e
    SAHF                                ; 00420c50
    JA 0x00420ae0                       ; 00420c51
        ;   XREF to: 00420ae0 (CONDITIONAL_JUMP)  ; LAB_00420ae0
    FLD float ptr [EBX + 0x8]           ; 00420c57
    FMUL float ptr [ESP + 0x34]         ; 00420c5a
    FADD float ptr [ESI + 0x8]          ; 00420c5e
    FST float ptr [ESP + 0x14]          ; 00420c61
    FCOMP float ptr [ECX + 0x8]         ; 00420c65
    FNSTSW AX                           ; 00420c68
    SAHF                                ; 00420c6a
    JC 0x00420ae0                       ; 00420c6b
        ;   XREF to: 00420ae0 (CONDITIONAL_JUMP)  ; LAB_00420ae0
    FLD float ptr [ESP + 0x14]          ; 00420c71
    FCOMP float ptr [ECX + 0x14]        ; 00420c75
    FNSTSW AX                           ; 00420c78
    SAHF                                ; 00420c7a
    JA 0x00420ae0                       ; 00420c7b
        ;   XREF to: 00420ae0 (CONDITIONAL_JUMP)  ; LAB_00420ae0
    TEST EDX,EDX                        ; 00420c81
    JZ 0x00420aae                       ; 00420c83
        ;   XREF to: 00420aae (CONDITIONAL_JUMP)  ; LAB_00420aae
    MOV dword ptr [EDX + 0x4],EDI       ; 00420c89
    MOV EAX,dword ptr [ESP + 0x20]      ; 00420c8c
    MOV dword ptr [EDX + 0x8],EDI       ; 00420c90
    MOV dword ptr [EDX],EAX             ; 00420c93
    MOV EAX,dword ptr [ESP + 0x34]      ; 00420c95
    MOV dword ptr [ESP + 0x38],EAX      ; 00420c99
    MOV EAX,dword ptr [ESP + 0x38]      ; 00420c9d
    MOV ESP,EBP                         ; 00420ca1
    POP EBP                             ; 00420ca3
    POP EDI                             ; 00420ca4
    POP ESI                             ; 00420ca5
    POP EBX                             ; 00420ca6
    RET                                 ; 00420ca7
    FLD float ptr [EBX]                 ; 00420ca8
        ;   Label: LAB_00420ca8
    FMUL float ptr [ESP + 0x34]         ; 00420caa
    FADD float ptr [ESI]                ; 00420cae
    FST float ptr [ESP + 0x3c]          ; 00420cb0
    FCOMP float ptr [ECX]               ; 00420cb4
    FNSTSW AX                           ; 00420cb6
    SAHF                                ; 00420cb8
    JC 0x00420ae0                       ; 00420cb9
        ;   XREF to: 00420ae0 (CONDITIONAL_JUMP)  ; LAB_00420ae0
    FLD float ptr [ESP + 0x3c]          ; 00420cbf
    FCOMP float ptr [ECX + 0xc]         ; 00420cc3
    FNSTSW AX                           ; 00420cc6
    SAHF                                ; 00420cc8
    JA 0x00420ae0                       ; 00420cc9
        ;   XREF to: 00420ae0 (CONDITIONAL_JUMP)  ; LAB_00420ae0
    FLD float ptr [EBX + 0x8]           ; 00420ccf
    FMUL float ptr [ESP + 0x34]         ; 00420cd2
    FADD float ptr [ESI + 0x8]          ; 00420cd6
    FST float ptr [ESP + 0x10]          ; 00420cd9
    FCOMP float ptr [ECX + 0x8]         ; 00420cdd
    FNSTSW AX                           ; 00420ce0
    SAHF                                ; 00420ce2
    JC 0x00420ae0                       ; 00420ce3
        ;   XREF to: 00420ae0 (CONDITIONAL_JUMP)  ; LAB_00420ae0
    FLD float ptr [ESP + 0x10]          ; 00420ce9
    FCOMP float ptr [ECX + 0x14]        ; 00420ced
    FNSTSW AX                           ; 00420cf0
    SAHF                                ; 00420cf2
    JA 0x00420ae0                       ; 00420cf3
        ;   XREF to: 00420ae0 (CONDITIONAL_JUMP)  ; LAB_00420ae0
    TEST EDX,EDX                        ; 00420cf9
    JZ 0x00420aae                       ; 00420cfb
        ;   XREF to: 00420aae (CONDITIONAL_JUMP)  ; LAB_00420aae
    MOV dword ptr [EDX + 0x8],0x0       ; 00420d01
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00420d08
    MOV dword ptr [EDX],0x0             ; 00420d0c
    MOV dword ptr [EDX + 0x4],EAX       ; 00420d12
    MOV EAX,dword ptr [ESP + 0x34]      ; 00420d15
    MOV dword ptr [ESP + 0x38],EAX      ; 00420d19
    MOV EAX,dword ptr [ESP + 0x38]      ; 00420d1d
    MOV ESP,EBP                         ; 00420d21
    POP EBP                             ; 00420d23
    POP EDI                             ; 00420d24
    POP ESI                             ; 00420d25
    POP EBX                             ; 00420d26
    RET                                 ; 00420d27
    CMP EDI,0x1                         ; 00420d28
        ;   Label: LAB_00420d28
    JNC 0x00420d48                      ; 00420d2b
        ;   XREF to: 00420d48 (CONDITIONAL_JUMP)  ; LAB_00420d48
    TEST EDI,EDI                        ; 00420d2d
    JZ 0x00420c2d                       ; 00420d2f
        ;   XREF to: 00420c2d (CONDITIONAL_JUMP)  ; LAB_00420c2d
    MOV EAX,dword ptr [ESP + 0x34]      ; 00420d35
    MOV dword ptr [ESP + 0x38],EAX      ; 00420d39
    MOV EAX,dword ptr [ESP + 0x38]      ; 00420d3d
    MOV ESP,EBP                         ; 00420d41
    POP EBP                             ; 00420d43
    POP EDI                             ; 00420d44
    POP ESI                             ; 00420d45
    POP EBX                             ; 00420d46
    RET                                 ; 00420d47
    JBE 0x00420ca8                      ; 00420d48
        ;   XREF to: 00420ca8 (CONDITIONAL_JUMP)  ; LAB_00420ca8
        ;   Label: LAB_00420d48
    CMP EDI,0x2                         ; 00420d4e
    JZ 0x00420a51                       ; 00420d51
        ;   XREF to: 00420a51 (CONDITIONAL_JUMP)  ; LAB_00420a51
    MOV EAX,dword ptr [ESP + 0x34]      ; 00420d57
    MOV dword ptr [ESP + 0x38],EAX      ; 00420d5b
    MOV EAX,dword ptr [ESP + 0x38]      ; 00420d5f
    MOV ESP,EBP                         ; 00420d63
    POP EBP                             ; 00420d65
    POP EDI                             ; 00420d66
    POP ESI                             ; 00420d67
    POP EBX                             ; 00420d68
    RET                                 ; 00420d69

