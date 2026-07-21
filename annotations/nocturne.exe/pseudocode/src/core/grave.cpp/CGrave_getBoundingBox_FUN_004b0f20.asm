; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * core_grave_cpp_CGrave_getBoundingBox_FUN_004b0f20(int param_1,undefined4 *param_2)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   undefined4 DAT_005baf90
;   undefined4 DAT_01cc9454
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0f20
        ;   Label: core_grave.cpp_CGrave_getBoundingBox_FUN_004b0f20
    PUSH ESI                            ; 004b0f21
    SUB ESP,0x4                         ; 004b0f22
    MOV ECX,dword ptr [ESP + 0x10]      ; 004b0f25
    MOV EBX,dword ptr [ESP + 0x14]      ; 004b0f29
    MOV EDX,dword ptr [0x005baf90]      ; 004b0f2d | DAT_005baf90
    MOV ESI,dword ptr [EDX + 0x4]       ; 004b0f33 | DAT_01cc9454
    LEA EAX,[ECX + 0x150]               ; 004b0f36
    TEST ESI,ESI                        ; 004b0f3c
    JZ 0x004b0f8a                       ; 004b0f3e
        ;   XREF to: 004b0f8a (CONDITIONAL_JUMP)  ; LAB_004b0f8a
    PUSH EAX                            ; 004b0f40
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 004b0f41
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530()
    ADD ESP,0x4                         ; 004b0f46
    ADD EAX,0x338                       ; 004b0f49
    MOV EDX,EBX                         ; 004b0f4e
    MOV ECX,EAX                         ; 004b0f50
    CMP EBX,EAX                         ; 004b0f52
    JZ 0x004b0f66                       ; 004b0f54
        ;   XREF to: 004b0f66 (CONDITIONAL_JUMP)  ; LAB_004b0f66
    MOV ESI,dword ptr [EAX]             ; 004b0f56
    MOV dword ptr [EBX],ESI             ; 004b0f58
    MOV ESI,dword ptr [EAX + 0x4]       ; 004b0f5a
    MOV dword ptr [EBX + 0x4],ESI       ; 004b0f5d
    MOV ESI,dword ptr [EAX + 0x8]       ; 004b0f60
    MOV dword ptr [EBX + 0x8],ESI       ; 004b0f63
    LEA EAX,[EDX + 0xc]                 ; 004b0f66
        ;   Label: LAB_004b0f66
    LEA EDX,[ECX + 0xc]                 ; 004b0f69
    CMP EAX,EDX                         ; 004b0f6c
    JNZ 0x004b0f78                      ; 004b0f6e
        ;   XREF to: 004b0f78 (CONDITIONAL_JUMP)  ; LAB_004b0f78
    MOV EAX,EBX                         ; 004b0f70
        ;   Label: LAB_004b0f70
    ADD ESP,0x4                         ; 004b0f72
    POP ESI                             ; 004b0f75
    POP EBX                             ; 004b0f76
    RET                                 ; 004b0f77
    MOV ECX,dword ptr [EDX]             ; 004b0f78
        ;   Label: LAB_004b0f78
    MOV dword ptr [EAX],ECX             ; 004b0f7a
    MOV ECX,dword ptr [EDX + 0x4]       ; 004b0f7c
    MOV dword ptr [EAX + 0x4],ECX       ; 004b0f7f
    MOV ECX,dword ptr [EDX + 0x8]       ; 004b0f82
    MOV dword ptr [EAX + 0x8],ECX       ; 004b0f85
    JMP 0x004b0f70                      ; 004b0f88
        ;   XREF to: 004b0f70 (UNCONDITIONAL_JUMP)  ; LAB_004b0f70
    FLD float ptr [ECX + 0x2cc]         ; 004b0f8a
        ;   Label: LAB_004b0f8a
    CALL crt_math.c_round_FUN_00563a30  ; 004b0f90
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    PUSH EAX                            ; 004b0f95
    FISTP dword ptr [ESP + 0x4]         ; 004b0f96
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 004b0f9a
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530()
    ADD ESP,0x4                         ; 004b0f9f
    MOV EDX,dword ptr [ESP]             ; 004b0fa2
    MOV ECX,EAX                         ; 004b0fa5
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b0fa7
    SUB EAX,EDX                         ; 004b0fae
    SHL EAX,0x3                         ; 004b0fb0
    MOV EDX,dword ptr [ECX + 0x350]     ; 004b0fb3
    ADD EAX,EDX                         ; 004b0fb9
    MOV EDX,EBX                         ; 004b0fbb
    MOV ECX,EAX                         ; 004b0fbd
    CMP EBX,EAX                         ; 004b0fbf
    JZ 0x004b0fd3                       ; 004b0fc1
        ;   XREF to: 004b0fd3 (CONDITIONAL_JUMP)  ; LAB_004b0fd3
    MOV ESI,dword ptr [EAX]             ; 004b0fc3
    MOV dword ptr [EBX],ESI             ; 004b0fc5
    MOV ESI,dword ptr [EAX + 0x4]       ; 004b0fc7
    MOV dword ptr [EBX + 0x4],ESI       ; 004b0fca
    MOV ESI,dword ptr [EAX + 0x8]       ; 004b0fcd
    MOV dword ptr [EBX + 0x8],ESI       ; 004b0fd0
    LEA EAX,[EDX + 0xc]                 ; 004b0fd3
        ;   Label: LAB_004b0fd3
    LEA EDX,[ECX + 0xc]                 ; 004b0fd6
    CMP EAX,EDX                         ; 004b0fd9
    JZ 0x004b0f70                       ; 004b0fdb
        ;   XREF to: 004b0f70 (CONDITIONAL_JUMP)  ; LAB_004b0f70
    MOV ECX,dword ptr [EDX]             ; 004b0fdd
    MOV dword ptr [EAX],ECX             ; 004b0fdf
    MOV ECX,dword ptr [EDX + 0x4]       ; 004b0fe1
    MOV dword ptr [EAX + 0x4],ECX       ; 004b0fe4
    MOV ECX,dword ptr [EDX + 0x8]       ; 004b0fe7
    MOV dword ptr [EAX + 0x8],ECX       ; 004b0fea
    MOV EAX,EBX                         ; 004b0fed
    ADD ESP,0x4                         ; 004b0fef
    POP ESI                             ; 004b0ff2
    POP EBX                             ; 004b0ff3
    RET                                 ; 004b0ff4

