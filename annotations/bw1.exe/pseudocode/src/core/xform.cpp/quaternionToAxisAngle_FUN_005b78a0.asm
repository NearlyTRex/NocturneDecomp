; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_quaternionToAxisAngle_FUN_005b78a0(CQuaternion4f *quat_in,float *angle_out,CVector3f *axis_out)
;
; Parameters:
; CQuaternion4f *  Stack[0x4]:4   quat_in
; float *          Stack[0x8]:4   angle_out
; CVector3f *      Stack[0xc]:4   axis_out
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0 at 0056961a
;
; Referenced Globals:
;   undefined4 DAT_005fa16c
;   undefined4 DAT_005fa170
;
; Called Functions:
;   crt_math.c_acos_FUN_005c1d04
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b78a0
        ;   Label: core_xform.cpp_quaternionToAxisAngle_FUN_005b78a0
    PUSH EBP                            ; 005b78a1
    MOV EBP,ESP                         ; 005b78a2
    SUB ESP,0x8                         ; 005b78a4
    AND ESP,0xfffffff8                  ; 005b78a7
    MOV ECX,dword ptr [EBP + 0xc]       ; 005b78aa
    MOV EBX,dword ptr [EBP + 0x10]      ; 005b78ad
    MOV EDX,dword ptr [EBP + 0x14]      ; 005b78b0
    TEST EBX,EBX                        ; 005b78b3
    JZ 0x005b78ca                       ; 005b78b5
        ;   XREF to: 005b78ca (CONDITIONAL_JUMP)  ; LAB_005b78ca
    FLD float ptr [ECX]                 ; 005b78b7
    FCOMP float ptr [0x005fa16c]        ; 005b78b9 | DAT_005fa16c
    FNSTSW AX                           ; 005b78bf
    SAHF                                ; 005b78c1
    JA 0x005b78fc                       ; 005b78c2
        ;   XREF to: 005b78fc (CONDITIONAL_JUMP)  ; LAB_005b78fc
    MOV dword ptr [EBX],0x40c90fdb      ; 005b78c4
    TEST EDX,EDX                        ; 005b78ca
        ;   Label: LAB_005b78ca
    JZ 0x005b78f7                       ; 005b78cc
        ;   XREF to: 005b78f7 (CONDITIONAL_JUMP)  ; LAB_005b78f7
    FLD float ptr [ECX]                 ; 005b78ce
    FMUL ST0                            ; 005b78d0
    FLD1                                ; 005b78d2
    FSUBRP                              ; 005b78d4
    FLDZ                                ; 005b78d6
    FXCH                                ; 005b78d8
    FSTP float ptr [ESP]                ; 005b78da
    FCOMP float ptr [ESP]               ; 005b78dd
    FNSTSW AX                           ; 005b78e0
    SAHF                                ; 005b78e2
    JC 0x005b791d                       ; 005b78e3
        ;   XREF to: 005b791d (CONDITIONAL_JUMP)  ; LAB_005b791d
    MOV dword ptr [EDX + 0x8],0x0       ; 005b78e5
    MOV EAX,dword ptr [EDX + 0x8]       ; 005b78ec
    MOV dword ptr [EDX + 0x4],EAX       ; 005b78ef
    MOV EAX,dword ptr [EDX + 0x4]       ; 005b78f2
    MOV dword ptr [EDX],EAX             ; 005b78f5
    MOV ESP,EBP                         ; 005b78f7
        ;   Label: LAB_005b78f7
    POP EBP                             ; 005b78f9
    POP EBX                             ; 005b78fa
    RET                                 ; 005b78fb
    CMP dword ptr [ECX],0x3f800000      ; 005b78fc
        ;   Label: LAB_005b78fc
    JL 0x005b790c                       ; 005b7902
        ;   XREF to: 005b790c (CONDITIONAL_JUMP)  ; LAB_005b790c
    MOV dword ptr [EBX],0x0             ; 005b7904
    JMP 0x005b78ca                      ; 005b790a
        ;   XREF to: 005b78ca (UNCONDITIONAL_JUMP)  ; LAB_005b78ca
    FLD float ptr [ECX]                 ; 005b790c
        ;   Label: LAB_005b790c
    CALL crt_math.c_acos_FUN_005c1d04   ; 005b790e
        ;   XREF to: 005c1d04 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005c1d04()
    FMUL double ptr [0x005fa170]        ; 005b7913 | DAT_005fa170
    FSTP float ptr [EBX]                ; 005b7919
    JMP 0x005b78ca                      ; 005b791b
        ;   XREF to: 005b78ca (UNCONDITIONAL_JUMP)  ; LAB_005b78ca
    FLD float ptr [ESP]                 ; 005b791d
        ;   Label: LAB_005b791d
    FSQRT                               ; 005b7920
    FLD float ptr [ECX + 0x4]           ; 005b7922
    FLD1                                ; 005b7925
    FDIVRP ST2,ST0                      ; 005b7927
    FMUL ST1                            ; 005b7929
    FSTP float ptr [EDX]                ; 005b792b
    FLD float ptr [ECX + 0x8]           ; 005b792d
    FMUL ST1                            ; 005b7930
    FSTP float ptr [EDX + 0x4]          ; 005b7932
    FMUL float ptr [ECX + 0xc]          ; 005b7935
    FSTP float ptr [EDX + 0x8]          ; 005b7938
    MOV ESP,EBP                         ; 005b793b
    POP EBP                             ; 005b793d
    POP EBX                             ; 005b793e
    RET                                 ; 005b793f

