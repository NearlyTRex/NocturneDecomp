; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_podmain_cpp_CDemonPod_ctor_FUN_004f93c0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined1* PTR_core_podmain.cpp_FUN_004f93e0_005a14f4 = 004f93e0
;
; Called Functions:
;   engine_pod.cpp_CPod_ctor_FUN_004f8810
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004f93c0
        ;   Label: core_podmain.cpp_CDemonPod_ctor_FUN_004f93c0
    PUSH EDX                            ; 004f93c4
    CALL engine_pod.cpp_CPod_ctor_FUN_004f8810 ; 004f93c5
        ;   XREF to: 004f8810 (UNCONDITIONAL_CALL)  ; undefined engine_pod.cpp_CPod_ctor_FUN_004f8810()
    ADD ESP,0x4                         ; 004f93ca
    MOV dword ptr [EAX + 0x194],0x5a14f4 ; 004f93cd | PTR_core_podmain.cpp_FUN_004f93e0_005a14f4
    RET                                 ; 004f93d7

