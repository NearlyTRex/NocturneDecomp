; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CBloodPool_setupRenderState_FUN_004af2a0(void)
;
;
; XREF[2]:
;   core_gore.cpp_CGore_process_FUN_004b0030 at 004b0095
;   core_gore.cpp_FUN_004afe80 at 004afef5
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_005c502c
;   undefined4 DAT_005c5030
;   undefined4 DAT_005c505c
;   undefined4 DAT_005c5060
;   undefined4 DAT_005c508c
;   undefined4 DAT_005c5090
;   undefined4 DAT_005c50bc
;   undefined4 DAT_005c50c0
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01c78c84
;   undefined4 DAT_01c78c88
;   undefined4 DAT_01c78c8c
;   undefined4 DAT_01c78c90
;   undefined4 DAT_01c78c94
;   ... and 4 more
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004af2a0
        ;   Label: core_gore.cpp_CBloodPool_setupRenderState_FUN_004af2a0
    PUSH ESI                            ; 004af2a1
    PUSH EDI                            ; 004af2a2
    PUSH EBP                            ; 004af2a3
    MOV EDX,0x4                         ; 004af2a4
    MOV EBX,0x1                         ; 004af2a9
    MOV ESI,0x2                         ; 004af2ae
    MOV EDI,0x3                         ; 004af2b3
    MOV EBP,0x80000                     ; 004af2b8
    MOV EAX,0xf80000                    ; 004af2bd
    XOR ECX,ECX                         ; 004af2c2
    MOV dword ptr [0x01c78c84],EDX      ; 004af2c4 | DAT_01c78c84
    MOV dword ptr [0x01c78c98],ECX      ; 004af2ca | DAT_01c78c98
    MOV dword ptr [0x01c78c9c],EBX      ; 004af2d0 | DAT_01c78c9c
    MOV dword ptr [0x01c78ca0],ESI      ; 004af2d6 | DAT_01c78ca0
    MOV dword ptr [0x01c78ca4],EDI      ; 004af2dc | DAT_01c78ca4
    MOV dword ptr [0x005c502c],EBP      ; 004af2e2 | DAT_005c502c
    MOV [0x005c5030],EAX                ; 004af2e8 | DAT_005c5030
    MOV [0x005c505c],EAX                ; 004af2ed | DAT_005c505c
    MOV [0x005c5060],EAX                ; 004af2f2 | DAT_005c5060
    MOV [0x005c508c],EAX                ; 004af2f7 | DAT_005c508c
    MOV dword ptr [0x005c5090],EBP      ; 004af2fc | DAT_005c5090
    MOV dword ptr [0x005c50bc],EBP      ; 004af302 | DAT_005c50bc
    MOV dword ptr [0x005c50c0],EBP      ; 004af308 | DAT_005c50c0
    MOV EDX,0xffff                      ; 004af30e
    MOV dword ptr [0x01c78c88],ECX      ; 004af313 | DAT_01c78c88
    PUSH EDX                            ; 004af319
    MOV ESI,dword ptr [0x005ae704]      ; 004af31a | DAT_005ae704
    MOV dword ptr [0x01c78c90],ECX      ; 004af320 | DAT_01c78c90
    PUSH ESI                            ; 004af326 | DAT_01b4d738
    MOV dword ptr [0x01c78c94],ECX      ; 004af327 | DAT_01c78c94
    MOV dword ptr [0x01c78c8c],EDX      ; 004af32d | DAT_01c78c8c
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 004af333
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010()
    ADD ESP,0x8                         ; 004af338
    POP EBP                             ; 004af33b
    POP EDI                             ; 004af33c
    POP ESI                             ; 004af33d
    POP EBX                             ; 004af33e
    RET                                 ; 004af33f

