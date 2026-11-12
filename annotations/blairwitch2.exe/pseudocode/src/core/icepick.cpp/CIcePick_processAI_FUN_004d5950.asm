; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_icepick_cpp_CIcePick_processAI_FUN_004d5950(CIcePick *this_ptr,float delta_time)
;
; Parameters:
; CIcePick *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[1]:
;   core_icepick.cpp_CIcePick_process_FUN_004d4c50 at 004d5001
;
; Referenced Globals:
;   undefined4 DAT_005da8b6
;   undefined4 DAT_005da8be
;   undefined4 DAT_005da8c6
;   undefined4 DAT_005da8ce
;   undefined4 DAT_005da8d6
;   undefined4 DAT_005da8de
;   undefined4 DAT_005da8e6
;   undefined4 DAT_005da8ea
;   undefined4 DAT_01cedef4
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0
;   core_charactr.cpp_FUN_0042abe0
;   core_hero.cpp_FUN_004d00c0
;   core_motion.cpp_FUN_005035c0
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_00513650
;   core_path.cpp_getPathMap_FUN_00513ea0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
;   crt_memory.c_memset_FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d5950
        ;   Label: core_icepick.cpp_CIcePick_processAI_FUN_004d5950
    PUSH ESI                            ; 004d5951
    PUSH EDI                            ; 004d5952
    PUSH EBP                            ; 004d5953
    MOV EBP,ESP                         ; 004d5954
    SUB ESP,0xe0                        ; 004d5956
    AND ESP,0xfffffff8                  ; 004d595c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004d595f
    MOV ECX,0x3e800000                  ; 004d5962
    MOV ESI,0x3f490fdb                  ; 004d5967
    MOV EAX,[0x01cedef4]                ; 004d596c | DAT_01cedef4
    PUSH 0x34                           ; 004d5971
    XOR EDX,EDX                         ; 004d5973
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004d5975
    PUSH EDX                            ; 004d597c
    MOV dword ptr [ESP + 0xc8],EAX      ; 004d597d
    LEA EAX,[EBX + 0x10a68]             ; 004d5984
    MOV dword ptr [ESP + 0xd0],EDX      ; 004d598a
    PUSH EAX                            ; 004d5991
    MOV dword ptr [ESP + 0xd8],ECX      ; 004d5992
    MOV dword ptr [ESP + 0xc8],ESI      ; 004d5999
    CALL crt_memory.c_memset_FUN_005b77c0 ; 004d59a0
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    MOV EDI,dword ptr [EBX + 0x25638]   ; 004d59a5
    ADD ESP,0xc                         ; 004d59ab
    TEST EDI,EDI                        ; 004d59ae
    JZ 0x004d5e6b                       ; 004d59b0
        ;   XREF to: 004d5e6b (CONDITIONAL_JUMP)  ; LAB_004d5e6b
    LEA EAX,[EBX + 0x20]                ; 004d59b6
    LEA EDI,[ESP + 0x14]                ; 004d59b9
    MOV ESI,dword ptr [0x01cedef4]      ; 004d59bd | DAT_01cedef4
    FLD float ptr [EAX]                 ; 004d59c3
    FLD float ptr [EAX + 0x4]           ; 004d59c5
    MOV ESI,dword ptr [ESI*0x4 + 0x1cedee4] ; 004d59c8
    FLD float ptr [EAX + 0x8]           ; 004d59cf
    FXCH ST2                            ; 004d59d2
    FSUB float ptr [ESI + 0x20]         ; 004d59d4
    FXCH                                ; 004d59d7
    FSUB float ptr [ESI + 0x24]         ; 004d59d9
    FXCH ST2                            ; 004d59dc
    FSUB float ptr [ESI + 0x28]         ; 004d59de
    FXCH                                ; 004d59e1
    FSTP float ptr [ESP + 0x68]         ; 004d59e3
    FXCH                                ; 004d59e7
    FSTP float ptr [ESP + 0x6c]         ; 004d59e9
    LEA ESI,[ESP + 0x68]                ; 004d59ed
    FSTP float ptr [ESP + 0x70]         ; 004d59f1
    MOVSD ES:EDI,ESI                    ; 004d59f5
    MOVSD ES:EDI,ESI                    ; 004d59f6
    MOVSD ES:EDI,ESI                    ; 004d59f7
    FLD float ptr [ESP + 0x18]          ; 004d59f8
    FMUL ST0                            ; 004d59fc
    FLD float ptr [ESP + 0x14]          ; 004d59fe
    FMUL ST0                            ; 004d5a02
    FADDP                               ; 004d5a04
    FLD float ptr [ESP + 0x1c]          ; 004d5a06
    FMUL ST0                            ; 004d5a0a
    FADDP                               ; 004d5a0c
    FSQRT                               ; 004d5a0e
    MOV EAX,dword ptr [EBX + 0x25638]   ; 004d5a10
    FSTP float ptr [ESP + 0xd4]         ; 004d5a16
    CMP EAX,0x3                         ; 004d5a1d
    JNZ 0x004d5a2b                      ; 004d5a20
        ;   XREF to: 004d5a2b (CONDITIONAL_JUMP)  ; LAB_004d5a2b
    XOR EDX,EDX                         ; 004d5a22
    MOV dword ptr [ESP + 0xd4],EDX      ; 004d5a24
    MOV EAX,[0x01cedef4]                ; 004d5a2b | DAT_01cedef4
        ;   Label: LAB_004d5a2b
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004d5a30
    MOV ECX,0x41a00000                  ; 004d5a37
    PUSH EAX                            ; 004d5a3c
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 004d5a3d
    MOV dword ptr [ESP + 0xbc],ECX      ; 004d5a43
    CALL dword ptr [ESI + 0x154]        ; 004d5a4a
    ADD ESP,0x4                         ; 004d5a50
    TEST EAX,EAX                        ; 004d5a53
    JZ 0x004d5a62                       ; 004d5a55
        ;   XREF to: 004d5a62 (CONDITIONAL_JUMP)  ; LAB_004d5a62
    MOV dword ptr [ESP + 0xb8],0x41f00000 ; 004d5a57
    FLD float ptr [ESP + 0xd4]          ; 004d5a62
        ;   Label: LAB_004d5a62
    FCOMP float ptr [ESP + 0xb8]        ; 004d5a69
    FNSTSW AX                           ; 004d5a70
    SAHF                                ; 004d5a72
    JNC 0x004d5ad4                      ; 004d5a73
        ;   XREF to: 004d5ad4 (CONDITIONAL_JUMP)  ; LAB_004d5ad4
    MOV EDI,dword ptr [EBX + 0x25638]   ; 004d5a75
    CMP EDI,0x2                         ; 004d5a7b
    JNZ 0x004d5e72                      ; 004d5a7e
        ;   XREF to: 004d5e72 (CONDITIONAL_JUMP)  ; LAB_004d5e72
    LEA EAX,[ESP + 0xa4]                ; 004d5a84
        ;   Label: LAB_004d5a84
    PUSH EAX                            ; 004d5a8b
    MOV EDX,0x461c3f9a                  ; 004d5a8c
    PUSH EBX                            ; 004d5a91
    MOV dword ptr [ESP + 0xac],EDX      ; 004d5a92
    CALL core_hero.cpp_FUN_004d00c0     ; 004d5a99
        ;   XREF to: 004d00c0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d00c0()
    MOV ESI,EAX                         ; 004d5a9e
    ADD ESP,0x8                         ; 004d5aa0
    TEST EAX,EAX                        ; 004d5aa3
    JZ 0x004d5e80                       ; 004d5aa5
        ;   XREF to: 004d5e80 (CONDITIONAL_JUMP)  ; LAB_004d5e80
    FLD float ptr [ESP + 0xa4]          ; 004d5aab
    FCOMP float ptr [ESP + 0xb8]        ; 004d5ab2
    FNSTSW AX                           ; 004d5ab9
    SAHF                                ; 004d5abb
    JNC 0x004d5e80                      ; 004d5abc
        ;   XREF to: 004d5e80 (CONDITIONAL_JUMP)  ; LAB_004d5e80
    MOV dword ptr [ESP + 0xc0],ESI      ; 004d5ac2
    MOV dword ptr [ESP + 0xc8],0x1      ; 004d5ac9
    MOV EAX,dword ptr [ESP + 0xc0]      ; 004d5ad4
        ;   Label: LAB_004d5ad4
    LEA EDI,[ESP + 0x50]                ; 004d5adb
    LEA EDX,[ESP + 0x50]                ; 004d5adf
    LEA ESI,[EBX + 0x20]                ; 004d5ae3
    FLD float ptr [EAX + 0x24]          ; 004d5ae6
    FLD float ptr [EAX + 0x28]          ; 004d5ae9
    FLD float ptr [EAX + 0x20]          ; 004d5aec
    LEA EAX,[ESP + 0x14]                ; 004d5aef
    FSUB float ptr [ESI]                ; 004d5af3
    FXCH ST2                            ; 004d5af5
    FSUB float ptr [ESI + 0x4]          ; 004d5af7
    FXCH                                ; 004d5afa
    FSUB float ptr [ESI + 0x8]          ; 004d5afc
    FXCH ST2                            ; 004d5aff
    FSTP float ptr [ESP + 0x98]         ; 004d5b01
    FSTP float ptr [ESP + 0x9c]         ; 004d5b08
    LEA ESI,[ESP + 0x98]                ; 004d5b0f
    FSTP float ptr [ESP + 0xa0]         ; 004d5b16
    MOVSD ES:EDI,ESI                    ; 004d5b1d
    MOVSD ES:EDI,ESI                    ; 004d5b1e
    MOVSD ES:EDI,ESI                    ; 004d5b1f
    CMP EAX,EDX                         ; 004d5b20
    JZ 0x004d5b3c                       ; 004d5b22
        ;   XREF to: 004d5b3c (CONDITIONAL_JUMP)  ; LAB_004d5b3c
    MOV EAX,dword ptr [ESP + 0x50]      ; 004d5b24
    MOV dword ptr [ESP + 0x14],EAX      ; 004d5b28
    MOV EAX,dword ptr [ESP + 0x54]      ; 004d5b2c
    MOV dword ptr [ESP + 0x18],EAX      ; 004d5b30
    MOV EAX,dword ptr [ESP + 0x58]      ; 004d5b34
    MOV dword ptr [ESP + 0x1c],EAX      ; 004d5b38
    FLD float ptr [ESP + 0x18]          ; 004d5b3c
        ;   Label: LAB_004d5b3c
    FMUL ST0                            ; 004d5b40
    FLD float ptr [ESP + 0x14]          ; 004d5b42
    FMUL ST0                            ; 004d5b46
    FADDP                               ; 004d5b48
    FLD float ptr [ESP + 0x1c]          ; 004d5b4a
    FMUL ST0                            ; 004d5b4e
    FADDP                               ; 004d5b50
    FSQRT                               ; 004d5b52
    MOV dword ptr [EBX + 0x2578],0x0    ; 004d5b54
    FSTP float ptr [ESP + 0xd0]         ; 004d5b5e
    MOV EAX,dword ptr [ESP + 0xd0]      ; 004d5b65
    FLD float ptr [ESP + 0xd0]          ; 004d5b6c
    MOV dword ptr [ESP + 0x10],EAX      ; 004d5b73
    FCOMP double ptr [0x005da8b6]       ; 004d5b77 | DAT_005da8b6
    FNSTSW AX                           ; 004d5b7d
    SAHF                                ; 004d5b7f
    JNC 0x004d5f5a                      ; 004d5b80
        ;   XREF to: 004d5f5a (CONDITIONAL_JUMP)  ; LAB_004d5f5a
    MOV ECX,dword ptr [ESP + 0xc8]      ; 004d5b86
    LEA EAX,[EBX + 0x2b4]               ; 004d5b8d
    CMP ECX,0x1                         ; 004d5b93
    JNZ 0x004d5ec9                      ; 004d5b96
        ;   XREF to: 004d5ec9 (CONDITIONAL_JUMP)  ; LAB_004d5ec9
    CMP dword ptr [EBX + 0x25640],0x0   ; 004d5b9c
    JNZ 0x004d5e9c                      ; 004d5ba3
        ;   XREF to: 004d5e9c (CONDITIONAL_JUMP)  ; LAB_004d5e9c
    MOV dword ptr [EBX + 0x10a80],ECX   ; 004d5ba9
    MOV dword ptr [EBX + 0x303c],0x0    ; 004d5baf
        ;   Label: LAB_004d5baf
    CMP dword ptr [ESP + 0xc8],0x1      ; 004d5bb9
        ;   Label: LAB_004d5bb9
    JNZ 0x004d5c9d                      ; 004d5bc1
        ;   XREF to: 004d5c9d (CONDITIONAL_JUMP)  ; LAB_004d5c9d
    LEA EAX,[ESP + 0x14]                ; 004d5bc7
    PUSH EAX                            ; 004d5bcb
    LEA ESI,[ESP + 0x3c]                ; 004d5bcc
    LEA EDI,[ESP + 0x90]                ; 004d5bd0
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 004d5bd7
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[ESP + 0x3c]                ; 004d5bdc
    ADD ESP,0x4                         ; 004d5be0
    MOVSD ES:EDI,ESI                    ; 004d5be3
    MOVSD ES:EDI,ESI                    ; 004d5be4
    MOVSD ES:EDI,ESI                    ; 004d5be5
    FLD float ptr [ESP + 0x90]          ; 004d5be6
    FSUB float ptr [EBX + 0x34]         ; 004d5bed
    SUB ESP,0x4                         ; 004d5bf0
    FSTP float ptr [ESP]                ; 004d5bf3
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 004d5bf6
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [ESP + 0xe0],EAX      ; 004d5bfb
    FLD float ptr [ESP + 0xe0]          ; 004d5c02
    FMUL float ptr [0x005da8be]         ; 004d5c09 | DAT_005da8be
    ADD ESP,0x4                         ; 004d5c0f
    FMUL double ptr [0x005da8c6]        ; 004d5c12 | DAT_005da8c6
    FLD float ptr [ESP + 0xcc]          ; 004d5c18
    FCHS                                ; 004d5c1f
    FSTP float ptr [ESP + 0xa8]         ; 004d5c21
    FST float ptr [EBX + 0x10a90]       ; 004d5c28
    FCOMP float ptr [ESP + 0xa8]        ; 004d5c2e
    FNSTSW AX                           ; 004d5c35
    SAHF                                ; 004d5c37
    JNC 0x004d5c47                      ; 004d5c38
        ;   XREF to: 004d5c47 (CONDITIONAL_JUMP)  ; LAB_004d5c47
    MOV EAX,dword ptr [ESP + 0xa8]      ; 004d5c3a
    MOV dword ptr [EBX + 0x10a90],EAX   ; 004d5c41
    FLD float ptr [EBX + 0x10a90]       ; 004d5c47
        ;   Label: LAB_004d5c47
    FCOMP float ptr [ESP + 0xcc]        ; 004d5c4d
    FNSTSW AX                           ; 004d5c54
    SAHF                                ; 004d5c56
    JBE 0x004d5c66                      ; 004d5c57
        ;   XREF to: 004d5c66 (CONDITIONAL_JUMP)  ; LAB_004d5c66
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004d5c59
    MOV dword ptr [EBX + 0x10a90],EAX   ; 004d5c60
    FLD float ptr [EBX + 0x10a90]       ; 004d5c66
        ;   Label: LAB_004d5c66
    FST double ptr [ESP + 0x8]          ; 004d5c6c
    FCOMP double ptr [0x005da8d6]       ; 004d5c70 | DAT_005da8d6
    FNSTSW AX                           ; 004d5c76
    SAHF                                ; 004d5c78
    JBE 0x004d5c9d                      ; 004d5c79
        ;   XREF to: 004d5c9d (CONDITIONAL_JUMP)  ; LAB_004d5c9d
    FLD double ptr [ESP + 0x8]          ; 004d5c7b
    FCOMP double ptr [0x005da8de]       ; 004d5c7f | DAT_005da8de
    FNSTSW AX                           ; 004d5c85
    SAHF                                ; 004d5c87
    JNC 0x004d5c9d                      ; 004d5c88
        ;   XREF to: 004d5c9d (CONDITIONAL_JUMP)  ; LAB_004d5c9d
    CMP dword ptr [EBX + 0x10a74],0x0   ; 004d5c8a
    JZ 0x004d5c9d                       ; 004d5c91
        ;   XREF to: 004d5c9d (CONDITIONAL_JUMP)  ; LAB_004d5c9d
    MOV dword ptr [EBX + 0x10a90],0x0   ; 004d5c93
    FLDZ                                ; 004d5c9d
        ;   Label: LAB_004d5c9d
    FLD float ptr [EBX + 0x2578]        ; 004d5c9f
    FSTP double ptr [ESP]               ; 004d5ca5
    FCOMP double ptr [ESP]              ; 004d5ca8
    FNSTSW AX                           ; 004d5cab
    SAHF                                ; 004d5cad
    JNC 0x004d6103                      ; 004d5cae
        ;   XREF to: 004d6103 (CONDITIONAL_JUMP)  ; LAB_004d6103
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004d5cb4
    MOV dword ptr [EBX + 0x2578],0x0    ; 004d5cbb
    MOV dword ptr [EBX + 0x10a90],EAX   ; 004d5cc5
    MOV ESI,dword ptr [ESP + 0xc0]      ; 004d5ccb
        ;   Label: LAB_004d5ccb
    LEA EDI,[ESP + 0x5c]                ; 004d5cd2
    LEA EAX,[EBX + 0x20]                ; 004d5cd6
    FLD float ptr [ESI + 0x24]          ; 004d5cd9
    FLD float ptr [ESI + 0x28]          ; 004d5cdc
    FLD float ptr [ESI + 0x20]          ; 004d5cdf
    LEA ESI,[ESP + 0x74]                ; 004d5ce2
    FSUB float ptr [EAX]                ; 004d5ce6
    FXCH ST2                            ; 004d5ce8
    FSUB float ptr [EAX + 0x4]          ; 004d5cea
    FXCH                                ; 004d5ced
    FSUB float ptr [EAX + 0x8]          ; 004d5cef
    FXCH ST2                            ; 004d5cf2
    FSTP float ptr [ESP + 0x74]         ; 004d5cf4
    FSTP float ptr [ESP + 0x78]         ; 004d5cf8
    FSTP float ptr [ESP + 0x7c]         ; 004d5cfc
    MOVSD ES:EDI,ESI                    ; 004d5d00
    MOVSD ES:EDI,ESI                    ; 004d5d01
    MOVSD ES:EDI,ESI                    ; 004d5d02
    LEA EAX,[ESP + 0x14]                ; 004d5d03
    LEA ESI,[ESP + 0x5c]                ; 004d5d07
    CMP EAX,ESI                         ; 004d5d0b
    JZ 0x004d5d27                       ; 004d5d0d
        ;   XREF to: 004d5d27 (CONDITIONAL_JUMP)  ; LAB_004d5d27
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004d5d0f
    MOV dword ptr [ESP + 0x14],EAX      ; 004d5d13
    MOV EAX,dword ptr [ESP + 0x60]      ; 004d5d17
    MOV dword ptr [ESP + 0x18],EAX      ; 004d5d1b
    MOV EAX,dword ptr [ESP + 0x64]      ; 004d5d1f
    MOV dword ptr [ESP + 0x1c],EAX      ; 004d5d23
    LEA EAX,[ESP + 0x14]                ; 004d5d27
        ;   Label: LAB_004d5d27
    PUSH EAX                            ; 004d5d2b
    LEA ESI,[ESP + 0x48]                ; 004d5d2c
    LEA EDI,[ESP + 0x84]                ; 004d5d30
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 004d5d37
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[ESP + 0x48]                ; 004d5d3c
    ADD ESP,0x4                         ; 004d5d40
    MOVSD ES:EDI,ESI                    ; 004d5d43
    MOVSD ES:EDI,ESI                    ; 004d5d44
    MOVSD ES:EDI,ESI                    ; 004d5d45
    LEA EAX,[ESP + 0x14]                ; 004d5d46
    LEA ESI,[ESP + 0x80]                ; 004d5d4a
    CMP EAX,ESI                         ; 004d5d51
    JZ 0x004d5d76                       ; 004d5d53
        ;   XREF to: 004d5d76 (CONDITIONAL_JUMP)  ; LAB_004d5d76
    MOV EAX,dword ptr [ESP + 0x80]      ; 004d5d55
    MOV dword ptr [ESP + 0x14],EAX      ; 004d5d5c
    MOV EAX,dword ptr [ESP + 0x84]      ; 004d5d60
    MOV dword ptr [ESP + 0x18],EAX      ; 004d5d67
    MOV EAX,dword ptr [ESP + 0x88]      ; 004d5d6b
    MOV dword ptr [ESP + 0x1c],EAX      ; 004d5d72
    FLD float ptr [ESP + 0x18]          ; 004d5d76
        ;   Label: LAB_004d5d76
    FSUB float ptr [EBX + 0x34]         ; 004d5d7a
    SUB ESP,0x4                         ; 004d5d7d
    FSTP float ptr [ESP]                ; 004d5d80
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 004d5d83
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [ESP + 0xe0],EAX      ; 004d5d88
    FLD float ptr [ESP + 0xe0]          ; 004d5d8f
    ADD ESP,0x4                         ; 004d5d96
    FST float ptr [ESP + 0x30]          ; 004d5d99
    FCOMP float ptr [ESP + 0xbc]        ; 004d5d9d
    FNSTSW AX                           ; 004d5da4
    SAHF                                ; 004d5da6
    JBE 0x004d5db4                      ; 004d5da7
        ;   XREF to: 004d5db4 (CONDITIONAL_JUMP)  ; LAB_004d5db4
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004d5da9
    MOV dword ptr [ESP + 0x30],EAX      ; 004d5db0
    FLD float ptr [ESP + 0x30]          ; 004d5db4
        ;   Label: LAB_004d5db4
    FLD float ptr [ESP + 0xbc]          ; 004d5db8
    FCHS                                ; 004d5dbf
    FSTP float ptr [ESP + 0xd8]         ; 004d5dc1
    FCOMP float ptr [ESP + 0xd8]        ; 004d5dc8
    FNSTSW AX                           ; 004d5dcf
    SAHF                                ; 004d5dd1
    JNC 0x004d5ddf                      ; 004d5dd2
        ;   XREF to: 004d5ddf (CONDITIONAL_JUMP)  ; LAB_004d5ddf
    MOV EAX,dword ptr [ESP + 0xd8]      ; 004d5dd4
    MOV dword ptr [ESP + 0x30],EAX      ; 004d5ddb
    FLD float ptr [EBP + 0x18]          ; 004d5ddf
        ;   Label: LAB_004d5ddf
    FLD float ptr [ESP + 0x30]          ; 004d5de2
    FSUB float ptr [EBX + 0x25654]      ; 004d5de6
    FXCH                                ; 004d5dec
    FMUL float ptr [0x005da8e6]         ; 004d5dee | DAT_005da8e6
    FXCH                                ; 004d5df4
    FSTP float ptr [ESP + 0xc4]         ; 004d5df6
    FSTP float ptr [ESP + 0xb0]         ; 004d5dfd
    FLD float ptr [ESP + 0xc4]          ; 004d5e04
    FCOMP float ptr [ESP + 0xb0]        ; 004d5e0b
    FNSTSW AX                           ; 004d5e12
    SAHF                                ; 004d5e14
    JBE 0x004d5e25                      ; 004d5e15
        ;   XREF to: 004d5e25 (CONDITIONAL_JUMP)  ; LAB_004d5e25
    MOV EAX,dword ptr [ESP + 0xb0]      ; 004d5e17
    MOV dword ptr [ESP + 0xc4],EAX      ; 004d5e1e
    FLD float ptr [EBP + 0x18]          ; 004d5e25
        ;   Label: LAB_004d5e25
    FMUL float ptr [0x005da8ea]         ; 004d5e28 | DAT_005da8ea
    FLD float ptr [ESP + 0xc4]          ; 004d5e2e
    FXCH                                ; 004d5e35
    FSTP float ptr [ESP + 0xac]         ; 004d5e37
    FCOMP float ptr [ESP + 0xac]        ; 004d5e3e
    FNSTSW AX                           ; 004d5e45
    SAHF                                ; 004d5e47
    JNC 0x004d5e58                      ; 004d5e48
        ;   XREF to: 004d5e58 (CONDITIONAL_JUMP)  ; LAB_004d5e58
    MOV EAX,dword ptr [ESP + 0xac]      ; 004d5e4a
    MOV dword ptr [ESP + 0xc4],EAX      ; 004d5e51
    FLD float ptr [EBX + 0x25654]       ; 004d5e58
        ;   Label: LAB_004d5e58
    FADD float ptr [ESP + 0xc4]         ; 004d5e5e
    FSTP float ptr [EBX + 0x25654]      ; 004d5e65
    MOV ESP,EBP                         ; 004d5e6b
        ;   Label: LAB_004d5e6b
    POP EBP                             ; 004d5e6d
    POP EDI                             ; 004d5e6e
    POP ESI                             ; 004d5e6f
    POP EBX                             ; 004d5e70
    RET                                 ; 004d5e71
    CMP EDI,0x3                         ; 004d5e72
        ;   Label: LAB_004d5e72
    JZ 0x004d5a84                       ; 004d5e75
        ;   XREF to: 004d5a84 (CONDITIONAL_JUMP)  ; LAB_004d5a84
    JMP 0x004d5ad4                      ; 004d5e7b
        ;   XREF to: 004d5ad4 (UNCONDITIONAL_JUMP)  ; LAB_004d5ad4
    CMP dword ptr [EBX + 0x25640],0x0   ; 004d5e80
        ;   Label: LAB_004d5e80
    JZ 0x004d5ad4                       ; 004d5e87
        ;   XREF to: 004d5ad4 (CONDITIONAL_JUMP)  ; LAB_004d5ad4
    MOV dword ptr [EBX + 0x10a80],0x1   ; 004d5e8d
    JMP 0x004d5ad4                      ; 004d5e97
        ;   XREF to: 004d5ad4 (UNCONDITIONAL_JUMP)  ; LAB_004d5ad4
    PUSH EAX                            ; 004d5e9c
        ;   Label: LAB_004d5e9c
    CALL core_motion.cpp_FUN_005035c0   ; 004d5e9d
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004d5ea2
    ADD ESP,0x4                         ; 004d5ea5
    CMP EAX,0x2                         ; 004d5ea8
    JZ 0x004d5baf                       ; 004d5eab
        ;   XREF to: 004d5baf (CONDITIONAL_JUMP)  ; LAB_004d5baf
    CMP EAX,0x1                         ; 004d5eb1
    JZ 0x004d5baf                       ; 004d5eb4
        ;   XREF to: 004d5baf (CONDITIONAL_JUMP)  ; LAB_004d5baf
    MOV dword ptr [EBX + 0x10a74],0x1   ; 004d5eba
    JMP 0x004d5baf                      ; 004d5ec4
        ;   XREF to: 004d5baf (UNCONDITIONAL_JUMP)  ; LAB_004d5baf
    PUSH EAX                            ; 004d5ec9
        ;   Label: LAB_004d5ec9
    CALL core_motion.cpp_FUN_005035c0   ; 004d5eca
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004d5ecf
    ADD ESP,0x4                         ; 004d5ed2
    CMP EAX,0xa                         ; 004d5ed5
    JNZ 0x004d5eed                      ; 004d5ed8
        ;   XREF to: 004d5eed (CONDITIONAL_JUMP)  ; LAB_004d5eed
    CMP dword ptr [EBX + 0x25640],0x0   ; 004d5eda
    JZ 0x004d5eed                       ; 004d5ee1
        ;   XREF to: 004d5eed (CONDITIONAL_JUMP)  ; LAB_004d5eed
    MOV dword ptr [EBX + 0x10a80],0x1   ; 004d5ee3
    MOV EAX,[0x01cedef4]                ; 004d5eed | DAT_01cedef4
        ;   Label: LAB_004d5eed
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004d5ef2
    PUSH EAX                            ; 004d5ef9
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004d5efa
    CALL dword ptr [EDX + 0x154]        ; 004d5f00
    ADD ESP,0x4                         ; 004d5f06
    TEST EAX,EAX                        ; 004d5f09
    JNZ 0x004d5bb9                      ; 004d5f0b
        ;   XREF to: 004d5bb9 (CONDITIONAL_JUMP)  ; LAB_004d5bb9
    PUSH dword ptr [EBP + 0x18]         ; 004d5f11
    PUSH EBX                            ; 004d5f14
    CALL core_charactr.cpp_FUN_0042abe0 ; 004d5f15
        ;   XREF to: 0042abe0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042abe0()
    ADD ESP,0x8                         ; 004d5f1a
    CMP EAX,0x1                         ; 004d5f1d
    JC 0x004d5bb9                       ; 004d5f20
        ;   XREF to: 004d5bb9 (CONDITIONAL_JUMP)  ; LAB_004d5bb9
    JA 0x004d5f50                       ; 004d5f26
        ;   XREF to: 004d5f50 (CONDITIONAL_JUMP)  ; LAB_004d5f50
    MOV dword ptr [EBX + 0x10a68],0x1   ; 004d5f28
    JMP 0x004d5bb9                      ; 004d5f32
        ;   XREF to: 004d5bb9 (UNCONDITIONAL_JUMP)  ; LAB_004d5bb9
    MOV dword ptr [EBX + 0x10a70],0x1   ; 004d5f37
        ;   Label: LAB_004d5f37
    MOV dword ptr [EBX + 0x10a68],0x1   ; 004d5f41
    JMP 0x004d5bb9                      ; 004d5f4b
        ;   XREF to: 004d5bb9 (UNCONDITIONAL_JUMP)  ; LAB_004d5bb9
    CMP EAX,0x2                         ; 004d5f50
        ;   Label: LAB_004d5f50
    JZ 0x004d5f37                       ; 004d5f53
        ;   XREF to: 004d5f37 (CONDITIONAL_JUMP)  ; LAB_004d5f37
    JMP 0x004d5bb9                      ; 004d5f55
        ;   XREF to: 004d5bb9 (UNCONDITIONAL_JUMP)  ; LAB_004d5bb9
    MOV EDI,dword ptr [ESP + 0xc8]      ; 004d5f5a
        ;   Label: LAB_004d5f5a
    XOR ESI,ESI                         ; 004d5f61
    TEST EDI,EDI                        ; 004d5f63
    JNZ 0x004d60cd                      ; 004d5f65
        ;   XREF to: 004d60cd (CONDITIONAL_JUMP)  ; LAB_004d60cd
    MOV EAX,[0x01cedef4]                ; 004d5f6b | DAT_01cedef4
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004d5f70
    PUSH EAX                            ; 004d5f77
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 004d5f78
    CALL dword ptr [ESI + 0xcc]         ; 004d5f7e
    MOV ESI,EAX                         ; 004d5f84
    MOV EAX,[0x01cedef4]                ; 004d5f86 | DAT_01cedef4
    ADD ESP,0x4                         ; 004d5f8b
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004d5f8e
    PUSH EAX                            ; 004d5f95
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004d5f96
    CALL dword ptr [EDX + 0x154]        ; 004d5f9c
    ADD ESP,0x4                         ; 004d5fa2
    TEST EAX,EAX                        ; 004d5fa5
    JZ 0x004d60ac                       ; 004d5fa7
        ;   XREF to: 004d60ac (CONDITIONAL_JUMP)  ; LAB_004d60ac
    TEST ESI,ESI                        ; 004d5fad
        ;   Label: LAB_004d5fad
    JNZ 0x004d5fc6                      ; 004d5faf
        ;   XREF to: 004d5fc6 (CONDITIONAL_JUMP)  ; LAB_004d5fc6
    MOV EAX,dword ptr [ESP + 0xc0]      ; 004d5fb1
    ADD EAX,0x20                        ; 004d5fb8
    PUSH EAX                            ; 004d5fbb
    CALL core_path.cpp_getPathMap_FUN_00513ea0 ; 004d5fbc
        ;   XREF to: 00513ea0 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_getPathMap_FUN_00513ea0(CLocation * location)
    ADD ESP,0x4                         ; 004d5fc1
    MOV ESI,EAX                         ; 004d5fc4
    MOV EAX,dword ptr [EBX + 0x6c]      ; 004d5fc6
        ;   Label: LAB_004d5fc6
    PUSH EAX                            ; 004d5fc9
    LEA EAX,[ESP + 0x24]                ; 004d5fca
    PUSH EAX                            ; 004d5fce
    LEA EAX,[EBX + 0x20]                ; 004d5fcf
    PUSH EAX                            ; 004d5fd2
    PUSH ESI                            ; 004d5fd3
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_00513650 ; 004d5fd4
        ;   XREF to: 00513650 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathWithRetry_FUN_00513650(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 004d5fd9
    TEST EAX,EAX                        ; 004d5fdc
    JZ 0x004d5c9d                       ; 004d5fde
        ;   XREF to: 004d5c9d (CONDITIONAL_JUMP)  ; LAB_004d5c9d
    FLD float ptr [ESP + 0x24]          ; 004d5fe4
    FSUB float ptr [EBX + 0x34]         ; 004d5fe8
    SUB ESP,0x4                         ; 004d5feb
    FSTP float ptr [ESP]                ; 004d5fee
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 004d5ff1
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [ESP + 0xe0],EAX      ; 004d5ff6
    FLD float ptr [ESP + 0xe0]          ; 004d5ffd
    FMUL float ptr [0x005da8be]         ; 004d6004 | DAT_005da8be
    ADD ESP,0x4                         ; 004d600a
    FMUL double ptr [0x005da8c6]        ; 004d600d | DAT_005da8c6
    FLD float ptr [ESP + 0xcc]          ; 004d6013
    FCHS                                ; 004d601a
    FSTP float ptr [ESP + 0xb4]         ; 004d601c
    FST float ptr [EBX + 0x10a90]       ; 004d6023
    FCOMP float ptr [ESP + 0xb4]        ; 004d6029
    FNSTSW AX                           ; 004d6030
    SAHF                                ; 004d6032
    JC 0x004d60d8                       ; 004d6033
        ;   XREF to: 004d60d8 (CONDITIONAL_JUMP)  ; LAB_004d60d8
    FLD float ptr [EBX + 0x10a90]       ; 004d6039
        ;   Label: LAB_004d6039
    FCOMP float ptr [ESP + 0xcc]        ; 004d603f
    FNSTSW AX                           ; 004d6046
    SAHF                                ; 004d6048
    JBE 0x004d6058                      ; 004d6049
        ;   XREF to: 004d6058 (CONDITIONAL_JUMP)  ; LAB_004d6058
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004d604b
    MOV dword ptr [EBX + 0x10a90],EAX   ; 004d6052
    FLD float ptr [ESP + 0x10]          ; 004d6058
        ;   Label: LAB_004d6058
    FCOMP double ptr [0x005da8ce]       ; 004d605c | DAT_005da8ce
    FNSTSW AX                           ; 004d6062
    SAHF                                ; 004d6064
    JNC 0x004d60ea                      ; 004d6065
        ;   XREF to: 004d60ea (CONDITIONAL_JUMP)  ; LAB_004d60ea
    CMP dword ptr [ESP + 0xc8],0x1      ; 004d606b
    JZ 0x004d60ea                       ; 004d6073
        ;   XREF to: 004d60ea (CONDITIONAL_JUMP)  ; LAB_004d60ea
    MOV dword ptr [EBX + 0x10a68],0x1   ; 004d6075
    JMP 0x004d5c9d                      ; 004d607f
        ;   XREF to: 004d5c9d (UNCONDITIONAL_JUMP)  ; LAB_004d5c9d
    MOV dword ptr [EBX + 0x10a68],0x1   ; 004d6084
        ;   Label: LAB_004d6084
    JMP 0x004d5fad                      ; 004d608e
        ;   XREF to: 004d5fad (UNCONDITIONAL_JUMP)  ; LAB_004d5fad
    MOV dword ptr [EBX + 0x10a70],0x1   ; 004d6093
        ;   Label: LAB_004d6093
    MOV dword ptr [EBX + 0x10a68],0x1   ; 004d609d
    JMP 0x004d5fad                      ; 004d60a7
        ;   XREF to: 004d5fad (UNCONDITIONAL_JUMP)  ; LAB_004d5fad
    PUSH dword ptr [EBP + 0x18]         ; 004d60ac
        ;   Label: LAB_004d60ac
    PUSH EBX                            ; 004d60af
    CALL core_charactr.cpp_FUN_0042abe0 ; 004d60b0
        ;   XREF to: 0042abe0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042abe0()
    ADD ESP,0x8                         ; 004d60b5
    CMP EAX,0x1                         ; 004d60b8
    JC 0x004d5fad                       ; 004d60bb
        ;   XREF to: 004d5fad (CONDITIONAL_JUMP)  ; LAB_004d5fad
    JBE 0x004d6084                      ; 004d60c1
        ;   XREF to: 004d6084 (CONDITIONAL_JUMP)  ; LAB_004d6084
    CMP EAX,0x2                         ; 004d60c3
    JZ 0x004d6093                       ; 004d60c6
        ;   XREF to: 004d6093 (CONDITIONAL_JUMP)  ; LAB_004d6093
    JMP 0x004d5fad                      ; 004d60c8
        ;   XREF to: 004d5fad (UNCONDITIONAL_JUMP)  ; LAB_004d5fad
    MOV dword ptr [EBX + 0x303c],ESI    ; 004d60cd
        ;   Label: LAB_004d60cd
    JMP 0x004d5fad                      ; 004d60d3
        ;   XREF to: 004d5fad (UNCONDITIONAL_JUMP)  ; LAB_004d5fad
    MOV EAX,dword ptr [ESP + 0xb4]      ; 004d60d8
        ;   Label: LAB_004d60d8
    MOV dword ptr [EBX + 0x10a90],EAX   ; 004d60df
    JMP 0x004d6039                      ; 004d60e5
        ;   XREF to: 004d6039 (UNCONDITIONAL_JUMP)  ; LAB_004d6039
    MOV dword ptr [EBX + 0x10a70],0x1   ; 004d60ea
        ;   Label: LAB_004d60ea
    MOV dword ptr [EBX + 0x10a68],0x1   ; 004d60f4
    JMP 0x004d5c9d                      ; 004d60fe
        ;   XREF to: 004d5c9d (UNCONDITIONAL_JUMP)  ; LAB_004d5c9d
    JBE 0x004d5ccb                      ; 004d6103
        ;   XREF to: 004d5ccb (CONDITIONAL_JUMP)  ; LAB_004d5ccb
        ;   Label: LAB_004d6103
    FLD float ptr [ESP + 0xcc]          ; 004d6109
    MOV dword ptr [EBX + 0x2578],0x0    ; 004d6110
    FCHS                                ; 004d611a
    FSTP float ptr [EBX + 0x10a90]      ; 004d611c
    JMP 0x004d5ccb                      ; 004d6122
        ;   XREF to: 004d5ccb (UNCONDITIONAL_JUMP)  ; LAB_004d5ccb

