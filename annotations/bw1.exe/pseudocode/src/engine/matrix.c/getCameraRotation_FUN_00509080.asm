; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __esi engine_matrix_c_getCameraRotation_FUN_00509080(CVector3i *output)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_00483b50 at 00483b5b
;   engine_drender.cpp_FUN_00483b70 at 00483b7f
;
; Referenced Globals:
;   undefined4 DAT_01c51d44
;   undefined4 DAT_01c51d48
;   undefined4 DAT_01c51d4c
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00509080
        ;   Label: engine_matrix.c_getCameraRotation_FUN_00509080
    SUB ESP,0xc                         ; 00509081
    MOV EAX,ESI                         ; 00509084
    MOV EDX,dword ptr [0x01c51d44]      ; 00509086 | DAT_01c51d44
    MOV dword ptr [ESP],EDX             ; 0050908c
    MOV EDX,dword ptr [0x01c51d48]      ; 0050908f | DAT_01c51d48
    MOV EDI,ESI                         ; 00509095
    MOV dword ptr [ESP + 0x4],EDX       ; 00509097
    MOV EDX,dword ptr [0x01c51d4c]      ; 0050909b | DAT_01c51d4c
    MOV ESI,ESP                         ; 005090a1
    MOV dword ptr [ESP + 0x8],EDX       ; 005090a3
    MOVSD ES:EDI,ESI                    ; 005090a7
    MOVSD ES:EDI,ESI                    ; 005090a8
    MOVSD ES:EDI,ESI                    ; 005090a9
    ADD ESP,0xc                         ; 005090aa
    POP EDI                             ; 005090ad
    RET                                 ; 005090ae

