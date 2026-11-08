; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0056f8a0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;
; *****************************************************************************

section .text

    MOV EDX,0x5d690a                    ; 0056f8a0
        ;   Label: FUN_0056f8a0
    MOV ECX,0x104                       ; 0056f8a5
    PUSH 0x5d6921                       ; 0056f8aa
    MOV dword ptr [0x01d71de0],EDX      ; 0056f8af | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0056f8b5 | DAT_01d71de4
    CALL FUN_004e4330                   ; 0056f8bb
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 0056f8c0
    MOV EAX,dword ptr [ESP + 0x4]       ; 0056f8c3
    RET                                 ; 0056f8c7

