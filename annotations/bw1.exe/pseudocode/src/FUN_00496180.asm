; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00496180(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[1]:
;   FUN_004d27b0 at 004d3fc9
;
; Called Functions:
;   FUN_00493720
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00496180
        ;   Label: FUN_00496180
    PUSH ESI                            ; 00496181
    PUSH 0x1                            ; 00496182
    MOV EDX,dword ptr [ESP + 0x20]      ; 00496184
    PUSH EDX                            ; 00496188
    MOV ECX,dword ptr [ESP + 0x20]      ; 00496189
    PUSH ECX                            ; 0049618d
    MOV EBX,dword ptr [ESP + 0x20]      ; 0049618e
    PUSH EBX                            ; 00496192
    MOV ESI,dword ptr [ESP + 0x20]      ; 00496193
    PUSH ESI                            ; 00496197
    CALL FUN_00493720                   ; 00496198
        ;   XREF to: 00493720 (UNCONDITIONAL_CALL)  ; undefined FUN_00493720()
    ADD ESP,0x14                        ; 0049619d
    POP ESI                             ; 004961a0
    POP EBX                             ; 004961a1
    RET                                 ; 004961a2

