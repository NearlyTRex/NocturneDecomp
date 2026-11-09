; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_projectTransformedPoint_FUN_004e8eb0(int *param_1)
;
;
; XREF[3]:
;   core_flame.cpp_FUN_0049f850 at 004a006e
;   core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_005386e0 at 00538813
;   engine_matrix.c_projectCachedPoint_FUN_004e8e90 at 004e8ea6
;
; Referenced Globals:
;   undefined4 DAT_01c35e38
;   undefined4 DAT_01c35e3c
;   undefined4 DAT_01c35e40
;   undefined4 DAT_01c35e44
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004e8eb0
        ;   Label: engine_matrix.c_projectTransformedPoint_FUN_004e8eb0
    PUSH EDI                            ; 004e8eb1
    PUSH EBP                            ; 004e8eb2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004e8eb3
    MOV EBP,dword ptr [ESI + 0x4]       ; 004e8eb7
    MOV ECX,dword ptr [ESI + 0x8]       ; 004e8eba
    MOV EDI,dword ptr [ESI]             ; 004e8ebd
    TEST ECX,ECX                        ; 004e8ebf
    JLE 0x004e8f43                      ; 004e8ec1
        ;   XREF to: 004e8f43 (CONDITIONAL_JUMP)  ; LAB_004e8f43
    XOR EAX,EAX                         ; 004e8ec7
    CMP EDI,ECX                         ; 004e8ec9
    JLE 0x004e8ed2                      ; 004e8ecb
        ;   XREF to: 004e8ed2 (CONDITIONAL_JUMP)  ; LAB_004e8ed2
    MOV EAX,0x1                         ; 004e8ecd
    MOV EDX,ECX                         ; 004e8ed2
        ;   Label: LAB_004e8ed2
    NEG EDX                             ; 004e8ed4
    CMP EDI,EDX                         ; 004e8ed6
    JGE 0x004e8edc                      ; 004e8ed8
        ;   XREF to: 004e8edc (CONDITIONAL_JUMP)  ; LAB_004e8edc
    OR AL,0x2                           ; 004e8eda
    CMP EBP,ECX                         ; 004e8edc
        ;   Label: LAB_004e8edc
    JLE 0x004e8ee2                      ; 004e8ede
        ;   XREF to: 004e8ee2 (CONDITIONAL_JUMP)  ; LAB_004e8ee2
    OR AL,0x4                           ; 004e8ee0
    MOV EDX,ECX                         ; 004e8ee2
        ;   Label: LAB_004e8ee2
    NEG EDX                             ; 004e8ee4
    CMP EBP,EDX                         ; 004e8ee6
    JGE 0x004e8eec                      ; 004e8ee8
        ;   XREF to: 004e8eec (CONDITIONAL_JUMP)  ; LAB_004e8eec
    OR AL,0x8                           ; 004e8eea
    TEST EAX,EAX                        ; 004e8eec
        ;   Label: LAB_004e8eec
    JZ 0x004e8efc                       ; 004e8eee
        ;   XREF to: 004e8efc (CONDITIONAL_JUMP)  ; LAB_004e8efc
    OR EAX,0x80000000                   ; 004e8ef0
    MOV dword ptr [ESI + 0x10],EAX      ; 004e8ef5
    POP EBP                             ; 004e8ef8
    POP EDI                             ; 004e8ef9
    POP ESI                             ; 004e8efa
    RET                                 ; 004e8efb
    PUSH EBX                            ; 004e8efc
        ;   Label: LAB_004e8efc
    MOV EAX,0x7fffffff                  ; 004e8efd
    MOV EDX,EAX                         ; 004e8f02
    SAR EDX,0x1f                        ; 004e8f04
    IDIV ECX                            ; 004e8f07
    MOV EBX,ECX                         ; 004e8f09
    MOV EDX,dword ptr [0x01c35e38]      ; 004e8f0b | DAT_01c35e38
    MOV dword ptr [ESI + 0xc],EAX       ; 004e8f11
    MOV EAX,EDI                         ; 004e8f14
    IMUL EDX                            ; 004e8f16
    IDIV EBX                            ; 004e8f18
    MOV EDX,dword ptr [0x01c35e40]      ; 004e8f1a | DAT_01c35e40
    MOV EBX,ECX                         ; 004e8f20
    ADD EAX,EDX                         ; 004e8f22
    MOV EDX,dword ptr [0x01c35e3c]      ; 004e8f24 | DAT_01c35e3c
    MOV dword ptr [ESI + 0x10],EAX      ; 004e8f2a
    MOV EAX,EBP                         ; 004e8f2d
    IMUL EDX                            ; 004e8f2f
    IDIV EBX                            ; 004e8f31
    MOV EDX,dword ptr [0x01c35e44]      ; 004e8f33 | DAT_01c35e44
    ADD EAX,EDX                         ; 004e8f39
    MOV dword ptr [ESI + 0x14],EAX      ; 004e8f3b
    POP EBX                             ; 004e8f3e
    POP EBP                             ; 004e8f3f
    POP EDI                             ; 004e8f40
    POP ESI                             ; 004e8f41
    RET                                 ; 004e8f42
    MOV dword ptr [ESI + 0x10],0x80000010 ; 004e8f43
        ;   Label: LAB_004e8f43
    POP EBP                             ; 004e8f4a
    POP EDI                             ; 004e8f4b
    POP ESI                             ; 004e8f4c
    RET                                 ; 004e8f4d

