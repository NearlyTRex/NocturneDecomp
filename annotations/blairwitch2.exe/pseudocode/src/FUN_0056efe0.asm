; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0056efe0(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; Called Functions:
;   FUN_004cea50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056efe0
        ;   Label: FUN_0056efe0
    PUSH ESI                            ; 0056efe1
    PUSH EBP                            ; 0056efe2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0056efe3
    CMP dword ptr [EBX + 0x25608],0x0   ; 0056efe7
    JNZ 0x0056f07d                      ; 0056efee
        ;   XREF to: 0056f07d (CONDITIONAL_JUMP)  ; LAB_0056f07d
    CMP dword ptr [EBX + 0x25604],0x0   ; 0056eff4
    JNZ 0x0056f07d                      ; 0056effb
        ;   XREF to: 0056f07d (CONDITIONAL_JUMP)  ; LAB_0056f07d
    MOV ESI,dword ptr [EBX + 0x256a4]   ; 0056f001
    TEST ESI,ESI                        ; 0056f007
    JZ 0x0056f010                       ; 0056f009
        ;   XREF to: 0056f010 (CONDITIONAL_JUMP)  ; LAB_0056f010
    CMP ESI,0x3                         ; 0056f00b
    JNZ 0x0056f07d                      ; 0056f00e
        ;   XREF to: 0056f07d (CONDITIONAL_JUMP)  ; LAB_0056f07d
    MOV EBP,dword ptr [ESP + 0x18]      ; 0056f010
        ;   Label: LAB_0056f010
    PUSH EBP                            ; 0056f014
    MOV EAX,dword ptr [ESP + 0x18]      ; 0056f015
    PUSH EAX                            ; 0056f019
    PUSH EBX                            ; 0056f01a
    CALL FUN_004cea50                   ; 0056f01b
        ;   XREF to: 004cea50 (UNCONDITIONAL_CALL)  ; undefined FUN_004cea50()
    ADD ESP,0xc                         ; 0056f020
    MOV ESI,EAX                         ; 0056f023
    TEST EAX,EAX                        ; 0056f025
    JZ 0x0056f077                       ; 0056f027
        ;   XREF to: 0056f077 (CONDITIONAL_JUMP)  ; LAB_0056f077
    MOV EDX,dword ptr [EBX + 0x25698]   ; 0056f029
    CMP EDX,dword ptr [EBX + 0x2620]    ; 0056f02f
    JZ 0x0056f04b                       ; 0056f035
        ;   XREF to: 0056f04b (CONDITIONAL_JUMP)  ; LAB_0056f04b
    PUSH 0x0                            ; 0056f037
    PUSH 0x0                            ; 0056f039
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0056f03b
    PUSH EBX                            ; 0056f041
    CALL dword ptr [EAX + 0x130]        ; 0056f042
    ADD ESP,0xc                         ; 0056f048
    MOV ECX,dword ptr [EBX + 0x25698]   ; 0056f04b
        ;   Label: LAB_0056f04b
    CMP ECX,dword ptr [EBX + 0x2698]    ; 0056f051
    JZ 0x0056f06d                       ; 0056f057
        ;   XREF to: 0056f06d (CONDITIONAL_JUMP)  ; LAB_0056f06d
    PUSH 0x0                            ; 0056f059
    PUSH 0x1                            ; 0056f05b
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0056f05d
    PUSH EBX                            ; 0056f063
    CALL dword ptr [EAX + 0x130]        ; 0056f064
    ADD ESP,0xc                         ; 0056f06a
    MOV dword ptr [EBX + 0x25740],0x0   ; 0056f06d
        ;   Label: LAB_0056f06d
    MOV EAX,ESI                         ; 0056f077
        ;   Label: LAB_0056f077
    POP EBP                             ; 0056f079
    POP ESI                             ; 0056f07a
    POP EBX                             ; 0056f07b
    RET                                 ; 0056f07c
    XOR EAX,EAX                         ; 0056f07d
        ;   Label: LAB_0056f07d
    POP EBP                             ; 0056f07f
    POP ESI                             ; 0056f080
    POP EBX                             ; 0056f081
    RET                                 ; 0056f082

