; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dtri_cpp_clipLineToPlane_FUN_0049b6c0(CVector3f *point1_ptr,CVector3f *point2_ptr,CVector3f *result_ptr,double plane_nx,double plane_ny,double plane_nz,double plane_d)
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
; XREF[7]:
;   core_dtri.cpp_clipPolygonToBottom_FUN_0049b9c0 at 0049baa2
;   core_dtri.cpp_clipPolygonToFar_FUN_0049bf60 at 0049c042
;   core_dtri.cpp_clipPolygonToLeft_FUN_0049bc90 at 0049bd70
;   core_dtri.cpp_clipPolygonToNear_FUN_0049bdf0 at 0049bed2
;   core_dtri.cpp_clipPolygonToRight_FUN_0049bb30 at 0049bc0a
;   core_dtri.cpp_clipPolygonToTop_FUN_0049b860 at 0049b93c
;   core_dtri.cpp_clipTriangleToBounds_FUN_0049c120 at 0049c733
;
; Referenced Globals:
;   TerminatedCString s_core_dtri_cpp_00622e2a
;   TerminatedCString s_Bad_clip_00622e3b
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049b6c0
        ;   Label: core_dtri.cpp_clipLineToPlane_FUN_0049b6c0
    PUSH ESI                            ; 0049b6c1
    PUSH EDI                            ; 0049b6c2
    PUSH EBP                            ; 0049b6c3
    MOV EBP,ESP                         ; 0049b6c4
    SUB ESP,0x18                        ; 0049b6c6
    AND ESP,0xfffffff8                  ; 0049b6c9
    MOV EBX,dword ptr [EBP + 0x14]      ; 0049b6cc
    MOV EDI,dword ptr [EBP + 0x18]      ; 0049b6cf
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0049b6d2
    FLD float ptr [EDI + 0x4]           ; 0049b6d5
    FSUB float ptr [EBX + 0x4]          ; 0049b6d8
    FMUL double ptr [EBP + 0x28]        ; 0049b6db
    FLD float ptr [EDI]                 ; 0049b6de
    FSUB float ptr [EBX]                ; 0049b6e0
    FMUL double ptr [EBP + 0x20]        ; 0049b6e2
    FADDP                               ; 0049b6e5
    FLD float ptr [EDI + 0x8]           ; 0049b6e7
    FSUB float ptr [EBX + 0x8]          ; 0049b6ea
    FMUL double ptr [EBP + 0x30]        ; 0049b6ed
    FADDP                               ; 0049b6f0
    FSTP double ptr [ESP]               ; 0049b6f2
    MOV EDX,dword ptr [ESP + 0x4]       ; 0049b6f5
    MOV ECX,dword ptr [ESP]             ; 0049b6f9
    TEST EDX,0x7fffffff                 ; 0049b6fc
    JNZ 0x0049b70c                      ; 0049b702
        ;   XREF to: 0049b70c (CONDITIONAL_JUMP)  ; LAB_0049b70c
    TEST ECX,ECX                        ; 0049b704
    JZ 0x0049b816                       ; 0049b706
        ;   XREF to: 0049b816 (CONDITIONAL_JUMP)  ; LAB_0049b816
    FLD float ptr [EBX]                 ; 0049b70c
        ;   Label: LAB_0049b70c
    FLD double ptr [EBP + 0x20]         ; 0049b70e
    FMUL ST1                            ; 0049b711
    FADD double ptr [EBP + 0x38]        ; 0049b713
    FLD float ptr [EBX + 0x4]           ; 0049b716
    FMUL double ptr [EBP + 0x28]        ; 0049b719
    FADDP                               ; 0049b71c
    FLD float ptr [EBX + 0x8]           ; 0049b71e
    FMUL double ptr [EBP + 0x30]        ; 0049b721
    FADDP                               ; 0049b724
    FLD ST0                             ; 0049b726
    FCHS                                ; 0049b728
    FDIV double ptr [ESP]               ; 0049b72a
    FLD float ptr [EDI]                 ; 0049b72d
    FSUB float ptr [EBX]                ; 0049b72f
    FXCH                                ; 0049b731
    FSTP ST2                            ; 0049b733
    FMUL ST1                            ; 0049b735
    FADDP ST2,ST0                       ; 0049b737
    FXCH                                ; 0049b739
    FSTP float ptr [ESI]                ; 0049b73b
    FLD float ptr [EDI + 0x4]           ; 0049b73d
    FSUB float ptr [EBX + 0x4]          ; 0049b740
    FMUL ST1                            ; 0049b743
    FADD float ptr [EBX + 0x4]          ; 0049b745
    FSTP float ptr [ESI + 0x4]          ; 0049b748
    FLD float ptr [EDI + 0x8]           ; 0049b74b
    FSUB float ptr [EBX + 0x8]          ; 0049b74e
    FMULP                               ; 0049b751
    MOV ECX,dword ptr [EBP + 0x24]      ; 0049b753
    FADD float ptr [EBX + 0x8]          ; 0049b756
    MOV EBX,dword ptr [EBP + 0x20]      ; 0049b759
    FSTP float ptr [ESI + 0x8]          ; 0049b75c
    TEST ECX,0x7fffffff                 ; 0049b75f
    JNZ 0x0049b76b                      ; 0049b765
        ;   XREF to: 0049b76b (CONDITIONAL_JUMP)  ; LAB_0049b76b
    TEST EBX,EBX                        ; 0049b767
    JZ 0x0049b799                       ; 0049b769
        ;   XREF to: 0049b799 (CONDITIONAL_JUMP)  ; LAB_0049b799
    MOV EDI,dword ptr [EBP + 0x2c]      ; 0049b76b
        ;   Label: LAB_0049b76b
    MOV EAX,dword ptr [EBP + 0x28]      ; 0049b76e
    TEST EDI,0x7fffffff                 ; 0049b771
    JNZ 0x0049b799                      ; 0049b777
        ;   XREF to: 0049b799 (CONDITIONAL_JUMP)  ; LAB_0049b799
    TEST EAX,EAX                        ; 0049b779
    JNZ 0x0049b799                      ; 0049b77b
        ;   XREF to: 0049b799 (CONDITIONAL_JUMP)  ; LAB_0049b799
    MOV EDX,dword ptr [EBP + 0x34]      ; 0049b77d
    MOV ECX,dword ptr [EBP + 0x30]      ; 0049b780
    TEST EDX,0x7fffffff                 ; 0049b783
    JNZ 0x0049b799                      ; 0049b789
        ;   XREF to: 0049b799 (CONDITIONAL_JUMP)  ; LAB_0049b799
    TEST ECX,ECX                        ; 0049b78b
    JNZ 0x0049b799                      ; 0049b78d
        ;   XREF to: 0049b799 (CONDITIONAL_JUMP)  ; LAB_0049b799
    FLD double ptr [EBP + 0x20]         ; 0049b78f
    FCHS                                ; 0049b792
    FMUL double ptr [EBP + 0x38]        ; 0049b794
    FSTP float ptr [ESI]                ; 0049b797
    MOV EBX,dword ptr [EBP + 0x24]      ; 0049b799
        ;   Label: LAB_0049b799
    MOV EDI,dword ptr [EBP + 0x20]      ; 0049b79c
    TEST EBX,0x7fffffff                 ; 0049b79f
    JNZ 0x0049b7d9                      ; 0049b7a5
        ;   XREF to: 0049b7d9 (CONDITIONAL_JUMP)  ; LAB_0049b7d9
    TEST EDI,EDI                        ; 0049b7a7
    JNZ 0x0049b7d9                      ; 0049b7a9
        ;   XREF to: 0049b7d9 (CONDITIONAL_JUMP)  ; LAB_0049b7d9
    MOV EAX,dword ptr [EBP + 0x2c]      ; 0049b7ab
    MOV EDX,dword ptr [EBP + 0x28]      ; 0049b7ae
    TEST EAX,0x7fffffff                 ; 0049b7b1
    JNZ 0x0049b7bc                      ; 0049b7b6
        ;   XREF to: 0049b7bc (CONDITIONAL_JUMP)  ; LAB_0049b7bc
    TEST EDX,EDX                        ; 0049b7b8
    JZ 0x0049b7d9                       ; 0049b7ba
        ;   XREF to: 0049b7d9 (CONDITIONAL_JUMP)  ; LAB_0049b7d9
    MOV ECX,dword ptr [EBP + 0x34]      ; 0049b7bc
        ;   Label: LAB_0049b7bc
    MOV EBX,dword ptr [EBP + 0x30]      ; 0049b7bf
    TEST ECX,0x7fffffff                 ; 0049b7c2
    JNZ 0x0049b7d9                      ; 0049b7c8
        ;   XREF to: 0049b7d9 (CONDITIONAL_JUMP)  ; LAB_0049b7d9
    TEST EBX,EBX                        ; 0049b7ca
    JNZ 0x0049b7d9                      ; 0049b7cc
        ;   XREF to: 0049b7d9 (CONDITIONAL_JUMP)  ; LAB_0049b7d9
    FLD double ptr [EBP + 0x28]         ; 0049b7ce
    FCHS                                ; 0049b7d1
    FMUL double ptr [EBP + 0x38]        ; 0049b7d3
    FSTP float ptr [ESI + 0x4]          ; 0049b7d6
    MOV EDI,dword ptr [EBP + 0x24]      ; 0049b7d9
        ;   Label: LAB_0049b7d9
    MOV EAX,dword ptr [EBP + 0x20]      ; 0049b7dc
    TEST EDI,0x7fffffff                 ; 0049b7df
    JNZ 0x0049b80f                      ; 0049b7e5
        ;   XREF to: 0049b80f (CONDITIONAL_JUMP)  ; LAB_0049b80f
    TEST EAX,EAX                        ; 0049b7e7
    JNZ 0x0049b80f                      ; 0049b7e9
        ;   XREF to: 0049b80f (CONDITIONAL_JUMP)  ; LAB_0049b80f
    MOV EDX,dword ptr [EBP + 0x2c]      ; 0049b7eb
    MOV ECX,dword ptr [EBP + 0x28]      ; 0049b7ee
    TEST EDX,0x7fffffff                 ; 0049b7f1
    JNZ 0x0049b80f                      ; 0049b7f7
        ;   XREF to: 0049b80f (CONDITIONAL_JUMP)  ; LAB_0049b80f
    TEST ECX,ECX                        ; 0049b7f9
    JNZ 0x0049b80f                      ; 0049b7fb
        ;   XREF to: 0049b80f (CONDITIONAL_JUMP)  ; LAB_0049b80f
    MOV EBX,dword ptr [EBP + 0x34]      ; 0049b7fd
    MOV EDI,dword ptr [EBP + 0x30]      ; 0049b800
    TEST EBX,0x7fffffff                 ; 0049b803
    JNZ 0x0049b83d                      ; 0049b809
        ;   XREF to: 0049b83d (CONDITIONAL_JUMP)  ; LAB_0049b83d
    TEST EDI,EDI                        ; 0049b80b
    JNZ 0x0049b83d                      ; 0049b80d
        ;   XREF to: 0049b83d (CONDITIONAL_JUMP)  ; LAB_0049b83d
    MOV ESP,EBP                         ; 0049b80f
        ;   Label: LAB_0049b80f
    POP EBP                             ; 0049b811
    POP EDI                             ; 0049b812
    POP ESI                             ; 0049b813
    POP EBX                             ; 0049b814
    RET                                 ; 0049b815
    MOV EAX,0x622e2a                    ; 0049b816 | = "..\\core\\dtri.cpp"
        ;   Label: LAB_0049b816
    MOV EDX,0x457                       ; 0049b81b
    PUSH 0x622e3b                       ; 0049b820 | = "Bad clip!"
    MOV [0x02f0ca48],EAX                ; 0049b825 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 0049b82a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0049b830
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0049b835
    JMP 0x0049b70c                      ; 0049b838
        ;   XREF to: 0049b70c (UNCONDITIONAL_JUMP)  ; LAB_0049b70c
    FLD double ptr [EBP + 0x30]         ; 0049b83d
        ;   Label: LAB_0049b83d
    FCHS                                ; 0049b840
    FMUL double ptr [EBP + 0x38]        ; 0049b842
    FSTP float ptr [ESI + 0x8]          ; 0049b845
    MOV ESP,EBP                         ; 0049b848
    POP EBP                             ; 0049b84a
    POP EDI                             ; 0049b84b
    POP ESI                             ; 0049b84c
    POP EBX                             ; 0049b84d
    RET                                 ; 0049b84e

