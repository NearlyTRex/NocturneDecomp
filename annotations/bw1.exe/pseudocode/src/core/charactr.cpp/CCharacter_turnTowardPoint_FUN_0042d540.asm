; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_turnTowardPoint_FUN_0042d540(CCharacter *this_ptr,CVector3f *target)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   target
; Local Variables:
; undefined        Stack[-0x50]:1  local_50
; undefined        Stack[-0x44]:1  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined        Stack[-0x38]:1  local_38
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_scat.cpp_CScat_updateAI_FUN_005415c0 at 00541ab7
;
; Called Functions:
;   core_actor.cpp_FUN_00408bb0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd60
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042d540
        ;   Label: core_charactr.cpp_CCharacter_turnTowardPoint_FUN_0042d540
    PUSH ESI                            ; 0042d541
    PUSH EDI                            ; 0042d542
    SUB ESP,0x44                        ; 0042d543
    MOV EBX,dword ptr [ESP + 0x54]      ; 0042d546
    MOV EDX,dword ptr [ESP + 0x58]      ; 0042d54a
    PUSH EDX                            ; 0042d54e
    PUSH EBX                            ; 0042d54f
    LEA ESI,[ESP + 0x2c]                ; 0042d550
    LEA EDI,[ESP + 0x20]                ; 0042d554
    CALL core_actor.cpp_FUN_00408bb0    ; 0042d558
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x2c]                ; 0042d55d
    ADD ESP,0x8                         ; 0042d561
    MOVSD ES:EDI,ESI                    ; 0042d564
    MOVSD ES:EDI,ESI                    ; 0042d565
    MOVSD ES:EDI,ESI                    ; 0042d566
    LEA ESI,[ESP + 0x18]                ; 0042d567
    PUSH ESI                            ; 0042d56b
    LEA ESI,[ESP + 0x4]                 ; 0042d56c
    LEA EDI,[ESP + 0x10]                ; 0042d570
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 0042d574
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[ESP + 0x4]                 ; 0042d579
    ADD ESP,0x4                         ; 0042d57d
    MOVSD ES:EDI,ESI                    ; 0042d580
    MOVSD ES:EDI,ESI                    ; 0042d581
    MOVSD ES:EDI,ESI                    ; 0042d582
    PUSH dword ptr [ESP + 0x10]         ; 0042d583
    MOV ESI,dword ptr [EBX + 0x2528]    ; 0042d587
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 0042d58d
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cd60()
    MOV dword ptr [ESP + 0x44],EAX      ; 0042d592
    MOV dword ptr [ESP + 0x3c],ESI      ; 0042d596
    FLD float ptr [ESP + 0x44]          ; 0042d59a
    ADD ESP,0x4                         ; 0042d59e
    FLD float ptr [ESP + 0x38]          ; 0042d5a1
    FXCH                                ; 0042d5a5
    FST float ptr [ESP + 0x3c]          ; 0042d5a7
    FXCH                                ; 0042d5ab
    FCHS                                ; 0042d5ad
    FSTP float ptr [ESP + 0x30]         ; 0042d5af
    FCOMP float ptr [ESP + 0x30]        ; 0042d5b3
    FNSTSW AX                           ; 0042d5b7
    SAHF                                ; 0042d5b9
    JC 0x0042d5de                       ; 0042d5ba
        ;   XREF to: 0042d5de (CONDITIONAL_JUMP)  ; LAB_0042d5de
    FLD float ptr [ESP + 0x3c]          ; 0042d5bc
    FCOMP float ptr [ESP + 0x38]        ; 0042d5c0
    FNSTSW AX                           ; 0042d5c4
    SAHF                                ; 0042d5c6
    JBE 0x0042d5e4                      ; 0042d5c7
        ;   XREF to: 0042d5e4 (CONDITIONAL_JUMP)  ; LAB_0042d5e4
    MOV dword ptr [ESP + 0x34],ESI      ; 0042d5c9
        ;   Label: LAB_0042d5c9
    MOV ESI,dword ptr [ESP + 0x34]      ; 0042d5cd
    MOV dword ptr [EBX + 0x2508],ESI    ; 0042d5d1
    ADD ESP,0x44                        ; 0042d5d7
    POP EDI                             ; 0042d5da
    POP ESI                             ; 0042d5db
    POP EBX                             ; 0042d5dc
    RET                                 ; 0042d5dd
    MOV ESI,dword ptr [ESP + 0x30]      ; 0042d5de
        ;   Label: LAB_0042d5de
    JMP 0x0042d5c9                      ; 0042d5e2
        ;   XREF to: 0042d5c9 (UNCONDITIONAL_JUMP)  ; LAB_0042d5c9
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0042d5e4
        ;   Label: LAB_0042d5e4
    JMP 0x0042d5c9                      ; 0042d5e8
        ;   XREF to: 0042d5c9 (UNCONDITIONAL_JUMP)  ; LAB_0042d5c9

