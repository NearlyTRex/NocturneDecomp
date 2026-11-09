; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_matrix_c_calculateTransformedZ_FUN_004e8e00(int *input_coords)
;
; Parameters:
; int *            Stack[0x4]:4   input_coords
;
; Referenced Globals:
;   undefined4 DAT_01c38b6c
;   undefined4 DAT_01c38b70
;   undefined4 DAT_01c38b74
;   undefined4 DAT_01c38ba4
;   undefined4 DAT_01c38bb0
;   undefined4 DAT_01c38bbc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e8e00
        ;   Label: engine_matrix.c_calculateTransformedZ_FUN_004e8e00
    PUSH ESI                            ; 004e8e01
    MOV EBX,dword ptr [ESP + 0xc]       ; 004e8e02
    MOV EDX,dword ptr [0x01c38b6c]      ; 004e8e06 | DAT_01c38b6c
    MOV EAX,dword ptr [EBX]             ; 004e8e0c
    SUB EAX,EDX                         ; 004e8e0e
    MOV ECX,dword ptr [0x01c38b70]      ; 004e8e10 | DAT_01c38b70
    MOV EDX,EAX                         ; 004e8e16
    MOV EAX,dword ptr [EBX + 0x4]       ; 004e8e18
    MOV ESI,dword ptr [EBX + 0x8]       ; 004e8e1b
    SUB EAX,ECX                         ; 004e8e1e
    MOV EBX,dword ptr [0x01c38b74]      ; 004e8e20 | DAT_01c38b74
    MOV ECX,EAX                         ; 004e8e26
    MOV EAX,[0x01c38ba4]                ; 004e8e28 | DAT_01c38ba4
    SUB ESI,EBX                         ; 004e8e2d
    IMUL EDX                            ; 004e8e2f
    SHRD EAX,EDX,0x10                   ; 004e8e31
    MOV EBX,EAX                         ; 004e8e35
    MOV EDX,ECX                         ; 004e8e37
    MOV EAX,[0x01c38bb0]                ; 004e8e39 | DAT_01c38bb0
    IMUL EDX                            ; 004e8e3e
    SHRD EAX,EDX,0x10                   ; 004e8e40
    MOV EDX,ESI                         ; 004e8e44
    ADD EBX,EAX                         ; 004e8e46
    MOV EAX,[0x01c38bbc]                ; 004e8e48 | DAT_01c38bbc
    IMUL EDX                            ; 004e8e4d
    SHRD EAX,EDX,0x10                   ; 004e8e4f
    ADD EAX,EBX                         ; 004e8e53
    POP ESI                             ; 004e8e55
    POP EBX                             ; 004e8e56
    RET                                 ; 004e8e57

