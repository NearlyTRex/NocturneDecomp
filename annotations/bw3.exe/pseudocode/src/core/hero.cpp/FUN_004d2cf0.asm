; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool core_hero_cpp_FUN_004d2cf0(int param_1)
;
; Local Variables:
; undefined        Stack[-0xa4]:1  local_a4
; undefined        Stack[-0x8c]:1  local_8c
;
; XREF[2]:
;   core_game.cpp_FUN_004c07b0 at 004c479f
;   core_hero.cpp_FUN_004d4900 at 004d497c
;
; Referenced Globals:
;   undefined4 DAT_005c4d01
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 g_CDemonSetInstance.field1364324_0x14d164
;   undefined4 g_CDemonSetInstance.field1364328_0x14d168
;
; Called Functions:
;   core_actor.cpp_FUN_00408b80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d2cf0
        ;   Label: core_hero.cpp_FUN_004d2cf0
    PUSH ESI                            ; 004d2cf1
    PUSH EDI                            ; 004d2cf2
    PUSH EBP                            ; 004d2cf3
    MOV EBP,ESP                         ; 004d2cf4
    SUB ESP,0x94                        ; 004d2cf6
    AND ESP,0xfffffff8                  ; 004d2cfc
    MOV EBX,dword ptr [EBP + 0x14]      ; 004d2cff
    PUSH EBX                            ; 004d2d02
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d2d03
    LEA ESI,[ESP + 0x20]                ; 004d2d09
    LEA EDI,[ESP + 0x8]                 ; 004d2d0d
    CALL dword ptr [EAX + 0x1c]         ; 004d2d11
    MOV ECX,0x6                         ; 004d2d14
    LEA ESI,[ESP + 0x20]                ; 004d2d19
    ADD ESP,0x4                         ; 004d2d1d
    MOVSD.REP ES:EDI,ESI                ; 004d2d20
    LEA EAX,[ESP + 0x4]                 ; 004d2d22
    FLD float ptr [ESP + 0x4]           ; 004d2d26
    FLD float ptr [ESP + 0x8]           ; 004d2d2a
    FLD float ptr [ESP + 0xc]           ; 004d2d2e
    LEA EDI,[ESP + 0x40]                ; 004d2d32
    LEA ESI,[ESP + 0x58]                ; 004d2d36
    FXCH ST2                            ; 004d2d3a
    FADD float ptr [EAX + 0xc]          ; 004d2d3c
    FXCH                                ; 004d2d3f
    FADD float ptr [EAX + 0x10]         ; 004d2d41
    FXCH ST2                            ; 004d2d44
    FADD float ptr [EAX + 0x14]         ; 004d2d46
    FXCH                                ; 004d2d49
    FSTP float ptr [ESP + 0x58]         ; 004d2d4b
    FXCH                                ; 004d2d4f
    FSTP float ptr [ESP + 0x5c]         ; 004d2d51
    FSTP float ptr [ESP + 0x60]         ; 004d2d55
    MOVSD ES:EDI,ESI                    ; 004d2d59
    MOVSD ES:EDI,ESI                    ; 004d2d5a
    MOVSD ES:EDI,ESI                    ; 004d2d5b
    FLD float ptr [0x005c4d01]          ; 004d2d5c | DAT_005c4d01
    FLD float ptr [ESP + 0x40]          ; 004d2d62
    FMUL ST1                            ; 004d2d66
    FLD float ptr [ESP + 0x44]          ; 004d2d68
    FMUL ST2                            ; 004d2d6c
    FLD float ptr [ESP + 0x48]          ; 004d2d6e
    FMULP ST3                           ; 004d2d72
    LEA EDI,[ESP + 0x34]                ; 004d2d74
    LEA ESI,[ESP + 0x4c]                ; 004d2d78
    FXCH                                ; 004d2d7c
    FSTP float ptr [ESP + 0x4c]         ; 004d2d7e
    FSTP float ptr [ESP + 0x50]         ; 004d2d82
    FSTP float ptr [ESP + 0x54]         ; 004d2d86
    MOVSD ES:EDI,ESI                    ; 004d2d8a
    MOVSD ES:EDI,ESI                    ; 004d2d8b
    MOVSD ES:EDI,ESI                    ; 004d2d8c
    MOV EAX,dword ptr [ESP + 0x38]      ; 004d2d8d
    XOR EDX,EDX                         ; 004d2d91
    MOV dword ptr [ESP + 0x68],EAX      ; 004d2d93
    LEA EAX,[ESP + 0x64]                ; 004d2d97
    MOV ECX,0x3fc00000                  ; 004d2d9b
    PUSH EAX                            ; 004d2da0
    MOV dword ptr [ESP + 0x68],EDX      ; 004d2da1
    MOV dword ptr [ESP + 0x70],ECX      ; 004d2da5
    PUSH EBX                            ; 004d2da9
    LEA ESI,[ESP + 0x78]                ; 004d2daa
    LEA EDI,[ESP + 0x84]                ; 004d2dae
    CALL core_actor.cpp_FUN_00408b80    ; 004d2db5
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x78]                ; 004d2dba
    ADD ESP,0x8                         ; 004d2dbe
    MOVSD ES:EDI,ESI                    ; 004d2dc1
    MOVSD ES:EDI,ESI                    ; 004d2dc2
    MOVSD ES:EDI,ESI                    ; 004d2dc3
    MOV ESI,0x7149f2ca                  ; 004d2dc4
    XOR EDI,EDI                         ; 004d2dc9
    MOV dword ptr [ESP + 0x90],ESI      ; 004d2dcb
    XOR ESI,ESI                         ; 004d2dd2
    MOV EAX,[0x00603b28]                ; 004d2dd4 | g_CDemonSetPtr
        ;   Label: LAB_004d2dd4
    CMP EDI,dword ptr [EAX + 0x14d164]  ; 004d2dd9 | g_CDemonSetInstance.field1364324_0x14d164
    JL 0x004d2df7                       ; 004d2ddf
        ;   XREF to: 004d2df7 (CONDITIONAL_JUMP)  ; LAB_004d2df7
    CMP dword ptr [EBX + 0x20b68],0x1   ; 004d2de1
    SETZ AL                             ; 004d2de8
    AND EAX,0xff                        ; 004d2deb
    MOV ESP,EBP                         ; 004d2df0
    POP EBP                             ; 004d2df2
    POP EDI                             ; 004d2df3
    POP ESI                             ; 004d2df4
    POP EBX                             ; 004d2df5
    RET                                 ; 004d2df6
    LEA ECX,[ESP + 0x88]                ; 004d2df7
        ;   Label: LAB_004d2df7
    LEA EDX,[EAX + ESI*0x1]             ; 004d2dfe
    PUSH ECX                            ; 004d2e01
    LEA ECX,[ESP + 0x80]                ; 004d2e02
    MOV EAX,dword ptr [EDX + 0x14d168]  ; 004d2e09 | g_CDemonSetInstance.field1364328_0x14d168
    PUSH ECX                            ; 004d2e0f
    MOV dword ptr [ESP + 0x90],EAX      ; 004d2e10
    PUSH EBX                            ; 004d2e17
    MOV EDX,dword ptr [EAX + 0x154]     ; 004d2e18
    PUSH EAX                            ; 004d2e1e
    CALL dword ptr [EDX + 0x60]         ; 004d2e1f
    MOV dword ptr [ESP + 0x9c],EAX      ; 004d2e22
    FLD float ptr [ESP + 0x9c]          ; 004d2e29
    ADD ESP,0x10                        ; 004d2e30
    FST float ptr [ESP]                 ; 004d2e33
    FLDZ                                ; 004d2e36
    FCOMPP                              ; 004d2e38
    FNSTSW AX                           ; 004d2e3a
    SAHF                                ; 004d2e3c
    JA 0x004d2e8b                       ; 004d2e3d
        ;   XREF to: 004d2e8b (CONDITIONAL_JUMP)  ; LAB_004d2e8b
    FLD float ptr [ESP]                 ; 004d2e3f
    FCOMP float ptr [ESP + 0x90]        ; 004d2e42
    FNSTSW AX                           ; 004d2e49
    SAHF                                ; 004d2e4b
    JNC 0x004d2e8b                      ; 004d2e4c
        ;   XREF to: 004d2e8b (CONDITIONAL_JUMP)  ; LAB_004d2e8b
    MOV EAX,dword ptr [ESP]             ; 004d2e4e
    MOV dword ptr [ESP + 0x90],EAX      ; 004d2e51
    MOV EAX,[0x00603b28]                ; 004d2e58 | g_CDemonSetPtr
    MOV dword ptr [EBX + 0x20b68],0x1   ; 004d2e5d
    MOV EAX,dword ptr [ESI + EAX*0x1 + 0x14d168] ; 004d2e67 | g_CDemonSetInstance.field1364328_0x14d168
    MOV dword ptr [EBX + 0x20b6c],EAX   ; 004d2e6e
    MOV EAX,dword ptr [ESP + 0x88]      ; 004d2e74
    MOV dword ptr [EBX + 0x20b7c],0x0   ; 004d2e7b
    MOV dword ptr [EBX + 0x20b70],EAX   ; 004d2e85
    INC EDI                             ; 004d2e8b
        ;   Label: LAB_004d2e8b
    ADD ESI,0x4                         ; 004d2e8c
    JMP 0x004d2dd4                      ; 004d2e8f
        ;   XREF to: 004d2dd4 (UNCONDITIONAL_JUMP)  ; LAB_004d2dd4

