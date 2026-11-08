; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004594a0(int param_1,int param_2)
;
;
; XREF[3]:
;   FUN_004591f0 at 004592bb
;   FUN_004d3b20 at 004d3ba0
;   FUN_00521880 at 00521991
;
; Called Functions:
;   FUN_0040c790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004594a0
        ;   Label: FUN_004594a0
    PUSH ESI                            ; 004594a1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004594a2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004594a6
    CMP dword ptr [EBX + 0x184],0x0     ; 004594aa
    JNZ 0x004594cc                      ; 004594b1
        ;   XREF to: 004594cc (CONDITIONAL_JUMP)  ; LAB_004594cc
    CMP byte ptr [EBX + 0x15c],0x0      ; 004594b3
    JNZ 0x004594d1                      ; 004594ba
        ;   XREF to: 004594d1 (CONDITIONAL_JUMP)  ; LAB_004594d1
    CMP ESI,dword ptr [EBX + 0x158]     ; 004594bc
    JNZ 0x004594cc                      ; 004594c2
        ;   XREF to: 004594cc (CONDITIONAL_JUMP)  ; LAB_004594cc
    MOV EAX,0x1                         ; 004594c4
    POP ESI                             ; 004594c9
    POP EBX                             ; 004594ca
    RET                                 ; 004594cb
    XOR EAX,EAX                         ; 004594cc
        ;   Label: LAB_004594cc
    POP ESI                             ; 004594ce
    POP EBX                             ; 004594cf
    RET                                 ; 004594d0
    LEA EAX,[EBX + 0x15c]               ; 004594d1
        ;   Label: LAB_004594d1
    PUSH EAX                            ; 004594d7
    PUSH ESI                            ; 004594d8
    CALL FUN_0040c790                   ; 004594d9
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c790()
    ADD ESP,0x8                         ; 004594de
    TEST EAX,EAX                        ; 004594e1
    JZ 0x004594cc                       ; 004594e3
        ;   XREF to: 004594cc (CONDITIONAL_JUMP)  ; LAB_004594cc
    MOV EAX,0x1                         ; 004594e5
    MOV dword ptr [EBX + 0x158],ESI     ; 004594ea
    POP ESI                             ; 004594f0
    POP EBX                             ; 004594f1
    RET                                 ; 004594f2

