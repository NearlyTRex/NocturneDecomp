; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b5ec0(int param_1)
;
;
; XREF[1]:
;   FUN_00540820 at 0054082c
;
; Called Functions:
;   FUN_004c3280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b5ec0
        ;   Label: FUN_004b5ec0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b5ec1
    MOV dword ptr [EBX + 0x1fa04],0x0   ; 004b5ec5
    MOV dword ptr [EBX + 0x1fa08],0x0   ; 004b5ecf
    MOV dword ptr [EBX + 0x1fa0c],0x0   ; 004b5ed9
    MOV dword ptr [EBX + 0x1fa10],0x0   ; 004b5ee3
    MOV dword ptr [EBX + 0x1fa14],0x0   ; 004b5eed
    PUSH -0x1                           ; 004b5ef7
    MOV dword ptr [EBX + 0x1fa18],0x0   ; 004b5ef9
    LEA EAX,[EBX + 0x1f5a0]             ; 004b5f03
    MOV dword ptr [EBX + 0x1fa1c],0x0   ; 004b5f09
    PUSH EAX                            ; 004b5f13
    MOV dword ptr [EBX + 0x2590],0x0    ; 004b5f14
    CALL FUN_004c3280                   ; 004b5f1e
        ;   XREF to: 004c3280 (UNCONDITIONAL_CALL)  ; undefined FUN_004c3280()
    ADD ESP,0x8                         ; 004b5f23
    PUSH 0x0                            ; 004b5f26
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004b5f28
    PUSH EBX                            ; 004b5f2e
    CALL dword ptr [EAX + 0x13c]        ; 004b5f2f
    ADD ESP,0x8                         ; 004b5f35
    MOV EAX,EBX                         ; 004b5f38
    LEA EDX,[EBX + 0x88]                ; 004b5f3a
    ADD EAX,0x44                        ; 004b5f40
        ;   Label: LAB_004b5f40
    MOV dword ptr [EAX + 0x2468],0x0    ; 004b5f43
    CMP EAX,EDX                         ; 004b5f4d
    JNZ 0x004b5f40                      ; 004b5f4f
        ;   XREF to: 004b5f40 (CONDITIONAL_JUMP)  ; LAB_004b5f40
    POP EBX                             ; 004b5f51
    RET                                 ; 004b5f52

