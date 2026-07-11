; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00553ea0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined1* PTR_FUN_005a4154 = 00553f10
;   undefined4 DAT_005a4250
;
; Called Functions:
;   FUN_00409ea0
;   FUN_0041a6c0
;   FUN_0056445f
;   FUN_00564486
;   FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00553ea0
        ;   Label: FUN_00553ea0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00553ea1
    TEST byte ptr [ESP + 0xc],0x4       ; 00553ea5
    JNZ 0x00553ee7                      ; 00553eaa
        ;   XREF to: 00553ee7 (CONDITIONAL_JUMP)  ; LAB_00553ee7
    PUSH 0x0                            ; 00553eac
    ADD EBX,0x300                       ; 00553eae
    PUSH EBX                            ; 00553eb4
    MOV dword ptr [EBX + 0xfffffe4c],0x5a4154 ; 00553eb5 | PTR_FUN_005a4154
    CALL FUN_0041a6c0                   ; 00553ebf
        ;   XREF to: 0041a6c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a6c0()
    ADD ESP,0x8                         ; 00553ec4
    PUSH 0x1                            ; 00553ec7
    LEA EBX,[EAX + 0xfffffd00]          ; 00553ec9
    PUSH EBX                            ; 00553ecf
    CALL FUN_00409ea0                   ; 00553ed0
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409ea0()
    ADD ESP,0x8                         ; 00553ed5
    MOV DL,byte ptr [ESP + 0xc]         ; 00553ed8
    MOV EBX,EAX                         ; 00553edc
    TEST DL,0x2                         ; 00553ede
    JNZ 0x00553f02                      ; 00553ee1
        ;   XREF to: 00553f02 (CONDITIONAL_JUMP)  ; LAB_00553f02
    MOV EAX,EBX                         ; 00553ee3
    POP EBX                             ; 00553ee5
    RET                                 ; 00553ee6
    PUSH 0x5a4250                       ; 00553ee7 | DAT_005a4250
        ;   Label: LAB_00553ee7
    PUSH EBX                            ; 00553eec
    CALL FUN_0056445f                   ; 00553eed
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 00553ef2
    PUSH EAX                            ; 00553ef5
    CALL FUN_00564486                   ; 00553ef6
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 00553efb
    MOV EAX,EBX                         ; 00553efe
    POP EBX                             ; 00553f00
    RET                                 ; 00553f01
    PUSH EAX                            ; 00553f02
        ;   Label: LAB_00553f02
    CALL FUN_00564494                   ; 00553f03
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 00553f08
    MOV EAX,EBX                         ; 00553f0b
    POP EBX                             ; 00553f0d
    RET                                 ; 00553f0e

