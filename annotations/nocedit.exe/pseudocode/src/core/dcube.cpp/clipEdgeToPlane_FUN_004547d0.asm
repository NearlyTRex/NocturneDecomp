; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dcube.cpp_clipEdgeToPlane_FUN_004547d0(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, double plane_ny, double plane_nz, double plane_d)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   vertex1
; CVector3f *      Stack[0x8]:4   vertex2
; CVector3f *      Stack[0xc]:4   output_vertex
; double           Stack[0x10]:8   plane_nx
; double           Stack[0x18]:8   plane_ny
; double           Stack[0x20]:8   plane_nz
; double           Stack[0x28]:8   plane_d
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
;
; XREF[6]:
;   core_dcube.cpp_clipPolygonAgainstMaxX_FUN_00454c40 at 00454d78
;   core_dcube.cpp_clipPolygonAgainstMaxY_FUN_00454970 at 00454aaa
;   core_dcube.cpp_clipPolygonAgainstMaxZ_FUN_00455070 at 004551ae
;   core_dcube.cpp_clipPolygonAgainstMinX_FUN_00454da0 at 00454e80
;   core_dcube.cpp_clipPolygonAgainstMinY_FUN_00454ad0 at 00454c0e
;   core_dcube.cpp_clipPolygonAgainstMinZ_FUN_00454f00 at 00454fe2
;
; Referenced Globals:
;   TerminatedCString s_core_dcube_cpp_0061a4d2
;   TerminatedCString s_Bad_clip_0061a4e4
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004547d0
        ;   Label: core_dcube.cpp_clipEdgeToPlane_FUN_004547d0
    PUSH ESI                            ; 004547d1
    PUSH EDI                            ; 004547d2
    PUSH EBP                            ; 004547d3
    MOV EBP,ESP                         ; 004547d4
    SUB ESP,0x18                        ; 004547d6
    AND ESP,0xfffffff8                  ; 004547d9
    MOV EBX,dword ptr [EBP + 0x14]      ; 004547dc
    MOV EDI,dword ptr [EBP + 0x18]      ; 004547df
    MOV ESI,dword ptr [EBP + 0x1c]      ; 004547e2
    FLD float ptr [EDI + 0x4]           ; 004547e5
    FSUB float ptr [EBX + 0x4]          ; 004547e8
    FMUL double ptr [EBP + 0x28]        ; 004547eb
    FLD float ptr [EDI]                 ; 004547ee
    FSUB float ptr [EBX]                ; 004547f0
    FMUL double ptr [EBP + 0x20]        ; 004547f2
    FADDP                               ; 004547f5
    FLD float ptr [EDI + 0x8]           ; 004547f7
    FSUB float ptr [EBX + 0x8]          ; 004547fa
    FMUL double ptr [EBP + 0x30]        ; 004547fd
    FADDP                               ; 00454800
    FSTP double ptr [ESP]               ; 00454802
    MOV EDX,dword ptr [ESP + 0x4]       ; 00454805
    MOV ECX,dword ptr [ESP]             ; 00454809
    TEST EDX,0x7fffffff                 ; 0045480c
    JNZ 0x0045481c                      ; 00454812 | LAB_0045481c
        ;   XREF to: 0045481c (CONDITIONAL_JUMP)
    TEST ECX,ECX                        ; 00454814
    JZ 0x00454926                       ; 00454816 | LAB_00454926
        ;   XREF to: 00454926 (CONDITIONAL_JUMP)
    FLD float ptr [EBX]                 ; 0045481c
        ;   Label: LAB_0045481c
    FLD double ptr [EBP + 0x20]         ; 0045481e
    FMUL ST1                            ; 00454821
    FADD double ptr [EBP + 0x38]        ; 00454823
    FLD float ptr [EBX + 0x4]           ; 00454826
    FMUL double ptr [EBP + 0x28]        ; 00454829
    FADDP                               ; 0045482c
    FLD float ptr [EBX + 0x8]           ; 0045482e
    FMUL double ptr [EBP + 0x30]        ; 00454831
    FADDP                               ; 00454834
    FLD ST0                             ; 00454836
    FCHS                                ; 00454838
    FDIV double ptr [ESP]               ; 0045483a
    FLD float ptr [EDI]                 ; 0045483d
    FSUB float ptr [EBX]                ; 0045483f
    FXCH                                ; 00454841
    FSTP ST2                            ; 00454843
    FMUL ST1                            ; 00454845
    FADDP ST2,ST0                       ; 00454847
    FXCH                                ; 00454849
    FSTP float ptr [ESI]                ; 0045484b
    FLD float ptr [EDI + 0x4]           ; 0045484d
    FSUB float ptr [EBX + 0x4]          ; 00454850
    FMUL ST1                            ; 00454853
    FADD float ptr [EBX + 0x4]          ; 00454855
    FSTP float ptr [ESI + 0x4]          ; 00454858
    FLD float ptr [EDI + 0x8]           ; 0045485b
    FSUB float ptr [EBX + 0x8]          ; 0045485e
    FMULP                               ; 00454861
    MOV ECX,dword ptr [EBP + 0x24]      ; 00454863
    FADD float ptr [EBX + 0x8]          ; 00454866
    MOV EBX,dword ptr [EBP + 0x20]      ; 00454869
    FSTP float ptr [ESI + 0x8]          ; 0045486c
    TEST ECX,0x7fffffff                 ; 0045486f
    JNZ 0x0045487b                      ; 00454875 | LAB_0045487b
        ;   XREF to: 0045487b (CONDITIONAL_JUMP)
    TEST EBX,EBX                        ; 00454877
    JZ 0x004548a9                       ; 00454879 | LAB_004548a9
        ;   XREF to: 004548a9 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EBP + 0x2c]      ; 0045487b
        ;   Label: LAB_0045487b
    MOV EAX,dword ptr [EBP + 0x28]      ; 0045487e
    TEST EDI,0x7fffffff                 ; 00454881
    JNZ 0x004548a9                      ; 00454887 | LAB_004548a9
        ;   XREF to: 004548a9 (CONDITIONAL_JUMP)
    TEST EAX,EAX                        ; 00454889
    JNZ 0x004548a9                      ; 0045488b | LAB_004548a9
        ;   XREF to: 004548a9 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EBP + 0x34]      ; 0045488d
    MOV ECX,dword ptr [EBP + 0x30]      ; 00454890
    TEST EDX,0x7fffffff                 ; 00454893
    JNZ 0x004548a9                      ; 00454899 | LAB_004548a9
        ;   XREF to: 004548a9 (CONDITIONAL_JUMP)
    TEST ECX,ECX                        ; 0045489b
    JNZ 0x004548a9                      ; 0045489d | LAB_004548a9
        ;   XREF to: 004548a9 (CONDITIONAL_JUMP)
    FLD double ptr [EBP + 0x20]         ; 0045489f
    FCHS                                ; 004548a2
    FMUL double ptr [EBP + 0x38]        ; 004548a4
    FSTP float ptr [ESI]                ; 004548a7
    MOV EBX,dword ptr [EBP + 0x24]      ; 004548a9
        ;   Label: LAB_004548a9
    MOV EDI,dword ptr [EBP + 0x20]      ; 004548ac
    TEST EBX,0x7fffffff                 ; 004548af
    JNZ 0x004548e9                      ; 004548b5 | LAB_004548e9
        ;   XREF to: 004548e9 (CONDITIONAL_JUMP)
    TEST EDI,EDI                        ; 004548b7
    JNZ 0x004548e9                      ; 004548b9 | LAB_004548e9
        ;   XREF to: 004548e9 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x2c]      ; 004548bb
    MOV EDX,dword ptr [EBP + 0x28]      ; 004548be
    TEST EAX,0x7fffffff                 ; 004548c1
    JNZ 0x004548cc                      ; 004548c6 | LAB_004548cc
        ;   XREF to: 004548cc (CONDITIONAL_JUMP)
    TEST EDX,EDX                        ; 004548c8
    JZ 0x004548e9                       ; 004548ca | LAB_004548e9
        ;   XREF to: 004548e9 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EBP + 0x34]      ; 004548cc
        ;   Label: LAB_004548cc
    MOV EBX,dword ptr [EBP + 0x30]      ; 004548cf
    TEST ECX,0x7fffffff                 ; 004548d2
    JNZ 0x004548e9                      ; 004548d8 | LAB_004548e9
        ;   XREF to: 004548e9 (CONDITIONAL_JUMP)
    TEST EBX,EBX                        ; 004548da
    JNZ 0x004548e9                      ; 004548dc | LAB_004548e9
        ;   XREF to: 004548e9 (CONDITIONAL_JUMP)
    FLD double ptr [EBP + 0x28]         ; 004548de
    FCHS                                ; 004548e1
    FMUL double ptr [EBP + 0x38]        ; 004548e3
    FSTP float ptr [ESI + 0x4]          ; 004548e6
    MOV EDI,dword ptr [EBP + 0x24]      ; 004548e9
        ;   Label: LAB_004548e9
    MOV EAX,dword ptr [EBP + 0x20]      ; 004548ec
    TEST EDI,0x7fffffff                 ; 004548ef
    JNZ 0x0045491f                      ; 004548f5 | LAB_0045491f
        ;   XREF to: 0045491f (CONDITIONAL_JUMP)
    TEST EAX,EAX                        ; 004548f7
    JNZ 0x0045491f                      ; 004548f9 | LAB_0045491f
        ;   XREF to: 0045491f (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EBP + 0x2c]      ; 004548fb
    MOV ECX,dword ptr [EBP + 0x28]      ; 004548fe
    TEST EDX,0x7fffffff                 ; 00454901
    JNZ 0x0045491f                      ; 00454907 | LAB_0045491f
        ;   XREF to: 0045491f (CONDITIONAL_JUMP)
    TEST ECX,ECX                        ; 00454909
    JNZ 0x0045491f                      ; 0045490b | LAB_0045491f
        ;   XREF to: 0045491f (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [EBP + 0x34]      ; 0045490d
    MOV EDI,dword ptr [EBP + 0x30]      ; 00454910
    TEST EBX,0x7fffffff                 ; 00454913
    JNZ 0x0045494d                      ; 00454919 | LAB_0045494d
        ;   XREF to: 0045494d (CONDITIONAL_JUMP)
    TEST EDI,EDI                        ; 0045491b
    JNZ 0x0045494d                      ; 0045491d | LAB_0045494d
        ;   XREF to: 0045494d (CONDITIONAL_JUMP)
    MOV ESP,EBP                         ; 0045491f
        ;   Label: LAB_0045491f
    POP EBP                             ; 00454921
    POP EDI                             ; 00454922
    POP ESI                             ; 00454923
    POP EBX                             ; 00454924
    RET                                 ; 00454925
    MOV EAX,0x61a4d2                    ; 00454926 | = "..\\core\\dcube.cpp" | s_core_dcube_cpp_0061a4d2 = ..\core\dcube.cpp
        ;   Label: LAB_00454926
    MOV EDX,0x6e                        ; 0045492b
    PUSH 0x61a4e4                       ; 00454930 | = "Bad clip!" | s_Bad_clip_0061a4e4 = Bad clip!
    MOV [0x02f0ca48],EAX                ; 00454935 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 0045493a | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00454940 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00454945
    JMP 0x0045481c                      ; 00454948 | LAB_0045481c
        ;   XREF to: 0045481c (UNCONDITIONAL_JUMP)
    FLD double ptr [EBP + 0x30]         ; 0045494d
        ;   Label: LAB_0045494d
    FCHS                                ; 00454950
    FMUL double ptr [EBP + 0x38]        ; 00454952
    FSTP float ptr [ESI + 0x8]          ; 00454955
    MOV ESP,EBP                         ; 00454958
    POP EBP                             ; 0045495a
    POP EDI                             ; 0045495b
    POP ESI                             ; 0045495c
    POP EBX                             ; 0045495d
    RET                                 ; 0045495e

