; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bodypart_cpp_FUN_004178c0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x94]:1  local_94
; undefined        Stack[-0x7c]:1  local_7c
;
; XREF[2]:
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416700 at 00416c6f
;   core_bodypart.cpp_CBodyPart_onDropped_FUN_00416680 at 00416693
;
; Referenced Globals:
;   undefined4 DAT_005cbfb6
;   undefined4 DAT_0265370c
;   undefined4 DAT_02653710
;   undefined4 DAT_02653714
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_bodypart.cpp_FUN_00415890
;   core_box.cpp_CBox_setupCorners_FUN_005b1c80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004178c0
        ;   Label: core_bodypart.cpp_FUN_004178c0
    SUB ESP,0x90                        ; 004178c1
    MOV EBX,dword ptr [ESP + 0x98]      ; 004178c7
    CMP dword ptr [EBX + 0x2d0],0x3     ; 004178ce
    JL 0x004178e0                       ; 004178d5
        ;   XREF to: 004178e0 (CONDITIONAL_JUMP)  ; LAB_004178e0
    CMP dword ptr [EBX + 0x2dc],0x1     ; 004178d7
    JGE 0x00417941                      ; 004178de
        ;   XREF to: 00417941 (CONDITIONAL_JUMP)  ; LAB_00417941
    PUSH 0x0                            ; 004178e0
        ;   Label: LAB_004178e0
    PUSH 0x0                            ; 004178e2
    PUSH EBX                            ; 004178e4
    MOV dword ptr [EBX + 0x70],0x2      ; 004178e5
    CALL core_bodypart.cpp_FUN_00415890 ; 004178ec
        ;   XREF to: 00415890 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_00415890()
    LEA EAX,[EBX + 0x2c4]               ; 004178f1
    ADD ESP,0xc                         ; 004178f7
    MOV EDX,EAX                         ; 004178fa
    CMP EAX,0x265370c                   ; 004178fc
    JZ 0x0041791d                       ; 00417901
        ;   XREF to: 0041791d (CONDITIONAL_JUMP)  ; LAB_0041791d
    MOV ECX,dword ptr [0x0265370c]      ; 00417903 | DAT_0265370c
    MOV dword ptr [EAX],ECX             ; 00417909
    MOV ECX,dword ptr [0x02653710]      ; 0041790b | DAT_02653710
    MOV dword ptr [EAX + 0x4],ECX       ; 00417911
    MOV ECX,dword ptr [0x02653714]      ; 00417914 | DAT_02653714
    MOV dword ptr [EAX + 0x8],ECX       ; 0041791a
    ADD EBX,0x2b8                       ; 0041791d
        ;   Label: LAB_0041791d
    CMP EBX,EDX                         ; 00417923
    JNZ 0x0041792f                      ; 00417925
        ;   XREF to: 0041792f (CONDITIONAL_JUMP)  ; LAB_0041792f
    ADD ESP,0x90                        ; 00417927
        ;   Label: LAB_00417927
    POP EBX                             ; 0041792d
    RET                                 ; 0041792e
    MOV EAX,dword ptr [EDX]             ; 0041792f
        ;   Label: LAB_0041792f
    MOV dword ptr [EBX],EAX             ; 00417931
    MOV EAX,dword ptr [EDX + 0x4]       ; 00417933
    MOV dword ptr [EBX + 0x4],EAX       ; 00417936
    MOV EAX,dword ptr [EDX + 0x8]       ; 00417939
    MOV dword ptr [EBX + 0x8],EAX       ; 0041793c
    JMP 0x00417927                      ; 0041793f
        ;   XREF to: 00417927 (UNCONDITIONAL_JUMP)  ; LAB_00417927
    PUSH EDI                            ; 00417941
        ;   Label: LAB_00417941
    PUSH ESI                            ; 00417942
    PUSH EBX                            ; 00417943
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00417944
    LEA ESI,[ESP + 0xc]                 ; 0041794a
    LEA EDI,[ESP + 0x24]                ; 0041794e
    CALL dword ptr [EAX + 0x24]         ; 00417952
    MOV ECX,0x6                         ; 00417955
    LEA ESI,[ESP + 0xc]                 ; 0041795a
    ADD ESP,0x4                         ; 0041795e
    MOVSD.REP ES:EDI,ESI                ; 00417961
    FLD float ptr [ESP + 0x20]          ; 00417963
    FLD float ptr [ESP + 0x24]          ; 00417967
    FLD float ptr [ESP + 0x28]          ; 0041796b
    LEA EDI,[ESP + 0x50]                ; 0041796f
    LEA ESI,[ESP + 0x68]                ; 00417973
    FXCH ST2                            ; 00417977
    FADD float ptr [ESP + 0x2c]         ; 00417979
    FXCH                                ; 0041797d
    FADD float ptr [ESP + 0x30]         ; 0041797f
    FXCH ST2                            ; 00417983
    FADD float ptr [ESP + 0x34]         ; 00417985
    FXCH                                ; 00417989
    FSTP float ptr [ESP + 0x68]         ; 0041798b
    FXCH                                ; 0041798f
    FSTP float ptr [ESP + 0x6c]         ; 00417991
    FSTP float ptr [ESP + 0x70]         ; 00417995
    MOVSD ES:EDI,ESI                    ; 00417999
    MOVSD ES:EDI,ESI                    ; 0041799a
    MOVSD ES:EDI,ESI                    ; 0041799b
    FLD float ptr [0x005cbfb6]          ; 0041799c | DAT_005cbfb6
    FLD float ptr [ESP + 0x50]          ; 004179a2
    FMUL ST1                            ; 004179a6
    FLD float ptr [ESP + 0x54]          ; 004179a8
    FMUL ST2                            ; 004179ac
    LEA EAX,[ESP + 0x44]                ; 004179ae
    FLD float ptr [ESP + 0x58]          ; 004179b2
    FMULP ST3                           ; 004179b6
    PUSH EAX                            ; 004179b8
    LEA EDI,[ESP + 0x48]                ; 004179b9
    LEA ESI,[ESP + 0x90]                ; 004179bd
    FXCH                                ; 004179c4
    FSTP float ptr [ESP + 0x90]         ; 004179c6
    FSTP float ptr [ESP + 0x94]         ; 004179cd
    FSTP float ptr [ESP + 0x98]         ; 004179d4
    MOVSD ES:EDI,ESI                    ; 004179db
    MOVSD ES:EDI,ESI                    ; 004179dc
    MOVSD ES:EDI,ESI                    ; 004179dd
    PUSH EBX                            ; 004179de
    LEA ESI,[ESP + 0x40]                ; 004179df
    LEA EDI,[ESP + 0x64]                ; 004179e3
    CALL core_actor.cpp_FUN_00408d70    ; 004179e7
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x40]                ; 004179ec
    ADD ESP,0x8                         ; 004179f0
    LEA EAX,[ESP + 0x74]                ; 004179f3
    FLD float ptr [ESP + 0x2c]          ; 004179f7
    FLD float ptr [ESP + 0x30]          ; 004179fb
    PUSH 0x40a00000                     ; 004179ff
    FLD float ptr [ESP + 0x38]          ; 00417a04
    MOVSD ES:EDI,ESI                    ; 00417a08
    MOVSD ES:EDI,ESI                    ; 00417a09
    MOVSD ES:EDI,ESI                    ; 00417a0a
    PUSH EAX                            ; 00417a0b
    LEA EDI,[ESP + 0x7c]                ; 00417a0c
    LEA ESI,[ESP + 0x88]                ; 00417a10
    FXCH ST2                            ; 00417a17
    FSUB float ptr [ESP + 0x28]         ; 00417a19
    FXCH                                ; 00417a1d
    FSUB float ptr [ESP + 0x2c]         ; 00417a1f
    FXCH ST2                            ; 00417a23
    FSUB float ptr [ESP + 0x30]         ; 00417a25
    FXCH                                ; 00417a29
    FSTP float ptr [ESP + 0x88]         ; 00417a2b
    LEA EAX,[EBX + 0x30]                ; 00417a32
    FXCH                                ; 00417a35
    FSTP float ptr [ESP + 0x8c]         ; 00417a37
    PUSH EAX                            ; 00417a3e
    LEA EAX,[ESP + 0x68]                ; 00417a3f
    ADD EBX,0x10e0                      ; 00417a43
    PUSH EAX                            ; 00417a49
    FSTP float ptr [ESP + 0x98]         ; 00417a4a
    PUSH EBX                            ; 00417a51
    MOVSD ES:EDI,ESI                    ; 00417a52
    MOVSD ES:EDI,ESI                    ; 00417a53
    MOVSD ES:EDI,ESI                    ; 00417a54
    CALL core_box.cpp_CBox_setupCorners_FUN_005b1c80 ; 00417a55
        ;   XREF to: 005b1c80 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_setupCorners_FUN_005b1c80(CBox * this_ptr, CVector3f * position, CVector3f * orientation, CVector3f * extents, ...)
    ADD ESP,0x14                        ; 00417a5a
    POP ESI                             ; 00417a5d
    POP EDI                             ; 00417a5e
    ADD ESP,0x90                        ; 00417a5f
    POP EBX                             ; 00417a65
    RET                                 ; 00417a66

