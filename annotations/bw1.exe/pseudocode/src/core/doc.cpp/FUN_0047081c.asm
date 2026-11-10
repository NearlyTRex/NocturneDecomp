; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_doc_cpp_FUN_0047081c(CCharacter *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005da134
;   undefined4 DAT_005da13c
;   undefined4 DAT_005da144
;   undefined4 DAT_005da14c
;   undefined4 DAT_005da154
;   undefined4 DAT_005da15c
;   CConsole* g_CConsolePtr = 007db5f0
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 g_CLadderClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
;   engine_console.cpp_FUN_00445430
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 0047081c
        ;   Label: core_doc.cpp_FUN_0047081c
    PUSH EBX                            ; 00470820
    PUSH ESI                            ; 00470821
    PUSH EDI                            ; 00470822
    PUSH EBP                            ; 00470823
    MOV EBP,ESP                         ; 00470824
    SUB ESP,0x148                       ; 00470826
    AND ESP,0xfffffff8                  ; 0047082c
    PUSH 0x0                            ; 0047082f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00470831
    PUSH EAX                            ; 00470834
    MOV dword ptr [EAX + 0x1ff84],0x0   ; 00470835
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590 ; 0047083f
        ;   XREF to: 00434590 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590(CCharacter * this_ptr, int state_index)
    MOV dword ptr [ESP + 0x14c],EAX     ; 00470844
    FLD float ptr [ESP + 0x14c]         ; 0047084b
    ADD ESP,0x8                         ; 00470852
    FCOMP double ptr [0x005da134]       ; 00470855 | DAT_005da134
    FNSTSW AX                           ; 0047085b
    SAHF                                ; 0047085d
    JC 0x004708a2                       ; 0047085e
        ;   XREF to: 004708a2 (CONDITIONAL_JUMP)  ; LAB_004708a2
    MOV EAX,dword ptr [EBP + 0x14]      ; 00470860
    MOV ECX,dword ptr [EAX + 0x25b0]    ; 00470863
    TEST ECX,ECX                        ; 00470869
    JNZ 0x004708a2                      ; 0047086b
        ;   XREF to: 004708a2 (CONDITIONAL_JUMP)  ; LAB_004708a2
    CMP dword ptr [EAX + 0x2628],0x0    ; 0047086d
    JNZ 0x004708a2                      ; 00470874
        ;   XREF to: 004708a2 (CONDITIONAL_JUMP)  ; LAB_004708a2
    MOV dword ptr [ESP + 0x13c],ECX     ; 00470876
    ADD EAX,0x20                        ; 0047087d
    MOV dword ptr [ESP + 0x138],ECX     ; 00470880
    MOV dword ptr [ESP + 0x134],EAX     ; 00470887
    MOV EAX,[0x00622c18]                ; 0047088e | g_CDemonSetPtr
        ;   Label: LAB_0047088e
    MOV EBX,dword ptr [ESP + 0x13c]     ; 00470893
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 0047089a
    JL 0x004708cd                       ; 004708a0
        ;   XREF to: 004708cd (CONDITIONAL_JUMP)  ; LAB_004708cd
    XOR EAX,EAX                         ; 004708a2
        ;   Label: LAB_004708a2
    MOV ESP,EBP                         ; 004708a4
    POP EBP                             ; 004708a6
    POP EDI                             ; 004708a7
    POP ESI                             ; 004708a8
    POP EBX                             ; 004708a9
    RET                                 ; 004708aa
    MOV EBX,dword ptr [ESP + 0x13c]     ; 004708ab
        ;   Label: LAB_004708ab
    MOV ECX,dword ptr [ESP + 0x138]     ; 004708b2
    INC EBX                             ; 004708b9
    ADD ECX,0x4                         ; 004708ba
    MOV dword ptr [ESP + 0x13c],EBX     ; 004708bd
    MOV dword ptr [ESP + 0x138],ECX     ; 004708c4
    JMP 0x0047088e                      ; 004708cb
        ;   XREF to: 0047088e (UNCONDITIONAL_JUMP)  ; LAB_0047088e
    MOV ECX,dword ptr [ESP + 0x138]     ; 004708cd
        ;   Label: LAB_004708cd
    MOV EBX,dword ptr [0x01d1bcdc]      ; 004708d4 | g_CLadderClassInfo.name_hash
    ADD EAX,ECX                         ; 004708da
    PUSH EBX                            ; 004708dc
    MOV EAX,dword ptr [EAX + 0x14d168]  ; 004708dd
    PUSH EAX                            ; 004708e3
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004708e4
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 004708e9
    MOV EBX,EAX                         ; 004708ec
    MOV dword ptr [ESP + 0x140],EAX     ; 004708ee
    TEST EAX,EAX                        ; 004708f5
    JZ 0x004708ab                       ; 004708f7
        ;   XREF to: 004708ab (CONDITIONAL_JUMP)  ; LAB_004708ab
    MOV EAX,dword ptr [EBP + 0x14]      ; 004708f9
    FLD float ptr [EAX + 0x24]          ; 004708fc
    FSUB float ptr [EBX + 0x24]         ; 004708ff
    FABS                                ; 00470902
    FCOMP double ptr [0x005da144]       ; 00470904 | DAT_005da144
    FNSTSW AX                           ; 0047090a
    SAHF                                ; 0047090c
    JA 0x004708ab                       ; 0047090d
        ;   XREF to: 004708ab (CONDITIONAL_JUMP)  ; LAB_004708ab
    MOV ESI,dword ptr [ESP + 0x134]     ; 0047090f
    PUSH ESI                            ; 00470916
    PUSH EBX                            ; 00470917
    LEA ESI,[ESP + 0x70]                ; 00470918
    LEA EDI,[ESP + 0xf4]                ; 0047091c
    CALL core_actor.cpp_FUN_00408bb0    ; 00470923
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x70]                ; 00470928
    ADD ESP,0x8                         ; 0047092c
    MOVSD ES:EDI,ESI                    ; 0047092f
    MOVSD ES:EDI,ESI                    ; 00470930
    MOVSD ES:EDI,ESI                    ; 00470931
    FLD float ptr [ESP + 0xf4]          ; 00470932
    FST double ptr [ESP]                ; 00470939
    FABS                                ; 0047093c
    FCOMP double ptr [0x005da14c]       ; 0047093e | DAT_005da14c
    FNSTSW AX                           ; 00470944
    SAHF                                ; 00470946
    JA 0x004708ab                       ; 00470947
        ;   XREF to: 004708ab (CONDITIONAL_JUMP)  ; LAB_004708ab
    FLDZ                                ; 0047094d
    FCOMP double ptr [ESP]              ; 0047094f
    FNSTSW AX                           ; 00470952
    SAHF                                ; 00470954
    JA 0x004708ab                       ; 00470955
        ;   XREF to: 004708ab (CONDITIONAL_JUMP)  ; LAB_004708ab
    PUSH EBX                            ; 0047095b
    MOV EAX,dword ptr [EBX + 0x154]     ; 0047095c
    LEA ESI,[ESP + 0xc]                 ; 00470962
    LEA EDI,[ESP + 0x24]                ; 00470966
    CALL dword ptr [EAX + 0x1c]         ; 0047096a
    MOV ECX,0x6                         ; 0047096d
    LEA ESI,[ESP + 0xc]                 ; 00470972
    ADD ESP,0x4                         ; 00470976
    MOVSD.REP ES:EDI,ESI                ; 00470979
    FLD float ptr [ESP + 0xec]          ; 0047097b
    FCOMP float ptr [ESP + 0x2c]        ; 00470982
    FNSTSW AX                           ; 00470986
    SAHF                                ; 00470988
    JBE 0x004709b0                      ; 00470989
        ;   XREF to: 004709b0 (CONDITIONAL_JUMP)  ; LAB_004709b0
    FLD float ptr [ESP + 0x2c]          ; 0047098b
    FLD1                                ; 0047098f
    FADDP                               ; 00470991
    FLD float ptr [ESP + 0xec]          ; 00470993
    FCOMPP                              ; 0047099a
    FNSTSW AX                           ; 0047099c
    SAHF                                ; 0047099e
    JA 0x004708ab                       ; 0047099f
        ;   XREF to: 004708ab (CONDITIONAL_JUMP)  ; LAB_004708ab
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004709a5
    MOV dword ptr [ESP + 0xec],EAX      ; 004709a9
    FLD float ptr [ESP + 0xec]          ; 004709b0
        ;   Label: LAB_004709b0
    FCOMP float ptr [ESP + 0x20]        ; 004709b7
    FNSTSW AX                           ; 004709bb
    SAHF                                ; 004709bd
    JNC 0x004709e7                      ; 004709be
        ;   XREF to: 004709e7 (CONDITIONAL_JUMP)  ; LAB_004709e7
    FLD float ptr [ESP + 0x20]          ; 004709c0
    FADD double ptr [0x005da154]        ; 004709c4 | DAT_005da154
    FLD float ptr [ESP + 0xec]          ; 004709ca
    FCOMPP                              ; 004709d1
    FNSTSW AX                           ; 004709d3
    SAHF                                ; 004709d5
    JC 0x004708ab                       ; 004709d6
        ;   XREF to: 004708ab (CONDITIONAL_JUMP)  ; LAB_004708ab
    MOV EAX,dword ptr [ESP + 0x20]      ; 004709dc
    MOV dword ptr [ESP + 0xec],EAX      ; 004709e0
    FLD float ptr [ESP + 0x20]          ; 004709e7
        ;   Label: LAB_004709e7
    FLD float ptr [ESP + 0x24]          ; 004709eb
    FLD float ptr [ESP + 0x28]          ; 004709ef
    LEA EDI,[ESP + 0xc8]                ; 004709f3
    LEA ESI,[ESP + 0x5c]                ; 004709fa
    FXCH ST2                            ; 004709fe
    FADD float ptr [ESP + 0x2c]         ; 00470a00
    FXCH                                ; 00470a04
    FADD float ptr [ESP + 0x30]         ; 00470a06
    FXCH ST2                            ; 00470a0a
    FADD float ptr [ESP + 0x34]         ; 00470a0c
    FXCH                                ; 00470a10
    FSTP float ptr [ESP + 0x5c]         ; 00470a12
    FXCH                                ; 00470a16
    FSTP float ptr [ESP + 0x60]         ; 00470a18
    FSTP float ptr [ESP + 0x64]         ; 00470a1c
    MOVSD ES:EDI,ESI                    ; 00470a20
    MOVSD ES:EDI,ESI                    ; 00470a21
    MOVSD ES:EDI,ESI                    ; 00470a22
    FLD float ptr [0x005da13c]          ; 00470a23 | DAT_005da13c
    FLD float ptr [ESP + 0xc8]          ; 00470a29
    FMUL ST1                            ; 00470a30
    FLD float ptr [ESP + 0xcc]          ; 00470a32
    FMUL ST2                            ; 00470a39
    FLD float ptr [ESP + 0xd0]          ; 00470a3b
    FMULP ST3                           ; 00470a42
    LEA EDI,[ESP + 0x110]               ; 00470a44
    LEA ESI,[ESP + 0x104]               ; 00470a4b
    FXCH                                ; 00470a52
    FSTP float ptr [ESP + 0x104]        ; 00470a54
    FSTP float ptr [ESP + 0x108]        ; 00470a5b
    FSTP float ptr [ESP + 0x10c]        ; 00470a62
    MOVSD ES:EDI,ESI                    ; 00470a69
    MOVSD ES:EDI,ESI                    ; 00470a6a
    MOVSD ES:EDI,ESI                    ; 00470a6b
    MOV EAX,dword ptr [ESP + 0x118]     ; 00470a6c
    MOV dword ptr [ESP + 0xf4],EAX      ; 00470a73
    LEA EAX,[ESP + 0xec]                ; 00470a7a
    PUSH EAX                            ; 00470a81
    MOV EDI,dword ptr [ESP + 0x144]     ; 00470a82
    PUSH EDI                            ; 00470a89
    LEA ESI,[ESP + 0xe8]                ; 00470a8a
    LEA EBX,[ESP + 0xf4]                ; 00470a91
    CALL core_actor.cpp_FUN_00408b40    ; 00470a98
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA EDI,[ESP + 0x58]                ; 00470a9d
    LEA ESI,[ESP + 0xe8]                ; 00470aa1
    ADD ESP,0x8                         ; 00470aa8
    LEA EAX,[ESP + 0x50]                ; 00470aab
    MOVSD ES:EDI,ESI                    ; 00470aaf
    MOVSD ES:EDI,ESI                    ; 00470ab0
    MOVSD ES:EDI,ESI                    ; 00470ab1
    CMP EBX,EAX                         ; 00470ab2
    JZ 0x00470ad7                       ; 00470ab4
        ;   XREF to: 00470ad7 (CONDITIONAL_JUMP)  ; LAB_00470ad7
    MOV EAX,dword ptr [ESP + 0x50]      ; 00470ab6
    MOV dword ptr [ESP + 0xec],EAX      ; 00470aba
    MOV EAX,dword ptr [ESP + 0x54]      ; 00470ac1
    MOV dword ptr [ESP + 0xf0],EAX      ; 00470ac5
    MOV EAX,dword ptr [ESP + 0x58]      ; 00470acc
    MOV dword ptr [ESP + 0xf4],EAX      ; 00470ad0
    MOV EAX,dword ptr [EBP + 0x14]      ; 00470ad7
        ;   Label: LAB_00470ad7
    MOV EAX,dword ptr [EAX + 0x44]      ; 00470ada
    MOV dword ptr [ESP + 0x12c],EAX     ; 00470add
    MOV EAX,dword ptr [EBP + 0x14]      ; 00470ae4
    MOV EAX,dword ptr [EAX + 0x50]      ; 00470ae7
    MOV dword ptr [ESP + 0x124],EAX     ; 00470aea
    MOV EAX,dword ptr [EBP + 0x14]      ; 00470af1
    MOV EAX,dword ptr [EAX + 0x5c]      ; 00470af4
    MOV dword ptr [ESP + 0x11c],EAX     ; 00470af7
    MOV EAX,dword ptr [ESP + 0x140]     ; 00470afe
    MOV EAX,dword ptr [EAX + 0x44]      ; 00470b05
    MOV dword ptr [ESP + 0x130],EAX     ; 00470b08
    MOV EAX,dword ptr [ESP + 0x140]     ; 00470b0f
    MOV EAX,dword ptr [EAX + 0x50]      ; 00470b16
    MOV dword ptr [ESP + 0x120],EAX     ; 00470b19
    FLD float ptr [ESP + 0x124]         ; 00470b20
    FMUL float ptr [ESP + 0x120]        ; 00470b27
    MOV EAX,dword ptr [ESP + 0x140]     ; 00470b2e
    FLD float ptr [ESP + 0x12c]         ; 00470b35
    FMUL float ptr [ESP + 0x130]        ; 00470b3c
    MOV EAX,dword ptr [EAX + 0x5c]      ; 00470b43
    FADDP                               ; 00470b46
    MOV dword ptr [ESP + 0x128],EAX     ; 00470b48
    FLD float ptr [ESP + 0x11c]         ; 00470b4f
    FMUL float ptr [ESP + 0x128]        ; 00470b56
    FADDP                               ; 00470b5d
    FABS                                ; 00470b5f
    FLD double ptr [0x005da15c]         ; 00470b61 | DAT_005da15c
    FCOS                                ; 00470b67
    FCOMPP                              ; 00470b69
    FNSTSW AX                           ; 00470b6b
    SAHF                                ; 00470b6d
    JA 0x004708ab                       ; 00470b6e
        ;   XREF to: 004708ab (CONDITIONAL_JUMP)  ; LAB_004708ab
    MOV EAX,dword ptr [ESP + 0x140]     ; 00470b74
    ADD EAX,0x20                        ; 00470b7b
    PUSH EAX                            ; 00470b7e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00470b7f
    PUSH EAX                            ; 00470b82
    LEA ESI,[ESP + 0xac]                ; 00470b83
    LEA EDI,[ESP + 0xb8]                ; 00470b8a
    CALL core_actor.cpp_FUN_00408bb0    ; 00470b91
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0xac]                ; 00470b96
    ADD ESP,0x8                         ; 00470b9d
    MOVSD ES:EDI,ESI                    ; 00470ba0
    MOVSD ES:EDI,ESI                    ; 00470ba1
    MOVSD ES:EDI,ESI                    ; 00470ba2
    FLD float ptr [ESP + 0xb8]          ; 00470ba3
    FLDZ                                ; 00470baa
    FCOMPP                              ; 00470bac
    FNSTSW AX                           ; 00470bae
    SAHF                                ; 00470bb0
    JNC 0x004708ab                      ; 00470bb1
        ;   XREF to: 004708ab (CONDITIONAL_JUMP)  ; LAB_004708ab
    PUSH 0x1                            ; 00470bb7
    MOV EAX,dword ptr [EBP + 0x14]      ; 00470bb9
    PUSH 0x2f                           ; 00470bbc
    ADD EAX,0x158                       ; 00470bbe
    MOV EBX,dword ptr [ESP + 0x148]     ; 00470bc3
    PUSH EAX                            ; 00470bca
    MOV dword ptr [EAX + 0x1fe2c],EBX   ; 00470bcb
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00470bd1
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00470bd6
    MOV ESI,0x40000000                  ; 00470bd9
    MOV EAX,dword ptr [EBP + 0x14]      ; 00470bde
    XOR EDX,EDX                         ; 00470be1
    MOV EBX,EAX                         ; 00470be3
    MOV dword ptr [EAX + 0xc1e4],0x0    ; 00470be5
    LEA EAX,[ESP + 0xd4]                ; 00470bef
    MOV EDI,dword ptr [ESP + 0x140]     ; 00470bf6
    PUSH EAX                            ; 00470bfd
    MOV dword ptr [ESP + 0xd8],EDX      ; 00470bfe
    MOV dword ptr [ESP + 0xe0],ESI      ; 00470c05
    PUSH EDI                            ; 00470c0c
    LEA ESI,[ESP + 0x7c]                ; 00470c0d
    MOV dword ptr [ESP + 0xe0],EDX      ; 00470c11
    CALL core_actor.cpp_FUN_00408b40    ; 00470c18
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA EDI,[ESP + 0x100]               ; 00470c1d
    LEA ESI,[ESP + 0x7c]                ; 00470c24
    ADD ESP,0x8                         ; 00470c28
    ADD EBX,0x200ac                     ; 00470c2b
    MOVSD ES:EDI,ESI                    ; 00470c31
    MOVSD ES:EDI,ESI                    ; 00470c32
    MOVSD ES:EDI,ESI                    ; 00470c33
    LEA EAX,[ESP + 0x8c]                ; 00470c34
    FLD float ptr [ESP + 0xf8]          ; 00470c3b
    FLD float ptr [ESP + 0xfc]          ; 00470c42
    FLD float ptr [ESP + 0x100]         ; 00470c49
    LEA EDI,[ESP + 0x8c]                ; 00470c50
    LEA ESI,[ESP + 0x80]                ; 00470c57
    FXCH ST2                            ; 00470c5e
    FSUB float ptr [EBX + 0xfffdff74]   ; 00470c60
    FXCH                                ; 00470c66
    FSUB float ptr [EBX + 0xfffdff78]   ; 00470c68
    FXCH ST2                            ; 00470c6e
    FSUB float ptr [EBX + 0xfffdff7c]   ; 00470c70
    FXCH                                ; 00470c76
    FSTP float ptr [ESP + 0x80]         ; 00470c78
    FXCH                                ; 00470c7f
    FSTP float ptr [ESP + 0x84]         ; 00470c81
    FSTP float ptr [ESP + 0x88]         ; 00470c88
    MOVSD ES:EDI,ESI                    ; 00470c8f
    MOVSD ES:EDI,ESI                    ; 00470c90
    MOVSD ES:EDI,ESI                    ; 00470c91
    CMP EBX,EAX                         ; 00470c92
    JZ 0x00470cb3                       ; 00470c94
        ;   XREF to: 00470cb3 (CONDITIONAL_JUMP)  ; LAB_00470cb3
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00470c96
    MOV dword ptr [EBX],EAX             ; 00470c9d
    MOV EAX,dword ptr [ESP + 0x90]      ; 00470c9f
    MOV dword ptr [EBX + 0x4],EAX       ; 00470ca6
    MOV EAX,dword ptr [ESP + 0x94]      ; 00470ca9
    MOV dword ptr [EBX + 0x8],EAX       ; 00470cb0
    FLD float ptr [ESP + 0xec]          ; 00470cb3
        ;   Label: LAB_00470cb3
    FLD float ptr [ESP + 0xf0]          ; 00470cba
    FLD float ptr [ESP + 0xf4]          ; 00470cc1
    MOV EAX,dword ptr [EBP + 0x14]      ; 00470cc8
    LEA EDI,[ESP + 0x38]                ; 00470ccb
    LEA ESI,[ESP + 0x44]                ; 00470ccf
    FXCH ST2                            ; 00470cd3
    FSUB float ptr [EAX + 0x20]         ; 00470cd5
    FXCH                                ; 00470cd8
    FSUB float ptr [EAX + 0x24]         ; 00470cda
    FXCH ST2                            ; 00470cdd
    FSUB float ptr [EAX + 0x28]         ; 00470cdf
    FXCH                                ; 00470ce2
    FSTP float ptr [ESP + 0x44]         ; 00470ce4
    FXCH                                ; 00470ce8
    FSTP float ptr [ESP + 0x48]         ; 00470cea
    FSTP float ptr [ESP + 0x4c]         ; 00470cee
    LEA EAX,[ESP + 0x38]                ; 00470cf2
    MOVSD ES:EDI,ESI                    ; 00470cf6
    MOVSD ES:EDI,ESI                    ; 00470cf7
    MOVSD ES:EDI,ESI                    ; 00470cf8
    PUSH EAX                            ; 00470cf9
    LEA ESI,[ESP + 0xc0]                ; 00470cfa
    LEA EDI,[ESP + 0x9c]                ; 00470d01
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 00470d08
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[ESP + 0xc0]                ; 00470d0d
    ADD ESP,0x4                         ; 00470d14
    MOVSD ES:EDI,ESI                    ; 00470d17
    MOVSD ES:EDI,ESI                    ; 00470d18
    MOVSD ES:EDI,ESI                    ; 00470d19
    MOV EBX,dword ptr [EBP + 0x14]      ; 00470d1a
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00470d1d
    MOV dword ptr [EBX + 0x200b8],EAX   ; 00470d24
    MOV EAX,dword ptr [ESP + 0x140]     ; 00470d2a
    PUSH EAX                            ; 00470d31
    PUSH 0x5da11f                       ; 00470d32
    MOV EDX,dword ptr [0x00611100]      ; 00470d37 | g_CConsolePtr
    PUSH EDX                            ; 00470d3d
    MOV dword ptr [EBX + 0x200bc],0x3f800000 ; 00470d3e
    CALL engine_console.cpp_FUN_00445430 ; 00470d48
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    MOV EAX,0x1                         ; 00470d4d
    ADD ESP,0xc                         ; 00470d52
    MOV ESP,EBP                         ; 00470d55
    POP EBP                             ; 00470d57
    POP EDI                             ; 00470d58
    POP ESI                             ; 00470d59
    POP EBX                             ; 00470d5a
    RET                                 ; 00470d5b

