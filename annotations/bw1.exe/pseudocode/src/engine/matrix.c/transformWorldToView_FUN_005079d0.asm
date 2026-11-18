; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3i * __stack_esi engine_matrix_c_transformWorldToView_FUN_005079d0(CVector3i *input_coords,CVector3i *output_coords)
;
; Parameters:
; CVector3i *      Stack[0x4]:4   input_coords
;
; XREF[1]:
;   engine_matrix.c_projectToScreen_FUN_00509340 at 00509366
;
; Referenced Globals:
;   int g_RelativeX
;   int g_RelativeY
;   int g_RelativeZ
;   int g_INT_01c51d5c
;   int g_INT_01c51d60
;   int g_INT_01c51d64
;   int g_INT_01c51d68
;   int g_INT_01c51d6c
;   int g_INT_01c51d70
;   int g_INT_01c51d74
;   int g_INT_01c51d78
;   int g_INT_01c51d7c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005079d0
        ;   Label: engine_matrix.c_transformWorldToView_FUN_005079d0
    PUSH EDI                            ; 005079d1
    PUSH EBP                            ; 005079d2
    SUB ESP,0xc                         ; 005079d3
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005079d6
    MOV EBP,ESI                         ; 005079da
    MOV EDX,dword ptr [0x01c51d2c]      ; 005079dc | g_RelativeX
    MOV EDI,dword ptr [0x01c51d30]      ; 005079e2 | g_RelativeY
    MOV EAX,[0x01c51d34]                ; 005079e8 | g_RelativeZ
    MOV ESI,dword ptr [EBX]             ; 005079ed
    MOV ECX,dword ptr [EBX + 0x4]       ; 005079ef
    SUB ESI,EDX                         ; 005079f2
    MOV EBX,dword ptr [EBX + 0x8]       ; 005079f4
    MOV EDX,ESI                         ; 005079f7
    SUB EBX,EAX                         ; 005079f9
    MOV EAX,[0x01c51d5c]                ; 005079fb | g_INT_01c51d5c
    SUB ECX,EDI                         ; 00507a00
    IMUL EDX                            ; 00507a02
    SHRD EAX,EDX,0x10                   ; 00507a04
    MOV EDI,EAX                         ; 00507a08
    MOV EDX,ECX                         ; 00507a0a
    MOV EAX,[0x01c51d68]                ; 00507a0c | g_INT_01c51d68
    IMUL EDX                            ; 00507a11
    SHRD EAX,EDX,0x10                   ; 00507a13
    MOV EDX,EBX                         ; 00507a17
    ADD EDI,EAX                         ; 00507a19
    MOV EAX,[0x01c51d74]                ; 00507a1b | g_INT_01c51d74
    IMUL EDX                            ; 00507a20
    SHRD EAX,EDX,0x10                   ; 00507a22
    MOV EDX,ESI                         ; 00507a26
    ADD EDI,EAX                         ; 00507a28
    MOV EAX,[0x01c51d60]                ; 00507a2a | g_INT_01c51d60
    MOV dword ptr [ESP],EDI             ; 00507a2f
    IMUL EDX                            ; 00507a32
    SHRD EAX,EDX,0x10                   ; 00507a34
    MOV EDI,EAX                         ; 00507a38
    MOV EDX,ECX                         ; 00507a3a
    MOV EAX,[0x01c51d6c]                ; 00507a3c | g_INT_01c51d6c
    IMUL EDX                            ; 00507a41
    SHRD EAX,EDX,0x10                   ; 00507a43
    MOV EDX,EBX                         ; 00507a47
    ADD EDI,EAX                         ; 00507a49
    MOV EAX,[0x01c51d78]                ; 00507a4b | g_INT_01c51d78
    IMUL EDX                            ; 00507a50
    SHRD EAX,EDX,0x10                   ; 00507a52
    MOV EDX,ESI                         ; 00507a56
    ADD EDI,EAX                         ; 00507a58
    MOV EAX,[0x01c51d64]                ; 00507a5a | g_INT_01c51d64
    IMUL EDX                            ; 00507a5f
    SHRD EAX,EDX,0x10                   ; 00507a61
    MOV ESI,EAX                         ; 00507a65
    MOV EDX,ECX                         ; 00507a67
    MOV EAX,[0x01c51d70]                ; 00507a69 | g_INT_01c51d70
    IMUL EDX                            ; 00507a6e
    SHRD EAX,EDX,0x10                   ; 00507a70
    MOV EDX,EBX                         ; 00507a74
    ADD ESI,EAX                         ; 00507a76
    MOV EAX,[0x01c51d7c]                ; 00507a78 | g_INT_01c51d7c
    MOV dword ptr [ESP + 0x4],EDI       ; 00507a7d
    IMUL EDX                            ; 00507a81
    SHRD EAX,EDX,0x10                   ; 00507a83
    ADD ESI,EAX                         ; 00507a87
    MOV EDI,EBP                         ; 00507a89
    MOV dword ptr [ESP + 0x8],ESI       ; 00507a8b
    MOV ESI,ESP                         ; 00507a8f
    MOVSD ES:EDI,ESI                    ; 00507a91
    MOVSD ES:EDI,ESI                    ; 00507a92
    MOVSD ES:EDI,ESI                    ; 00507a93
    MOV EAX,EBP                         ; 00507a94
    ADD ESP,0xc                         ; 00507a96
    POP EBP                             ; 00507a99
    POP EDI                             ; 00507a9a
    POP EBX                             ; 00507a9b
    RET                                 ; 00507a9c

