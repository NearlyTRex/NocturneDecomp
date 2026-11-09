; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_zombie_cpp_FUN_00588650(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d83af
;   undefined4 DAT_005d83b7
;
; Called Functions:
;   core_actor.cpp_CVector3f_ctor_FUN_0040d220
;   core_actor.cpp_FUN_00408b80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00588650
        ;   Label: core_zombie.cpp_FUN_00588650
    PUSH EDI                            ; 00588651
    PUSH EBP                            ; 00588652
    MOV EBP,ESP                         ; 00588653
    SUB ESP,0x78                        ; 00588655
    AND ESP,0xfffffff8                  ; 00588658
    MOV EBX,ESI                         ; 0058865b
    MOV EDX,dword ptr [EBP + 0x10]      ; 0058865d
    MOV EAX,dword ptr [EBP + 0x10]      ; 00588660
    PUSH EDX                            ; 00588663
    MOV EAX,dword ptr [EAX + 0x154]     ; 00588664
    LEA ESI,[ESP + 0x4]                 ; 0058866a
    LEA EDI,[ESP + 0x1c]                ; 0058866e
    CALL dword ptr [EAX + 0x1c]         ; 00588672
    MOV ECX,0x6                         ; 00588675
    ADD ESP,0x4                         ; 0058867a
    LEA EAX,[ESP + 0x60]                ; 0058867d
    MOV ESI,ESP                         ; 00588681
    PUSH EAX                            ; 00588683
    MOVSD.REP ES:EDI,ESI                ; 00588684
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040d220 ; 00588686
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040d220(CVector3f * this_ptr)
    LEA EDI,[ESP + 0x70]                ; 0058868b
    ADD ESP,0x4                         ; 0058868f
    LEA ESI,[ESP + 0x60]                ; 00588692
    FLD float ptr [ESP + 0x18]          ; 00588696
    FLD float ptr [ESP + 0x1c]          ; 0058869a
    FLD float ptr [ESP + 0x20]          ; 0058869e
    FXCH ST2                            ; 005886a2
    FADD float ptr [ESP + 0x24]         ; 005886a4
    FXCH                                ; 005886a8
    FADD float ptr [ESP + 0x28]         ; 005886aa
    FXCH ST2                            ; 005886ae
    FADD float ptr [ESP + 0x2c]         ; 005886b0
    FXCH                                ; 005886b4
    FSTP float ptr [ESP + 0x60]         ; 005886b6
    FXCH                                ; 005886ba
    FSTP float ptr [ESP + 0x64]         ; 005886bc
    FSTP float ptr [ESP + 0x68]         ; 005886c0
    MOVSD ES:EDI,ESI                    ; 005886c4
    MOVSD ES:EDI,ESI                    ; 005886c5
    MOVSD ES:EDI,ESI                    ; 005886c6
    LEA ESI,[ESP + 0x30]                ; 005886c7
    PUSH ESI                            ; 005886cb
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040d220 ; 005886cc
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040d220(CVector3f * this_ptr)
    ADD ESP,0x4                         ; 005886d1
    FLD float ptr [0x005d83af]          ; 005886d4 | DAT_005d83af
    FLD float ptr [ESP + 0x6c]          ; 005886da
    FMUL ST1                            ; 005886de
    FLD float ptr [ESP + 0x70]          ; 005886e0
    FMUL ST2                            ; 005886e4
    FLD float ptr [ESP + 0x74]          ; 005886e6
    FMULP ST3                           ; 005886ea
    LEA EDI,[ESP + 0x3c]                ; 005886ec
    LEA ESI,[ESP + 0x30]                ; 005886f0
    FLD float ptr [ESP + 0x20]          ; 005886f4
    FXCH ST2                            ; 005886f8
    FSTP float ptr [ESP + 0x30]         ; 005886fa
    FSTP float ptr [ESP + 0x34]         ; 005886fe
    FXCH                                ; 00588702
    FSTP float ptr [ESP + 0x38]         ; 00588704
    MOVSD ES:EDI,ESI                    ; 00588708
    MOVSD ES:EDI,ESI                    ; 00588709
    MOVSD ES:EDI,ESI                    ; 0058870a
    FADD double ptr [0x005d83b7]        ; 0058870b | DAT_005d83b7
    LEA EDI,[ESP + 0x48]                ; 00588711
    LEA ESI,[ESP + 0x3c]                ; 00588715
    FSTP float ptr [ESP + 0x44]         ; 00588719
    MOVSD ES:EDI,ESI                    ; 0058871d
    MOVSD ES:EDI,ESI                    ; 0058871e
    MOVSD ES:EDI,ESI                    ; 0058871f
    LEA ESI,[ESP + 0x48]                ; 00588720
    PUSH ESI                            ; 00588724
    MOV ECX,dword ptr [EBP + 0x10]      ; 00588725
    PUSH ECX                            ; 00588728
    LEA ESI,[ESP + 0x5c]                ; 00588729
    MOV EDI,EBX                         ; 0058872d
    CALL core_actor.cpp_FUN_00408b80    ; 0058872f
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x5c]                ; 00588734
    ADD ESP,0x8                         ; 00588738
    MOVSD ES:EDI,ESI                    ; 0058873b
    MOVSD ES:EDI,ESI                    ; 0058873c
    MOVSD ES:EDI,ESI                    ; 0058873d
    MOV EAX,EBX                         ; 0058873e
    MOV ESP,EBP                         ; 00588740
    POP EBP                             ; 00588742
    POP EDI                             ; 00588743
    POP EBX                             ; 00588744
    RET                                 ; 00588745

