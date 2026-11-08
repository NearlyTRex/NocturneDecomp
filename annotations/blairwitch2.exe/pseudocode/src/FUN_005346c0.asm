; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005346c0(int *param_1,int param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_00489670 at 0048cd0d
;
; Called Functions:
;   FUN_00534640
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005346c0
        ;   Label: FUN_005346c0
    PUSH ESI                            ; 005346c1
    PUSH EDI                            ; 005346c2
    PUSH EBP                            ; 005346c3
    MOV EDI,dword ptr [ESP + 0x14]      ; 005346c4
    MOV EBP,dword ptr [ESP + 0x18]      ; 005346c8
    MOV EDX,dword ptr [EDI]             ; 005346cc
    XOR EBX,EBX                         ; 005346ce
    TEST EDX,EDX                        ; 005346d0
    JLE 0x005346eb                      ; 005346d2
        ;   XREF to: 005346eb (CONDITIONAL_JUMP)  ; LAB_005346eb
    MOV ESI,EDI                         ; 005346d4
    CMP EBP,dword ptr [ESI + 0x150]     ; 005346d6
        ;   Label: LAB_005346d6
    JZ 0x005346f0                       ; 005346dc
        ;   XREF to: 005346f0 (CONDITIONAL_JUMP)  ; LAB_005346f0
    INC EBX                             ; 005346de
        ;   Label: LAB_005346de
    MOV ECX,dword ptr [EDI]             ; 005346df
    ADD ESI,0x1a4                       ; 005346e1
    CMP EBX,ECX                         ; 005346e7
    JL 0x005346d6                       ; 005346e9
        ;   XREF to: 005346d6 (CONDITIONAL_JUMP)  ; LAB_005346d6
    POP EBP                             ; 005346eb
        ;   Label: LAB_005346eb
    POP EDI                             ; 005346ec
    POP ESI                             ; 005346ed
    POP EBX                             ; 005346ee
    RET                                 ; 005346ef
    PUSH dword ptr [ESP + 0x1c]         ; 005346f0
        ;   Label: LAB_005346f0
    PUSH EBX                            ; 005346f4
    PUSH EDI                            ; 005346f5
    CALL FUN_00534640                   ; 005346f6
        ;   XREF to: 00534640 (UNCONDITIONAL_CALL)  ; undefined FUN_00534640()
    ADD ESP,0xc                         ; 005346fb
    JMP 0x005346de                      ; 005346fe
        ;   XREF to: 005346de (UNCONDITIONAL_JUMP)  ; LAB_005346de

