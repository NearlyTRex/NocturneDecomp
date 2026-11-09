; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_00431cc0(CCharacter *param_1,int param_2,float param_3,float param_4,int *param_5)
;
; Local Variables:
; undefined        Stack[-0x78]:1  local_78
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined        Stack[-0x60]:1  local_60
; undefined        Stack[-0x54]:1  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[5]:
;   core_charactr.cpp_FUN_00432240 at 004324e5
;   core_hostage.cpp_FUN_004ed890 at 004ee4fe
;   core_shadow.cpp_FUN_0055de50 at 0055ed44
;   core_vampboss.cpp_FUN_005a5550 at 005a6851
;   unkafter_djien.cpp_FUN_00460230 at 004605d3
;
; Referenced Globals:
;   TerminatedCString s_s_tried_to_follow_NULL_a_005d5aa5
;   TerminatedCString s_s_confused_while_followi_005d5ac5
;   TerminatedCString s_s_confused_after_pathmap_005d5ae5
;   undefined4 DAT_005d5b1f
;   undefined4 DAT_005d5b27
;   undefined4 DAT_005d5b2f
;   undefined4 DAT_005d5b37
;   undefined4 DAT_005d5b3f
;   undefined4 DAT_005d5b47
;   CConsole* g_CConsolePtr = 007db5f0
;   CConsole g_CConsoleInstance
;   undefined4 DAT_02c8af28
;
; Called Functions:
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_FUN_0040cd60
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0
;   core_vecdir.cpp_FUN_005a7520
;   engine_console.cpp_FUN_00445430
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00431cc0
        ;   Label: core_charactr.cpp_FUN_00431cc0
    PUSH ESI                            ; 00431cc1
    PUSH EDI                            ; 00431cc2
    PUSH EBP                            ; 00431cc3
    MOV EBP,ESP                         ; 00431cc4
    SUB ESP,0x64                        ; 00431cc6
    AND ESP,0xfffffff8                  ; 00431cc9
    MOV EBX,dword ptr [EBP + 0x14]      ; 00431ccc
    MOV EDX,dword ptr [EBP + 0x18]      ; 00431ccf
    TEST EDX,EDX                        ; 00431cd2
    JZ 0x00431df3                       ; 00431cd4
        ;   XREF to: 00431df3 (CONDITIONAL_JUMP)  ; LAB_00431df3
    FLD float ptr [EBP + 0x1c]          ; 00431cda
    LEA EDI,[ESP + 0xc]                 ; 00431cdd
    LEA ESI,[ESP + 0x30]                ; 00431ce1
    MOV EAX,EDX                         ; 00431ce5
    FLDZ                                ; 00431ce7
    FLD float ptr [EAX + 0x20]          ; 00431ce9
    FLD float ptr [EAX + 0x24]          ; 00431cec
    LEA EDX,[EBX + 0x20]                ; 00431cef
    FLD float ptr [EAX + 0x28]          ; 00431cf2
    FXCH ST2                            ; 00431cf5
    FSUB float ptr [EDX]                ; 00431cf7
    FXCH                                ; 00431cf9
    FSUB float ptr [EDX + 0x4]          ; 00431cfb
    FXCH ST2                            ; 00431cfe
    FSUB float ptr [EDX + 0x8]          ; 00431d00
    FXCH                                ; 00431d03
    FSTP float ptr [ESP + 0x30]         ; 00431d05
    FXCH                                ; 00431d09
    FSTP float ptr [ESP + 0x34]         ; 00431d0b
    FSTP float ptr [ESP + 0x38]         ; 00431d0f
    MOVSD ES:EDI,ESI                    ; 00431d13
    MOVSD ES:EDI,ESI                    ; 00431d14
    MOVSD ES:EDI,ESI                    ; 00431d15
    FCOMPP                              ; 00431d16
    FNSTSW AX                           ; 00431d18
    SAHF                                ; 00431d1a
    JA 0x00431e18                       ; 00431d1b
        ;   XREF to: 00431e18 (CONDITIONAL_JUMP)  ; LAB_00431e18
    CMP dword ptr [EBX + 0x27a8],0x0    ; 00431d21
    JNZ 0x00431d69                      ; 00431d28
        ;   XREF to: 00431d69 (CONDITIONAL_JUMP)  ; LAB_00431d69
    FLD float ptr [ESP + 0x10]          ; 00431d2a
    FABS                                ; 00431d2e
    FCOMP double ptr [0x005d5b1f]       ; 00431d30 | DAT_005d5b1f
    FNSTSW AX                           ; 00431d36
    SAHF                                ; 00431d38
    JA 0x00431f64                       ; 00431d39
        ;   XREF to: 00431f64 (CONDITIONAL_JUMP)  ; LAB_00431f64
    FLD float ptr [ESP + 0xc]           ; 00431d3f
    FABS                                ; 00431d43
    FCOMP double ptr [0x005d5b27]       ; 00431d45 | DAT_005d5b27
    FNSTSW AX                           ; 00431d4b
    SAHF                                ; 00431d4d
    JA 0x00431f64                       ; 00431d4e
        ;   XREF to: 00431f64 (CONDITIONAL_JUMP)  ; LAB_00431f64
    FLD float ptr [ESP + 0x14]          ; 00431d54
    FABS                                ; 00431d58
    FCOMP double ptr [0x005d5b27]       ; 00431d5a | DAT_005d5b27
    FNSTSW AX                           ; 00431d60
    SAHF                                ; 00431d62
    JA 0x00431f64                       ; 00431d63
        ;   XREF to: 00431f64 (CONDITIONAL_JUMP)  ; LAB_00431f64
    FLD float ptr [ESP + 0xc]           ; 00431d69
        ;   Label: LAB_00431d69
    FMUL ST0                            ; 00431d6d
    FLD float ptr [ESP + 0x14]          ; 00431d6f
    FMUL ST0                            ; 00431d73
    XOR EAX,EAX                         ; 00431d75
    FADDP                               ; 00431d77
    MOV dword ptr [ESP + 0x10],EAX      ; 00431d79
    FSQRT                               ; 00431d7d
    FLD float ptr [EBP + 0x20]          ; 00431d7f
    FLDZ                                ; 00431d82
    FXCH ST2                            ; 00431d84
    FSTP float ptr [ESP + 0x48]         ; 00431d86
    FXCH                                ; 00431d8a
    FCOMPP                              ; 00431d8c
    FNSTSW AX                           ; 00431d8e
    SAHF                                ; 00431d90
    JBE 0x00431d9a                      ; 00431d91
        ;   XREF to: 00431d9a (CONDITIONAL_JUMP)  ; LAB_00431d9a
    MOV dword ptr [EBP + 0x20],0x7149f2ca ; 00431d93
    FLD float ptr [EBP + 0x1c]          ; 00431d9a
        ;   Label: LAB_00431d9a
    MOV EAX,dword ptr [EBP + 0x24]      ; 00431d9d
    FMUL double ptr [0x005d5b2f]        ; 00431da0 | DAT_005d5b2f
    MOV ECX,dword ptr [EAX]             ; 00431da6
    FSTP float ptr [ESP + 0x58]         ; 00431da8
    TEST ECX,ECX                        ; 00431dac
    JNZ 0x00431f8d                      ; 00431dae
        ;   XREF to: 00431f8d (CONDITIONAL_JUMP)  ; LAB_00431f8d
    FLD float ptr [EBP + 0x1c]          ; 00431db4
    FADD float ptr [ESP + 0x58]         ; 00431db7
    FSTP float ptr [EBP + 0x1c]         ; 00431dbb
        ;   Label: LAB_00431dbb
    FLD float ptr [EBP + 0x1c]          ; 00431dbe
        ;   Label: LAB_00431dbe
    FCOMP double ptr [0x005d5b37]       ; 00431dc1 | DAT_005d5b37
    FNSTSW AX                           ; 00431dc7
    SAHF                                ; 00431dc9
    JNC 0x00431dd3                      ; 00431dca
        ;   XREF to: 00431dd3 (CONDITIONAL_JUMP)  ; LAB_00431dd3
    MOV dword ptr [EBP + 0x1c],0x3c23d70a ; 00431dcc
    FLD float ptr [ESP + 0x48]          ; 00431dd3
        ;   Label: LAB_00431dd3
    FCOMP float ptr [EBP + 0x1c]        ; 00431dd7
    FNSTSW AX                           ; 00431dda
    SAHF                                ; 00431ddc
    JNC 0x00431fc4                      ; 00431ddd
        ;   XREF to: 00431fc4 (CONDITIONAL_JUMP)  ; LAB_00431fc4
    MOV EAX,dword ptr [EBP + 0x24]      ; 00431de3
    MOV dword ptr [EAX],0x0             ; 00431de6
    MOV ESP,EBP                         ; 00431dec
    POP EBP                             ; 00431dee
    POP EDI                             ; 00431def
    POP ESI                             ; 00431df0
    POP EBX                             ; 00431df1
    RET                                 ; 00431df2
    PUSH EBX                            ; 00431df3
        ;   Label: LAB_00431df3
    PUSH 0x5d5aa5                       ; 00431df4 | = "%s tried to follow NULL actor!\n"
    MOV ECX,dword ptr [0x00611100]      ; 00431df9 | g_CConsolePtr
    PUSH ECX                            ; 00431dff | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 00431e00
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0xc                         ; 00431e05
    MOV EAX,dword ptr [EBP + 0x24]      ; 00431e08
    MOV dword ptr [EAX],0x3             ; 00431e0b
    MOV ESP,EBP                         ; 00431e11
    POP EBP                             ; 00431e13
    POP EDI                             ; 00431e14
    POP ESI                             ; 00431e15
    POP EBX                             ; 00431e16
    RET                                 ; 00431e17
    LEA EAX,[ESP + 0xc]                 ; 00431e18
        ;   Label: LAB_00431e18
    XOR ESI,ESI                         ; 00431e1c
    PUSH EAX                            ; 00431e1e
    MOV dword ptr [ESP + 0x14],ESI      ; 00431e1f
    PUSH EBX                            ; 00431e23
    LEA ESI,[ESP + 0x8]                 ; 00431e24
    LEA EDI,[ESP + 0x44]                ; 00431e28
    CALL core_actor.cpp_FUN_00408b00    ; 00431e2c
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0x8]                 ; 00431e31
    ADD ESP,0x8                         ; 00431e35
    LEA EAX,[ESP + 0x3c]                ; 00431e38
    MOVSD ES:EDI,ESI                    ; 00431e3c
    MOVSD ES:EDI,ESI                    ; 00431e3d
    MOVSD ES:EDI,ESI                    ; 00431e3e
    PUSH EAX                            ; 00431e3f
    LEA ESI,[ESP + 0x1c]                ; 00431e40
    LEA EDI,[ESP + 0x28]                ; 00431e44
    CALL core_vecdir.cpp_FUN_005a7520   ; 00431e48
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005a7520()
    LEA ESI,[ESP + 0x1c]                ; 00431e4d
    ADD ESP,0x4                         ; 00431e51
    MOVSD ES:EDI,ESI                    ; 00431e54
    MOVSD ES:EDI,ESI                    ; 00431e55
    MOVSD ES:EDI,ESI                    ; 00431e56
    MOV EAX,dword ptr [ESP + 0x28]      ; 00431e57
    MOV dword ptr [EBX + 0x2508],EAX    ; 00431e5b
    MOV EAX,dword ptr [EBP + 0x24]      ; 00431e61
    CMP dword ptr [EAX],0x0             ; 00431e64
    JNZ 0x00431f0b                      ; 00431e67
        ;   XREF to: 00431f0b (CONDITIONAL_JUMP)  ; LAB_00431f0b
    FLD float ptr [EBX + 0x2508]        ; 00431e6d
    FABS                                ; 00431e73
    FCOMP double ptr [0x005d5b47]       ; 00431e75 | DAT_005d5b47
    FNSTSW AX                           ; 00431e7b
    SAHF                                ; 00431e7d
    JBE 0x00431f37                      ; 00431e7e
        ;   XREF to: 00431f37 (CONDITIONAL_JUMP)  ; LAB_00431f37
    MOV EAX,dword ptr [EBP + 0x24]      ; 00431e84
        ;   Label: LAB_00431e84
    MOV dword ptr [EAX],0x1             ; 00431e87
    MOV EAX,dword ptr [EBX + 0x2508]    ; 00431e8d
        ;   Label: LAB_00431e8d
    MOV dword ptr [ESP + 0x5c],EAX      ; 00431e93
    MOV EAX,dword ptr [EBX + 0x2528]    ; 00431e97
    PUSH dword ptr [ESP + 0x5c]         ; 00431e9d
    MOV dword ptr [ESP + 0x54],EAX      ; 00431ea1
    CALL core_actor.cpp_FUN_0040cd60    ; 00431ea5
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cd60()
    MOV dword ptr [ESP + 0x64],EAX      ; 00431eaa
    FLD float ptr [ESP + 0x64]          ; 00431eae
    ADD ESP,0x4                         ; 00431eb2
    FLD float ptr [ESP + 0x50]          ; 00431eb5
    FXCH                                ; 00431eb9
    FST float ptr [ESP + 0x5c]          ; 00431ebb
    FXCH                                ; 00431ebf
    FCHS                                ; 00431ec1
    FSTP float ptr [ESP + 0x4c]         ; 00431ec3
    FCOMP float ptr [ESP + 0x4c]        ; 00431ec7
    FNSTSW AX                           ; 00431ecb
    SAHF                                ; 00431ecd
    JNC 0x00431f45                      ; 00431ece
        ;   XREF to: 00431f45 (CONDITIONAL_JUMP)  ; LAB_00431f45
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00431ed0
    MOV dword ptr [ESP + 0x54],EAX      ; 00431ed4
        ;   Label: LAB_00431ed4
    MOV EAX,dword ptr [ESP + 0x54]      ; 00431ed8
    MOV dword ptr [EBX + 0x2508],EAX    ; 00431edc
    MOV dword ptr [EBX + 0x24a4],0x0    ; 00431ee2
        ;   Label: LAB_00431ee2
    MOV EAX,dword ptr [EBX + 0x24a4]    ; 00431eec
    MOV dword ptr [EBX + 0x24a0],EAX    ; 00431ef2
    MOV EAX,dword ptr [EBX + 0x24a0]    ; 00431ef8
    MOV dword ptr [EBX + 0x249c],EAX    ; 00431efe
    MOV ESP,EBP                         ; 00431f04
    POP EBP                             ; 00431f06
    POP EDI                             ; 00431f07
    POP ESI                             ; 00431f08
    POP EBX                             ; 00431f09
    RET                                 ; 00431f0a
    FLD float ptr [EBX + 0x2508]        ; 00431f0b
        ;   Label: LAB_00431f0b
    FABS                                ; 00431f11
    FCOMP double ptr [0x005d5b3f]       ; 00431f13 | DAT_005d5b3f
    FNSTSW AX                           ; 00431f19
    SAHF                                ; 00431f1b
    JNC 0x00431e84                      ; 00431f1c
        ;   XREF to: 00431e84 (CONDITIONAL_JUMP)  ; LAB_00431e84
    MOV EAX,dword ptr [EBP + 0x24]      ; 00431f22
    MOV dword ptr [EAX],0x0             ; 00431f25
    MOV dword ptr [EBX + 0x2508],0x0    ; 00431f2b
        ;   Label: LAB_00431f2b
    JMP 0x00431ee2                      ; 00431f35
        ;   XREF to: 00431ee2 (UNCONDITIONAL_JUMP)  ; LAB_00431ee2
    MOV EAX,dword ptr [EBP + 0x24]      ; 00431f37
        ;   Label: LAB_00431f37
    CMP dword ptr [EAX],0x1             ; 00431f3a
    JZ 0x00431e8d                       ; 00431f3d
        ;   XREF to: 00431e8d (CONDITIONAL_JUMP)  ; LAB_00431e8d
    JMP 0x00431f2b                      ; 00431f43
        ;   XREF to: 00431f2b (UNCONDITIONAL_JUMP)  ; LAB_00431f2b
    FLD float ptr [ESP + 0x5c]          ; 00431f45
        ;   Label: LAB_00431f45
    FCOMP float ptr [ESP + 0x50]        ; 00431f49
    FNSTSW AX                           ; 00431f4d
    SAHF                                ; 00431f4f
    JBE 0x00431f5b                      ; 00431f50
        ;   XREF to: 00431f5b (CONDITIONAL_JUMP)  ; LAB_00431f5b
    MOV EAX,dword ptr [ESP + 0x50]      ; 00431f52
    JMP 0x00431ed4                      ; 00431f56
        ;   XREF to: 00431ed4 (UNCONDITIONAL_JUMP)  ; LAB_00431ed4
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00431f5b
        ;   Label: LAB_00431f5b
    JMP 0x00431ed4                      ; 00431f5f
        ;   XREF to: 00431ed4 (UNCONDITIONAL_JUMP)  ; LAB_00431ed4
    MOV ESI,dword ptr [EBP + 0x18]      ; 00431f64
        ;   Label: LAB_00431f64
    PUSH ESI                            ; 00431f67
    PUSH EBX                            ; 00431f68
    PUSH 0x5d5ac5                       ; 00431f69 | = "%s confused while following %s\n"
    MOV EDI,dword ptr [0x00611100]      ; 00431f6e | g_CConsolePtr
    PUSH EDI                            ; 00431f74 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 00431f75
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x10                        ; 00431f7a
    MOV EAX,dword ptr [EBP + 0x24]      ; 00431f7d
    MOV dword ptr [EAX],0x3             ; 00431f80
    MOV ESP,EBP                         ; 00431f86
    POP EBP                             ; 00431f88
    POP EDI                             ; 00431f89
    POP ESI                             ; 00431f8a
    POP EBX                             ; 00431f8b
    RET                                 ; 00431f8c
    CMP ECX,0x1                         ; 00431f8d
        ;   Label: LAB_00431f8d
    JNZ 0x00431fac                      ; 00431f90
        ;   XREF to: 00431fac (CONDITIONAL_JUMP)  ; LAB_00431fac
    FLD float ptr [EBP + 0x1c]          ; 00431f92
    FLD float ptr [ESP + 0x58]          ; 00431f95
    FLD float ptr [EBP + 0x20]          ; 00431f99
    FADD ST0,ST1                        ; 00431f9c
    FXCH ST2                            ; 00431f9e
    FSUBRP                              ; 00431fa0
    FXCH                                ; 00431fa2
    FSTP float ptr [EBP + 0x20]         ; 00431fa4
    JMP 0x00431dbb                      ; 00431fa7
        ;   XREF to: 00431dbb (UNCONDITIONAL_JUMP)  ; LAB_00431dbb
    CMP ECX,0x2                         ; 00431fac
        ;   Label: LAB_00431fac
    JNZ 0x00431dbe                      ; 00431faf
        ;   XREF to: 00431dbe (CONDITIONAL_JUMP)  ; LAB_00431dbe
    FLD float ptr [EBP + 0x20]          ; 00431fb5
    FSUB float ptr [ESP + 0x58]         ; 00431fb8
    FSTP float ptr [EBP + 0x20]         ; 00431fbc
    JMP 0x00431dbe                      ; 00431fbf
        ;   XREF to: 00431dbe (UNCONDITIONAL_JUMP)  ; LAB_00431dbe
    PUSH 0x0                            ; 00431fc4
        ;   Label: LAB_00431fc4
    PUSH 0x0                            ; 00431fc6
    MOV EAX,dword ptr [EBP + 0x18]      ; 00431fc8
    PUSH 0x2c8af28                      ; 00431fcb | DAT_02c8af28
    MOV EDX,dword ptr [EBP + 0x18]      ; 00431fd0
    MOV EAX,dword ptr [EAX + 0x154]     ; 00431fd3
    PUSH EDX                            ; 00431fd9
    CALL dword ptr [EAX + 0xc4]         ; 00431fda
    ADD ESP,0x4                         ; 00431fe0
    PUSH EAX                            ; 00431fe3
    MOV EAX,dword ptr [EBP + 0x18]      ; 00431fe4
    ADD EAX,0x20                        ; 00431fe7
    PUSH EAX                            ; 00431fea
    PUSH EBX                            ; 00431feb
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0 ; 00431fec
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 00431ff1
    TEST EAX,EAX                        ; 00431ff4
    JL 0x00432014                       ; 00431ff6
        ;   XREF to: 00432014 (CONDITIONAL_JUMP)  ; LAB_00432014
    FLD float ptr [ESP + 0x48]          ; 00431ff8
    FCOMP float ptr [EBP + 0x20]        ; 00431ffc
    FNSTSW AX                           ; 00431fff
    SAHF                                ; 00432001
    JBE 0x0043203d                      ; 00432002
        ;   XREF to: 0043203d (CONDITIONAL_JUMP)  ; LAB_0043203d
    MOV EAX,dword ptr [EBP + 0x24]      ; 00432004
    MOV dword ptr [EAX],0x2             ; 00432007
    MOV ESP,EBP                         ; 0043200d
    POP EBP                             ; 0043200f
    POP EDI                             ; 00432010
    POP ESI                             ; 00432011
    POP EBX                             ; 00432012
    RET                                 ; 00432013
    MOV ECX,dword ptr [EBP + 0x18]      ; 00432014
        ;   Label: LAB_00432014
    PUSH ECX                            ; 00432017
    PUSH EBX                            ; 00432018
    PUSH 0x5d5ae5                       ; 00432019 | = "%s confused after pathmap call while ..."
    MOV EBX,dword ptr [0x00611100]      ; 0043201e | g_CConsolePtr
    PUSH EBX                            ; 00432024 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 00432025
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x10                        ; 0043202a
    MOV EAX,dword ptr [EBP + 0x24]      ; 0043202d
    MOV dword ptr [EAX],0x3             ; 00432030
    MOV ESP,EBP                         ; 00432036
    POP EBP                             ; 00432038
    POP EDI                             ; 00432039
    POP ESI                             ; 0043203a
    POP EBX                             ; 0043203b
    RET                                 ; 0043203c
    MOV EAX,dword ptr [EBP + 0x24]      ; 0043203d
        ;   Label: LAB_0043203d
    MOV dword ptr [EAX],0x1             ; 00432040
    MOV ESP,EBP                         ; 00432046
    POP EBP                             ; 00432048
    POP EDI                             ; 00432049
    POP ESI                             ; 0043204a
    POP EBX                             ; 0043204b
    RET                                 ; 0043204c

