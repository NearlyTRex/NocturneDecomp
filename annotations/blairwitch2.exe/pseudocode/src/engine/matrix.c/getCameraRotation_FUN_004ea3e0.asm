; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_matrix_c_getCameraRotation_FUN_004ea3e0(void)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   engine_drender.cpp_FUN_0046b650 at 0046b65b
;   engine_drender.cpp_FUN_0046b670 at 0046b67f
;
; Referenced Globals:
;   undefined4 DAT_01c38b84
;   undefined4 DAT_01c38b88
;   undefined4 DAT_01c38b8c
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004ea3e0
        ;   Label: engine_matrix.c_getCameraRotation_FUN_004ea3e0
    SUB ESP,0xc                         ; 004ea3e1
    MOV EAX,ESI                         ; 004ea3e4
    MOV EDX,dword ptr [0x01c38b84]      ; 004ea3e6 | DAT_01c38b84
    MOV dword ptr [ESP],EDX             ; 004ea3ec
    MOV EDX,dword ptr [0x01c38b88]      ; 004ea3ef | DAT_01c38b88
    MOV EDI,ESI                         ; 004ea3f5
    MOV dword ptr [ESP + 0x4],EDX       ; 004ea3f7
    MOV EDX,dword ptr [0x01c38b8c]      ; 004ea3fb | DAT_01c38b8c
    MOV ESI,ESP                         ; 004ea401
    MOV dword ptr [ESP + 0x8],EDX       ; 004ea403
    MOVSD ES:EDI,ESI                    ; 004ea407
    MOVSD ES:EDI,ESI                    ; 004ea408
    MOVSD ES:EDI,ESI                    ; 004ea409
    ADD ESP,0xc                         ; 004ea40a
    POP EDI                             ; 004ea40d
    RET                                 ; 004ea40e

