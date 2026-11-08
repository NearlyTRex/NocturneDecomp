; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00458ec0(undefined4 param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 s_CTentacle_005ba989+1
;
; Called Functions:
;   FUN_0040c790
;   FUN_0048a200
;
; *****************************************************************************

section .text

    PUSH 0x5ba98a                       ; 00458ec0 | s_CTentacle_005ba989+1
        ;   Label: FUN_00458ec0
    MOV EDX,dword ptr [ESP + 0xc]       ; 00458ec5
    PUSH EDX                            ; 00458ec9
    CALL FUN_0040c790                   ; 00458eca
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c790()
    ADD ESP,0x8                         ; 00458ecf
    TEST EAX,EAX                        ; 00458ed2
    JZ 0x00458edc                       ; 00458ed4
        ;   XREF to: 00458edc (CONDITIONAL_JUMP)  ; LAB_00458edc
    MOV EAX,0x1                         ; 00458ed6
    RET                                 ; 00458edb
    PUSH EBX                            ; 00458edc
        ;   Label: LAB_00458edc
    MOV ECX,dword ptr [ESP + 0xc]       ; 00458edd
    PUSH ECX                            ; 00458ee1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00458ee2
    PUSH EBX                            ; 00458ee6
    CALL FUN_0048a200                   ; 00458ee7
        ;   XREF to: 0048a200 (UNCONDITIONAL_CALL)  ; undefined FUN_0048a200()
    ADD ESP,0x8                         ; 00458eec
    POP EBX                             ; 00458eef
    RET                                 ; 00458ef0

