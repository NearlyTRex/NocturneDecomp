; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00557cc0(int param_1)
;
; Local Variables:
; undefined8       Stack[-0x7c]:8  local_7c
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
; undefined8       Stack[-0x2c]:8  local_2c
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00555c60 at 00556068
;
; Referenced Globals:
;   string s_Chain_stretched_to_%f_00597ef1
;   undefined4 DAT_00597f09
;   void* PTR_DAT_005ad350 = 0077ad0c
;   undefined4 DAT_0077ad0c
;
; Called Functions:
;   FUN_0040a290
;   FUN_00425050
;   FUN_0043ac60
;   FUN_0055a8b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00557cc0
        ;   Label: FUN_00557cc0
    PUSH ESI                            ; 00557cc1
    PUSH EDI                            ; 00557cc2
    PUSH EBP                            ; 00557cc3
    MOV EBP,ESP                         ; 00557cc4
    SUB ESP,0x64                        ; 00557cc6
    MOV EBX,dword ptr [EBP + 0x14]      ; 00557cc9
    CMP dword ptr [EBX + 0xbd50],0x0    ; 00557ccc
    JZ 0x00557cde                       ; 00557cd3
        ;   XREF to: 00557cde (CONDITIONAL_JUMP)  ; LAB_00557cde
    CMP dword ptr [EBX + 0xbca4],0x0    ; 00557cd5
    JNZ 0x00557ce5                      ; 00557cdc
        ;   XREF to: 00557ce5 (CONDITIONAL_JUMP)  ; LAB_00557ce5
    MOV ESP,EBP                         ; 00557cde
        ;   Label: LAB_00557cde
    POP EBP                             ; 00557ce0
    POP EDI                             ; 00557ce1
    POP ESI                             ; 00557ce2
    POP EBX                             ; 00557ce3
    RET                                 ; 00557ce4
    MOV EDX,dword ptr [EBX + 0xbd38]    ; 00557ce5
        ;   Label: LAB_00557ce5
    LEA EAX,[EDX*0x4 + 0x0]             ; 00557ceb
    SUB EAX,EDX                         ; 00557cf2
    SHL EAX,0x4                         ; 00557cf4
    LEA EDX,[EBX + 0xfd0]               ; 00557cf7
    ADD EAX,EDX                         ; 00557cfd
    MOV EDI,0xbe99999a                  ; 00557cff
    PUSH EAX                            ; 00557d04
    LEA EAX,[EBP + -0x40]               ; 00557d05
    XOR ESI,ESI                         ; 00557d08
    PUSH EAX                            ; 00557d0a
    LEA EAX,[EBP + -0x4c]               ; 00557d0b
    MOV dword ptr [EBP + -0x40],ESI     ; 00557d0e
    PUSH EAX                            ; 00557d11
    MOV dword ptr [EBP + -0x3c],EDI     ; 00557d12
    MOV dword ptr [EBP + -0x38],ESI     ; 00557d15
    CALL FUN_0055a8b0                   ; 00557d18
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055a8b0()
    MOV EAX,dword ptr [EBX + 0xbd50]    ; 00557d1d
    ADD ESP,0xc                         ; 00557d23
    ADD EAX,0x20                        ; 00557d26
    PUSH EAX                            ; 00557d29
    LEA EAX,[EBP + -0x58]               ; 00557d2a
    PUSH EAX                            ; 00557d2d
    PUSH EBX                            ; 00557d2e
    CALL FUN_0040a290                   ; 00557d2f
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a290()
    FLD float ptr [EBP + -0x54]         ; 00557d34
    ADD ESP,0xc                         ; 00557d37
    FCOMP double ptr [0x00597f09]       ; 00557d3a | DAT_00597f09
    FNSTSW AX                           ; 00557d40
    SAHF                                ; 00557d42
    JC 0x00557e5b                       ; 00557d43
        ;   XREF to: 00557e5b (CONDITIONAL_JUMP)  ; LAB_00557e5b
    FLD float ptr [EBP + -0x58]         ; 00557d49
    FLD float ptr [EBP + -0x54]         ; 00557d4c
    FSUB float ptr [EBP + -0x48]        ; 00557d4f
    FXCH                                ; 00557d52
    FSUB float ptr [EBP + -0x4c]        ; 00557d54
    FXCH                                ; 00557d57
    FST float ptr [EBP + -0x60]         ; 00557d59
    FMUL float ptr [EBP + -0x60]        ; 00557d5c
    FXCH                                ; 00557d5f
    FST float ptr [EBP + -0x64]         ; 00557d61
    FMUL float ptr [EBP + -0x64]        ; 00557d64
    FLD float ptr [EBP + -0x50]         ; 00557d67
    FSUB float ptr [EBP + -0x44]        ; 00557d6a
    FXCH                                ; 00557d6d
    FADDP ST2,ST0                       ; 00557d6f
    FST float ptr [EBP + -0x5c]         ; 00557d71
    FMUL float ptr [EBP + -0x5c]        ; 00557d74
    FADDP                               ; 00557d77
    FSQRT                               ; 00557d79
    SUB ESP,0x8                         ; 00557d7b
    FST float ptr [EBP + -0xc]          ; 00557d7e
    FSTP double ptr [ESP]               ; 00557d81
    PUSH 0x597ef1                       ; 00557d84 | = "Chain stretched to %f\n"
    MOV EDX,dword ptr [0x005ad350]      ; 00557d89 | PTR_DAT_005ad350
    PUSH EDX                            ; 00557d8f | DAT_0077ad0c
    CALL FUN_0043ac60                   ; 00557d90
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined FUN_0043ac60()
    FLD float ptr [EBP + -0xc]          ; 00557d95
    ADD ESP,0x10                        ; 00557d98
    FCOMP float ptr [EBX + 0xbd54]      ; 00557d9b
    FNSTSW AX                           ; 00557da1
    SAHF                                ; 00557da3
    JBE 0x00557cde                      ; 00557da4
        ;   XREF to: 00557cde (CONDITIONAL_JUMP)  ; LAB_00557cde
    FLD float ptr [EBX + 0xbd54]        ; 00557daa
    FMUL ST0                            ; 00557db0
    FLD float ptr [EBP + -0x60]         ; 00557db2
    FMUL ST0                            ; 00557db5
    FSUBP                               ; 00557db7
    FLDZ                                ; 00557db9
    FXCH                                ; 00557dbb
    FSTP double ptr [EBP + -0x1c]       ; 00557dbd
    FCOMP double ptr [EBP + -0x1c]      ; 00557dc0
    FNSTSW AX                           ; 00557dc3
    SAHF                                ; 00557dc5
    JA 0x00557cde                       ; 00557dc6
        ;   XREF to: 00557cde (CONDITIONAL_JUMP)  ; LAB_00557cde
    FLD double ptr [EBP + -0x1c]        ; 00557dcc
    FSQRT                               ; 00557dcf
    MOV EAX,dword ptr [EBP + -0x64]     ; 00557dd1
    MOV dword ptr [EBP + -0x28],EAX     ; 00557dd4
    FLD float ptr [EBP + -0x28]         ; 00557dd7
    MOV EAX,dword ptr [EBP + -0x60]     ; 00557dda
    FMUL float ptr [EBP + -0x28]        ; 00557ddd
    MOV dword ptr [EBP + -0x24],EAX     ; 00557de0
    MOV EAX,dword ptr [EBP + -0x5c]     ; 00557de3
    MOV dword ptr [EBP + -0x20],EAX     ; 00557de6
    FLD float ptr [EBP + -0x20]         ; 00557de9
    FMUL ST0                            ; 00557dec
    FADDP                               ; 00557dee
    FSQRT                               ; 00557df0
    FXCH                                ; 00557df2
    FSTP float ptr [EBP + -0x10]        ; 00557df4
    MOV dword ptr [EBP + -0x24],ESI     ; 00557df7
    FST float ptr [EBP + -0x4]          ; 00557dfa
    FLDZ                                ; 00557dfd
    FCOMPP                              ; 00557dff
    FNSTSW AX                           ; 00557e01
    SAHF                                ; 00557e03
    JNC 0x00557cde                      ; 00557e04
        ;   XREF to: 00557cde (CONDITIONAL_JUMP)  ; LAB_00557cde
    FLD float ptr [EBP + -0x4]          ; 00557e0a
    FSUB float ptr [EBP + -0x10]        ; 00557e0d
    FST float ptr [EBP + -0x8]          ; 00557e10
    FLDZ                                ; 00557e13
    FCOMPP                              ; 00557e15
    FNSTSW AX                           ; 00557e17
    SAHF                                ; 00557e19
    JNC 0x00557cde                      ; 00557e1a
        ;   XREF to: 00557cde (CONDITIONAL_JUMP)  ; LAB_00557cde
    FLD float ptr [EBP + -0x8]          ; 00557e20
    FDIV float ptr [EBP + -0x4]         ; 00557e23
    FLD float ptr [EBP + -0x28]         ; 00557e26
    FXCH                                ; 00557e29
    FSTP float ptr [EBP + -0x14]        ; 00557e2b
    FMUL float ptr [EBP + -0x14]        ; 00557e2e
    FLDZ                                ; 00557e31
    FMUL float ptr [EBP + -0x14]        ; 00557e33
    LEA EAX,[EBP + -0x28]               ; 00557e36
    FLD float ptr [EBP + -0x20]         ; 00557e39
    PUSH EAX                            ; 00557e3c
    FMUL float ptr [EBP + -0x14]        ; 00557e3d
    PUSH EBX                            ; 00557e40
    FXCH ST2                            ; 00557e41
    FSTP float ptr [EBP + -0x28]        ; 00557e43
    FSTP float ptr [EBP + -0x24]        ; 00557e46
    FSTP float ptr [EBP + -0x20]        ; 00557e49
    CALL FUN_00425050                   ; 00557e4c
        ;   XREF to: 00425050 (UNCONDITIONAL_CALL)  ; undefined FUN_00425050()
    ADD ESP,0x8                         ; 00557e51
    MOV ESP,EBP                         ; 00557e54
    POP EBP                             ; 00557e56
    POP EDI                             ; 00557e57
    POP ESI                             ; 00557e58
    POP EBX                             ; 00557e59
    RET                                 ; 00557e5a
    MOV EAX,dword ptr [EBP + -0x58]     ; 00557e5b
        ;   Label: LAB_00557e5b
    MOV dword ptr [EBP + -0x34],EAX     ; 00557e5e
    MOV EAX,dword ptr [EBP + -0x54]     ; 00557e61
    MOV dword ptr [EBP + -0x30],EAX     ; 00557e64
    MOV EAX,dword ptr [EBP + -0x50]     ; 00557e67
    MOV dword ptr [EBP + -0x2c],EAX     ; 00557e6a
    LEA EAX,[EBP + -0x34]               ; 00557e6d
    PUSH EAX                            ; 00557e70
    PUSH EBX                            ; 00557e71
    MOV dword ptr [EBP + -0x30],ESI     ; 00557e72
    CALL FUN_00425050                   ; 00557e75
        ;   XREF to: 00425050 (UNCONDITIONAL_CALL)  ; undefined FUN_00425050()
    ADD ESP,0x8                         ; 00557e7a
    MOV ESP,EBP                         ; 00557e7d
    POP EBP                             ; 00557e7f
    POP EDI                             ; 00557e80
    POP ESI                             ; 00557e81
    POP EBX                             ; 00557e82
    RET                                 ; 00557e83

