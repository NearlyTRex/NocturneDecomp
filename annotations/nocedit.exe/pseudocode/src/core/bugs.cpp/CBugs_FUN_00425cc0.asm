; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_bugs_cpp_CBugs_FUN_00425cc0(CBugs *this_ptr)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_bugs.cpp_CBugs_process_FUN_004250f0 at 00425130
;
; Referenced Globals:
;   double DOUBLE_00616df3 = 2
;   float FLOAT_00616dfb = 0.5
;   float FLOAT_0065b5d4 = 2
;
; Called Functions:
;   core_bugs.cpp_CBugs_FUN_004257f0
;   core_bugs.cpp_CBugs_FUN_00425fe0
;   core_bugs.cpp_CBugs_FUN_00426420
;   core_bugs.cpp_CBugs_FUN_004272f0
;   core_bugs.cpp_CBugs_FUN_00427400
;   core_bugs.cpp_CBugs_FUN_004276c0
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00
;   core_path.cpp_FUN_00548500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00425cc0
        ;   Label: core_bugs.cpp_CBugs_FUN_00425cc0
    PUSH ESI                            ; 00425cc1
    PUSH EDI                            ; 00425cc2
    PUSH EBP                            ; 00425cc3
    MOV EBP,ESP                         ; 00425cc4
    SUB ESP,0x98                        ; 00425cc6
    AND ESP,0xfffffff8                  ; 00425ccc
    MOV EBX,dword ptr [EBP + 0x14]      ; 00425ccf
    PUSH dword ptr [EBP + 0x18]         ; 00425cd2
    MOV EAX,dword ptr [EBX + 0x154]     ; 00425cd5
    PUSH EBX                            ; 00425cdb
    XOR EDI,EDI                         ; 00425cdc
    CALL dword ptr [EAX + 0x158]        ; 00425cde
    MOV EDX,dword ptr [EBX + 0x1989c]   ; 00425ce4
    ADD ESP,0x8                         ; 00425cea
    TEST EDX,EDX                        ; 00425ced
    JZ 0x00425dd0                       ; 00425cef
        ;   XREF to: 00425dd0 (CONDITIONAL_JUMP)  ; LAB_00425dd0
    MOV ECX,dword ptr [EBX + 0xbe3c]    ; 00425cf5
    TEST ECX,ECX                        ; 00425cfb
    JZ 0x00425dd0                       ; 00425cfd
        ;   XREF to: 00425dd0 (CONDITIONAL_JUMP)  ; LAB_00425dd0
    LEA ESI,[EBX + 0x20]                ; 00425d03
    FLD float ptr [ESI]                 ; 00425d06
    FSUB float ptr [ECX + 0x20]         ; 00425d08
    FSTP float ptr [ESP + 0x34]         ; 00425d0b
    FLD float ptr [ESI + 0x4]           ; 00425d0f
    FSUB float ptr [ECX + 0x24]         ; 00425d12
    FST float ptr [ESP + 0x38]          ; 00425d15
    FABS                                ; 00425d19
    FLD float ptr [ESI + 0x8]           ; 00425d1b
    FSUB float ptr [ECX + 0x28]         ; 00425d1e
    FSTP float ptr [ESP + 0x3c]         ; 00425d21
    FCOMP double ptr [0x00616df3]       ; 00425d25 | DOUBLE_00616df3
    FNSTSW AX                           ; 00425d2b
    SAHF                                ; 00425d2d
    JNC 0x00425dd0                      ; 00425d2e
        ;   XREF to: 00425dd0 (CONDITIONAL_JUMP)  ; LAB_00425dd0
    FLD float ptr [ESP + 0x34]          ; 00425d34
    FABS                                ; 00425d38
    FCOMP double ptr [0x00616df3]       ; 00425d3a | DOUBLE_00616df3
    FNSTSW AX                           ; 00425d40
    SAHF                                ; 00425d42
    JNC 0x00425dd0                      ; 00425d43
        ;   XREF to: 00425dd0 (CONDITIONAL_JUMP)  ; LAB_00425dd0
    FLD float ptr [ESP + 0x3c]          ; 00425d49
    FABS                                ; 00425d4d
    FCOMP double ptr [0x00616df3]       ; 00425d4f | DOUBLE_00616df3
    FNSTSW AX                           ; 00425d55
    SAHF                                ; 00425d57
    JNC 0x00425dd0                      ; 00425d58
        ;   XREF to: 00425dd0 (CONDITIONAL_JUMP)  ; LAB_00425dd0
    PUSH EBX                            ; 00425d5e
        ;   Label: LAB_00425d5e
    CALL core_bugs.cpp_CBugs_FUN_004257f0 ; 00425d5f
        ;   XREF to: 004257f0 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_FUN_004257f0(CBugs * this_ptr)
    ADD ESP,0x4                         ; 00425d64
    MOV ESI,dword ptr [EBX + 0xbe3c]    ; 00425d67
    PUSH ESI                            ; 00425d6d
    PUSH EBX                            ; 00425d6e
    CALL core_bugs.cpp_CBugs_FUN_00427400 ; 00425d6f
        ;   XREF to: 00427400 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_FUN_00427400(CBugs * this_ptr)
    MOV EDI,dword ptr [EBX + 0xbebc]    ; 00425d74
    ADD ESP,0x8                         ; 00425d7a
    CMP EDI,0x1                         ; 00425d7d
    JZ 0x00425fc6                       ; 00425d80
        ;   XREF to: 00425fc6 (CONDITIONAL_JUMP)  ; LAB_00425fc6
    MOV EAX,dword ptr [EBX + 0xbec0]    ; 00425d86
        ;   Label: LAB_00425d86
    XOR ESI,ESI                         ; 00425d8c
    TEST EAX,EAX                        ; 00425d8e
    JLE 0x00425dc0                      ; 00425d90
        ;   XREF to: 00425dc0 (CONDITIONAL_JUMP)  ; LAB_00425dc0
    LEA EDI,[EBX + 0xbec4]              ; 00425d92
    PUSH 0x0                            ; 00425d98
        ;   Label: LAB_00425d98
    PUSH dword ptr [EBP + 0x18]         ; 00425d9a
    PUSH EDI                            ; 00425d9d
    PUSH EBX                            ; 00425d9e
    INC ESI                             ; 00425d9f
    CALL core_bugs.cpp_CBugs_FUN_00426420 ; 00425da0
        ;   XREF to: 00426420 (UNCONDITIONAL_CALL)  ; int core_bugs.cpp_CBugs_FUN_00426420(CBugs * this_ptr)
    ADD EDI,0x40                        ; 00425da5
    MOV EDX,dword ptr [EBX + 0xbec0]    ; 00425da8
    ADD ESP,0x10                        ; 00425dae
    CMP ESI,EDX                         ; 00425db1
    JL 0x00425d98                       ; 00425db3
        ;   XREF to: 00425d98 (CONDITIONAL_JUMP)  ; LAB_00425d98
    LEA EAX,[EAX]                       ; 00425db5
    LEA EDX,[EDX]                       ; 00425dbb
    MOV EBX,EBX                         ; 00425dbe
    PUSH EBX                            ; 00425dc0
        ;   Label: LAB_00425dc0
    CALL core_bugs.cpp_CBugs_FUN_004272f0 ; 00425dc1
        ;   XREF to: 004272f0 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_FUN_004272f0(CBugs * this_ptr)
    ADD ESP,0x4                         ; 00425dc6
    MOV ESP,EBP                         ; 00425dc9
    POP EBP                             ; 00425dcb
    POP EDI                             ; 00425dcc
    POP ESI                             ; 00425dcd
    POP EBX                             ; 00425dce
    RET                                 ; 00425dcf
    TEST EDI,EDI                        ; 00425dd0
        ;   Label: LAB_00425dd0
    JNZ 0x00425d5e                      ; 00425dd2
        ;   XREF to: 00425d5e (CONDITIONAL_JUMP)  ; LAB_00425d5e
    CMP dword ptr [EBX + 0x19898],0x0   ; 00425dd4
    JZ 0x00425fb8                       ; 00425ddb
        ;   XREF to: 00425fb8 (CONDITIONAL_JUMP)  ; LAB_00425fb8
    MOV EDI,dword ptr [EBX + 0xbe3c]    ; 00425de1
    TEST EDI,EDI                        ; 00425de7
    JZ 0x00425fb8                       ; 00425de9
        ;   XREF to: 00425fb8 (CONDITIONAL_JUMP)  ; LAB_00425fb8
    PUSH EDI                            ; 00425def
    MOV ESI,dword ptr [EDI + 0x154]     ; 00425df0
    CALL dword ptr [ESI + 0xbc]         ; 00425df6
    ADD ESP,0x4                         ; 00425dfc
    MOV EDI,EAX                         ; 00425dff
    TEST EAX,EAX                        ; 00425e01
    JNZ 0x00425e19                      ; 00425e03
        ;   XREF to: 00425e19 (CONDITIONAL_JUMP)  ; LAB_00425e19
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 00425e05
    ADD EAX,0x20                        ; 00425e0b
    PUSH EAX                            ; 00425e0e
    CALL core_path.cpp_FUN_00548500     ; 00425e0f
        ;   XREF to: 00548500 (UNCONDITIONAL_CALL)  ; void core_path.cpp_FUN_00548500()
    ADD ESP,0x4                         ; 00425e14
    MOV EDI,EAX                         ; 00425e17
    MOV EAX,dword ptr [EBX + 0x6c]      ; 00425e19
        ;   Label: LAB_00425e19
    PUSH EAX                            ; 00425e1c
    LEA EAX,[ESP + 0x5c]                ; 00425e1d
    PUSH EAX                            ; 00425e21
    LEA ESI,[EBX + 0x20]                ; 00425e22
    PUSH ESI                            ; 00425e25
    PUSH EDI                            ; 00425e26
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00 ; 00425e27
        ;   XREF to: 00547d00 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 00425e2c
    TEST EAX,EAX                        ; 00425e2f
    JZ 0x00425fb8                       ; 00425e31
        ;   XREF to: 00425fb8 (CONDITIONAL_JUMP)  ; LAB_00425fb8
    LEA EAX,[ESP + 0x58]                ; 00425e37
    PUSH EAX                            ; 00425e3b
    LEA EAX,[ESP + 0x4]                 ; 00425e3c
    PUSH EAX                            ; 00425e40
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 00425e41
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00425e46
    FLD float ptr [0x0065b5d4]          ; 00425e49 | FLOAT_0065b5d4
    FMUL float ptr [EBP + 0x18]         ; 00425e4f
    FSTP float ptr [ESP + 0x94]         ; 00425e52
    MOV EAX,dword ptr [ESP + 0x94]      ; 00425e59
    MOV dword ptr [ESP + 0x30],EAX      ; 00425e60
    LEA EAX,[ESP + 0x28]                ; 00425e64
    PUSH EAX                            ; 00425e68
    LEA EAX,[ESP + 0x80]                ; 00425e69
    PUSH EAX                            ; 00425e70
    LEA EAX,[ESP + 0x8]                 ; 00425e71
    XOR EDX,EDX                         ; 00425e75
    PUSH EAX                            ; 00425e77
    MOV dword ptr [ESP + 0x34],EDX      ; 00425e78
    MOV dword ptr [ESP + 0x38],EDX      ; 00425e7c
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 00425e80
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 00425e85
    MOV EAX,dword ptr [ESI]             ; 00425e88
    LEA EDI,[ESI + 0x4]                 ; 00425e8a
    MOV dword ptr [ESP + 0x40],EAX      ; 00425e8d
    MOV EAX,dword ptr [EDI]             ; 00425e91
    MOV dword ptr [ESP + 0x44],EAX      ; 00425e93
    LEA EAX,[ESI + 0x8]                 ; 00425e97
    MOV dword ptr [ESP + 0x94],EAX      ; 00425e9a
    MOV EAX,dword ptr [EAX]             ; 00425ea1
    MOV dword ptr [ESP + 0x48],EAX      ; 00425ea3
    LEA EAX,[ESP + 0x7c]                ; 00425ea7
    PUSH EAX                            ; 00425eab
    PUSH EBX                            ; 00425eac
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40 ; 00425ead
        ;   XREF to: 00428f40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 00425eb2
    MOV EAX,dword ptr [ESI]             ; 00425eb5
    MOV dword ptr [ESP + 0x70],EAX      ; 00425eb7
    MOV EAX,dword ptr [EDI]             ; 00425ebb
    MOV dword ptr [ESP + 0x74],EAX      ; 00425ebd
    MOV EAX,dword ptr [ESP + 0x94]      ; 00425ec1
    MOV EAX,dword ptr [EAX]             ; 00425ec8
    MOV dword ptr [ESP + 0x78],EAX      ; 00425eca
    MOV EAX,dword ptr [ESP + 0x40]      ; 00425ece
    MOV dword ptr [ESI],EAX             ; 00425ed2
    MOV EAX,dword ptr [ESP + 0x44]      ; 00425ed4
    MOV dword ptr [ESI + 0x4],EAX       ; 00425ed8
    MOV EAX,dword ptr [ESP + 0x48]      ; 00425edb
    MOV dword ptr [ESI + 0x8],EAX       ; 00425edf
    FLD float ptr [ESP + 0x70]          ; 00425ee2
    FSUB float ptr [ESI]                ; 00425ee6
    FLD float ptr [ESP + 0x74]          ; 00425ee8
    FXCH                                ; 00425eec
    FSTP float ptr [ESP + 0x64]         ; 00425eee
    FSUB float ptr [ESI + 0x4]          ; 00425ef2
    FLD float ptr [ESP + 0x78]          ; 00425ef5
    FXCH                                ; 00425ef9
    FSTP float ptr [ESP + 0x68]         ; 00425efb
    FSUB float ptr [ESI + 0x8]          ; 00425eff
    LEA ESI,[EBX + 0x199cc]             ; 00425f02
    FSTP float ptr [ESP + 0x6c]         ; 00425f08
    LEA EAX,[EBX + 0x199d8]             ; 00425f0c
    FLD float ptr [ESI]                 ; 00425f12
    FADD float ptr [EAX]                ; 00425f14
    FST float ptr [ESP + 0x88]          ; 00425f16
    FLD float ptr [ESI + 0x4]           ; 00425f1d
    FADD float ptr [EAX + 0x4]          ; 00425f20
    FXCH                                ; 00425f23
    FLD float ptr [0x00616dfb]          ; 00425f25 | FLOAT_00616dfb
    FXCH                                ; 00425f2b
    FMUL ST1                            ; 00425f2d
    FXCH ST2                            ; 00425f2f
    FST float ptr [ESP + 0x8c]          ; 00425f31
    FLD float ptr [ESI + 0x8]           ; 00425f38
    FADD float ptr [EAX + 0x8]          ; 00425f3b
    FXCH                                ; 00425f3e
    FMUL ST2                            ; 00425f40
    FXCH                                ; 00425f42
    FST float ptr [ESP + 0x90]          ; 00425f44
    FMULP ST2                           ; 00425f4b
    FSTP float ptr [ESP + 0x50]         ; 00425f4d
    MOV EAX,dword ptr [ESP + 0x50]      ; 00425f51
    FXCH                                ; 00425f55
    FSTP float ptr [ESP + 0x4c]         ; 00425f57
    MOV dword ptr [ESP + 0x68],EAX      ; 00425f5b
    FSTP float ptr [ESP + 0x54]         ; 00425f5f
    FLD float ptr [ESI]                 ; 00425f63
    FCOMP float ptr [ESP + 0x64]        ; 00425f65
    FNSTSW AX                           ; 00425f69
    SAHF                                ; 00425f6b
    JA 0x00425fb8                       ; 00425f6c
        ;   XREF to: 00425fb8 (CONDITIONAL_JUMP)  ; LAB_00425fb8
    FLD float ptr [ESI + 0x4]           ; 00425f6e
    FCOMP float ptr [ESP + 0x50]        ; 00425f71
    FNSTSW AX                           ; 00425f75
    SAHF                                ; 00425f77
    JA 0x00425fb8                       ; 00425f78
        ;   XREF to: 00425fb8 (CONDITIONAL_JUMP)  ; LAB_00425fb8
    FLD float ptr [ESI + 0x8]           ; 00425f7a
    FCOMP float ptr [ESP + 0x6c]        ; 00425f7d
    FNSTSW AX                           ; 00425f81
    SAHF                                ; 00425f83
    JA 0x00425fb8                       ; 00425f84
        ;   XREF to: 00425fb8 (CONDITIONAL_JUMP)  ; LAB_00425fb8
    FLD float ptr [ESI + 0xc]           ; 00425f86
    FCOMP float ptr [ESP + 0x64]        ; 00425f89
    FNSTSW AX                           ; 00425f8d
    SAHF                                ; 00425f8f
    JC 0x00425fb8                       ; 00425f90
        ;   XREF to: 00425fb8 (CONDITIONAL_JUMP)  ; LAB_00425fb8
    FLD float ptr [ESI + 0x10]          ; 00425f92
    FCOMP float ptr [ESP + 0x50]        ; 00425f95
    FNSTSW AX                           ; 00425f99
    SAHF                                ; 00425f9b
    JC 0x00425fb8                       ; 00425f9c
        ;   XREF to: 00425fb8 (CONDITIONAL_JUMP)  ; LAB_00425fb8
    FLD float ptr [ESI + 0x14]          ; 00425f9e
    FCOMP float ptr [ESP + 0x6c]        ; 00425fa1
    FNSTSW AX                           ; 00425fa5
    SAHF                                ; 00425fa7
    JC 0x00425fb8                       ; 00425fa8
        ;   XREF to: 00425fb8 (CONDITIONAL_JUMP)  ; LAB_00425fb8
    LEA EAX,[ESP + 0x70]                ; 00425faa
    PUSH EAX                            ; 00425fae
    PUSH EBX                            ; 00425faf
    CALL core_bugs.cpp_CBugs_FUN_004276c0 ; 00425fb0
        ;   XREF to: 004276c0 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_FUN_004276c0(CBugs * this_ptr)
    ADD ESP,0x8                         ; 00425fb5
    PUSH EBX                            ; 00425fb8
        ;   Label: LAB_00425fb8
    CALL core_bugs.cpp_CBugs_FUN_004257f0 ; 00425fb9
        ;   XREF to: 004257f0 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_FUN_004257f0(CBugs * this_ptr)
    ADD ESP,0x4                         ; 00425fbe
    JMP 0x00425d86                      ; 00425fc1
        ;   XREF to: 00425d86 (UNCONDITIONAL_JUMP)  ; LAB_00425d86
    PUSH dword ptr [EBP + 0x18]         ; 00425fc6
        ;   Label: LAB_00425fc6
    PUSH EBX                            ; 00425fc9
    CALL core_bugs.cpp_CBugs_FUN_00425fe0 ; 00425fca
        ;   XREF to: 00425fe0 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_FUN_00425fe0(CBugs * this_ptr)
    ADD ESP,0x8                         ; 00425fcf
    MOV ESP,EBP                         ; 00425fd2
    POP EBP                             ; 00425fd4
    POP EDI                             ; 00425fd5
    POP ESI                             ; 00425fd6
    POP EBX                             ; 00425fd7
    RET                                 ; 00425fd8

