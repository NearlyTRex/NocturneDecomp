; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00409cd0(int param_1)
;
;
; XREF[3]:
;   core_inv.cpp_CInventory_addItem_FUN_004bf360 at 004c0342
;   core_inv.cpp_CInventory_removeItem_FUN_004c07b0 at 004c083a
;   core_mission.cpp_CDemonMission_removeActor_FUN_004d8f90 at 004d8fb1
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00409cd0
        ;   Label: FUN_00409cd0
    TEST EAX,EAX                        ; 00409cd4
    JZ 0x00409cda                       ; 00409cd6
        ;   XREF to: 00409cda (CONDITIONAL_JUMP)  ; LAB_00409cda
    JNZ 0x00409cdb                      ; 00409cd8
        ;   XREF to: 00409cdb (CONDITIONAL_JUMP)  ; LAB_00409cdb
    RET                                 ; 00409cda
        ;   Label: LAB_00409cda
    PUSH 0x2                            ; 00409cdb
        ;   Label: LAB_00409cdb
    MOV EDX,dword ptr [EAX + 0x14c]     ; 00409cdd
    PUSH EAX                            ; 00409ce3
    CALL dword ptr [EDX + 0xc8]         ; 00409ce4
    ADD ESP,0x8                         ; 00409cea
    RET                                 ; 00409ced

