; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_004a3ed0(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   core_emitter.cpp_FUN_00487eb0 at 004885e8
;
; Referenced Globals:
;   undefined4 DAT_01d03b88
;   undefined4 g_PopcornPool[0].field60_0x3c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3ed0
        ;   Label: core_fire.cpp_FUN_004a3ed0
    PUSH ESI                            ; 004a3ed1
    PUSH EBP                            ; 004a3ed2
    MOV ECX,dword ptr [ESP + 0x18]      ; 004a3ed3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004a3ed7
    MOV EAX,[0x01d03b88]                ; 004a3edb | DAT_01d03b88
    PUSH ECX                            ; 004a3ee0
    SHL EAX,0x6                         ; 004a3ee1
    PUSH EBX                            ; 004a3ee4
    ADD EAX,0x1d03b8c                   ; 004a3ee5
    PUSH EAX                            ; 004a3eea
    MOV EDX,dword ptr [EAX + 0x3c]      ; 004a3eeb | g_PopcornPool[0].field60_0x3c
    CALL dword ptr [EDX]                ; 004a3eee
    MOV ESI,dword ptr [0x01d03b88]      ; 004a3ef0 | DAT_01d03b88
    INC ESI                             ; 004a3ef6
    ADD ESP,0xc                         ; 004a3ef7
    MOV dword ptr [0x01d03b88],ESI      ; 004a3efa | DAT_01d03b88
    CMP ESI,0x100                       ; 004a3f00
    JGE 0x004a3f0c                      ; 004a3f06
        ;   XREF to: 004a3f0c (CONDITIONAL_JUMP)  ; LAB_004a3f0c
    POP EBP                             ; 004a3f08
    POP ESI                             ; 004a3f09
    POP EBX                             ; 004a3f0a
    RET                                 ; 004a3f0b
    XOR EBP,EBP                         ; 004a3f0c
        ;   Label: LAB_004a3f0c
    MOV dword ptr [0x01d03b88],EBP      ; 004a3f0e | DAT_01d03b88
    POP EBP                             ; 004a3f14
    POP ESI                             ; 004a3f15
    POP EBX                             ; 004a3f16
    RET                                 ; 004a3f17

