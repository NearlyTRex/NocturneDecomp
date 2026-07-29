; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mimic_cpp_mirrorXTransform_FUN_004d43c0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c039b8
;   undefined4 DAT_01c039dc
;   undefined4 DAT_01c039e8
;   undefined4 DAT_01c039ec
;   undefined4 DAT_01c039f0
;
; Called Functions:
;   engine_matrix.c_matrixPush_FUN_004cdac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d43c0
        ;   Label: core_mimic.cpp_mirrorXTransform_FUN_004d43c0
    PUSH ESI                            ; 004d43c1
    PUSH EDI                            ; 004d43c2
    CALL engine_matrix.c_matrixPush_FUN_004cdac0 ; 004d43c3
        ;   XREF to: 004cdac0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_matrixPush_FUN_004cdac0()
    MOV EDX,dword ptr [0x01c039b8]      ; 004d43c8 | DAT_01c039b8
    MOV ECX,dword ptr [0x01c039dc]      ; 004d43ce | DAT_01c039dc
    MOV EBX,dword ptr [0x01c039e8]      ; 004d43d4 | DAT_01c039e8
    MOV ESI,dword ptr [0x01c039ec]      ; 004d43da | DAT_01c039ec
    MOV EDI,dword ptr [0x01c039f0]      ; 004d43e0 | DAT_01c039f0
    NEG EDX                             ; 004d43e6
    NEG ECX                             ; 004d43e8
    NEG EBX                             ; 004d43ea
    NEG ESI                             ; 004d43ec
    NEG EDI                             ; 004d43ee
    MOV dword ptr [0x01c039b8],EDX      ; 004d43f0 | DAT_01c039b8
    MOV dword ptr [0x01c039dc],ECX      ; 004d43f6 | DAT_01c039dc
    MOV dword ptr [0x01c039e8],EBX      ; 004d43fc | DAT_01c039e8
    MOV dword ptr [0x01c039ec],ESI      ; 004d4402 | DAT_01c039ec
    MOV dword ptr [0x01c039f0],EDI      ; 004d4408 | DAT_01c039f0
    POP EDI                             ; 004d440e
    POP ESI                             ; 004d440f
    POP EBX                             ; 004d4410
    RET                                 ; 004d4411

