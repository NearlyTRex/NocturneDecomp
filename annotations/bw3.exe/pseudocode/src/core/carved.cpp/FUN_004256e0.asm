; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_carved_cpp_FUN_004256e0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005b799f
;   undefined4 DAT_005b79a7
;
; Called Functions:
;   core_actor.cpp_CVector3f_ctor_FUN_0040d220
;   core_actor.cpp_FUN_00408b80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004256e0
        ;   Label: core_carved.cpp_FUN_004256e0
    PUSH EDI                            ; 004256e1
    PUSH EBP                            ; 004256e2
    MOV EBP,ESP                         ; 004256e3
    SUB ESP,0x78                        ; 004256e5
    AND ESP,0xfffffff8                  ; 004256e8
    MOV EBX,ESI                         ; 004256eb
    MOV EDX,dword ptr [EBP + 0x10]      ; 004256ed
    MOV EAX,dword ptr [EBP + 0x10]      ; 004256f0
    PUSH EDX                            ; 004256f3
    MOV EAX,dword ptr [EAX + 0x154]     ; 004256f4
    LEA ESI,[ESP + 0x4]                 ; 004256fa
    LEA EDI,[ESP + 0x1c]                ; 004256fe
    CALL dword ptr [EAX + 0x1c]         ; 00425702
    MOV ECX,0x6                         ; 00425705
    ADD ESP,0x4                         ; 0042570a
    LEA EAX,[ESP + 0x60]                ; 0042570d
    MOV ESI,ESP                         ; 00425711
    PUSH EAX                            ; 00425713
    MOVSD.REP ES:EDI,ESI                ; 00425714
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040d220 ; 00425716
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040d220(CVector3f * this_ptr)
    LEA EDI,[ESP + 0x70]                ; 0042571b
    ADD ESP,0x4                         ; 0042571f
    LEA ESI,[ESP + 0x60]                ; 00425722
    FLD float ptr [ESP + 0x18]          ; 00425726
    FLD float ptr [ESP + 0x1c]          ; 0042572a
    FLD float ptr [ESP + 0x20]          ; 0042572e
    FXCH ST2                            ; 00425732
    FADD float ptr [ESP + 0x24]         ; 00425734
    FXCH                                ; 00425738
    FADD float ptr [ESP + 0x28]         ; 0042573a
    FXCH ST2                            ; 0042573e
    FADD float ptr [ESP + 0x2c]         ; 00425740
    FXCH                                ; 00425744
    FSTP float ptr [ESP + 0x60]         ; 00425746
    FXCH                                ; 0042574a
    FSTP float ptr [ESP + 0x64]         ; 0042574c
    FSTP float ptr [ESP + 0x68]         ; 00425750
    MOVSD ES:EDI,ESI                    ; 00425754
    MOVSD ES:EDI,ESI                    ; 00425755
    MOVSD ES:EDI,ESI                    ; 00425756
    LEA ESI,[ESP + 0x30]                ; 00425757
    PUSH ESI                            ; 0042575b
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040d220 ; 0042575c
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040d220(CVector3f * this_ptr)
    ADD ESP,0x4                         ; 00425761
    FLD float ptr [0x005b799f]          ; 00425764 | DAT_005b799f
    FLD float ptr [ESP + 0x6c]          ; 0042576a
    FMUL ST1                            ; 0042576e
    FLD float ptr [ESP + 0x70]          ; 00425770
    FMUL ST2                            ; 00425774
    FLD float ptr [ESP + 0x74]          ; 00425776
    FMULP ST3                           ; 0042577a
    LEA EDI,[ESP + 0x3c]                ; 0042577c
    LEA ESI,[ESP + 0x30]                ; 00425780
    FLD float ptr [ESP + 0x20]          ; 00425784
    FXCH ST2                            ; 00425788
    FSTP float ptr [ESP + 0x30]         ; 0042578a
    FSTP float ptr [ESP + 0x34]         ; 0042578e
    FXCH                                ; 00425792
    FSTP float ptr [ESP + 0x38]         ; 00425794
    MOVSD ES:EDI,ESI                    ; 00425798
    MOVSD ES:EDI,ESI                    ; 00425799
    MOVSD ES:EDI,ESI                    ; 0042579a
    FADD double ptr [0x005b79a7]        ; 0042579b | DAT_005b79a7
    LEA EDI,[ESP + 0x48]                ; 004257a1
    LEA ESI,[ESP + 0x3c]                ; 004257a5
    FSTP float ptr [ESP + 0x44]         ; 004257a9
    MOVSD ES:EDI,ESI                    ; 004257ad
    MOVSD ES:EDI,ESI                    ; 004257ae
    MOVSD ES:EDI,ESI                    ; 004257af
    LEA ESI,[ESP + 0x48]                ; 004257b0
    PUSH ESI                            ; 004257b4
    MOV ECX,dword ptr [EBP + 0x10]      ; 004257b5
    PUSH ECX                            ; 004257b8
    LEA ESI,[ESP + 0x5c]                ; 004257b9
    MOV EDI,EBX                         ; 004257bd
    CALL core_actor.cpp_FUN_00408b80    ; 004257bf
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x5c]                ; 004257c4
    ADD ESP,0x8                         ; 004257c8
    MOVSD ES:EDI,ESI                    ; 004257cb
    MOVSD ES:EDI,ESI                    ; 004257cc
    MOVSD ES:EDI,ESI                    ; 004257cd
    MOV EAX,EBX                         ; 004257ce
    MOV ESP,EBP                         ; 004257d0
    POP EBP                             ; 004257d2
    POP EDI                             ; 004257d3
    POP EBX                             ; 004257d4
    RET                                 ; 004257d5

