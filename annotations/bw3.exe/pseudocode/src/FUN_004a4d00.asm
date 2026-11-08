; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004a4d00(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_wp_nomana_wav_005c0b24+1
;   TerminatedCString s_wp_firestaff_wav_005c0b33
;   undefined4 DAT_005c0b45
;   undefined4 DAT_005fc5a0
;   undefined4 DAT_006045f8
;
; Called Functions:
;   FUN_004a3f70
;   FUN_005609d0
;   FUN_0057b880
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a4d00
        ;   Label: FUN_004a4d00
    PUSH ESI                            ; 004a4d01
    PUSH EDI                            ; 004a4d02
    SUB ESP,0x18                        ; 004a4d03
    MOV EBX,dword ptr [ESP + 0x28]      ; 004a4d06
    LEA EDX,[EBX + 0x20]                ; 004a4d0a
    LEA EDI,[ESP + 0xc]                 ; 004a4d0d
    MOV ESI,ESP                         ; 004a4d11
    FLD float ptr [EDX + 0x4]           ; 004a4d13
    MOV EAX,dword ptr [EDX]             ; 004a4d16
    PUSH EBX                            ; 004a4d18
    MOV dword ptr [ESP + 0x4],EAX       ; 004a4d19
    MOV EAX,dword ptr [EDX + 0x8]       ; 004a4d1d
    FADD float ptr [0x005c0b45]         ; 004a4d20 | DAT_005c0b45
    MOV dword ptr [ESP + 0xc],EAX       ; 004a4d26
    FSTP float ptr [ESP + 0x8]          ; 004a4d2a
    MOVSD ES:EDI,ESI                    ; 004a4d2e
    MOVSD ES:EDI,ESI                    ; 004a4d2f
    MOVSD ES:EDI,ESI                    ; 004a4d30
    CALL FUN_0057b880                   ; 004a4d31
        ;   XREF to: 0057b880 (UNCONDITIONAL_CALL)  ; undefined FUN_0057b880()
    ADD ESP,0x4                         ; 004a4d36
    TEST EAX,EAX                        ; 004a4d39
    JZ 0x004a4d8a                       ; 004a4d3b
        ;   XREF to: 004a4d8a (CONDITIONAL_JUMP)  ; LAB_004a4d8a
    MOV ECX,dword ptr [EBX + 0x304]     ; 004a4d3d
    PUSH ECX                            ; 004a4d43
    PUSH 0x0                            ; 004a4d44
    LEA EAX,[ESP + 0x14]                ; 004a4d46
    PUSH EAX                            ; 004a4d4a
    MOV ESI,dword ptr [0x005fc5a0]      ; 004a4d4b | DAT_005fc5a0
    PUSH ESI                            ; 004a4d51
    CALL FUN_004a3f70                   ; 004a4d52
        ;   XREF to: 004a3f70 (UNCONDITIONAL_CALL)  ; undefined FUN_004a3f70()
    ADD ESP,0x10                        ; 004a4d57
    LEA EAX,[ESP + 0xc]                 ; 004a4d5a
    PUSH EAX                            ; 004a4d5e
    PUSH 0x5c0b33                       ; 004a4d5f | = "wp_firestaff.wav"
    PUSH EBX                            ; 004a4d64
    MOV EDI,dword ptr [0x006045f8]      ; 004a4d65 | DAT_006045f8
    PUSH EDI                            ; 004a4d6b
    MOV dword ptr [EBX + 0x300],0x3f800000 ; 004a4d6c
    CALL FUN_005609d0                   ; 004a4d76
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005609d0()
    MOV EAX,0x1                         ; 004a4d7b
    ADD ESP,0x10                        ; 004a4d80
    ADD ESP,0x18                        ; 004a4d83
    POP EDI                             ; 004a4d86
    POP ESI                             ; 004a4d87
    POP EBX                             ; 004a4d88
    RET                                 ; 004a4d89
    LEA EAX,[ESP + 0xc]                 ; 004a4d8a
        ;   Label: LAB_004a4d8a
    PUSH EAX                            ; 004a4d8e
    PUSH 0x5c0b25                       ; 004a4d8f | s_wp_nomana_wav_005c0b24+1
    PUSH EBX                            ; 004a4d94
    MOV EDX,dword ptr [0x006045f8]      ; 004a4d95 | DAT_006045f8
    PUSH EDX                            ; 004a4d9b
    CALL FUN_005609d0                   ; 004a4d9c
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005609d0()
    ADD ESP,0x10                        ; 004a4da1
    MOV dword ptr [EBX + 0x300],0x3f800000 ; 004a4da4
    XOR EAX,EAX                         ; 004a4dae
    ADD ESP,0x18                        ; 004a4db0
    POP EDI                             ; 004a4db3
    POP ESI                             ; 004a4db4
    POP EBX                             ; 004a4db5
    RET                                 ; 004a4db6

