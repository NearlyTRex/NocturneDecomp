; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_door_cpp_CDoor_updateCollisionData_FUN_00481020(CDoor *this_ptr)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonMission g_CDemonMissionInstance
;   undefined4 DAT_02f33744
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_door.cpp_CDoor_reposition_FUN_0047fd20
;   core_setcolid.cpp_CDemonSet_FUN_00574440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481020
        ;   Label: core_door.cpp_CDoor_updateCollisionData_FUN_00481020
    MOV EBX,dword ptr [ESP + 0x8]       ; 00481021
    MOV EAX,[0x0067d550]                ; 00481025 | g_CDemonMissionInstance | g_CDemonMissionPtr
    CMP dword ptr [EAX + 0x4],0x0       ; 0048102a | DAT_02f33744
    JNZ 0x00481039                      ; 0048102e
        ;   XREF to: 00481039 (CONDITIONAL_JUMP)  ; LAB_00481039
    CMP dword ptr [EBX + 0x2e0],0x0     ; 00481030
    JZ 0x0048103b                       ; 00481037
        ;   XREF to: 0048103b (CONDITIONAL_JUMP)  ; LAB_0048103b
    POP EBX                             ; 00481039
        ;   Label: LAB_00481039
    RET                                 ; 0048103a
    PUSH EBX                            ; 0048103b
        ;   Label: LAB_0048103b
    CALL core_door.cpp_CDoor_reposition_FUN_0047fd20 ; 0048103c
        ;   XREF to: 0047fd20 (UNCONDITIONAL_CALL)  ; void core_door.cpp_CDoor_reposition_FUN_0047fd20(CDoor * this_ptr)
    ADD ESP,0x4                         ; 00481041
    PUSH EBX                            ; 00481044
    MOV EBX,dword ptr [0x006810c8]      ; 00481045 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EBX                            ; 0048104b | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_FUN_00574440 ; 0048104c
        ;   XREF to: 00574440 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_FUN_00574440(CDemonSet * this_ptr)
    ADD ESP,0x8                         ; 00481051
    POP EBX                             ; 00481054
    RET                                 ; 00481055

