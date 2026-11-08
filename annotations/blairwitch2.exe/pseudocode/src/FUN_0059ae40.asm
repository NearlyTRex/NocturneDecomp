; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0059ae40(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_audioreel_kfm_005ef40c
;   TerminatedCString s_audioreelshadow_kfm_005ef41a
;   undefined4 DAT_026677e4
;
; Called Functions:
;   FUN_0044fd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059ae40
        ;   Label: FUN_0059ae40
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059ae41
    MOV dword ptr [EBX + 0x86c],0x3     ; 0059ae45
    MOV dword ptr [EBX + 0x87c],0x2     ; 0059ae4f
    MOV dword ptr [EBX + 0x870],0x14    ; 0059ae59
    MOV dword ptr [EBX + 0x880],0x6     ; 0059ae63
    MOV dword ptr [EBX + 0x874],0x2     ; 0059ae6d
    MOV dword ptr [EBX + 0x884],0x6     ; 0059ae77
    MOV dword ptr [EBX + 0x878],0x12    ; 0059ae81
    MOV dword ptr [EBX + 0x888],0x6     ; 0059ae8b
    MOV dword ptr [EBX + 0x18],0x0      ; 0059ae95
    MOV dword ptr [EBX + 0x30],0x1      ; 0059ae9c
    MOV dword ptr [EBX + 0x34],0x2      ; 0059aea3
    MOV dword ptr [EBX + 0x38],0x2      ; 0059aeaa
    MOV dword ptr [EBX + 0x3c],0x2      ; 0059aeb1
    MOV dword ptr [EBX + 0x40],0x3      ; 0059aeb8
    MOV EDX,0xffffffff                  ; 0059aebf
    MOV dword ptr [EBX + 0x44],0x1      ; 0059aec4
    PUSH 0x5ef40c                       ; 0059aecb | = "audioreel.kfm"
    MOV dword ptr [EBX + 0x24],0x0      ; 0059aed0
    LEA EAX,[EBX + 0x574]               ; 0059aed7
    MOV dword ptr [EBX + 0x28],0x0      ; 0059aedd
    PUSH EAX                            ; 0059aee4
    MOV dword ptr [EBX + 0x2c],0x0      ; 0059aee5
    MOV dword ptr [0x026677e4],EDX      ; 0059aeec | DAT_026677e4
    CALL FUN_0044fd70                   ; 0059aef2
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    ADD ESP,0x8                         ; 0059aef7
    PUSH 0x5ef41a                       ; 0059aefa | = "audioreelshadow.kfm"
    LEA EAX,[EBX + 0x6f0]               ; 0059aeff
    PUSH EAX                            ; 0059af05
    CALL FUN_0044fd70                   ; 0059af06
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    ADD ESP,0x8                         ; 0059af0b
    MOV dword ptr [EBX + 0x48],0x0      ; 0059af0e
    POP EBX                             ; 0059af15
    LEA EAX,[EAX]                       ; 0059af16
    LEA EDX,[EDX]                       ; 0059af1c
    RET                                 ; 0059af20
        ;   Label: LAB_0059af20

