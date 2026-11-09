; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_matrix_c_calculateTransformedZ_FUN_00507aa0(int *input_coords)
;
; Parameters:
; int *            Stack[0x4]:4   input_coords
;
; Referenced Globals:
;   undefined4 DAT_01c51d2c
;   undefined4 DAT_01c51d30
;   undefined4 DAT_01c51d34
;   undefined4 DAT_01c51d64
;   undefined4 DAT_01c51d70
;   undefined4 DAT_01c51d7c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00507aa0
        ;   Label: engine_matrix.c_calculateTransformedZ_FUN_00507aa0
    PUSH ESI                            ; 00507aa1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00507aa2
    MOV EDX,dword ptr [0x01c51d2c]      ; 00507aa6 | DAT_01c51d2c
    MOV EAX,dword ptr [EBX]             ; 00507aac
    SUB EAX,EDX                         ; 00507aae
    MOV ECX,dword ptr [0x01c51d30]      ; 00507ab0 | DAT_01c51d30
    MOV EDX,EAX                         ; 00507ab6
    MOV EAX,dword ptr [EBX + 0x4]       ; 00507ab8
    MOV ESI,dword ptr [EBX + 0x8]       ; 00507abb
    SUB EAX,ECX                         ; 00507abe
    MOV EBX,dword ptr [0x01c51d34]      ; 00507ac0 | DAT_01c51d34
    MOV ECX,EAX                         ; 00507ac6
    MOV EAX,[0x01c51d64]                ; 00507ac8 | DAT_01c51d64
    SUB ESI,EBX                         ; 00507acd
    IMUL EDX                            ; 00507acf
    SHRD EAX,EDX,0x10                   ; 00507ad1
    MOV EBX,EAX                         ; 00507ad5
    MOV EDX,ECX                         ; 00507ad7
    MOV EAX,[0x01c51d70]                ; 00507ad9 | DAT_01c51d70
    IMUL EDX                            ; 00507ade
    SHRD EAX,EDX,0x10                   ; 00507ae0
    MOV EDX,ESI                         ; 00507ae4
    ADD EBX,EAX                         ; 00507ae6
    MOV EAX,[0x01c51d7c]                ; 00507ae8 | DAT_01c51d7c
    IMUL EDX                            ; 00507aed
    SHRD EAX,EDX,0x10                   ; 00507aef
    ADD EAX,EBX                         ; 00507af3
    POP ESI                             ; 00507af5
    POP EBX                             ; 00507af6
    RET                                 ; 00507af7

