; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcube_cpp_clipEdgeToPlane_FUN_00443db0(CVector3f *vertex1,CVector3f *vertex2,CVector3f *output_vertex,double plane_nx,double plane_ny,double plane_nz,double plane_d)
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
; XREF[2]:
;   core_dcube.cpp_clipPolygonAgainstMaxX_FUN_00444220 at 004442fa
;   core_dcube.cpp_clipPolygonAgainstMaxZ_FUN_00444650 at 00444732
;
; Referenced Globals:
;   TerminatedCString s_core_dcube_cpp_005ce7be
;   TerminatedCString s_Bad_clip_005ce7d0
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00443db0
        ;   Label: core_dcube.cpp_clipEdgeToPlane_FUN_00443db0
    PUSH ESI                            ; 00443db1
    PUSH EDI                            ; 00443db2
    PUSH EBP                            ; 00443db3
    MOV EBP,ESP                         ; 00443db4
    SUB ESP,0x18                        ; 00443db6
    AND ESP,0xfffffff8                  ; 00443db9
    MOV EBX,dword ptr [EBP + 0x14]      ; 00443dbc
    MOV EDI,dword ptr [EBP + 0x18]      ; 00443dbf
    MOV ESI,dword ptr [EBP + 0x1c]      ; 00443dc2
    FLD float ptr [EDI + 0x4]           ; 00443dc5
    FSUB float ptr [EBX + 0x4]          ; 00443dc8
    FMUL double ptr [EBP + 0x28]        ; 00443dcb
    FLD float ptr [EDI]                 ; 00443dce
    FSUB float ptr [EBX]                ; 00443dd0
    FMUL double ptr [EBP + 0x20]        ; 00443dd2
    FADDP                               ; 00443dd5
    FLD float ptr [EDI + 0x8]           ; 00443dd7
    FSUB float ptr [EBX + 0x8]          ; 00443dda
    FMUL double ptr [EBP + 0x30]        ; 00443ddd
    FADDP                               ; 00443de0
    FSTP double ptr [ESP]               ; 00443de2
    MOV EDX,dword ptr [ESP + 0x4]       ; 00443de5
    MOV ECX,dword ptr [ESP]             ; 00443de9
    TEST EDX,0x7fffffff                 ; 00443dec
    JNZ 0x00443dfc                      ; 00443df2
        ;   XREF to: 00443dfc (CONDITIONAL_JUMP)  ; LAB_00443dfc
    TEST ECX,ECX                        ; 00443df4
    JZ 0x00443f06                       ; 00443df6
        ;   XREF to: 00443f06 (CONDITIONAL_JUMP)  ; LAB_00443f06
    FLD float ptr [EBX]                 ; 00443dfc
        ;   Label: LAB_00443dfc
    FLD double ptr [EBP + 0x20]         ; 00443dfe
    FMUL ST1                            ; 00443e01
    FADD double ptr [EBP + 0x38]        ; 00443e03
    FLD float ptr [EBX + 0x4]           ; 00443e06
    FMUL double ptr [EBP + 0x28]        ; 00443e09
    FADDP                               ; 00443e0c
    FLD float ptr [EBX + 0x8]           ; 00443e0e
    FMUL double ptr [EBP + 0x30]        ; 00443e11
    FADDP                               ; 00443e14
    FLD ST0                             ; 00443e16
    FCHS                                ; 00443e18
    FDIV double ptr [ESP]               ; 00443e1a
    FLD float ptr [EDI]                 ; 00443e1d
    FSUB float ptr [EBX]                ; 00443e1f
    FXCH                                ; 00443e21
    FSTP ST2                            ; 00443e23
    FMUL ST1                            ; 00443e25
    FADDP ST2,ST0                       ; 00443e27
    FXCH                                ; 00443e29
    FSTP float ptr [ESI]                ; 00443e2b
    FLD float ptr [EDI + 0x4]           ; 00443e2d
    FSUB float ptr [EBX + 0x4]          ; 00443e30
    FMUL ST1                            ; 00443e33
    FADD float ptr [EBX + 0x4]          ; 00443e35
    FSTP float ptr [ESI + 0x4]          ; 00443e38
    FLD float ptr [EDI + 0x8]           ; 00443e3b
    FSUB float ptr [EBX + 0x8]          ; 00443e3e
    FMULP                               ; 00443e41
    MOV ECX,dword ptr [EBP + 0x24]      ; 00443e43
    FADD float ptr [EBX + 0x8]          ; 00443e46
    MOV EBX,dword ptr [EBP + 0x20]      ; 00443e49
    FSTP float ptr [ESI + 0x8]          ; 00443e4c
    TEST ECX,0x7fffffff                 ; 00443e4f
    JNZ 0x00443e5b                      ; 00443e55
        ;   XREF to: 00443e5b (CONDITIONAL_JUMP)  ; LAB_00443e5b
    TEST EBX,EBX                        ; 00443e57
    JZ 0x00443e89                       ; 00443e59
        ;   XREF to: 00443e89 (CONDITIONAL_JUMP)  ; LAB_00443e89
    MOV EDI,dword ptr [EBP + 0x2c]      ; 00443e5b
        ;   Label: LAB_00443e5b
    MOV EAX,dword ptr [EBP + 0x28]      ; 00443e5e
    TEST EDI,0x7fffffff                 ; 00443e61
    JNZ 0x00443e89                      ; 00443e67
        ;   XREF to: 00443e89 (CONDITIONAL_JUMP)  ; LAB_00443e89
    TEST EAX,EAX                        ; 00443e69
    JNZ 0x00443e89                      ; 00443e6b
        ;   XREF to: 00443e89 (CONDITIONAL_JUMP)  ; LAB_00443e89
    MOV EDX,dword ptr [EBP + 0x34]      ; 00443e6d
    MOV ECX,dword ptr [EBP + 0x30]      ; 00443e70
    TEST EDX,0x7fffffff                 ; 00443e73
    JNZ 0x00443e89                      ; 00443e79
        ;   XREF to: 00443e89 (CONDITIONAL_JUMP)  ; LAB_00443e89
    TEST ECX,ECX                        ; 00443e7b
    JNZ 0x00443e89                      ; 00443e7d
        ;   XREF to: 00443e89 (CONDITIONAL_JUMP)  ; LAB_00443e89
    FLD double ptr [EBP + 0x20]         ; 00443e7f
    FCHS                                ; 00443e82
    FMUL double ptr [EBP + 0x38]        ; 00443e84
    FSTP float ptr [ESI]                ; 00443e87
    MOV EBX,dword ptr [EBP + 0x24]      ; 00443e89
        ;   Label: LAB_00443e89
    MOV EDI,dword ptr [EBP + 0x20]      ; 00443e8c
    TEST EBX,0x7fffffff                 ; 00443e8f
    JNZ 0x00443ec9                      ; 00443e95
        ;   XREF to: 00443ec9 (CONDITIONAL_JUMP)  ; LAB_00443ec9
    TEST EDI,EDI                        ; 00443e97
    JNZ 0x00443ec9                      ; 00443e99
        ;   XREF to: 00443ec9 (CONDITIONAL_JUMP)  ; LAB_00443ec9
    MOV EAX,dword ptr [EBP + 0x2c]      ; 00443e9b
    MOV EDX,dword ptr [EBP + 0x28]      ; 00443e9e
    TEST EAX,0x7fffffff                 ; 00443ea1
    JNZ 0x00443eac                      ; 00443ea6
        ;   XREF to: 00443eac (CONDITIONAL_JUMP)  ; LAB_00443eac
    TEST EDX,EDX                        ; 00443ea8
    JZ 0x00443ec9                       ; 00443eaa
        ;   XREF to: 00443ec9 (CONDITIONAL_JUMP)  ; LAB_00443ec9
    MOV ECX,dword ptr [EBP + 0x34]      ; 00443eac
        ;   Label: LAB_00443eac
    MOV EBX,dword ptr [EBP + 0x30]      ; 00443eaf
    TEST ECX,0x7fffffff                 ; 00443eb2
    JNZ 0x00443ec9                      ; 00443eb8
        ;   XREF to: 00443ec9 (CONDITIONAL_JUMP)  ; LAB_00443ec9
    TEST EBX,EBX                        ; 00443eba
    JNZ 0x00443ec9                      ; 00443ebc
        ;   XREF to: 00443ec9 (CONDITIONAL_JUMP)  ; LAB_00443ec9
    FLD double ptr [EBP + 0x28]         ; 00443ebe
    FCHS                                ; 00443ec1
    FMUL double ptr [EBP + 0x38]        ; 00443ec3
    FSTP float ptr [ESI + 0x4]          ; 00443ec6
    MOV EDI,dword ptr [EBP + 0x24]      ; 00443ec9
        ;   Label: LAB_00443ec9
    MOV EAX,dword ptr [EBP + 0x20]      ; 00443ecc
    TEST EDI,0x7fffffff                 ; 00443ecf
    JNZ 0x00443eff                      ; 00443ed5
        ;   XREF to: 00443eff (CONDITIONAL_JUMP)  ; LAB_00443eff
    TEST EAX,EAX                        ; 00443ed7
    JNZ 0x00443eff                      ; 00443ed9
        ;   XREF to: 00443eff (CONDITIONAL_JUMP)  ; LAB_00443eff
    MOV EDX,dword ptr [EBP + 0x2c]      ; 00443edb
    MOV ECX,dword ptr [EBP + 0x28]      ; 00443ede
    TEST EDX,0x7fffffff                 ; 00443ee1
    JNZ 0x00443eff                      ; 00443ee7
        ;   XREF to: 00443eff (CONDITIONAL_JUMP)  ; LAB_00443eff
    TEST ECX,ECX                        ; 00443ee9
    JNZ 0x00443eff                      ; 00443eeb
        ;   XREF to: 00443eff (CONDITIONAL_JUMP)  ; LAB_00443eff
    MOV EBX,dword ptr [EBP + 0x34]      ; 00443eed
    MOV EDI,dword ptr [EBP + 0x30]      ; 00443ef0
    TEST EBX,0x7fffffff                 ; 00443ef3
    JNZ 0x00443f2d                      ; 00443ef9
        ;   XREF to: 00443f2d (CONDITIONAL_JUMP)  ; LAB_00443f2d
    TEST EDI,EDI                        ; 00443efb
    JNZ 0x00443f2d                      ; 00443efd
        ;   XREF to: 00443f2d (CONDITIONAL_JUMP)  ; LAB_00443f2d
    MOV ESP,EBP                         ; 00443eff
        ;   Label: LAB_00443eff
    POP EBP                             ; 00443f01
    POP EDI                             ; 00443f02
    POP ESI                             ; 00443f03
    POP EBX                             ; 00443f04
    RET                                 ; 00443f05
    MOV EAX,0x5ce7be                    ; 00443f06 | = "..\\core\\dcube.cpp"
        ;   Label: LAB_00443f06
    MOV EDX,0x6e                        ; 00443f0b
    PUSH 0x5ce7d0                       ; 00443f10 | = "Bad clip!"
    MOV [0x01d046a0],EAX                ; 00443f15 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 00443f1a | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00443f20
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00443f25
    JMP 0x00443dfc                      ; 00443f28
        ;   XREF to: 00443dfc (UNCONDITIONAL_JUMP)  ; LAB_00443dfc
    FLD double ptr [EBP + 0x30]         ; 00443f2d
        ;   Label: LAB_00443f2d
    FCHS                                ; 00443f30
    FMUL double ptr [EBP + 0x38]        ; 00443f32
    FSTP float ptr [ESI + 0x8]          ; 00443f35
    MOV ESP,EBP                         ; 00443f38
    POP EBP                             ; 00443f3a
    POP EDI                             ; 00443f3b
    POP ESI                             ; 00443f3c
    POP EBX                             ; 00443f3d
    RET                                 ; 00443f3e

