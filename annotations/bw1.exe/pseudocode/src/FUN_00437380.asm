; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_00437380(undefined4 param_1,byte *param_2,uint param_3,int param_4)
;
;
; Called Functions:
;   FUN_00437400
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00437380
        ;   Label: FUN_00437380
    SUB ESP,0x100                       ; 00437381
    MOV EBX,dword ptr [ESP + 0x110]     ; 00437387
    MOV EAX,ESP                         ; 0043738e
    PUSH EAX                            ; 00437390
    MOV EDX,dword ptr [ESP + 0x10c]     ; 00437391
    PUSH EDX                            ; 00437398
    CALL FUN_00437400                   ; 00437399
        ;   XREF to: 00437400 (UNCONDITIONAL_CALL)  ; undefined FUN_00437400()
    ADD ESP,0x8                         ; 0043739e
    MOV ECX,dword ptr [ESP + 0x114]     ; 004373a1
    TEST ECX,ECX                        ; 004373a8
    JL 0x004373b4                       ; 004373aa
        ;   XREF to: 004373b4 (CONDITIONAL_JUMP)  ; LAB_004373b4
    CMP ECX,0x100                       ; 004373ac
    JL 0x004373e8                       ; 004373b2
        ;   XREF to: 004373e8 (CONDITIONAL_JUMP)  ; LAB_004373e8
    XOR EDX,EDX                         ; 004373b4
        ;   Label: LAB_004373b4
    TEST EBX,EBX                        ; 004373b6
    JBE 0x004373e0                      ; 004373b8
        ;   XREF to: 004373e0 (CONDITIONAL_JUMP)  ; LAB_004373e0
    MOV EAX,dword ptr [ESP + 0x10c]     ; 004373ba
    XOR ECX,ECX                         ; 004373c1
        ;   Label: LAB_004373c1
    MOV CL,byte ptr [EAX]               ; 004373c3
    INC EAX                             ; 004373c5
    MOV CL,byte ptr [ESP + ECX*0x1]     ; 004373c6
    INC EDX                             ; 004373c9
    MOV byte ptr [EAX + -0x1],CL        ; 004373ca
    CMP EDX,EBX                         ; 004373cd
    JC 0x004373c1                       ; 004373cf
        ;   XREF to: 004373c1 (CONDITIONAL_JUMP)  ; LAB_004373c1
    LEA EAX,[EAX]                       ; 004373d1
    LEA EDX,[EDX]                       ; 004373d7
    LEA EAX,[EAX]                       ; 004373dd
    ADD ESP,0x100                       ; 004373e0
        ;   Label: LAB_004373e0
    POP EBX                             ; 004373e6
    RET                                 ; 004373e7
    MOV DL,byte ptr [ESP + 0x114]       ; 004373e8
        ;   Label: LAB_004373e8
    MOV byte ptr [ESP + ECX*0x1],DL     ; 004373ef
    JMP 0x004373b4                      ; 004373f2
        ;   XREF to: 004373b4 (UNCONDITIONAL_JUMP)  ; LAB_004373b4

