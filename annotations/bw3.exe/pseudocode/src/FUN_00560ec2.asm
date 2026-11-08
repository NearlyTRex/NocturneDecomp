; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_00560ec2(int param_1,int param_2,uint param_3,uint param_4)
;
;
; XREF[1]:
;   FUN_00412c50 at 00412d0f
;
; Referenced Globals:
;   undefined8 DAT_00604d1c
;   undefined4 DAT_00604d24
;   undefined4 DAT_01c60dac
;   undefined4 DAT_01c6cee8
;
; Called Functions:
;   FUN_00566230
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00560ec2
        ;   Label: FUN_00560ec2
    MOV EBP,ESP                         ; 00560ec3
    PUSH ESI                            ; 00560ec5
    PUSH EDI                            ; 00560ec6
    CMP dword ptr [0x01c6cee8],0x0      ; 00560ec7 | DAT_01c6cee8
    JZ 0x00560ee9                       ; 00560ece
        ;   XREF to: 00560ee9 (CONDITIONAL_JUMP)  ; LAB_00560ee9
    PUSH dword ptr [EBP + 0x14]         ; 00560ed0
    PUSH dword ptr [EBP + 0x10]         ; 00560ed3
    PUSH dword ptr [EBP + 0xc]          ; 00560ed6
    PUSH dword ptr [EBP + 0x8]          ; 00560ed9
    CALL FUN_00566230                   ; 00560edc
        ;   XREF to: 00566230 (UNCONDITIONAL_CALL)  ; undefined FUN_00566230()
    POP EAX                             ; 00560ee1
    POP EAX                             ; 00560ee2
    POP EAX                             ; 00560ee3
    POP EAX                             ; 00560ee4
    POP EDI                             ; 00560ee5
    POP ESI                             ; 00560ee6
    LEAVE                               ; 00560ee7
    RET                                 ; 00560ee8
    PUSHAD                              ; 00560ee9
        ;   Label: LAB_00560ee9
    CLD                                 ; 00560eea
    PUSH DS                             ; 00560eeb
    POP ES                              ; 00560eec
    MOV ECX,dword ptr [EBP + 0xc]       ; 00560eed
    MOV EBX,dword ptr [EBP + 0x10]      ; 00560ef0
    SUB ECX,dword ptr [EBP + 0x8]       ; 00560ef3
    MOV EAX,0x0                         ; 00560ef6
    INC ECX                             ; 00560efb
    MOV EDX,dword ptr [EBP + 0x8]       ; 00560efc
    SHL EDX,0x2                         ; 00560eff
    FLD double ptr [0x00604d1c]         ; 00560f02 | DAT_00604d1c
    PUSH ECX                            ; 00560f08
        ;   Label: LAB_00560f08
    MOV EDI,dword ptr [EBX*0x4 + 0x1c60dac] ; 00560f09 | DAT_01c60dac
    ADD EDI,EDX                         ; 00560f10
    AND EDI,0xfffffff8                  ; 00560f12
    SHR ECX,0x1                         ; 00560f15
    FST double ptr [EDI]                ; 00560f17
        ;   Label: LAB_00560f17
    ADD EDI,0x8                         ; 00560f19
    DEC ECX                             ; 00560f1c
    JGE 0x00560f17                      ; 00560f1d
        ;   XREF to: 00560f17 (CONDITIONAL_JUMP)  ; LAB_00560f17
    POP ECX                             ; 00560f1f
    INC EBX                             ; 00560f20
    CMP EBX,dword ptr [EBP + 0x14]      ; 00560f21
    JBE 0x00560f08                      ; 00560f24
        ;   XREF to: 00560f08 (CONDITIONAL_JUMP)  ; LAB_00560f08
    FSTP double ptr [0x00604d24]        ; 00560f26 | DAT_00604d24
    POPAD                               ; 00560f2c
    POP EDI                             ; 00560f2d
    POP ESI                             ; 00560f2e
    LEAVE                               ; 00560f2f
    RET                                 ; 00560f30

