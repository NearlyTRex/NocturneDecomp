; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b63b0(undefined4 param_1,int param_2,undefined4 param_3)
;
;
; XREF[2]:
;   FUN_005b6fc0 at 005b6ff0
;   FUN_005b70d0 at 005b70f7
;
; Called Functions:
;   FUN_0044e6e0
;   FUN_005b6090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b63b0
        ;   Label: FUN_005b63b0
    PUSH EBP                            ; 005b63b1
    MOV EBP,ESP                         ; 005b63b2
    MOV EBX,dword ptr [EBP + 0x10]      ; 005b63b4
    MOV EAX,dword ptr [EBX + 0x118]     ; 005b63b7
    PUSH EAX                            ; 005b63bd
    LEA EAX,[EBX + 0x124]               ; 005b63be
    PUSH EAX                            ; 005b63c4
    PUSH 0x48                           ; 005b63c5
    MOV EAX,dword ptr [EBX + 0x114]     ; 005b63c7
    PUSH EAX                            ; 005b63cd
    MOV EAX,dword ptr [EBX + 0x110]     ; 005b63ce
    PUSH EAX                            ; 005b63d4
    MOV EDX,dword ptr [EBP + 0x14]      ; 005b63d5
    PUSH EDX                            ; 005b63d8
    PUSH EBX                            ; 005b63d9
    CALL FUN_0044e6e0                   ; 005b63da
        ;   XREF to: 0044e6e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044e6e0()
    ADD ESP,0x8                         ; 005b63df
    PUSH EAX                            ; 005b63e2
    MOV EAX,dword ptr [EBX + 0x104]     ; 005b63e3
    PUSH EAX                            ; 005b63e9
    MOV ECX,dword ptr [EBP + 0xc]       ; 005b63ea
    PUSH ECX                            ; 005b63ed
    CALL FUN_005b6090                   ; 005b63ee
        ;   XREF to: 005b6090 (UNCONDITIONAL_CALL)  ; undefined FUN_005b6090()
    ADD ESP,0x20                        ; 005b63f3
    POP EBP                             ; 005b63f6
    POP EBX                             ; 005b63f7
    RET                                 ; 005b63f8

