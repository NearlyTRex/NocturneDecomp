; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendWithPoseData_FUN_0051cab0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[1]:
;   core_stranger.cpp_FUN_005384d0 at 005385aa
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0051cae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051cab0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_blendWithPoseData_FUN_0051cab0
    MOV EAX,dword ptr [ESP + 0xc]       ; 0051cab1
    MOV EDX,dword ptr [ESP + 0x18]      ; 0051cab5
    PUSH EDX                            ; 0051cab9
    MOV ECX,dword ptr [ESP + 0x18]      ; 0051caba
    PUSH ECX                            ; 0051cabe
    PUSH dword ptr [ESP + 0x18]         ; 0051cabf
    PUSH EAX                            ; 0051cac3
    ADD EAX,0xc                         ; 0051cac4
    PUSH EAX                            ; 0051cac7
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0051cac8
    PUSH EBX                            ; 0051cacc
    CALL core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0051cae0 ; 0051cacd
        ;   XREF to: 0051cae0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0051cae0()
    ADD ESP,0x18                        ; 0051cad2
    POP EBX                             ; 0051cad5
    RET                                 ; 0051cad6

