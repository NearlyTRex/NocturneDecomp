; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040cf00(undefined4 param_1,undefined1 *param_2,int param_3)
;
;
; XREF[2]:
;   FUN_0040cf40 at 0040cf4c
;   FUN_0040cf60 at 0040cf6c
;
; Called Functions:
;   FUN_0040ce20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040cf00
        ;   Label: FUN_0040cf00
    PUSH ESI                            ; 0040cf01
    PUSH EDI                            ; 0040cf02
    MOV EDI,dword ptr [ESP + 0x10]      ; 0040cf03
    MOV ESI,dword ptr [ESP + 0x18]      ; 0040cf07
    MOV EBX,dword ptr [ESP + 0x14]      ; 0040cf0b
    TEST ESI,ESI                        ; 0040cf0f
    JLE 0x0040cf30                      ; 0040cf11
        ;   XREF to: 0040cf30 (CONDITIONAL_JUMP)  ; LAB_0040cf30
    XOR EAX,EAX                         ; 0040cf13
        ;   Label: LAB_0040cf13
    MOV AL,byte ptr [EBX]               ; 0040cf15
    PUSH EAX                            ; 0040cf17
    PUSH EDI                            ; 0040cf18
    INC EBX                             ; 0040cf19
    DEC ESI                             ; 0040cf1a
    CALL FUN_0040ce20                   ; 0040cf1b
        ;   XREF to: 0040ce20 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce20()
    ADD ESP,0x8                         ; 0040cf20
    TEST ESI,ESI                        ; 0040cf23
    JG 0x0040cf13                       ; 0040cf25
        ;   XREF to: 0040cf13 (CONDITIONAL_JUMP)  ; LAB_0040cf13
    LEA EAX,[EAX]                       ; 0040cf27
    LEA EDX,[EDX]                       ; 0040cf2d
    POP EDI                             ; 0040cf30
        ;   Label: LAB_0040cf30
    POP ESI                             ; 0040cf31
    POP EBX                             ; 0040cf32
    RET                                 ; 0040cf33

