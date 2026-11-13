; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __esi engine_mini3d_cpp_getCameraRotation_FUN_004ecf60(CVector3f *output)
;
;
; Referenced Globals:
;   undefined4 DAT_01d76c9c
;   undefined4 DAT_01d76ca0
;   undefined4 DAT_01d76ca4
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004ecf60
        ;   Label: engine_mini3d.cpp_getCameraRotation_FUN_004ecf60
    SUB ESP,0xc                         ; 004ecf61
    MOV EAX,ESI                         ; 004ecf64
    MOV EDX,dword ptr [0x01d76c9c]      ; 004ecf66 | DAT_01d76c9c
    MOV dword ptr [ESP],EDX             ; 004ecf6c
    MOV EDX,dword ptr [0x01d76ca0]      ; 004ecf6f | DAT_01d76ca0
    MOV EDI,ESI                         ; 004ecf75
    MOV dword ptr [ESP + 0x8],EDX       ; 004ecf77
    MOV EDX,dword ptr [0x01d76ca4]      ; 004ecf7b | DAT_01d76ca4
    MOV ESI,ESP                         ; 004ecf81
    MOV dword ptr [ESP + 0x4],EDX       ; 004ecf83
    MOVSD ES:EDI,ESI                    ; 004ecf87
    MOVSD ES:EDI,ESI                    ; 004ecf88
    MOVSD ES:EDI,ESI                    ; 004ecf89
    ADD ESP,0xc                         ; 004ecf8a
    POP EDI                             ; 004ecf8d
    RET                                 ; 004ecf8e

