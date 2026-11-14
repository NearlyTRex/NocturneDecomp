; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __stack2_esi core_boneguy_cpp_CBoneGuy_getCarryObjToBodyXForm_FUN_0041c720(CBoneGuy *this_ptr,int hand_index,CMatrix3x4f *out_matrix)
;
; Parameters:
; CBoneGuy *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
;
; Referenced Globals:
;   undefined4 DAT_005d4769
;   undefined4 DAT_005d4771
;   undefined4 DAT_02c8af28
;
; Called Functions:
;   core_actor.cpp_CVector3f_ctor_FUN_0040cfe0
;   core_xform.cpp_FUN_005b5080
;   core_xform.cpp_FUN_005b5760
;   core_xform.cpp_multiplyMatrix3x4_FUN_005b5200
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041c720
        ;   Label: core_boneguy.cpp_CBoneGuy_getCarryObjToBodyXForm_FUN_0041c720
    PUSH EDI                            ; 0041c721
    PUSH EBP                            ; 0041c722
    MOV EBP,ESP                         ; 0041c723
    SUB ESP,0x178                       ; 0041c725
    SUB EBP,0x7a                        ; 0041c72b
    MOV EBX,ESI                         ; 0041c72e
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0041c730
    SHL EAX,0x3                         ; 0041c736
    MOV EDX,EAX                         ; 0041c739
    SHL EAX,0x4                         ; 0041c73b
    SUB EAX,EDX                         ; 0041c73e
    ADD EAX,dword ptr [EBP + 0x8a]      ; 0041c740
    MOV ESI,dword ptr [EAX + 0x25b0]    ; 0041c746
    MOV EAX,dword ptr [EAX + 0x25a8]    ; 0041c74c
    MOV dword ptr [EBP + 0x76],EAX      ; 0041c752
    MOV dword ptr [EBP + 0x1a],0xc0224dd3 ; 0041c755
    LEA EAX,[EBP + 0x16]                ; 0041c75c
    PUSH EAX                            ; 0041c75f
    MOV ECX,0xbf456042                  ; 0041c760
    PUSH 0x2c8af28                      ; 0041c765 | DAT_02c8af28
    LEA EAX,[EBP + 0xffffff62]          ; 0041c76a
    MOV EDI,0x40224dd3                  ; 0041c770
    PUSH EAX                            ; 0041c775
    MOV dword ptr [EBP + 0x16],ECX      ; 0041c776
    MOV dword ptr [EBP + 0x1e],EDI      ; 0041c779
    CALL core_xform.cpp_FUN_005b5760    ; 0041c77c
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0041c781
    MOV EAX,dword ptr [ESI + 0x154]     ; 0041c784
    PUSH ESI                            ; 0041c78a
    LEA ESI,[EBP + -0x56]               ; 0041c78b
    LEA EDI,[EBP + -0x6e]               ; 0041c78e
    CALL dword ptr [EAX + 0x1c]         ; 0041c791
    MOV ECX,0x6                         ; 0041c794
    ADD ESP,0x4                         ; 0041c799
    LEA EAX,[EBP + 0x22]                ; 0041c79c
    LEA ESI,[EBP + -0x56]               ; 0041c79f
    PUSH EAX                            ; 0041c7a2
    MOVSD.REP ES:EDI,ESI                ; 0041c7a3
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040cfe0 ; 0041c7a5
        ;   XREF to: 0040cfe0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040cfe0(CVector3f * this_ptr)
    FLD float ptr [EBP + -0x6e]         ; 0041c7aa
    FLD float ptr [EBP + -0x6a]         ; 0041c7ad
    FLD float ptr [EBP + -0x66]         ; 0041c7b0
    LEA EDI,[EBP + 0x46]                ; 0041c7b3
    LEA ESI,[EBP + 0x22]                ; 0041c7b6
    LEA EAX,[EBP + 0x6a]                ; 0041c7b9
    ADD ESP,0x4                         ; 0041c7bc
    FXCH ST2                            ; 0041c7bf
    FADD float ptr [EBP + -0x62]        ; 0041c7c1
    FXCH                                ; 0041c7c4
    FADD float ptr [EBP + -0x5e]        ; 0041c7c6
    FXCH ST2                            ; 0041c7c9
    FADD float ptr [EBP + -0x5a]        ; 0041c7cb
    PUSH EAX                            ; 0041c7ce
    FXCH                                ; 0041c7cf
    FSTP float ptr [EBP + 0x22]         ; 0041c7d1
    FXCH                                ; 0041c7d4
    FSTP float ptr [EBP + 0x26]         ; 0041c7d6
    FSTP float ptr [EBP + 0x2a]         ; 0041c7d9
    MOVSD ES:EDI,ESI                    ; 0041c7dc
    MOVSD ES:EDI,ESI                    ; 0041c7dd
    MOVSD ES:EDI,ESI                    ; 0041c7de
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040cfe0 ; 0041c7df
        ;   XREF to: 0040cfe0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040cfe0(CVector3f * this_ptr)
    FLD float ptr [0x005d4769]          ; 0041c7e4 | DAT_005d4769
    FLD float ptr [EBP + 0x46]          ; 0041c7ea
    FMUL ST1                            ; 0041c7ed
    FLD float ptr [EBP + 0x4a]          ; 0041c7ef
    FMUL ST2                            ; 0041c7f2
    FLD float ptr [EBP + 0x4e]          ; 0041c7f4
    FMULP ST3                           ; 0041c7f7
    FLD float ptr [EBP + -0x66]         ; 0041c7f9
    LEA EDI,[EBP + -0xe]                ; 0041c7fc
    LEA ESI,[EBP + 0x6a]                ; 0041c7ff
    LEA EAX,[EBP + -0x1a]               ; 0041c802
    LEA EDX,[EBP + -0x2]                ; 0041c805
    ADD ESP,0x4                         ; 0041c808
    FXCH ST2                            ; 0041c80b
    FSTP float ptr [EBP + 0x6a]         ; 0041c80d
    FSTP float ptr [EBP + 0x6e]         ; 0041c810
    FXCH                                ; 0041c813
    FSTP float ptr [EBP + 0x72]         ; 0041c815
    MOVSD ES:EDI,ESI                    ; 0041c818
    MOVSD ES:EDI,ESI                    ; 0041c819
    MOVSD ES:EDI,ESI                    ; 0041c81a
    FADD double ptr [0x005d4771]        ; 0041c81b | DAT_005d4771
    LEA EDI,[EBP + -0x1a]               ; 0041c821
    LEA ESI,[EBP + -0xe]                ; 0041c824
    FSTP float ptr [EBP + -0x6]         ; 0041c827
    MOVSD ES:EDI,ESI                    ; 0041c82a
    MOVSD ES:EDI,ESI                    ; 0041c82b
    MOVSD ES:EDI,ESI                    ; 0041c82c
    CMP EDX,EAX                         ; 0041c82d
    JZ 0x0041c843                       ; 0041c82f
        ;   XREF to: 0041c843 (CONDITIONAL_JUMP)  ; LAB_0041c843
    MOV EAX,dword ptr [EBP + -0x1a]     ; 0041c831
    MOV dword ptr [EBP + -0x2],EAX      ; 0041c834
    MOV EAX,dword ptr [EBP + -0x16]     ; 0041c837
    MOV dword ptr [EBP + 0x2],EAX       ; 0041c83a
    MOV EAX,dword ptr [EBP + -0x12]     ; 0041c83d
    MOV dword ptr [EBP + 0x6],EAX       ; 0041c840
    MOV EDX,dword ptr [EBP + 0x76]      ; 0041c843
        ;   Label: LAB_0041c843
    MOV ECX,0x3e560419                  ; 0041c846
    MOV ESI,0xbda7ef9e                  ; 0041c84b
    LEA EAX,[EDX*0x4 + 0x0]             ; 0041c850
    LEA EDI,[EBP + 0x2e]                ; 0041c857
    SUB EAX,EDX                         ; 0041c85a
    MOV EDX,dword ptr [EBP + 0x8a]      ; 0041c85c
    SHL EAX,0x4                         ; 0041c862
    ADD EDX,0xfd8                       ; 0041c865
    MOV dword ptr [EBP + 0x62],ECX      ; 0041c86b
    ADD EAX,EDX                         ; 0041c86e
    MOV dword ptr [EBP + 0x66],ESI      ; 0041c870
    PUSH EAX                            ; 0041c873
    LEA EAX,[EBP + 0x5e]                ; 0041c874
    MOV EDX,0x3d03126f                  ; 0041c877
    PUSH EAX                            ; 0041c87c
    LEA ESI,[EBP + 0xa]                 ; 0041c87d
    MOV dword ptr [EBP + 0x5e],EDX      ; 0041c880
    CALL core_xform.cpp_FUN_005b5080    ; 0041c883
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    LEA ESI,[EBP + 0xa]                 ; 0041c888
    LEA EAX,[EBP + 0x2e]                ; 0041c88b
    LEA EDX,[EBP + -0x32]               ; 0041c88e
    ADD ESP,0x8                         ; 0041c891
    MOVSD ES:EDI,ESI                    ; 0041c894
    MOVSD ES:EDI,ESI                    ; 0041c895
    MOVSD ES:EDI,ESI                    ; 0041c896
    CMP EDX,EAX                         ; 0041c897
    JZ 0x0041c8ad                       ; 0041c899
        ;   XREF to: 0041c8ad (CONDITIONAL_JUMP)  ; LAB_0041c8ad
    MOV EAX,dword ptr [EBP + 0x2e]      ; 0041c89b
    MOV dword ptr [EBP + -0x32],EAX     ; 0041c89e
    MOV EAX,dword ptr [EBP + 0x32]      ; 0041c8a1
    MOV dword ptr [EBP + -0x2e],EAX     ; 0041c8a4
    MOV EAX,dword ptr [EBP + 0x36]      ; 0041c8a7
    MOV dword ptr [EBP + -0x2a],EAX     ; 0041c8aa
    MOV EDX,dword ptr [EBP + 0x76]      ; 0041c8ad
        ;   Label: LAB_0041c8ad
    LEA EAX,[EDX*0x4 + 0x0]             ; 0041c8b0
    SUB EAX,EDX                         ; 0041c8b7
    MOV EDX,EAX                         ; 0041c8b9
    MOV EAX,dword ptr [EBP + 0x8a]      ; 0041c8bb
    SHL EDX,0x4                         ; 0041c8c1
    ADD EAX,0xfd8                       ; 0041c8c4
    ADD EAX,EDX                         ; 0041c8c9
    PUSH EAX                            ; 0041c8cb
    LEA EAX,[EBP + 0xffffff62]          ; 0041c8cc
    PUSH EAX                            ; 0041c8d2
    LEA ESI,[EBP + 0xffffff02]          ; 0041c8d3
    LEA EDI,[EBP + 0xffffff32]          ; 0041c8d9
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 0041c8df
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005b5200(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 0041c8e4
    ADD ESP,0x8                         ; 0041c8e9
    LEA EAX,[EBP + 0xffffff32]          ; 0041c8ec
    LEA ESI,[EBP + 0xffffff02]          ; 0041c8f2
    PUSH EAX                            ; 0041c8f8
    LEA EAX,[EBP + -0x2]                ; 0041c8f9
    MOVSD.REP ES:EDI,ESI                ; 0041c8fc
    PUSH EAX                            ; 0041c8fe
    LEA ESI,[EBP + -0x3e]               ; 0041c8ff
    LEA EDI,[EBP + 0x3a]                ; 0041c902
    CALL core_xform.cpp_FUN_005b5080    ; 0041c905
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    FLD float ptr [EBP + -0x32]         ; 0041c90a
    FLD float ptr [EBP + -0x2e]         ; 0041c90d
    FLD float ptr [EBP + -0x2a]         ; 0041c910
    FLD float ptr [EBP + 0xffffff3e]    ; 0041c913
    FLD float ptr [EBP + 0xffffff4e]    ; 0041c919
    LEA ESI,[EBP + -0x3e]               ; 0041c91f
    FLD float ptr [EBP + 0xffffff5e]    ; 0041c922
    MOVSD ES:EDI,ESI                    ; 0041c928
    MOVSD ES:EDI,ESI                    ; 0041c929
    MOVSD ES:EDI,ESI                    ; 0041c92a
    MOV ECX,0xc                         ; 0041c92b
    LEA EDI,[EBP + 0x52]                ; 0041c930
    LEA ESI,[EBP + -0x26]               ; 0041c933
    FXCH ST5                            ; 0041c936
    FSUB float ptr [EBP + 0x3a]         ; 0041c938
    FXCH ST4                            ; 0041c93b
    FSUB float ptr [EBP + 0x3e]         ; 0041c93d
    FXCH ST3                            ; 0041c940
    FSUB float ptr [EBP + 0x42]         ; 0041c942
    FXCH ST4                            ; 0041c945
    FSTP float ptr [EBP + -0x26]        ; 0041c947
    FXCH ST2                            ; 0041c94a
    FSTP float ptr [EBP + -0x22]        ; 0041c94c
    FXCH ST2                            ; 0041c94f
    FSTP float ptr [EBP + -0x1e]        ; 0041c951
    MOVSD ES:EDI,ESI                    ; 0041c954
    MOVSD ES:EDI,ESI                    ; 0041c955
    MOVSD ES:EDI,ESI                    ; 0041c956
    ADD ESP,0x8                         ; 0041c957
    LEA ESI,[EBP + 0xffffff32]          ; 0041c95a
    MOV EDI,EBX                         ; 0041c960
    FXCH                                ; 0041c962
    FADD float ptr [EBP + 0x52]         ; 0041c964
    FXCH                                ; 0041c967
    FADD float ptr [EBP + 0x56]         ; 0041c969
    FXCH ST2                            ; 0041c96c
    FADD float ptr [EBP + 0x5a]         ; 0041c96e
    FXCH                                ; 0041c971
    FSTP float ptr [EBP + 0xffffff3e]   ; 0041c973
    FXCH                                ; 0041c979
    FSTP float ptr [EBP + 0xffffff4e]   ; 0041c97b
    FSTP float ptr [EBP + 0xffffff5e]   ; 0041c981
    MOVSD.REP ES:EDI,ESI                ; 0041c987
    MOV EAX,EBX                         ; 0041c989
    LEA ESP,[EBP + 0x7a]                ; 0041c98b
    POP EBP                             ; 0041c98e
    POP EDI                             ; 0041c98f
    POP EBX                             ; 0041c990
    RET                                 ; 0041c991

