; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00556be0(undefined4 param_1)
;
;
; XREF[57]:
;   FUN_00412530 at 004128aa
;   FUN_004179b0 at 0041869f
;   FUN_004192d0 at 004192e1
;   FUN_00419b40 at 0041a7fa
;   FUN_0041a810 at 0041a821
;   FUN_00421300 at 004215a1
;   FUN_00424e30 at 004252d4
;   FUN_00425300 at 0042531e
;   FUN_00425da0 at 00425e8e
;   FUN_00428a80 at 00428b54
;   ... and 47 more
;
; Called Functions:
;   FUN_00552f10
;   FUN_00555270
;   FUN_00556fd0
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00556be0
        ;   Label: FUN_00556be0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00556be2
    PUSH EDX                            ; 00556be6
    CALL FUN_00552f10                   ; 00556be7
        ;   XREF to: 00552f10 (UNCONDITIONAL_CALL)  ; undefined FUN_00552f10()
    ADD ESP,0x8                         ; 00556bec
    TEST EAX,EAX                        ; 00556bef
    JNZ 0x00556bf4                      ; 00556bf1
        ;   XREF to: 00556bf4 (CONDITIONAL_JUMP)  ; LAB_00556bf4
    RET                                 ; 00556bf3
    PUSH EAX                            ; 00556bf4
        ;   Label: LAB_00556bf4
    CALL FUN_00555270                   ; 00556bf5
        ;   XREF to: 00555270 (UNCONDITIONAL_CALL)  ; undefined FUN_00555270()
    ADD ESP,0x4                         ; 00556bfa
    CALL FUN_00556fd0                   ; 00556bfd
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00556fd0()
    MOV EAX,0x1                         ; 00556c02
    RET                                 ; 00556c07

