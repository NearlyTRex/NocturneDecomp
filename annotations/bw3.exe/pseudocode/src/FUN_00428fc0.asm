; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00428fc0(undefined4 param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 s_CTentacle_005b7eb6+1
;
; Called Functions:
;   FUN_0040c790
;   FUN_0048a200
;
; *****************************************************************************

section .text

    PUSH 0x5b7eb7                       ; 00428fc0 | s_CTentacle_005b7eb6+1
        ;   Label: FUN_00428fc0
    MOV EDX,dword ptr [ESP + 0xc]       ; 00428fc5
    PUSH EDX                            ; 00428fc9
    CALL FUN_0040c790                   ; 00428fca
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c790()
    ADD ESP,0x8                         ; 00428fcf
    TEST EAX,EAX                        ; 00428fd2
    JZ 0x00428fdc                       ; 00428fd4
        ;   XREF to: 00428fdc (CONDITIONAL_JUMP)  ; LAB_00428fdc
    MOV EAX,0x1                         ; 00428fd6
    RET                                 ; 00428fdb
    PUSH EBX                            ; 00428fdc
        ;   Label: LAB_00428fdc
    MOV ECX,dword ptr [ESP + 0xc]       ; 00428fdd
    PUSH ECX                            ; 00428fe1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00428fe2
    PUSH EBX                            ; 00428fe6
    CALL FUN_0048a200                   ; 00428fe7
        ;   XREF to: 0048a200 (UNCONDITIONAL_CALL)  ; undefined FUN_0048a200()
    ADD ESP,0x8                         ; 00428fec
    POP EBX                             ; 00428fef
    RET                                 ; 00428ff0

