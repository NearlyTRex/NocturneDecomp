; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_set.cpp_CDemonSet_FUN_00570e20(CDemonSet * this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_event.cpp_CEventList_FUN_004aacc0 at 004ac765
;   core_game.cpp_SaveRelated_FUN_004dcee0 at 004dd7c5
;   core_set.cpp_CDemonSet_FUN_00570e60 at 00570e96
;
; Referenced Globals:
;   CDemonCamera g_CDemonCameraInstance
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_004528e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570e20
        ;   Label: core_set.cpp_CDemonSet_FUN_00570e20
    MOV EDX,dword ptr [ESP + 0x8]       ; 00570e21
    MOV ECX,dword ptr [ESP + 0xc]       ; 00570e25
    IMUL EAX,ECX,0x1a4                  ; 00570e29
    MOV EBX,dword ptr [ESP + 0x10]      ; 00570e2f
    MOV dword ptr [EDX + EAX*0x1 + 0x14c],EBX ; 00570e33
    CMP ECX,dword ptr [EDX + 0x15aea4]  ; 00570e3a
    JZ 0x00570e44                       ; 00570e40 | LAB_00570e44
        ;   XREF to: 00570e44 (CONDITIONAL_JUMP)
    POP EBX                             ; 00570e42
    RET                                 ; 00570e43
    PUSH dword ptr [ESP + 0x10]         ; 00570e44
        ;   Label: LAB_00570e44
    PUSH 0x32758e4                      ; 00570e48 | CDemonCamera g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_004528e0 ; 00570e4d | void core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_004528e0(CDemonCamera * this_ptr, float intensity)
        ;   XREF to: 004528e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00570e52
    POP EBX                             ; 00570e55
    RET                                 ; 00570e56

