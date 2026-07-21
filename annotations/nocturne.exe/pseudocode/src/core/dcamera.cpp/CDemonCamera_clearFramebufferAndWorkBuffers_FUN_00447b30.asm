; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_00447b30(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   core_game.cpp_CGame_processCheatCodes_FUN_004a0550 at 004a2782
;
; Referenced Globals:
;   undefined4 DAT_012cecb8
;   undefined4 DAT_012e18b8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00447b30
        ;   Label: core_dcamera.cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_00447b30
    PUSH ESI                            ; 00447b31
    PUSH EDI                            ; 00447b32
    PUSH EBP                            ; 00447b33
    MOV EDX,dword ptr [ESP + 0x14]      ; 00447b34
    MOV EDI,dword ptr [ESP + 0x18]      ; 00447b38
    MOV ECX,dword ptr [EDX + 0x140]     ; 00447b3c
    XOR ESI,ESI                         ; 00447b42
    TEST ECX,ECX                        ; 00447b44
    JLE 0x00447b7a                      ; 00447b46
        ;   XREF to: 00447b7a (CONDITIONAL_JUMP)  ; LAB_00447b7a
    MOV EBP,dword ptr [EDX + 0x13c]     ; 00447b48
        ;   Label: LAB_00447b48
    XOR EAX,EAX                         ; 00447b4e
    TEST EBP,EBP                        ; 00447b50
    JLE 0x00447b71                      ; 00447b52
        ;   XREF to: 00447b71 (CONDITIONAL_JUMP)  ; LAB_00447b71
    MOV ECX,dword ptr [EDX + 0x13c]     ; 00447b54
        ;   Label: LAB_00447b54
    IMUL ECX,ESI                        ; 00447b5a
    MOV EBX,dword ptr [EDX + 0x158]     ; 00447b5d
    ADD ECX,EAX                         ; 00447b63
    MOV dword ptr [EBX + ECX*0x4],EDI   ; 00447b65
    INC EAX                             ; 00447b68
    CMP EAX,dword ptr [EDX + 0x13c]     ; 00447b69
    JL 0x00447b54                       ; 00447b6f
        ;   XREF to: 00447b54 (CONDITIONAL_JUMP)  ; LAB_00447b54
    INC ESI                             ; 00447b71
        ;   Label: LAB_00447b71
    CMP ESI,dword ptr [EDX + 0x140]     ; 00447b72
    JL 0x00447b48                       ; 00447b78
        ;   XREF to: 00447b48 (CONDITIONAL_JUMP)  ; LAB_00447b48
    MOV ESI,0x140                       ; 00447b7a
        ;   Label: LAB_00447b7a
    XOR ECX,ECX                         ; 00447b7f
    MOV EDX,ESI                         ; 00447b81
        ;   Label: LAB_00447b81
    XOR BL,BL                           ; 00447b83
    IMUL EAX,ECX,0x140                  ; 00447b85
    INC EAX                             ; 00447b8b
        ;   Label: LAB_00447b8b
    MOV byte ptr [EAX + 0x12e1777],BL   ; 00447b8c | DAT_012e18b8
    MOV byte ptr [EAX + 0x12ceb77],BL   ; 00447b92 | DAT_012cecb8
    CMP EAX,EDX                         ; 00447b98
    JNZ 0x00447b8b                      ; 00447b9a
        ;   XREF to: 00447b8b (CONDITIONAL_JUMP)  ; LAB_00447b8b
    INC ECX                             ; 00447b9c
    ADD ESI,0x140                       ; 00447b9d
    CMP ECX,0xf0                        ; 00447ba3
    JL 0x00447b81                       ; 00447ba9
        ;   XREF to: 00447b81 (CONDITIONAL_JUMP)  ; LAB_00447b81
    POP EBP                             ; 00447bab
    POP EDI                             ; 00447bac
    POP ESI                             ; 00447bad
    POP EBX                             ; 00447bae
    RET                                 ; 00447baf

