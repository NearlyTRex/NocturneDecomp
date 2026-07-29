; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_flies_cpp_CFlies_generateRandomPoint_FUN_0048f9b0(CFlies *this_ptr,CVector3f *out_point,CVector3f *reference_point)
;
; Parameters:
; CFlies *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_point
; CVector3f *      Stack[0xc]:4   reference_point
; Local Variables:
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined8       Stack[-0x80]:8  local_80
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
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_flies.cpp_CFlies_initFly_FUN_0048f8f0 at 0048f927
;   core_flies.cpp_CFlies_process_FUN_0048f090 at 0048f38d
;
; Referenced Globals:
;   double DOUBLE_0058173f = 0.5
;   double DOUBLE_00581747 = -0.5
;   double DOUBLE_0058174f = 4
;   float FLOAT_00581757 = 4
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048f9b0
        ;   Label: core_flies.cpp_CFlies_generateRandomPoint_FUN_0048f9b0
    PUSH ESI                            ; 0048f9b1
    PUSH EDI                            ; 0048f9b2
    PUSH EBP                            ; 0048f9b3
    MOV EBP,ESP                         ; 0048f9b4
    SUB ESP,0x6c                        ; 0048f9b6
    AND ESP,0xfffffff8                  ; 0048f9b9
    MOV EDI,dword ptr [EBP + 0x14]      ; 0048f9bc
    MOV EBX,dword ptr [EBP + 0x18]      ; 0048f9bf
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0048f9c2
    PUSH 0x3f800000                     ; 0048f9c5
    PUSH 0x0                            ; 0048f9ca
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0048f9cc
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x70],EAX      ; 0048f9d1
    MOV EAX,dword ptr [ESP + 0x70]      ; 0048f9d5
    MOV dword ptr [EBX + 0x4],EAX       ; 0048f9d9
    FLD float ptr [EBX + 0x4]           ; 0048f9dc
    FMUL ST0                            ; 0048f9df
    FMUL float ptr [EDI + 0x154]        ; 0048f9e1
    ADD ESP,0x8                         ; 0048f9e7
    FSTP float ptr [EBX + 0x4]          ; 0048f9ea
    FLD float ptr [EDI + 0x150]         ; 0048f9ed
    FLD ST0                             ; 0048f9f3
    FMUL double ptr [0x0058173f]        ; 0048f9f5 | DOUBLE_0058173f
    SUB ESP,0x4                         ; 0048f9fb
    FXCH                                ; 0048f9fe
    FMUL double ptr [0x00581747]        ; 0048fa00 | DOUBLE_00581747
    FXCH                                ; 0048fa06
    FSTP float ptr [ESP]                ; 0048fa08
    SUB ESP,0x4                         ; 0048fa0b
    FSTP float ptr [ESP]                ; 0048fa0e
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0048fa11
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x70],EAX      ; 0048fa16
    MOV EAX,dword ptr [ESP + 0x70]      ; 0048fa1a
    MOV dword ptr [EBX],EAX             ; 0048fa1e
    ADD ESP,0x8                         ; 0048fa20
    FLD float ptr [EDI + 0x158]         ; 0048fa23
    FLD ST0                             ; 0048fa29
    FMUL double ptr [0x0058173f]        ; 0048fa2b | DOUBLE_0058173f
    SUB ESP,0x4                         ; 0048fa31
    FXCH                                ; 0048fa34
    FMUL double ptr [0x00581747]        ; 0048fa36 | DOUBLE_00581747
    FXCH                                ; 0048fa3c
    FSTP float ptr [ESP]                ; 0048fa3e
    SUB ESP,0x4                         ; 0048fa41
    FSTP float ptr [ESP]                ; 0048fa44
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0048fa47
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x70],EAX      ; 0048fa4c
    MOV EAX,dword ptr [ESP + 0x70]      ; 0048fa50
    MOV dword ptr [EBX + 0x8],EAX       ; 0048fa54
    ADD ESP,0x8                         ; 0048fa57
    TEST ESI,ESI                        ; 0048fa5a
    JZ 0x0048fb2c                       ; 0048fa5c
        ;   XREF to: 0048fb2c (CONDITIONAL_JUMP)  ; LAB_0048fb2c
    FLD float ptr [EBX]                 ; 0048fa62
    FSUB float ptr [ESI]                ; 0048fa64
    FSTP float ptr [ESP + 0x30]         ; 0048fa66
    FLD float ptr [EBX + 0x4]           ; 0048fa6a
    FSUB float ptr [ESI + 0x4]          ; 0048fa6d
    FST float ptr [ESP + 0x34]          ; 0048fa70
    FMUL float ptr [ESP + 0x34]         ; 0048fa74
    FLD float ptr [ESP + 0x30]          ; 0048fa78
    FMUL ST0                            ; 0048fa7c
    FLD float ptr [EBX + 0x8]           ; 0048fa7e
    FSUB float ptr [ESI + 0x8]          ; 0048fa81
    FXCH                                ; 0048fa84
    FADDP ST2,ST0                       ; 0048fa86
    FST float ptr [ESP + 0x38]          ; 0048fa88
    FMUL float ptr [ESP + 0x38]         ; 0048fa8c
    FADDP                               ; 0048fa90
    FSQRT                               ; 0048fa92
    FST float ptr [ESP + 0x8]           ; 0048fa94
    FST double ptr [ESP]                ; 0048fa98
    FCOMP double ptr [0x0058174f]       ; 0048fa9b | DOUBLE_0058174f
    FNSTSW AX                           ; 0048faa1
    SAHF                                ; 0048faa3
    JA 0x0048fb35                       ; 0048faa4
        ;   XREF to: 0048fb35 (CONDITIONAL_JUMP)  ; LAB_0048fb35
    FLD1                                ; 0048faaa
    FCOMP double ptr [ESP]              ; 0048faac
    FNSTSW AX                           ; 0048faaf
    SAHF                                ; 0048fab1
    JBE 0x0048fb2c                      ; 0048fab2
        ;   XREF to: 0048fb2c (CONDITIONAL_JUMP)  ; LAB_0048fb2c
    FLDZ                                ; 0048fab4
    FCOMP double ptr [ESP]              ; 0048fab6
    FNSTSW AX                           ; 0048fab9
    SAHF                                ; 0048fabb
    JNC 0x0048fb2c                      ; 0048fabc
        ;   XREF to: 0048fb2c (CONDITIONAL_JUMP)  ; LAB_0048fb2c
    FLD1                                ; 0048fabe
    FLD float ptr [ESP + 0x30]          ; 0048fac0
    FXCH                                ; 0048fac4
    FDIV float ptr [ESP + 0x8]          ; 0048fac6
    FXCH                                ; 0048faca
    FMUL ST1                            ; 0048facc
    FLD float ptr [ESP + 0x34]          ; 0048face
    MOV EAX,dword ptr [ESP + 0x30]      ; 0048fad2
    FMUL ST2                            ; 0048fad6
    MOV dword ptr [ESP + 0x48],EAX      ; 0048fad8
    MOV EAX,dword ptr [ESP + 0x34]      ; 0048fadc
    FLD float ptr [ESP + 0x38]          ; 0048fae0
    MOV dword ptr [ESP + 0x4c],EAX      ; 0048fae4
    MOV EAX,dword ptr [ESP + 0x38]      ; 0048fae8
    FMULP ST3                           ; 0048faec
    MOV dword ptr [ESP + 0x50],EAX      ; 0048faee
    FXCH                                ; 0048faf2
    FSTP float ptr [ESP + 0xc]          ; 0048faf4
    FSTP float ptr [ESP + 0x10]         ; 0048faf8
    FSTP float ptr [ESP + 0x14]         ; 0048fafc
    FLD float ptr [ESI]                 ; 0048fb00
    FADD float ptr [ESP + 0xc]          ; 0048fb02
    FSTP float ptr [ESP + 0x3c]         ; 0048fb06
    FLD float ptr [ESI + 0x4]           ; 0048fb0a
    FADD float ptr [ESP + 0x10]         ; 0048fb0d
    FSTP float ptr [ESP + 0x40]         ; 0048fb11
    FLD float ptr [ESI + 0x8]           ; 0048fb15
    FADD float ptr [ESP + 0x14]         ; 0048fb18
    LEA EAX,[ESP + 0x3c]                ; 0048fb1c
    FSTP float ptr [ESP + 0x44]         ; 0048fb20
    CMP EBX,EAX                         ; 0048fb24
    JNZ 0x0048fbc2                      ; 0048fb26
        ;   XREF to: 0048fbc2 (CONDITIONAL_JUMP)  ; LAB_0048fbc2
    MOV EAX,EBX                         ; 0048fb2c
        ;   Label: LAB_0048fb2c
    MOV ESP,EBP                         ; 0048fb2e
    POP EBP                             ; 0048fb30
    POP EDI                             ; 0048fb31
    POP ESI                             ; 0048fb32
    POP EBX                             ; 0048fb33
    RET                                 ; 0048fb34
    FLD float ptr [0x00581757]          ; 0048fb35 | FLOAT_00581757
        ;   Label: LAB_0048fb35
    FLD float ptr [ESP + 0x30]          ; 0048fb3b
    FMUL ST1                            ; 0048fb3f
    FLD float ptr [ESP + 0x34]          ; 0048fb41
    FMUL ST2                            ; 0048fb45
    FLD float ptr [ESP + 0x38]          ; 0048fb47
    FMULP ST3                           ; 0048fb4b
    FLD1                                ; 0048fb4d
    FXCH ST2                            ; 0048fb4f
    FST float ptr [ESP + 0x24]          ; 0048fb51
    FXCH ST2                            ; 0048fb55
    FDIV float ptr [ESP + 0x8]          ; 0048fb57
    FXCH ST2                            ; 0048fb5b
    FMUL ST2                            ; 0048fb5d
    FXCH                                ; 0048fb5f
    FST float ptr [ESP + 0x28]          ; 0048fb61
    FMUL ST2                            ; 0048fb65
    FXCH ST3                            ; 0048fb67
    FST float ptr [ESP + 0x2c]          ; 0048fb69
    FMULP ST2                           ; 0048fb6d
    FSTP float ptr [ESP + 0x18]         ; 0048fb6f
    FXCH                                ; 0048fb73
    FSTP float ptr [ESP + 0x1c]         ; 0048fb75
    FSTP float ptr [ESP + 0x20]         ; 0048fb79
    FLD float ptr [ESI]                 ; 0048fb7d
    FADD float ptr [ESP + 0x18]         ; 0048fb7f
    FSTP float ptr [ESP + 0x54]         ; 0048fb83
    FLD float ptr [ESI + 0x4]           ; 0048fb87
    FADD float ptr [ESP + 0x1c]         ; 0048fb8a
    FSTP float ptr [ESP + 0x58]         ; 0048fb8e
    FLD float ptr [ESI + 0x8]           ; 0048fb92
    FADD float ptr [ESP + 0x20]         ; 0048fb95
    LEA EAX,[ESP + 0x54]                ; 0048fb99
    FSTP float ptr [ESP + 0x5c]         ; 0048fb9d
    CMP EBX,EAX                         ; 0048fba1
    JZ 0x0048fb2c                       ; 0048fba3
        ;   XREF to: 0048fb2c (CONDITIONAL_JUMP)  ; LAB_0048fb2c
    MOV EAX,dword ptr [ESP + 0x54]      ; 0048fba5
    MOV dword ptr [EBX],EAX             ; 0048fba9
    MOV EAX,dword ptr [ESP + 0x58]      ; 0048fbab
    MOV dword ptr [EBX + 0x4],EAX       ; 0048fbaf
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0048fbb2
    MOV dword ptr [EBX + 0x8],EAX       ; 0048fbb6
    MOV EAX,EBX                         ; 0048fbb9
    MOV ESP,EBP                         ; 0048fbbb
    POP EBP                             ; 0048fbbd
    POP EDI                             ; 0048fbbe
    POP ESI                             ; 0048fbbf
    POP EBX                             ; 0048fbc0
    RET                                 ; 0048fbc1
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0048fbc2
        ;   Label: LAB_0048fbc2
    MOV dword ptr [EBX],EAX             ; 0048fbc6
    MOV EAX,dword ptr [ESP + 0x40]      ; 0048fbc8
    MOV dword ptr [EBX + 0x4],EAX       ; 0048fbcc
    MOV EAX,dword ptr [ESP + 0x44]      ; 0048fbcf
    MOV dword ptr [EBX + 0x8],EAX       ; 0048fbd3
    MOV EAX,EBX                         ; 0048fbd6
    MOV ESP,EBP                         ; 0048fbd8
    POP EBP                             ; 0048fbda
    POP EDI                             ; 0048fbdb
    POP ESI                             ; 0048fbdc
    POP EBX                             ; 0048fbdd
    RET                                 ; 0048fbde

