; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dcamera.cpp_CDemonCamera_initLookupTable_FUN_0044c0f0(CDemonCamera * this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_CDemonSet_initScene_FUN_0056aa10 at 0056aa65
;
; Referenced Globals:
;   int g_WindowHeight = 0xc8
;   char[4096] g_CameraLookupTable
;   undefined4 DAT_013d9759
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_generateFogGrid_FUN_004529a0
;   core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00453bd0
;   core_dcamera.cpp_CDemonCamera_init_FUN_0044c190
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044c0f0
        ;   Label: core_dcamera.cpp_CDemonCamera_initLookupTable_FUN_0044c0f0
    PUSH ESI                            ; 0044c0f1
    PUSH EDI                            ; 0044c0f2
    PUSH EBP                            ; 0044c0f3
    SUB ESP,0x8                         ; 0044c0f4
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0044c0f7
    PUSH 0x10000                        ; 0044c0fb
    PUSH EBX                            ; 0044c100
    CALL core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00453bd0 ; 0044c101
        ;   XREF to: 00453bd0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00453bd0(CDemonCamera * this_ptr, int gamma_value)
    ADD ESP,0x8                         ; 0044c106
    MOV EDX,dword ptr [0x00679398]      ; 0044c109 | g_WindowHeight
    PUSH EDX                            ; 0044c10f
    PUSH EBX                            ; 0044c110
    CALL core_dcamera.cpp_CDemonCamera_init_FUN_0044c190 ; 0044c111
        ;   XREF to: 0044c190 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_init_FUN_0044c190(CDemonCamera * this_ptr, int screen_height)
    ADD ESP,0x8                         ; 0044c116
    PUSH EBX                            ; 0044c119
    CALL core_dcamera.cpp_CDemonCamera_generateFogGrid_FUN_004529a0 ; 0044c11a
        ;   XREF to: 004529a0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_generateFogGrid_FUN_004529a0(CDemonCamera * this_ptr)
    MOV ECX,0x40                        ; 0044c11f
    ADD ESP,0x4                         ; 0044c124
    XOR EBP,EBP                         ; 0044c127
    MOV dword ptr [ESP],ECX             ; 0044c129
    MOV dword ptr [ESP + 0x4],EBP       ; 0044c12c
    MOV ESI,dword ptr [ESP + 0x4]       ; 0044c130
        ;   Label: LAB_0044c130
    MOV EBX,EBP                         ; 0044c134
    MOV EDI,dword ptr [ESP]             ; 0044c136
    SHL EBX,0x6                         ; 0044c139
    IMUL ECX,EBP,0x0                    ; 0044c13c
    MOV EDX,ECX                         ; 0044c13f
        ;   Label: LAB_0044c13f
    MOV EAX,ECX                         ; 0044c141
    SAR EDX,0x1f                        ; 0044c143
    SHL EDX,0x4                         ; 0044c146
    SBB EAX,EDX                         ; 0044c149
    SAR EAX,0x4                         ; 0044c14b
    MOV EDX,EAX                         ; 0044c14e
    SAR EDX,0x1f                        ; 0044c150
    SHL EDX,0x2                         ; 0044c153
    SBB EAX,EDX                         ; 0044c156
    SAR EAX,0x2                         ; 0044c158
    INC EBX                             ; 0044c15b
    ADD ECX,ESI                         ; 0044c15c
    MOV byte ptr [EBX + 0x13d9757],AL   ; 0044c15e | g_CameraLookupTable | DAT_013d9759
    CMP EBX,EDI                         ; 0044c164
    JNZ 0x0044c13f                      ; 0044c166
        ;   XREF to: 0044c13f (CONDITIONAL_JUMP)  ; LAB_0044c13f
    MOV EDI,dword ptr [ESP + 0x4]       ; 0044c168
    MOV ESI,dword ptr [ESP]             ; 0044c16c
    INC EBP                             ; 0044c16f
    INC EDI                             ; 0044c170
    ADD ESI,0x40                        ; 0044c171
    MOV dword ptr [ESP + 0x4],EDI       ; 0044c174
    MOV dword ptr [ESP],ESI             ; 0044c178
    CMP EBP,0x40                        ; 0044c17b
    JL 0x0044c130                       ; 0044c17e
        ;   XREF to: 0044c130 (CONDITIONAL_JUMP)  ; LAB_0044c130
    ADD ESP,0x8                         ; 0044c180
    POP EBP                             ; 0044c183
    POP EDI                             ; 0044c184
    POP ESI                             ; 0044c185
    POP EBX                             ; 0044c186
    RET                                 ; 0044c187

