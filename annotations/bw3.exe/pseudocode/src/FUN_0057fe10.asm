; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0057fe10(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined1* PTR_FUN_005e6534 = 0057fe10
;   undefined4 DAT_005e6550
;
; Called Functions:
;   FUN_00509bb0
;   FUN_00580300
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057fe10
        ;   Label: FUN_0057fe10
    MOV EBX,dword ptr [ESP + 0x8]       ; 0057fe11
    TEST byte ptr [ESP + 0xc],0x4       ; 0057fe15
    JNZ 0x0057fe49                      ; 0057fe1a
        ;   XREF to: 0057fe49 (CONDITIONAL_JUMP)  ; LAB_0057fe49
    PUSH EBX                            ; 0057fe1c
    MOV dword ptr [EBX + 0x6a44],0x5e6534 ; 0057fe1d | PTR_FUN_005e6534
    CALL FUN_00580300                   ; 0057fe27
        ;   XREF to: 00580300 (UNCONDITIONAL_CALL)  ; undefined FUN_00580300()
    ADD ESP,0x4                         ; 0057fe2c
    PUSH 0x1                            ; 0057fe2f
    PUSH EBX                            ; 0057fe31
    CALL FUN_00509bb0                   ; 0057fe32
        ;   XREF to: 00509bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00509bb0()
    ADD ESP,0x8                         ; 0057fe37
    MOV DL,byte ptr [ESP + 0xc]         ; 0057fe3a
    MOV EBX,EAX                         ; 0057fe3e
    TEST DL,0x2                         ; 0057fe40
    JNZ 0x0057fe64                      ; 0057fe43
        ;   XREF to: 0057fe64 (CONDITIONAL_JUMP)  ; LAB_0057fe64
    MOV EAX,EBX                         ; 0057fe45
    POP EBX                             ; 0057fe47
    RET                                 ; 0057fe48
    PUSH 0x5e6550                       ; 0057fe49 | DAT_005e6550
        ;   Label: LAB_0057fe49
    PUSH EBX                            ; 0057fe4e
    CALL FUN_005a308f                   ; 0057fe4f
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 0057fe54
    PUSH EAX                            ; 0057fe57
    CALL FUN_005a30b6                   ; 0057fe58
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 0057fe5d
    MOV EAX,EBX                         ; 0057fe60
    POP EBX                             ; 0057fe62
    RET                                 ; 0057fe63
    PUSH EAX                            ; 0057fe64
        ;   Label: LAB_0057fe64
    CALL FUN_005a30c4                   ; 0057fe65
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 0057fe6a
    MOV EAX,EBX                         ; 0057fe6d
    POP EBX                             ; 0057fe6f
    RET                                 ; 0057fe70

