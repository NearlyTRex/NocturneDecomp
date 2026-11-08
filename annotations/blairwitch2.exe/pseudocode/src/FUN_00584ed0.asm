; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00584ed0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408790
;   FUN_0044fc80
;   FUN_0044fd70
;   FUN_0049f180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00584ed0
        ;   Label: FUN_00584ed0
    PUSH ESI                            ; 00584ed1
    PUSH EDI                            ; 00584ed2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00584ed3
    PUSH EBX                            ; 00584ed7
    CALL FUN_00408790                   ; 00584ed8
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; undefined FUN_00408790()
    ADD ESP,0x4                         ; 00584edd
    ADD EAX,0x2b4                       ; 00584ee0
    PUSH EAX                            ; 00584ee5
    CALL FUN_0044fc80                   ; 00584ee6
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fc80()
    ADD ESP,0x4                         ; 00584eeb
    ADD EAX,0x26c                       ; 00584eee
    PUSH EAX                            ; 00584ef3
    CALL FUN_0049f180                   ; 00584ef4
        ;   XREF to: 0049f180 (UNCONDITIONAL_CALL)  ; undefined FUN_0049f180()
    ADD ESP,0x4                         ; 00584ef9
    ADD EAX,0x404                       ; 00584efc
    PUSH EAX                            ; 00584f01
    CALL FUN_0044fc80                   ; 00584f02
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fc80()
    ADD ESP,0x4                         ; 00584f07
    LEA EBX,[EAX + 0xfffff6dc]          ; 00584f0a
    PUSH 0x5eddaf                       ; 00584f10
    LEA EAX,[EBX + 0x2b4]               ; 00584f15
    PUSH EAX                            ; 00584f1b
    MOV ESI,0x5eddbc                    ; 00584f1c
    MOV dword ptr [EBX + 0x2b0],0x5fdb44 ; 00584f21
    CALL FUN_0044fd70                   ; 00584f2b
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    MOV dword ptr [EBX + 0x430],0x0     ; 00584f30
    ADD ESP,0x8                         ; 00584f3a
    MOV dword ptr [EBX + 0x434],0x0     ; 00584f3d
    LEA EDI,[EBX + 0x43c]               ; 00584f47
    MOV dword ptr [EBX + 0x438],0x0     ; 00584f4d
    PUSH EDI                            ; 00584f57
    MOV AL,byte ptr [ESI]               ; 00584f58
        ;   Label: LAB_00584f58
    MOV byte ptr [EDI],AL               ; 00584f5a
    CMP AL,0x0                          ; 00584f5c
    JZ 0x00584f70                       ; 00584f5e
        ;   XREF to: 00584f70 (CONDITIONAL_JUMP)  ; LAB_00584f70
    MOV AL,byte ptr [ESI + 0x1]         ; 00584f60
    ADD ESI,0x2                         ; 00584f63
    MOV byte ptr [EDI + 0x1],AL         ; 00584f66
    ADD EDI,0x2                         ; 00584f69
    CMP AL,0x0                          ; 00584f6c
    JNZ 0x00584f58                      ; 00584f6e
        ;   XREF to: 00584f58 (CONDITIONAL_JUMP)  ; LAB_00584f58
    POP EDI                             ; 00584f70
        ;   Label: LAB_00584f70
    MOV dword ptr [EBX + 0x504],0x0     ; 00584f71
    MOV dword ptr [EBX + 0x508],0x0     ; 00584f7b
    MOV ESI,0x5eddc1                    ; 00584f85
    MOV dword ptr [EBX + 0x518],0x0     ; 00584f8a
    LEA EDI,[EBX + 0x4a0]               ; 00584f94
    MOV dword ptr [EBX + 0x514],0x0     ; 00584f9a
    PUSH EDI                            ; 00584fa4
    MOV AL,byte ptr [ESI]               ; 00584fa5
        ;   Label: LAB_00584fa5
    MOV byte ptr [EDI],AL               ; 00584fa7
    CMP AL,0x0                          ; 00584fa9
    JZ 0x00584fbd                       ; 00584fab
        ;   XREF to: 00584fbd (CONDITIONAL_JUMP)  ; LAB_00584fbd
    MOV AL,byte ptr [ESI + 0x1]         ; 00584fad
    ADD ESI,0x2                         ; 00584fb0
    MOV byte ptr [EDI + 0x1],AL         ; 00584fb3
    ADD EDI,0x2                         ; 00584fb6
    CMP AL,0x0                          ; 00584fb9
    JNZ 0x00584fa5                      ; 00584fbb
        ;   XREF to: 00584fa5 (CONDITIONAL_JUMP)  ; LAB_00584fa5
    POP EDI                             ; 00584fbd
        ;   Label: LAB_00584fbd
    MOV dword ptr [EBX + 0x50c],0x41200000 ; 00584fbe
    PUSH 0x5eddc6                       ; 00584fc8
    MOV dword ptr [EBX + 0x51c],0x1     ; 00584fcd
    LEA EAX,[EBX + 0x924]               ; 00584fd7
    MOV dword ptr [EBX + 0x510],0x0     ; 00584fdd
    PUSH EAX                            ; 00584fe7
    MOV dword ptr [EBX + 0x920],0x0     ; 00584fe8
    CALL FUN_0044fd70                   ; 00584ff2
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    MOV dword ptr [EBX + 0xaa0],0x1     ; 00584ff7
    MOV dword ptr [EBX + 0xfc],0x1      ; 00585001
    ADD ESP,0x8                         ; 0058500b
    MOV dword ptr [EBX + 0xaa4],0x0     ; 0058500e
    MOV EAX,EBX                         ; 00585018
    MOV dword ptr [EBX + 0xaa8],0x0     ; 0058501a
    POP EDI                             ; 00585024
    POP ESI                             ; 00585025
    POP EBX                             ; 00585026
    RET                                 ; 00585027

