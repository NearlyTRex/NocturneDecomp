; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0058bdf0(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_0058b3f0 at 0058b634
;
; Called Functions:
;   FUN_0058bd50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058bdf0
        ;   Label: FUN_0058bdf0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0058bdf1
    MOV EDX,dword ptr [ESP + 0xc]       ; 0058bdf5
    PUSH EDX                            ; 0058bdf9
    PUSH EBX                            ; 0058bdfa
    CALL FUN_0058bd50                   ; 0058bdfb
        ;   XREF to: 0058bd50 (UNCONDITIONAL_CALL)  ; undefined FUN_0058bd50()
    ADD ESP,0x8                         ; 0058be00
    TEST EAX,EAX                        ; 0058be03
    JL 0x0058be25                       ; 0058be05
        ;   XREF to: 0058be25 (CONDITIONAL_JUMP)  ; LAB_0058be25
    SHL EAX,0x3                         ; 0058be07
    MOV EDX,EAX                         ; 0058be0a
    SHL EAX,0x4                         ; 0058be0c
    SUB EAX,EDX                         ; 0058be0f
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x25ac] ; 0058be11
    TEST EAX,EAX                        ; 0058be18
    JL 0x0058be25                       ; 0058be1a
        ;   XREF to: 0058be25 (CONDITIONAL_JUMP)  ; LAB_0058be25
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 0058be1c
    POP EBX                             ; 0058be23
    RET                                 ; 0058be24
    XOR EAX,EAX                         ; 0058be25
        ;   Label: LAB_0058be25
    POP EBX                             ; 0058be27
    RET                                 ; 0058be28

