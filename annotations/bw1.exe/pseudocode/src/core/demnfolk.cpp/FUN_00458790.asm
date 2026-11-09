; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_demnfolk_cpp_FUN_00458790(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d7d2b
;   undefined4 DAT_005d7d33
;
; Called Functions:
;   core_actor.cpp_CVector3f_ctor_FUN_0040cfe0
;   core_actor.cpp_FUN_00408b40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00458790
        ;   Label: core_demnfolk.cpp_FUN_00458790
    PUSH EDI                            ; 00458791
    PUSH EBP                            ; 00458792
    MOV EBP,ESP                         ; 00458793
    SUB ESP,0x78                        ; 00458795
    AND ESP,0xfffffff8                  ; 00458798
    MOV EBX,ESI                         ; 0045879b
    MOV EDX,dword ptr [EBP + 0x10]      ; 0045879d
    MOV EAX,dword ptr [EBP + 0x10]      ; 004587a0
    PUSH EDX                            ; 004587a3
    MOV EAX,dword ptr [EAX + 0x154]     ; 004587a4
    LEA ESI,[ESP + 0x4]                 ; 004587aa
    LEA EDI,[ESP + 0x1c]                ; 004587ae
    CALL dword ptr [EAX + 0x1c]         ; 004587b2
    MOV ECX,0x6                         ; 004587b5
    ADD ESP,0x4                         ; 004587ba
    LEA EAX,[ESP + 0x60]                ; 004587bd
    MOV ESI,ESP                         ; 004587c1
    PUSH EAX                            ; 004587c3
    MOVSD.REP ES:EDI,ESI                ; 004587c4
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040cfe0 ; 004587c6
        ;   XREF to: 0040cfe0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040cfe0(CVector3f * this_ptr)
    LEA EDI,[ESP + 0x70]                ; 004587cb
    ADD ESP,0x4                         ; 004587cf
    LEA ESI,[ESP + 0x60]                ; 004587d2
    FLD float ptr [ESP + 0x18]          ; 004587d6
    FLD float ptr [ESP + 0x1c]          ; 004587da
    FLD float ptr [ESP + 0x20]          ; 004587de
    FXCH ST2                            ; 004587e2
    FADD float ptr [ESP + 0x24]         ; 004587e4
    FXCH                                ; 004587e8
    FADD float ptr [ESP + 0x28]         ; 004587ea
    FXCH ST2                            ; 004587ee
    FADD float ptr [ESP + 0x2c]         ; 004587f0
    FXCH                                ; 004587f4
    FSTP float ptr [ESP + 0x60]         ; 004587f6
    FXCH                                ; 004587fa
    FSTP float ptr [ESP + 0x64]         ; 004587fc
    FSTP float ptr [ESP + 0x68]         ; 00458800
    MOVSD ES:EDI,ESI                    ; 00458804
    MOVSD ES:EDI,ESI                    ; 00458805
    MOVSD ES:EDI,ESI                    ; 00458806
    LEA ESI,[ESP + 0x30]                ; 00458807
    PUSH ESI                            ; 0045880b
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040cfe0 ; 0045880c
        ;   XREF to: 0040cfe0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040cfe0(CVector3f * this_ptr)
    ADD ESP,0x4                         ; 00458811
    FLD float ptr [0x005d7d2b]          ; 00458814 | DAT_005d7d2b
    FLD float ptr [ESP + 0x6c]          ; 0045881a
    FMUL ST1                            ; 0045881e
    FLD float ptr [ESP + 0x70]          ; 00458820
    FMUL ST2                            ; 00458824
    FLD float ptr [ESP + 0x74]          ; 00458826
    FMULP ST3                           ; 0045882a
    LEA EDI,[ESP + 0x3c]                ; 0045882c
    LEA ESI,[ESP + 0x30]                ; 00458830
    FLD float ptr [ESP + 0x20]          ; 00458834
    FXCH ST2                            ; 00458838
    FSTP float ptr [ESP + 0x30]         ; 0045883a
    FSTP float ptr [ESP + 0x34]         ; 0045883e
    FXCH                                ; 00458842
    FSTP float ptr [ESP + 0x38]         ; 00458844
    MOVSD ES:EDI,ESI                    ; 00458848
    MOVSD ES:EDI,ESI                    ; 00458849
    MOVSD ES:EDI,ESI                    ; 0045884a
    FADD double ptr [0x005d7d33]        ; 0045884b | DAT_005d7d33
    LEA EDI,[ESP + 0x48]                ; 00458851
    LEA ESI,[ESP + 0x3c]                ; 00458855
    FSTP float ptr [ESP + 0x44]         ; 00458859
    MOVSD ES:EDI,ESI                    ; 0045885d
    MOVSD ES:EDI,ESI                    ; 0045885e
    MOVSD ES:EDI,ESI                    ; 0045885f
    LEA ESI,[ESP + 0x48]                ; 00458860
    PUSH ESI                            ; 00458864
    MOV ECX,dword ptr [EBP + 0x10]      ; 00458865
    PUSH ECX                            ; 00458868
    LEA ESI,[ESP + 0x5c]                ; 00458869
    MOV EDI,EBX                         ; 0045886d
    CALL core_actor.cpp_FUN_00408b40    ; 0045886f
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x5c]                ; 00458874
    ADD ESP,0x8                         ; 00458878
    MOVSD ES:EDI,ESI                    ; 0045887b
    MOVSD ES:EDI,ESI                    ; 0045887c
    MOVSD ES:EDI,ESI                    ; 0045887d
    MOV EAX,EBX                         ; 0045887e
    MOV ESP,EBP                         ; 00458880
    POP EBP                             ; 00458882
    POP EDI                             ; 00458883
    POP EBX                             ; 00458884
    RET                                 ; 00458885

