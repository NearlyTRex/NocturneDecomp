; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __esi engine_matrix_c_getCameraRotation_FUN_004ce790(CVector3i *output)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   engine_drender.cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0 at 00460dc0
;   engine_drender.cpp_FUN_00460d90 at 00460d9b
;
; Referenced Globals:
;   undefined4 DAT_01c039d0
;   undefined4 DAT_01c039d4
;   undefined4 DAT_01c039d8
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004ce790
        ;   Label: engine_matrix.c_getCameraRotation_FUN_004ce790
    SUB ESP,0xc                         ; 004ce791
    MOV EAX,ESI                         ; 004ce794
    MOV EDX,dword ptr [0x01c039d0]      ; 004ce796 | DAT_01c039d0
    MOV dword ptr [ESP],EDX             ; 004ce79c
    MOV EDX,dword ptr [0x01c039d4]      ; 004ce79f | DAT_01c039d4
    MOV EDI,ESI                         ; 004ce7a5
    MOV dword ptr [ESP + 0x4],EDX       ; 004ce7a7
    MOV EDX,dword ptr [0x01c039d8]      ; 004ce7ab | DAT_01c039d8
    MOV ESI,ESP                         ; 004ce7b1
    MOV dword ptr [ESP + 0x8],EDX       ; 004ce7b3
    MOVSD ES:EDI,ESI                    ; 004ce7b7
    MOVSD ES:EDI,ESI                    ; 004ce7b8
    MOVSD ES:EDI,ESI                    ; 004ce7b9
    ADD ESP,0xc                         ; 004ce7ba
    POP EDI                             ; 004ce7bd
    RET                                 ; 004ce7be

