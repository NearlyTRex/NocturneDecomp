; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00532d20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[1]:
;   core_menu.cpp_configureGraphicsOptions_FUN_004d0080 at 004d00d8
;
; Referenced Globals:
;   undefined4 DAT_02dc9df8
;   undefined4 DAT_02dc9e04
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00532d20
        ;   Label: FUN_00532d20
    CMP dword ptr [0x02dc9e04],0x0      ; 00532d21 | DAT_02dc9e04
    JNZ 0x00532d2e                      ; 00532d28
        ;   XREF to: 00532d2e (CONDITIONAL_JUMP)  ; LAB_00532d2e
    XOR EAX,EAX                         ; 00532d2a
    POP EBP                             ; 00532d2c
    RET                                 ; 00532d2d
    PUSH EDI                            ; 00532d2e
        ;   Label: LAB_00532d2e
    PUSH ESI                            ; 00532d2f
    PUSH EBX                            ; 00532d30
    MOV ECX,dword ptr [ESP + 0x24]      ; 00532d31
    PUSH ECX                            ; 00532d35
    MOV EBX,dword ptr [ESP + 0x24]      ; 00532d36
    PUSH EBX                            ; 00532d3a
    MOV ESI,dword ptr [ESP + 0x24]      ; 00532d3b
    PUSH ESI                            ; 00532d3f
    MOV EDI,dword ptr [ESP + 0x24]      ; 00532d40
    PUSH EDI                            ; 00532d44
    MOV EBP,dword ptr [ESP + 0x24]      ; 00532d45
    PUSH EBP                            ; 00532d49
    CALL dword ptr [0x02dc9df8]         ; 00532d4a | DAT_02dc9df8
    ADD ESP,0x14                        ; 00532d50
    POP EBX                             ; 00532d53
    POP ESI                             ; 00532d54
    POP EDI                             ; 00532d55
    POP EBP                             ; 00532d56
    RET                                 ; 00532d57

