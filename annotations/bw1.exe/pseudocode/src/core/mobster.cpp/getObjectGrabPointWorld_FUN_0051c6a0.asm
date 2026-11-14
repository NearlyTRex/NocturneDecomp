; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mobster_cpp_getObjectGrabPointWorld_FUN_0051c6a0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005e9c4a
;   undefined4 DAT_005e9c52
;
; Called Functions:
;   core_actor.cpp_CVector3f_ctor_FUN_0040cfe0
;   core_actor.cpp_FUN_00408b40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051c6a0
        ;   Label: core_mobster.cpp_getObjectGrabPointWorld_FUN_0051c6a0
    PUSH EDI                            ; 0051c6a1
    PUSH EBP                            ; 0051c6a2
    MOV EBP,ESP                         ; 0051c6a3
    SUB ESP,0x78                        ; 0051c6a5
    AND ESP,0xfffffff8                  ; 0051c6a8
    MOV EBX,ESI                         ; 0051c6ab
    MOV EDX,dword ptr [EBP + 0x10]      ; 0051c6ad
    MOV EAX,dword ptr [EBP + 0x10]      ; 0051c6b0
    PUSH EDX                            ; 0051c6b3
    MOV EAX,dword ptr [EAX + 0x154]     ; 0051c6b4
    LEA ESI,[ESP + 0x4]                 ; 0051c6ba
    LEA EDI,[ESP + 0x1c]                ; 0051c6be
    CALL dword ptr [EAX + 0x1c]         ; 0051c6c2
    MOV ECX,0x6                         ; 0051c6c5
    ADD ESP,0x4                         ; 0051c6ca
    LEA EAX,[ESP + 0x60]                ; 0051c6cd
    MOV ESI,ESP                         ; 0051c6d1
    PUSH EAX                            ; 0051c6d3
    MOVSD.REP ES:EDI,ESI                ; 0051c6d4
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040cfe0 ; 0051c6d6
        ;   XREF to: 0040cfe0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040cfe0(CVector3f * this_ptr)
    LEA EDI,[ESP + 0x70]                ; 0051c6db
    ADD ESP,0x4                         ; 0051c6df
    LEA ESI,[ESP + 0x60]                ; 0051c6e2
    FLD float ptr [ESP + 0x18]          ; 0051c6e6
    FLD float ptr [ESP + 0x1c]          ; 0051c6ea
    FLD float ptr [ESP + 0x20]          ; 0051c6ee
    FXCH ST2                            ; 0051c6f2
    FADD float ptr [ESP + 0x24]         ; 0051c6f4
    FXCH                                ; 0051c6f8
    FADD float ptr [ESP + 0x28]         ; 0051c6fa
    FXCH ST2                            ; 0051c6fe
    FADD float ptr [ESP + 0x2c]         ; 0051c700
    FXCH                                ; 0051c704
    FSTP float ptr [ESP + 0x60]         ; 0051c706
    FXCH                                ; 0051c70a
    FSTP float ptr [ESP + 0x64]         ; 0051c70c
    FSTP float ptr [ESP + 0x68]         ; 0051c710
    MOVSD ES:EDI,ESI                    ; 0051c714
    MOVSD ES:EDI,ESI                    ; 0051c715
    MOVSD ES:EDI,ESI                    ; 0051c716
    LEA ESI,[ESP + 0x30]                ; 0051c717
    PUSH ESI                            ; 0051c71b
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040cfe0 ; 0051c71c
        ;   XREF to: 0040cfe0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040cfe0(CVector3f * this_ptr)
    ADD ESP,0x4                         ; 0051c721
    FLD float ptr [0x005e9c4a]          ; 0051c724 | DAT_005e9c4a
    FLD float ptr [ESP + 0x6c]          ; 0051c72a
    FMUL ST1                            ; 0051c72e
    FLD float ptr [ESP + 0x70]          ; 0051c730
    FMUL ST2                            ; 0051c734
    FLD float ptr [ESP + 0x74]          ; 0051c736
    FMULP ST3                           ; 0051c73a
    LEA EDI,[ESP + 0x3c]                ; 0051c73c
    LEA ESI,[ESP + 0x30]                ; 0051c740
    FLD float ptr [ESP + 0x20]          ; 0051c744
    FXCH ST2                            ; 0051c748
    FSTP float ptr [ESP + 0x30]         ; 0051c74a
    FSTP float ptr [ESP + 0x34]         ; 0051c74e
    FXCH                                ; 0051c752
    FSTP float ptr [ESP + 0x38]         ; 0051c754
    MOVSD ES:EDI,ESI                    ; 0051c758
    MOVSD ES:EDI,ESI                    ; 0051c759
    MOVSD ES:EDI,ESI                    ; 0051c75a
    FADD double ptr [0x005e9c52]        ; 0051c75b | DAT_005e9c52
    LEA EDI,[ESP + 0x48]                ; 0051c761
    LEA ESI,[ESP + 0x3c]                ; 0051c765
    FSTP float ptr [ESP + 0x44]         ; 0051c769
    MOVSD ES:EDI,ESI                    ; 0051c76d
    MOVSD ES:EDI,ESI                    ; 0051c76e
    MOVSD ES:EDI,ESI                    ; 0051c76f
    LEA ESI,[ESP + 0x48]                ; 0051c770
    PUSH ESI                            ; 0051c774
    MOV ECX,dword ptr [EBP + 0x10]      ; 0051c775
    PUSH ECX                            ; 0051c778
    LEA ESI,[ESP + 0x5c]                ; 0051c779
    MOV EDI,EBX                         ; 0051c77d
    CALL core_actor.cpp_FUN_00408b40    ; 0051c77f
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x5c]                ; 0051c784
    ADD ESP,0x8                         ; 0051c788
    MOVSD ES:EDI,ESI                    ; 0051c78b
    MOVSD ES:EDI,ESI                    ; 0051c78c
    MOVSD ES:EDI,ESI                    ; 0051c78d
    MOV EAX,EBX                         ; 0051c78e
    MOV ESP,EBP                         ; 0051c790
    POP EBP                             ; 0051c792
    POP EDI                             ; 0051c793
    POP EBX                             ; 0051c794
    RET                                 ; 0051c795

