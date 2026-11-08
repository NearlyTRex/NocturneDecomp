; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00580380(int param_1,LPCSTR param_2)
;
;
; Referenced Globals:
;   void* PTR_GetTextExtentPoint32A_005b341c = 001b3850
;
; Called Functions:
;   FUN_00580110
;   GetTextExtentPoint32A
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00580380
        ;   Label: FUN_00580380
    SUB ESP,0x8                         ; 00580381
    MOV EBX,dword ptr [ESP + 0x14]      ; 00580384
    PUSH -0x1                           ; 00580388
    PUSH -0x1                           ; 0058038a
    MOV EDX,dword ptr [ESP + 0x18]      ; 0058038c
    PUSH EDX                            ; 00580390
    CALL FUN_00580110                   ; 00580391
        ;   XREF to: 00580110 (UNCONDITIONAL_CALL)  ; undefined FUN_00580110()
    ADD ESP,0xc                         ; 00580396
    TEST EAX,EAX                        ; 00580399
    JNZ 0x005803a2                      ; 0058039b
        ;   XREF to: 005803a2 (CONDITIONAL_JUMP)  ; LAB_005803a2
    ADD ESP,0x8                         ; 0058039d
    POP EBX                             ; 005803a0
    RET                                 ; 005803a1
    PUSH EDI                            ; 005803a2
        ;   Label: LAB_005803a2
    MOV EDI,EBX                         ; 005803a3
    SUB ECX,ECX                         ; 005803a5
    DEC ECX                             ; 005803a7
    XOR EAX,EAX                         ; 005803a8
    SCASB.REPNE ES:EDI                  ; 005803aa
    NOT ECX                             ; 005803ac
    DEC ECX                             ; 005803ae
    LEA EAX,[ESP + 0x4]                 ; 005803af
    PUSH EAX                            ; 005803b3
    PUSH ECX                            ; 005803b4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005803b5
    PUSH EBX                            ; 005803b9
    MOV ECX,dword ptr [EAX + 0x6a48]    ; 005803ba
    PUSH ECX                            ; 005803c0
    CALL dword ptr CS:[0x5b341c]        ; 005803c1 | PTR_GetTextExtentPoint32A_005b341c
    TEST EAX,EAX                        ; 005803c8
    JNZ 0x005803d0                      ; 005803ca
        ;   XREF to: 005803d0 (CONDITIONAL_JUMP)  ; LAB_005803d0
    MOV dword ptr [ESP + 0x4],EAX       ; 005803cc
    MOV EAX,dword ptr [ESP + 0x4]       ; 005803d0
        ;   Label: LAB_005803d0
    POP EDI                             ; 005803d4
    ADD ESP,0x8                         ; 005803d5
    POP EBX                             ; 005803d8
    RET                                 ; 005803d9

