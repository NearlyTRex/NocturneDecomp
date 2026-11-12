; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_matrix_c_getCameraRotation_FUN_004e6ac0(void)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   engine_drender.cpp_FUN_0046d230 at 0046d23b
;   engine_drender.cpp_FUN_0046d250 at 0046d25f
;
; Referenced Globals:
;   undefined4 DAT_01c6e2e4
;   undefined4 DAT_01c6e2e8
;   undefined4 DAT_01c6e2ec
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004e6ac0
        ;   Label: engine_matrix.c_getCameraRotation_FUN_004e6ac0
    SUB ESP,0xc                         ; 004e6ac1
    MOV EAX,ESI                         ; 004e6ac4
    MOV EDX,dword ptr [0x01c6e2e4]      ; 004e6ac6 | DAT_01c6e2e4
    MOV dword ptr [ESP],EDX             ; 004e6acc
    MOV EDX,dword ptr [0x01c6e2e8]      ; 004e6acf | DAT_01c6e2e8
    MOV EDI,ESI                         ; 004e6ad5
    MOV dword ptr [ESP + 0x4],EDX       ; 004e6ad7
    MOV EDX,dword ptr [0x01c6e2ec]      ; 004e6adb | DAT_01c6e2ec
    MOV ESI,ESP                         ; 004e6ae1
    MOV dword ptr [ESP + 0x8],EDX       ; 004e6ae3
    MOVSD ES:EDI,ESI                    ; 004e6ae7
    MOVSD ES:EDI,ESI                    ; 004e6ae8
    MOVSD ES:EDI,ESI                    ; 004e6ae9
    ADD ESP,0xc                         ; 004e6aea
    POP EDI                             ; 004e6aed
    RET                                 ; 004e6aee

