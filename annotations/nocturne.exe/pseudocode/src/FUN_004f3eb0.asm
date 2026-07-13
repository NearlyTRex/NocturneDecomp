; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004f3eb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; Called Functions:
;   FUN_004f3f20
;   FUN_004f4630
;   FUN_00563cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f3eb0
        ;   Label: FUN_004f3eb0
    PUSH ESI                            ; 004f3eb1
    PUSH EDI                            ; 004f3eb2
    PUSH EBP                            ; 004f3eb3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004f3eb4
    PUSH EBX                            ; 004f3eb8
    CALL FUN_004f3f20                   ; 004f3eb9
        ;   XREF to: 004f3f20 (UNCONDITIONAL_CALL)  ; undefined FUN_004f3f20()
    ADD ESP,0x4                         ; 004f3ebe
    PUSH 0x14                           ; 004f3ec1
    PUSH 0x0                            ; 004f3ec3
    PUSH EBX                            ; 004f3ec5
    CALL FUN_00563cc0                   ; 004f3ec6
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00563cc0()
    ADD ESP,0xc                         ; 004f3ecb
    MOV EDX,dword ptr [ESP + 0x28]      ; 004f3ece
    PUSH EDX                            ; 004f3ed2
    MOV ECX,dword ptr [ESP + 0x28]      ; 004f3ed3
    PUSH ECX                            ; 004f3ed7
    MOV ESI,dword ptr [ESP + 0x28]      ; 004f3ed8
    PUSH ESI                            ; 004f3edc
    MOV EDI,dword ptr [ESP + 0x28]      ; 004f3edd
    PUSH EDI                            ; 004f3ee1
    MOV EBP,dword ptr [ESP + 0x28]      ; 004f3ee2
    PUSH EBP                            ; 004f3ee6
    PUSH EBX                            ; 004f3ee7
    CALL FUN_004f4630                   ; 004f3ee8
        ;   XREF to: 004f4630 (UNCONDITIONAL_CALL)  ; undefined FUN_004f4630()
    ADD ESP,0x18                        ; 004f3eed
    MOV EAX,EBX                         ; 004f3ef0
    POP EBP                             ; 004f3ef2
    POP EDI                             ; 004f3ef3
    POP ESI                             ; 004f3ef4
    POP EBX                             ; 004f3ef5
    RET                                 ; 004f3ef6

