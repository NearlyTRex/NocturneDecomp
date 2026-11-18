; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gore_cpp_CGore_findBloodTypeAtPosition_FUN_004c9d80(CGore *this_ptr,CVector3f *position,int *out_blood_type)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; int *            Stack[0xc]:4   out_blood_type
;
; XREF[1]:
;   core_actor.cpp_CDemonActor_handleFootstep_FUN_0040cb60 at 0040cc1c
;
; Referenced Globals:
;   double g_DOUBLE_005d957a = 0.5
;   double g_DOUBLE_005d9582 = 1.33300000000000
;   int g_BloodSplatCount
;   undefined4 g_BloodSplats[0].is_wall_splat
;   undefined4 g_BloodSplats[1].position.x
;   undefined4 g_BloodSplats[1].position.y
;   undefined4 g_BloodSplats[1].position.z
;   undefined4 g_BloodSplats[1].is_wall_splat
;   undefined4 g_BloodSplats[1].blood_type
;   int g_BloodPoolCount
;   undefined4 g_BloodPools[0].position.y
;   undefined4 g_BloodPools[1].position.x
;   undefined4 g_BloodPools[1].position.y
;   undefined4 g_BloodPools[1].position.z
;   undefined4 g_BloodPools[1].blood_type
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c9d80
        ;   Label: core_gore.cpp_CGore_findBloodTypeAtPosition_FUN_004c9d80
    PUSH ESI                            ; 004c9d81
    PUSH EDI                            ; 004c9d82
    PUSH EBP                            ; 004c9d83
    MOV EBP,ESP                         ; 004c9d84
    AND ESP,0xfffffff8                  ; 004c9d86
    MOV ESI,dword ptr [0x01cbcaf8]      ; 004c9d89 | g_BloodSplatCount
    MOV EDI,dword ptr [0x01cdde40]      ; 004c9d8f | g_BloodPoolCount
    MOV ECX,dword ptr [EBP + 0x18]      ; 004c9d95
    XOR EBX,EBX                         ; 004c9d98
    TEST EDI,EDI                        ; 004c9d9a
    JLE 0x004c9dbe                      ; 004c9d9c
        ;   XREF to: 004c9dbe (CONDITIONAL_JUMP)  ; LAB_004c9dbe
    MOV EDX,0x1cdde44                   ; 004c9d9e
    FLD float ptr [ECX + 0x4]           ; 004c9da3
        ;   Label: LAB_004c9da3
    FSUB float ptr [EDX + 0x8]          ; 004c9da6 | g_BloodPools[0].position.y | g_BloodPools[1].position.y
    FABS                                ; 004c9da9
    FCOMP double ptr [0x005d957a]       ; 004c9dab | g_DOUBLE_005d957a
    FNSTSW AX                           ; 004c9db1
    SAHF                                ; 004c9db3
    JBE 0x004c9dee                      ; 004c9db4
        ;   XREF to: 004c9dee (CONDITIONAL_JUMP)  ; LAB_004c9dee
    INC EBX                             ; 004c9db6
        ;   Label: LAB_004c9db6
    ADD EDX,0x28                        ; 004c9db7
    CMP EBX,EDI                         ; 004c9dba
    JL 0x004c9da3                       ; 004c9dbc
        ;   XREF to: 004c9da3 (CONDITIONAL_JUMP)  ; LAB_004c9da3
    XOR EBX,EBX                         ; 004c9dbe
        ;   Label: LAB_004c9dbe
    TEST ESI,ESI                        ; 004c9dc0
    JLE 0x004c9dd7                      ; 004c9dc2
        ;   XREF to: 004c9dd7 (CONDITIONAL_JUMP)  ; LAB_004c9dd7
    MOV EDX,0x1cbcafc                   ; 004c9dc4
    CMP dword ptr [EDX + 0x10],0x0      ; 004c9dc9 | g_BloodSplats[0].is_wall_splat | g_BloodSplats[1].is_wall_splat
        ;   Label: LAB_004c9dc9
    JZ 0x004c9e22                       ; 004c9dcd
        ;   XREF to: 004c9e22 (CONDITIONAL_JUMP)  ; LAB_004c9e22
    INC EBX                             ; 004c9dcf
        ;   Label: LAB_004c9dcf
    ADD EDX,0x44                        ; 004c9dd0
    CMP EBX,ESI                         ; 004c9dd3
    JL 0x004c9dc9                       ; 004c9dd5
        ;   XREF to: 004c9dc9 (CONDITIONAL_JUMP)  ; LAB_004c9dc9
    XOR EDX,EDX                         ; 004c9dd7
        ;   Label: LAB_004c9dd7
    MOV EAX,EDX                         ; 004c9dd9
        ;   Label: LAB_004c9dd9
    MOV dword ptr [0x01cdde40],EDI      ; 004c9ddb | g_BloodPoolCount
    MOV dword ptr [0x01cbcaf8],ESI      ; 004c9de1 | g_BloodSplatCount
    MOV ESP,EBP                         ; 004c9de7
    POP EBP                             ; 004c9de9
    POP EDI                             ; 004c9dea
    POP ESI                             ; 004c9deb
    POP EBX                             ; 004c9dec
    RET                                 ; 004c9ded
    FLD float ptr [ECX]                 ; 004c9dee
        ;   Label: LAB_004c9dee
    FSUB float ptr [EDX + 0x4]          ; 004c9df0 | g_BloodPools[1].position.x
    FABS                                ; 004c9df3
    FCOMP double ptr [0x005d9582]       ; 004c9df5 | g_DOUBLE_005d9582
    FNSTSW AX                           ; 004c9dfb
    SAHF                                ; 004c9dfd
    JA 0x004c9db6                       ; 004c9dfe
        ;   XREF to: 004c9db6 (CONDITIONAL_JUMP)  ; LAB_004c9db6
    FLD float ptr [ECX + 0x8]           ; 004c9e00
    FSUB float ptr [EDX + 0xc]          ; 004c9e03 | g_BloodPools[1].position.z
    FABS                                ; 004c9e06
    FCOMP double ptr [0x005d9582]       ; 004c9e08 | g_DOUBLE_005d9582
    FNSTSW AX                           ; 004c9e0e
    SAHF                                ; 004c9e10
    JA 0x004c9db6                       ; 004c9e11
        ;   XREF to: 004c9db6 (CONDITIONAL_JUMP)  ; LAB_004c9db6
    MOV ECX,dword ptr [EBP + 0x1c]      ; 004c9e13
    MOV EDX,dword ptr [EDX + 0x10]      ; 004c9e16 | g_BloodPools[1].blood_type
    MOV dword ptr [ECX],EDX             ; 004c9e19
    MOV EDX,0x1                         ; 004c9e1b
    JMP 0x004c9dd9                      ; 004c9e20
        ;   XREF to: 004c9dd9 (UNCONDITIONAL_JUMP)  ; LAB_004c9dd9
    FLD float ptr [ECX + 0x4]           ; 004c9e22
        ;   Label: LAB_004c9e22
    FSUB float ptr [EDX + 0x8]          ; 004c9e25 | g_BloodSplats[1].position.y
    FABS                                ; 004c9e28
    FCOMP double ptr [0x005d957a]       ; 004c9e2a | g_DOUBLE_005d957a
    FNSTSW AX                           ; 004c9e30
    SAHF                                ; 004c9e32
    JA 0x004c9dcf                       ; 004c9e33
        ;   XREF to: 004c9dcf (CONDITIONAL_JUMP)  ; LAB_004c9dcf
    FLD float ptr [ECX]                 ; 004c9e35
    FSUB float ptr [EDX + 0x4]          ; 004c9e37 | g_BloodSplats[1].position.x
    FABS                                ; 004c9e3a
    FCOMP double ptr [0x005d957a]       ; 004c9e3c | g_DOUBLE_005d957a
    FNSTSW AX                           ; 004c9e42
    SAHF                                ; 004c9e44
    JA 0x004c9dcf                       ; 004c9e45
        ;   XREF to: 004c9dcf (CONDITIONAL_JUMP)  ; LAB_004c9dcf
    FLD float ptr [ECX + 0x8]           ; 004c9e47
    FSUB float ptr [EDX + 0xc]          ; 004c9e4a | g_BloodSplats[1].position.z
    FABS                                ; 004c9e4d
    FCOMP double ptr [0x005d957a]       ; 004c9e4f | g_DOUBLE_005d957a
    FNSTSW AX                           ; 004c9e55
    SAHF                                ; 004c9e57
    JA 0x004c9dcf                       ; 004c9e58
        ;   XREF to: 004c9dcf (CONDITIONAL_JUMP)  ; LAB_004c9dcf
    MOV ECX,dword ptr [EBP + 0x1c]      ; 004c9e5e
    MOV EDX,dword ptr [EDX + 0x14]      ; 004c9e61 | g_BloodSplats[1].blood_type
    MOV dword ptr [ECX],EDX             ; 004c9e64
    MOV EDX,0x1                         ; 004c9e66
    JMP 0x004c9dd9                      ; 004c9e6b
        ;   XREF to: 004c9dd9 (UNCONDITIONAL_JUMP)  ; LAB_004c9dd9

