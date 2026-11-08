; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b25b0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004d27b0 at 004d3ff4
;
; Referenced Globals:
;   undefined4 DAT_02c9a5c4
;   undefined4 DAT_02c9a618
;   undefined4 DAT_02c9a61c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b25b0
        ;   Label: FUN_005b25b0
    MOV EDX,dword ptr [0x02c9a61c]      ; 005b25b1 | DAT_02c9a61c
    MOV ECX,dword ptr [0x02c9a618]      ; 005b25b7 | DAT_02c9a618
    INC EDX                             ; 005b25bd
    MOV EBX,dword ptr [ESP + 0x8]       ; 005b25be
    MOV dword ptr [EDX*0x4 + 0x2c9a5c4],EBX ; 005b25c2 | DAT_02c9a5c4
    CMP EDX,0x14                        ; 005b25c9
    JL 0x005b25d0                       ; 005b25cc
        ;   XREF to: 005b25d0 (CONDITIONAL_JUMP)  ; LAB_005b25d0
    XOR EDX,EDX                         ; 005b25ce
    CMP EDX,ECX                         ; 005b25d0
        ;   Label: LAB_005b25d0
    JNZ 0x005b25dc                      ; 005b25d2
        ;   XREF to: 005b25dc (CONDITIONAL_JUMP)  ; LAB_005b25dc
    INC ECX                             ; 005b25d4
    CMP ECX,0x14                        ; 005b25d5
    JL 0x005b25dc                       ; 005b25d8
        ;   XREF to: 005b25dc (CONDITIONAL_JUMP)  ; LAB_005b25dc
    XOR ECX,ECX                         ; 005b25da
    MOV dword ptr [0x02c9a618],ECX      ; 005b25dc | DAT_02c9a618
        ;   Label: LAB_005b25dc
    MOV dword ptr [0x02c9a61c],EDX      ; 005b25e2 | DAT_02c9a61c
    POP EBX                             ; 005b25e8
    RET                                 ; 005b25e9

