; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_FUN_00534640(CDemonSet *this_ptr,int index,float value)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   index
; float            Stack[0xc]:4   value
;
; XREF[3]:
;   core_event.cpp_FUN_00489670 at 0048c7d1
;   core_game.cpp_FUN_004b82e0 at 004b8844
;   core_set.cpp_CDemonSet_setCameraAmbientValueByGroup_FUN_005346c0 at 005346f6
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00441e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00534640
        ;   Label: core_set.cpp_FUN_00534640
    MOV EDX,dword ptr [ESP + 0x8]       ; 00534641
    MOV ECX,dword ptr [ESP + 0xc]       ; 00534645
    IMUL EAX,ECX,0x1a4                  ; 00534649
    MOV EBX,dword ptr [ESP + 0x10]      ; 0053464f
    MOV dword ptr [EDX + EAX*0x1 + 0x14c],EBX ; 00534653
    CMP ECX,dword ptr [EDX + 0x15aeb8]  ; 0053465a
    JZ 0x00534664                       ; 00534660
        ;   XREF to: 00534664 (CONDITIONAL_JUMP)  ; LAB_00534664
    POP EBX                             ; 00534662
    RET                                 ; 00534663
    PUSH dword ptr [ESP + 0x10]         ; 00534664
        ;   Label: LAB_00534664
    PUSH 0x1fc7838                      ; 00534668
    CALL core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00441e80 ; 0053466d
        ;   XREF to: 00441e80 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00441e80(CDemonCamera * this_ptr, float intensity)
    ADD ESP,0x8                         ; 00534672
    POP EBX                             ; 00534675
    RET                                 ; 00534676

