; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005a3dac(int *param_1)
;
;
; XREF[1]:
;   FUN_005a3de6 at 005a3e03
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3dac
        ;   Label: FUN_005a3dac
    PUSH ESI                            ; 005a3dad
    PUSH EDI                            ; 005a3dae
    PUSH EBP                            ; 005a3daf
    MOV EBX,dword ptr [ESP + 0x14]      ; 005a3db0
    MOV EBP,dword ptr [EBX + 0x4]       ; 005a3db4
    MOV ESI,dword ptr [EBX]             ; 005a3db7
    MOV EDI,dword ptr [EBP + 0x10]      ; 005a3db9
    IMUL ESI,EDI                        ; 005a3dbc
    MOV EAX,dword ptr [EBX + 0x8]       ; 005a3dbf
    MOV EBP,dword ptr [EBP + 0xc]       ; 005a3dc2
    ADD ESI,EAX                         ; 005a3dc5
    MOV EDX,dword ptr [EBX]             ; 005a3dc7
        ;   Label: LAB_005a3dc7
    TEST EDX,EDX                        ; 005a3dc9
    JA 0x005a3dd5                       ; 005a3dcb
        ;   XREF to: 005a3dd5 (CONDITIONAL_JUMP)  ; LAB_005a3dd5
    MOV EAX,dword ptr [EBX + 0x8]       ; 005a3dcd
    POP EBP                             ; 005a3dd0
    POP EDI                             ; 005a3dd1
    POP ESI                             ; 005a3dd2
    POP EBX                             ; 005a3dd3
    RET                                 ; 005a3dd4
    PUSH 0x0                            ; 005a3dd5
        ;   Label: LAB_005a3dd5
    SUB ESI,EDI                         ; 005a3dd7
    LEA ECX,[EDX + -0x1]                ; 005a3dd9
    PUSH ESI                            ; 005a3ddc
    MOV dword ptr [EBX],ECX             ; 005a3ddd
    CALL EBP                            ; 005a3ddf
    ADD ESP,0x8                         ; 005a3de1
    JMP 0x005a3dc7                      ; 005a3de4
        ;   XREF to: 005a3dc7 (UNCONDITIONAL_JUMP)  ; LAB_005a3dc7

