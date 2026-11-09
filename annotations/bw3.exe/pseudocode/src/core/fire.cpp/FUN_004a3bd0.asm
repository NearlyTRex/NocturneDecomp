; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_004a3bd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)
;
;
; XREF[3]:
;   core_emitter.cpp_FUN_00487eb0 at 0048864f
;   core_hino.cpp_FUN_0059b960 at 0059c354
;   core_weather.cpp_FUN_0057c2e0 at 0057c57a
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_01d00eac
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_fire.cpp_FUN_0049f420
;   core_set.cpp_CDemonSet_initCameraShake_FUN_0053b440
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004a3bd0
        ;   Label: core_fire.cpp_FUN_004a3bd0
    PUSH dword ptr [ESP + 0x18]         ; 004a3bd1
    MOV EDX,dword ptr [ESP + 0x10]      ; 004a3bd5
    PUSH dword ptr [ESP + 0x14]         ; 004a3bd9
    PUSH EDX                            ; 004a3bdd
    MOV EDX,dword ptr [0x01d00eac]      ; 004a3bde | DAT_01d00eac
    LEA EAX,[EDX*0x4 + 0x0]             ; 004a3be4
    SUB EAX,EDX                         ; 004a3beb
    SHL EAX,0x4                         ; 004a3bed
    ADD EAX,0x1d00eb0                   ; 004a3bf0
    PUSH EAX                            ; 004a3bf5
    CALL core_fire.cpp_FUN_0049f420     ; 004a3bf6
        ;   XREF to: 0049f420 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_0049f420()
    MOV ECX,dword ptr [0x01d00eac]      ; 004a3bfb | DAT_01d00eac
    INC ECX                             ; 004a3c01
    ADD ESP,0x10                        ; 004a3c02
    MOV dword ptr [0x01d00eac],ECX      ; 004a3c05 | DAT_01d00eac
    CMP ECX,0x40                        ; 004a3c0b
    JGE 0x004a3c19                      ; 004a3c0e
        ;   XREF to: 004a3c19 (CONDITIONAL_JUMP)  ; LAB_004a3c19
    CMP dword ptr [ESP + 0x14],0x0      ; 004a3c10
    JNZ 0x004a3c2c                      ; 004a3c15
        ;   XREF to: 004a3c2c (CONDITIONAL_JUMP)  ; LAB_004a3c2c
    POP EBP                             ; 004a3c17
    RET                                 ; 004a3c18
    PUSH ESI                            ; 004a3c19
        ;   Label: LAB_004a3c19
    XOR ESI,ESI                         ; 004a3c1a
    MOV dword ptr [0x01d00eac],ESI      ; 004a3c1c | DAT_01d00eac
    POP ESI                             ; 004a3c22
    CMP dword ptr [ESP + 0x14],0x0      ; 004a3c23
    JNZ 0x004a3c2c                      ; 004a3c28
        ;   XREF to: 004a3c2c (CONDITIONAL_JUMP)  ; LAB_004a3c2c
    POP EBP                             ; 004a3c2a
    RET                                 ; 004a3c2b
    PUSH 0x3f800000                     ; 004a3c2c
        ;   Label: LAB_004a3c2c
    PUSH 0x0                            ; 004a3c31
    PUSH 0x0                            ; 004a3c33
    MOV EBP,dword ptr [0x00603b28]      ; 004a3c35 | g_CDemonSetPtr
    PUSH 0x42c80000                     ; 004a3c3b
    PUSH EBP                            ; 004a3c40 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_initCameraShake_FUN_0053b440 ; 004a3c41
        ;   XREF to: 0053b440 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_initCameraShake_FUN_0053b440(CDemonSet * this_ptr, float peak, float attack, float sustain, ...)
    ADD ESP,0x14                        ; 004a3c46
    POP EBP                             ; 004a3c49
    RET                                 ; 004a3c4a

