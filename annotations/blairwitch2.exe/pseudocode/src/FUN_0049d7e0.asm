; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049d7e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)
;
;
; XREF[3]:
;   FUN_004864d0 at 004866ae
;   FUN_004e3b10 at 004e3d9c
;   FUN_0053fb10 at 0053fcee
;
; Referenced Globals:
;   undefined4 DAT_005f64fc
;   undefined4 DAT_01c965dc
;
; Called Functions:
;   FUN_00497660
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0049d7e0
        ;   Label: FUN_0049d7e0
    MOV EDX,dword ptr [0x01c965dc]      ; 0049d7e1 | DAT_01c965dc
    CMP EDX,0x40                        ; 0049d7e7
    JL 0x0049d7ee                       ; 0049d7ea
        ;   XREF to: 0049d7ee (CONDITIONAL_JUMP)  ; LAB_0049d7ee
    POP EBP                             ; 0049d7ec
    RET                                 ; 0049d7ed
    PUSH EDI                            ; 0049d7ee
        ;   Label: LAB_0049d7ee
    PUSH ESI                            ; 0049d7ef
    PUSH EBX                            ; 0049d7f0
    PUSH dword ptr [ESP + 0x30]         ; 0049d7f1
    MOV ECX,dword ptr [ESP + 0x30]      ; 0049d7f5
    PUSH dword ptr [0x005f64fc]         ; 0049d7f9 | DAT_005f64fc
    PUSH ECX                            ; 0049d7ff
    MOV EBX,dword ptr [ESP + 0x34]      ; 0049d800
    PUSH EBX                            ; 0049d804
    MOV ESI,dword ptr [ESP + 0x34]      ; 0049d805
    PUSH ESI                            ; 0049d809
    PUSH 0x0                            ; 0049d80a
    MOV EDI,dword ptr [ESP + 0x34]      ; 0049d80c
    PUSH 0x0                            ; 0049d810
    MOV EBP,dword ptr [ESP + 0x34]      ; 0049d812
    PUSH dword ptr [ESP + 0x3c]         ; 0049d816
    MOV EAX,EDX                         ; 0049d81a
    PUSH EDI                            ; 0049d81c
    SHL EAX,0x6                         ; 0049d81d
    PUSH EBP                            ; 0049d820
    ADD EAX,0x1c965e0                   ; 0049d821
    PUSH EAX                            ; 0049d826
    CALL FUN_00497660                   ; 0049d827
        ;   XREF to: 00497660 (UNCONDITIONAL_CALL)  ; undefined FUN_00497660()
    MOV EAX,[0x01c965dc]                ; 0049d82c | DAT_01c965dc
    INC EAX                             ; 0049d831
    ADD ESP,0x2c                        ; 0049d832
    MOV [0x01c965dc],EAX                ; 0049d835 | DAT_01c965dc
    POP EBX                             ; 0049d83a
    POP ESI                             ; 0049d83b
    POP EDI                             ; 0049d83c
    POP EBP                             ; 0049d83d
    RET                                 ; 0049d83e

