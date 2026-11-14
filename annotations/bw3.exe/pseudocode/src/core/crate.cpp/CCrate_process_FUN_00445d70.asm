; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_crate_cpp_CCrate_process_FUN_00445d70(CCrate *this_ptr,float delta_time)
;
; Parameters:
; CCrate *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00445d70
        ;   Label: core_crate.cpp_CCrate_process_FUN_00445d70
    SUB ESP,0x38                        ; 00445d71
    MOV EBX,dword ptr [ESP + 0x40]      ; 00445d74
    CMP dword ptr [EBX + 0x2d4],0x0     ; 00445d78
    JNZ 0x00445f1f                      ; 00445d7f
        ;   XREF to: 00445f1f (CONDITIONAL_JUMP)  ; LAB_00445f1f
    LEA EDX,[EBX + 0x20]                ; 00445d85
    LEA EAX,[EBX + 0xe0]                ; 00445d88
    FLD float ptr [EAX]                 ; 00445d8e
    FADD float ptr [EDX]                ; 00445d90
    FSTP float ptr [EDX]                ; 00445d92
    FLD float ptr [EAX + 0x4]           ; 00445d94
    FADD float ptr [EDX + 0x4]          ; 00445d97
    FSTP float ptr [EDX + 0x4]          ; 00445d9a
    FLD float ptr [EAX + 0x8]           ; 00445d9d
    FADD float ptr [EDX + 0x8]          ; 00445da0
    FSTP float ptr [EDX + 0x8]          ; 00445da3
    MOV dword ptr [EAX + 0x8],0x0       ; 00445da6
    LEA EDX,[EBX + 0x30]                ; 00445dad
    MOV ECX,dword ptr [EAX + 0x8]       ; 00445db0
    MOV dword ptr [EAX + 0x4],ECX       ; 00445db3
    MOV ECX,dword ptr [EAX + 0x4]       ; 00445db6
    MOV dword ptr [EAX],ECX             ; 00445db9
    LEA EAX,[EBX + 0xec]                ; 00445dbb
    FLD float ptr [EAX]                 ; 00445dc1
    FADD float ptr [EDX]                ; 00445dc3
    FSTP float ptr [EDX]                ; 00445dc5
    FLD float ptr [EAX + 0x4]           ; 00445dc7
    FADD float ptr [EDX + 0x4]          ; 00445dca
    FSTP float ptr [EDX + 0x4]          ; 00445dcd
    FLD float ptr [EAX + 0x8]           ; 00445dd0
    FADD float ptr [EDX + 0x8]          ; 00445dd3
    FSTP float ptr [EDX + 0x8]          ; 00445dd6
    MOV dword ptr [EAX + 0x8],0x0       ; 00445dd9
    MOV EDX,dword ptr [EAX + 0x8]       ; 00445de0
    MOV dword ptr [EAX + 0x4],EDX       ; 00445de3
    MOV EDX,dword ptr [EAX + 0x4]       ; 00445de6
    MOV dword ptr [EAX],EDX             ; 00445de9
    FLD float ptr [EBX + 0x2e0]         ; 00445deb
    FCOMP float ptr [EBX + 0x20]        ; 00445df1
    FNSTSW AX                           ; 00445df4
    SAHF                                ; 00445df6
    JNZ 0x00445e0b                      ; 00445df7
        ;   XREF to: 00445e0b (CONDITIONAL_JUMP)  ; LAB_00445e0b
    FLD float ptr [EBX + 0x2e4]         ; 00445df9
    FCOMP float ptr [EBX + 0x24]        ; 00445dff
    FNSTSW AX                           ; 00445e02
    SAHF                                ; 00445e04
    JZ 0x00445f2e                       ; 00445e05
        ;   XREF to: 00445f2e (CONDITIONAL_JUMP)  ; LAB_00445f2e
    PUSH 0x0                            ; 00445e0b
        ;   Label: LAB_00445e0b
    MOV EAX,dword ptr [EBX + 0x154]     ; 00445e0d
    PUSH dword ptr [EBX + 0x2d8]        ; 00445e13
    PUSH EBX                            ; 00445e19
    CALL dword ptr [EAX + 0x40]         ; 00445e1a
    MOV dword ptr [ESP + 0x40],EAX      ; 00445e1d
    FLD float ptr [ESP + 0x40]          ; 00445e21
    LEA EAX,[EBX + 0x2e0]               ; 00445e25
    ADD ESP,0xc                         ; 00445e2b
    LEA EDX,[EBX + 0x20]                ; 00445e2e
    FSTP float ptr [ESP + 0x30]         ; 00445e31
    CMP EAX,EDX                         ; 00445e35
    JZ 0x00445e49                       ; 00445e37
        ;   XREF to: 00445e49 (CONDITIONAL_JUMP)  ; LAB_00445e49
    MOV ECX,dword ptr [EDX]             ; 00445e39
    MOV dword ptr [EAX],ECX             ; 00445e3b
    MOV ECX,dword ptr [EDX + 0x4]       ; 00445e3d
    MOV dword ptr [EAX + 0x4],ECX       ; 00445e40
    MOV ECX,dword ptr [EDX + 0x8]       ; 00445e43
    MOV dword ptr [EAX + 0x8],ECX       ; 00445e46
    LEA EAX,[EBX + 0x2ec]               ; 00445e49
        ;   Label: LAB_00445e49
    LEA EDX,[EBX + 0x30]                ; 00445e4f
    CMP EAX,EDX                         ; 00445e52
    JZ 0x00445e66                       ; 00445e54
        ;   XREF to: 00445e66 (CONDITIONAL_JUMP)  ; LAB_00445e66
    MOV ECX,dword ptr [EDX]             ; 00445e56
    MOV dword ptr [EAX],ECX             ; 00445e58
    MOV ECX,dword ptr [EDX + 0x4]       ; 00445e5a
    MOV dword ptr [EAX + 0x4],ECX       ; 00445e5d
    MOV ECX,dword ptr [EDX + 0x8]       ; 00445e60
    MOV dword ptr [EAX + 0x8],ECX       ; 00445e63
    MOV EAX,dword ptr [ESP + 0x30]      ; 00445e66
        ;   Label: LAB_00445e66
    MOV dword ptr [EBX + 0x2f8],EAX     ; 00445e6a
    PUSH EDI                            ; 00445e70
        ;   Label: LAB_00445e70
    PUSH ESI                            ; 00445e71
    CMP dword ptr [EBX + 0x2dc],0x0     ; 00445e72
    JNZ 0x00445e8b                      ; 00445e79
        ;   XREF to: 00445e8b (CONDITIONAL_JUMP)  ; LAB_00445e8b
    MOV ESI,dword ptr [EBX + 0xdc]      ; 00445e7b
    TEST ESI,ESI                        ; 00445e81
    JZ 0x00445e8b                       ; 00445e83
        ;   XREF to: 00445e8b (CONDITIONAL_JUMP)  ; LAB_00445e8b
    MOV dword ptr [EBX + 0x2dc],ESI     ; 00445e85
    MOV EDI,dword ptr [EBX + 0x2dc]     ; 00445e8b
        ;   Label: LAB_00445e8b
    TEST EDI,EDI                        ; 00445e91
    JZ 0x00445f85                       ; 00445e93
        ;   XREF to: 00445f85 (CONDITIONAL_JUMP)  ; LAB_00445f85
    MOV EAX,EDI                         ; 00445e99
    MOV dword ptr [EBX + 0xdc],EDI      ; 00445e9b
    LEA EDX,[EBX + 0x20]                ; 00445ea1
    MOV ECX,dword ptr [EAX + 0x20]      ; 00445ea4
    MOV dword ptr [EDX],ECX             ; 00445ea7
    MOV ECX,dword ptr [EAX + 0x24]      ; 00445ea9
    MOV dword ptr [EDX + 0x4],ECX       ; 00445eac
    MOV ECX,dword ptr [EAX + 0x28]      ; 00445eaf
    MOV dword ptr [EDX + 0x8],ECX       ; 00445eb2
    MOV EAX,dword ptr [EDI + 0x2c]      ; 00445eb5
    MOV dword ptr [EDX + 0xc],EAX       ; 00445eb8
    MOV EDX,dword ptr [EBX + 0xdc]      ; 00445ebb
    LEA EAX,[EBX + 0x30]                ; 00445ec1
    ADD EDX,0x30                        ; 00445ec4
    CMP EAX,EDX                         ; 00445ec7
    JZ 0x00445edb                       ; 00445ec9
        ;   XREF to: 00445edb (CONDITIONAL_JUMP)  ; LAB_00445edb
    MOV ECX,dword ptr [EDX]             ; 00445ecb
    MOV dword ptr [EAX],ECX             ; 00445ecd
    MOV ECX,dword ptr [EDX + 0x4]       ; 00445ecf
    MOV dword ptr [EAX + 0x4],ECX       ; 00445ed2
    MOV ECX,dword ptr [EDX + 0x8]       ; 00445ed5
    MOV dword ptr [EAX + 0x8],ECX       ; 00445ed8
    MOV EAX,dword ptr [EBX + 0xdc]      ; 00445edb
        ;   Label: LAB_00445edb
    PUSH EAX                            ; 00445ee1
    MOV EDX,dword ptr [EAX + 0x154]     ; 00445ee2
    LEA ESI,[ESP + 0xc]                 ; 00445ee8
    LEA EDI,[ESP + 0x24]                ; 00445eec
    CALL dword ptr [EDX + 0x1c]         ; 00445ef0
    MOV ECX,0x6                         ; 00445ef3
    LEA ESI,[ESP + 0xc]                 ; 00445ef8
    ADD ESP,0x4                         ; 00445efc
    MOVSD.REP ES:EDI,ESI                ; 00445eff
    FLD float ptr [ESP + 0x30]          ; 00445f01
    FSUB float ptr [ESP + 0x24]         ; 00445f05
    FADD float ptr [EBX + 0x24]         ; 00445f09
    FSTP float ptr [EBX + 0x24]         ; 00445f0c
    PUSH EBX                            ; 00445f0f
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0 ; 00445f10
        ;   XREF to: 004088f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00445f15
    POP ESI                             ; 00445f18
    POP EDI                             ; 00445f19
    ADD ESP,0x38                        ; 00445f1a
    POP EBX                             ; 00445f1d
    RET                                 ; 00445f1e
    MOV dword ptr [EBX + 0x2dc],0x0     ; 00445f1f
        ;   Label: LAB_00445f1f
    ADD ESP,0x38                        ; 00445f29
    POP EBX                             ; 00445f2c
    RET                                 ; 00445f2d
    FLD float ptr [EBX + 0x2e8]         ; 00445f2e
        ;   Label: LAB_00445f2e
    FCOMP float ptr [EBX + 0x28]        ; 00445f34
    FNSTSW AX                           ; 00445f37
    SAHF                                ; 00445f39
    JNZ 0x00445e0b                      ; 00445f3a
        ;   XREF to: 00445e0b (CONDITIONAL_JUMP)  ; LAB_00445e0b
    FLD float ptr [EBX + 0x2ec]         ; 00445f40
    FCOMP float ptr [EBX + 0x30]        ; 00445f46
    FNSTSW AX                           ; 00445f49
    SAHF                                ; 00445f4b
    JNZ 0x00445e0b                      ; 00445f4c
        ;   XREF to: 00445e0b (CONDITIONAL_JUMP)  ; LAB_00445e0b
    FLD float ptr [EBX + 0x2f0]         ; 00445f52
    FCOMP float ptr [EBX + 0x34]        ; 00445f58
    FNSTSW AX                           ; 00445f5b
    SAHF                                ; 00445f5d
    JNZ 0x00445e0b                      ; 00445f5e
        ;   XREF to: 00445e0b (CONDITIONAL_JUMP)  ; LAB_00445e0b
    FLD float ptr [EBX + 0x2f4]         ; 00445f64
    FCOMP float ptr [EBX + 0x38]        ; 00445f6a
    FNSTSW AX                           ; 00445f6d
    SAHF                                ; 00445f6f
    JNZ 0x00445e0b                      ; 00445f70
        ;   XREF to: 00445e0b (CONDITIONAL_JUMP)  ; LAB_00445e0b
    MOV EAX,dword ptr [EBX + 0x2f8]     ; 00445f76
    MOV dword ptr [ESP + 0x30],EAX      ; 00445f7c
    JMP 0x00445e70                      ; 00445f80
        ;   XREF to: 00445e70 (UNCONDITIONAL_JUMP)  ; LAB_00445e70
    MOV EAX,dword ptr [ESP + 0x38]      ; 00445f85
        ;   Label: LAB_00445f85
    MOV dword ptr [EBX + 0x24],EAX      ; 00445f89
    PUSH EBX                            ; 00445f8c
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0 ; 00445f8d
        ;   XREF to: 004088f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00445f92
    POP ESI                             ; 00445f95
    POP EDI                             ; 00445f96
    ADD ESP,0x38                        ; 00445f97
    POP EBX                             ; 00445f9a
    RET                                 ; 00445f9b

