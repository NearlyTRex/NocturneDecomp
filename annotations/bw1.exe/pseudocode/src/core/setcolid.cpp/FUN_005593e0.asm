; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_FUN_005593e0(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_mission.cpp_CDemonMission_buildSetActorList_FUN_0051b420 at 0051b463
;   core_mission.cpp_FUN_0051b7b0 at 0051b7e7
;   core_set.cpp_FUN_0054fc20 at 0054fc95
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005593e0
        ;   Label: core_setcolid.cpp_FUN_005593e0
    PUSH ESI                            ; 005593e1
    MOV EAX,dword ptr [ESP + 0xc]       ; 005593e2
    MOV ECX,dword ptr [EAX + 0x14d164]  ; 005593e6
    MOV dword ptr [EAX + 0x156db8],0x0  ; 005593ec
    XOR EDX,EDX                         ; 005593f6
    TEST ECX,ECX                        ; 005593f8
    JLE 0x0055941b                      ; 005593fa
        ;   XREF to: 0055941b (CONDITIONAL_JUMP)  ; LAB_0055941b
    MOV ECX,EAX                         ; 005593fc
    MOV EBX,dword ptr [ECX + 0x14d168]  ; 005593fe
        ;   Label: LAB_005593fe
    CMP dword ptr [EBX + 0x100],0x0     ; 00559404
    JZ 0x0055941e                       ; 0055940b
        ;   XREF to: 0055941e (CONDITIONAL_JUMP)  ; LAB_0055941e
    INC EDX                             ; 0055940d
        ;   Label: LAB_0055940d
    MOV EBX,dword ptr [EAX + 0x14d164]  ; 0055940e
    ADD ECX,0x4                         ; 00559414
    CMP EDX,EBX                         ; 00559417
    JL 0x005593fe                       ; 00559419
        ;   XREF to: 005593fe (CONDITIONAL_JUMP)  ; LAB_005593fe
    POP ESI                             ; 0055941b
        ;   Label: LAB_0055941b
    POP EBX                             ; 0055941c
    RET                                 ; 0055941d
    MOV ESI,dword ptr [EAX + 0x156db8]  ; 0055941e
        ;   Label: LAB_0055941e
    MOV dword ptr [EAX + ESI*0x4 + 0x156dbc],EBX ; 00559424
    INC dword ptr [EAX + 0x156db8]      ; 0055942b
    JMP 0x0055940d                      ; 00559431
        ;   XREF to: 0055940d (UNCONDITIONAL_JUMP)  ; LAB_0055940d

