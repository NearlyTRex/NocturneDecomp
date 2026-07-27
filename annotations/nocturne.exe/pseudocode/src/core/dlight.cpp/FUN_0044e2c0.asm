; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dlight_cpp_FUN_0044e2c0(int param_1)
;
;
; XREF[2]:
;   core_dlight.cpp_CDemonLight_init_FUN_0044e1e0 at 0044e1ea
;   core_dlight.cpp_FUN_0044e1c0 at 0044e1c5
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_freeMasterZBuffer_FUN_0044e440
;   crt_unknown.c_FUN_005638d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044e2c0
        ;   Label: core_dlight.cpp_FUN_0044e2c0
    PUSH ESI                            ; 0044e2c1
    PUSH EBP                            ; 0044e2c2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0044e2c3
    CMP dword ptr [EBX + 0x2f94],0x0    ; 0044e2c7
    JNZ 0x0044e304                      ; 0044e2ce
        ;   XREF to: 0044e304 (CONDITIONAL_JUMP)  ; LAB_0044e304
    PUSH EBX                            ; 0044e2d0
        ;   Label: LAB_0044e2d0
    CALL core_dlight.cpp_CDemonLight_freeMasterZBuffer_FUN_0044e440 ; 0044e2d1
        ;   XREF to: 0044e440 (UNCONDITIONAL_CALL)  ; undefined core_dlight.cpp_CDemonLight_freeMasterZBuffer_FUN_0044e440()
    MOV ESI,dword ptr [EBX + 0x2fa0]    ; 0044e2d6
    ADD ESP,0x4                         ; 0044e2dc
    TEST ESI,ESI                        ; 0044e2df
    JZ 0x0044e2f6                       ; 0044e2e1
        ;   XREF to: 0044e2f6 (CONDITIONAL_JUMP)  ; LAB_0044e2f6
    PUSH ESI                            ; 0044e2e3
    CALL crt_unknown.c_FUN_005638d0     ; 0044e2e4
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    ADD ESP,0x4                         ; 0044e2e9
    MOV dword ptr [EBX + 0x2fa0],0x0    ; 0044e2ec
    MOV EBP,dword ptr [EBX + 0x1c6c]    ; 0044e2f6
        ;   Label: LAB_0044e2f6
    TEST EBP,EBP                        ; 0044e2fc
    JNZ 0x0044e329                      ; 0044e2fe
        ;   XREF to: 0044e329 (CONDITIONAL_JUMP)  ; LAB_0044e329
    POP EBP                             ; 0044e300
    POP ESI                             ; 0044e301
    POP EBX                             ; 0044e302
    RET                                 ; 0044e303
    MOV ECX,dword ptr [EBX + 0x2f98]    ; 0044e304
        ;   Label: LAB_0044e304
    PUSH ECX                            ; 0044e30a
    CALL crt_unknown.c_FUN_005638d0     ; 0044e30b
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    MOV dword ptr [EBX + 0x2f94],0x0    ; 0044e310
    ADD ESP,0x4                         ; 0044e31a
    MOV dword ptr [EBX + 0x2f98],0x0    ; 0044e31d
    JMP 0x0044e2d0                      ; 0044e327
        ;   XREF to: 0044e2d0 (UNCONDITIONAL_JUMP)  ; LAB_0044e2d0
    PUSH EBP                            ; 0044e329
        ;   Label: LAB_0044e329
    CALL crt_unknown.c_FUN_005638d0     ; 0044e32a
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    ADD ESP,0x4                         ; 0044e32f
    MOV dword ptr [EBX + 0x1c6c],0x0    ; 0044e332
    POP EBP                             ; 0044e33c
    POP ESI                             ; 0044e33d
    POP EBX                             ; 0044e33e
    RET                                 ; 0044e33f

