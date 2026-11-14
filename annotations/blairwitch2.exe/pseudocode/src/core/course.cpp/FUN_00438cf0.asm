; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_course_cpp_FUN_00438cf0(CCourse *this_ptr,float time,CVector3f *out_pos,CQuaternion4f *out_orient)
;
; Parameters:
; CCourse *        Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   time
; CVector3f *      Stack[0xc]:4   out_pos
; CQuaternion4f *  Stack[0x10]:4   out_orient
; Local Variables:
; undefined8       Stack[-0xc0]:8  local_c0
; undefined8       Stack[-0xb8]:8  local_b8
; undefined8       Stack[-0xb0]:8  local_b0
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined        Stack[-0x9c]:1  local_9c
; undefined        Stack[-0x8c]:1  local_8c
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
; undefined8       Stack[-0x28]:8  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_course.cpp_CCourse_evaluate_FUN_00438c40 at 00438c6c
;
; Referenced Globals:
;   undefined4 DAT_005ce07a
;
; Called Functions:
;   core_xform.cpp_slerpQuaternion_FUN_00593df0
;   crt_math.c_floor_FUN_005b84d0
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438cf0
        ;   Label: core_course.cpp_FUN_00438cf0
    PUSH ESI                            ; 00438cf1
    PUSH EDI                            ; 00438cf2
    PUSH EBP                            ; 00438cf3
    MOV EBP,ESP                         ; 00438cf4
    SUB ESP,0xa8                        ; 00438cf6
    AND ESP,0xfffffff8                  ; 00438cfc
    MOV EBX,dword ptr [EBP + 0x14]      ; 00438cff
    MOV EDX,dword ptr [EBX + 0x8]       ; 00438d02
    TEST EDX,EDX                        ; 00438d05
    JNZ 0x00438ebb                      ; 00438d07
        ;   XREF to: 00438ebb (CONDITIONAL_JUMP)  ; LAB_00438ebb
    FLD float ptr [EBP + 0x18]          ; 00438d0d
    FLDZ                                ; 00438d10
    FCOMPP                              ; 00438d12
    FNSTSW AX                           ; 00438d14
    SAHF                                ; 00438d16
    JC 0x00438fa0                       ; 00438d17
        ;   XREF to: 00438fa0 (CONDITIONAL_JUMP)  ; LAB_00438fa0
    MOV dword ptr [ESP + 0xa0],EDX      ; 00438d1d
    MOV dword ptr [ESP + 0x14],EDX      ; 00438d24
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00438d28
        ;   Label: LAB_00438d28
    SHL EAX,0x2                         ; 00438d2f
    FLD float ptr [ESP + 0x14]          ; 00438d32
    MOV ECX,EAX                         ; 00438d36
    SHL EAX,0x3                         ; 00438d38
    FSTP double ptr [ESP]               ; 00438d3b
    SUB EAX,ECX                         ; 00438d3e
    FLD double ptr [ESP]                ; 00438d40
    MOV dword ptr [ESP + 0x98],EAX      ; 00438d43
    FCOMP double ptr [0x005ce07a]       ; 00438d4a | DAT_005ce07a
    FNSTSW AX                           ; 00438d50
    SAHF                                ; 00438d52
    JBE 0x00439006                      ; 00438d53
        ;   XREF to: 00439006 (CONDITIONAL_JUMP)  ; LAB_00439006
    LEA EAX,[EDX*0x4 + 0x0]             ; 00438d59
    MOV ECX,EAX                         ; 00438d60
    SHL EAX,0x3                         ; 00438d62
    SUB EAX,ECX                         ; 00438d65
    MOV ECX,dword ptr [EBX + 0x4]       ; 00438d67
    FLD float ptr [ESP + 0x14]          ; 00438d6a
    FLD float ptr [ECX + EAX*0x1]       ; 00438d6e
    FMUL ST1                            ; 00438d71
    FLD float ptr [ECX + EAX*0x1 + 0x4] ; 00438d73
    FMUL ST2                            ; 00438d77
    FLD float ptr [ECX + EAX*0x1 + 0x8] ; 00438d79
    FMULP ST3                           ; 00438d7d
    FLD1                                ; 00438d7f
    LEA EDI,[ESP + 0x48]                ; 00438d81
    LEA ESI,[ESP + 0x6c]                ; 00438d85
    FSUB double ptr [ESP]               ; 00438d89
    MOV EAX,dword ptr [ESP + 0x98]      ; 00438d8c
    FXCH ST2                            ; 00438d93
    FSTP float ptr [ESP + 0x6c]         ; 00438d95
    FSTP float ptr [ESP + 0x70]         ; 00438d99
    FXCH                                ; 00438d9d
    FSTP float ptr [ESP + 0x74]         ; 00438d9f
    MOVSD ES:EDI,ESI                    ; 00438da3
    MOVSD ES:EDI,ESI                    ; 00438da4
    MOVSD ES:EDI,ESI                    ; 00438da5
    FSTP float ptr [ESP + 0x9c]         ; 00438da6
    FLD float ptr [ECX + EAX*0x1]       ; 00438dad
    FMUL float ptr [ESP + 0x9c]         ; 00438db0
    FLD float ptr [ECX + EAX*0x1 + 0x4] ; 00438db7
    FMUL float ptr [ESP + 0x9c]         ; 00438dbb
    FLD float ptr [ECX + EAX*0x1 + 0x8] ; 00438dc2
    FMUL float ptr [ESP + 0x9c]         ; 00438dc6
    LEA EDI,[ESP + 0x84]                ; 00438dcd
    LEA ESI,[ESP + 0x60]                ; 00438dd4
    LEA ECX,[ESP + 0x78]                ; 00438dd8
    FXCH ST2                            ; 00438ddc
    FSTP float ptr [ESP + 0x60]         ; 00438dde
    FSTP float ptr [ESP + 0x64]         ; 00438de2
    FSTP float ptr [ESP + 0x68]         ; 00438de6
    MOVSD ES:EDI,ESI                    ; 00438dea
    MOVSD ES:EDI,ESI                    ; 00438deb
    MOVSD ES:EDI,ESI                    ; 00438dec
    LEA EAX,[ESP + 0x3c]                ; 00438ded
    FLD float ptr [ESP + 0x84]          ; 00438df1
    FLD float ptr [ESP + 0x88]          ; 00438df8
    FLD float ptr [ESP + 0x8c]          ; 00438dff
    LEA EDI,[ESP + 0x78]                ; 00438e06
    LEA ESI,[ESP + 0x54]                ; 00438e0a
    FXCH ST2                            ; 00438e0e
    FADD float ptr [ESP + 0x48]         ; 00438e10
    FXCH                                ; 00438e14
    FADD float ptr [ESP + 0x4c]         ; 00438e16
    FXCH ST2                            ; 00438e1a
    FADD float ptr [ESP + 0x50]         ; 00438e1c
    FXCH                                ; 00438e20
    FSTP float ptr [ESP + 0x54]         ; 00438e22
    FXCH                                ; 00438e26
    FSTP float ptr [ESP + 0x58]         ; 00438e28
    FSTP float ptr [ESP + 0x5c]         ; 00438e2c
    MOVSD ES:EDI,ESI                    ; 00438e30
    MOVSD ES:EDI,ESI                    ; 00438e31
    MOVSD ES:EDI,ESI                    ; 00438e32
    CMP EAX,ECX                         ; 00438e33
    JZ 0x00438e52                       ; 00438e35
        ;   XREF to: 00438e52 (CONDITIONAL_JUMP)  ; LAB_00438e52
    MOV EAX,dword ptr [ESP + 0x78]      ; 00438e37
    MOV dword ptr [ESP + 0x3c],EAX      ; 00438e3b
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00438e3f
    MOV dword ptr [ESP + 0x40],EAX      ; 00438e43
    MOV EAX,dword ptr [ESP + 0x80]      ; 00438e47
    MOV dword ptr [ESP + 0x44],EAX      ; 00438e4e
    SHL EDX,0x2                         ; 00438e52
        ;   Label: LAB_00438e52
    LEA EAX,[EDX*0x8 + 0x0]             ; 00438e55
    MOV ECX,dword ptr [EBX + 0x4]       ; 00438e5c
    SUB EAX,EDX                         ; 00438e5f
    ADD EAX,ECX                         ; 00438e61
    ADD EAX,0xc                         ; 00438e63
    PUSH dword ptr [ESP + 0x14]         ; 00438e66
    PUSH EAX                            ; 00438e6a
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00438e6b
    SHL EAX,0x2                         ; 00438e72
    MOV EDX,EAX                         ; 00438e75
    SHL EAX,0x3                         ; 00438e77
    SUB EAX,EDX                         ; 00438e7a
    ADD EAX,ECX                         ; 00438e7c
    ADD EAX,0xc                         ; 00438e7e
    PUSH EAX                            ; 00438e81
    LEA ESI,[ESP + 0x28]                ; 00438e82
    LEA EDI,[ESP + 0x38]                ; 00438e86
    CALL core_xform.cpp_slerpQuaternion_FUN_00593df0 ; 00438e8a
        ;   XREF to: 00593df0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_00593df0()
    LEA ESI,[ESP + 0x28]                ; 00438e8f
    ADD ESP,0xc                         ; 00438e93
    MOVSD ES:EDI,ESI                    ; 00438e96
        ;   Label: LAB_00438e96
    MOVSD ES:EDI,ESI                    ; 00438e97
    MOVSD ES:EDI,ESI                    ; 00438e98
    MOVSD ES:EDI,ESI                    ; 00438e99
    MOV EBX,dword ptr [EBP + 0x1c]      ; 00438e9a
    LEA EAX,[ESP + 0x3c]                ; 00438e9d
    CMP EAX,EBX                         ; 00438ea1
    JNZ 0x0043904f                      ; 00438ea3
        ;   XREF to: 0043904f (CONDITIONAL_JUMP)  ; LAB_0043904f
    MOV EDI,dword ptr [EBP + 0x20]      ; 00438ea9
    LEA ESI,[ESP + 0x2c]                ; 00438eac
    MOVSD ES:EDI,ESI                    ; 00438eb0
    MOVSD ES:EDI,ESI                    ; 00438eb1
    MOVSD ES:EDI,ESI                    ; 00438eb2
    MOVSD ES:EDI,ESI                    ; 00438eb3
    MOV ESP,EBP                         ; 00438eb4
    POP EBP                             ; 00438eb6
    POP EDI                             ; 00438eb7
    POP ESI                             ; 00438eb8
    POP EBX                             ; 00438eb9
    RET                                 ; 00438eba
    FLD float ptr [EBP + 0x18]          ; 00438ebb
        ;   Label: LAB_00438ebb
    FLDZ                                ; 00438ebe
    FILD dword ptr [EBX]                ; 00438ec0
    FSTP float ptr [ESP + 0x18]         ; 00438ec2
    FXCH                                ; 00438ec6
    FSTP double ptr [ESP + 0x8]         ; 00438ec8
    FCOMP double ptr [ESP + 0x8]        ; 00438ecc
    FNSTSW AX                           ; 00438ed0
    SAHF                                ; 00438ed2
    JBE 0x00438f6c                      ; 00438ed3
        ;   XREF to: 00438f6c (CONDITIONAL_JUMP)  ; LAB_00438f6c
    FLD float ptr [EBP + 0x18]          ; 00438ed9
    FCHS                                ; 00438edc
    FDIV float ptr [ESP + 0x18]         ; 00438ede
    SUB ESP,0x8                         ; 00438ee2
    FSTP double ptr [ESP]               ; 00438ee5
    CALL crt_math.c_floor_FUN_005b84d0  ; 00438ee8
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005b84d0(double input_value)
    MOV dword ptr [ESP + 0x98],EAX      ; 00438eed
    MOV dword ptr [ESP + 0x9c],EDX      ; 00438ef4
    FLD double ptr [ESP + 0x98]         ; 00438efb
    ADD ESP,0x8                         ; 00438f02
    FMUL float ptr [ESP + 0x18]         ; 00438f05
    FADD double ptr [ESP + 0x8]         ; 00438f09
    FST float ptr [ESP + 0x10]          ; 00438f0d
    FLDZ                                ; 00438f11
    FCOMPP                              ; 00438f13
    FNSTSW AX                           ; 00438f15
    SAHF                                ; 00438f17
    JBE 0x00438f26                      ; 00438f18
        ;   XREF to: 00438f26 (CONDITIONAL_JUMP)  ; LAB_00438f26
    FLD float ptr [ESP + 0x10]          ; 00438f1a
    FADD float ptr [ESP + 0x18]         ; 00438f1e
    FSTP float ptr [ESP + 0x10]         ; 00438f22
        ;   Label: LAB_00438f22
    FLD float ptr [ESP + 0x10]          ; 00438f26
        ;   Label: LAB_00438f26
    FLD ST0                             ; 00438f2a
    CALL crt_math.c_round_FUN_005b7ff0  ; 00438f2c
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0xa0]        ; 00438f31
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00438f38
    MOV EDX,dword ptr [ESP + 0xa0]      ; 00438f3f
    MOV dword ptr [ESP + 0xa4],EAX      ; 00438f46
    INC EDX                             ; 00438f4d
    FILD dword ptr [ESP + 0xa4]         ; 00438f4e
    FSUBP                               ; 00438f55
    MOV EAX,dword ptr [EBX]             ; 00438f57
    FSTP float ptr [ESP + 0x14]         ; 00438f59
    CMP EDX,EAX                         ; 00438f5d
    JL 0x00438d28                       ; 00438f5f
        ;   XREF to: 00438d28 (CONDITIONAL_JUMP)  ; LAB_00438d28
    XOR EDX,EDX                         ; 00438f65
    JMP 0x00438d28                      ; 00438f67
        ;   XREF to: 00438d28 (UNCONDITIONAL_JUMP)  ; LAB_00438d28
    FLD float ptr [EBP + 0x18]          ; 00438f6c
        ;   Label: LAB_00438f6c
    FDIV float ptr [ESP + 0x18]         ; 00438f6f
    SUB ESP,0x8                         ; 00438f73
    FSTP double ptr [ESP]               ; 00438f76
    CALL crt_math.c_floor_FUN_005b84d0  ; 00438f79
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005b84d0(double input_value)
    MOV dword ptr [ESP + 0x98],EAX      ; 00438f7e
    MOV dword ptr [ESP + 0x9c],EDX      ; 00438f85
    FLD double ptr [ESP + 0x98]         ; 00438f8c
    ADD ESP,0x8                         ; 00438f93
    FMUL float ptr [ESP + 0x18]         ; 00438f96
    FSUBR double ptr [ESP + 0x8]        ; 00438f9a
    JMP 0x00438f22                      ; 00438f9e
        ;   XREF to: 00438f22 (UNCONDITIONAL_JUMP)  ; LAB_00438f22
    MOV ECX,dword ptr [EBX]             ; 00438fa0
        ;   Label: LAB_00438fa0
    DEC ECX                             ; 00438fa2
    MOV dword ptr [ESP + 0xa4],ECX      ; 00438fa3
    FILD dword ptr [ESP + 0xa4]         ; 00438faa
    FCOMP float ptr [EBP + 0x18]        ; 00438fb1
    FNSTSW AX                           ; 00438fb4
    SAHF                                ; 00438fb6
    JA 0x00438fcd                       ; 00438fb7
        ;   XREF to: 00438fcd (CONDITIONAL_JUMP)  ; LAB_00438fcd
    MOV dword ptr [ESP + 0xa0],ECX      ; 00438fb9
    MOV EDX,ECX                         ; 00438fc0
    XOR ECX,ECX                         ; 00438fc2
    MOV dword ptr [ESP + 0x14],ECX      ; 00438fc4
    JMP 0x00438d28                      ; 00438fc8
        ;   XREF to: 00438d28 (UNCONDITIONAL_JUMP)  ; LAB_00438d28
    FLD float ptr [EBP + 0x18]          ; 00438fcd
        ;   Label: LAB_00438fcd
    FLD ST0                             ; 00438fd0
    CALL crt_math.c_round_FUN_005b7ff0  ; 00438fd2
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0xa0]        ; 00438fd7
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00438fde
    MOV dword ptr [ESP + 0xa4],EAX      ; 00438fe5
    MOV EDX,dword ptr [ESP + 0xa0]      ; 00438fec
    FILD dword ptr [ESP + 0xa4]         ; 00438ff3
    FSUBP                               ; 00438ffa
    INC EDX                             ; 00438ffc
    FSTP float ptr [ESP + 0x14]         ; 00438ffd
    JMP 0x00438d28                      ; 00439001
        ;   XREF to: 00438d28 (UNCONDITIONAL_JUMP)  ; LAB_00438d28
    MOV ECX,dword ptr [ESP + 0x98]      ; 00439006
        ;   Label: LAB_00439006
    MOV EDX,dword ptr [EBX + 0x4]       ; 0043900d
    LEA EAX,[ESP + 0x3c]                ; 00439010
    ADD EDX,ECX                         ; 00439014
    CMP EAX,EDX                         ; 00439016
    JZ 0x0043902e                       ; 00439018
        ;   XREF to: 0043902e (CONDITIONAL_JUMP)  ; LAB_0043902e
    MOV EAX,dword ptr [EDX]             ; 0043901a
    MOV dword ptr [ESP + 0x3c],EAX      ; 0043901c
    MOV EAX,dword ptr [EDX + 0x4]       ; 00439020
    MOV dword ptr [ESP + 0x40],EAX      ; 00439023
    MOV EAX,dword ptr [EDX + 0x8]       ; 00439027
    MOV dword ptr [ESP + 0x44],EAX      ; 0043902a
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0043902e
        ;   Label: LAB_0043902e
    SHL EAX,0x2                         ; 00439035
    MOV EDX,EAX                         ; 00439038
    SHL EAX,0x3                         ; 0043903a
    SUB EAX,EDX                         ; 0043903d
    MOV EDX,dword ptr [EBX + 0x4]       ; 0043903f
    LEA EDI,[ESP + 0x2c]                ; 00439042
    LEA ESI,[EDX + EAX*0x1 + 0xc]       ; 00439046
    JMP 0x00438e96                      ; 0043904a
        ;   XREF to: 00438e96 (UNCONDITIONAL_JUMP)  ; LAB_00438e96
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0043904f
        ;   Label: LAB_0043904f
    MOV dword ptr [EBX],EAX             ; 00439053
    MOV EAX,dword ptr [ESP + 0x40]      ; 00439055
    MOV dword ptr [EBX + 0x4],EAX       ; 00439059
    MOV EAX,dword ptr [ESP + 0x44]      ; 0043905c
    MOV dword ptr [EBX + 0x8],EAX       ; 00439060
    MOV EDI,dword ptr [EBP + 0x20]      ; 00439063
    LEA ESI,[ESP + 0x2c]                ; 00439066
    MOVSD ES:EDI,ESI                    ; 0043906a
    MOVSD ES:EDI,ESI                    ; 0043906b
    MOVSD ES:EDI,ESI                    ; 0043906c
    MOVSD ES:EDI,ESI                    ; 0043906d
    MOV ESP,EBP                         ; 0043906e
    POP EBP                             ; 00439070
    POP EDI                             ; 00439071
    POP ESI                             ; 00439072
    POP EBX                             ; 00439073
    RET                                 ; 00439074

