; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_model_c_freeMRGLData_FUN_005008f0(SMRGLHeaderExtended *param_1)
;
;
; XREF[1]:
;   engine_model.c_FUN_00500970 at 00500db4
;
; Called Functions:
;   crt_unknown.c_FUN_005b86a0
;   engine_boss.c_modelStructNotSupported3_FUN_0041a4e0
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005008f0
        ;   Label: engine_model.c_freeMRGLData_FUN_005008f0
    PUSH EBP                            ; 005008f1
    MOV EBP,dword ptr [ESP + 0xc]       ; 005008f2
    TEST EBP,EBP                        ; 005008f6
    JZ 0x00500912                       ; 005008f8
        ;   XREF to: 00500912 (CONDITIONAL_JUMP)  ; LAB_00500912
    MOV EDX,dword ptr [EBP]             ; 005008fa
    MOV EDI,EBP                         ; 005008fd
    CMP EDX,0x20                        ; 005008ff
    JZ 0x00500915                       ; 00500902
        ;   XREF to: 00500915 (CONDITIONAL_JUMP)  ; LAB_00500915
    CMP EDX,0x26                        ; 00500904
    JNZ 0x0050095e                      ; 00500907
        ;   XREF to: 0050095e (CONDITIONAL_JUMP)  ; LAB_0050095e
    PUSH EBP                            ; 00500909
    CALL engine_boss.c_modelStructNotSupported3_FUN_0041a4e0 ; 0050090a
        ;   XREF to: 0041a4e0 (UNCONDITIONAL_CALL)  ; void engine_boss.c_modelStructNotSupported3_FUN_0041a4e0(SMRGLHeaderExtended * mrgl_data)
    ADD ESP,0x4                         ; 0050090f
    POP EBP                             ; 00500912
        ;   Label: LAB_00500912
    POP EDI                             ; 00500913
    RET                                 ; 00500914
    PUSH ESI                            ; 00500915
        ;   Label: LAB_00500915
    PUSH EBX                            ; 00500916
    MOV EBX,dword ptr [EBP + 0x14]      ; 00500917
    PUSH EBX                            ; 0050091a
    CALL engine_model.c_freeMRGLData_FUN_005008f0 ; 0050091b
        ;   XREF to: 005008f0 (UNCONDITIONAL_CALL)  ; undefined engine_model.c_freeMRGLData_FUN_005008f0()
    ADD ESP,0x4                         ; 00500920
    MOV ESI,dword ptr [EBP + 0x8]       ; 00500923
    XOR EBX,EBX                         ; 00500926
    TEST ESI,ESI                        ; 00500928
    JLE 0x00500950                      ; 0050092a
        ;   XREF to: 00500950 (CONDITIONAL_JUMP)  ; LAB_00500950
    MOV ESI,EBP                         ; 0050092c
    MOV EAX,dword ptr [ESI + 0x118]     ; 0050092e
        ;   Label: LAB_0050092e
    PUSH EAX                            ; 00500934
    ADD ESI,0x4                         ; 00500935
    INC EBX                             ; 00500938
    CALL engine_model.c_freeMRGLData_FUN_005008f0 ; 00500939
        ;   XREF to: 005008f0 (UNCONDITIONAL_CALL)  ; undefined engine_model.c_freeMRGLData_FUN_005008f0()
    MOV EDX,dword ptr [EDI + 0x8]       ; 0050093e
    ADD ESP,0x4                         ; 00500941
    CMP EBX,EDX                         ; 00500944
    JL 0x0050092e                       ; 00500946
        ;   XREF to: 0050092e (CONDITIONAL_JUMP)  ; LAB_0050092e
    LEA EAX,[EAX]                       ; 00500948
    MOV EDX,EDX                         ; 0050094e
    PUSH EBP                            ; 00500950
        ;   Label: LAB_00500950
    CALL crt_unknown.c_FUN_005b86a0     ; 00500951
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 00500956
    POP EBX                             ; 00500959
    POP ESI                             ; 0050095a
    POP EBP                             ; 0050095b
    POP EDI                             ; 0050095c
    RET                                 ; 0050095d
    PUSH EBP                            ; 0050095e
        ;   Label: LAB_0050095e
    CALL crt_unknown.c_FUN_005b86a0     ; 0050095f
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 00500964
    POP EBP                             ; 00500967
    POP EDI                             ; 00500968
    RET                                 ; 00500969

