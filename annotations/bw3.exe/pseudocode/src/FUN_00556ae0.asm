; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00556ae0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_0056bd40 at 0056bda4
;
; Referenced Globals:
;   undefined4 DAT_02cf3280
;
; Called Functions:
;   FUN_00552f10
;   FUN_00556fd0
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00556ae0
        ;   Label: FUN_00556ae0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00556ae2
    PUSH EDX                            ; 00556ae6
    CALL FUN_00552f10                   ; 00556ae7
        ;   XREF to: 00552f10 (UNCONDITIONAL_CALL)  ; undefined FUN_00552f10()
    ADD ESP,0x8                         ; 00556aec
    TEST EAX,EAX                        ; 00556aef
    JZ 0x00556b32                       ; 00556af1
        ;   XREF to: 00556b32 (CONDITIONAL_JUMP)  ; LAB_00556b32
    PUSH EBX                            ; 00556af3
    MOV EDX,dword ptr [ESP + 0xc]       ; 00556af4
    MOV dword ptr [EAX + 0x3c],EDX      ; 00556af8
    MOV DL,byte ptr [EAX + 0x118]       ; 00556afb
    OR DL,0x10                          ; 00556b01
    MOV ECX,dword ptr [EAX + 0x60]      ; 00556b04
    MOV byte ptr [EAX + 0x118],DL       ; 00556b07
    TEST ECX,ECX                        ; 00556b0d
    JZ 0x00556b27                       ; 00556b0f
        ;   XREF to: 00556b27 (CONDITIONAL_JUMP)  ; LAB_00556b27
    MOV EBX,dword ptr [0x02cf3280]      ; 00556b11 | DAT_02cf3280
    TEST EBX,EBX                        ; 00556b17
    JZ 0x00556b27                       ; 00556b19
        ;   XREF to: 00556b27 (CONDITIONAL_JUMP)  ; LAB_00556b27
    PUSH 0x10                           ; 00556b1b
    PUSH EAX                            ; 00556b1d
    MOV ECX,dword ptr [EBX]             ; 00556b1e
    PUSH EBX                            ; 00556b20
    CALL dword ptr [ECX + 0x44]         ; 00556b21
    ADD ESP,0xc                         ; 00556b24
    CALL FUN_00556fd0                   ; 00556b27
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00556fd0()
        ;   Label: LAB_00556b27
    MOV EAX,0x1                         ; 00556b2c
    POP EBX                             ; 00556b31
    RET                                 ; 00556b32
        ;   Label: LAB_00556b32

