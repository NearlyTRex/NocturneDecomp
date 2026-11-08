; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d4160(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_0051b550 at 0051b7e5
;
; Called Functions:
;   FUN_004319d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d4160
        ;   Label: FUN_004d4160
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d4161
    MOV EDX,dword ptr [EBX + 0x20b98]   ; 004d4165
    TEST EDX,EDX                        ; 004d416b
    JNZ 0x004d4171                      ; 004d416d
        ;   XREF to: 004d4171 (CONDITIONAL_JUMP)  ; LAB_004d4171
    POP EBX                             ; 004d416f
    RET                                 ; 004d4170
    PUSH ESI                            ; 004d4171
        ;   Label: LAB_004d4171
    PUSH 0x0                            ; 004d4172
    PUSH 0x3dcccccd                     ; 004d4174
    PUSH EDX                            ; 004d4179
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004d417a
    PUSH ESI                            ; 004d417e
    PUSH EBX                            ; 004d417f
    CALL FUN_004319d0                   ; 004d4180
        ;   XREF to: 004319d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004319d0()
    ADD ESP,0x14                        ; 004d4185
    MOV dword ptr [EBX + 0x20b98],0x0   ; 004d4188
    POP ESI                             ; 004d4192
    POP EBX                             ; 004d4193
    RET                                 ; 004d4194

