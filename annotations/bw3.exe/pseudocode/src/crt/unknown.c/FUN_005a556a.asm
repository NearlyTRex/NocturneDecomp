; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005a556a(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModel_allocLOD_FUN_00548580 at 00548630
;
; Called Functions:
;   crt_unknown.c_FUN_005a5512
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a556a
        ;   Label: crt_unknown.c_FUN_005a556a
    MOV EDX,dword ptr [ESP + 0x10]      ; 005a556b
    PUSH EDX                            ; 005a556f
    MOV ECX,dword ptr [ESP + 0x10]      ; 005a5570
    PUSH ECX                            ; 005a5574
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a5575
    PUSH EBX                            ; 005a5579
    CALL crt_unknown.c_FUN_005a5512     ; 005a557a
        ;   XREF to: 005a5512 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a5512()
    ADD ESP,0xc                         ; 005a557f
    POP EBX                             ; 005a5582
    RET                                 ; 005a5583

