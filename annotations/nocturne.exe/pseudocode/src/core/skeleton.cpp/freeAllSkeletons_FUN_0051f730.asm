; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_freeAllSkeletons_FUN_0051f730(void)
;
;
; XREF[2]:
;   core_main.c_FUN_004c90e0 at 004c935c
;   core_mission.cpp_FUN_004d9900 at 004d990f
;
; Referenced Globals:
;   undefined4 DAT_00670b60
;   undefined4 DAT_02737ef4
;
; Called Functions:
;   core_skeleton.cpp_FUN_005174e0
;   core_skeleton.cpp_FUN_0051f650
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051f730
        ;   Label: core_skeleton.cpp_freeAllSkeletons_FUN_0051f730
    PUSH ESI                            ; 0051f731
    MOV EBX,0x2737ef8                   ; 0051f732
    CALL core_skeleton.cpp_FUN_0051f650 ; 0051f737
        ;   XREF to: 0051f650 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0051f650()
    LEA ESI,[EBX + 0x670b60]            ; 0051f73c | DAT_00670b60
    PUSH EBX                            ; 0051f742
        ;   Label: LAB_0051f742
    CALL core_skeleton.cpp_FUN_005174e0 ; 0051f743
        ;   XREF to: 005174e0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005174e0()
    ADD EBX,0x2937c                     ; 0051f748
    ADD ESP,0x4                         ; 0051f74e
    CMP EBX,ESI                         ; 0051f751
    JNZ 0x0051f742                      ; 0051f753
        ;   XREF to: 0051f742 (CONDITIONAL_JUMP)  ; LAB_0051f742
    XOR EDX,EDX                         ; 0051f755
    MOV dword ptr [0x02737ef4],EDX      ; 0051f757 | DAT_02737ef4
    POP ESI                             ; 0051f75d
    POP EBX                             ; 0051f75e
    RET                                 ; 0051f75f

