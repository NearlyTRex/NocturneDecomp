; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bride_cpp_FUN_00424e20(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_007c5388
;
; Called Functions:
;   core_skeleton.cpp_FUN_00568e30
;   core_xform.cpp_FUN_005b5080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00424e20
        ;   Label: core_bride.cpp_FUN_00424e20
    PUSH EDI                            ; 00424e21
    PUSH EBP                            ; 00424e22
    MOV EBP,ESP                         ; 00424e23
    SUB ESP,0x78                        ; 00424e25
    MOV EBX,ESI                         ; 00424e28
    MOV EDX,dword ptr [0x007c5388]      ; 00424e2a | DAT_007c5388
    MOV ESI,dword ptr [EBP + 0x10]      ; 00424e30
    PUSH EDX                            ; 00424e33
    ADD ESI,0x158                       ; 00424e34
    PUSH ESI                            ; 00424e3a
    LEA ESI,[EBP + -0x48]               ; 00424e3b
    LEA EDI,[EBP + -0x78]               ; 00424e3e
    CALL core_skeleton.cpp_FUN_00568e30 ; 00424e41
        ;   XREF to: 00568e30 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00568e30()
    MOV ECX,0xc                         ; 00424e46
    LEA ESI,[EBP + -0x48]               ; 00424e4b
    MOVSD.REP ES:EDI,ESI                ; 00424e4e
    ADD ESP,0x8                         ; 00424e50
    LEA ESI,[EBP + -0x78]               ; 00424e53
    MOV EDI,0x3e99999a                  ; 00424e56
    XOR ECX,ECX                         ; 00424e5b
    PUSH ESI                            ; 00424e5d
    MOV ESI,0x3f333333                  ; 00424e5e
    MOV dword ptr [EBP + -0x18],ECX     ; 00424e63
    MOV dword ptr [EBP + -0x14],ESI     ; 00424e66
    LEA ESI,[EBP + -0x18]               ; 00424e69
    MOV dword ptr [EBP + -0x10],EDI     ; 00424e6c
    PUSH ESI                            ; 00424e6f
    LEA ESI,[EBP + -0xc]                ; 00424e70
    MOV EDI,EBX                         ; 00424e73
    CALL core_xform.cpp_FUN_005b5080    ; 00424e75
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    LEA ESI,[EBP + -0xc]                ; 00424e7a
    ADD ESP,0x8                         ; 00424e7d
    MOVSD ES:EDI,ESI                    ; 00424e80
    MOVSD ES:EDI,ESI                    ; 00424e81
    MOVSD ES:EDI,ESI                    ; 00424e82
    MOV EAX,EBX                         ; 00424e83
    MOV ESP,EBP                         ; 00424e85
    POP EBP                             ; 00424e87
    POP EDI                             ; 00424e88
    POP EBX                             ; 00424e89
    RET                                 ; 00424e8a

