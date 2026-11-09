; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_FUN_0053eda0(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_mission.cpp_CDemonMission_buildSetActorList_FUN_004f6bf0 at 004f6c33
;   core_mission.cpp_FUN_004f6f80 at 004f6fb7
;   core_set.cpp_FUN_005353e0 at 00535455
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053eda0
        ;   Label: core_setcolid.cpp_FUN_0053eda0
    PUSH ESI                            ; 0053eda1
    MOV EAX,dword ptr [ESP + 0xc]       ; 0053eda2
    MOV ECX,dword ptr [EAX + 0x14d164]  ; 0053eda6
    MOV dword ptr [EAX + 0x156db8],0x0  ; 0053edac
    XOR EDX,EDX                         ; 0053edb6
    TEST ECX,ECX                        ; 0053edb8
    JLE 0x0053eddb                      ; 0053edba
        ;   XREF to: 0053eddb (CONDITIONAL_JUMP)  ; LAB_0053eddb
    MOV ECX,EAX                         ; 0053edbc
    MOV EBX,dword ptr [ECX + 0x14d168]  ; 0053edbe
        ;   Label: LAB_0053edbe
    CMP dword ptr [EBX + 0x100],0x0     ; 0053edc4
    JZ 0x0053edde                       ; 0053edcb
        ;   XREF to: 0053edde (CONDITIONAL_JUMP)  ; LAB_0053edde
    INC EDX                             ; 0053edcd
        ;   Label: LAB_0053edcd
    MOV EBX,dword ptr [EAX + 0x14d164]  ; 0053edce
    ADD ECX,0x4                         ; 0053edd4
    CMP EDX,EBX                         ; 0053edd7
    JL 0x0053edbe                       ; 0053edd9
        ;   XREF to: 0053edbe (CONDITIONAL_JUMP)  ; LAB_0053edbe
    POP ESI                             ; 0053eddb
        ;   Label: LAB_0053eddb
    POP EBX                             ; 0053eddc
    RET                                 ; 0053eddd
    MOV ESI,dword ptr [EAX + 0x156db8]  ; 0053edde
        ;   Label: LAB_0053edde
    MOV dword ptr [EAX + ESI*0x4 + 0x156dbc],EBX ; 0053ede4
    INC dword ptr [EAX + 0x156db8]      ; 0053edeb
    JMP 0x0053edcd                      ; 0053edf1
        ;   XREF to: 0053edcd (UNCONDITIONAL_JUMP)  ; LAB_0053edcd

