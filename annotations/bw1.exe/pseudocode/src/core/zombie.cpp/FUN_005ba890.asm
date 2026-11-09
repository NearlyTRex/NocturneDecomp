; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_zombie_cpp_FUN_005ba890(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fa3ec
;   undefined4 DAT_005fa3f4
;
; Called Functions:
;   core_actor.cpp_CVector3f_ctor_FUN_0040cfe0
;   core_actor.cpp_FUN_00408b40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ba890
        ;   Label: core_zombie.cpp_FUN_005ba890
    PUSH EDI                            ; 005ba891
    PUSH EBP                            ; 005ba892
    MOV EBP,ESP                         ; 005ba893
    SUB ESP,0x78                        ; 005ba895
    AND ESP,0xfffffff8                  ; 005ba898
    MOV EBX,ESI                         ; 005ba89b
    MOV EDX,dword ptr [EBP + 0x10]      ; 005ba89d
    MOV EAX,dword ptr [EBP + 0x10]      ; 005ba8a0
    PUSH EDX                            ; 005ba8a3
    MOV EAX,dword ptr [EAX + 0x154]     ; 005ba8a4
    LEA ESI,[ESP + 0x4]                 ; 005ba8aa
    LEA EDI,[ESP + 0x1c]                ; 005ba8ae
    CALL dword ptr [EAX + 0x1c]         ; 005ba8b2
    MOV ECX,0x6                         ; 005ba8b5
    ADD ESP,0x4                         ; 005ba8ba
    LEA EAX,[ESP + 0x60]                ; 005ba8bd
    MOV ESI,ESP                         ; 005ba8c1
    PUSH EAX                            ; 005ba8c3
    MOVSD.REP ES:EDI,ESI                ; 005ba8c4
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040cfe0 ; 005ba8c6
        ;   XREF to: 0040cfe0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040cfe0(CVector3f * this_ptr)
    LEA EDI,[ESP + 0x70]                ; 005ba8cb
    ADD ESP,0x4                         ; 005ba8cf
    LEA ESI,[ESP + 0x60]                ; 005ba8d2
    FLD float ptr [ESP + 0x18]          ; 005ba8d6
    FLD float ptr [ESP + 0x1c]          ; 005ba8da
    FLD float ptr [ESP + 0x20]          ; 005ba8de
    FXCH ST2                            ; 005ba8e2
    FADD float ptr [ESP + 0x24]         ; 005ba8e4
    FXCH                                ; 005ba8e8
    FADD float ptr [ESP + 0x28]         ; 005ba8ea
    FXCH ST2                            ; 005ba8ee
    FADD float ptr [ESP + 0x2c]         ; 005ba8f0
    FXCH                                ; 005ba8f4
    FSTP float ptr [ESP + 0x60]         ; 005ba8f6
    FXCH                                ; 005ba8fa
    FSTP float ptr [ESP + 0x64]         ; 005ba8fc
    FSTP float ptr [ESP + 0x68]         ; 005ba900
    MOVSD ES:EDI,ESI                    ; 005ba904
    MOVSD ES:EDI,ESI                    ; 005ba905
    MOVSD ES:EDI,ESI                    ; 005ba906
    LEA ESI,[ESP + 0x30]                ; 005ba907
    PUSH ESI                            ; 005ba90b
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040cfe0 ; 005ba90c
        ;   XREF to: 0040cfe0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040cfe0(CVector3f * this_ptr)
    ADD ESP,0x4                         ; 005ba911
    FLD float ptr [0x005fa3ec]          ; 005ba914 | DAT_005fa3ec
    FLD float ptr [ESP + 0x6c]          ; 005ba91a
    FMUL ST1                            ; 005ba91e
    FLD float ptr [ESP + 0x70]          ; 005ba920
    FMUL ST2                            ; 005ba924
    FLD float ptr [ESP + 0x74]          ; 005ba926
    FMULP ST3                           ; 005ba92a
    LEA EDI,[ESP + 0x3c]                ; 005ba92c
    LEA ESI,[ESP + 0x30]                ; 005ba930
    FLD float ptr [ESP + 0x20]          ; 005ba934
    FXCH ST2                            ; 005ba938
    FSTP float ptr [ESP + 0x30]         ; 005ba93a
    FSTP float ptr [ESP + 0x34]         ; 005ba93e
    FXCH                                ; 005ba942
    FSTP float ptr [ESP + 0x38]         ; 005ba944
    MOVSD ES:EDI,ESI                    ; 005ba948
    MOVSD ES:EDI,ESI                    ; 005ba949
    MOVSD ES:EDI,ESI                    ; 005ba94a
    FADD double ptr [0x005fa3f4]        ; 005ba94b | DAT_005fa3f4
    LEA EDI,[ESP + 0x48]                ; 005ba951
    LEA ESI,[ESP + 0x3c]                ; 005ba955
    FSTP float ptr [ESP + 0x44]         ; 005ba959
    MOVSD ES:EDI,ESI                    ; 005ba95d
    MOVSD ES:EDI,ESI                    ; 005ba95e
    MOVSD ES:EDI,ESI                    ; 005ba95f
    LEA ESI,[ESP + 0x48]                ; 005ba960
    PUSH ESI                            ; 005ba964
    MOV ECX,dword ptr [EBP + 0x10]      ; 005ba965
    PUSH ECX                            ; 005ba968
    LEA ESI,[ESP + 0x5c]                ; 005ba969
    MOV EDI,EBX                         ; 005ba96d
    CALL core_actor.cpp_FUN_00408b40    ; 005ba96f
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x5c]                ; 005ba974
    ADD ESP,0x8                         ; 005ba978
    MOVSD ES:EDI,ESI                    ; 005ba97b
    MOVSD ES:EDI,ESI                    ; 005ba97c
    MOVSD ES:EDI,ESI                    ; 005ba97d
    MOV EAX,EBX                         ; 005ba97e
    MOV ESP,EBP                         ; 005ba980
    POP EBP                             ; 005ba982
    POP EDI                             ; 005ba983
    POP EBX                             ; 005ba984
    RET                                 ; 005ba985

