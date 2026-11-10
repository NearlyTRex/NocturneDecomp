; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_prim_c_adjustNearPlaneTextureCoords_FUN_00515a10(int param_1,int param_2)
;
;
; XREF[4]:
;   core_asgaya.cpp_FUN_005a23c0 at 005a2679
;   engine_prim.c_renderIndexedPolygonAdvanced_FUN_00517480 at 0051765e
;   engine_prim.c_renderPolygonSoftware_FUN_00515e80 at 005160b6
;   engine_prim.c_renderScanlinePolygon_FUN_00516de0 at 00517111
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00515a10
        ;   Label: engine_prim.c_adjustNearPlaneTextureCoords_FUN_00515a10
    PUSH ESI                            ; 00515a11
    PUSH EDI                            ; 00515a12
    MOV EDI,dword ptr [ESP + 0x14]      ; 00515a13
    XOR ESI,ESI                         ; 00515a17
    TEST EDI,EDI                        ; 00515a19
    JLE 0x00515a6c                      ; 00515a1b
        ;   XREF to: 00515a6c (CONDITIONAL_JUMP)  ; LAB_00515a6c
    MOV ECX,dword ptr [ESP + 0x10]      ; 00515a1d
    MOV EDX,dword ptr [ECX + 0x8]       ; 00515a21
        ;   Label: LAB_00515a21
    CMP EDX,0x100                       ; 00515a24
    JLE 0x00515a70                      ; 00515a2a
        ;   XREF to: 00515a70 (CONDITIONAL_JUMP)  ; LAB_00515a70
    MOV EAX,0x7fffffff                  ; 00515a2c
    MOV EBX,EDX                         ; 00515a31
    MOV EDX,EAX                         ; 00515a33
    SAR EBX,0x4                         ; 00515a35
    SAR EDX,0x1f                        ; 00515a38
    IDIV EBX                            ; 00515a3b
    MOV EBX,EAX                         ; 00515a3d
    MOV EDX,dword ptr [ECX + 0x18]      ; 00515a3f
        ;   Label: LAB_00515a3f
    MOV EAX,EBX                         ; 00515a42
    SAR EDX,0x8                         ; 00515a44
    IMUL EDX                            ; 00515a47
    SHRD EAX,EDX,0x10                   ; 00515a49
    MOV EDX,dword ptr [ECX + 0x1c]      ; 00515a4d
    MOV dword ptr [ECX + 0x18],EAX      ; 00515a50
    SAR EDX,0x8                         ; 00515a53
    MOV EAX,EBX                         ; 00515a56
    ADD ECX,0x30                        ; 00515a58
    IMUL EDX                            ; 00515a5b
    SHRD EAX,EDX,0x10                   ; 00515a5d
    MOV dword ptr [ECX + -0x14],EAX     ; 00515a61
    INC ESI                             ; 00515a64
    MOV dword ptr [ECX + -0x28],EBX     ; 00515a65
    CMP ESI,EDI                         ; 00515a68
    JL 0x00515a21                       ; 00515a6a
        ;   XREF to: 00515a21 (CONDITIONAL_JUMP)  ; LAB_00515a21
    POP EDI                             ; 00515a6c
        ;   Label: LAB_00515a6c
    POP ESI                             ; 00515a6d
    POP EBX                             ; 00515a6e
    RET                                 ; 00515a6f
    MOV EBX,0x7fffffff                  ; 00515a70
        ;   Label: LAB_00515a70
    JMP 0x00515a3f                      ; 00515a75
        ;   XREF to: 00515a3f (UNCONDITIONAL_JUMP)  ; LAB_00515a3f

