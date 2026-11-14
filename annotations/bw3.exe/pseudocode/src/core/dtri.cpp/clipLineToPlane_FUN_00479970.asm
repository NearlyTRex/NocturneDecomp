; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtri_cpp_clipLineToPlane_FUN_00479970(CVector3f *point1_ptr,CVector3f *point2_ptr,CVector3f *result_ptr,double plane_nx,double plane_ny,double plane_nz,double plane_d)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   point1_ptr
; CVector3f *      Stack[0x8]:4   point2_ptr
; CVector3f *      Stack[0xc]:4   result_ptr
; double           Stack[0x10]:8   plane_nx
; double           Stack[0x18]:8   plane_ny
; double           Stack[0x20]:8   plane_nz
; double           Stack[0x28]:8   plane_d
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
;
; XREF[3]:
;   core_dtri.cpp_clipPolygonToFar_FUN_0047a210 at 0047a2f2
;   core_dtri.cpp_clipPolygonToRight_FUN_00479de0 at 00479eba
;   core_dtri.cpp_clipTriangleToBounds_FUN_0047a3d0 at 0047a9f3
;
; Referenced Globals:
;   TerminatedCString s_core_dtri_cpp_005bccb9
;   TerminatedCString s_Bad_clip_005bccca
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00479970
        ;   Label: core_dtri.cpp_clipLineToPlane_FUN_00479970
    PUSH ESI                            ; 00479971
    PUSH EDI                            ; 00479972
    PUSH EBP                            ; 00479973
    MOV EBP,ESP                         ; 00479974
    SUB ESP,0x18                        ; 00479976
    AND ESP,0xfffffff8                  ; 00479979
    MOV EBX,dword ptr [EBP + 0x14]      ; 0047997c
    MOV EDI,dword ptr [EBP + 0x18]      ; 0047997f
    MOV ESI,dword ptr [EBP + 0x1c]      ; 00479982
    FLD float ptr [EDI + 0x4]           ; 00479985
    FSUB float ptr [EBX + 0x4]          ; 00479988
    FMUL double ptr [EBP + 0x28]        ; 0047998b
    FLD float ptr [EDI]                 ; 0047998e
    FSUB float ptr [EBX]                ; 00479990
    FMUL double ptr [EBP + 0x20]        ; 00479992
    FADDP                               ; 00479995
    FLD float ptr [EDI + 0x8]           ; 00479997
    FSUB float ptr [EBX + 0x8]          ; 0047999a
    FMUL double ptr [EBP + 0x30]        ; 0047999d
    FADDP                               ; 004799a0
    FSTP double ptr [ESP]               ; 004799a2
    MOV EDX,dword ptr [ESP + 0x4]       ; 004799a5
    MOV ECX,dword ptr [ESP]             ; 004799a9
    TEST EDX,0x7fffffff                 ; 004799ac
    JNZ 0x004799bc                      ; 004799b2
        ;   XREF to: 004799bc (CONDITIONAL_JUMP)  ; LAB_004799bc
    TEST ECX,ECX                        ; 004799b4
    JZ 0x00479ac6                       ; 004799b6
        ;   XREF to: 00479ac6 (CONDITIONAL_JUMP)  ; LAB_00479ac6
    FLD float ptr [EBX]                 ; 004799bc
        ;   Label: LAB_004799bc
    FLD double ptr [EBP + 0x20]         ; 004799be
    FMUL ST1                            ; 004799c1
    FADD double ptr [EBP + 0x38]        ; 004799c3
    FLD float ptr [EBX + 0x4]           ; 004799c6
    FMUL double ptr [EBP + 0x28]        ; 004799c9
    FADDP                               ; 004799cc
    FLD float ptr [EBX + 0x8]           ; 004799ce
    FMUL double ptr [EBP + 0x30]        ; 004799d1
    FADDP                               ; 004799d4
    FLD ST0                             ; 004799d6
    FCHS                                ; 004799d8
    FDIV double ptr [ESP]               ; 004799da
    FLD float ptr [EDI]                 ; 004799dd
    FSUB float ptr [EBX]                ; 004799df
    FXCH                                ; 004799e1
    FSTP ST2                            ; 004799e3
    FMUL ST1                            ; 004799e5
    FADDP ST2,ST0                       ; 004799e7
    FXCH                                ; 004799e9
    FSTP float ptr [ESI]                ; 004799eb
    FLD float ptr [EDI + 0x4]           ; 004799ed
    FSUB float ptr [EBX + 0x4]          ; 004799f0
    FMUL ST1                            ; 004799f3
    FADD float ptr [EBX + 0x4]          ; 004799f5
    FSTP float ptr [ESI + 0x4]          ; 004799f8
    FLD float ptr [EDI + 0x8]           ; 004799fb
    FSUB float ptr [EBX + 0x8]          ; 004799fe
    FMULP                               ; 00479a01
    MOV ECX,dword ptr [EBP + 0x24]      ; 00479a03
    FADD float ptr [EBX + 0x8]          ; 00479a06
    MOV EBX,dword ptr [EBP + 0x20]      ; 00479a09
    FSTP float ptr [ESI + 0x8]          ; 00479a0c
    TEST ECX,0x7fffffff                 ; 00479a0f
    JNZ 0x00479a1b                      ; 00479a15
        ;   XREF to: 00479a1b (CONDITIONAL_JUMP)  ; LAB_00479a1b
    TEST EBX,EBX                        ; 00479a17
    JZ 0x00479a49                       ; 00479a19
        ;   XREF to: 00479a49 (CONDITIONAL_JUMP)  ; LAB_00479a49
    MOV EDI,dword ptr [EBP + 0x2c]      ; 00479a1b
        ;   Label: LAB_00479a1b
    MOV EAX,dword ptr [EBP + 0x28]      ; 00479a1e
    TEST EDI,0x7fffffff                 ; 00479a21
    JNZ 0x00479a49                      ; 00479a27
        ;   XREF to: 00479a49 (CONDITIONAL_JUMP)  ; LAB_00479a49
    TEST EAX,EAX                        ; 00479a29
    JNZ 0x00479a49                      ; 00479a2b
        ;   XREF to: 00479a49 (CONDITIONAL_JUMP)  ; LAB_00479a49
    MOV EDX,dword ptr [EBP + 0x34]      ; 00479a2d
    MOV ECX,dword ptr [EBP + 0x30]      ; 00479a30
    TEST EDX,0x7fffffff                 ; 00479a33
    JNZ 0x00479a49                      ; 00479a39
        ;   XREF to: 00479a49 (CONDITIONAL_JUMP)  ; LAB_00479a49
    TEST ECX,ECX                        ; 00479a3b
    JNZ 0x00479a49                      ; 00479a3d
        ;   XREF to: 00479a49 (CONDITIONAL_JUMP)  ; LAB_00479a49
    FLD double ptr [EBP + 0x20]         ; 00479a3f
    FCHS                                ; 00479a42
    FMUL double ptr [EBP + 0x38]        ; 00479a44
    FSTP float ptr [ESI]                ; 00479a47
    MOV EBX,dword ptr [EBP + 0x24]      ; 00479a49
        ;   Label: LAB_00479a49
    MOV EDI,dword ptr [EBP + 0x20]      ; 00479a4c
    TEST EBX,0x7fffffff                 ; 00479a4f
    JNZ 0x00479a89                      ; 00479a55
        ;   XREF to: 00479a89 (CONDITIONAL_JUMP)  ; LAB_00479a89
    TEST EDI,EDI                        ; 00479a57
    JNZ 0x00479a89                      ; 00479a59
        ;   XREF to: 00479a89 (CONDITIONAL_JUMP)  ; LAB_00479a89
    MOV EAX,dword ptr [EBP + 0x2c]      ; 00479a5b
    MOV EDX,dword ptr [EBP + 0x28]      ; 00479a5e
    TEST EAX,0x7fffffff                 ; 00479a61
    JNZ 0x00479a6c                      ; 00479a66
        ;   XREF to: 00479a6c (CONDITIONAL_JUMP)  ; LAB_00479a6c
    TEST EDX,EDX                        ; 00479a68
    JZ 0x00479a89                       ; 00479a6a
        ;   XREF to: 00479a89 (CONDITIONAL_JUMP)  ; LAB_00479a89
    MOV ECX,dword ptr [EBP + 0x34]      ; 00479a6c
        ;   Label: LAB_00479a6c
    MOV EBX,dword ptr [EBP + 0x30]      ; 00479a6f
    TEST ECX,0x7fffffff                 ; 00479a72
    JNZ 0x00479a89                      ; 00479a78
        ;   XREF to: 00479a89 (CONDITIONAL_JUMP)  ; LAB_00479a89
    TEST EBX,EBX                        ; 00479a7a
    JNZ 0x00479a89                      ; 00479a7c
        ;   XREF to: 00479a89 (CONDITIONAL_JUMP)  ; LAB_00479a89
    FLD double ptr [EBP + 0x28]         ; 00479a7e
    FCHS                                ; 00479a81
    FMUL double ptr [EBP + 0x38]        ; 00479a83
    FSTP float ptr [ESI + 0x4]          ; 00479a86
    MOV EDI,dword ptr [EBP + 0x24]      ; 00479a89
        ;   Label: LAB_00479a89
    MOV EAX,dword ptr [EBP + 0x20]      ; 00479a8c
    TEST EDI,0x7fffffff                 ; 00479a8f
    JNZ 0x00479abf                      ; 00479a95
        ;   XREF to: 00479abf (CONDITIONAL_JUMP)  ; LAB_00479abf
    TEST EAX,EAX                        ; 00479a97
    JNZ 0x00479abf                      ; 00479a99
        ;   XREF to: 00479abf (CONDITIONAL_JUMP)  ; LAB_00479abf
    MOV EDX,dword ptr [EBP + 0x2c]      ; 00479a9b
    MOV ECX,dword ptr [EBP + 0x28]      ; 00479a9e
    TEST EDX,0x7fffffff                 ; 00479aa1
    JNZ 0x00479abf                      ; 00479aa7
        ;   XREF to: 00479abf (CONDITIONAL_JUMP)  ; LAB_00479abf
    TEST ECX,ECX                        ; 00479aa9
    JNZ 0x00479abf                      ; 00479aab
        ;   XREF to: 00479abf (CONDITIONAL_JUMP)  ; LAB_00479abf
    MOV EBX,dword ptr [EBP + 0x34]      ; 00479aad
    MOV EDI,dword ptr [EBP + 0x30]      ; 00479ab0
    TEST EBX,0x7fffffff                 ; 00479ab3
    JNZ 0x00479aed                      ; 00479ab9
        ;   XREF to: 00479aed (CONDITIONAL_JUMP)  ; LAB_00479aed
    TEST EDI,EDI                        ; 00479abb
    JNZ 0x00479aed                      ; 00479abd
        ;   XREF to: 00479aed (CONDITIONAL_JUMP)  ; LAB_00479aed
    MOV ESP,EBP                         ; 00479abf
        ;   Label: LAB_00479abf
    POP EBP                             ; 00479ac1
    POP EDI                             ; 00479ac2
    POP ESI                             ; 00479ac3
    POP EBX                             ; 00479ac4
    RET                                 ; 00479ac5
    MOV EAX,0x5bccb9                    ; 00479ac6 | = "..\\core\\dtri.cpp"
        ;   Label: LAB_00479ac6
    MOV EDX,0x457                       ; 00479acb
    PUSH 0x5bccca                       ; 00479ad0 | = "Bad clip!"
    MOV [0x01d71de0],EAX                ; 00479ad5 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 00479ada | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00479ae0
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00479ae5
    JMP 0x004799bc                      ; 00479ae8
        ;   XREF to: 004799bc (UNCONDITIONAL_JUMP)  ; LAB_004799bc
    FLD double ptr [EBP + 0x30]         ; 00479aed
        ;   Label: LAB_00479aed
    FCHS                                ; 00479af0
    FMUL double ptr [EBP + 0x38]        ; 00479af2
    FSTP float ptr [ESI + 0x8]          ; 00479af5
    MOV ESP,EBP                         ; 00479af8
    POP EBP                             ; 00479afa
    POP EDI                             ; 00479afb
    POP ESI                             ; 00479afc
    POP EBX                             ; 00479afd
    RET                                 ; 00479afe

