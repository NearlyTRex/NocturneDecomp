; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00504ee0(int param_1,int param_2)
;
;
; XREF[3]:
;   FUN_00503c90 at 00503e73
;   FUN_00504400 at 0050447b
;   FUN_00505ec0 at 00506006
;
; Referenced Globals:
;   undefined4 DAT_0060343c
;
; Called Functions:
;   FUN_00408b40
;   FUN_0045f3e0
;   FUN_0045f690
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00504ee0
        ;   Label: FUN_00504ee0
    PUSH ESI                            ; 00504ee1
    PUSH EDI                            ; 00504ee2
    PUSH EBP                            ; 00504ee3
    SUB ESP,0x40                        ; 00504ee4
    MOV EBP,dword ptr [ESP + 0x54]      ; 00504ee7
    MOV ESI,dword ptr [ESP + 0x58]      ; 00504eeb
    LEA EAX,[ESI*0x4 + 0x0]             ; 00504eef
    SUB EAX,ESI                         ; 00504ef6
    SHL EAX,0x3                         ; 00504ef8
    ADD EAX,ESI                         ; 00504efb
    LEA EBX,[EBP + 0x5f0]               ; 00504efd
    SHL EAX,0x2                         ; 00504f03
    MOV dword ptr [ESP + 0x3c],ESI      ; 00504f06
    ADD EBX,EAX                         ; 00504f0a
    FILD dword ptr [ESP + 0x3c]         ; 00504f0c
    FADD float ptr [EBX + 0x4]          ; 00504f10
    FMUL float ptr [0x0060343c]         ; 00504f13 | DAT_0060343c
    LEA EAX,[EBX + 0x18]                ; 00504f19
    MOV dword ptr [EBX + 0x18],0x0      ; 00504f1c
    PUSH EAX                            ; 00504f23
    LEA ESI,[EBX + 0x24]                ; 00504f24
    MOV dword ptr [EBX + 0x20],0x0      ; 00504f27
    PUSH ESI                            ; 00504f2e
    FSTP float ptr [EBX + 0x1c]         ; 00504f2f
    CALL FUN_0045f3e0                   ; 00504f32
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f3e0()
    ADD ESP,0x8                         ; 00504f37
    MOV EAX,dword ptr [EBP + 0x150c]    ; 00504f3a
    MOV dword ptr [ESP + 0x2c],EAX      ; 00504f40
    LEA EAX,[ESP + 0x24]                ; 00504f44
    XOR EDX,EDX                         ; 00504f48
    PUSH EAX                            ; 00504f4a
    LEA EDI,[ESP + 0x10]                ; 00504f4b
    MOV dword ptr [ESP + 0x28],EDX      ; 00504f4f
    PUSH ESI                            ; 00504f53
    LEA ESI,[ESP + 0x38]                ; 00504f54
    MOV dword ptr [ESP + 0x30],EDX      ; 00504f58
    CALL FUN_0045f690                   ; 00504f5c
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f690()
    LEA ESI,[ESP + 0x38]                ; 00504f61
    LEA EAX,[ESP + 0x14]                ; 00504f65
    ADD ESP,0x8                         ; 00504f69
    LEA EDX,[EBX + 0xc]                 ; 00504f6c
    MOVSD ES:EDI,ESI                    ; 00504f6f
    MOVSD ES:EDI,ESI                    ; 00504f70
    MOVSD ES:EDI,ESI                    ; 00504f71
    CMP EDX,EAX                         ; 00504f72
    JZ 0x00504f8a                       ; 00504f74
        ;   XREF to: 00504f8a (CONDITIONAL_JUMP)  ; LAB_00504f8a
    MOV EAX,dword ptr [ESP + 0xc]       ; 00504f76
    MOV dword ptr [EDX],EAX             ; 00504f7a
    MOV EAX,dword ptr [ESP + 0x10]      ; 00504f7c
    MOV dword ptr [EDX + 0x4],EAX       ; 00504f80
    MOV EAX,dword ptr [ESP + 0x14]      ; 00504f83
    MOV dword ptr [EDX + 0x8],EAX       ; 00504f87
    LEA EAX,[EBX + 0xc]                 ; 00504f8a
        ;   Label: LAB_00504f8a
    PUSH EAX                            ; 00504f8d
    LEA ESI,[ESP + 0x4]                 ; 00504f8e
    PUSH EBP                            ; 00504f92
    LEA EDI,[ESP + 0x20]                ; 00504f93
    ADD EBX,0x58                        ; 00504f97
    CALL FUN_00408b40                   ; 00504f9a
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    LEA ESI,[ESP + 0x8]                 ; 00504f9f
    ADD ESP,0x8                         ; 00504fa3
    LEA EAX,[ESP + 0x18]                ; 00504fa6
    MOVSD ES:EDI,ESI                    ; 00504faa
    MOVSD ES:EDI,ESI                    ; 00504fab
    MOVSD ES:EDI,ESI                    ; 00504fac
    CMP EBX,EAX                         ; 00504fad
    JNZ 0x00504fb9                      ; 00504faf
        ;   XREF to: 00504fb9 (CONDITIONAL_JUMP)  ; LAB_00504fb9
    ADD ESP,0x40                        ; 00504fb1
    POP EBP                             ; 00504fb4
    POP EDI                             ; 00504fb5
    POP ESI                             ; 00504fb6
    POP EBX                             ; 00504fb7
    RET                                 ; 00504fb8
    MOV EAX,dword ptr [ESP + 0x18]      ; 00504fb9
        ;   Label: LAB_00504fb9
    MOV dword ptr [EBX],EAX             ; 00504fbd
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00504fbf
    MOV dword ptr [EBX + 0x4],EAX       ; 00504fc3
    MOV EAX,dword ptr [ESP + 0x20]      ; 00504fc6
    MOV dword ptr [EBX + 0x8],EAX       ; 00504fca
    ADD ESP,0x40                        ; 00504fcd
    POP EBP                             ; 00504fd0
    POP EDI                             ; 00504fd1
    POP ESI                             ; 00504fd2
    POP EBX                             ; 00504fd3
    RET                                 ; 00504fd4

