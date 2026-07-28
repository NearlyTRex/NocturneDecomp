; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_FUN_0051f650(void)
;
;
; XREF[3]:
;   core_main.c_FUN_004c90e0 at 004c9357
;   core_mission.cpp_FUN_004d9900 at 004d990a
;   core_skeleton.cpp_freeAllSkeletons_FUN_0051f730 at 0051f737
;
; Referenced Globals:
;   undefined4 DAT_0268cef0
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_free_FUN_00517cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051f650
        ;   Label: core_skeleton.cpp_FUN_0051f650
    PUSH ESI                            ; 0051f651
    MOV EBX,0x268cef4                   ; 0051f652
    LEA ESI,[EBX + 0xab000]             ; 0051f657
    PUSH EBX                            ; 0051f65d
        ;   Label: LAB_0051f65d
    CALL core_skeleton.cpp_CDeformableModel_free_FUN_00517cc0 ; 0051f65e
        ;   XREF to: 00517cc0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_free_FUN_00517cc0(CDeformableModel * this_ptr)
    ADD EBX,0x2ac0                      ; 0051f663
    ADD ESP,0x4                         ; 0051f669
    CMP EBX,ESI                         ; 0051f66c
    JNZ 0x0051f65d                      ; 0051f66e
        ;   XREF to: 0051f65d (CONDITIONAL_JUMP)  ; LAB_0051f65d
    XOR EDX,EDX                         ; 0051f670
    MOV dword ptr [0x0268cef0],EDX      ; 0051f672 | DAT_0268cef0
    POP ESI                             ; 0051f678
    POP EBX                             ; 0051f679
    RET                                 ; 0051f67a

