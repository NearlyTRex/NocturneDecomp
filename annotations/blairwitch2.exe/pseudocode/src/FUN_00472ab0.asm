; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00472ab0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_0052c0e0 at 0052cb67
;
; Referenced Globals:
;   undefined4 DAT_005d1b4b
;   undefined4 DAT_005d1b4e
;
; Called Functions:
;   FUN_00460c70
;   FUN_004728d0
;   FUN_005b89c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00472ab0
        ;   Label: FUN_00472ab0
    PUSH 0x5d1b4b                       ; 00472ab1 | DAT_005d1b4b
    MOV EDX,dword ptr [ESP + 0x10]      ; 00472ab6
    PUSH EDX                            ; 00472aba
    PUSH 0x5d1b4e                       ; 00472abb | DAT_005d1b4e
    CALL FUN_00460c70                   ; 00472ac0
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; undefined FUN_00460c70()
    MOV EBX,EAX                         ; 00472ac5
    ADD ESP,0xc                         ; 00472ac7
    TEST EAX,EAX                        ; 00472aca
    JNZ 0x00472ad0                      ; 00472acc
        ;   XREF to: 00472ad0 (CONDITIONAL_JUMP)  ; LAB_00472ad0
    POP EBX                             ; 00472ace
    RET                                 ; 00472acf
    PUSH EAX                            ; 00472ad0
        ;   Label: LAB_00472ad0
    MOV ECX,dword ptr [ESP + 0xc]       ; 00472ad1
    PUSH ECX                            ; 00472ad5
    CALL FUN_004728d0                   ; 00472ad6
        ;   XREF to: 004728d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004728d0()
    ADD ESP,0x8                         ; 00472adb
    PUSH EBX                            ; 00472ade
    CALL FUN_005b89c0                   ; 00472adf
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b89c0()
    MOV EAX,0x1                         ; 00472ae4
    ADD ESP,0x4                         ; 00472ae9
    POP EBX                             ; 00472aec
    RET                                 ; 00472aed

