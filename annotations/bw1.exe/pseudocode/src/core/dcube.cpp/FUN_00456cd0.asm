; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_dcube_cpp_FUN_00456cd0(CDemonCubeTriangle *triangle,CVector3f *cylinder_center,float cylinder_radius,float *out_height)
;
; Parameters:
; CDemonCubeTriangle * Stack[0x4]:4   triangle
; CVector3f *      Stack[0x8]:4   cylinder_center
; float            Stack[0xc]:4   cylinder_radius
; float *          Stack[0x10]:4   out_height
; Local Variables:
; undefined8       Stack[-0x88]:8  local_88
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
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dcube.cpp_FUN_004584a0 at 004584cf
;
; Referenced Globals:
;   undefined4 DAT_005d7abf
;   undefined4 DAT_005d7ac7
;   undefined4 DAT_0152bd2c
;   undefined4 DAT_0152bd30
;   undefined4 DAT_0152bd34
;   undefined4 DAT_0152bd38
;
; Called Functions:
;   core_dcube.cpp_FUN_004560f0
;   core_dcube.cpp_intersectVerticalCylinderSegment_FUN_00456b60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00456cd0
        ;   Label: core_dcube.cpp_FUN_00456cd0
    PUSH ESI                            ; 00456cd1
    PUSH EDI                            ; 00456cd2
    PUSH EBP                            ; 00456cd3
    MOV EBP,ESP                         ; 00456cd4
    SUB ESP,0x78                        ; 00456cd6
    AND ESP,0xfffffff8                  ; 00456cd9
    MOV EBX,dword ptr [EBP + 0x14]      ; 00456cdc
    FLD float ptr [EBX + 0x10]          ; 00456cdf
    FCOMP double ptr [0x005d7abf]       ; 00456ce2 | DAT_005d7abf
    FNSTSW AX                           ; 00456ce8
    SAHF                                ; 00456cea
    JA 0x00456f45                       ; 00456ceb
        ;   XREF to: 00456f45 (CONDITIONAL_JUMP)  ; LAB_00456f45
    MOV EAX,dword ptr [EBX]             ; 00456cf1
    FLD float ptr [EAX]                 ; 00456cf3
    MOV EAX,dword ptr [EBP + 0x18]      ; 00456cf5
    FSUB float ptr [EAX]                ; 00456cf8
    FSTP float ptr [ESP + 0x48]         ; 00456cfa
    MOV EAX,dword ptr [EBX]             ; 00456cfe
    MOV EAX,dword ptr [EAX + 0x4]       ; 00456d00
    MOV dword ptr [ESP + 0x4c],EAX      ; 00456d03
    MOV EAX,dword ptr [EBX]             ; 00456d07
    FLD float ptr [EAX + 0x8]           ; 00456d09
    MOV EAX,dword ptr [EBP + 0x18]      ; 00456d0c
    FSUB float ptr [EAX + 0x8]          ; 00456d0f
    FSTP float ptr [ESP + 0x50]         ; 00456d12
    MOV EAX,dword ptr [EBX + 0x4]       ; 00456d16
    FLD float ptr [EAX]                 ; 00456d19
    MOV EAX,dword ptr [EBP + 0x18]      ; 00456d1b
    FSUB float ptr [EAX]                ; 00456d1e
    FSTP float ptr [ESP + 0x30]         ; 00456d20
    MOV EAX,dword ptr [EBX + 0x4]       ; 00456d24
    MOV EAX,dword ptr [EAX + 0x4]       ; 00456d27
    MOV dword ptr [ESP + 0x34],EAX      ; 00456d2a
    MOV EAX,dword ptr [EBX + 0x4]       ; 00456d2e
    FLD float ptr [EAX + 0x8]           ; 00456d31
    MOV EAX,dword ptr [EBP + 0x18]      ; 00456d34
    FSUB float ptr [EAX + 0x8]          ; 00456d37
    FSTP float ptr [ESP + 0x38]         ; 00456d3a
    MOV EAX,dword ptr [EBX + 0x8]       ; 00456d3e
    FLD float ptr [EAX]                 ; 00456d41
    MOV EAX,dword ptr [EBP + 0x18]      ; 00456d43
    FSUB float ptr [EAX]                ; 00456d46
    FSTP float ptr [ESP + 0x24]         ; 00456d48
    MOV EAX,dword ptr [EBX + 0x8]       ; 00456d4c
    MOV EAX,dword ptr [EAX + 0x4]       ; 00456d4f
    MOV dword ptr [ESP + 0x28],EAX      ; 00456d52
    MOV EAX,dword ptr [EBX + 0x8]       ; 00456d56
    FLD float ptr [EAX + 0x8]           ; 00456d59
    MOV EAX,dword ptr [EBP + 0x18]      ; 00456d5c
    FSUB float ptr [EAX + 0x8]          ; 00456d5f
    FLD float ptr [ESP + 0x4c]          ; 00456d62
    FXCH                                ; 00456d66
    FSTP float ptr [ESP + 0x2c]         ; 00456d68
    FCOMP float ptr [ESP + 0x34]        ; 00456d6c
    FNSTSW AX                           ; 00456d70
    SAHF                                ; 00456d72
    JC 0x00456f4e                       ; 00456d73
        ;   XREF to: 00456f4e (CONDITIONAL_JUMP)  ; LAB_00456f4e
    FLD float ptr [ESP + 0x34]          ; 00456d79
        ;   Label: LAB_00456d79
    FCOMP float ptr [ESP + 0x28]        ; 00456d7d
    FNSTSW AX                           ; 00456d81
    SAHF                                ; 00456d83
    JNC 0x00456dd9                      ; 00456d84
        ;   XREF to: 00456dd9 (CONDITIONAL_JUMP)  ; LAB_00456dd9
    LEA EDI,[ESP + 0x3c]                ; 00456d86
    LEA ESI,[ESP + 0x30]                ; 00456d8a
    MOVSD ES:EDI,ESI                    ; 00456d8e
    MOVSD ES:EDI,ESI                    ; 00456d8f
    MOVSD ES:EDI,ESI                    ; 00456d90
    LEA EAX,[ESP + 0x24]                ; 00456d91
    LEA ESI,[ESP + 0x30]                ; 00456d95
    CMP ESI,EAX                         ; 00456d99
    JZ 0x00456db5                       ; 00456d9b
        ;   XREF to: 00456db5 (CONDITIONAL_JUMP)  ; LAB_00456db5
    MOV EAX,dword ptr [ESP + 0x24]      ; 00456d9d
    MOV dword ptr [ESP + 0x30],EAX      ; 00456da1
    MOV EAX,dword ptr [ESP + 0x28]      ; 00456da5
    MOV dword ptr [ESP + 0x34],EAX      ; 00456da9
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00456dad
    MOV dword ptr [ESP + 0x38],EAX      ; 00456db1
    LEA EAX,[ESP + 0x24]                ; 00456db5
        ;   Label: LAB_00456db5
    LEA ESI,[ESP + 0x3c]                ; 00456db9
    CMP EAX,ESI                         ; 00456dbd
    JZ 0x00456dd9                       ; 00456dbf
        ;   XREF to: 00456dd9 (CONDITIONAL_JUMP)  ; LAB_00456dd9
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00456dc1
    MOV dword ptr [ESP + 0x24],EAX      ; 00456dc5
    MOV EAX,dword ptr [ESP + 0x40]      ; 00456dc9
    MOV dword ptr [ESP + 0x28],EAX      ; 00456dcd
    MOV EAX,dword ptr [ESP + 0x44]      ; 00456dd1
    MOV dword ptr [ESP + 0x2c],EAX      ; 00456dd5
    MOV EAX,dword ptr [EBP + 0x18]      ; 00456dd9
        ;   Label: LAB_00456dd9
    FLD float ptr [ESP + 0x28]          ; 00456ddc
    FCOMP float ptr [EAX + 0x4]         ; 00456de0
    FNSTSW AX                           ; 00456de3
    SAHF                                ; 00456de5
    JA 0x00456f45                       ; 00456de6
        ;   XREF to: 00456f45 (CONDITIONAL_JUMP)  ; LAB_00456f45
    FLD float ptr [ESP + 0x4c]          ; 00456dec
    FCOMP float ptr [ESP + 0x34]        ; 00456df0
    FNSTSW AX                           ; 00456df4
    SAHF                                ; 00456df6
    JNC 0x00456e4c                      ; 00456df7
        ;   XREF to: 00456e4c (CONDITIONAL_JUMP)  ; LAB_00456e4c
    LEA EDI,[ESP + 0xc]                 ; 00456df9
    LEA ESI,[ESP + 0x48]                ; 00456dfd
    MOVSD ES:EDI,ESI                    ; 00456e01
    MOVSD ES:EDI,ESI                    ; 00456e02
    MOVSD ES:EDI,ESI                    ; 00456e03
    LEA EAX,[ESP + 0x30]                ; 00456e04
    LEA ESI,[ESP + 0x48]                ; 00456e08
    CMP ESI,EAX                         ; 00456e0c
    JZ 0x00456e28                       ; 00456e0e
        ;   XREF to: 00456e28 (CONDITIONAL_JUMP)  ; LAB_00456e28
    MOV EAX,dword ptr [ESP + 0x30]      ; 00456e10
    MOV dword ptr [ESP + 0x48],EAX      ; 00456e14
    MOV EAX,dword ptr [ESP + 0x34]      ; 00456e18
    MOV dword ptr [ESP + 0x4c],EAX      ; 00456e1c
    MOV EAX,dword ptr [ESP + 0x38]      ; 00456e20
    MOV dword ptr [ESP + 0x50],EAX      ; 00456e24
    LEA ESI,[ESP + 0x30]                ; 00456e28
        ;   Label: LAB_00456e28
    LEA EAX,[ESP + 0xc]                 ; 00456e2c
    CMP ESI,EAX                         ; 00456e30
    JZ 0x00456e4c                       ; 00456e32
        ;   XREF to: 00456e4c (CONDITIONAL_JUMP)  ; LAB_00456e4c
    MOV EAX,dword ptr [ESP + 0xc]       ; 00456e34
    MOV dword ptr [ESP + 0x30],EAX      ; 00456e38
    MOV EAX,dword ptr [ESP + 0x10]      ; 00456e3c
    MOV dword ptr [ESP + 0x34],EAX      ; 00456e40
    MOV EAX,dword ptr [ESP + 0x14]      ; 00456e44
    MOV dword ptr [ESP + 0x38],EAX      ; 00456e48
    MOV EAX,dword ptr [EBP + 0x20]      ; 00456e4c
        ;   Label: LAB_00456e4c
    FLD float ptr [ESP + 0x4c]          ; 00456e4f
    FCOMP float ptr [EAX]               ; 00456e53
    FNSTSW AX                           ; 00456e55
    SAHF                                ; 00456e57
    JC 0x00456f45                       ; 00456e58
        ;   XREF to: 00456f45 (CONDITIONAL_JUMP)  ; LAB_00456f45
    FLD float ptr [ESP + 0x50]          ; 00456e5e
    FMUL ST0                            ; 00456e62
    FLD float ptr [ESP + 0x48]          ; 00456e64
    FMUL ST0                            ; 00456e68
    FLD float ptr [EBP + 0x1c]          ; 00456e6a
    FMUL ST0                            ; 00456e6d
    FXCH                                ; 00456e6f
    FADDP ST2,ST0                       ; 00456e71
    FCOMPP                              ; 00456e73
    FNSTSW AX                           ; 00456e75
    SAHF                                ; 00456e77
    JA 0x00456faa                       ; 00456e78
        ;   XREF to: 00456faa (CONDITIONAL_JUMP)  ; LAB_00456faa
    MOV EDX,dword ptr [EBP + 0x20]      ; 00456e7e
    PUSH EDX                            ; 00456e81
    LEA EAX,[ESP + 0x34]                ; 00456e82
    PUSH dword ptr [EBP + 0x1c]         ; 00456e86
    PUSH EAX                            ; 00456e89
    LEA EAX,[ESP + 0x54]                ; 00456e8a
    PUSH EAX                            ; 00456e8e
    CALL core_dcube.cpp_intersectVerticalCylinderSegment_FUN_00456b60 ; 00456e8f
        ;   XREF to: 00456b60 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_intersectVerticalCylinderSegment_FUN_00456b60()
    ADD ESP,0x10                        ; 00456e94
    MOV ECX,dword ptr [EBP + 0x20]      ; 00456e97
    PUSH ECX                            ; 00456e9a
    MOV ESI,EAX                         ; 00456e9b
    LEA EAX,[ESP + 0x28]                ; 00456e9d
    PUSH dword ptr [EBP + 0x1c]         ; 00456ea1
    PUSH EAX                            ; 00456ea4
    LEA EAX,[ESP + 0x3c]                ; 00456ea5
    PUSH EAX                            ; 00456ea9
    CALL core_dcube.cpp_intersectVerticalCylinderSegment_FUN_00456b60 ; 00456eaa
        ;   XREF to: 00456b60 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_intersectVerticalCylinderSegment_FUN_00456b60()
    ADD ESP,0x10                        ; 00456eaf
    MOV EDI,dword ptr [EBP + 0x20]      ; 00456eb2
    PUSH EDI                            ; 00456eb5
    OR ESI,EAX                          ; 00456eb6
    LEA EAX,[ESP + 0x4c]                ; 00456eb8
    PUSH dword ptr [EBP + 0x1c]         ; 00456ebc
    PUSH EAX                            ; 00456ebf
    LEA EAX,[ESP + 0x30]                ; 00456ec0
    PUSH EAX                            ; 00456ec4
    CALL core_dcube.cpp_intersectVerticalCylinderSegment_FUN_00456b60 ; 00456ec5
        ;   XREF to: 00456b60 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_intersectVerticalCylinderSegment_FUN_00456b60()
    FLD float ptr [EBX + 0xc]           ; 00456eca
    FMUL ST0                            ; 00456ecd
    FLD float ptr [EBX + 0x14]          ; 00456ecf
    FMUL ST0                            ; 00456ed2
    FADDP                               ; 00456ed4
    OR ESI,EAX                          ; 00456ed6
    FSQRT                               ; 00456ed8
    ADD ESP,0x10                        ; 00456eda
    MOV AH,byte ptr [0x0152bd38]        ; 00456edd | DAT_0152bd38
    FSTP double ptr [ESP]               ; 00456ee3
    TEST AH,0x1                         ; 00456ee6
    JZ 0x00456fbf                       ; 00456ee9
        ;   XREF to: 00456fbf (CONDITIONAL_JUMP)  ; LAB_00456fbf
    FLD double ptr [ESP]                ; 00456eef
        ;   Label: LAB_00456eef
    FCOMP double ptr [0x005d7ac7]       ; 00456ef2 | DAT_005d7ac7
    FNSTSW AX                           ; 00456ef8
    SAHF                                ; 00456efa
    JNC 0x00456fe6                      ; 00456efb
        ;   XREF to: 00456fe6 (CONDITIONAL_JUMP)  ; LAB_00456fe6
    TEST ESI,ESI                        ; 00456f01
    JNZ 0x00456f3c                      ; 00456f03
        ;   XREF to: 00456f3c (CONDITIONAL_JUMP)  ; LAB_00456f3c
    PUSH 0x152bd2c                      ; 00456f05 | DAT_0152bd2c
    MOV EDI,dword ptr [EBP + 0x18]      ; 00456f0a
    PUSH EDI                            ; 00456f0d
    PUSH EBX                            ; 00456f0e
    CALL core_dcube.cpp_FUN_004560f0    ; 00456f0f
        ;   XREF to: 004560f0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_FUN_004560f0()
    MOV dword ptr [ESP + 0x80],EAX      ; 00456f14
    FLD float ptr [ESP + 0x80]          ; 00456f1b
    FLDZ                                ; 00456f22
    ADD ESP,0xc                         ; 00456f24
    FCOMPP                              ; 00456f27
    FNSTSW AX                           ; 00456f29
    SAHF                                ; 00456f2b
    JA 0x00456f3c                       ; 00456f2c
        ;   XREF to: 00456f3c (CONDITIONAL_JUMP)  ; LAB_00456f3c
    MOV EBX,dword ptr [EBP + 0x20]      ; 00456f2e
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00456f31
    MOV ESI,0x1                         ; 00456f35
    MOV dword ptr [EBX],EAX             ; 00456f3a
    MOV EAX,ESI                         ; 00456f3c
        ;   Label: LAB_00456f3c
    MOV ESP,EBP                         ; 00456f3e
    POP EBP                             ; 00456f40
    POP EDI                             ; 00456f41
    POP ESI                             ; 00456f42
    POP EBX                             ; 00456f43
    RET                                 ; 00456f44
    XOR EAX,EAX                         ; 00456f45
        ;   Label: LAB_00456f45
    MOV ESP,EBP                         ; 00456f47
    POP EBP                             ; 00456f49
    POP EDI                             ; 00456f4a
    POP ESI                             ; 00456f4b
    POP EBX                             ; 00456f4c
    RET                                 ; 00456f4d
    LEA EDI,[ESP + 0x54]                ; 00456f4e
        ;   Label: LAB_00456f4e
    LEA ESI,[ESP + 0x48]                ; 00456f52
    MOVSD ES:EDI,ESI                    ; 00456f56
    MOVSD ES:EDI,ESI                    ; 00456f57
    MOVSD ES:EDI,ESI                    ; 00456f58
    LEA EAX,[ESP + 0x30]                ; 00456f59
    LEA ESI,[ESP + 0x48]                ; 00456f5d
    CMP ESI,EAX                         ; 00456f61
    JZ 0x00456f7d                       ; 00456f63
        ;   XREF to: 00456f7d (CONDITIONAL_JUMP)  ; LAB_00456f7d
    MOV EAX,dword ptr [ESP + 0x30]      ; 00456f65
    MOV dword ptr [ESP + 0x48],EAX      ; 00456f69
    MOV EAX,dword ptr [ESP + 0x34]      ; 00456f6d
    MOV dword ptr [ESP + 0x4c],EAX      ; 00456f71
    MOV EAX,dword ptr [ESP + 0x38]      ; 00456f75
    MOV dword ptr [ESP + 0x50],EAX      ; 00456f79
    LEA ESI,[ESP + 0x30]                ; 00456f7d
        ;   Label: LAB_00456f7d
    LEA EAX,[ESP + 0x54]                ; 00456f81
    CMP ESI,EAX                         ; 00456f85
    JZ 0x00456d79                       ; 00456f87
        ;   XREF to: 00456d79 (CONDITIONAL_JUMP)  ; LAB_00456d79
    MOV EAX,dword ptr [ESP + 0x54]      ; 00456f8d
    MOV dword ptr [ESP + 0x30],EAX      ; 00456f91
    MOV EAX,dword ptr [ESP + 0x58]      ; 00456f95
    MOV dword ptr [ESP + 0x34],EAX      ; 00456f99
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00456f9d
    MOV dword ptr [ESP + 0x38],EAX      ; 00456fa1
    JMP 0x00456d79                      ; 00456fa5
        ;   XREF to: 00456d79 (UNCONDITIONAL_JUMP)  ; LAB_00456d79
    MOV EBX,dword ptr [EBP + 0x20]      ; 00456faa
        ;   Label: LAB_00456faa
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00456fad
    MOV dword ptr [EBX],EAX             ; 00456fb1
    MOV EAX,0x1                         ; 00456fb3
    MOV ESP,EBP                         ; 00456fb8
    POP EBP                             ; 00456fba
    POP EDI                             ; 00456fbb
    POP ESI                             ; 00456fbc
    POP EBX                             ; 00456fbd
    RET                                 ; 00456fbe
    MOV DL,AH                           ; 00456fbf
        ;   Label: LAB_00456fbf
    OR DL,0x1                           ; 00456fc1
    XOR EAX,EAX                         ; 00456fc4
    MOV byte ptr [0x0152bd38],DL        ; 00456fc6 | DAT_0152bd38
    MOV [0x0152bd2c],EAX                ; 00456fcc | DAT_0152bd2c
    MOV EDX,0xc2c80000                  ; 00456fd1
    MOV [0x0152bd34],EAX                ; 00456fd6 | DAT_0152bd34
    MOV dword ptr [0x0152bd30],EDX      ; 00456fdb | DAT_0152bd30
    JMP 0x00456eef                      ; 00456fe1
        ;   XREF to: 00456eef (UNCONDITIONAL_JUMP)  ; LAB_00456eef
    FLD float ptr [EBX + 0xc]           ; 00456fe6
        ;   Label: LAB_00456fe6
    FLD float ptr [EBP + 0x1c]          ; 00456fe9
    FDIV double ptr [ESP]               ; 00456fec
    FXCH                                ; 00456fef
    FMUL ST1                            ; 00456ff1
    MOV EAX,dword ptr [EBP + 0x18]      ; 00456ff3
    FADD float ptr [EAX]                ; 00456ff6
    FSTP float ptr [ESP + 0x18]         ; 00456ff8
    FMUL float ptr [EBX + 0x14]         ; 00456ffc
    FADD float ptr [EAX + 0x8]          ; 00456fff
    FSTP float ptr [ESP + 0x20]         ; 00457002
    MOV EAX,dword ptr [EAX + 0x4]       ; 00457006
    PUSH 0x152bd2c                      ; 00457009 | DAT_0152bd2c
    MOV dword ptr [ESP + 0x20],EAX      ; 0045700e
    LEA EAX,[ESP + 0x1c]                ; 00457012
    PUSH EAX                            ; 00457016
    PUSH EBX                            ; 00457017
    CALL core_dcube.cpp_FUN_004560f0    ; 00457018
        ;   XREF to: 004560f0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_FUN_004560f0()
    MOV dword ptr [ESP + 0x80],EAX      ; 0045701d
    FLD float ptr [ESP + 0x80]          ; 00457024
    ADD ESP,0xc                         ; 0045702b
    FST float ptr [ESP + 0x8]           ; 0045702e
    FLDZ                                ; 00457032
    FCOMPP                              ; 00457034
    FNSTSW AX                           ; 00457036
    SAHF                                ; 00457038
    JA 0x00456f3c                       ; 00457039
        ;   XREF to: 00456f3c (CONDITIONAL_JUMP)  ; LAB_00456f3c
    FLD float ptr [ESP + 0x8]           ; 0045703f
    FMUL float ptr [0x0152bd30]         ; 00457043 | DAT_0152bd30
    FADD float ptr [ESP + 0x1c]         ; 00457049
    MOV EAX,dword ptr [EBP + 0x20]      ; 0045704d
    FST float ptr [ESP + 0x70]          ; 00457050
    FCOMP float ptr [EAX]               ; 00457054
    FNSTSW AX                           ; 00457056
    SAHF                                ; 00457058
    JBE 0x00456f3c                      ; 00457059
        ;   XREF to: 00456f3c (CONDITIONAL_JUMP)  ; LAB_00456f3c
    MOV EBX,dword ptr [EBP + 0x20]      ; 0045705f
    MOV EAX,dword ptr [ESP + 0x70]      ; 00457062
    MOV ESI,0x1                         ; 00457066
    MOV dword ptr [EBX],EAX             ; 0045706b
    MOV EAX,ESI                         ; 0045706d
    MOV ESP,EBP                         ; 0045706f
    POP EBP                             ; 00457071
    POP EDI                             ; 00457072
    POP ESI                             ; 00457073
    POP EBX                             ; 00457074
    RET                                 ; 00457075

