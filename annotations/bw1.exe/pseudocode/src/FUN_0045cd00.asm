; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0045cd00(undefined4 param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 s_CTentacle_005d82c2+1
;
; Called Functions:
;   FUN_0040c550
;   FUN_00431430
;
; *****************************************************************************

section .text

    PUSH 0x5d82c3                       ; 0045cd00 | s_CTentacle_005d82c2+1
        ;   Label: FUN_0045cd00
    MOV EDX,dword ptr [ESP + 0xc]       ; 0045cd05
    PUSH EDX                            ; 0045cd09
    CALL FUN_0040c550                   ; 0045cd0a
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c550()
    ADD ESP,0x8                         ; 0045cd0f
    TEST EAX,EAX                        ; 0045cd12
    JZ 0x0045cd1c                       ; 0045cd14
        ;   XREF to: 0045cd1c (CONDITIONAL_JUMP)  ; LAB_0045cd1c
    MOV EAX,0x1                         ; 0045cd16
    RET                                 ; 0045cd1b
    PUSH EBX                            ; 0045cd1c
        ;   Label: LAB_0045cd1c
    MOV ECX,dword ptr [ESP + 0xc]       ; 0045cd1d
    PUSH ECX                            ; 0045cd21
    MOV EBX,dword ptr [ESP + 0xc]       ; 0045cd22
    PUSH EBX                            ; 0045cd26
    CALL FUN_00431430                   ; 0045cd27
        ;   XREF to: 00431430 (UNCONDITIONAL_CALL)  ; undefined FUN_00431430()
    ADD ESP,0x8                         ; 0045cd2c
    POP EBX                             ; 0045cd2f
    RET                                 ; 0045cd30

