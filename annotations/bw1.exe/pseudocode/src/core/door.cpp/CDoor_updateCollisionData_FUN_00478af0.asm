; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_door_cpp_CDoor_updateCollisionData_FUN_00478af0(CDoor *this_ptr)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_0061f650
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_01d2c900
;   undefined4 DAT_01d2d908
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_door.cpp_FUN_00477540
;   core_setcolid.cpp_CDemonSet_castVoxelShadow_FUN_00559440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00478af0
        ;   Label: core_door.cpp_CDoor_updateCollisionData_FUN_00478af0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00478af1
    MOV EAX,[0x0061f650]                ; 00478af5 | DAT_0061f650 | DAT_01d2c900
    CMP dword ptr [EAX + 0x1008],0x0    ; 00478afa | DAT_01d2d908
    JNZ 0x00478b0c                      ; 00478b01
        ;   XREF to: 00478b0c (CONDITIONAL_JUMP)  ; LAB_00478b0c
    CMP dword ptr [EBX + 0x2e0],0x0     ; 00478b03
    JZ 0x00478b0e                       ; 00478b0a
        ;   XREF to: 00478b0e (CONDITIONAL_JUMP)  ; LAB_00478b0e
    POP EBX                             ; 00478b0c
        ;   Label: LAB_00478b0c
    RET                                 ; 00478b0d
    PUSH EBX                            ; 00478b0e
        ;   Label: LAB_00478b0e
    CALL core_door.cpp_FUN_00477540     ; 00478b0f
        ;   XREF to: 00477540 (UNCONDITIONAL_CALL)  ; undefined core_door.cpp_FUN_00477540()
    ADD ESP,0x4                         ; 00478b14
    PUSH EBX                            ; 00478b17
    MOV EBX,dword ptr [0x00622c18]      ; 00478b18 | g_CDemonSetPtr
    PUSH EBX                            ; 00478b1e | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_castVoxelShadow_FUN_00559440 ; 00478b1f
        ;   XREF to: 00559440 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_castVoxelShadow_FUN_00559440(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00478b24
    POP EBX                             ; 00478b27
    RET                                 ; 00478b28

