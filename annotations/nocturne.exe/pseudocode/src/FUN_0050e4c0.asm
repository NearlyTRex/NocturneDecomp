; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0050e4c0(int param_1,int param_2,undefined4 param_3)
;
;
; XREF[3]:
;   FUN_0047ac50 at 0047c6f5
;   FUN_0049f930 at 004a023a
;   FUN_0050e510 at 0050e546
;
; Called Functions:
;   FUN_00446740
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x8]       ; 0050e4c0
        ;   Label: FUN_0050e4c0
    LEA EAX,[ECX*0x4 + 0x0]             ; 0050e4c4
    SUB EAX,ECX                         ; 0050e4cb
    SHL EAX,0x2                         ; 0050e4cd
    ADD EAX,ECX                         ; 0050e4d0
    MOV EDX,dword ptr [ESP + 0x4]       ; 0050e4d2
    SHL EAX,0x5                         ; 0050e4d6
    ADD EAX,EDX                         ; 0050e4d9
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050e4db
    MOV dword ptr [EAX + 0x148],EDX     ; 0050e4df
    MOV EAX,dword ptr [ESP + 0x4]       ; 0050e4e5
    CMP ECX,dword ptr [EAX + 0x15aabc]  ; 0050e4e9
    JZ 0x0050e4f2                       ; 0050e4ef
        ;   XREF to: 0050e4f2 (CONDITIONAL_JUMP)  ; LAB_0050e4f2
    RET                                 ; 0050e4f1
    PUSH EDX                            ; 0050e4f2
        ;   Label: LAB_0050e4f2
    PUSH 0x1fb8508                      ; 0050e4f3
    CALL FUN_00446740                   ; 0050e4f8
        ;   XREF to: 00446740 (UNCONDITIONAL_CALL)  ; undefined FUN_00446740()
    ADD ESP,0x8                         ; 0050e4fd
    RET                                 ; 0050e500

