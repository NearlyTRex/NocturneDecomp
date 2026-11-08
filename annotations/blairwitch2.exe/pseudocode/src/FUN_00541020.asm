; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_00541020(int param_1)
;
;
; Called Functions:
;   FUN_005b77c0
;   FUN_005b7f5f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00541020
        ;   Label: FUN_00541020
    MOV EBX,dword ptr [ESP + 0x8]       ; 00541021
    PUSH 0x5f22b0                       ; 00541025
    PUSH 0x64                           ; 0054102a
    ADD EBX,0x1750                      ; 0054102c
    PUSH EBX                            ; 00541032
    CALL FUN_005b7f5f                   ; 00541033
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005b7f5f()
    ADD ESP,0xc                         ; 00541038
    PUSH 0x5fb390                       ; 0054103b
    PUSH 0x64                           ; 00541040
    ADD EAX,0x4bc                       ; 00541042
    PUSH EAX                            ; 00541047
    CALL FUN_005b7f5f                   ; 00541048
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005b7f5f()
    LEA EBX,[EAX + 0xffffe3f4]          ; 0054104d
    ADD ESP,0xc                         ; 00541053
    MOV EAX,EBX                         ; 00541056
    LEA EDX,[EBX + 0x14]                ; 00541058
    XOR ECX,ECX                         ; 0054105b
    ADD EAX,0x4                         ; 0054105d
        ;   Label: LAB_0054105d
    MOV dword ptr [EAX + 0x3c],ECX      ; 00541060
    MOV dword ptr [EAX + 0x50],ECX      ; 00541063
    MOV dword ptr [EAX + 0x64],ECX      ; 00541066
    MOV dword ptr [EAX + 0x78],ECX      ; 00541069
    MOV dword ptr [EAX + 0x8c],ECX      ; 0054106c
    MOV dword ptr [EAX + 0xa0],ECX      ; 00541072
    MOV dword ptr [EAX + 0x28],ECX      ; 00541078
    CMP EAX,EDX                         ; 0054107b
    JNZ 0x0054105d                      ; 0054107d
        ;   XREF to: 0054105d (CONDITIONAL_JUMP)  ; LAB_0054105d
    PUSH 0xb40                          ; 0054107f
    PUSH 0x0                            ; 00541084
    LEA EAX,[EBX + 0xc0]                ; 00541086
    MOV dword ptr [EBX + 0xb8],0x0      ; 0054108c
    PUSH EAX                            ; 00541096
    MOV dword ptr [EBX + 0xbc],0x0      ; 00541097
    CALL FUN_005b77c0                   ; 005410a1
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77c0()
    ADD ESP,0xc                         ; 005410a6
    PUSH 0xb40                          ; 005410a9
    PUSH 0x0                            ; 005410ae
    LEA EAX,[EBX + 0xc04]               ; 005410b0
    PUSH EAX                            ; 005410b6
    MOV dword ptr [EBX + 0xc00],0x0     ; 005410b7
    CALL FUN_005b77c0                   ; 005410c1
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77c0()
    MOV byte ptr [EBX + 0x2a1c],0x0     ; 005410c6
    MOV dword ptr [EBX + 0x2a6c],0x0    ; 005410cd
    MOV dword ptr [EBX + 0x174c],0x3f800000 ; 005410d7
    ADD ESP,0xc                         ; 005410e1
    MOV dword ptr [EBX],0x0             ; 005410e4
    LEA EAX,[EBX + 0x4]                 ; 005410ea
    FLD float ptr [EBX + 0x174c]        ; 005410ed
    PUSH 0x28                           ; 005410f3
    FSTP float ptr [EBX + 0x1748]       ; 005410f5
    PUSH 0x0                            ; 005410fb
    FLD float ptr [EBX + 0x1748]        ; 005410fd
    PUSH EAX                            ; 00541103
    FSTP float ptr [EBX + 0x1744]       ; 00541104
    CALL FUN_005b77c0                   ; 0054110a
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77c0()
    LEA EAX,[EBX + 0x1c00]              ; 0054110f
    MOV dword ptr [EAX + 0x8],0x0       ; 00541115
    ADD ESP,0xc                         ; 0054111c
    MOV EDX,dword ptr [EAX + 0x8]       ; 0054111f
    MOV dword ptr [EAX + 0x4],EDX       ; 00541122
    MOV EDX,dword ptr [EAX + 0x4]       ; 00541125
    MOV dword ptr [EAX],EDX             ; 00541128
    MOV EAX,EBX                         ; 0054112a
    MOV byte ptr [EBX + 0x2a70],0x0     ; 0054112c
    POP EBX                             ; 00541133
    RET                                 ; 00541134

