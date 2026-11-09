; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_FUN_00537fc0(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_mission.cpp_CDemonMission_buildSetActorList_FUN_004fc4c0 at 004fc503
;   core_mission.cpp_FUN_004fc820 at 004fc857
;   core_set.cpp_FUN_0052e940 at 0052e9b5
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00537fc0
        ;   Label: core_setcolid.cpp_FUN_00537fc0
    PUSH ESI                            ; 00537fc1
    MOV EAX,dword ptr [ESP + 0xc]       ; 00537fc2
    MOV ECX,dword ptr [EAX + 0x14d164]  ; 00537fc6
    MOV dword ptr [EAX + 0x156db8],0x0  ; 00537fcc
    XOR EDX,EDX                         ; 00537fd6
    TEST ECX,ECX                        ; 00537fd8
    JLE 0x00537ffb                      ; 00537fda
        ;   XREF to: 00537ffb (CONDITIONAL_JUMP)  ; LAB_00537ffb
    MOV ECX,EAX                         ; 00537fdc
    MOV EBX,dword ptr [ECX + 0x14d168]  ; 00537fde
        ;   Label: LAB_00537fde
    CMP dword ptr [EBX + 0x100],0x0     ; 00537fe4
    JZ 0x00537ffe                       ; 00537feb
        ;   XREF to: 00537ffe (CONDITIONAL_JUMP)  ; LAB_00537ffe
    INC EDX                             ; 00537fed
        ;   Label: LAB_00537fed
    MOV EBX,dword ptr [EAX + 0x14d164]  ; 00537fee
    ADD ECX,0x4                         ; 00537ff4
    CMP EDX,EBX                         ; 00537ff7
    JL 0x00537fde                       ; 00537ff9
        ;   XREF to: 00537fde (CONDITIONAL_JUMP)  ; LAB_00537fde
    POP ESI                             ; 00537ffb
        ;   Label: LAB_00537ffb
    POP EBX                             ; 00537ffc
    RET                                 ; 00537ffd
    MOV ESI,dword ptr [EAX + 0x156db8]  ; 00537ffe
        ;   Label: LAB_00537ffe
    MOV dword ptr [EAX + ESI*0x4 + 0x156dbc],EBX ; 00538004
    INC dword ptr [EAX + 0x156db8]      ; 0053800b
    JMP 0x00537fed                      ; 00538011
        ;   XREF to: 00537fed (UNCONDITIONAL_JUMP)  ; LAB_00537fed

