; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CBloodSplat_setupRenderState_FUN_004aeae0(void)
;
;
; XREF[1]:
;   core_gore.cpp_FUN_004afe80 at 004afeaa
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
;   undefined4 DAT_01c78c98
;   undefined4 DAT_01c78c9c
;   undefined4 DAT_01c78ca0
;   undefined4 DAT_01c78ca4
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aeae0
        ;   Label: core_gore.cpp_CBloodSplat_setupRenderState_FUN_004aeae0
    PUSH ESI                            ; 004aeae1
    PUSH EDI                            ; 004aeae2
    PUSH EBP                            ; 004aeae3
    MOV EDX,0x4                         ; 004aeae4
    MOV EBX,0x1                         ; 004aeae9
    MOV ESI,0x2                         ; 004aeaee
    MOV EDI,0x3                         ; 004aeaf3
    MOV EBP,0x80000                     ; 004aeaf8
    MOV EAX,0xf80000                    ; 004aeafd
    PUSH 0xffff                         ; 004aeb02
    XOR ECX,ECX                         ; 004aeb07
    MOV dword ptr [0x01c78c84],EDX      ; 004aeb09 | DAT_01c78c84
    MOV dword ptr [0x01c78c98],ECX      ; 004aeb0f | DAT_01c78c98
    MOV dword ptr [0x01c78c9c],EBX      ; 004aeb15 | DAT_01c78c9c
    MOV dword ptr [0x01c78ca0],ESI      ; 004aeb1b | DAT_01c78ca0
    MOV dword ptr [0x01c78ca4],EDI      ; 004aeb21 | DAT_01c78ca4
    MOV dword ptr [0x005c502c],EBP      ; 004aeb27 | DAT_005c502c
    MOV [0x005c5030],EAX                ; 004aeb2d | DAT_005c5030
    MOV [0x005c505c],EAX                ; 004aeb32 | DAT_005c505c
    MOV [0x005c5060],EAX                ; 004aeb37 | DAT_005c5060
    MOV [0x005c508c],EAX                ; 004aeb3c | DAT_005c508c
    MOV EAX,[0x005ae704]                ; 004aeb41 | DAT_005ae704
    MOV dword ptr [0x005c5090],EBP      ; 004aeb46 | DAT_005c5090
    PUSH EAX                            ; 004aeb4c | DAT_01b4d738
    MOV dword ptr [0x005c50bc],EBP      ; 004aeb4d | DAT_005c50bc
    MOV dword ptr [0x005c50c0],EBP      ; 004aeb53 | DAT_005c50c0
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 004aeb59
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010()
    ADD ESP,0x8                         ; 004aeb5e
    POP EBP                             ; 004aeb61
    POP EDI                             ; 004aeb62
    POP ESI                             ; 004aeb63
    POP EBX                             ; 004aeb64
    RET                                 ; 004aeb65

