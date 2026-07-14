; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_1000f8b0(int param_1,undefined4 param_2,int param_3)
;
;
; XREF[1]:
;   FUN_1000e350 at 1000e637
;
; Called Functions:
;   FUN_1000f8f0
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0xc]       ; 1000f8b0
        ;   Label: FUN_1000f8b0
    PUSH ESI                            ; 1000f8b4
    MOV EAX,dword ptr [ESP + 0x8]       ; 1000f8b5
    CMP ECX,0xa                         ; 1000f8b9
    JNZ 0x1000f8d7                      ; 1000f8bc
        ;   XREF to: 1000f8d7 (CONDITIONAL_JUMP)  ; LAB_1000f8d7
    TEST EAX,EAX                        ; 1000f8be
    JGE 0x1000f8d7                      ; 1000f8c0
        ;   XREF to: 1000f8d7 (CONDITIONAL_JUMP)  ; LAB_1000f8d7
    MOV ESI,dword ptr [ESP + 0xc]       ; 1000f8c2
    PUSH 0x1                            ; 1000f8c6
    PUSH ECX                            ; 1000f8c8
    PUSH ESI                            ; 1000f8c9
    PUSH EAX                            ; 1000f8ca
    CALL FUN_1000f8f0                   ; 1000f8cb
        ;   XREF to: 1000f8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_1000f8f0()
    ADD ESP,0x10                        ; 1000f8d0
    MOV EAX,ESI                         ; 1000f8d3
    POP ESI                             ; 1000f8d5
    RET                                 ; 1000f8d6
    MOV ESI,dword ptr [ESP + 0xc]       ; 1000f8d7
        ;   Label: LAB_1000f8d7
    PUSH 0x0                            ; 1000f8db
    PUSH ECX                            ; 1000f8dd
    PUSH ESI                            ; 1000f8de
    PUSH EAX                            ; 1000f8df
    CALL FUN_1000f8f0                   ; 1000f8e0
        ;   XREF to: 1000f8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_1000f8f0()
    ADD ESP,0x10                        ; 1000f8e5
    MOV EAX,ESI                         ; 1000f8e8
    POP ESI                             ; 1000f8ea
    RET                                 ; 1000f8eb

