; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004a79a0(int param_1)
;
;
; XREF[1]:
;   FUN_00409db0 at 00409db5
;
; Referenced Globals:
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_01caf628
;   undefined4 DAT_01fb331c
;   undefined4 DAT_01fb3320
;
; Called Functions:
;   FUN_0040c8f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a79a0
        ;   Label: FUN_004a79a0
    PUSH ESI                            ; 004a79a1
    PUSH EDI                            ; 004a79a2
    PUSH EBP                            ; 004a79a3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004a79a4
    XOR ESI,ESI                         ; 004a79a8
    XOR EBX,EBX                         ; 004a79aa
    MOV EAX,[0x0061b5a8]                ; 004a79ac | DAT_0061b5a8
        ;   Label: LAB_004a79ac
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 004a79b1 | DAT_01fb331c
    JL 0x004a79c6                       ; 004a79b7
        ;   XREF to: 004a79c6 (CONDITIONAL_JUMP)  ; LAB_004a79c6
    XOR EAX,EAX                         ; 004a79b9
    POP EBP                             ; 004a79bb
    POP EDI                             ; 004a79bc
    POP ESI                             ; 004a79bd
    POP EBX                             ; 004a79be
    RET                                 ; 004a79bf
    INC EBX                             ; 004a79c0
        ;   Label: LAB_004a79c0
    ADD ESI,0x4                         ; 004a79c1
    JMP 0x004a79ac                      ; 004a79c4
        ;   XREF to: 004a79ac (UNCONDITIONAL_JUMP)  ; LAB_004a79ac
    MOV ECX,dword ptr [0x01caf628]      ; 004a79c6 | DAT_01caf628
        ;   Label: LAB_004a79c6
    PUSH ECX                            ; 004a79cc
    MOV EBP,dword ptr [ESI + EAX*0x1 + 0x14d168] ; 004a79cd | DAT_01fb3320
    PUSH EBP                            ; 004a79d4
    CALL FUN_0040c8f0                   ; 004a79d5
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8f0()
    ADD ESP,0x8                         ; 004a79da
    TEST EAX,EAX                        ; 004a79dd
    JZ 0x004a79c0                       ; 004a79df
        ;   XREF to: 004a79c0 (CONDITIONAL_JUMP)  ; LAB_004a79c0
    CMP EDI,dword ptr [EAX + 0x2b64]    ; 004a79e1
    JNZ 0x004a79c0                      ; 004a79e7
        ;   XREF to: 004a79c0 (CONDITIONAL_JUMP)  ; LAB_004a79c0
    POP EBP                             ; 004a79e9
    POP EDI                             ; 004a79ea
    POP ESI                             ; 004a79eb
    POP EBX                             ; 004a79ec
    RET                                 ; 004a79ed

