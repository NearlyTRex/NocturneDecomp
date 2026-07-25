; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d98c0(int param_1,undefined4 param_2)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d98c0
        ;   Label: FUN_004d98c0
    PUSH ESI                            ; 004d98c1
    MOV ESI,dword ptr [ESP + 0x10]      ; 004d98c2
    MOV EBX,dword ptr [ESP + 0xc]       ; 004d98c6
    MOV EBX,dword ptr [EBX + 0x514]     ; 004d98ca
    TEST EBX,EBX                        ; 004d98d0
    JZ 0x004d98f0                       ; 004d98d2
        ;   XREF to: 004d98f0 (CONDITIONAL_JUMP)  ; LAB_004d98f0
    PUSH ESI                            ; 004d98d4
        ;   Label: LAB_004d98d4
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004d98d5
    PUSH EBX                            ; 004d98db
    CALL dword ptr [EAX + 0xc0]         ; 004d98dc
    MOV EBX,dword ptr [EBX + 0x144]     ; 004d98e2
    ADD ESP,0x8                         ; 004d98e8
    TEST EBX,EBX                        ; 004d98eb
    JNZ 0x004d98d4                      ; 004d98ed
        ;   XREF to: 004d98d4 (CONDITIONAL_JUMP)  ; LAB_004d98d4
    NOP                                 ; 004d98ef
    POP ESI                             ; 004d98f0
        ;   Label: LAB_004d98f0
    POP EBX                             ; 004d98f1
    RET                                 ; 004d98f2

