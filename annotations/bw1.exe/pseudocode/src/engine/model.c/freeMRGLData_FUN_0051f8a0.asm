; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_model_c_freeMRGLData_FUN_0051f8a0(SMRGLHeaderExtended *param_1)
;
;
; XREF[1]:
;   engine_model.c_FUN_0051f920 at 0051fd64
;
; Called Functions:
;   crt_unknown.c_FUN_005c09f0
;   engine_boss.c_modelStructNotSupported3_FUN_0041d950
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0051f8a0
        ;   Label: engine_model.c_freeMRGLData_FUN_0051f8a0
    PUSH EBP                            ; 0051f8a1
    MOV EBP,dword ptr [ESP + 0xc]       ; 0051f8a2
    TEST EBP,EBP                        ; 0051f8a6
    JZ 0x0051f8c2                       ; 0051f8a8
        ;   XREF to: 0051f8c2 (CONDITIONAL_JUMP)  ; LAB_0051f8c2
    MOV EDX,dword ptr [EBP]             ; 0051f8aa
    MOV EDI,EBP                         ; 0051f8ad
    CMP EDX,0x20                        ; 0051f8af
    JZ 0x0051f8c5                       ; 0051f8b2
        ;   XREF to: 0051f8c5 (CONDITIONAL_JUMP)  ; LAB_0051f8c5
    CMP EDX,0x26                        ; 0051f8b4
    JNZ 0x0051f90e                      ; 0051f8b7
        ;   XREF to: 0051f90e (CONDITIONAL_JUMP)  ; LAB_0051f90e
    PUSH EBP                            ; 0051f8b9
    CALL engine_boss.c_modelStructNotSupported3_FUN_0041d950 ; 0051f8ba
        ;   XREF to: 0041d950 (UNCONDITIONAL_CALL)  ; void engine_boss.c_modelStructNotSupported3_FUN_0041d950(SMRGLHeaderExtended * mrgl_data)
    ADD ESP,0x4                         ; 0051f8bf
    POP EBP                             ; 0051f8c2
        ;   Label: LAB_0051f8c2
    POP EDI                             ; 0051f8c3
    RET                                 ; 0051f8c4
    PUSH ESI                            ; 0051f8c5
        ;   Label: LAB_0051f8c5
    PUSH EBX                            ; 0051f8c6
    MOV EBX,dword ptr [EBP + 0x14]      ; 0051f8c7
    PUSH EBX                            ; 0051f8ca
    CALL engine_model.c_freeMRGLData_FUN_0051f8a0 ; 0051f8cb
        ;   XREF to: 0051f8a0 (UNCONDITIONAL_CALL)  ; undefined engine_model.c_freeMRGLData_FUN_0051f8a0()
    ADD ESP,0x4                         ; 0051f8d0
    MOV ESI,dword ptr [EBP + 0x8]       ; 0051f8d3
    XOR EBX,EBX                         ; 0051f8d6
    TEST ESI,ESI                        ; 0051f8d8
    JLE 0x0051f900                      ; 0051f8da
        ;   XREF to: 0051f900 (CONDITIONAL_JUMP)  ; LAB_0051f900
    MOV ESI,EBP                         ; 0051f8dc
    MOV EAX,dword ptr [ESI + 0x118]     ; 0051f8de
        ;   Label: LAB_0051f8de
    PUSH EAX                            ; 0051f8e4
    ADD ESI,0x4                         ; 0051f8e5
    INC EBX                             ; 0051f8e8
    CALL engine_model.c_freeMRGLData_FUN_0051f8a0 ; 0051f8e9
        ;   XREF to: 0051f8a0 (UNCONDITIONAL_CALL)  ; undefined engine_model.c_freeMRGLData_FUN_0051f8a0()
    MOV EDX,dword ptr [EDI + 0x8]       ; 0051f8ee
    ADD ESP,0x4                         ; 0051f8f1
    CMP EBX,EDX                         ; 0051f8f4
    JL 0x0051f8de                       ; 0051f8f6
        ;   XREF to: 0051f8de (CONDITIONAL_JUMP)  ; LAB_0051f8de
    LEA EAX,[EAX]                       ; 0051f8f8
    MOV EDX,EDX                         ; 0051f8fe
    PUSH EBP                            ; 0051f900
        ;   Label: LAB_0051f900
    CALL crt_unknown.c_FUN_005c09f0     ; 0051f901
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 0051f906
    POP EBX                             ; 0051f909
    POP ESI                             ; 0051f90a
    POP EBP                             ; 0051f90b
    POP EDI                             ; 0051f90c
    RET                                 ; 0051f90d
    PUSH EBP                            ; 0051f90e
        ;   Label: LAB_0051f90e
    CALL crt_unknown.c_FUN_005c09f0     ; 0051f90f
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 0051f914
    POP EBP                             ; 0051f917
    POP EDI                             ; 0051f918
    RET                                 ; 0051f919

