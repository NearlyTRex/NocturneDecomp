; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_trigger_cpp_CTrigger_getTargetPoints_FUN_005e0c30(CTrigger *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
;
; Referenced Globals:
;   float FLOAT_006557d4 = 0.5
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e0c30
        ;   Label: core_trigger.cpp_CTrigger_getTargetPoints_FUN_005e0c30
    SUB ESP,0x30                        ; 005e0c31
    MOV ECX,dword ptr [ESP + 0x38]      ; 005e0c34
    MOV EBX,dword ptr [ESP + 0x3c]      ; 005e0c38
    CMP dword ptr [ECX + 0x174],0x4     ; 005e0c3c
    JZ 0x005e0c4c                       ; 005e0c43
        ;   XREF to: 005e0c4c (CONDITIONAL_JUMP)  ; LAB_005e0c4c
    XOR EAX,EAX                         ; 005e0c45
    ADD ESP,0x30                        ; 005e0c47
    POP EBX                             ; 005e0c4a
    RET                                 ; 005e0c4b
    MOV EAX,ESP                         ; 005e0c4c
        ;   Label: LAB_005e0c4c
    PUSH EAX                            ; 005e0c4e
    MOV EDX,dword ptr [ECX + 0x154]     ; 005e0c4f
    PUSH ECX                            ; 005e0c55
    CALL dword ptr [EDX + 0x14]         ; 005e0c56
    LEA EDX,[EAX + 0xc]                 ; 005e0c59
    FLD float ptr [EAX]                 ; 005e0c5c
    FADD float ptr [EDX]                ; 005e0c5e
    ADD ESP,0x8                         ; 005e0c60
    FST float ptr [ESP + 0x24]          ; 005e0c63
    FLD float ptr [EAX + 0x4]           ; 005e0c67
    FADD float ptr [EDX + 0x4]          ; 005e0c6a
    FXCH                                ; 005e0c6d
    FLD float ptr [0x006557d4]          ; 005e0c6f | FLOAT_006557d4
    FXCH                                ; 005e0c75
    FMUL ST1                            ; 005e0c77
    FXCH ST2                            ; 005e0c79
    FST float ptr [ESP + 0x28]          ; 005e0c7b
    FLD float ptr [EAX + 0x8]           ; 005e0c7f
    FADD float ptr [EDX + 0x8]          ; 005e0c82
    FXCH                                ; 005e0c85
    FMUL ST2                            ; 005e0c87
    FXCH                                ; 005e0c89
    FST float ptr [ESP + 0x2c]          ; 005e0c8b
    FMULP ST2                           ; 005e0c8f
    LEA EAX,[ESP + 0x18]                ; 005e0c91
    FXCH ST2                            ; 005e0c95
    FSTP float ptr [ESP + 0x18]         ; 005e0c97
    FXCH                                ; 005e0c9b
    FSTP float ptr [ESP + 0x1c]         ; 005e0c9d
    FSTP float ptr [ESP + 0x20]         ; 005e0ca1
    CMP EBX,EAX                         ; 005e0ca5
    JZ 0x005e0cbd                       ; 005e0ca7
        ;   XREF to: 005e0cbd (CONDITIONAL_JUMP)  ; LAB_005e0cbd
    MOV EAX,dword ptr [ESP + 0x18]      ; 005e0ca9
    MOV dword ptr [EBX],EAX             ; 005e0cad
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005e0caf
    MOV dword ptr [EBX + 0x4],EAX       ; 005e0cb3
    MOV EAX,dword ptr [ESP + 0x20]      ; 005e0cb6
    MOV dword ptr [EBX + 0x8],EAX       ; 005e0cba
    MOV EAX,0x1                         ; 005e0cbd
        ;   Label: LAB_005e0cbd
    ADD ESP,0x30                        ; 005e0cc2
    POP EBX                             ; 005e0cc5
    RET                                 ; 005e0cc6

