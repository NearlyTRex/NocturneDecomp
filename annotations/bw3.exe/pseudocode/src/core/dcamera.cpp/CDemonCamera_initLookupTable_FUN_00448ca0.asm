; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_initLookupTable_FUN_00448ca0(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_CDemonSet_initScene_FUN_00534420 at 00534475
;
; Referenced Globals:
;   undefined4 DAT_005fba1c
;   undefined4 DAT_007fa460
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_generateFogGrid_FUN_0044f740
;   core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00450980
;   core_dcamera.cpp_CDemonCamera_init_FUN_00448d70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448ca0
        ;   Label: core_dcamera.cpp_CDemonCamera_initLookupTable_FUN_00448ca0
    PUSH ESI                            ; 00448ca1
    PUSH EDI                            ; 00448ca2
    PUSH EBP                            ; 00448ca3
    SUB ESP,0x8                         ; 00448ca4
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00448ca7
    CMP dword ptr [0x007fa460],0x0      ; 00448cab | DAT_007fa460
    JZ 0x00448d41                       ; 00448cb2
        ;   XREF to: 00448d41 (CONDITIONAL_JUMP)  ; LAB_00448d41
    MOV EAX,[0x005fba1c]                ; 00448cb8 | DAT_005fba1c
        ;   Label: LAB_00448cb8
    CMP EAX,0x1e0                       ; 00448cbd
    JG 0x00448d5f                       ; 00448cc2
        ;   XREF to: 00448d5f (CONDITIONAL_JUMP)  ; LAB_00448d5f
    PUSH EAX                            ; 00448cc8
        ;   Label: LAB_00448cc8
    PUSH EBX                            ; 00448cc9
    CALL core_dcamera.cpp_CDemonCamera_init_FUN_00448d70 ; 00448cca
        ;   XREF to: 00448d70 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_init_FUN_00448d70(CDemonCamera * this_ptr, int screen_height)
    ADD ESP,0x8                         ; 00448ccf
    PUSH EBX                            ; 00448cd2
    CALL core_dcamera.cpp_CDemonCamera_generateFogGrid_FUN_0044f740 ; 00448cd3
        ;   XREF to: 0044f740 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_generateFogGrid_FUN_0044f740(CDemonCamera * this_ptr)
    MOV EBX,0x40                        ; 00448cd8
    ADD ESP,0x4                         ; 00448cdd
    XOR EBP,EBP                         ; 00448ce0
    MOV dword ptr [ESP],EBX             ; 00448ce2
    MOV dword ptr [ESP + 0x4],EBP       ; 00448ce5
    MOV ESI,dword ptr [ESP + 0x4]       ; 00448ce9
        ;   Label: LAB_00448ce9
    MOV EBX,EBP                         ; 00448ced
    MOV EDI,dword ptr [ESP]             ; 00448cef
    SHL EBX,0x6                         ; 00448cf2
    IMUL ECX,EBP,0x0                    ; 00448cf5
    MOV EDX,ECX                         ; 00448cf8
        ;   Label: LAB_00448cf8
    MOV EAX,ECX                         ; 00448cfa
    SAR EDX,0x1f                        ; 00448cfc
    SHL EDX,0x4                         ; 00448cff
    SBB EAX,EDX                         ; 00448d02
    SAR EAX,0x4                         ; 00448d04
    MOV EDX,EAX                         ; 00448d07
    SAR EDX,0x1f                        ; 00448d09
    SHL EDX,0x2                         ; 00448d0c
    SBB EAX,EDX                         ; 00448d0f
    SAR EAX,0x2                         ; 00448d11
    INC EBX                             ; 00448d14
    ADD ECX,ESI                         ; 00448d15
    MOV byte ptr [EBX + 0x135daaf],AL   ; 00448d17
    CMP EBX,EDI                         ; 00448d1d
    JNZ 0x00448cf8                      ; 00448d1f
        ;   XREF to: 00448cf8 (CONDITIONAL_JUMP)  ; LAB_00448cf8
    MOV EAX,dword ptr [ESP + 0x4]       ; 00448d21
    MOV EDI,dword ptr [ESP]             ; 00448d25
    INC EBP                             ; 00448d28
    INC EAX                             ; 00448d29
    ADD EDI,0x40                        ; 00448d2a
    MOV dword ptr [ESP + 0x4],EAX       ; 00448d2d
    MOV dword ptr [ESP],EDI             ; 00448d31
    CMP EBP,0x40                        ; 00448d34
    JL 0x00448ce9                       ; 00448d37
        ;   XREF to: 00448ce9 (CONDITIONAL_JUMP)  ; LAB_00448ce9
    ADD ESP,0x8                         ; 00448d39
    POP EBP                             ; 00448d3c
    POP EDI                             ; 00448d3d
    POP ESI                             ; 00448d3e
    POP EBX                             ; 00448d3f
    RET                                 ; 00448d40
    PUSH 0x10000                        ; 00448d41
        ;   Label: LAB_00448d41
    PUSH EBX                            ; 00448d46
    CALL core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00450980 ; 00448d47
        ;   XREF to: 00450980 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00450980(CDemonCamera * this_ptr, int gamma_value)
    MOV ECX,0x1                         ; 00448d4c
    ADD ESP,0x8                         ; 00448d51
    MOV dword ptr [0x007fa460],ECX      ; 00448d54 | DAT_007fa460
    JMP 0x00448cb8                      ; 00448d5a
        ;   XREF to: 00448cb8 (UNCONDITIONAL_JUMP)  ; LAB_00448cb8
    MOV EAX,0x1e0                       ; 00448d5f
        ;   Label: LAB_00448d5f
    JMP 0x00448cc8                      ; 00448d64
        ;   XREF to: 00448cc8 (UNCONDITIONAL_JUMP)  ; LAB_00448cc8

