; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_doc_cpp_CDoc_tryDescendLadder_FUN_00458930(CDoc *this_ptr)
;
; Parameters:
; CDoc *           Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005d038f
;   undefined4 DAT_005d0397
;   undefined4 DAT_005d039f
;   undefined4 DAT_005d03a7
;   undefined4 DAT_005d03af
;   undefined4 DAT_005d03b7
;   CConsole* g_CConsolePtr = 007c158c
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 g_CLadderClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408d70
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
;   core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
;   engine_console.cpp_CConsole_printf_FUN_00436710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00458930
        ;   Label: core_doc.cpp_CDoc_tryDescendLadder_FUN_00458930
    PUSH ESI                            ; 00458931
    PUSH EDI                            ; 00458932
    PUSH EBP                            ; 00458933
    MOV EBP,ESP                         ; 00458934
    SUB ESP,0x150                       ; 00458936
    AND ESP,0xfffffff8                  ; 0045893c
    PUSH 0x0                            ; 0045893f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00458941
    PUSH EAX                            ; 00458944
    MOV dword ptr [EAX + 0x25694],0x0   ; 00458945
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0 ; 0045894f
        ;   XREF to: 0042a5a0 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(CCharacter * this_ptr, int state_index)
    MOV dword ptr [ESP + 0x154],EAX     ; 00458954
    FLD float ptr [ESP + 0x154]         ; 0045895b
    ADD ESP,0x8                         ; 00458962
    FCOMP double ptr [0x005d038f]       ; 00458965 | DAT_005d038f
    FNSTSW AX                           ; 0045896b
    SAHF                                ; 0045896d
    JC 0x004589b2                       ; 0045896e
        ;   XREF to: 004589b2 (CONDITIONAL_JUMP)  ; LAB_004589b2
    MOV EAX,dword ptr [EBP + 0x14]      ; 00458970
    MOV ECX,dword ptr [EAX + 0x2620]    ; 00458973
    TEST ECX,ECX                        ; 00458979
    JNZ 0x004589b2                      ; 0045897b
        ;   XREF to: 004589b2 (CONDITIONAL_JUMP)  ; LAB_004589b2
    CMP dword ptr [EAX + 0x2698],0x0    ; 0045897d
    JNZ 0x004589b2                      ; 00458984
        ;   XREF to: 004589b2 (CONDITIONAL_JUMP)  ; LAB_004589b2
    MOV dword ptr [ESP + 0x140],ECX     ; 00458986
    ADD EAX,0x20                        ; 0045898d
    MOV dword ptr [ESP + 0x144],ECX     ; 00458990
    MOV dword ptr [ESP + 0x138],EAX     ; 00458997
    MOV EAX,[0x0061b5a8]                ; 0045899e | g_CDemonSetPtr
        ;   Label: LAB_0045899e
    MOV EBX,dword ptr [ESP + 0x140]     ; 004589a3
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 004589aa
    JL 0x004589dd                       ; 004589b0
        ;   XREF to: 004589dd (CONDITIONAL_JUMP)  ; LAB_004589dd
    XOR EAX,EAX                         ; 004589b2
        ;   Label: LAB_004589b2
    MOV ESP,EBP                         ; 004589b4
    POP EBP                             ; 004589b6
    POP EDI                             ; 004589b7
    POP ESI                             ; 004589b8
    POP EBX                             ; 004589b9
    RET                                 ; 004589ba
    MOV ECX,dword ptr [ESP + 0x140]     ; 004589bb
        ;   Label: LAB_004589bb
    MOV EDX,dword ptr [ESP + 0x144]     ; 004589c2
    INC ECX                             ; 004589c9
    ADD EDX,0x4                         ; 004589ca
    MOV dword ptr [ESP + 0x140],ECX     ; 004589cd
    MOV dword ptr [ESP + 0x144],EDX     ; 004589d4
    JMP 0x0045899e                      ; 004589db
        ;   XREF to: 0045899e (UNCONDITIONAL_JUMP)  ; LAB_0045899e
    MOV ECX,dword ptr [ESP + 0x144]     ; 004589dd
        ;   Label: LAB_004589dd
    MOV EBX,dword ptr [0x01d02fc0]      ; 004589e4 | g_CLadderClassInfo.name_hash
    ADD EAX,ECX                         ; 004589ea
    PUSH EBX                            ; 004589ec
    MOV EAX,dword ptr [EAX + 0x14d168]  ; 004589ed
    PUSH EAX                            ; 004589f3
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004589f4
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004589f9
    MOV EBX,EAX                         ; 004589fc
    MOV dword ptr [ESP + 0x148],EAX     ; 004589fe
    TEST EAX,EAX                        ; 00458a05
    JZ 0x004589bb                       ; 00458a07
        ;   XREF to: 004589bb (CONDITIONAL_JUMP)  ; LAB_004589bb
    FLD float ptr [EBX + 0x24]          ; 00458a09
    FADD float ptr [EAX + 0x434]        ; 00458a0c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00458a12
    FSUBR float ptr [EAX + 0x24]        ; 00458a15
    FABS                                ; 00458a18
    FCOMP double ptr [0x005d039f]       ; 00458a1a | DAT_005d039f
    FNSTSW AX                           ; 00458a20
    SAHF                                ; 00458a22
    JA 0x004589bb                       ; 00458a23
        ;   XREF to: 004589bb (CONDITIONAL_JUMP)  ; LAB_004589bb
    MOV ESI,dword ptr [ESP + 0x138]     ; 00458a25
    PUSH ESI                            ; 00458a2c
    PUSH EBX                            ; 00458a2d
    LEA ESI,[ESP + 0x54]                ; 00458a2e
    LEA EDI,[ESP + 0x78]                ; 00458a32
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408de0 ; 00458a36
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408de0(CDemonActor * this_ptr, CVector3f * input_world_point, CVector3f * output_local_point)
    LEA ESI,[ESP + 0x54]                ; 00458a3b
    ADD ESP,0x8                         ; 00458a3f
    MOVSD ES:EDI,ESI                    ; 00458a42
    MOVSD ES:EDI,ESI                    ; 00458a43
    MOVSD ES:EDI,ESI                    ; 00458a44
    FLD float ptr [ESP + 0x78]          ; 00458a45
    FST double ptr [ESP + 0x8]          ; 00458a49
    FABS                                ; 00458a4d
    FCOMP double ptr [0x005d03a7]       ; 00458a4f | DAT_005d03a7
    FNSTSW AX                           ; 00458a55
    SAHF                                ; 00458a57
    JA 0x004589bb                       ; 00458a58
        ;   XREF to: 004589bb (CONDITIONAL_JUMP)  ; LAB_004589bb
    FLDZ                                ; 00458a5e
    FCOMP double ptr [ESP + 0x8]        ; 00458a60
    FNSTSW AX                           ; 00458a64
    SAHF                                ; 00458a66
    JC 0x004589bb                       ; 00458a67
        ;   XREF to: 004589bb (CONDITIONAL_JUMP)  ; LAB_004589bb
    PUSH EBX                            ; 00458a6d
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00458a6e
    LEA ESI,[ESP + 0x14]                ; 00458a74
    LEA EDI,[ESP + 0x2c]                ; 00458a78
    CALL dword ptr [EAX + 0x24]         ; 00458a7c
    MOV ECX,0x6                         ; 00458a7f
    LEA ESI,[ESP + 0x14]                ; 00458a84
    ADD ESP,0x4                         ; 00458a88
    MOVSD.REP ES:EDI,ESI                ; 00458a8b
    FLD float ptr [ESP + 0x70]          ; 00458a8d
    FCOMP float ptr [ESP + 0x34]        ; 00458a91
    FNSTSW AX                           ; 00458a95
    SAHF                                ; 00458a97
    JBE 0x00458ab9                      ; 00458a98
        ;   XREF to: 00458ab9 (CONDITIONAL_JUMP)  ; LAB_00458ab9
    FLD float ptr [ESP + 0x34]          ; 00458a9a
    FLD1                                ; 00458a9e
    FADDP                               ; 00458aa0
    FLD float ptr [ESP + 0x70]          ; 00458aa2
    FCOMPP                              ; 00458aa6
    FNSTSW AX                           ; 00458aa8
    SAHF                                ; 00458aaa
    JA 0x004589bb                       ; 00458aab
        ;   XREF to: 004589bb (CONDITIONAL_JUMP)  ; LAB_004589bb
    MOV EAX,dword ptr [ESP + 0x34]      ; 00458ab1
    MOV dword ptr [ESP + 0x70],EAX      ; 00458ab5
    FLD float ptr [ESP + 0x70]          ; 00458ab9
        ;   Label: LAB_00458ab9
    FCOMP float ptr [ESP + 0x28]        ; 00458abd
    FNSTSW AX                           ; 00458ac1
    SAHF                                ; 00458ac3
    JNC 0x00458ae7                      ; 00458ac4
        ;   XREF to: 00458ae7 (CONDITIONAL_JUMP)  ; LAB_00458ae7
    FLD float ptr [ESP + 0x28]          ; 00458ac6
    FADD double ptr [0x005d03af]        ; 00458aca | DAT_005d03af
    FLD float ptr [ESP + 0x70]          ; 00458ad0
    FCOMPP                              ; 00458ad4
    FNSTSW AX                           ; 00458ad6
    SAHF                                ; 00458ad8
    JC 0x004589bb                       ; 00458ad9
        ;   XREF to: 004589bb (CONDITIONAL_JUMP)  ; LAB_004589bb
    MOV EAX,dword ptr [ESP + 0x28]      ; 00458adf
    MOV dword ptr [ESP + 0x70],EAX      ; 00458ae3
    FLD float ptr [ESP + 0x28]          ; 00458ae7
        ;   Label: LAB_00458ae7
    FLD float ptr [ESP + 0x2c]          ; 00458aeb
    FLD float ptr [ESP + 0x30]          ; 00458aef
    LEA EDI,[ESP + 0x94]                ; 00458af3
    LEA ESI,[ESP + 0xc4]                ; 00458afa
    FXCH ST2                            ; 00458b01
    FADD float ptr [ESP + 0x34]         ; 00458b03
    FXCH                                ; 00458b07
    FADD float ptr [ESP + 0x38]         ; 00458b09
    FXCH ST2                            ; 00458b0d
    FADD float ptr [ESP + 0x3c]         ; 00458b0f
    FXCH                                ; 00458b13
    FSTP float ptr [ESP + 0xc4]         ; 00458b15
    FXCH                                ; 00458b1c
    FSTP float ptr [ESP + 0xc8]         ; 00458b1e
    FSTP float ptr [ESP + 0xcc]         ; 00458b25
    MOVSD ES:EDI,ESI                    ; 00458b2c
    MOVSD ES:EDI,ESI                    ; 00458b2d
    MOVSD ES:EDI,ESI                    ; 00458b2e
    FLD float ptr [0x005d0397]          ; 00458b2f | DAT_005d0397
    FLD float ptr [ESP + 0x94]          ; 00458b35
    FMUL ST1                            ; 00458b3c
    FLD float ptr [ESP + 0x98]          ; 00458b3e
    FMUL ST2                            ; 00458b45
    FLD float ptr [ESP + 0x9c]          ; 00458b47
    FMULP ST3                           ; 00458b4e
    LEA EDI,[ESP + 0x40]                ; 00458b50
    LEA ESI,[ESP + 0x58]                ; 00458b54
    FXCH                                ; 00458b58
    FSTP float ptr [ESP + 0x58]         ; 00458b5a
    FSTP float ptr [ESP + 0x5c]         ; 00458b5e
    FSTP float ptr [ESP + 0x60]         ; 00458b62
    MOVSD ES:EDI,ESI                    ; 00458b66
    MOVSD ES:EDI,ESI                    ; 00458b67
    MOVSD ES:EDI,ESI                    ; 00458b68
    MOV EAX,dword ptr [ESP + 0x48]      ; 00458b69
    MOV dword ptr [ESP + 0x78],EAX      ; 00458b6d
    LEA EAX,[ESP + 0x70]                ; 00458b71
    PUSH EAX                            ; 00458b75
    MOV EDI,dword ptr [ESP + 0x14c]     ; 00458b76
    PUSH EDI                            ; 00458b7d
    LEA ESI,[ESP + 0xc0]                ; 00458b7e
    LEA EBX,[ESP + 0x78]                ; 00458b85
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408d70 ; 00458b89
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408d70(CDemonActor * this_ptr, CVector3f * input_local_point, CVector3f * output_world_point)
    LEA EDI,[ESP + 0xe4]                ; 00458b8e
    LEA ESI,[ESP + 0xc0]                ; 00458b95
    ADD ESP,0x8                         ; 00458b9c
    LEA EAX,[ESP + 0xdc]                ; 00458b9f
    MOVSD ES:EDI,ESI                    ; 00458ba6
    MOVSD ES:EDI,ESI                    ; 00458ba7
    MOVSD ES:EDI,ESI                    ; 00458ba8
    CMP EBX,EAX                         ; 00458ba9
    JZ 0x00458bce                       ; 00458bab
        ;   XREF to: 00458bce (CONDITIONAL_JUMP)  ; LAB_00458bce
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00458bad
    MOV dword ptr [ESP + 0x70],EAX      ; 00458bb4
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00458bb8
    MOV dword ptr [ESP + 0x74],EAX      ; 00458bbf
    MOV EAX,dword ptr [ESP + 0xe4]      ; 00458bc3
    MOV dword ptr [ESP + 0x78],EAX      ; 00458bca
    MOV EAX,dword ptr [ESP + 0x148]     ; 00458bce
        ;   Label: LAB_00458bce
    FLD float ptr [ESP + 0x74]          ; 00458bd5
    FADD float ptr [EAX + 0x434]        ; 00458bd9
    MOV EAX,dword ptr [EBP + 0x14]      ; 00458bdf
    FSTP float ptr [ESP + 0x74]         ; 00458be2
    MOV EAX,dword ptr [EAX + 0x44]      ; 00458be6
    MOV dword ptr [ESP + 0x128],EAX     ; 00458be9
    MOV EAX,dword ptr [EBP + 0x14]      ; 00458bf0
    MOV EAX,dword ptr [EAX + 0x50]      ; 00458bf3
    MOV dword ptr [ESP + 0x12c],EAX     ; 00458bf6
    MOV EAX,dword ptr [EBP + 0x14]      ; 00458bfd
    MOV EAX,dword ptr [EAX + 0x5c]      ; 00458c00
    MOV dword ptr [ESP + 0x124],EAX     ; 00458c03
    MOV EAX,dword ptr [ESP + 0x148]     ; 00458c0a
    MOV EAX,dword ptr [EAX + 0x44]      ; 00458c11
    MOV dword ptr [ESP + 0x130],EAX     ; 00458c14
    MOV EAX,dword ptr [ESP + 0x148]     ; 00458c1b
    MOV EAX,dword ptr [EAX + 0x50]      ; 00458c22
    MOV dword ptr [ESP + 0x134],EAX     ; 00458c25
    MOV EAX,dword ptr [ESP + 0x148]     ; 00458c2c
    MOV EAX,dword ptr [EAX + 0x5c]      ; 00458c33
    FLD double ptr [0x005d03b7]         ; 00458c36 | DAT_005d03b7
    MOV dword ptr [ESP + 0x13c],EAX     ; 00458c3c
    FCOS                                ; 00458c43
    FLD float ptr [ESP + 0x12c]         ; 00458c45
    FMUL float ptr [ESP + 0x134]        ; 00458c4c
    FLD float ptr [ESP + 0x128]         ; 00458c53
    FMUL float ptr [ESP + 0x130]        ; 00458c5a
    FADDP                               ; 00458c61
    FLD float ptr [ESP + 0x124]         ; 00458c63
    FMUL float ptr [ESP + 0x13c]        ; 00458c6a
    FADDP                               ; 00458c71
    FABS                                ; 00458c73
    FSTP double ptr [ESP]               ; 00458c75
    FCOMP double ptr [ESP]              ; 00458c78
    FNSTSW AX                           ; 00458c7b
    SAHF                                ; 00458c7d
    JA 0x004589bb                       ; 00458c7e
        ;   XREF to: 004589bb (CONDITIONAL_JUMP)  ; LAB_004589bb
    MOV EAX,dword ptr [ESP + 0x148]     ; 00458c84
    ADD EAX,0x20                        ; 00458c8b
    PUSH EAX                            ; 00458c8e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00458c8f
    PUSH EAX                            ; 00458c92
    LEA ESI,[ESP + 0xf0]                ; 00458c93
    LEA EDI,[ESP + 0x90]                ; 00458c9a
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408de0 ; 00458ca1
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408de0(CDemonActor * this_ptr, CVector3f * input_world_point, CVector3f * output_local_point)
    LEA ESI,[ESP + 0xf0]                ; 00458ca6
    ADD ESP,0x8                         ; 00458cad
    MOVSD ES:EDI,ESI                    ; 00458cb0
    MOVSD ES:EDI,ESI                    ; 00458cb1
    MOVSD ES:EDI,ESI                    ; 00458cb2
    FLD float ptr [ESP + 0x90]          ; 00458cb3
    FLDZ                                ; 00458cba
    FCOMPP                              ; 00458cbc
    FNSTSW AX                           ; 00458cbe
    SAHF                                ; 00458cc0
    JNC 0x004589bb                      ; 00458cc1
        ;   XREF to: 004589bb (CONDITIONAL_JUMP)  ; LAB_004589bb
    MOV EDX,dword ptr [ESP + 0x4]       ; 00458cc7
    PUSH EDX                            ; 00458ccb
    MOV ECX,dword ptr [ESP + 0x4]       ; 00458ccc
    PUSH ECX                            ; 00458cd0
    PUSH 0x5d0377                       ; 00458cd1
    MOV EBX,dword ptr [0x00609ed0]      ; 00458cd6 | g_CConsolePtr
    PUSH EBX                            ; 00458cdc
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 00458cdd
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 00458ce2
    PUSH 0x1                            ; 00458ce5
    MOV EAX,dword ptr [EBP + 0x14]      ; 00458ce7
    PUSH 0x2d                           ; 00458cea
    ADD EAX,0x2b4                       ; 00458cec
    MOV EBX,dword ptr [ESP + 0x150]     ; 00458cf1
    PUSH EAX                            ; 00458cf8
    MOV dword ptr [EAX + 0x253e0],EBX   ; 00458cf9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00458cff
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00458d04
    MOV EAX,dword ptr [EBP + 0x14]      ; 00458d07
    MOV EBX,EAX                         ; 00458d0a
    MOV dword ptr [EAX + 0x10a74],0x0   ; 00458d0c
    MOV EAX,dword ptr [ESP + 0x148]     ; 00458d16
    MOV EDI,0xbfc00000                  ; 00458d1d
    MOV EAX,dword ptr [EAX + 0x434]     ; 00458d22
    XOR ESI,ESI                         ; 00458d28
    MOV dword ptr [ESP + 0x80],EAX      ; 00458d2a
    LEA EAX,[ESP + 0x7c]                ; 00458d31
    MOV dword ptr [ESP + 0x7c],ESI      ; 00458d35
    PUSH EAX                            ; 00458d39
    MOV EAX,dword ptr [ESP + 0x14c]     ; 00458d3a
    MOV dword ptr [ESP + 0x88],EDI      ; 00458d41
    PUSH EAX                            ; 00458d48
    LEA ESI,[ESP + 0xb4]                ; 00458d49
    LEA EDI,[ESP + 0xa8]                ; 00458d50
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408d70 ; 00458d57
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408d70(CDemonActor * this_ptr, CVector3f * input_local_point, CVector3f * output_world_point)
    LEA ESI,[ESP + 0xb4]                ; 00458d5c
    ADD ESP,0x8                         ; 00458d63
    ADD EBX,0x25740                     ; 00458d66
    MOVSD ES:EDI,ESI                    ; 00458d6c
    MOVSD ES:EDI,ESI                    ; 00458d6d
    MOVSD ES:EDI,ESI                    ; 00458d6e
    LEA EAX,[ESP + 0xd0]                ; 00458d6f
    FLD float ptr [ESP + 0xa0]          ; 00458d76
    FLD float ptr [ESP + 0xa4]          ; 00458d7d
    FLD float ptr [ESP + 0xa8]          ; 00458d84
    LEA EDI,[ESP + 0xd0]                ; 00458d8b
    LEA ESI,[ESP + 0x10c]               ; 00458d92
    FXCH ST2                            ; 00458d99
    FSUB float ptr [EBX + 0xfffda8e0]   ; 00458d9b
    FXCH                                ; 00458da1
    FSUB float ptr [EBX + 0xfffda8e4]   ; 00458da3
    FXCH ST2                            ; 00458da9
    FSUB float ptr [EBX + 0xfffda8e8]   ; 00458dab
    FXCH                                ; 00458db1
    FSTP float ptr [ESP + 0x10c]        ; 00458db3
    FXCH                                ; 00458dba
    FSTP float ptr [ESP + 0x110]        ; 00458dbc
    FSTP float ptr [ESP + 0x114]        ; 00458dc3
    MOVSD ES:EDI,ESI                    ; 00458dca
    MOVSD ES:EDI,ESI                    ; 00458dcb
    MOVSD ES:EDI,ESI                    ; 00458dcc
    CMP EBX,EAX                         ; 00458dcd
    JZ 0x00458dee                       ; 00458dcf
        ;   XREF to: 00458dee (CONDITIONAL_JUMP)  ; LAB_00458dee
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00458dd1
    MOV dword ptr [EBX],EAX             ; 00458dd8
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00458dda
    MOV dword ptr [EBX + 0x4],EAX       ; 00458de1
    MOV EAX,dword ptr [ESP + 0xd8]      ; 00458de4
    MOV dword ptr [EBX + 0x8],EAX       ; 00458deb
    FLD float ptr [ESP + 0x70]          ; 00458dee
        ;   Label: LAB_00458dee
    FLD float ptr [ESP + 0x74]          ; 00458df2
    FLD float ptr [ESP + 0x78]          ; 00458df6
    MOV EAX,dword ptr [EBP + 0x14]      ; 00458dfa
    LEA EDI,[ESP + 0x64]                ; 00458dfd
    LEA ESI,[ESP + 0x118]               ; 00458e01
    FXCH ST2                            ; 00458e08
    FSUB float ptr [EAX + 0x20]         ; 00458e0a
    FXCH                                ; 00458e0d
    FSUB float ptr [EAX + 0x24]         ; 00458e0f
    FXCH ST2                            ; 00458e12
    FSUB float ptr [EAX + 0x28]         ; 00458e14
    FXCH                                ; 00458e17
    FSTP float ptr [ESP + 0x118]        ; 00458e19
    FXCH                                ; 00458e20
    FSTP float ptr [ESP + 0x11c]        ; 00458e22
    FSTP float ptr [ESP + 0x120]        ; 00458e29
    LEA EAX,[ESP + 0x64]                ; 00458e30
    MOVSD ES:EDI,ESI                    ; 00458e34
    MOVSD ES:EDI,ESI                    ; 00458e35
    MOVSD ES:EDI,ESI                    ; 00458e36
    PUSH EAX                            ; 00458e37
    LEA ESI,[ESP + 0xf8]                ; 00458e38
    LEA EDI,[ESP + 0x104]               ; 00458e3f
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 00458e46
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(CVector3f * in_direction_vector, CVector3f * out_euler_angles)
    LEA ESI,[ESP + 0xf8]                ; 00458e4b
    ADD ESP,0x4                         ; 00458e52
    MOVSD ES:EDI,ESI                    ; 00458e55
    MOVSD ES:EDI,ESI                    ; 00458e56
    MOVSD ES:EDI,ESI                    ; 00458e57
    MOV EBX,dword ptr [EBP + 0x14]      ; 00458e58
    MOV EAX,dword ptr [ESP + 0x104]     ; 00458e5b
    MOV dword ptr [EBX + 0x25750],0x3f800000 ; 00458e62
    MOV dword ptr [EBX + 0x2574c],EAX   ; 00458e6c
    MOV EAX,0x1                         ; 00458e72
    MOV ESP,EBP                         ; 00458e77
    POP EBP                             ; 00458e79
    POP EDI                             ; 00458e7a
    POP ESI                             ; 00458e7b
    POP EBX                             ; 00458e7c
    RET                                 ; 00458e7d

