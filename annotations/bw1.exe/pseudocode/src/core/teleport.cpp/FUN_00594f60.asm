; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_teleport_cpp_FUN_00594f60(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0061f650
;   undefined4 DAT_01d06ab4
;
; Called Functions:
;   core_actor.cpp_FUN_00408bb0
;   core_mission.cpp_CDemonMission_setTeleportTarget_FUN_0051b700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00594f60
        ;   Label: core_teleport.cpp_FUN_00594f60
    PUSH ESI                            ; 00594f61
    PUSH EDI                            ; 00594f62
    SUB ESP,0x48                        ; 00594f63
    MOV EBX,dword ptr [ESP + 0x58]      ; 00594f66
    CMP dword ptr [EBX + 0x164],0x0     ; 00594f6a
    JNZ 0x00594f7a                      ; 00594f71
        ;   XREF to: 00594f7a (CONDITIONAL_JUMP)  ; LAB_00594f7a
    ADD ESP,0x48                        ; 00594f73
        ;   Label: LAB_00594f73
    POP EDI                             ; 00594f76
    POP ESI                             ; 00594f77
    POP EBX                             ; 00594f78
    RET                                 ; 00594f79
    MOV ESI,dword ptr [0x01d06ab4]      ; 00594f7a | DAT_01d06ab4
        ;   Label: LAB_00594f7a
    MOV ESI,dword ptr [ESI*0x4 + 0x1d06aa4] ; 00594f80
    ADD ESI,0x20                        ; 00594f87
    PUSH ESI                            ; 00594f8a
    PUSH EBX                            ; 00594f8b
    LEA ESI,[ESP + 0x44]                ; 00594f8c
    LEA EDI,[ESP + 0x38]                ; 00594f90
    CALL core_actor.cpp_FUN_00408bb0    ; 00594f94
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x44]                ; 00594f99
    ADD ESP,0x8                         ; 00594f9d
    MOVSD ES:EDI,ESI                    ; 00594fa0
    MOVSD ES:EDI,ESI                    ; 00594fa1
    MOVSD ES:EDI,ESI                    ; 00594fa2
    PUSH EBX                            ; 00594fa3
    MOV EAX,dword ptr [EBX + 0x154]     ; 00594fa4
    LEA ESI,[ESP + 0x1c]                ; 00594faa
    LEA EDI,[ESP + 0x4]                 ; 00594fae
    CALL dword ptr [EAX + 0x1c]         ; 00594fb2
    MOV ECX,0x6                         ; 00594fb5
    LEA ESI,[ESP + 0x1c]                ; 00594fba
    ADD ESP,0x4                         ; 00594fbe
    MOVSD.REP ES:EDI,ESI                ; 00594fc1
    FLD float ptr [ESP]                 ; 00594fc3
    FCOMP float ptr [ESP + 0x30]        ; 00594fc6
    FNSTSW AX                           ; 00594fca
    SAHF                                ; 00594fcc
    JA 0x00594f73                       ; 00594fcd
        ;   XREF to: 00594f73 (CONDITIONAL_JUMP)  ; LAB_00594f73
    FLD float ptr [ESP + 0x4]           ; 00594fcf
    FCOMP float ptr [ESP + 0x34]        ; 00594fd3
    FNSTSW AX                           ; 00594fd7
    SAHF                                ; 00594fd9
    JA 0x00594f73                       ; 00594fda
        ;   XREF to: 00594f73 (CONDITIONAL_JUMP)  ; LAB_00594f73
    FLD float ptr [ESP + 0x8]           ; 00594fdc
    FCOMP float ptr [ESP + 0x38]        ; 00594fe0
    FNSTSW AX                           ; 00594fe4
    SAHF                                ; 00594fe6
    JA 0x00594f73                       ; 00594fe7
        ;   XREF to: 00594f73 (CONDITIONAL_JUMP)  ; LAB_00594f73
    FLD float ptr [ESP + 0xc]           ; 00594fe9
    FCOMP float ptr [ESP + 0x30]        ; 00594fed
    FNSTSW AX                           ; 00594ff1
    SAHF                                ; 00594ff3
    JC 0x00594f73                       ; 00594ff4
        ;   XREF to: 00594f73 (CONDITIONAL_JUMP)  ; LAB_00594f73
    FLD float ptr [ESP + 0x10]          ; 00594ffa
    FCOMP float ptr [ESP + 0x34]        ; 00594ffe
    FNSTSW AX                           ; 00595002
    SAHF                                ; 00595004
    JC 0x00594f73                       ; 00595005
        ;   XREF to: 00594f73 (CONDITIONAL_JUMP)  ; LAB_00594f73
    FLD float ptr [ESP + 0x14]          ; 0059500b
    FCOMP float ptr [ESP + 0x38]        ; 0059500f
    FNSTSW AX                           ; 00595013
    SAHF                                ; 00595015
    JC 0x00594f73                       ; 00595016
        ;   XREF to: 00594f73 (CONDITIONAL_JUMP)  ; LAB_00594f73
    MOV EBX,dword ptr [EBX + 0x164]     ; 0059501c
    ADD EBX,0x20                        ; 00595022
    PUSH EBX                            ; 00595025
    MOV ECX,dword ptr [0x0061f650]      ; 00595026 | DAT_0061f650
    PUSH ECX                            ; 0059502c
    CALL core_mission.cpp_CDemonMission_setTeleportTarget_FUN_0051b700 ; 0059502d
        ;   XREF to: 0051b700 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_setTeleportTarget_FUN_0051b700(CDemonMission * this_ptr, CLocation * teleport_target)
    ADD ESP,0x8                         ; 00595032
    ADD ESP,0x48                        ; 00595035
    POP EDI                             ; 00595038
    POP ESI                             ; 00595039
    POP EBX                             ; 0059503a
    RET                                 ; 0059503b

