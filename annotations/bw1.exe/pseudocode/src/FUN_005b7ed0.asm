; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b7ed0(float *param_1)
;
; Local Variables:
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
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[15]:
;   FUN_0040f4d0 at 0040f69e
;   FUN_0041d540 at 0041d6d5
;   FUN_0041d760 at 0041d795
;   FUN_004472a0 at 0044743a
;   FUN_00447560 at 00447595
;   FUN_00447810 at 0044784b
;   FUN_00460cb0 at 00460e11
;   FUN_0046caa0 at 0046d42e
;   FUN_004c89c0 at 004c8a0b
;   FUN_004e9250 at 004e9537
;   ... and 5 more
;
; Referenced Globals:
;   undefined4 DAT_005fa1bc
;
; Called Functions:
;   FUN_0045fd80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b7ed0
        ;   Label: FUN_005b7ed0
    PUSH EDI                            ; 005b7ed1
    SUB ESP,0x38                        ; 005b7ed2
    MOV EBX,ESI                         ; 005b7ed5
    MOV ESI,dword ptr [ESP + 0x44]      ; 005b7ed7
    FLD float ptr [ESI]                 ; 005b7edb
    LEA EAX,[ESP + 0x24]                ; 005b7edd
    FMUL float ptr [0x005fa1bc]         ; 005b7ee1 | DAT_005fa1bc
    PUSH EAX                            ; 005b7ee7
    LEA EAX,[ESP + 0x1c]                ; 005b7ee8
    PUSH EAX                            ; 005b7eec
    LEA EAX,[ESP + 0x18]                ; 005b7eed
    PUSH EAX                            ; 005b7ef1
    FSTP float ptr [ESP + 0x30]         ; 005b7ef2
    CALL FUN_0045fd80                   ; 005b7ef6
        ;   XREF to: 0045fd80 (UNCONDITIONAL_CALL)  ; undefined FUN_0045fd80()
    FLD float ptr [ESI + 0x8]           ; 005b7efb
    LEA EAX,[ESP + 0x40]                ; 005b7efe
    ADD ESP,0xc                         ; 005b7f02
    FMUL float ptr [0x005fa1bc]         ; 005b7f05 | DAT_005fa1bc
    PUSH EAX                            ; 005b7f0b
    LEA EAX,[ESP + 0x20]                ; 005b7f0c
    PUSH EAX                            ; 005b7f10
    LEA EAX,[ESP + 0x1c]                ; 005b7f11
    PUSH EAX                            ; 005b7f15
    FSTP float ptr [ESP + 0x40]         ; 005b7f16
    CALL FUN_0045fd80                   ; 005b7f1a
        ;   XREF to: 0045fd80 (UNCONDITIONAL_CALL)  ; undefined FUN_0045fd80()
    FLD float ptr [ESI + 0x4]           ; 005b7f1f
    LEA EAX,[ESP + 0x38]                ; 005b7f22
    ADD ESP,0xc                         ; 005b7f26
    FMUL float ptr [0x005fa1bc]         ; 005b7f29 | DAT_005fa1bc
    PUSH EAX                            ; 005b7f2f
    LEA EAX,[ESP + 0x24]                ; 005b7f30
    PUSH EAX                            ; 005b7f34
    LEA EAX,[ESP + 0x30]                ; 005b7f35
    PUSH EAX                            ; 005b7f39
    FSTP float ptr [ESP + 0x38]         ; 005b7f3a
    CALL FUN_0045fd80                   ; 005b7f3e
        ;   XREF to: 0045fd80 (UNCONDITIONAL_CALL)  ; undefined FUN_0045fd80()
    ADD ESP,0xc                         ; 005b7f43
    FLD float ptr [ESP + 0x1c]          ; 005b7f46
    FMUL float ptr [ESP + 0x18]         ; 005b7f4a
    FLD float ptr [ESP + 0x1c]          ; 005b7f4e
    FMUL float ptr [ESP + 0x20]         ; 005b7f52
    FLD float ptr [ESP + 0x18]          ; 005b7f56
    FMUL float ptr [ESP + 0x20]         ; 005b7f5a
    FLD float ptr [ESP + 0x14]          ; 005b7f5e
    FCHS                                ; 005b7f62
    FMUL float ptr [ESP + 0x20]         ; 005b7f64
    FXCH ST2                            ; 005b7f68
    FMUL float ptr [ESP + 0x10]         ; 005b7f6a
    FXCH                                ; 005b7f6e
    FMUL float ptr [ESP + 0x14]         ; 005b7f70
    FXCH ST2                            ; 005b7f74
    FMUL float ptr [ESP + 0x10]         ; 005b7f76
    FXCH ST3                            ; 005b7f7a
    FST float ptr [ESP + 0x30]          ; 005b7f7c
    FMUL float ptr [ESP + 0x20]         ; 005b7f80
    FLD float ptr [ESP + 0x14]          ; 005b7f84
    FMUL float ptr [ESP + 0x18]         ; 005b7f88
    FLD float ptr [ESP + 0x1c]          ; 005b7f8c
    FMUL float ptr [ESP + 0x10]         ; 005b7f90
    FLD float ptr [ESP + 0x14]          ; 005b7f94
    FMUL float ptr [ESP + 0x10]         ; 005b7f98
    FXCH ST2                            ; 005b7f9c
    FMUL float ptr [ESP + 0x28]         ; 005b7f9e
    FXCH ST2                            ; 005b7fa2
    FMUL float ptr [ESP + 0x28]         ; 005b7fa4
    FXCH ST2                            ; 005b7fa8
    FADDP ST4,ST0                       ; 005b7faa
    FLD float ptr [ESP + 0x30]          ; 005b7fac
    FMUL float ptr [ESP + 0x28]         ; 005b7fb0
    FXCH                                ; 005b7fb4
    FMUL float ptr [ESP + 0x28]         ; 005b7fb6
    MOV EDI,EBX                         ; 005b7fba
    FXCH                                ; 005b7fbc
    FADDP ST6,ST0                       ; 005b7fbe
    MOV ESI,ESP                         ; 005b7fc0
    FXCH ST5                            ; 005b7fc2
    FSTP float ptr [ESP + 0x8]          ; 005b7fc4
    FXCH ST4                            ; 005b7fc8
    FSUBP ST3,ST0                       ; 005b7fca
    FXCH                                ; 005b7fcc
    FSTP float ptr [ESP + 0x4]          ; 005b7fce
    FADDP ST2,ST0                       ; 005b7fd2
    FSTP float ptr [ESP + 0xc]          ; 005b7fd4
    FSTP float ptr [ESP]                ; 005b7fd8
    MOVSD ES:EDI,ESI                    ; 005b7fdb
    MOVSD ES:EDI,ESI                    ; 005b7fdc
    MOVSD ES:EDI,ESI                    ; 005b7fdd
    MOVSD ES:EDI,ESI                    ; 005b7fde
    MOV EAX,EBX                         ; 005b7fdf
    ADD ESP,0x38                        ; 005b7fe1
    POP EDI                             ; 005b7fe4
    POP EBX                             ; 005b7fe5
    RET                                 ; 005b7fe6

