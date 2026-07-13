; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0049a170(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0059de40
;
; Called Functions:
;   FUN_00435160
;   FUN_004b4800
;   FUN_0056445f
;   FUN_00564486
;   FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049a170
        ;   Label: FUN_0049a170
    MOV EBX,dword ptr [ESP + 0x8]       ; 0049a171
    TEST byte ptr [ESP + 0xc],0x4       ; 0049a175
    JNZ 0x0049a1ad                      ; 0049a17a
        ;   XREF to: 0049a1ad (CONDITIONAL_JUMP)  ; LAB_0049a1ad
    PUSH 0x0                            ; 0049a17c
    ADD EBX,0x1fa7c                     ; 0049a17e
    PUSH EBX                            ; 0049a184
    CALL FUN_00435160                   ; 0049a185
        ;   XREF to: 00435160 (UNCONDITIONAL_CALL)  ; undefined FUN_00435160()
    ADD ESP,0x8                         ; 0049a18a
    PUSH 0x1                            ; 0049a18d
    LEA EBX,[EAX + 0xfffe0584]          ; 0049a18f
    PUSH EBX                            ; 0049a195
    CALL FUN_004b4800                   ; 0049a196
        ;   XREF to: 004b4800 (UNCONDITIONAL_CALL)  ; undefined FUN_004b4800()
    ADD ESP,0x8                         ; 0049a19b
    MOV DL,byte ptr [ESP + 0xc]         ; 0049a19e
    MOV EBX,EAX                         ; 0049a1a2
    TEST DL,0x2                         ; 0049a1a4
    JNZ 0x0049a1c8                      ; 0049a1a7
        ;   XREF to: 0049a1c8 (CONDITIONAL_JUMP)  ; LAB_0049a1c8
    MOV EAX,EBX                         ; 0049a1a9
    POP EBX                             ; 0049a1ab
    RET                                 ; 0049a1ac
    PUSH 0x59de40                       ; 0049a1ad | DAT_0059de40
        ;   Label: LAB_0049a1ad
    PUSH EBX                            ; 0049a1b2
    CALL FUN_0056445f                   ; 0049a1b3
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 0049a1b8
    PUSH EAX                            ; 0049a1bb
    CALL FUN_00564486                   ; 0049a1bc
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 0049a1c1
    MOV EAX,EBX                         ; 0049a1c4
    POP EBX                             ; 0049a1c6
    RET                                 ; 0049a1c7
    PUSH EAX                            ; 0049a1c8
        ;   Label: LAB_0049a1c8
    CALL FUN_00564494                   ; 0049a1c9
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 0049a1ce
    MOV EAX,EBX                         ; 0049a1d1
    POP EBX                             ; 0049a1d3
    RET                                 ; 0049a1d4

