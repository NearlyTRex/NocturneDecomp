; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_FUN_004d93d0(CDemonMission *this_ptr,char *param_2)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   param_2
;
; Called Functions:
;   core_mission.cpp_CDemonMission_FUN_004d8fc0
;   core_mission.cpp_CDemonMission_loadSet_FUN_004d9020
;   core_mission.cpp_CDemonMission_prepareAllActors_FUN_004d8db0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d93d0
        ;   Label: core_mission.cpp_CDemonMission_FUN_004d93d0
    PUSH ESI                            ; 004d93d1
    PUSH EDI                            ; 004d93d2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004d93d3
    MOV ESI,dword ptr [ESP + 0x14]      ; 004d93d7
    LEA EDI,[EBX + 0x114]               ; 004d93db
    MOV dword ptr [EBX + 0x110],0x1     ; 004d93e1
    PUSH EDI                            ; 004d93eb
    MOV AL,byte ptr [ESI]               ; 004d93ec
        ;   Label: LAB_004d93ec
    MOV byte ptr [EDI],AL               ; 004d93ee
    CMP AL,0x0                          ; 004d93f0
    JZ 0x004d9404                       ; 004d93f2
        ;   XREF to: 004d9404 (CONDITIONAL_JUMP)  ; LAB_004d9404
    MOV AL,byte ptr [ESI + 0x1]         ; 004d93f4
    ADD ESI,0x2                         ; 004d93f7
    MOV byte ptr [EDI + 0x1],AL         ; 004d93fa
    ADD EDI,0x2                         ; 004d93fd
    CMP AL,0x0                          ; 004d9400
    JNZ 0x004d93ec                      ; 004d9402
        ;   XREF to: 004d93ec (CONDITIONAL_JUMP)  ; LAB_004d93ec
    POP EDI                             ; 004d9404
        ;   Label: LAB_004d9404
    PUSH EBX                            ; 004d9405
    MOV dword ptr [EBX],0x0             ; 004d9406
    CALL core_mission.cpp_CDemonMission_FUN_004d8fc0 ; 004d940c
        ;   XREF to: 004d8fc0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_FUN_004d8fc0(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 004d9411
    PUSH EBX                            ; 004d9414
    CALL core_mission.cpp_CDemonMission_prepareAllActors_FUN_004d8db0 ; 004d9415
        ;   XREF to: 004d8db0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_prepareAllActors_FUN_004d8db0(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 004d941a
    PUSH 0x0                            ; 004d941d
    PUSH EBX                            ; 004d941f
    MOV dword ptr [EBX],0xffffffff      ; 004d9420
    CALL core_mission.cpp_CDemonMission_loadSet_FUN_004d9020 ; 004d9426
        ;   XREF to: 004d9020 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_loadSet_FUN_004d9020(CDemonMission * this_ptr, int set_index)
    ADD ESP,0x8                         ; 004d942b
    POP EDI                             ; 004d942e
    POP ESI                             ; 004d942f
    POP EBX                             ; 004d9430
    RET                                 ; 004d9431

