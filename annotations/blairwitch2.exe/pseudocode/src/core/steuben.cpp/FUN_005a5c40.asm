; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_steuben_cpp_FUN_005a5c40(int param_1,float param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_Death_005f0612
;   TerminatedCString s_Animation_005f0618
;   undefined4 DAT_005f0622
;
; Called Functions:
;   core_cloth.cpp_FUN_005b1890
;   unkaddr_0059d350.cpp_FUN_0059daa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a5c40
        ;   Label: core_steuben.cpp_FUN_005a5c40
    PUSH ESI                            ; 005a5c41
    PUSH EDI                            ; 005a5c42
    SUB ESP,0x30                        ; 005a5c43
    MOV EBX,dword ptr [ESP + 0x40]      ; 005a5c46
    PUSH 0x5f0612                       ; 005a5c4a | = "Death"
    LEA ESI,[EBX + 0x10af8]             ; 005a5c4f
    PUSH ESI                            ; 005a5c55
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005a5c56
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a5c5b
    TEST EAX,EAX                        ; 005a5c5e
    JNZ 0x005a5c74                      ; 005a5c60
        ;   XREF to: 005a5c74 (CONDITIONAL_JUMP)  ; LAB_005a5c74
    PUSH 0x5f0618                       ; 005a5c62 | = "Animation"
    PUSH ESI                            ; 005a5c67
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005a5c68
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a5c6d
    TEST EAX,EAX                        ; 005a5c70
    JZ 0x005a5cee                       ; 005a5c72
        ;   XREF to: 005a5cee (CONDITIONAL_JUMP)  ; LAB_005a5cee
    LEA EAX,[EBX + 0x11354]             ; 005a5c74
        ;   Label: LAB_005a5c74
    FLD float ptr [0x005f0622]          ; 005a5c7a | DAT_005f0622
    FLD float ptr [EAX]                 ; 005a5c80
    FMUL ST1                            ; 005a5c82
    FLD float ptr [EAX + 0x4]           ; 005a5c84
    FMUL ST2                            ; 005a5c87
    FLD float ptr [EAX + 0x8]           ; 005a5c89
    FMULP ST3                           ; 005a5c8c
    MOV EDI,ESP                         ; 005a5c8e
    LEA ESI,[ESP + 0xc]                 ; 005a5c90
    FXCH                                ; 005a5c94
    FSTP float ptr [ESP + 0xc]          ; 005a5c96
    FSTP float ptr [ESP + 0x10]         ; 005a5c9a
    FSTP float ptr [ESP + 0x14]         ; 005a5c9e
    MOVSD ES:EDI,ESI                    ; 005a5ca2
    MOVSD ES:EDI,ESI                    ; 005a5ca3
    MOVSD ES:EDI,ESI                    ; 005a5ca4
    FLD float ptr [ESP + 0x44]          ; 005a5ca5
    FLD float ptr [ESP]                 ; 005a5ca9
    FMUL ST1                            ; 005a5cac
    FLD float ptr [ESP + 0x4]           ; 005a5cae
    FMUL ST2                            ; 005a5cb2
    LEA EAX,[ESP + 0x18]                ; 005a5cb4
    ADD EBX,0x2d0c                      ; 005a5cb8
    PUSH EAX                            ; 005a5cbe
    FLD float ptr [ESP + 0xc]           ; 005a5cbf
    FMULP ST3                           ; 005a5cc3
    PUSH EBX                            ; 005a5cc5
    LEA EDI,[ESP + 0x20]                ; 005a5cc6
    LEA ESI,[ESP + 0x2c]                ; 005a5cca
    FXCH                                ; 005a5cce
    FSTP float ptr [ESP + 0x2c]         ; 005a5cd0
    FSTP float ptr [ESP + 0x30]         ; 005a5cd4
    FSTP float ptr [ESP + 0x34]         ; 005a5cd8
    MOVSD ES:EDI,ESI                    ; 005a5cdc
    MOVSD ES:EDI,ESI                    ; 005a5cdd
    MOVSD ES:EDI,ESI                    ; 005a5cde
    CALL core_cloth.cpp_FUN_005b1890    ; 005a5cdf
        ;   XREF to: 005b1890 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_005b1890(CClothList * this_ptr, CVector3f * wind_velocity)
    ADD ESP,0x8                         ; 005a5ce4
    ADD ESP,0x30                        ; 005a5ce7
    POP EDI                             ; 005a5cea
    POP ESI                             ; 005a5ceb
    POP EBX                             ; 005a5cec
    RET                                 ; 005a5ced
    PUSH EBX                            ; 005a5cee
        ;   Label: LAB_005a5cee
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005a5cef
    CALL dword ptr [EAX + 0x17c]        ; 005a5cf5
    ADD ESP,0x4                         ; 005a5cfb
    JMP 0x005a5c74                      ; 005a5cfe
        ;   XREF to: 005a5c74 (UNCONDITIONAL_JUMP)  ; LAB_005a5c74

