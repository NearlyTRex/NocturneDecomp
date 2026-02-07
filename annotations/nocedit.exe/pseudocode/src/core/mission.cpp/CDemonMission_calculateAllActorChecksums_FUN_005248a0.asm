; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_mission_cpp_CDemonMission_calculateAllActorChecksums_FUN_005248a0 (CDemonMission *this_ptr,uint *checksum)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; uint *           Stack[0x8]:4   checksum
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005248a0
        ;   Label: core_mission.cpp_CDemonMission_calculateAllActorChecksums_FUN_005248a0
    PUSH ESI                            ; 005248a1
    MOV ESI,dword ptr [ESP + 0x10]      ; 005248a2
    MOV EBX,dword ptr [ESP + 0xc]       ; 005248a6
    MOV EBX,dword ptr [EBX + 0x548]     ; 005248aa
    TEST EBX,EBX                        ; 005248b0
    JZ 0x005248d0                       ; 005248b2
        ;   XREF to: 005248d0 (CONDITIONAL_JUMP)  ; LAB_005248d0
    PUSH ESI                            ; 005248b4
        ;   Label: LAB_005248b4
    MOV EAX,dword ptr [EBX + 0x154]     ; 005248b5
    PUSH EBX                            ; 005248bb
    CALL dword ptr [EAX + 0xc0]         ; 005248bc
    MOV EBX,dword ptr [EBX + 0x14c]     ; 005248c2
    ADD ESP,0x8                         ; 005248c8
    TEST EBX,EBX                        ; 005248cb
    JNZ 0x005248b4                      ; 005248cd
        ;   XREF to: 005248b4 (CONDITIONAL_JUMP)  ; LAB_005248b4
    NOP                                 ; 005248cf
    POP ESI                             ; 005248d0
        ;   Label: LAB_005248d0
    POP EBX                             ; 005248d1
    RET                                 ; 005248d2

