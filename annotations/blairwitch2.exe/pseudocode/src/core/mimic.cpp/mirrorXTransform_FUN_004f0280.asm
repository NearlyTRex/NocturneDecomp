; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mimic_cpp_mirrorXTransform_FUN_004f0280(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c38b6c
;   undefined4 DAT_01c38b90
;   undefined4 DAT_01c38b9c
;   undefined4 DAT_01c38ba0
;   undefined4 DAT_01c38ba4
;
; Called Functions:
;   engine_matrix.c_matrixPush_FUN_004e9710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f0280
        ;   Label: core_mimic.cpp_mirrorXTransform_FUN_004f0280
    PUSH ESI                            ; 004f0281
    PUSH EDI                            ; 004f0282
    CALL engine_matrix.c_matrixPush_FUN_004e9710 ; 004f0283
        ;   XREF to: 004e9710 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_matrixPush_FUN_004e9710()
    MOV EDX,dword ptr [0x01c38b6c]      ; 004f0288 | DAT_01c38b6c
    MOV ECX,dword ptr [0x01c38b90]      ; 004f028e | DAT_01c38b90
    MOV EBX,dword ptr [0x01c38b9c]      ; 004f0294 | DAT_01c38b9c
    MOV ESI,dword ptr [0x01c38ba0]      ; 004f029a | DAT_01c38ba0
    MOV EDI,dword ptr [0x01c38ba4]      ; 004f02a0 | DAT_01c38ba4
    NEG EDX                             ; 004f02a6
    NEG ECX                             ; 004f02a8
    NEG EBX                             ; 004f02aa
    NEG ESI                             ; 004f02ac
    NEG EDI                             ; 004f02ae
    MOV dword ptr [0x01c38b6c],EDX      ; 004f02b0 | DAT_01c38b6c
    MOV dword ptr [0x01c38b90],ECX      ; 004f02b6 | DAT_01c38b90
    MOV dword ptr [0x01c38b9c],EBX      ; 004f02bc | DAT_01c38b9c
    MOV dword ptr [0x01c38ba0],ESI      ; 004f02c2 | DAT_01c38ba0
    MOV dword ptr [0x01c38ba4],EDI      ; 004f02c8 | DAT_01c38ba4
    POP EDI                             ; 004f02ce
    POP ESI                             ; 004f02cf
    POP EBX                             ; 004f02d0
    RET                                 ; 004f02d1

