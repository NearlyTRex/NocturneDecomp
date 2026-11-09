; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_004a3c50(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)
;
;
; XREF[7]:
;   core_asgaya.cpp_FUN_005a0be0 at 005a13eb
;   core_emitter.cpp_FUN_00487eb0 at 004888ad
;   core_exorcism.cpp_FUN_0048a420 at 0048aa3a
;   core_fire.cpp_FUN_0049fdf0 at 0049ffd4
;   core_hino.cpp_FUN_0059b960 at 0059cfae
;   core_lightgun.cpp_FUN_004e1070 at 004e1345
;   unkafter_lightgun.cpp_FUN_004e2050 at 004e2d2e
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_01d00eac
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_fire.cpp_FUN_0049f470
;   core_set.cpp_CDemonSet_initCameraShake_FUN_0053b440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3c50
        ;   Label: core_fire.cpp_FUN_004a3c50
    PUSH ESI                            ; 004a3c51
    PUSH EDI                            ; 004a3c52
    MOV EDX,dword ptr [ESP + 0x30]      ; 004a3c53
    PUSH EDX                            ; 004a3c57
    MOV ECX,dword ptr [ESP + 0x2c]      ; 004a3c58
    PUSH dword ptr [ESP + 0x30]         ; 004a3c5c
    MOV EBX,dword ptr [ESP + 0x20]      ; 004a3c60
    PUSH ECX                            ; 004a3c64
    MOV ESI,dword ptr [ESP + 0x20]      ; 004a3c65
    MOV EDX,dword ptr [0x01d00eac]      ; 004a3c69 | DAT_01d00eac
    PUSH dword ptr [ESP + 0x30]         ; 004a3c6f
    LEA EAX,[EDX*0x4 + 0x0]             ; 004a3c73
    PUSH dword ptr [ESP + 0x30]         ; 004a3c7a
    SUB EAX,EDX                         ; 004a3c7e
    PUSH EBX                            ; 004a3c80
    SHL EAX,0x4                         ; 004a3c81
    PUSH ESI                            ; 004a3c84
    ADD EAX,0x1d00eb0                   ; 004a3c85
    PUSH EAX                            ; 004a3c8a
    CALL core_fire.cpp_FUN_0049f470     ; 004a3c8b
        ;   XREF to: 0049f470 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_0049f470()
    MOV EDI,dword ptr [0x01d00eac]      ; 004a3c90 | DAT_01d00eac
    INC EDI                             ; 004a3c96
    ADD ESP,0x20                        ; 004a3c97
    MOV dword ptr [0x01d00eac],EDI      ; 004a3c9a | DAT_01d00eac
    CMP EDI,0x40                        ; 004a3ca0
    JGE 0x004a3cb0                      ; 004a3ca3
        ;   XREF to: 004a3cb0 (CONDITIONAL_JUMP)  ; LAB_004a3cb0
    CMP dword ptr [ESP + 0x1c],0x0      ; 004a3ca5
    JNZ 0x004a3cc2                      ; 004a3caa
        ;   XREF to: 004a3cc2 (CONDITIONAL_JUMP)  ; LAB_004a3cc2
    POP EDI                             ; 004a3cac
    POP ESI                             ; 004a3cad
    POP EBX                             ; 004a3cae
    RET                                 ; 004a3caf
    XOR EAX,EAX                         ; 004a3cb0
        ;   Label: LAB_004a3cb0
    MOV [0x01d00eac],EAX                ; 004a3cb2 | DAT_01d00eac
    CMP dword ptr [ESP + 0x1c],0x0      ; 004a3cb7
    JNZ 0x004a3cc2                      ; 004a3cbc
        ;   XREF to: 004a3cc2 (CONDITIONAL_JUMP)  ; LAB_004a3cc2
    POP EDI                             ; 004a3cbe
    POP ESI                             ; 004a3cbf
    POP EBX                             ; 004a3cc0
    RET                                 ; 004a3cc1
    PUSH 0x3f800000                     ; 004a3cc2
        ;   Label: LAB_004a3cc2
    PUSH 0x0                            ; 004a3cc7
    PUSH 0x0                            ; 004a3cc9
    MOV ECX,dword ptr [0x00603b28]      ; 004a3ccb | g_CDemonSetPtr
    PUSH 0x42c80000                     ; 004a3cd1
    PUSH ECX                            ; 004a3cd6 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_initCameraShake_FUN_0053b440 ; 004a3cd7
        ;   XREF to: 0053b440 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_initCameraShake_FUN_0053b440(CDemonSet * this_ptr, float peak, float attack, float sustain, ...)
    ADD ESP,0x14                        ; 004a3cdc
    POP EDI                             ; 004a3cdf
    POP ESI                             ; 004a3ce0
    POP EBX                             ; 004a3ce1
    RET                                 ; 004a3ce2

