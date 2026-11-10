; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_teleport_cpp_CTeleport_process_FUN_00572330(CTeleport *this_ptr,float delta_time)
;
; Parameters:
; CTeleport *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 DAT_00618170
;   undefined4 DAT_01cedef4
;
; Called Functions:
;   core_actor.cpp_FUN_00408de0
;   core_mission.cpp_CDemonMission_setTeleportTarget_FUN_004fc780
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00572330
        ;   Label: core_teleport.cpp_CTeleport_process_FUN_00572330
    PUSH ESI                            ; 00572331
    PUSH EDI                            ; 00572332
    SUB ESP,0x48                        ; 00572333
    MOV EBX,dword ptr [ESP + 0x58]      ; 00572336
    CMP dword ptr [EBX + 0x2c0],0x0     ; 0057233a
    JNZ 0x0057234a                      ; 00572341
        ;   XREF to: 0057234a (CONDITIONAL_JUMP)  ; LAB_0057234a
    ADD ESP,0x48                        ; 00572343
        ;   Label: LAB_00572343
    POP EDI                             ; 00572346
    POP ESI                             ; 00572347
    POP EBX                             ; 00572348
    RET                                 ; 00572349
    MOV ESI,dword ptr [0x01cedef4]      ; 0057234a | DAT_01cedef4
        ;   Label: LAB_0057234a
    MOV ESI,dword ptr [ESI*0x4 + 0x1cedee4] ; 00572350
    ADD ESI,0x20                        ; 00572357
    PUSH ESI                            ; 0057235a
    PUSH EBX                            ; 0057235b
    LEA ESI,[ESP + 0x44]                ; 0057235c
    LEA EDI,[ESP + 0x38]                ; 00572360
    CALL core_actor.cpp_FUN_00408de0    ; 00572364
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x44]                ; 00572369
    ADD ESP,0x8                         ; 0057236d
    MOVSD ES:EDI,ESI                    ; 00572370
    MOVSD ES:EDI,ESI                    ; 00572371
    MOVSD ES:EDI,ESI                    ; 00572372
    PUSH EBX                            ; 00572373
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00572374
    LEA ESI,[ESP + 0x1c]                ; 0057237a
    LEA EDI,[ESP + 0x4]                 ; 0057237e
    CALL dword ptr [EAX + 0x24]         ; 00572382
    MOV ECX,0x6                         ; 00572385
    LEA ESI,[ESP + 0x1c]                ; 0057238a
    ADD ESP,0x4                         ; 0057238e
    MOVSD.REP ES:EDI,ESI                ; 00572391
    FLD float ptr [ESP]                 ; 00572393
    FCOMP float ptr [ESP + 0x30]        ; 00572396
    FNSTSW AX                           ; 0057239a
    SAHF                                ; 0057239c
    JA 0x00572343                       ; 0057239d
        ;   XREF to: 00572343 (CONDITIONAL_JUMP)  ; LAB_00572343
    FLD float ptr [ESP + 0x4]           ; 0057239f
    FCOMP float ptr [ESP + 0x34]        ; 005723a3
    FNSTSW AX                           ; 005723a7
    SAHF                                ; 005723a9
    JA 0x00572343                       ; 005723aa
        ;   XREF to: 00572343 (CONDITIONAL_JUMP)  ; LAB_00572343
    FLD float ptr [ESP + 0x8]           ; 005723ac
    FCOMP float ptr [ESP + 0x38]        ; 005723b0
    FNSTSW AX                           ; 005723b4
    SAHF                                ; 005723b6
    JA 0x00572343                       ; 005723b7
        ;   XREF to: 00572343 (CONDITIONAL_JUMP)  ; LAB_00572343
    FLD float ptr [ESP + 0xc]           ; 005723b9
    FCOMP float ptr [ESP + 0x30]        ; 005723bd
    FNSTSW AX                           ; 005723c1
    SAHF                                ; 005723c3
    JC 0x00572343                       ; 005723c4
        ;   XREF to: 00572343 (CONDITIONAL_JUMP)  ; LAB_00572343
    FLD float ptr [ESP + 0x10]          ; 005723ca
    FCOMP float ptr [ESP + 0x34]        ; 005723ce
    FNSTSW AX                           ; 005723d2
    SAHF                                ; 005723d4
    JC 0x00572343                       ; 005723d5
        ;   XREF to: 00572343 (CONDITIONAL_JUMP)  ; LAB_00572343
    FLD float ptr [ESP + 0x14]          ; 005723db
    FCOMP float ptr [ESP + 0x38]        ; 005723df
    FNSTSW AX                           ; 005723e3
    SAHF                                ; 005723e5
    JC 0x00572343                       ; 005723e6
        ;   XREF to: 00572343 (CONDITIONAL_JUMP)  ; LAB_00572343
    MOV EBX,dword ptr [EBX + 0x2c0]     ; 005723ec
    ADD EBX,0x20                        ; 005723f2
    PUSH EBX                            ; 005723f5
    MOV ECX,dword ptr [0x00618170]      ; 005723f6 | DAT_00618170
    PUSH ECX                            ; 005723fc
    CALL core_mission.cpp_CDemonMission_setTeleportTarget_FUN_004fc780 ; 005723fd
        ;   XREF to: 004fc780 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_setTeleportTarget_FUN_004fc780(CDemonMission * this_ptr, CLocation * teleport_target)
    ADD ESP,0x8                         ; 00572402
    ADD ESP,0x48                        ; 00572405
    POP EDI                             ; 00572408
    POP ESI                             ; 00572409
    POP EBX                             ; 0057240a
    RET                                 ; 0057240b

