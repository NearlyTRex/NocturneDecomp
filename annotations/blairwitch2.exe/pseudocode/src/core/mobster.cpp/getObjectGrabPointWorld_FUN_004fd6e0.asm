; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mobster_cpp_getObjectGrabPointWorld_FUN_004fd6e0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005debfd
;   undefined4 DAT_005dec05
;
; Called Functions:
;   core_actor.cpp_CVector3f_ctor_FUN_0040d340
;   core_actor.cpp_FUN_00408d70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fd6e0
        ;   Label: core_mobster.cpp_getObjectGrabPointWorld_FUN_004fd6e0
    PUSH EDI                            ; 004fd6e1
    PUSH EBP                            ; 004fd6e2
    MOV EBP,ESP                         ; 004fd6e3
    SUB ESP,0x78                        ; 004fd6e5
    AND ESP,0xfffffff8                  ; 004fd6e8
    MOV EBX,ESI                         ; 004fd6eb
    MOV EDX,dword ptr [EBP + 0x10]      ; 004fd6ed
    MOV EAX,dword ptr [EBP + 0x10]      ; 004fd6f0
    PUSH EDX                            ; 004fd6f3
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 004fd6f4
    LEA ESI,[ESP + 0x4]                 ; 004fd6fa
    LEA EDI,[ESP + 0x1c]                ; 004fd6fe
    CALL dword ptr [EAX + 0x24]         ; 004fd702
    MOV ECX,0x6                         ; 004fd705
    ADD ESP,0x4                         ; 004fd70a
    LEA EAX,[ESP + 0x60]                ; 004fd70d
    MOV ESI,ESP                         ; 004fd711
    PUSH EAX                            ; 004fd713
    MOVSD.REP ES:EDI,ESI                ; 004fd714
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040d340 ; 004fd716
        ;   XREF to: 0040d340 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040d340(CVector3f * this_ptr)
    LEA EDI,[ESP + 0x70]                ; 004fd71b
    ADD ESP,0x4                         ; 004fd71f
    LEA ESI,[ESP + 0x60]                ; 004fd722
    FLD float ptr [ESP + 0x18]          ; 004fd726
    FLD float ptr [ESP + 0x1c]          ; 004fd72a
    FLD float ptr [ESP + 0x20]          ; 004fd72e
    FXCH ST2                            ; 004fd732
    FADD float ptr [ESP + 0x24]         ; 004fd734
    FXCH                                ; 004fd738
    FADD float ptr [ESP + 0x28]         ; 004fd73a
    FXCH ST2                            ; 004fd73e
    FADD float ptr [ESP + 0x2c]         ; 004fd740
    FXCH                                ; 004fd744
    FSTP float ptr [ESP + 0x60]         ; 004fd746
    FXCH                                ; 004fd74a
    FSTP float ptr [ESP + 0x64]         ; 004fd74c
    FSTP float ptr [ESP + 0x68]         ; 004fd750
    MOVSD ES:EDI,ESI                    ; 004fd754
    MOVSD ES:EDI,ESI                    ; 004fd755
    MOVSD ES:EDI,ESI                    ; 004fd756
    LEA ESI,[ESP + 0x30]                ; 004fd757
    PUSH ESI                            ; 004fd75b
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040d340 ; 004fd75c
        ;   XREF to: 0040d340 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040d340(CVector3f * this_ptr)
    ADD ESP,0x4                         ; 004fd761
    FLD float ptr [0x005debfd]          ; 004fd764 | DAT_005debfd
    FLD float ptr [ESP + 0x6c]          ; 004fd76a
    FMUL ST1                            ; 004fd76e
    FLD float ptr [ESP + 0x70]          ; 004fd770
    FMUL ST2                            ; 004fd774
    FLD float ptr [ESP + 0x74]          ; 004fd776
    FMULP ST3                           ; 004fd77a
    LEA EDI,[ESP + 0x3c]                ; 004fd77c
    LEA ESI,[ESP + 0x30]                ; 004fd780
    FLD float ptr [ESP + 0x20]          ; 004fd784
    FXCH ST2                            ; 004fd788
    FSTP float ptr [ESP + 0x30]         ; 004fd78a
    FSTP float ptr [ESP + 0x34]         ; 004fd78e
    FXCH                                ; 004fd792
    FSTP float ptr [ESP + 0x38]         ; 004fd794
    MOVSD ES:EDI,ESI                    ; 004fd798
    MOVSD ES:EDI,ESI                    ; 004fd799
    MOVSD ES:EDI,ESI                    ; 004fd79a
    FADD double ptr [0x005dec05]        ; 004fd79b | DAT_005dec05
    LEA EDI,[ESP + 0x48]                ; 004fd7a1
    LEA ESI,[ESP + 0x3c]                ; 004fd7a5
    FSTP float ptr [ESP + 0x44]         ; 004fd7a9
    MOVSD ES:EDI,ESI                    ; 004fd7ad
    MOVSD ES:EDI,ESI                    ; 004fd7ae
    MOVSD ES:EDI,ESI                    ; 004fd7af
    LEA ESI,[ESP + 0x48]                ; 004fd7b0
    PUSH ESI                            ; 004fd7b4
    MOV ECX,dword ptr [EBP + 0x10]      ; 004fd7b5
    PUSH ECX                            ; 004fd7b8
    LEA ESI,[ESP + 0x5c]                ; 004fd7b9
    MOV EDI,EBX                         ; 004fd7bd
    CALL core_actor.cpp_FUN_00408d70    ; 004fd7bf
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x5c]                ; 004fd7c4
    ADD ESP,0x8                         ; 004fd7c8
    MOVSD ES:EDI,ESI                    ; 004fd7cb
    MOVSD ES:EDI,ESI                    ; 004fd7cc
    MOVSD ES:EDI,ESI                    ; 004fd7cd
    MOV EAX,EBX                         ; 004fd7ce
    MOV ESP,EBP                         ; 004fd7d0
    POP EBP                             ; 004fd7d2
    POP EDI                             ; 004fd7d3
    POP EBX                             ; 004fd7d4
    RET                                 ; 004fd7d5

