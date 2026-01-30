; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_setcolid_cpp_CDemonSet_FUN_005743e0(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   core_mission.cpp_CDemonMission_buildActiveSetActorList_FUN_00524120 at 0052416c
;   core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60 at 00523eb8
;   core_msnedit.cpp_CDemonMission_FUN_005390f0 at 005399c3
;   core_msnedit.cpp_CDemonMission_FUN_0053e220 at 0053e559
;   core_set.cpp_CDemonSet_FUN_0056b810 at 0056b8a7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005743e0
        ;   Label: core_setcolid.cpp_CDemonSet_FUN_005743e0
    PUSH ESI                            ; 005743e1
    MOV EAX,dword ptr [ESP + 0xc]       ; 005743e2
    MOV ECX,dword ptr [EAX + 0x14d154]  ; 005743e6
    MOV dword ptr [EAX + 0x156da8],0x0  ; 005743ec
    XOR EDX,EDX                         ; 005743f6
    TEST ECX,ECX                        ; 005743f8
    JLE 0x0057441b                      ; 005743fa
        ;   XREF to: 0057441b (CONDITIONAL_JUMP)  ; LAB_0057441b
    MOV ECX,EAX                         ; 005743fc
    MOV EBX,dword ptr [ECX + 0x14d158]  ; 005743fe
        ;   Label: LAB_005743fe
    CMP dword ptr [EBX + 0x100],0x0     ; 00574404
    JZ 0x0057441e                       ; 0057440b
        ;   XREF to: 0057441e (CONDITIONAL_JUMP)  ; LAB_0057441e
    INC EDX                             ; 0057440d
        ;   Label: LAB_0057440d
    MOV EBX,dword ptr [EAX + 0x14d154]  ; 0057440e
    ADD ECX,0x4                         ; 00574414
    CMP EDX,EBX                         ; 00574417
    JL 0x005743fe                       ; 00574419
        ;   XREF to: 005743fe (CONDITIONAL_JUMP)  ; LAB_005743fe
    POP ESI                             ; 0057441b
        ;   Label: LAB_0057441b
    POP EBX                             ; 0057441c
    RET                                 ; 0057441d
    MOV ESI,dword ptr [EAX + 0x156da8]  ; 0057441e
        ;   Label: LAB_0057441e
    MOV dword ptr [EAX + ESI*0x4 + 0x156dac],EBX ; 00574424
    INC dword ptr [EAX + 0x156da8]      ; 0057442b
    JMP 0x0057440d                      ; 00574431
        ;   XREF to: 0057440d (UNCONDITIONAL_JUMP)  ; LAB_0057440d

