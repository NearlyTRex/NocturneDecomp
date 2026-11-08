; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 * FUN_004a6c90(undefined4 param_1,char *param_2)
;
;
; XREF[3]:
;   FUN_004a1d00 at 004a2243
;   FUN_00543380 at 005433b0
;   FUN_00544460 at 00546eca
;
; Referenced Globals:
;   undefined4 DAT_01c56ecc
;   undefined4 DAT_01c56ed0
;
; Called Functions:
;   FUN_004a6d10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a6c90
        ;   Label: FUN_004a6c90
    MOV EAX,dword ptr [ESP + 0xc]       ; 004a6c91
    CMP byte ptr [EAX],0x0              ; 004a6c95
    JNZ 0x004a6c9e                      ; 004a6c98
        ;   XREF to: 004a6c9e (CONDITIONAL_JUMP)  ; LAB_004a6c9e
    XOR EAX,EAX                         ; 004a6c9a
        ;   Label: LAB_004a6c9a
    POP EBX                             ; 004a6c9c
    RET                                 ; 004a6c9d
    PUSH EAX                            ; 004a6c9e
        ;   Label: LAB_004a6c9e
    MOV ECX,dword ptr [ESP + 0xc]       ; 004a6c9f
    MOV EDX,0x1                         ; 004a6ca3
    PUSH ECX                            ; 004a6ca8
    XOR EBX,EBX                         ; 004a6ca9
    MOV dword ptr [0x01c56ecc],EDX      ; 004a6cab | DAT_01c56ecc
    CALL FUN_004a6d10                   ; 004a6cb1
        ;   XREF to: 004a6d10 (UNCONDITIONAL_CALL)  ; undefined FUN_004a6d10()
    ADD ESP,0x8                         ; 004a6cb6
    MOV dword ptr [0x01c56ecc],EBX      ; 004a6cb9 | DAT_01c56ecc
    TEST EAX,EAX                        ; 004a6cbf
    JGE 0x004a6c9a                      ; 004a6cc1
        ;   XREF to: 004a6c9a (CONDITIONAL_JUMP)  ; LAB_004a6c9a
    MOV EAX,0x1c56ed0                   ; 004a6cc3 | DAT_01c56ed0
    POP EBX                             ; 004a6cc8
    RET                                 ; 004a6cc9

