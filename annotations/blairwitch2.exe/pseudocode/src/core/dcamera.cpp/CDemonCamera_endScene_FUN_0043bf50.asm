; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_endScene_FUN_0043bf50(CDemonCamera *this_ptr,int skip_zbuffer_copy)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   skip_zbuffer_copy
;
; XREF[3]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_0052ddf0 at 0052e56d
;   core_set.cpp_FUN_0052d3be at 0052d6ec
;   core_set.cpp_FUN_0052f2a0 at 0052f810
;
; Referenced Globals:
;   TerminatedCString s_core_dcamera_cpp_005ce33f
;   TerminatedCString s_CDemonCamera_endScene_Sc_005ce353
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01c2b64c
;   undefined4 DAT_01c37788
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_0264bba0
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_resetSceneCamera_FUN_0043b7d0
;   core_main.c_FUN_004e4500
;   crt_watcom.c__memcpy_FUN_00492718
;   engine_drender.cpp_popViewport_FUN_0046b740
;   engine_special.cpp_FUN_0055f5b0
;   engine_special.cpp_masterZBuffer_FUN_00560030
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043bf50
        ;   Label: core_dcamera.cpp_CDemonCamera_endScene_FUN_0043bf50
    PUSH ESI                            ; 0043bf51
    PUSH EBP                            ; 0043bf52
    MOV EBX,dword ptr [ESP + 0x10]      ; 0043bf53
    CMP dword ptr [EBX + 0x11e4],0x0    ; 0043bf57
    JZ 0x0043bffc                       ; 0043bf5e
        ;   XREF to: 0043bffc (CONDITIONAL_JUMP)  ; LAB_0043bffc
    MOV dword ptr [EBX + 0x11e4],0x0    ; 0043bf64
    CMP dword ptr [0x0264bba0],0x0      ; 0043bf6e | DAT_0264bba0
        ;   Label: LAB_0043bf6e
    JZ 0x0043bf7c                       ; 0043bf75
        ;   XREF to: 0043bf7c (CONDITIONAL_JUMP)  ; LAB_0043bf7c
    CALL engine_special.cpp_FUN_0055f5b0 ; 0043bf77
        ;   XREF to: 0055f5b0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_FUN_0055f5b0()
    MOV EBP,dword ptr [EBX + 0x168]     ; 0043bf7c
        ;   Label: LAB_0043bf7c
    TEST EBP,EBP                        ; 0043bf82
    JNZ 0x0043bfe1                      ; 0043bf84
        ;   XREF to: 0043bfe1 (CONDITIONAL_JUMP)  ; LAB_0043bfe1
    CMP dword ptr [ESP + 0x14],0x0      ; 0043bf86
    JNZ 0x0043bfe1                      ; 0043bf8b
        ;   XREF to: 0043bfe1 (CONDITIONAL_JUMP)  ; LAB_0043bfe1
    CMP dword ptr [0x01c37788],0x0      ; 0043bf8d | DAT_01c37788
    JNZ 0x0043c024                      ; 0043bf94
        ;   XREF to: 0043c024 (CONDITIONAL_JUMP)  ; LAB_0043c024
    MOV ECX,dword ptr [EBX + 0x148]     ; 0043bf9a
        ;   Label: LAB_0043bf9a
    XOR ESI,ESI                         ; 0043bfa0
    TEST ECX,ECX                        ; 0043bfa2
    JLE 0x0043bfe1                      ; 0043bfa4
        ;   XREF to: 0043bfe1 (CONDITIONAL_JUMP)  ; LAB_0043bfe1
    PUSH EDI                            ; 0043bfa6
    XOR EDI,EDI                         ; 0043bfa7
    MOV ECX,dword ptr [EBX + 0x144]     ; 0043bfa9
        ;   Label: LAB_0043bfa9
    IMUL ECX,ESI                        ; 0043bfaf
    MOV EDX,dword ptr [EBX + 0x144]     ; 0043bfb2
    SHL EDX,0x2                         ; 0043bfb8
    MOV EAX,dword ptr [EBX + 0x15c]     ; 0043bfbb
    PUSH EDX                            ; 0043bfc1
    SHL ECX,0x2                         ; 0043bfc2
    MOV EDX,dword ptr [EDI + 0x1c2b64c] ; 0043bfc5 | DAT_01c2b64c
    ADD ECX,EAX                         ; 0043bfcb
    INC ESI                             ; 0043bfcd
    CALL crt_watcom.c__memcpy_FUN_00492718 ; 0043bfce
        ;   XREF to: 00492718 (UNCONDITIONAL_CALL)  ; undefined crt_watcom.c__memcpy_FUN_00492718()
    MOV EBP,dword ptr [EBX + 0x148]     ; 0043bfd3
    ADD EDI,0x4                         ; 0043bfd9
    CMP ESI,EBP                         ; 0043bfdc
    JL 0x0043bfa9                       ; 0043bfde
        ;   XREF to: 0043bfa9 (CONDITIONAL_JUMP)  ; LAB_0043bfa9
    POP EDI                             ; 0043bfe0
    MOV EAX,[0x0060b280]                ; 0043bfe1 | DAT_0060b280
        ;   Label: LAB_0043bfe1
    PUSH EAX                            ; 0043bfe6 | DAT_01ba5c50
    CALL engine_drender.cpp_popViewport_FUN_0046b740 ; 0043bfe7
        ;   XREF to: 0046b740 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_popViewport_FUN_0046b740()
    ADD ESP,0x4                         ; 0043bfec
    PUSH EBX                            ; 0043bfef
    CALL core_dcamera.cpp_CDemonCamera_resetSceneCamera_FUN_0043b7d0 ; 0043bff0
        ;   XREF to: 0043b7d0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_resetSceneCamera_FUN_0043b7d0(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 0043bff5
    POP EBP                             ; 0043bff8
    POP ESI                             ; 0043bff9
    POP EBX                             ; 0043bffa
    RET                                 ; 0043bffb
    MOV ECX,0x5ce33f                    ; 0043bffc | = "..\\core\\dcamera.cpp"
        ;   Label: LAB_0043bffc
    MOV ESI,0x3ee                       ; 0043c001
    PUSH 0x5ce353                       ; 0043c006 | = "CDemonCamera::endScene - Scene not open!"
    MOV dword ptr [0x01d046a0],ECX      ; 0043c00b | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0043c011 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0043c017
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0043c01c
    JMP 0x0043bf6e                      ; 0043c01f
        ;   XREF to: 0043bf6e (UNCONDITIONAL_JUMP)  ; LAB_0043bf6e
    PUSH EBP                            ; 0043c024
        ;   Label: LAB_0043c024
    CALL engine_special.cpp_masterZBuffer_FUN_00560030 ; 0043c025
        ;   XREF to: 00560030 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_masterZBuffer_FUN_00560030(int slot)
    ADD ESP,0x4                         ; 0043c02a
    JMP 0x0043bf9a                      ; 0043c02d
        ;   XREF to: 0043bf9a (UNCONDITIONAL_JUMP)  ; LAB_0043bf9a

