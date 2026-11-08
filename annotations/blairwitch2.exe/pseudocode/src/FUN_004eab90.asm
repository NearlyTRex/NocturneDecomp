; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004eab90(int param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_CHero_005dca3b
;
; Called Functions:
;   FUN_0040c840
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004eab90
        ;   Label: FUN_004eab90
    CMP dword ptr [EAX + 0x6e4],0x0     ; 004eab94
    JNZ 0x004eaba3                      ; 004eab9b
        ;   XREF to: 004eaba3 (CONDITIONAL_JUMP)  ; LAB_004eaba3
    MOV EAX,0x3                         ; 004eab9d
        ;   Label: LAB_004eab9d
    RET                                 ; 004eaba2
    PUSH 0x5dca3b                       ; 004eaba3 | = "CHero"
        ;   Label: LAB_004eaba3
    MOV ECX,dword ptr [ESP + 0xc]       ; 004eaba8
    PUSH ECX                            ; 004eabac
    CALL FUN_0040c840                   ; 004eabad
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 004eabb2
    TEST EAX,EAX                        ; 004eabb5
    JZ 0x004eab9d                       ; 004eabb7
        ;   XREF to: 004eab9d (CONDITIONAL_JUMP)  ; LAB_004eab9d
    MOV EAX,0x2                         ; 004eabb9
    RET                                 ; 004eabbe

