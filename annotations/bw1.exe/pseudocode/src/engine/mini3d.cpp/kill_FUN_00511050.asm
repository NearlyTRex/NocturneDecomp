; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_kill_FUN_00511050(void)
;
;
; Referenced Globals:
;   int g_INT_01d227dc
;   float* g_FLOAT_PTR_01d227e0
;   float* g_FLOAT_PTR_01d227e4
;   void* g_PTR_01d25f2c
;   void* g_PTR_01d25f30
;   float* g_FLOAT_PTR_01d2ad74
;
; Called Functions:
;   crt_unknown.c_debugFree_FUN_005c09f0
;   engine_mini3d.cpp_free32_FUN_00514cf0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01d2ad74]      ; 00511050 | g_FLOAT_PTR_01d2ad74
        ;   Label: engine_mini3d.cpp_kill_FUN_00511050
    PUSH EDX                            ; 00511056
    CALL engine_mini3d.cpp_free32_FUN_00514cf0 ; 00511057
        ;   XREF to: 00514cf0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_free32_FUN_00514cf0(void * ptr)
    XOR ECX,ECX                         ; 0051105c
    ADD ESP,0x4                         ; 0051105e
    MOV dword ptr [0x01d2ad74],ECX      ; 00511061 | g_FLOAT_PTR_01d2ad74
    LEA EAX,[EAX]                       ; 00511067
    LEA EDX,[EDX]                       ; 0051106d
    PUSH EBP                            ; 00511070
    MOV EDX,dword ptr [0x01d227dc]      ; 00511071 | g_INT_01d227dc
    TEST EDX,EDX                        ; 00511077
    JNZ 0x00511087                      ; 00511079
        ;   XREF to: 00511087 (CONDITIONAL_JUMP)  ; LAB_00511087
    MOV EBP,dword ptr [0x01d25f2c]      ; 0051107b | g_PTR_01d25f2c
    TEST EBP,EBP                        ; 00511081
    JNZ 0x005110b2                      ; 00511083
        ;   XREF to: 005110b2 (CONDITIONAL_JUMP)  ; LAB_005110b2
    POP EBP                             ; 00511085
    RET                                 ; 00511086
    PUSH EBX                            ; 00511087
        ;   Label: LAB_00511087
    PUSH EDX                            ; 00511088
    CALL crt_unknown.c_debugFree_FUN_005c09f0 ; 00511089
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_debugFree_FUN_005c09f0(void * ptr)
    XOR EBX,EBX                         ; 0051108e
    ADD ESP,0x4                         ; 00511090
    MOV dword ptr [0x01d227dc],EBX      ; 00511093 | g_INT_01d227dc
    MOV dword ptr [0x01d227e0],EBX      ; 00511099 | g_FLOAT_PTR_01d227e0
    MOV dword ptr [0x01d227e4],EBX      ; 0051109f | g_FLOAT_PTR_01d227e4
    POP EBX                             ; 005110a5
    MOV EBP,dword ptr [0x01d25f2c]      ; 005110a6 | g_PTR_01d25f2c
    TEST EBP,EBP                        ; 005110ac
    JNZ 0x005110b2                      ; 005110ae
        ;   XREF to: 005110b2 (CONDITIONAL_JUMP)  ; LAB_005110b2
    POP EBP                             ; 005110b0
    RET                                 ; 005110b1
    PUSH EBP                            ; 005110b2
        ;   Label: LAB_005110b2
    CALL crt_unknown.c_debugFree_FUN_005c09f0 ; 005110b3
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_debugFree_FUN_005c09f0(void * ptr)
    ADD ESP,0x4                         ; 005110b8
    MOV EDX,dword ptr [0x01d25f30]      ; 005110bb | g_PTR_01d25f30
    PUSH EDX                            ; 005110c1
    CALL crt_unknown.c_debugFree_FUN_005c09f0 ; 005110c2
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_debugFree_FUN_005c09f0(void * ptr)
    XOR ECX,ECX                         ; 005110c7
    ADD ESP,0x4                         ; 005110c9
    MOV dword ptr [0x01d25f2c],ECX      ; 005110cc | g_PTR_01d25f2c
    MOV dword ptr [0x01d25f30],ECX      ; 005110d2 | g_PTR_01d25f30
    POP EBP                             ; 005110d8
    RET                                 ; 005110d9

