; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b6fe0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)
;
;
; XREF[3]:
;   FUN_0040fcf0 at 0040fdf1
;   FUN_0049f310 at 0049faa8
;   FUN_005ae580 at 005ae77c
;
; Referenced Globals:
;   undefined4 DAT_00622c18
;   undefined4 DAT_01cb9e74
;   undefined4 DAT_01e82168
;
; Called Functions:
;   FUN_004b3490
;   FUN_00555ab0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004b6fe0
        ;   Label: FUN_004b6fe0
    PUSH dword ptr [ESP + 0x18]         ; 004b6fe1
    MOV EDX,dword ptr [ESP + 0x10]      ; 004b6fe5
    PUSH dword ptr [ESP + 0x14]         ; 004b6fe9
    PUSH EDX                            ; 004b6fed
    MOV EDX,dword ptr [0x01cb9e74]      ; 004b6fee | DAT_01cb9e74
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b6ff4
    SUB EAX,EDX                         ; 004b6ffb
    SHL EAX,0x2                         ; 004b6ffd
    SUB EAX,EDX                         ; 004b7000
    SHL EAX,0x2                         ; 004b7002
    ADD EAX,0x1cb9e78                   ; 004b7005
    PUSH EAX                            ; 004b700a
    CALL FUN_004b3490                   ; 004b700b
        ;   XREF to: 004b3490 (UNCONDITIONAL_CALL)  ; undefined FUN_004b3490()
    MOV ECX,dword ptr [0x01cb9e74]      ; 004b7010 | DAT_01cb9e74
    INC ECX                             ; 004b7016
    ADD ESP,0x10                        ; 004b7017
    MOV dword ptr [0x01cb9e74],ECX      ; 004b701a | DAT_01cb9e74
    CMP ECX,0xa                         ; 004b7020
    JGE 0x004b702e                      ; 004b7023
        ;   XREF to: 004b702e (CONDITIONAL_JUMP)  ; LAB_004b702e
    CMP dword ptr [ESP + 0x14],0x0      ; 004b7025
    JNZ 0x004b7041                      ; 004b702a
        ;   XREF to: 004b7041 (CONDITIONAL_JUMP)  ; LAB_004b7041
    POP EBP                             ; 004b702c
    RET                                 ; 004b702d
    PUSH ESI                            ; 004b702e
        ;   Label: LAB_004b702e
    XOR ESI,ESI                         ; 004b702f
    MOV dword ptr [0x01cb9e74],ESI      ; 004b7031 | DAT_01cb9e74
    POP ESI                             ; 004b7037
    CMP dword ptr [ESP + 0x14],0x0      ; 004b7038
    JNZ 0x004b7041                      ; 004b703d
        ;   XREF to: 004b7041 (CONDITIONAL_JUMP)  ; LAB_004b7041
    POP EBP                             ; 004b703f
    RET                                 ; 004b7040
    PUSH 0x3f800000                     ; 004b7041
        ;   Label: LAB_004b7041
    PUSH 0x0                            ; 004b7046
    PUSH 0x0                            ; 004b7048
    MOV EBP,dword ptr [0x00622c18]      ; 004b704a | DAT_00622c18
    PUSH 0x42c80000                     ; 004b7050
    PUSH EBP                            ; 004b7055 | DAT_01e82168
    CALL FUN_00555ab0                   ; 004b7056
        ;   XREF to: 00555ab0 (UNCONDITIONAL_CALL)  ; undefined FUN_00555ab0()
    ADD ESP,0x14                        ; 004b705b
    POP EBP                             ; 004b705e
    RET                                 ; 004b705f

