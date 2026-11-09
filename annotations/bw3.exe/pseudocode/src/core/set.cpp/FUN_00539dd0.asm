; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_set_cpp_FUN_00539dd0(int param_1,float *param_2)
;
; Local Variables:
; undefined        Stack[-0x50]:1  local_50
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined        Stack[-0x38]:1  local_38
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_sound.cpp_FUN_0055f020 at 0055f142
;
; Called Functions:
;   core_dirmat.cpp_FUN_0045b870
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00539dd0
        ;   Label: core_set.cpp_FUN_00539dd0
    PUSH ESI                            ; 00539dd1
    PUSH EDI                            ; 00539dd2
    PUSH EBP                            ; 00539dd3
    MOV EBP,ESP                         ; 00539dd4
    SUB ESP,0x3c                        ; 00539dd6
    AND ESP,0xfffffff8                  ; 00539dd9
    MOV EBX,dword ptr [EBP + 0x14]      ; 00539ddc
    XOR EDX,EDX                         ; 00539ddf
    MOV ECX,dword ptr [EBX + 0x15aed4]  ; 00539de1
    MOV dword ptr [ESP + 0x34],EDX      ; 00539de7
    TEST ECX,ECX                        ; 00539deb
    JLE 0x00539eab                      ; 00539ded
        ;   XREF to: 00539eab (CONDITIONAL_JUMP)  ; LAB_00539eab
    ADD EBX,0x15aed8                    ; 00539df3
    MOV dword ptr [ESP + 0x38],EBX      ; 00539df9
    MOV EBX,dword ptr [EBP + 0x14]      ; 00539dfd
    ADD EBX,0x15aef0                    ; 00539e00
    MOV dword ptr [ESP + 0x30],EBX      ; 00539e06
    IMUL EBX,dword ptr [ESP + 0x34],0x44 ; 00539e0a
        ;   Label: LAB_00539e0a
    MOV ESI,dword ptr [EBP + 0x18]      ; 00539e0f
    MOV EDX,dword ptr [ESP + 0x38]      ; 00539e12
    LEA EDI,[ESP + 0x18]                ; 00539e16
    FLD float ptr [ESI + 0x4]           ; 00539e1a
    FLD float ptr [ESI + 0x8]           ; 00539e1d
    ADD EBX,EDX                         ; 00539e20
    FLD float ptr [ESI]                 ; 00539e22
    LEA ESI,[ESP + 0xc]                 ; 00539e24
    FSUB float ptr [EBX]                ; 00539e28
    FXCH ST2                            ; 00539e2a
    FSUB float ptr [EBX + 0x4]          ; 00539e2c
    FXCH                                ; 00539e2f
    FSUB float ptr [EBX + 0x8]          ; 00539e31
    FXCH ST2                            ; 00539e34
    FSTP float ptr [ESP + 0xc]          ; 00539e36
    FSTP float ptr [ESP + 0x10]         ; 00539e3a
    FSTP float ptr [ESP + 0x14]         ; 00539e3e
    MOVSD ES:EDI,ESI                    ; 00539e42
    MOVSD ES:EDI,ESI                    ; 00539e43
    MOVSD ES:EDI,ESI                    ; 00539e44
    LEA ESI,[ESP + 0x18]                ; 00539e45
    PUSH ESI                            ; 00539e49
    MOV ECX,dword ptr [ESP + 0x34]      ; 00539e4a
    PUSH ECX                            ; 00539e4e
    LEA ESI,[ESP + 0x8]                 ; 00539e4f
    LEA EDI,[ESP + 0x2c]                ; 00539e53
    CALL core_dirmat.cpp_FUN_0045b870   ; 00539e57
        ;   XREF to: 0045b870 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b870()
    LEA ESI,[ESP + 0x8]                 ; 00539e5c
    ADD ESP,0x8                         ; 00539e60
    MOVSD ES:EDI,ESI                    ; 00539e63
    MOVSD ES:EDI,ESI                    ; 00539e64
    MOVSD ES:EDI,ESI                    ; 00539e65
    FLD float ptr [EBX + 0xc]           ; 00539e66
    FLD float ptr [ESP + 0x24]          ; 00539e69
    FABS                                ; 00539e6d
    FCOMPP                              ; 00539e6f
    FNSTSW AX                           ; 00539e71
    SAHF                                ; 00539e73
    JA 0x00539e86                       ; 00539e74
        ;   XREF to: 00539e86 (CONDITIONAL_JUMP)  ; LAB_00539e86
    FLD float ptr [ESP + 0x28]          ; 00539e76
    FABS                                ; 00539e7a
    FLD float ptr [EBX + 0x10]          ; 00539e7c
    FCOMPP                              ; 00539e7f
    FNSTSW AX                           ; 00539e81
    SAHF                                ; 00539e83
    JNC 0x00539ebd                      ; 00539e84
        ;   XREF to: 00539ebd (CONDITIONAL_JUMP)  ; LAB_00539ebd
    MOV EBX,dword ptr [ESP + 0x30]      ; 00539e86
        ;   Label: LAB_00539e86
    MOV ESI,dword ptr [ESP + 0x34]      ; 00539e8a
    ADD EBX,0x44                        ; 00539e8e
    INC ESI                             ; 00539e91
    MOV dword ptr [ESP + 0x30],EBX      ; 00539e92
    MOV dword ptr [ESP + 0x34],ESI      ; 00539e96
    MOV EBX,ESI                         ; 00539e9a
    MOV ESI,dword ptr [EBP + 0x14]      ; 00539e9c
    CMP EBX,dword ptr [ESI + 0x15aed4]  ; 00539e9f
    JL 0x00539e0a                       ; 00539ea5
        ;   XREF to: 00539e0a (CONDITIONAL_JUMP)  ; LAB_00539e0a
    MOV ESI,dword ptr [EBP + 0x14]      ; 00539eab
        ;   Label: LAB_00539eab
    MOV ESI,dword ptr [ESI + 0x15aed0]  ; 00539eae
    MOV EAX,ESI                         ; 00539eb4
    MOV ESP,EBP                         ; 00539eb6
    POP EBP                             ; 00539eb8
    POP EDI                             ; 00539eb9
    POP ESI                             ; 00539eba
    POP EBX                             ; 00539ebb
    RET                                 ; 00539ebc
    FLD float ptr [ESP + 0x2c]          ; 00539ebd
        ;   Label: LAB_00539ebd
    FABS                                ; 00539ec1
    FLD float ptr [EBX + 0x14]          ; 00539ec3
    FCOMPP                              ; 00539ec6
    FNSTSW AX                           ; 00539ec8
    SAHF                                ; 00539eca
    JC 0x00539e86                       ; 00539ecb
        ;   XREF to: 00539e86 (CONDITIONAL_JUMP)  ; LAB_00539e86
    MOV ESI,dword ptr [EBX + 0x40]      ; 00539ecd
    MOV EAX,ESI                         ; 00539ed0
    MOV ESP,EBP                         ; 00539ed2
    POP EBP                             ; 00539ed4
    POP EDI                             ; 00539ed5
    POP ESI                             ; 00539ed6
    POP EBX                             ; 00539ed7
    RET                                 ; 00539ed8

