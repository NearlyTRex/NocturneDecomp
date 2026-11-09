; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_spline_cpp_FUN_00583f90(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)
;
; Local Variables:
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
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
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[3]:
;   core_dracbrid.cpp_FUN_0047d920 at 0047dce7
;   core_dracbrid.cpp_FUN_0047de00 at 0047e072
;   core_flies.cpp_FUN_004c0080 at 004c02d4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00583f90
        ;   Label: core_spline.cpp_FUN_00583f90
    PUSH EDI                            ; 00583f91
    PUSH EBP                            ; 00583f92
    SUB ESP,0x9c                        ; 00583f93
    MOV EDX,dword ptr [ESP + 0xac]      ; 00583f99
    MOV EBX,dword ptr [ESP + 0xb0]      ; 00583fa0
    MOV EBP,dword ptr [ESP + 0xb4]      ; 00583fa7
    MOV EAX,ESI                         ; 00583fae
    MOV ESI,dword ptr [ESP + 0xbc]      ; 00583fb0
    LEA ECX,[EDX + 0xc]                 ; 00583fb7
    FLD float ptr [ESI]                 ; 00583fba
    FMUL float ptr [ECX]                ; 00583fbc
    FLD float ptr [ESI + 0x4]           ; 00583fbe
    FMUL float ptr [ECX]                ; 00583fc1
    FLD float ptr [ESI + 0x8]           ; 00583fc3
    FMUL float ptr [ECX]                ; 00583fc6
    LEA EDI,[ESP + 0x6c]                ; 00583fc8
    LEA ESI,[ESP + 0x48]                ; 00583fcc
    FXCH ST2                            ; 00583fd0
    FSTP float ptr [ESP + 0x48]         ; 00583fd2
    FSTP float ptr [ESP + 0x4c]         ; 00583fd6
    FSTP float ptr [ESP + 0x50]         ; 00583fda
    MOVSD ES:EDI,ESI                    ; 00583fde
    MOVSD ES:EDI,ESI                    ; 00583fdf
    MOVSD ES:EDI,ESI                    ; 00583fe0
    MOV ESI,dword ptr [ESP + 0xb8]      ; 00583fe1
    LEA ECX,[EDX + 0x8]                 ; 00583fe8
    FLD float ptr [ESI]                 ; 00583feb
    FMUL float ptr [ECX]                ; 00583fed
    FLD float ptr [ESI + 0x4]           ; 00583fef
    FMUL float ptr [ECX]                ; 00583ff2
    FLD float ptr [ESI + 0x8]           ; 00583ff4
    FMUL float ptr [ECX]                ; 00583ff7
    LEA EDI,[ESP + 0x18]                ; 00583ff9
    LEA ESI,[ESP + 0x84]                ; 00583ffd
    FXCH ST2                            ; 00584004
    FSTP float ptr [ESP + 0x84]         ; 00584006
    FSTP float ptr [ESP + 0x88]         ; 0058400d
    FSTP float ptr [ESP + 0x8c]         ; 00584014
    MOVSD ES:EDI,ESI                    ; 0058401b
    MOVSD ES:EDI,ESI                    ; 0058401c
    MOVSD ES:EDI,ESI                    ; 0058401d
    LEA ECX,[EDX + 0x4]                 ; 0058401e
    FLD float ptr [EBP]                 ; 00584021
    FMUL float ptr [ECX]                ; 00584024
    FLD float ptr [EBP + 0x4]           ; 00584026
    FMUL float ptr [ECX]                ; 00584029
    FLD float ptr [EBP + 0x8]           ; 0058402b
    FMUL float ptr [ECX]                ; 0058402e
    MOV EDI,ESP                         ; 00584030
    LEA ESI,[ESP + 0x30]                ; 00584032
    FXCH ST2                            ; 00584036
    FSTP float ptr [ESP + 0x30]         ; 00584038
    FSTP float ptr [ESP + 0x34]         ; 0058403c
    FSTP float ptr [ESP + 0x38]         ; 00584040
    MOVSD ES:EDI,ESI                    ; 00584044
    MOVSD ES:EDI,ESI                    ; 00584045
    MOVSD ES:EDI,ESI                    ; 00584046
    FLD float ptr [EBX]                 ; 00584047
    FMUL float ptr [EDX]                ; 00584049
    FLD float ptr [EBX + 0x4]           ; 0058404b
    FMUL float ptr [EDX]                ; 0058404e
    FLD float ptr [EBX + 0x8]           ; 00584050
    FMUL float ptr [EDX]                ; 00584053
    LEA EDI,[ESP + 0x54]                ; 00584055
    LEA ESI,[ESP + 0x60]                ; 00584059
    FXCH ST2                            ; 0058405d
    FSTP float ptr [ESP + 0x60]         ; 0058405f
    FSTP float ptr [ESP + 0x64]         ; 00584063
    FSTP float ptr [ESP + 0x68]         ; 00584067
    MOVSD ES:EDI,ESI                    ; 0058406b
    MOVSD ES:EDI,ESI                    ; 0058406c
    MOVSD ES:EDI,ESI                    ; 0058406d
    FLD float ptr [ESP + 0x54]          ; 0058406e
    FLD float ptr [ESP + 0x58]          ; 00584072
    FLD float ptr [ESP + 0x5c]          ; 00584076
    LEA EDI,[ESP + 0xc]                 ; 0058407a
    LEA ESI,[ESP + 0x3c]                ; 0058407e
    FXCH ST2                            ; 00584082
    FADD float ptr [ESP]                ; 00584084
    FXCH                                ; 00584087
    FADD float ptr [ESP + 0x4]          ; 00584089
    FXCH ST2                            ; 0058408d
    FADD float ptr [ESP + 0x8]          ; 0058408f
    FXCH                                ; 00584093
    FSTP float ptr [ESP + 0x3c]         ; 00584095
    FXCH                                ; 00584099
    FSTP float ptr [ESP + 0x40]         ; 0058409b
    FSTP float ptr [ESP + 0x44]         ; 0058409f
    MOVSD ES:EDI,ESI                    ; 005840a3
    MOVSD ES:EDI,ESI                    ; 005840a4
    MOVSD ES:EDI,ESI                    ; 005840a5
    FLD float ptr [ESP + 0xc]           ; 005840a6
    FLD float ptr [ESP + 0x10]          ; 005840aa
    FLD float ptr [ESP + 0x14]          ; 005840ae
    LEA EDI,[ESP + 0x24]                ; 005840b2
    LEA ESI,[ESP + 0x90]                ; 005840b6
    FXCH ST2                            ; 005840bd
    FADD float ptr [ESP + 0x18]         ; 005840bf
    FXCH                                ; 005840c3
    FADD float ptr [ESP + 0x1c]         ; 005840c5
    FXCH ST2                            ; 005840c9
    FADD float ptr [ESP + 0x20]         ; 005840cb
    FXCH                                ; 005840cf
    FSTP float ptr [ESP + 0x90]         ; 005840d1
    FXCH                                ; 005840d8
    FSTP float ptr [ESP + 0x94]         ; 005840da
    FSTP float ptr [ESP + 0x98]         ; 005840e1
    MOVSD ES:EDI,ESI                    ; 005840e8
    MOVSD ES:EDI,ESI                    ; 005840e9
    MOVSD ES:EDI,ESI                    ; 005840ea
    FLD float ptr [ESP + 0x24]          ; 005840eb
    FLD float ptr [ESP + 0x28]          ; 005840ef
    FLD float ptr [ESP + 0x2c]          ; 005840f3
    LEA ESI,[ESP + 0x78]                ; 005840f7
    MOV EDI,EAX                         ; 005840fb
    FXCH ST2                            ; 005840fd
    FADD float ptr [ESP + 0x6c]         ; 005840ff
    FXCH                                ; 00584103
    FADD float ptr [ESP + 0x70]         ; 00584105
    FXCH ST2                            ; 00584109
    FADD float ptr [ESP + 0x74]         ; 0058410b
    FXCH                                ; 0058410f
    FSTP float ptr [ESP + 0x78]         ; 00584111
    FXCH                                ; 00584115
    FSTP float ptr [ESP + 0x7c]         ; 00584117
    FSTP float ptr [ESP + 0x80]         ; 0058411b
    MOVSD ES:EDI,ESI                    ; 00584122
    MOVSD ES:EDI,ESI                    ; 00584123
    MOVSD ES:EDI,ESI                    ; 00584124
    ADD ESP,0x9c                        ; 00584125
    POP EBP                             ; 0058412b
    POP EDI                             ; 0058412c
    POP EBX                             ; 0058412d
    RET                                 ; 0058412e

