; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a5770(int param_1,int param_2)
;
;
; Called Functions:
;   FUN_00556be0
;   FUN_0057b7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a5770
        ;   Label: FUN_004a5770
    PUSH EDI                            ; 004a5771
    MOV EBX,dword ptr [ESP + 0xc]       ; 004a5772
    CMP dword ptr [EBX + 0x2d4],0x2     ; 004a5776
    JNZ 0x004a57a1                      ; 004a577d
        ;   XREF to: 004a57a1 (CONDITIONAL_JUMP)  ; LAB_004a57a1
    CMP dword ptr [ESP + 0x10],0x1      ; 004a577f
    JNZ 0x004a57a1                      ; 004a5784
        ;   XREF to: 004a57a1 (CONDITIONAL_JUMP)  ; LAB_004a57a1
    PUSH ESI                            ; 004a5786
    MOV ESI,dword ptr [EBX + 0x25c4]    ; 004a5787
    PUSH ESI                            ; 004a578d
    CALL FUN_00556be0                   ; 004a578e
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; undefined FUN_00556be0()
    ADD ESP,0x4                         ; 004a5793
    MOV dword ptr [EBX + 0x25c4],0x0    ; 004a5796
    POP ESI                             ; 004a57a0
    MOV EDI,dword ptr [ESP + 0x10]      ; 004a57a1
        ;   Label: LAB_004a57a1
    PUSH EDI                            ; 004a57a5
    PUSH EBX                            ; 004a57a6
    CALL FUN_0057b7f0                   ; 004a57a7
        ;   XREF to: 0057b7f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057b7f0()
    ADD ESP,0x8                         ; 004a57ac
    POP EDI                             ; 004a57af
    POP EBX                             ; 004a57b0
    RET                                 ; 004a57b1

