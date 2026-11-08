; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00473b20(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00532b80 at 00533607
;
; Referenced Globals:
;   undefined4 DAT_005bca01
;   undefined4 DAT_005bca04
;
; Called Functions:
;   FUN_004659c0
;   FUN_00473940
;   FUN_005a3a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00473b20
        ;   Label: FUN_00473b20
    PUSH 0x5bca01                       ; 00473b21 | DAT_005bca01
    MOV EDX,dword ptr [ESP + 0x10]      ; 00473b26
    PUSH EDX                            ; 00473b2a
    PUSH 0x5bca04                       ; 00473b2b | DAT_005bca04
    CALL FUN_004659c0                   ; 00473b30
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004659c0()
    MOV EBX,EAX                         ; 00473b35
    ADD ESP,0xc                         ; 00473b37
    TEST EAX,EAX                        ; 00473b3a
    JNZ 0x00473b40                      ; 00473b3c
        ;   XREF to: 00473b40 (CONDITIONAL_JUMP)  ; LAB_00473b40
    POP EBX                             ; 00473b3e
    RET                                 ; 00473b3f
    PUSH EAX                            ; 00473b40
        ;   Label: LAB_00473b40
    MOV ECX,dword ptr [ESP + 0xc]       ; 00473b41
    PUSH ECX                            ; 00473b45
    CALL FUN_00473940                   ; 00473b46
        ;   XREF to: 00473940 (UNCONDITIONAL_CALL)  ; undefined FUN_00473940()
    ADD ESP,0x8                         ; 00473b4b
    PUSH EBX                            ; 00473b4e
    CALL FUN_005a3a90                   ; 00473b4f
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3a90()
    MOV EAX,0x1                         ; 00473b54
    ADD ESP,0x4                         ; 00473b59
    POP EBX                             ; 00473b5c
    RET                                 ; 00473b5d

