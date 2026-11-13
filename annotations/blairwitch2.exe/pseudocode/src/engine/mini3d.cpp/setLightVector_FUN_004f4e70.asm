; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_setLightVector_FUN_004f4e70(CVector3f *direction,float intensity)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   direction
; float            Stack[0x8]:4   intensity
;
; Referenced Globals:
;   undefined4 DAT_01c37788
;   undefined4 DAT_01d09918
;   undefined4 DAT_0264bc7c
;
; Called Functions:
;   engine_mini3d.cpp_updateTransform_FUN_004f3740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f4e70
        ;   Label: engine_mini3d.cpp_setLightVector_FUN_004f4e70
    SUB ESP,0x10                        ; 004f4e71
    MOV EBX,dword ptr [ESP + 0x18]      ; 004f4e74
    CALL engine_mini3d.cpp_updateTransform_FUN_004f3740 ; 004f4e78
        ;   XREF to: 004f3740 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_updateTransform_FUN_004f3740()
    FLD float ptr [EBX + 0x4]           ; 004f4e7d
    FMUL ST0                            ; 004f4e80
    FLD float ptr [EBX]                 ; 004f4e82
    FMUL ST0                            ; 004f4e84
    FADDP                               ; 004f4e86
    FLD float ptr [EBX + 0x8]           ; 004f4e88
    FMUL ST0                            ; 004f4e8b
    FADDP                               ; 004f4e8d
    FSQRT                               ; 004f4e8f
    FLD float ptr [EBX]                 ; 004f4e91
    FLD float ptr [ESP + 0x1c]          ; 004f4e93
    FDIVRP ST2,ST0                      ; 004f4e97
    FMUL ST1                            ; 004f4e99
    MOV EDX,dword ptr [0x01d09918]      ; 004f4e9b | DAT_01d09918
    FSTP float ptr [EDX + 0x30]         ; 004f4ea1
    FLD float ptr [EBX + 0x4]           ; 004f4ea4
    FMUL ST1                            ; 004f4ea7
    FSTP float ptr [EDX + 0x34]         ; 004f4ea9
    FMUL float ptr [EBX + 0x8]          ; 004f4eac
    MOV ECX,dword ptr [0x0264bc7c]      ; 004f4eaf | DAT_0264bc7c
    FSTP float ptr [EDX + 0x38]         ; 004f4eb5
    TEST ECX,ECX                        ; 004f4eb8
    JZ 0x004f4ec5                       ; 004f4eba
        ;   XREF to: 004f4ec5 (CONDITIONAL_JUMP)  ; LAB_004f4ec5
    CMP dword ptr [0x01c37788],0x0      ; 004f4ebc | DAT_01c37788
    JNZ 0x004f4eca                      ; 004f4ec3
        ;   XREF to: 004f4eca (CONDITIONAL_JUMP)  ; LAB_004f4eca
    ADD ESP,0x10                        ; 004f4ec5
        ;   Label: LAB_004f4ec5
    POP EBX                             ; 004f4ec8
    RET                                 ; 004f4ec9
    MOV EAX,dword ptr [EDX + 0x30]      ; 004f4eca
        ;   Label: LAB_004f4eca
    MOV dword ptr [ESP],EAX             ; 004f4ecd
    MOV EAX,dword ptr [EDX + 0x34]      ; 004f4ed0
    MOV dword ptr [ESP + 0x4],EAX       ; 004f4ed3
    MOV EAX,dword ptr [EDX + 0x38]      ; 004f4ed7
    MOV dword ptr [ESP + 0x8],EAX       ; 004f4eda
    MOV EAX,ESP                         ; 004f4ede
    PUSH dword ptr [ESP + 0x1c]         ; 004f4ee0
    PUSH EAX                            ; 004f4ee4
    CALL dword ptr [0x0264bc7c]         ; 004f4ee5 | DAT_0264bc7c
    ADD ESP,0x8                         ; 004f4eeb
    ADD ESP,0x10                        ; 004f4eee
    POP EBX                             ; 004f4ef1
    RET                                 ; 004f4ef2

