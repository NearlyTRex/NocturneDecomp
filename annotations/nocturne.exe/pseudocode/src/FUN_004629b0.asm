; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004629b0(int param_1)
;
;
; Referenced Globals:
;   string s_Bipn04_0057de95
;   string s_Bipn09_0057de9c
;
; Called Functions:
;   FUN_004796b0
;   FUN_005179d0
;   FUN_0051dcd0
;   FUN_0051e0a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004629b0
        ;   Label: FUN_004629b0
    PUSH ESI                            ; 004629b1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004629b2
    LEA ESI,[EBX + 0x150]               ; 004629b6
    PUSH ESI                            ; 004629bc
    CALL FUN_0051dcd0                   ; 004629bd
        ;   XREF to: 0051dcd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051dcd0()
    ADD ESP,0x4                         ; 004629c2
    PUSH ESI                            ; 004629c5
    CALL FUN_0051e0a0                   ; 004629c6
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051e0a0()
    ADD ESP,0x4                         ; 004629cb
    PUSH 0x1                            ; 004629ce
    PUSH 0x57de95                       ; 004629d0 | = "Bipn04"
    PUSH EAX                            ; 004629d5
    MOV ESI,EAX                         ; 004629d6
    MOV dword ptr [EBX + 0xbd24],0x0    ; 004629d8
    CALL FUN_005179d0                   ; 004629e2
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 004629e7
    PUSH 0x1                            ; 004629ea
    PUSH 0x57de9c                       ; 004629ec | = "Bipn09"
    PUSH ESI                            ; 004629f1
    MOV dword ptr [EBX + 0xbd28],EAX    ; 004629f2
    CALL FUN_005179d0                   ; 004629f8
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 004629fd
    PUSH EBX                            ; 00462a00
    MOV dword ptr [EBX + 0xbd2c],EAX    ; 00462a01
    CALL FUN_004796b0                   ; 00462a07
        ;   XREF to: 004796b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004796b0()
    MOV dword ptr [EBX + 0xbd30],0x0    ; 00462a0c
    MOV dword ptr [EBX + 0xbd34],0x0    ; 00462a16
    ADD ESP,0x4                         ; 00462a20
    MOV dword ptr [EBX + 0xbd38],0x0    ; 00462a23
    POP ESI                             ; 00462a2d
    POP EBX                             ; 00462a2e
    RET                                 ; 00462a2f

