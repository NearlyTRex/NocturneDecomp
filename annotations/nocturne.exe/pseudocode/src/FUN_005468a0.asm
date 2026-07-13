; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005468a0(int param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   string s_CHero_00596910
;
; Called Functions:
;   FUN_0040d7e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005468a0
        ;   Label: FUN_005468a0
    CMP dword ptr [EAX + 0x2d0],0x0     ; 005468a4
    JZ 0x005468b3                       ; 005468ab
        ;   XREF to: 005468b3 (CONDITIONAL_JUMP)  ; LAB_005468b3
    LEA EAX,[EAX]                       ; 005468ad
    PUSH 0x596910                       ; 005468b3 | = "CHero"
        ;   Label: LAB_005468b3
    MOV ECX,dword ptr [ESP + 0xc]       ; 005468b8
    PUSH ECX                            ; 005468bc
    CALL FUN_0040d7e0                   ; 005468bd
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d7e0()
    ADD ESP,0x8                         ; 005468c2
    TEST EAX,EAX                        ; 005468c5
    JZ 0x005468b2                       ; 005468c7
        ;   XREF to: 005468b2 (CONDITIONAL_JUMP)  ; LAB_005468b2
    MOV EAX,0x2                         ; 005468c9
    RET                                 ; 005468ce

