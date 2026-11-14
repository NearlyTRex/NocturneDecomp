; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_setCameraAmbientValue_FUN_005558f0(CDemonSet *this_ptr,int index,float value)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   index
; float            Stack[0xc]:4   value
;
; XREF[3]:
;   core_event.cpp_FUN_004a1d00 at 004a5085
;   core_game.cpp_CGame_processHotkeys_FUN_004d1a80 at 004d2498
;   core_set.cpp_CDemonSet_setCameraAmbientValueByGroup_FUN_00555970 at 005559a6
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00453540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005558f0
        ;   Label: core_set.cpp_CDemonSet_setCameraAmbientValue_FUN_005558f0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005558f1
    MOV ECX,dword ptr [ESP + 0xc]       ; 005558f5
    IMUL EAX,ECX,0x1a4                  ; 005558f9
    MOV EBX,dword ptr [ESP + 0x10]      ; 005558ff
    MOV dword ptr [EDX + EAX*0x1 + 0x14c],EBX ; 00555903
    CMP ECX,dword ptr [EDX + 0x15aeb8]  ; 0055590a
    JZ 0x00555914                       ; 00555910
        ;   XREF to: 00555914 (CONDITIONAL_JUMP)  ; LAB_00555914
    POP EBX                             ; 00555912
    RET                                 ; 00555913
    PUSH dword ptr [ESP + 0x10]         ; 00555914
        ;   Label: LAB_00555914
    PUSH 0x1fe37ec                      ; 00555918
    CALL core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00453540 ; 0055591d
        ;   XREF to: 00453540 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00453540(CDemonCamera * this_ptr, float intensity)
    ADD ESP,0x8                         ; 00555922
    POP EBX                             ; 00555925
    RET                                 ; 00555926

