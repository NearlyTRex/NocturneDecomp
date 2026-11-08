; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056ac60(int param_1,undefined4 param_2,undefined4 param_3,int param_4)
;
;
; XREF[1]:
;   FUN_00430c40 at 00430c7d
;
; Called Functions:
;   FUN_00566420
;   FUN_00569890
;   FUN_00569eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056ac60
        ;   Label: FUN_0056ac60
    PUSH ESI                            ; 0056ac61
    PUSH EDI                            ; 0056ac62
    PUSH EBP                            ; 0056ac63
    MOV EBX,dword ptr [ESP + 0x14]      ; 0056ac64
    MOV EAX,dword ptr [ESP + 0x20]      ; 0056ac68
    CMP EAX,dword ptr [EBX + 0x2320]    ; 0056ac6c
    JNZ 0x0056acb1                      ; 0056ac72
        ;   XREF to: 0056acb1 (CONDITIONAL_JUMP)  ; LAB_0056acb1
    LEA EAX,[EBX + 0x2230]              ; 0056ac74
        ;   Label: LAB_0056ac74
    PUSH EAX                            ; 0056ac7a
    LEA EAX,[EBX + 0x2140]              ; 0056ac7b
    PUSH EAX                            ; 0056ac81
    MOV ECX,dword ptr [EBX + 0x2324]    ; 0056ac82
    PUSH ECX                            ; 0056ac88
    MOV ESI,dword ptr [EBX + 0x2320]    ; 0056ac89
    PUSH ESI                            ; 0056ac8f
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0056ac90
    PUSH EDI                            ; 0056ac94
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0056ac95
    PUSH EBP                            ; 0056ac99
    PUSH EBX                            ; 0056ac9a
    CALL FUN_00569eb0                   ; 0056ac9b
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00569eb0()
    ADD ESP,0x4                         ; 0056aca0
    PUSH EAX                            ; 0056aca3
    CALL FUN_00566420                   ; 0056aca4
        ;   XREF to: 00566420 (UNCONDITIONAL_CALL)  ; undefined FUN_00566420()
    ADD ESP,0x1c                        ; 0056aca9
    POP EBP                             ; 0056acac
    POP EDI                             ; 0056acad
    POP ESI                             ; 0056acae
    POP EBX                             ; 0056acaf
    RET                                 ; 0056acb0
    PUSH EAX                            ; 0056acb1
        ;   Label: LAB_0056acb1
    PUSH EBX                            ; 0056acb2
    CALL FUN_00569890                   ; 0056acb3
        ;   XREF to: 00569890 (UNCONDITIONAL_CALL)  ; undefined FUN_00569890()
    ADD ESP,0x8                         ; 0056acb8
    JMP 0x0056ac74                      ; 0056acbb
        ;   XREF to: 0056ac74 (UNCONDITIONAL_JUMP)  ; LAB_0056ac74

