; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_freeAllModels_FUN_004624d0(void)
;
;
; XREF[2]:
;   core_main.c_FUN_004e4c70 at 004e4cb4
;   core_mission.cpp_FUN_004f76f0 at 004f76f5
;
; Referenced Globals:
;   undefined4 DAT_01b4b848
;
; Called Functions:
;   core_dmodel.cpp_FUN_00460e10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004624d0
        ;   Label: core_dmodel.cpp_freeAllModels_FUN_004624d0
    PUSH ESI                            ; 004624d1
    MOV EBX,0x1b4b84c                   ; 004624d2
    LEA ESI,[EBX + 0x39800]             ; 004624d7
    PUSH EBX                            ; 004624dd
        ;   Label: LAB_004624dd
    CALL core_dmodel.cpp_FUN_00460e10   ; 004624de
        ;   XREF to: 00460e10 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_FUN_00460e10()
    ADD EBX,0x398                       ; 004624e3
    ADD ESP,0x4                         ; 004624e9
    CMP EBX,ESI                         ; 004624ec
    JNZ 0x004624dd                      ; 004624ee
        ;   XREF to: 004624dd (CONDITIONAL_JUMP)  ; LAB_004624dd
    XOR EDX,EDX                         ; 004624f0
    MOV dword ptr [0x01b4b848],EDX      ; 004624f2 | DAT_01b4b848
    POP ESI                             ; 004624f8
    POP EBX                             ; 004624f9
    RET                                 ; 004624fa

