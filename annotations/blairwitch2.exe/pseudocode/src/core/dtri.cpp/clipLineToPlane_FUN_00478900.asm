; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtri_cpp_clipLineToPlane_FUN_00478900(CVector3f *point1_ptr,CVector3f *point2_ptr,CVector3f *result_ptr,double plane_nx,double plane_ny,double plane_nz,double plane_d)
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
;   core_dtri.cpp_clipPolygonToFar_FUN_004791a0 at 00479282
;   core_dtri.cpp_clipPolygonToRight_FUN_00478d70 at 00478e4a
;   core_dtri.cpp_clipTriangleToBounds_FUN_00479360 at 00479973
;
; Referenced Globals:
;   TerminatedCString s_core_dtri_cpp_005d1e03
;   TerminatedCString s_Bad_clip_005d1e14
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00478900
        ;   Label: core_dtri.cpp_clipLineToPlane_FUN_00478900
    PUSH ESI                            ; 00478901
    PUSH EDI                            ; 00478902
    PUSH EBP                            ; 00478903
    MOV EBP,ESP                         ; 00478904
    SUB ESP,0x18                        ; 00478906
    AND ESP,0xfffffff8                  ; 00478909
    MOV EBX,dword ptr [EBP + 0x14]      ; 0047890c
    MOV EDI,dword ptr [EBP + 0x18]      ; 0047890f
    MOV ESI,dword ptr [EBP + 0x1c]      ; 00478912
    FLD float ptr [EDI + 0x4]           ; 00478915
    FSUB float ptr [EBX + 0x4]          ; 00478918
    FMUL double ptr [EBP + 0x28]        ; 0047891b
    FLD float ptr [EDI]                 ; 0047891e
    FSUB float ptr [EBX]                ; 00478920
    FMUL double ptr [EBP + 0x20]        ; 00478922
    FADDP                               ; 00478925
    FLD float ptr [EDI + 0x8]           ; 00478927
    FSUB float ptr [EBX + 0x8]          ; 0047892a
    FMUL double ptr [EBP + 0x30]        ; 0047892d
    FADDP                               ; 00478930
    FSTP double ptr [ESP]               ; 00478932
    MOV EDX,dword ptr [ESP + 0x4]       ; 00478935
    MOV ECX,dword ptr [ESP]             ; 00478939
    TEST EDX,0x7fffffff                 ; 0047893c
    JNZ 0x0047894c                      ; 00478942
        ;   XREF to: 0047894c (CONDITIONAL_JUMP)  ; LAB_0047894c
    TEST ECX,ECX                        ; 00478944
    JZ 0x00478a56                       ; 00478946
        ;   XREF to: 00478a56 (CONDITIONAL_JUMP)  ; LAB_00478a56
    FLD float ptr [EBX]                 ; 0047894c
        ;   Label: LAB_0047894c
    FLD double ptr [EBP + 0x20]         ; 0047894e
    FMUL ST1                            ; 00478951
    FADD double ptr [EBP + 0x38]        ; 00478953
    FLD float ptr [EBX + 0x4]           ; 00478956
    FMUL double ptr [EBP + 0x28]        ; 00478959
    FADDP                               ; 0047895c
    FLD float ptr [EBX + 0x8]           ; 0047895e
    FMUL double ptr [EBP + 0x30]        ; 00478961
    FADDP                               ; 00478964
    FLD ST0                             ; 00478966
    FCHS                                ; 00478968
    FDIV double ptr [ESP]               ; 0047896a
    FLD float ptr [EDI]                 ; 0047896d
    FSUB float ptr [EBX]                ; 0047896f
    FXCH                                ; 00478971
    FSTP ST2                            ; 00478973
    FMUL ST1                            ; 00478975
    FADDP ST2,ST0                       ; 00478977
    FXCH                                ; 00478979
    FSTP float ptr [ESI]                ; 0047897b
    FLD float ptr [EDI + 0x4]           ; 0047897d
    FSUB float ptr [EBX + 0x4]          ; 00478980
    FMUL ST1                            ; 00478983
    FADD float ptr [EBX + 0x4]          ; 00478985
    FSTP float ptr [ESI + 0x4]          ; 00478988
    FLD float ptr [EDI + 0x8]           ; 0047898b
    FSUB float ptr [EBX + 0x8]          ; 0047898e
    FMULP                               ; 00478991
    MOV ECX,dword ptr [EBP + 0x24]      ; 00478993
    FADD float ptr [EBX + 0x8]          ; 00478996
    MOV EBX,dword ptr [EBP + 0x20]      ; 00478999
    FSTP float ptr [ESI + 0x8]          ; 0047899c
    TEST ECX,0x7fffffff                 ; 0047899f
    JNZ 0x004789ab                      ; 004789a5
        ;   XREF to: 004789ab (CONDITIONAL_JUMP)  ; LAB_004789ab
    TEST EBX,EBX                        ; 004789a7
    JZ 0x004789d9                       ; 004789a9
        ;   XREF to: 004789d9 (CONDITIONAL_JUMP)  ; LAB_004789d9
    MOV EDI,dword ptr [EBP + 0x2c]      ; 004789ab
        ;   Label: LAB_004789ab
    MOV EAX,dword ptr [EBP + 0x28]      ; 004789ae
    TEST EDI,0x7fffffff                 ; 004789b1
    JNZ 0x004789d9                      ; 004789b7
        ;   XREF to: 004789d9 (CONDITIONAL_JUMP)  ; LAB_004789d9
    TEST EAX,EAX                        ; 004789b9
    JNZ 0x004789d9                      ; 004789bb
        ;   XREF to: 004789d9 (CONDITIONAL_JUMP)  ; LAB_004789d9
    MOV EDX,dword ptr [EBP + 0x34]      ; 004789bd
    MOV ECX,dword ptr [EBP + 0x30]      ; 004789c0
    TEST EDX,0x7fffffff                 ; 004789c3
    JNZ 0x004789d9                      ; 004789c9
        ;   XREF to: 004789d9 (CONDITIONAL_JUMP)  ; LAB_004789d9
    TEST ECX,ECX                        ; 004789cb
    JNZ 0x004789d9                      ; 004789cd
        ;   XREF to: 004789d9 (CONDITIONAL_JUMP)  ; LAB_004789d9
    FLD double ptr [EBP + 0x20]         ; 004789cf
    FCHS                                ; 004789d2
    FMUL double ptr [EBP + 0x38]        ; 004789d4
    FSTP float ptr [ESI]                ; 004789d7
    MOV EBX,dword ptr [EBP + 0x24]      ; 004789d9
        ;   Label: LAB_004789d9
    MOV EDI,dword ptr [EBP + 0x20]      ; 004789dc
    TEST EBX,0x7fffffff                 ; 004789df
    JNZ 0x00478a19                      ; 004789e5
        ;   XREF to: 00478a19 (CONDITIONAL_JUMP)  ; LAB_00478a19
    TEST EDI,EDI                        ; 004789e7
    JNZ 0x00478a19                      ; 004789e9
        ;   XREF to: 00478a19 (CONDITIONAL_JUMP)  ; LAB_00478a19
    MOV EAX,dword ptr [EBP + 0x2c]      ; 004789eb
    MOV EDX,dword ptr [EBP + 0x28]      ; 004789ee
    TEST EAX,0x7fffffff                 ; 004789f1
    JNZ 0x004789fc                      ; 004789f6
        ;   XREF to: 004789fc (CONDITIONAL_JUMP)  ; LAB_004789fc
    TEST EDX,EDX                        ; 004789f8
    JZ 0x00478a19                       ; 004789fa
        ;   XREF to: 00478a19 (CONDITIONAL_JUMP)  ; LAB_00478a19
    MOV ECX,dword ptr [EBP + 0x34]      ; 004789fc
        ;   Label: LAB_004789fc
    MOV EBX,dword ptr [EBP + 0x30]      ; 004789ff
    TEST ECX,0x7fffffff                 ; 00478a02
    JNZ 0x00478a19                      ; 00478a08
        ;   XREF to: 00478a19 (CONDITIONAL_JUMP)  ; LAB_00478a19
    TEST EBX,EBX                        ; 00478a0a
    JNZ 0x00478a19                      ; 00478a0c
        ;   XREF to: 00478a19 (CONDITIONAL_JUMP)  ; LAB_00478a19
    FLD double ptr [EBP + 0x28]         ; 00478a0e
    FCHS                                ; 00478a11
    FMUL double ptr [EBP + 0x38]        ; 00478a13
    FSTP float ptr [ESI + 0x4]          ; 00478a16
    MOV EDI,dword ptr [EBP + 0x24]      ; 00478a19
        ;   Label: LAB_00478a19
    MOV EAX,dword ptr [EBP + 0x20]      ; 00478a1c
    TEST EDI,0x7fffffff                 ; 00478a1f
    JNZ 0x00478a4f                      ; 00478a25
        ;   XREF to: 00478a4f (CONDITIONAL_JUMP)  ; LAB_00478a4f
    TEST EAX,EAX                        ; 00478a27
    JNZ 0x00478a4f                      ; 00478a29
        ;   XREF to: 00478a4f (CONDITIONAL_JUMP)  ; LAB_00478a4f
    MOV EDX,dword ptr [EBP + 0x2c]      ; 00478a2b
    MOV ECX,dword ptr [EBP + 0x28]      ; 00478a2e
    TEST EDX,0x7fffffff                 ; 00478a31
    JNZ 0x00478a4f                      ; 00478a37
        ;   XREF to: 00478a4f (CONDITIONAL_JUMP)  ; LAB_00478a4f
    TEST ECX,ECX                        ; 00478a39
    JNZ 0x00478a4f                      ; 00478a3b
        ;   XREF to: 00478a4f (CONDITIONAL_JUMP)  ; LAB_00478a4f
    MOV EBX,dword ptr [EBP + 0x34]      ; 00478a3d
    MOV EDI,dword ptr [EBP + 0x30]      ; 00478a40
    TEST EBX,0x7fffffff                 ; 00478a43
    JNZ 0x00478a7d                      ; 00478a49
        ;   XREF to: 00478a7d (CONDITIONAL_JUMP)  ; LAB_00478a7d
    TEST EDI,EDI                        ; 00478a4b
    JNZ 0x00478a7d                      ; 00478a4d
        ;   XREF to: 00478a7d (CONDITIONAL_JUMP)  ; LAB_00478a7d
    MOV ESP,EBP                         ; 00478a4f
        ;   Label: LAB_00478a4f
    POP EBP                             ; 00478a51
    POP EDI                             ; 00478a52
    POP ESI                             ; 00478a53
    POP EBX                             ; 00478a54
    RET                                 ; 00478a55
    MOV EAX,0x5d1e03                    ; 00478a56 | = "..\\core\\dtri.cpp"
        ;   Label: LAB_00478a56
    MOV EDX,0x457                       ; 00478a5b
    PUSH 0x5d1e14                       ; 00478a60 | = "Bad clip!"
    MOV [0x01d046a0],EAX                ; 00478a65 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 00478a6a | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00478a70
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00478a75
    JMP 0x0047894c                      ; 00478a78
        ;   XREF to: 0047894c (UNCONDITIONAL_JUMP)  ; LAB_0047894c
    FLD double ptr [EBP + 0x30]         ; 00478a7d
        ;   Label: LAB_00478a7d
    FCHS                                ; 00478a80
    FMUL double ptr [EBP + 0x38]        ; 00478a82
    FSTP float ptr [ESI + 0x8]          ; 00478a85
    MOV ESP,EBP                         ; 00478a88
    POP EBP                             ; 00478a8a
    POP EDI                             ; 00478a8b
    POP ESI                             ; 00478a8c
    POP EBX                             ; 00478a8d
    RET                                 ; 00478a8e

