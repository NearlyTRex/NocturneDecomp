; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_xform.cpp_quaternionToAxisAngle_FUN_005f7730(CQuaternion4f * quat_ptr, float * angle_out, CVector3f * axis_out)
;
; Parameters:
; CQuaternion4f *  Stack[0x4]:4   quat_ptr
; float *          Stack[0x8]:4   angle_out
; CVector3f *      Stack[0xc]:4   axis_out
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20 at 0059ff5a
;
; Referenced Globals:
;   double g_QuaternionAxisAngleNegativeOne = -1
;   double g_QuaternionAxisAngleDoubler = 2
;
; Called Functions:
;   crt_math.c_acos_FUN_00600162
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f7730
        ;   Label: core_xform.cpp_quaternionToAxisAngle_FUN_005f7730
    PUSH EBP                            ; 005f7731
    MOV EBP,ESP                         ; 005f7732
    SUB ESP,0x18                        ; 005f7734
    AND ESP,0xfffffff8                  ; 005f7737
    MOV ECX,dword ptr [EBP + 0xc]       ; 005f773a
    MOV EBX,dword ptr [EBP + 0x10]      ; 005f773d
    MOV EDX,dword ptr [EBP + 0x14]      ; 005f7740
    TEST EBX,EBX                        ; 005f7743
    JNZ 0x005f777b                      ; 005f7745 | LAB_005f777b
        ;   XREF to: 005f777b (CONDITIONAL_JUMP)
    TEST EDX,EDX                        ; 005f7747
        ;   Label: LAB_005f7747
    JZ 0x005f7776                       ; 005f7749 | LAB_005f7776
        ;   XREF to: 005f7776 (CONDITIONAL_JUMP)
    FLD float ptr [ECX]                 ; 005f774b
    FMUL ST0                            ; 005f774d
    FLD1                                ; 005f774f
    FSUBRP                              ; 005f7751
    FLDZ                                ; 005f7753
    FXCH                                ; 005f7755
    FSTP double ptr [ESP + 0x8]         ; 005f7757
    FCOMP double ptr [ESP + 0x8]        ; 005f775b
    FNSTSW AX                           ; 005f775f
    SAHF                                ; 005f7761
    JC 0x005f77b7                       ; 005f7762 | LAB_005f77b7
        ;   XREF to: 005f77b7 (CONDITIONAL_JUMP)
    MOV dword ptr [EDX + 0x8],0x0       ; 005f7764
    MOV EAX,dword ptr [EDX + 0x8]       ; 005f776b
    MOV dword ptr [EDX + 0x4],EAX       ; 005f776e
    MOV EAX,dword ptr [EDX + 0x4]       ; 005f7771
    MOV dword ptr [EDX],EAX             ; 005f7774
    MOV ESP,EBP                         ; 005f7776
        ;   Label: LAB_005f7776
    POP EBP                             ; 005f7778
    POP EBX                             ; 005f7779
    RET                                 ; 005f777a
    FLD float ptr [ECX]                 ; 005f777b
        ;   Label: LAB_005f777b
    FST double ptr [ESP]                ; 005f777d
    FCOMP double ptr [0x006583ed]       ; 005f7780 | double g_QuaternionAxisAngleNegativeOne
    FNSTSW AX                           ; 005f7786
    SAHF                                ; 005f7788
    JA 0x005f7793                       ; 005f7789 | LAB_005f7793
        ;   XREF to: 005f7793 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX],0x40c90fdb      ; 005f778b
    JMP 0x005f7747                      ; 005f7791 | LAB_005f7747
        ;   XREF to: 005f7747 (UNCONDITIONAL_JUMP)
    FLD1                                ; 005f7793
        ;   Label: LAB_005f7793
    FCOMP double ptr [ESP]              ; 005f7795
    FNSTSW AX                           ; 005f7798
    SAHF                                ; 005f779a
    JA 0x005f77a5                       ; 005f779b | LAB_005f77a5
        ;   XREF to: 005f77a5 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX],0x0             ; 005f779d
    JMP 0x005f7747                      ; 005f77a3 | LAB_005f7747
        ;   XREF to: 005f7747 (UNCONDITIONAL_JUMP)
    FLD double ptr [ESP]                ; 005f77a5
        ;   Label: LAB_005f77a5
    CALL crt_math.c_acos_FUN_00600162   ; 005f77a8 | double crt_math.c_acos_FUN_00600162(double x)
        ;   XREF to: 00600162 (UNCONDITIONAL_CALL)
    FMUL double ptr [0x006583f5]        ; 005f77ad | double g_QuaternionAxisAngleDoubler
    FSTP float ptr [EBX]                ; 005f77b3
    JMP 0x005f7747                      ; 005f77b5 | LAB_005f7747
        ;   XREF to: 005f7747 (UNCONDITIONAL_JUMP)
    FLD double ptr [ESP + 0x8]          ; 005f77b7
        ;   Label: LAB_005f77b7
    FSQRT                               ; 005f77bb
    FLD float ptr [ECX + 0x4]           ; 005f77bd
    FLD1                                ; 005f77c0
    FDIVRP ST2,ST0                      ; 005f77c2
    FMUL ST1                            ; 005f77c4
    FSTP float ptr [EDX]                ; 005f77c6
    FLD float ptr [ECX + 0x8]           ; 005f77c8
    FMUL ST1                            ; 005f77cb
    FSTP float ptr [EDX + 0x4]          ; 005f77cd
    FMUL float ptr [ECX + 0xc]          ; 005f77d0
    FSTP float ptr [EDX + 0x8]          ; 005f77d3
    MOV ESP,EBP                         ; 005f77d6
    POP EBP                             ; 005f77d8
    POP EBX                             ; 005f77d9
    RET                                 ; 005f77da

