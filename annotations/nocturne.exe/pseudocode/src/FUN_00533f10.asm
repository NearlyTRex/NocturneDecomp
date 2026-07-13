; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * FUN_00533f10(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,float *param_6)
;
; Local Variables:
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
;
; XREF[3]:
;   FUN_0045ab40 at 0045af4f
;   FUN_0045b020 at 0045b263
;   FUN_0048f490 at 0048f6c8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00533f10
        ;   Label: FUN_00533f10
    PUSH ESI                            ; 00533f11
    PUSH EDI                            ; 00533f12
    PUSH EBP                            ; 00533f13
    SUB ESP,0x48                        ; 00533f14
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00533f17
    MOV ECX,dword ptr [ESP + 0x60]      ; 00533f1b
    MOV EDI,dword ptr [ESP + 0x64]      ; 00533f1f
    MOV EBX,dword ptr [ESP + 0x68]      ; 00533f23
    MOV ESI,dword ptr [ESP + 0x6c]      ; 00533f27
    MOV EBP,dword ptr [ESP + 0x70]      ; 00533f2b
    LEA EDX,[EAX + 0xc]                 ; 00533f2f
    FLD float ptr [EBP]                 ; 00533f32
    FMUL float ptr [EDX]                ; 00533f35
    FSTP float ptr [ESP + 0x24]         ; 00533f37
    FLD float ptr [EBP + 0x4]           ; 00533f3b
    FMUL float ptr [EDX]                ; 00533f3e
    FSTP float ptr [ESP + 0x28]         ; 00533f40
    FLD float ptr [EBP + 0x8]           ; 00533f44
    FMUL float ptr [EDX]                ; 00533f47
    FSTP float ptr [ESP + 0x2c]         ; 00533f49
    LEA EDX,[EAX + 0x8]                 ; 00533f4d
    FLD float ptr [ESI]                 ; 00533f50
    FMUL float ptr [EDX]                ; 00533f52
    FSTP float ptr [ESP]                ; 00533f54
    FLD float ptr [ESI + 0x4]           ; 00533f57
    FMUL float ptr [EDX]                ; 00533f5a
    FSTP float ptr [ESP + 0x4]          ; 00533f5c
    FLD float ptr [ESI + 0x8]           ; 00533f60
    FMUL float ptr [EDX]                ; 00533f63
    FSTP float ptr [ESP + 0x8]          ; 00533f65
    LEA EDX,[EAX + 0x4]                 ; 00533f69
    FLD float ptr [EBX]                 ; 00533f6c
    FMUL float ptr [EDX]                ; 00533f6e
    FSTP float ptr [ESP + 0x18]         ; 00533f70
    FLD float ptr [EBX + 0x4]           ; 00533f74
    FMUL float ptr [EDX]                ; 00533f77
    FSTP float ptr [ESP + 0x1c]         ; 00533f79
    FLD float ptr [EBX + 0x8]           ; 00533f7d
    FMUL float ptr [EDX]                ; 00533f80
    FSTP float ptr [ESP + 0x20]         ; 00533f82
    FLD float ptr [EDI]                 ; 00533f86
    FMUL float ptr [EAX]                ; 00533f88
    FSTP float ptr [ESP + 0x3c]         ; 00533f8a
    FLD float ptr [EDI + 0x4]           ; 00533f8e
    FMUL float ptr [EAX]                ; 00533f91
    FSTP float ptr [ESP + 0x40]         ; 00533f93
    FLD float ptr [EDI + 0x8]           ; 00533f97
    FMUL float ptr [EAX]                ; 00533f9a
    FLD float ptr [ESP + 0x3c]          ; 00533f9c
    FADD float ptr [ESP + 0x18]         ; 00533fa0
    FLD float ptr [ESP + 0x40]          ; 00533fa4
    FADD float ptr [ESP + 0x1c]         ; 00533fa8
    FXCH ST2                            ; 00533fac
    FSTP float ptr [ESP + 0x44]         ; 00533fae
    FSTP float ptr [ESP + 0x30]         ; 00533fb2
    FSTP float ptr [ESP + 0x34]         ; 00533fb6
    FLD float ptr [ESP + 0x44]          ; 00533fba
    FLD float ptr [ESP + 0x30]          ; 00533fbe
    FLD float ptr [ESP + 0x34]          ; 00533fc2
    FXCH ST2                            ; 00533fc6
    FADD float ptr [ESP + 0x20]         ; 00533fc8
    FXCH                                ; 00533fcc
    FADD float ptr [ESP]                ; 00533fce
    FXCH ST2                            ; 00533fd1
    FADD float ptr [ESP + 0x4]          ; 00533fd3
    FXCH                                ; 00533fd7
    FSTP float ptr [ESP + 0x38]         ; 00533fd9
    FXCH                                ; 00533fdd
    FSTP float ptr [ESP + 0xc]          ; 00533fdf
    FSTP float ptr [ESP + 0x10]         ; 00533fe3
    FLD float ptr [ESP + 0xc]           ; 00533fe7
    FLD float ptr [ESP + 0x38]          ; 00533feb
    FADD float ptr [ESP + 0x8]          ; 00533fef
    FXCH                                ; 00533ff3
    FADD float ptr [ESP + 0x24]         ; 00533ff5
    FXCH                                ; 00533ff9
    FSTP float ptr [ESP + 0x14]         ; 00533ffb
    FSTP float ptr [ECX]                ; 00533fff
    FLD float ptr [ESP + 0x10]          ; 00534001
    FADD float ptr [ESP + 0x28]         ; 00534005
    FSTP float ptr [ECX + 0x4]          ; 00534009
    FLD float ptr [ESP + 0x14]          ; 0053400c
    FADD float ptr [ESP + 0x2c]         ; 00534010
    MOV EAX,ECX                         ; 00534014
    FSTP float ptr [ECX + 0x8]          ; 00534016
    ADD ESP,0x48                        ; 00534019
    POP EBP                             ; 0053401c
    POP EDI                             ; 0053401d
    POP ESI                             ; 0053401e
    POP EBX                             ; 0053401f
    RET                                 ; 00534020

