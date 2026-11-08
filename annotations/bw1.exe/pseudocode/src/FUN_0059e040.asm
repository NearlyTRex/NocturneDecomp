; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0059e040(int param_1)
;
;
; Called Functions:
;   FUN_0059c8e0
;   FUN_0059dd40
;   FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059e040
        ;   Label: FUN_0059e040
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059e041
    ADD EBX,0xd2c                       ; 0059e045
    PUSH EBX                            ; 0059e04b
    CALL FUN_0059c8e0                   ; 0059e04c
        ;   XREF to: 0059c8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059c8e0()
    ADD ESP,0x4                         ; 0059e051
    ADD EAX,0x4                         ; 0059e054
    PUSH EAX                            ; 0059e057
    CALL FUN_0059dd40                   ; 0059e058
        ;   XREF to: 0059dd40 (UNCONDITIONAL_CALL)  ; undefined FUN_0059dd40()
    ADD ESP,0x4                         ; 0059e05d
    PUSH 0x200                          ; 0059e060
    PUSH 0x0                            ; 0059e065
    LEA EBX,[EAX + 0xfffff2d0]          ; 0059e067
    PUSH EBX                            ; 0059e06d
    CALL FUN_005bfb70                   ; 0059e06e
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    ADD ESP,0xc                         ; 0059e073
    PUSH 0x200                          ; 0059e076
    PUSH 0x0                            ; 0059e07b
    LEA EAX,[EBX + 0x200]               ; 0059e07d
    PUSH EAX                            ; 0059e083
    CALL FUN_005bfb70                   ; 0059e084
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    ADD ESP,0xc                         ; 0059e089
    PUSH 0x100                          ; 0059e08c
    PUSH 0x0                            ; 0059e091
    LEA EAX,[EBX + 0x400]               ; 0059e093
    PUSH EAX                            ; 0059e099
    CALL FUN_005bfb70                   ; 0059e09a
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    ADD ESP,0xc                         ; 0059e09f
    PUSH 0x100                          ; 0059e0a2
    PUSH 0x0                            ; 0059e0a7
    LEA EAX,[EBX + 0x500]               ; 0059e0a9
    PUSH EAX                            ; 0059e0af
    CALL FUN_005bfb70                   ; 0059e0b0
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    ADD ESP,0xc                         ; 0059e0b5
    PUSH 0x300                          ; 0059e0b8
    PUSH 0x0                            ; 0059e0bd
    LEA EAX,[EBX + 0xa18]               ; 0059e0bf
    PUSH EAX                            ; 0059e0c5
    CALL FUN_005bfb70                   ; 0059e0c6
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    MOV dword ptr [EBX + 0x608],0x0     ; 0059e0cb
    MOV dword ptr [EBX + 0x60c],0x0     ; 0059e0d5
    MOV dword ptr [EBX + 0xa10],0x0     ; 0059e0df
    MOV dword ptr [EBX + 0xa14],0x0     ; 0059e0e9
    MOV dword ptr [EBX + 0xd20],0x0     ; 0059e0f3
    MOV dword ptr [EBX + 0xd18],0x0     ; 0059e0fd
    ADD ESP,0xc                         ; 0059e107
    MOV dword ptr [EBX + 0xd24],0x0     ; 0059e10a
    MOV EAX,EBX                         ; 0059e114
    MOV dword ptr [EBX + 0xd28],0x0     ; 0059e116
    POP EBX                             ; 0059e120
    RET                                 ; 0059e121

