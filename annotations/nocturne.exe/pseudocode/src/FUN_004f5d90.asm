; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004f5d90(undefined4 param_1)
;
; Local Variables:
; undefined        Stack[-0x14]:1  local_14
;
; XREF[2]:
;   FUN_004d60b0 at 004d60b5
;   core_conveyor.cpp_CConveyor_ctor_FUN_0043b050 at 0043b057
;
; Referenced Globals:
;   string s_slider1.kfm_0058d75f
;   undefined1* PTR_FUN_005a1384 = 004f5f60
;
; Called Functions:
;   core_course.cpp_CCourse_ctor_FUN_0043b5d0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;   FUN_00409d30
;   FUN_0055d610
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f5d90
        ;   Label: FUN_004f5d90
    SUB ESP,0x10                        ; 004f5d91
    MOV EBX,dword ptr [ESP + 0x18]      ; 004f5d94
    PUSH EDI                            ; 004f5d98
    PUSH ESI                            ; 004f5d99
    PUSH EBX                            ; 004f5d9a
    CALL FUN_00409d30                   ; 004f5d9b
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; undefined FUN_00409d30()
    ADD ESP,0x4                         ; 004f5da0
    ADD EAX,0x150                       ; 004f5da3
    PUSH EAX                            ; 004f5da8
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 004f5da9
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490()
    ADD ESP,0x4                         ; 004f5dae
    ADD EAX,0x1b8                       ; 004f5db1
    PUSH EAX                            ; 004f5db6
    CALL core_course.cpp_CCourse_ctor_FUN_0043b5d0 ; 004f5db7
        ;   XREF to: 0043b5d0 (UNCONDITIONAL_CALL)  ; undefined core_course.cpp_CCourse_ctor_FUN_0043b5d0()
    ADD ESP,0x4                         ; 004f5dbc
    LEA EBX,[EAX + 0xfffffcf8]          ; 004f5dbf
    PUSH 0x58d75f                       ; 004f5dc5 | = "slider1.kfm"
    LEA EAX,[EBX + 0x150]               ; 004f5dca
    PUSH EAX                            ; 004f5dd0
    MOV dword ptr [EBX + 0x14c],0x5a1384 ; 004f5dd1 | PTR_FUN_005a1384
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 004f5ddb
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580()
    MOV byte ptr [EBX + 0x34c],0x0      ; 004f5de0
    MOV byte ptr [EBX + 0x3b0],0x0      ; 004f5de7
    MOV byte ptr [EBX + 0x414],0x0      ; 004f5dee
    MOV byte ptr [EBX + 0x478],0x0      ; 004f5df5
    MOV byte ptr [EBX + 0x48c],0x0      ; 004f5dfc
    MOV byte ptr [EBX + 0x4a0],0x0      ; 004f5e03
    MOV dword ptr [EBX + 0x2cc],0x0     ; 004f5e0a
    MOV dword ptr [EBX + 0x2d4],0x0     ; 004f5e14
    MOV dword ptr [EBX + 0x2e4],0x40000000 ; 004f5e1e
    MOV dword ptr [EBX + 0x2e0],0x40000000 ; 004f5e28
    ADD ESP,0x8                         ; 004f5e32
    MOV dword ptr [EBX + 0x2d0],0x0     ; 004f5e35
    LEA EAX,[EBX + 0x320]               ; 004f5e3f
    MOV byte ptr [EBX + 0x2e8],0x0      ; 004f5e45
    LEA EDX,[EBX + 0x20]                ; 004f5e4c
    MOV ECX,EAX                         ; 004f5e4f
    CMP EAX,EDX                         ; 004f5e51
    JNZ 0x004f5f29                      ; 004f5e53
        ;   XREF to: 004f5f29 (CONDITIONAL_JUMP)  ; LAB_004f5f29
    LEA EAX,[EBX + 0x314]               ; 004f5e59
        ;   Label: LAB_004f5e59
    CMP EAX,ECX                         ; 004f5e5f
    JNZ 0x004f5f3e                      ; 004f5e61
        ;   XREF to: 004f5f3e (CONDITIONAL_JUMP)  ; LAB_004f5f3e
    LEA EAX,[EBX + 0x30]                ; 004f5e67
        ;   Label: LAB_004f5e67
    PUSH EAX                            ; 004f5e6a
    LEA ESI,[ESP + 0xc]                 ; 004f5e6b
    CALL FUN_0055d610                   ; 004f5e6f
        ;   XREF to: 0055d610 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d610()
    LEA ESI,[ESP + 0xc]                 ; 004f5e74
    LEA EDI,[EBX + 0x33c]               ; 004f5e78
    ADD ESP,0x4                         ; 004f5e7e
    MOVSD ES:EDI,ESI                    ; 004f5e81
    MOVSD ES:EDI,ESI                    ; 004f5e82
    MOVSD ES:EDI,ESI                    ; 004f5e83
    MOVSD ES:EDI,ESI                    ; 004f5e84
    LEA EDI,[EBX + 0x32c]               ; 004f5e85
    LEA ESI,[EBX + 0x33c]               ; 004f5e8b
    MOVSD ES:EDI,ESI                    ; 004f5e91
    MOVSD ES:EDI,ESI                    ; 004f5e92
    MOVSD ES:EDI,ESI                    ; 004f5e93
    MOVSD ES:EDI,ESI                    ; 004f5e94
    MOV dword ptr [EBX + 0x4b8],0x0     ; 004f5e95
    MOV dword ptr [EBX + 0x4bc],0x0     ; 004f5e9f
    MOV dword ptr [EBX + 0x4c0],0x0     ; 004f5ea9
    MOV byte ptr [EBX + 0x4c4],0x0      ; 004f5eb3
    MOV dword ptr [EBX + 0x71c],0x0     ; 004f5eba
    MOV dword ptr [EBX + 0x64],0x32     ; 004f5ec4
    MOV dword ptr [EBX + 0x504],0x0     ; 004f5ecb
    MOV EAX,EBX                         ; 004f5ed5
    MOV dword ptr [EBX + 0x2d8],0x0     ; 004f5ed7
    LEA EDX,[EBX + 0x208]               ; 004f5ee1
    MOV dword ptr [EBX + 0x2dc],0x0     ; 004f5ee7
    POP ESI                             ; 004f5ef1
    POP EDI                             ; 004f5ef2
    ADD EAX,0x34                        ; 004f5ef3
        ;   Label: LAB_004f5ef3
    MOV dword ptr [EAX + 0x4e0],0x0     ; 004f5ef6
    CMP EAX,EDX                         ; 004f5f00
    JNZ 0x004f5ef3                      ; 004f5f02
        ;   XREF to: 004f5ef3 (CONDITIONAL_JUMP)  ; LAB_004f5ef3
    MOV dword ptr [EBX + 0x50c],0x0     ; 004f5f04
    MOV dword ptr [EBX + 0x510],0x1     ; 004f5f0e
    MOV EAX,EBX                         ; 004f5f18
    MOV dword ptr [EBX + 0x508],0x0     ; 004f5f1a
    ADD ESP,0x10                        ; 004f5f24
    POP EBX                             ; 004f5f27
    RET                                 ; 004f5f28
    MOV ESI,dword ptr [EDX]             ; 004f5f29
        ;   Label: LAB_004f5f29
    MOV dword ptr [EAX],ESI             ; 004f5f2b
    MOV ESI,dword ptr [EDX + 0x4]       ; 004f5f2d
    MOV dword ptr [EAX + 0x4],ESI       ; 004f5f30
    MOV ESI,dword ptr [EDX + 0x8]       ; 004f5f33
    MOV dword ptr [EAX + 0x8],ESI       ; 004f5f36
    JMP 0x004f5e59                      ; 004f5f39
        ;   XREF to: 004f5e59 (UNCONDITIONAL_JUMP)  ; LAB_004f5e59
    MOV EDX,dword ptr [ECX]             ; 004f5f3e
        ;   Label: LAB_004f5f3e
    MOV dword ptr [EAX],EDX             ; 004f5f40
    MOV EDX,dword ptr [ECX + 0x4]       ; 004f5f42
    MOV dword ptr [EAX + 0x4],EDX       ; 004f5f45
    MOV EDX,dword ptr [ECX + 0x8]       ; 004f5f48
    MOV dword ptr [EAX + 0x8],EDX       ; 004f5f4b
    JMP 0x004f5e67                      ; 004f5f4e
        ;   XREF to: 004f5e67 (UNCONDITIONAL_JUMP)  ; LAB_004f5e67

