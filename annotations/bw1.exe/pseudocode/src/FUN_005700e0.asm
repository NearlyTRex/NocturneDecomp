; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005700e0(int param_1)
;
;
; XREF[2]:
;   FUN_0056feb0 at 0056fec2
;   FUN_00570020 at 00570066
;
; Referenced Globals:
;   undefined4 DAT_02c80650
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005700e0
        ;   Label: FUN_005700e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005700e1
    CMP dword ptr [EBX + 0x158],0x0     ; 005700e5
    JZ 0x00570102                       ; 005700ec
        ;   XREF to: 00570102 (CONDITIONAL_JUMP)  ; LAB_00570102
    MOV ECX,dword ptr [0x02c80650]      ; 005700ee | DAT_02c80650
    TEST ECX,ECX                        ; 005700f4
    JNZ 0x00570104                      ; 005700f6
        ;   XREF to: 00570104 (CONDITIONAL_JUMP)  ; LAB_00570104
    MOV dword ptr [EBX + 0x158],0x0     ; 005700f8
    POP EBX                             ; 00570102
        ;   Label: LAB_00570102
    RET                                 ; 00570103
    PUSH ESI                            ; 00570104
        ;   Label: LAB_00570104
    MOV ESI,dword ptr [EBX + 0x158]     ; 00570105
    PUSH ESI                            ; 0057010b
    MOV EDX,dword ptr [ECX]             ; 0057010c
    PUSH ECX                            ; 0057010e
    CALL dword ptr [EDX + 0x34]         ; 0057010f
    ADD ESP,0x8                         ; 00570112
    POP ESI                             ; 00570115
    MOV dword ptr [EBX + 0x158],0x0     ; 00570116
    POP EBX                             ; 00570120
    RET                                 ; 00570121

