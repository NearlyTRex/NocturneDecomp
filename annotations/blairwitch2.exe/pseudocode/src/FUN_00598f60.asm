; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00598f60(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00618170
;   undefined4 DAT_01d192f8
;
; Called Functions:
;   FUN_004254b0
;   FUN_005035c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00598f60
        ;   Label: FUN_00598f60
    ADD EAX,0x2b4                       ; 00598f64
    PUSH EAX                            ; 00598f69
    CALL FUN_005035c0                   ; 00598f6a
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00598f6f
    ADD ESP,0x4                         ; 00598f72
    CMP EAX,0xe                         ; 00598f75
    JNZ 0x00598f8b                      ; 00598f78
        ;   XREF to: 00598f8b (CONDITIONAL_JUMP)  ; LAB_00598f8b
    MOV EAX,[0x00618170]                ; 00598f7a | DAT_00618170
    CMP dword ptr [EAX + 0x1008],0x0    ; 00598f7f | DAT_01d192f8
    JNZ 0x00598f8b                      ; 00598f86
        ;   XREF to: 00598f8b (CONDITIONAL_JUMP)  ; LAB_00598f8b
    XOR EAX,EAX                         ; 00598f88
    RET                                 ; 00598f8a
    MOV ECX,dword ptr [ESP + 0x4]       ; 00598f8b
        ;   Label: LAB_00598f8b
    PUSH ECX                            ; 00598f8f
    CALL FUN_004254b0                   ; 00598f90
        ;   XREF to: 004254b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004254b0()
    ADD ESP,0x4                         ; 00598f95
    RET                                 ; 00598f98

