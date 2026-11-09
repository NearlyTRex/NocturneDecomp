; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_dtrace_cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_0048e7f0(CDemonRaytrace *this_ptr,CVector3f *world_position)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   world_position
;
; XREF[1]:
;   core_setcolid.cpp_CDemonSet_getVoxelHeight_FUN_005572b0 at 005572bd
;
; Referenced Globals:
;   undefined4 DAT_005dbb1c
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_0048afe0
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048e7f0
        ;   Label: core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_0048e7f0
    PUSH ESI                            ; 0048e7f1
    PUSH EDI                            ; 0048e7f2
    PUSH EBP                            ; 0048e7f3
    SUB ESP,0x20                        ; 0048e7f4
    MOV EBX,dword ptr [ESP + 0x34]      ; 0048e7f7
    MOV EDX,dword ptr [ESP + 0x38]      ; 0048e7fb
    FLD float ptr [EDX]                 ; 0048e7ff
    FSUB float ptr [EBX + 0x10]         ; 0048e801
    FDIV float ptr [EBX + 0x28]         ; 0048e804
    FLD float ptr [EDX + 0x4]           ; 0048e807
    FSUB float ptr [EBX + 0x14]         ; 0048e80a
    FDIV float ptr [EBX + 0x2c]         ; 0048e80d
    FLD float ptr [EDX + 0x8]           ; 0048e810
    FSUB float ptr [EBX + 0x18]         ; 0048e813
    FDIV float ptr [EBX + 0x30]         ; 0048e816
    FXCH ST2                            ; 0048e819
    CALL crt_math.c_round_FUN_005c03a0  ; 0048e81b
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0xc]         ; 0048e820
    MOV EAX,dword ptr [ESP + 0xc]       ; 0048e824
    MOV dword ptr [ESP + 0x1c],EAX      ; 0048e828
    FILD dword ptr [ESP + 0x1c]         ; 0048e82c
    FMUL float ptr [EBX + 0x28]         ; 0048e830
    FADD float ptr [EBX + 0x10]         ; 0048e833
    FSUBR float ptr [EDX]               ; 0048e836
    FLD float ptr [0x005dbb1c]          ; 0048e838 | DAT_005dbb1c
    FLD float ptr [EBX + 0x28]          ; 0048e83e
    FMUL ST1                            ; 0048e841
    FDIVP ST2,ST0                       ; 0048e843
    FXCH ST2                            ; 0048e845
    CALL crt_math.c_round_FUN_005c03a0  ; 0048e847
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x14]        ; 0048e84c
    MOV EAX,dword ptr [ESP + 0x14]      ; 0048e850
    MOV dword ptr [ESP + 0x1c],EAX      ; 0048e854
    FILD dword ptr [ESP + 0x1c]         ; 0048e858
    FMUL float ptr [EBX + 0x2c]         ; 0048e85c
    FADD float ptr [EBX + 0x14]         ; 0048e85f
    FSUBR float ptr [EDX + 0x4]         ; 0048e862
    FLD float ptr [EBX + 0x2c]          ; 0048e865
    FMUL ST3                            ; 0048e868
    FDIVP                               ; 0048e86a
    FXCH ST3                            ; 0048e86c
    CALL crt_math.c_round_FUN_005c03a0  ; 0048e86e
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x8]         ; 0048e873
    MOV EAX,dword ptr [ESP + 0x8]       ; 0048e877
    MOV dword ptr [ESP + 0x1c],EAX      ; 0048e87b
    FILD dword ptr [ESP + 0x1c]         ; 0048e87f
    FMUL float ptr [EBX + 0x30]         ; 0048e883
    FADD float ptr [EBX + 0x18]         ; 0048e886
    FSUBR float ptr [EDX + 0x8]         ; 0048e889
    FLD float ptr [EBX + 0x30]          ; 0048e88c
    FMULP ST3                           ; 0048e88f
    FDIVRP ST2,ST0                      ; 0048e891
    CALL crt_math.c_round_FUN_005c03a0  ; 0048e893
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x10]        ; 0048e898
    MOV EDX,dword ptr [ESP + 0x10]      ; 0048e89c
    FXCH                                ; 0048e8a0
    CALL crt_math.c_round_FUN_005c03a0  ; 0048e8a2
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x18]        ; 0048e8a7
    CALL crt_math.c_round_FUN_005c03a0  ; 0048e8ab
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP]               ; 0048e8b0
    TEST EDX,EDX                        ; 0048e8b3
    JL 0x0048e953                       ; 0048e8b5
        ;   XREF to: 0048e953 (CONDITIONAL_JUMP)  ; LAB_0048e953
    MOV ECX,dword ptr [ESP + 0x18]      ; 0048e8bb
    TEST ECX,ECX                        ; 0048e8bf
    JL 0x0048e953                       ; 0048e8c1
        ;   XREF to: 0048e953 (CONDITIONAL_JUMP)  ; LAB_0048e953
    MOV ESI,dword ptr [ESP]             ; 0048e8c7
    TEST ESI,ESI                        ; 0048e8ca
    JL 0x0048e953                       ; 0048e8cc
        ;   XREF to: 0048e953 (CONDITIONAL_JUMP)  ; LAB_0048e953
    CMP EDX,0x8                         ; 0048e8d2
    JGE 0x0048e953                      ; 0048e8d5
        ;   XREF to: 0048e953 (CONDITIONAL_JUMP)  ; LAB_0048e953
    CMP ECX,0x8                         ; 0048e8db
    JGE 0x0048e953                      ; 0048e8de
        ;   XREF to: 0048e953 (CONDITIONAL_JUMP)  ; LAB_0048e953
    CMP ESI,0x8                         ; 0048e8e4
    JGE 0x0048e953                      ; 0048e8e7
        ;   XREF to: 0048e953 (CONDITIONAL_JUMP)  ; LAB_0048e953
    SHL ESI,0x3                         ; 0048e8e9
    MOV EAX,dword ptr [ESP + 0x8]       ; 0048e8ec
        ;   Label: LAB_0048e8ec
    PUSH EAX                            ; 0048e8f0
    MOV EDX,dword ptr [ESP + 0x18]      ; 0048e8f1
    PUSH EDX                            ; 0048e8f5
    MOV ECX,dword ptr [ESP + 0x14]      ; 0048e8f6
    PUSH ECX                            ; 0048e8fa
    PUSH EBX                            ; 0048e8fb
    CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_0048afe0 ; 0048e8fc
        ;   XREF to: 0048afe0 (UNCONDITIONAL_CALL)  ; CDemonCube * core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_0048afe0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z)
    ADD ESP,0x10                        ; 0048e901
    TEST EAX,EAX                        ; 0048e904
    JZ 0x0048e967                       ; 0048e906
        ;   XREF to: 0048e967 (CONDITIONAL_JUMP)  ; LAB_0048e967
    MOV EDI,dword ptr [EAX]             ; 0048e908
    TEST EDI,EDI                        ; 0048e90a
    JZ 0x0048e932                       ; 0048e90c
        ;   XREF to: 0048e932 (CONDITIONAL_JUMP)  ; LAB_0048e932
    MOV EDX,dword ptr [ESP + 0x18]      ; 0048e90e
    MOV EAX,EDI                         ; 0048e912
    ADD EDX,ESI                         ; 0048e914
    MOV DL,byte ptr [EDX + EAX*0x1]     ; 0048e916
    MOV EAX,dword ptr [ESP + 0x10]      ; 0048e919
    AND EDX,0xff                        ; 0048e91d
    MOV AL,byte ptr [EAX + 0x61ab68]    ; 0048e923
    AND EAX,0xff                        ; 0048e929
    TEST EDX,EAX                        ; 0048e92e
    JNZ 0x0048e971                      ; 0048e930
        ;   XREF to: 0048e971 (CONDITIONAL_JUMP)  ; LAB_0048e971
    MOV EBP,dword ptr [ESP + 0x18]      ; 0048e932
        ;   Label: LAB_0048e932
    DEC EBP                             ; 0048e936
    MOV dword ptr [ESP + 0x18],EBP      ; 0048e937
    TEST EBP,EBP                        ; 0048e93b
    JGE 0x0048e8ec                      ; 0048e93d
        ;   XREF to: 0048e8ec (CONDITIONAL_JUMP)  ; LAB_0048e8ec
    MOV ECX,dword ptr [ESP + 0x14]      ; 0048e93f
    MOV EDX,0x7                         ; 0048e943
    DEC ECX                             ; 0048e948
    MOV dword ptr [ESP + 0x18],EDX      ; 0048e949
    MOV dword ptr [ESP + 0x14],ECX      ; 0048e94d
    JMP 0x0048e8ec                      ; 0048e951
        ;   XREF to: 0048e8ec (UNCONDITIONAL_JUMP)  ; LAB_0048e8ec
    MOV dword ptr [ESP + 0x4],0xc479c000 ; 0048e953
        ;   Label: LAB_0048e953
    MOV EAX,dword ptr [ESP + 0x4]       ; 0048e95b
        ;   Label: LAB_0048e95b
    ADD ESP,0x20                        ; 0048e95f
    POP EBP                             ; 0048e962
    POP EDI                             ; 0048e963
    POP ESI                             ; 0048e964
    POP EBX                             ; 0048e965
    RET                                 ; 0048e966
    MOV dword ptr [ESP + 0x4],0xc479f99a ; 0048e967
        ;   Label: LAB_0048e967
    JMP 0x0048e95b                      ; 0048e96f
        ;   XREF to: 0048e95b (UNCONDITIONAL_JUMP)  ; LAB_0048e95b
    MOV EAX,dword ptr [ESP + 0x14]      ; 0048e971
        ;   Label: LAB_0048e971
    MOV dword ptr [ESP + 0x1c],EAX      ; 0048e975
    FILD dword ptr [ESP + 0x1c]         ; 0048e979
    FMUL float ptr [EBX + 0x2c]         ; 0048e97d
    MOV EAX,dword ptr [ESP + 0x18]      ; 0048e980
    FADD float ptr [EBX + 0x14]         ; 0048e984
    MOV dword ptr [ESP + 0x1c],EAX      ; 0048e987
    FILD dword ptr [ESP + 0x1c]         ; 0048e98b
    FMUL float ptr [EBX + 0x2c]         ; 0048e98f
    FMUL float ptr [0x005dbb1c]         ; 0048e992 | DAT_005dbb1c
    FADDP                               ; 0048e998
    FSTP float ptr [ESP + 0x4]          ; 0048e99a
    MOV EAX,dword ptr [ESP + 0x4]       ; 0048e99e
    ADD ESP,0x20                        ; 0048e9a2
    POP EBP                             ; 0048e9a5
    POP EDI                             ; 0048e9a6
    POP ESI                             ; 0048e9a7
    POP EBX                             ; 0048e9a8
    RET                                 ; 0048e9a9

