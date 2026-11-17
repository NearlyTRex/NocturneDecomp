; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_matrix_c_calculateTransformedZ_FUN_004e54e0(int *input_coords)
;
; Parameters:
; int *            Stack[0x4]:4   input_coords
;
; Referenced Globals:
;   int g_INT_01c6e2cc
;   int g_INT_01c6e2d0
;   int g_INT_01c6e2d4
;   int g_INT_01c6e304
;   int g_INT_01c6e310
;   int g_INT_01c6e31c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e54e0
        ;   Label: engine_matrix.c_calculateTransformedZ_FUN_004e54e0
    PUSH ESI                            ; 004e54e1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004e54e2
    MOV EDX,dword ptr [0x01c6e2cc]      ; 004e54e6 | g_INT_01c6e2cc
    MOV EAX,dword ptr [EBX]             ; 004e54ec
    SUB EAX,EDX                         ; 004e54ee
    MOV ECX,dword ptr [0x01c6e2d0]      ; 004e54f0 | g_INT_01c6e2d0
    MOV EDX,EAX                         ; 004e54f6
    MOV EAX,dword ptr [EBX + 0x4]       ; 004e54f8
    MOV ESI,dword ptr [EBX + 0x8]       ; 004e54fb
    SUB EAX,ECX                         ; 004e54fe
    MOV EBX,dword ptr [0x01c6e2d4]      ; 004e5500 | g_INT_01c6e2d4
    MOV ECX,EAX                         ; 004e5506
    MOV EAX,[0x01c6e304]                ; 004e5508 | g_INT_01c6e304
    SUB ESI,EBX                         ; 004e550d
    IMUL EDX                            ; 004e550f
    SHRD EAX,EDX,0x10                   ; 004e5511
    MOV EBX,EAX                         ; 004e5515
    MOV EDX,ECX                         ; 004e5517
    MOV EAX,[0x01c6e310]                ; 004e5519 | g_INT_01c6e310
    IMUL EDX                            ; 004e551e
    SHRD EAX,EDX,0x10                   ; 004e5520
    MOV EDX,ESI                         ; 004e5524
    ADD EBX,EAX                         ; 004e5526
    MOV EAX,[0x01c6e31c]                ; 004e5528 | g_INT_01c6e31c
    IMUL EDX                            ; 004e552d
    SHRD EAX,EDX,0x10                   ; 004e552f
    ADD EAX,EBX                         ; 004e5533
    POP ESI                             ; 004e5535
    POP EBX                             ; 004e5536
    RET                                 ; 004e5537

