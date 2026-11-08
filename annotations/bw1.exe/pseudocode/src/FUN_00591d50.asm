; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00591d50(undefined4 param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_strangerCannotDie_005f71ec
;   undefined4 DAT_0061b4d0
;
; Called Functions:
;   FUN_00431c30
;   FUN_004a6c30
;
; *****************************************************************************

section .text

    PUSH 0x5f71ec                       ; 00591d50 | = "strangerCannotDie"
        ;   Label: FUN_00591d50
    MOV EDX,dword ptr [0x0061b4d0]      ; 00591d55 | DAT_0061b4d0
    PUSH EDX                            ; 00591d5b
    CALL FUN_004a6c30                   ; 00591d5c
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; undefined FUN_004a6c30()
    ADD ESP,0x8                         ; 00591d61
    TEST EAX,EAX                        ; 00591d64
    JZ 0x00591d6b                       ; 00591d66
        ;   XREF to: 00591d6b (CONDITIONAL_JUMP)  ; LAB_00591d6b
    XOR EAX,EAX                         ; 00591d68
    RET                                 ; 00591d6a
    MOV ECX,dword ptr [ESP + 0x4]       ; 00591d6b
        ;   Label: LAB_00591d6b
    PUSH ECX                            ; 00591d6f
    CALL FUN_00431c30                   ; 00591d70
        ;   XREF to: 00431c30 (UNCONDITIONAL_CALL)  ; undefined FUN_00431c30()
    ADD ESP,0x4                         ; 00591d75
    RET                                 ; 00591d78

