; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0042bd50(undefined4 param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 s_CTentacle_005d56a4+1
;
; Called Functions:
;   FUN_0040c550
;   FUN_00431430
;
; *****************************************************************************

section .text

    PUSH 0x5d56a5                       ; 0042bd50 | s_CTentacle_005d56a4+1
        ;   Label: FUN_0042bd50
    MOV EDX,dword ptr [ESP + 0xc]       ; 0042bd55
    PUSH EDX                            ; 0042bd59
    CALL FUN_0040c550                   ; 0042bd5a
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c550()
    ADD ESP,0x8                         ; 0042bd5f
    TEST EAX,EAX                        ; 0042bd62
    JZ 0x0042bd6c                       ; 0042bd64
        ;   XREF to: 0042bd6c (CONDITIONAL_JUMP)  ; LAB_0042bd6c
    MOV EAX,0x1                         ; 0042bd66
    RET                                 ; 0042bd6b
    PUSH EBX                            ; 0042bd6c
        ;   Label: LAB_0042bd6c
    MOV ECX,dword ptr [ESP + 0xc]       ; 0042bd6d
    PUSH ECX                            ; 0042bd71
    MOV EBX,dword ptr [ESP + 0xc]       ; 0042bd72
    PUSH EBX                            ; 0042bd76
    CALL FUN_00431430                   ; 0042bd77
        ;   XREF to: 00431430 (UNCONDITIONAL_CALL)  ; undefined FUN_00431430()
    ADD ESP,0x8                         ; 0042bd7c
    POP EBX                             ; 0042bd7f
    RET                                 ; 0042bd80

