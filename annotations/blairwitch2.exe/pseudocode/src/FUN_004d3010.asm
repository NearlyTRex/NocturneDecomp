; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004d3010(int param_1)
;
;
; Called Functions:
;   FUN_005035c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004d3010
        ;   Label: FUN_004d3010
    CMP dword ptr [EAX + 0x246f8],0x0   ; 004d3014
    JZ 0x004d302d                       ; 004d301b
        ;   XREF to: 004d302d (CONDITIONAL_JUMP)  ; LAB_004d302d
    MOV ECX,dword ptr [EAX + 0x246fc]   ; 004d301d
    CMP ECX,0x3                         ; 004d3023
    JZ 0x004d302d                       ; 004d3026
        ;   XREF to: 004d302d (CONDITIONAL_JUMP)  ; LAB_004d302d
    CMP ECX,0x4                         ; 004d3028
    JNZ 0x004d3030                      ; 004d302b
        ;   XREF to: 004d3030 (CONDITIONAL_JUMP)  ; LAB_004d3030
    XOR EAX,EAX                         ; 004d302d
        ;   Label: LAB_004d302d
    RET                                 ; 004d302f
    ADD EAX,0x2b4                       ; 004d3030
        ;   Label: LAB_004d3030
    PUSH EAX                            ; 004d3035
    CALL FUN_005035c0                   ; 004d3036
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004d303b
    ADD ESP,0x4                         ; 004d303e
    CMP EAX,0xa                         ; 004d3041
    JZ 0x004d302d                       ; 004d3044
        ;   XREF to: 004d302d (CONDITIONAL_JUMP)  ; LAB_004d302d
    LEA EAX,[EAX]                       ; 004d3046
    LEA EDX,[EDX]                       ; 004d304c
    MOV EAX,0x1                         ; 004d3050
        ;   Label: LAB_004d3050
    RET                                 ; 004d3055

