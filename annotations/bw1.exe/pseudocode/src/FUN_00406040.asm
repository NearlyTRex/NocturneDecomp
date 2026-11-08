; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00406040(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4f02c
;   undefined4 DAT_01c51d00
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;
; Called Functions:
;   FUN_00403920
;   FUN_0043cbf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00406040
        ;   Label: FUN_00406040
    PUSH ESI                            ; 00406041
    PUSH EBP                            ; 00406042
    MOV EBX,dword ptr [ESP + 0x10]      ; 00406043
    LEA ESI,[EBX + 0x18]                ; 00406047
    LEA EAX,[EBX + 0x8]                 ; 0040604a
    PUSH EAX                            ; 0040604d
    CALL FUN_00403920                   ; 0040604e
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined FUN_00403920()
    ADD ESP,0x4                         ; 00406053
    TEST EAX,EAX                        ; 00406056
    JZ 0x0040609b                       ; 00406058
        ;   XREF to: 0040609b (CONDITIONAL_JUMP)  ; LAB_0040609b
    CMP dword ptr [0x01c51d00],0x0      ; 0040605a | DAT_01c51d00
    JNZ 0x004060b6                      ; 00406061
        ;   XREF to: 004060b6 (CONDITIONAL_JUMP)  ; LAB_004060b6
    CMP dword ptr [0x0061b4a0],0x20     ; 00406063 | DAT_0061b4a0
    JNZ 0x004060aa                      ; 0040606a
        ;   XREF to: 004060aa (CONDITIONAL_JUMP)  ; LAB_004060aa
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 0040606c | DAT_01c4f02c
    PUSH EDI                            ; 00406076
        ;   Label: LAB_00406076
    MOV EDI,0x1                         ; 00406077
    PUSH ESI                            ; 0040607c
    MOV EAX,dword ptr [EBX + 0x4]       ; 0040607d
    MOV EBP,0x2                         ; 00406080
    PUSH EAX                            ; 00406085
    MOV dword ptr [0x01c51d14],EDI      ; 00406086 | DAT_01c51d14
    MOV dword ptr [0x01c51d18],EBP      ; 0040608c | DAT_01c51d18
    CALL FUN_0043cbf0                   ; 00406092
        ;   XREF to: 0043cbf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043cbf0()
    ADD ESP,0x8                         ; 00406097
    POP EDI                             ; 0040609a
    MOV EAX,dword ptr [EBX + 0x4]       ; 0040609b
        ;   Label: LAB_0040609b
    ADD EBX,0x18                        ; 0040609e
    SHL EAX,0x2                         ; 004060a1
    ADD EAX,EBX                         ; 004060a4
    POP EBP                             ; 004060a6
    POP ESI                             ; 004060a7
    POP EBX                             ; 004060a8
    RET                                 ; 004060a9
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 004060aa | DAT_01c4f02c
        ;   Label: LAB_004060aa
    JMP 0x00406076                      ; 004060b4
        ;   XREF to: 00406076 (UNCONDITIONAL_JUMP)  ; LAB_00406076
    CMP dword ptr [0x0061b4a0],0x20     ; 004060b6 | DAT_0061b4a0
        ;   Label: LAB_004060b6
    JNZ 0x004060cb                      ; 004060bd
        ;   XREF to: 004060cb (CONDITIONAL_JUMP)  ; LAB_004060cb
    MOV dword ptr [0x01c4f02c],0x57de01 ; 004060bf | DAT_01c4f02c | LAB_0057de01
    JMP 0x00406076                      ; 004060c9
        ;   XREF to: 00406076 (UNCONDITIONAL_JUMP)  ; LAB_00406076
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 004060cb | DAT_01c4f02c | LAB_0057e5e3
        ;   Label: LAB_004060cb
    JMP 0x00406076                      ; 004060d5
        ;   XREF to: 00406076 (UNCONDITIONAL_JUMP)  ; LAB_00406076

