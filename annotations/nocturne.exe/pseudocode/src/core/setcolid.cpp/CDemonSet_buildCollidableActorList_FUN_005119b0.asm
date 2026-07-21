; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_CDemonSet_buildCollidableActorList_FUN_005119b0(int param_1)
;
;
; XREF[3]:
;   core_mission.cpp_CDemonMission_buildActiveSetActorList_FUN_004d9180 at 004d91b7
;   core_mission.cpp_CDemonMission_buildSetActorList_FUN_004d8ee0 at 004d8f23
;   core_set.cpp_CDemonSet_processActors_FUN_00509140 at 005091b5
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005119b0
        ;   Label: core_setcolid.cpp_CDemonSet_buildCollidableActorList_FUN_005119b0
    PUSH ESI                            ; 005119b1
    MOV EAX,dword ptr [ESP + 0xc]       ; 005119b2
    MOV ECX,dword ptr [EAX + 0x14cd6c]  ; 005119b6
    MOV dword ptr [EAX + 0x1569c0],0x0  ; 005119bc
    XOR EDX,EDX                         ; 005119c6
    TEST ECX,ECX                        ; 005119c8
    JLE 0x005119eb                      ; 005119ca
        ;   XREF to: 005119eb (CONDITIONAL_JUMP)  ; LAB_005119eb
    MOV ECX,EAX                         ; 005119cc
    MOV EBX,dword ptr [ECX + 0x14cd70]  ; 005119ce
        ;   Label: LAB_005119ce
    CMP dword ptr [EBX + 0x100],0x0     ; 005119d4
    JZ 0x005119ee                       ; 005119db
        ;   XREF to: 005119ee (CONDITIONAL_JUMP)  ; LAB_005119ee
    INC EDX                             ; 005119dd
        ;   Label: LAB_005119dd
    MOV EBX,dword ptr [EAX + 0x14cd6c]  ; 005119de
    ADD ECX,0x4                         ; 005119e4
    CMP EDX,EBX                         ; 005119e7
    JL 0x005119ce                       ; 005119e9
        ;   XREF to: 005119ce (CONDITIONAL_JUMP)  ; LAB_005119ce
    POP ESI                             ; 005119eb
        ;   Label: LAB_005119eb
    POP EBX                             ; 005119ec
    RET                                 ; 005119ed
    MOV ESI,dword ptr [EAX + 0x1569c0]  ; 005119ee
        ;   Label: LAB_005119ee
    MOV dword ptr [EAX + ESI*0x4 + 0x1569c4],EBX ; 005119f4
    INC dword ptr [EAX + 0x1569c0]      ; 005119fb
    JMP 0x005119dd                      ; 00511a01
        ;   XREF to: 005119dd (UNCONDITIONAL_JUMP)  ; LAB_005119dd

