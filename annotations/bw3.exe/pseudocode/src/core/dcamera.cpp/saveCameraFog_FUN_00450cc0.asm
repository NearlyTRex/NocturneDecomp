; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_saveCameraFog_FUN_00450cc0(SFog *fog,_FILE *file_handle)
;
; Parameters:
; SFog *           Stack[0x4]:4   fog
; _FILE *          Stack[0x8]:4   file_handle
;
; Called Functions:
;   crt_unknown.c_FUN_005a3140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00450cc0
        ;   Label: core_dcamera.cpp_saveCameraFog_FUN_00450cc0
    PUSH ESI                            ; 00450cc1
    PUSH EDI                            ; 00450cc2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00450cc3
    MOV ESI,dword ptr [ESP + 0x14]      ; 00450cc7
    PUSH 0x5ba0ad                       ; 00450ccb
    PUSH ESI                            ; 00450cd0
    CALL crt_unknown.c_FUN_005a3140     ; 00450cd1
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 00450cd6
    MOV EDX,dword ptr [EBX + 0x8]       ; 00450cd9
    PUSH EDX                            ; 00450cdc
    MOV ECX,dword ptr [EBX + 0x4]       ; 00450cdd
    PUSH ECX                            ; 00450ce0
    MOV EDI,dword ptr [EBX]             ; 00450ce1
    PUSH EDI                            ; 00450ce3
    PUSH 0x5ba0bd                       ; 00450ce4
    PUSH ESI                            ; 00450ce9
    CALL crt_unknown.c_FUN_005a3140     ; 00450cea
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x14                        ; 00450cef
    PUSH 0x5ba0c7                       ; 00450cf2
    PUSH ESI                            ; 00450cf7
    CALL crt_unknown.c_FUN_005a3140     ; 00450cf8
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 00450cfd
    SUB ESP,0x8                         ; 00450d00
    FLD float ptr [EBX + 0x14]          ; 00450d03
    FSTP double ptr [ESP]               ; 00450d06
    SUB ESP,0x8                         ; 00450d09
    FLD float ptr [EBX + 0x10]          ; 00450d0c
    FSTP double ptr [ESP]               ; 00450d0f
    SUB ESP,0x8                         ; 00450d12
    FLD float ptr [EBX + 0xc]           ; 00450d15
    FSTP double ptr [ESP]               ; 00450d18
    PUSH 0x5ba0cf                       ; 00450d1b
    PUSH ESI                            ; 00450d20
    CALL crt_unknown.c_FUN_005a3140     ; 00450d21
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x20                        ; 00450d26
    SUB ESP,0x8                         ; 00450d29
    FLD float ptr [EBX + 0x1c]          ; 00450d2c
    FSTP double ptr [ESP]               ; 00450d2f
    SUB ESP,0x8                         ; 00450d32
    FLD float ptr [EBX + 0x18]          ; 00450d35
    FSTP double ptr [ESP]               ; 00450d38
    PUSH 0x5ba0d9                       ; 00450d3b
    PUSH ESI                            ; 00450d40
    CALL crt_unknown.c_FUN_005a3140     ; 00450d41
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x18                        ; 00450d46
    SUB ESP,0x8                         ; 00450d49
    FLD float ptr [EBX + 0x20]          ; 00450d4c
    FSTP double ptr [ESP]               ; 00450d4f
    PUSH 0x5ba0e0                       ; 00450d52
    PUSH ESI                            ; 00450d57
    CALL crt_unknown.c_FUN_005a3140     ; 00450d58
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x10                        ; 00450d5d
    POP EDI                             ; 00450d60
    POP ESI                             ; 00450d61
    POP EBX                             ; 00450d62
    RET                                 ; 00450d63

