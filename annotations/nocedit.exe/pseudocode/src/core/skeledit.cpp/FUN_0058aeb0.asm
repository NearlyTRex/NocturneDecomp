; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_skeledit.cpp_FUN_0058aeb0()
;
; Local Variables:
; undefined        Stack[-0x38]:1  local_38
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   core_skeledit.cpp_FUN_0058c190 at 0058c37c
;   core_skeledit.cpp_FUN_00592690 at 005929b5
;
; Called Functions:
;   core_skeledit.cpp_FUN_0058ac80
;   core_xform.cpp_clearTranslation_FUN_005f5370
;   core_xform.cpp_inverse_FUN_005f6210
;   core_xform.cpp_setRotationScaleIdentity_FUN_005f5190
;   crt_stack.c_stack_probe_FUN_005ff9f3
;
; *****************************************************************************

section .text

    PUSH 0x40                           ; 0058aeb0
        ;   Label: core_skeledit.cpp_FUN_0058aeb0
    CALL crt_stack.c_stack_probe_FUN_005ff9f3 ; 0058aeb5 | uint crt_stack.c_stack_probe_FUN_005ff9f3(uint stack_size)
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
    PUSH EBP                            ; 0058aeba
    SUB ESP,0x34                        ; 0058aebb
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0058aebe
    XOR EDX,EDX                         ; 0058aec2
    MOV ECX,dword ptr [EAX]             ; 0058aec4
    MOV dword ptr [ESP + 0x30],EDX      ; 0058aec6
    TEST ECX,ECX                        ; 0058aeca
    JLE 0x0058af23                      ; 0058aecc | LAB_0058af23
        ;   XREF to: 0058af23 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 0058aece
    PUSH ESI                            ; 0058aecf
    PUSH EBX                            ; 0058aed0
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0058aed1
    LEA EBP,[EAX + 0x58]                ; 0058aed5
    PUSH EBP                            ; 0058aed8
        ;   Label: LAB_0058aed8
    LEA ESI,[ESP + 0x10]                ; 0058aed9
    CALL core_xform.cpp_inverse_FUN_005f6210 ; 0058aedd | CMatrix3x4f * core_xform.cpp_inverse_FUN_005f6210(CMatrix3x4f * output_matrix, CMatrix3x4f * input_matrix)
        ;   XREF to: 005f6210 (UNCONDITIONAL_CALL)
    MOV EDI,EBX                         ; 0058aee2
    ADD ESP,0x4                         ; 0058aee4
    MOV ECX,0xc                         ; 0058aee7
    LEA ESI,[ESP + 0xc]                 ; 0058aeec
    PUSH EBX                            ; 0058aef0
    MOVSD.REP ES:EDI,ESI                ; 0058aef1
    CALL core_xform.cpp_clearTranslation_FUN_005f5370 ; 0058aef3 | void core_xform.cpp_clearTranslation_FUN_005f5370(CMatrix3x4f * matrix)
        ;   XREF to: 005f5370 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0058aef8
    PUSH EBP                            ; 0058aefb
    CALL core_xform.cpp_setRotationScaleIdentity_FUN_005f5190 ; 0058aefc | void core_xform.cpp_setRotationScaleIdentity_FUN_005f5190(CMatrix3x4f * matrix)
        ;   XREF to: 005f5190 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0058af01
    ADD EBX,0x30                        ; 0058af04
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0058af07
    MOV EAX,dword ptr [ESP + 0x48]      ; 0058af0b
    ADD EBP,0x84                        ; 0058af0f
    INC ESI                             ; 0058af15
    MOV EDI,dword ptr [EAX]             ; 0058af16
    MOV dword ptr [ESP + 0x3c],ESI      ; 0058af18
    CMP ESI,EDI                         ; 0058af1c
    JL 0x0058aed8                       ; 0058af1e | LAB_0058aed8
        ;   XREF to: 0058aed8 (CONDITIONAL_JUMP)
    POP EBX                             ; 0058af20
    POP ESI                             ; 0058af21
    POP EDI                             ; 0058af22
    MOV EBP,dword ptr [ESP + 0x3c]      ; 0058af23
        ;   Label: LAB_0058af23
    PUSH EBP                            ; 0058af27
    CALL core_skeledit.cpp_FUN_0058ac80 ; 0058af28 | undefined core_skeledit.cpp_FUN_0058ac80()
        ;   XREF to: 0058ac80 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0058af2d
    ADD ESP,0x34                        ; 0058af30
    POP EBP                             ; 0058af33
    RET                                 ; 0058af34

