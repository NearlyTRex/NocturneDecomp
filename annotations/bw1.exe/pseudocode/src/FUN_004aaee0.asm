; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004aaee0(int *param_1)
;
;
; XREF[1]:
;   FUN_004aaf30 at 004aaf35
;
; Referenced Globals:
;   undefined4 DAT_0061b4d0
;
; Called Functions:
;   FUN_004a6c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aaee0
        ;   Label: FUN_004aaee0
    PUSH ESI                            ; 004aaee1
    PUSH EDI                            ; 004aaee2
    PUSH EBP                            ; 004aaee3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004aaee4
    MOV EDX,dword ptr [EDI]             ; 004aaee8
    XOR EBX,EBX                         ; 004aaeea
    TEST EDX,EDX                        ; 004aaeec
    JLE 0x004aaf11                      ; 004aaeee
        ;   XREF to: 004aaf11 (CONDITIONAL_JUMP)  ; LAB_004aaf11
    LEA ESI,[EDI + 0x4]                 ; 004aaef0
    PUSH ESI                            ; 004aaef3
        ;   Label: LAB_004aaef3
    MOV EBP,dword ptr [0x0061b4d0]      ; 004aaef4 | DAT_0061b4d0
    PUSH EBP                            ; 004aaefa
    CALL FUN_004a6c30                   ; 004aaefb
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; undefined FUN_004a6c30()
    ADD ESP,0x8                         ; 004aaf00
    TEST EAX,EAX                        ; 004aaf03
    JNZ 0x004aaf1b                      ; 004aaf05
        ;   XREF to: 004aaf1b (CONDITIONAL_JUMP)  ; LAB_004aaf1b
    INC EBX                             ; 004aaf07
    MOV ECX,dword ptr [EDI]             ; 004aaf08
    ADD ESI,0x64                        ; 004aaf0a
    CMP EBX,ECX                         ; 004aaf0d
    JL 0x004aaef3                       ; 004aaf0f
        ;   XREF to: 004aaef3 (CONDITIONAL_JUMP)  ; LAB_004aaef3
    MOV EAX,0xffffffff                  ; 004aaf11
        ;   Label: LAB_004aaf11
    POP EBP                             ; 004aaf16
    POP EDI                             ; 004aaf17
    POP ESI                             ; 004aaf18
    POP EBX                             ; 004aaf19
    RET                                 ; 004aaf1a
    MOV EAX,EBX                         ; 004aaf1b
        ;   Label: LAB_004aaf1b
    POP EBP                             ; 004aaf1d
    POP EDI                             ; 004aaf1e
    POP ESI                             ; 004aaf1f
    POP EBX                             ; 004aaf20
    RET                                 ; 004aaf21

