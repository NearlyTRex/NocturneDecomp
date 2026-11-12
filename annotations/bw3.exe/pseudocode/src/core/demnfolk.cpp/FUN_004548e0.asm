; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_demnfolk_cpp_FUN_004548e0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005ba392
;   undefined4 DAT_005ba39a
;
; Called Functions:
;   core_actor.cpp_CVector3f_ctor_FUN_0040d220
;   core_actor.cpp_FUN_00408b80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004548e0
        ;   Label: core_demnfolk.cpp_FUN_004548e0
    PUSH EDI                            ; 004548e1
    PUSH EBP                            ; 004548e2
    MOV EBP,ESP                         ; 004548e3
    SUB ESP,0x78                        ; 004548e5
    AND ESP,0xfffffff8                  ; 004548e8
    MOV EBX,ESI                         ; 004548eb
    MOV EDX,dword ptr [EBP + 0x10]      ; 004548ed
    MOV EAX,dword ptr [EBP + 0x10]      ; 004548f0
    PUSH EDX                            ; 004548f3
    MOV EAX,dword ptr [EAX + 0x154]     ; 004548f4
    LEA ESI,[ESP + 0x4]                 ; 004548fa
    LEA EDI,[ESP + 0x1c]                ; 004548fe
    CALL dword ptr [EAX + 0x1c]         ; 00454902
    MOV ECX,0x6                         ; 00454905
    ADD ESP,0x4                         ; 0045490a
    LEA EAX,[ESP + 0x60]                ; 0045490d
    MOV ESI,ESP                         ; 00454911
    PUSH EAX                            ; 00454913
    MOVSD.REP ES:EDI,ESI                ; 00454914
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040d220 ; 00454916
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040d220(CVector3f * this_ptr)
    LEA EDI,[ESP + 0x70]                ; 0045491b
    ADD ESP,0x4                         ; 0045491f
    LEA ESI,[ESP + 0x60]                ; 00454922
    FLD float ptr [ESP + 0x18]          ; 00454926
    FLD float ptr [ESP + 0x1c]          ; 0045492a
    FLD float ptr [ESP + 0x20]          ; 0045492e
    FXCH ST2                            ; 00454932
    FADD float ptr [ESP + 0x24]         ; 00454934
    FXCH                                ; 00454938
    FADD float ptr [ESP + 0x28]         ; 0045493a
    FXCH ST2                            ; 0045493e
    FADD float ptr [ESP + 0x2c]         ; 00454940
    FXCH                                ; 00454944
    FSTP float ptr [ESP + 0x60]         ; 00454946
    FXCH                                ; 0045494a
    FSTP float ptr [ESP + 0x64]         ; 0045494c
    FSTP float ptr [ESP + 0x68]         ; 00454950
    MOVSD ES:EDI,ESI                    ; 00454954
    MOVSD ES:EDI,ESI                    ; 00454955
    MOVSD ES:EDI,ESI                    ; 00454956
    LEA ESI,[ESP + 0x30]                ; 00454957
    PUSH ESI                            ; 0045495b
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040d220 ; 0045495c
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040d220(CVector3f * this_ptr)
    ADD ESP,0x4                         ; 00454961
    FLD float ptr [0x005ba392]          ; 00454964 | DAT_005ba392
    FLD float ptr [ESP + 0x6c]          ; 0045496a
    FMUL ST1                            ; 0045496e
    FLD float ptr [ESP + 0x70]          ; 00454970
    FMUL ST2                            ; 00454974
    FLD float ptr [ESP + 0x74]          ; 00454976
    FMULP ST3                           ; 0045497a
    LEA EDI,[ESP + 0x3c]                ; 0045497c
    LEA ESI,[ESP + 0x30]                ; 00454980
    FLD float ptr [ESP + 0x20]          ; 00454984
    FXCH ST2                            ; 00454988
    FSTP float ptr [ESP + 0x30]         ; 0045498a
    FSTP float ptr [ESP + 0x34]         ; 0045498e
    FXCH                                ; 00454992
    FSTP float ptr [ESP + 0x38]         ; 00454994
    MOVSD ES:EDI,ESI                    ; 00454998
    MOVSD ES:EDI,ESI                    ; 00454999
    MOVSD ES:EDI,ESI                    ; 0045499a
    FADD double ptr [0x005ba39a]        ; 0045499b | DAT_005ba39a
    LEA EDI,[ESP + 0x48]                ; 004549a1
    LEA ESI,[ESP + 0x3c]                ; 004549a5
    FSTP float ptr [ESP + 0x44]         ; 004549a9
    MOVSD ES:EDI,ESI                    ; 004549ad
    MOVSD ES:EDI,ESI                    ; 004549ae
    MOVSD ES:EDI,ESI                    ; 004549af
    LEA ESI,[ESP + 0x48]                ; 004549b0
    PUSH ESI                            ; 004549b4
    MOV ECX,dword ptr [EBP + 0x10]      ; 004549b5
    PUSH ECX                            ; 004549b8
    LEA ESI,[ESP + 0x5c]                ; 004549b9
    MOV EDI,EBX                         ; 004549bd
    CALL core_actor.cpp_FUN_00408b80    ; 004549bf
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x5c]                ; 004549c4
    ADD ESP,0x8                         ; 004549c8
    MOVSD ES:EDI,ESI                    ; 004549cb
    MOVSD ES:EDI,ESI                    ; 004549cc
    MOVSD ES:EDI,ESI                    ; 004549cd
    MOV EAX,EBX                         ; 004549ce
    MOV ESP,EBP                         ; 004549d0
    POP EBP                             ; 004549d2
    POP EDI                             ; 004549d3
    POP EBX                             ; 004549d4
    RET                                 ; 004549d5

