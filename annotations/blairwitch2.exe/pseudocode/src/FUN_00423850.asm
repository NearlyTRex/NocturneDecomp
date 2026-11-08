; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00423850(int param_1,undefined4 param_2)
;
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
; XREF[19]:
;   FUN_0051f490 at 0051f98c
;   FUN_005a1030 at 005a1090
;   FUN_005a1180 at 005a11d2
;   FUN_005a1f40 at 005a2026
;   FUN_005a2130 at 005a215c
;   FUN_005a2ac0 at 005a2af8
;   FUN_005a3280 at 005a32f9
;   FUN_005a40f0 at 005a4175
;   FUN_005a4220 at 005a424c
;   FUN_005a4e90 at 005a4f39
;   ... and 9 more
;
; Called Functions:
;   FUN_00408de0
;   FUN_0040d0c0
;   FUN_005838f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00423850
        ;   Label: FUN_00423850
    PUSH ESI                            ; 00423851
    PUSH EDI                            ; 00423852
    SUB ESP,0x44                        ; 00423853
    MOV EBX,dword ptr [ESP + 0x54]      ; 00423856
    MOV EDX,dword ptr [ESP + 0x58]      ; 0042385a
    PUSH EDX                            ; 0042385e
    PUSH EBX                            ; 0042385f
    LEA ESI,[ESP + 0x2c]                ; 00423860
    LEA EDI,[ESP + 0x20]                ; 00423864
    CALL FUN_00408de0                   ; 00423868
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408de0()
    LEA ESI,[ESP + 0x2c]                ; 0042386d
    ADD ESP,0x8                         ; 00423871
    MOVSD ES:EDI,ESI                    ; 00423874
    MOVSD ES:EDI,ESI                    ; 00423875
    MOVSD ES:EDI,ESI                    ; 00423876
    LEA ESI,[ESP + 0x18]                ; 00423877
    PUSH ESI                            ; 0042387b
    LEA ESI,[ESP + 0x4]                 ; 0042387c
    LEA EDI,[ESP + 0x10]                ; 00423880
    CALL FUN_005838f0                   ; 00423884
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005838f0()
    LEA ESI,[ESP + 0x4]                 ; 00423889
    ADD ESP,0x4                         ; 0042388d
    MOVSD ES:EDI,ESI                    ; 00423890
    MOVSD ES:EDI,ESI                    ; 00423891
    MOVSD ES:EDI,ESI                    ; 00423892
    PUSH dword ptr [ESP + 0x10]         ; 00423893
    MOV ESI,dword ptr [EBX + 0x2598]    ; 00423897
    CALL FUN_0040d0c0                   ; 0042389d
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0c0()
    MOV dword ptr [ESP + 0x44],EAX      ; 004238a2
    MOV dword ptr [ESP + 0x3c],ESI      ; 004238a6
    FLD float ptr [ESP + 0x44]          ; 004238aa
    ADD ESP,0x4                         ; 004238ae
    FLD float ptr [ESP + 0x38]          ; 004238b1
    FXCH                                ; 004238b5
    FST float ptr [ESP + 0x3c]          ; 004238b7
    FXCH                                ; 004238bb
    FCHS                                ; 004238bd
    FSTP float ptr [ESP + 0x30]         ; 004238bf
    FCOMP float ptr [ESP + 0x30]        ; 004238c3
    FNSTSW AX                           ; 004238c7
    SAHF                                ; 004238c9
    JC 0x004238ee                       ; 004238ca
        ;   XREF to: 004238ee (CONDITIONAL_JUMP)  ; LAB_004238ee
    FLD float ptr [ESP + 0x3c]          ; 004238cc
    FCOMP float ptr [ESP + 0x38]        ; 004238d0
    FNSTSW AX                           ; 004238d4
    SAHF                                ; 004238d6
    JBE 0x004238f4                      ; 004238d7
        ;   XREF to: 004238f4 (CONDITIONAL_JUMP)  ; LAB_004238f4
    MOV dword ptr [ESP + 0x34],ESI      ; 004238d9
        ;   Label: LAB_004238d9
    MOV ESI,dword ptr [ESP + 0x34]      ; 004238dd
    MOV dword ptr [EBX + 0x2578],ESI    ; 004238e1
    ADD ESP,0x44                        ; 004238e7
    POP EDI                             ; 004238ea
    POP ESI                             ; 004238eb
    POP EBX                             ; 004238ec
    RET                                 ; 004238ed
    MOV ESI,dword ptr [ESP + 0x30]      ; 004238ee
        ;   Label: LAB_004238ee
    JMP 0x004238d9                      ; 004238f2
        ;   XREF to: 004238d9 (UNCONDITIONAL_JUMP)  ; LAB_004238d9
    MOV ESI,dword ptr [ESP + 0x3c]      ; 004238f4
        ;   Label: LAB_004238f4
    JMP 0x004238d9                      ; 004238f8
        ;   XREF to: 004238d9 (UNCONDITIONAL_JUMP)  ; LAB_004238d9

