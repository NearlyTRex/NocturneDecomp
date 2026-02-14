; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_skeleton_cpp_CDeformableModel_skinVertices_FUN_0059a880(CDeformableModel *this_ptr,int lod_index,CMatrix3x4f *bone_matrices,int *output_buffer)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
; CMatrix3x4f *    Stack[0xc]:4   bone_matrices
; int *            Stack[0x10]:4   output_buffer
; Local Variables:
; undefined1       Stack[-0x54]:1  local_54
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined1       Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0 at 005a01f9
;
; Referenced Globals:
;   float FLOAT_00662e98 = 256
;
; Called Functions:
;   core_xform.cpp_transformVector3x4_FUN_005f4dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059a880
        ;   Label: core_skeleton.cpp_CDeformableModel_skinVertices_FUN_0059a880
    PUSH ESI                            ; 0059a881
    PUSH EDI                            ; 0059a882
    PUSH EBP                            ; 0059a883
    SUB ESP,0x44                        ; 0059a884
    MOV EAX,dword ptr [ESP + 0x64]      ; 0059a887
    XOR EDX,EDX                         ; 0059a88b
    MOV dword ptr [ESP + 0x3c],EAX      ; 0059a88d
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0059a891
    MOV dword ptr [ESP + 0x34],EDX      ; 0059a895
    SHL EAX,0x2                         ; 0059a899
    MOV dword ptr [ESP + 0x38],EDX      ; 0059a89c
    MOV dword ptr [ESP + 0x30],EAX      ; 0059a8a0
    MOV EAX,dword ptr [ESP + 0x58]      ; 0059a8a4
        ;   Label: LAB_0059a8a4
    ADD EAX,dword ptr [ESP + 0x30]      ; 0059a8a8
    MOV EBX,dword ptr [ESP + 0x34]      ; 0059a8ac
    CMP EBX,dword ptr [EAX + 0x2c]      ; 0059a8b0
    JGE 0x0059a9ee                      ; 0059a8b3
        ;   XREF to: 0059a9ee (CONDITIONAL_JUMP)  ; LAB_0059a9ee
    MOV EDX,dword ptr [ESP + 0x38]      ; 0059a8b9
    MOV EAX,dword ptr [EAX + 0x40]      ; 0059a8bd
    ADD EDX,EAX                         ; 0059a8c0
    MOV dword ptr [ESP + 0x40],EDX      ; 0059a8c2
    LEA EBP,[EDX + 0x10]                ; 0059a8c6
    CMP byte ptr [EDX],0x1              ; 0059a8c9
    JZ 0x0059a9ac                       ; 0059a8cc
        ;   XREF to: 0059a9ac (CONDITIONAL_JUMP)  ; LAB_0059a9ac
    MOV EBX,dword ptr [ESP + 0x40]      ; 0059a8d2
    XOR EDI,EDI                         ; 0059a8d6
    MOV ESI,dword ptr [ESP + 0x40]      ; 0059a8d8
    MOV dword ptr [ESP + 0x28],EDI      ; 0059a8dc
    MOV dword ptr [ESP + 0x24],EDI      ; 0059a8e0
    ADD EBX,0x4                         ; 0059a8e4
    MOV dword ptr [ESP + 0x2c],EDI      ; 0059a8e7
    MOV EDX,dword ptr [ESP + 0x40]      ; 0059a8eb
        ;   Label: LAB_0059a8eb
    XOR EAX,EAX                         ; 0059a8ef
    MOV AL,byte ptr [EDX]               ; 0059a8f1
    CMP EDI,EAX                         ; 0059a8f3
    JGE 0x0059a962                      ; 0059a8f5
        ;   XREF to: 0059a962 (CONDITIONAL_JUMP)  ; LAB_0059a962
    XOR EAX,EAX                         ; 0059a8f7
    MOV AL,byte ptr [ESI + 0x1]         ; 0059a8f9
    IMUL EAX,EAX,0x30                   ; 0059a8fc
    ADD EAX,dword ptr [ESP + 0x60]      ; 0059a8ff
    PUSH EAX                            ; 0059a903
    PUSH EBP                            ; 0059a904
    LEA EAX,[ESP + 0x8]                 ; 0059a905
    PUSH EAX                            ; 0059a909
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 0059a90a
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    FLD float ptr [EAX]                 ; 0059a90f
    FMUL float ptr [EBX]                ; 0059a911
    ADD ESP,0xc                         ; 0059a913
    FSTP float ptr [ESP + 0xc]          ; 0059a916
    FLD float ptr [EAX + 0x4]           ; 0059a91a
    FMUL float ptr [EBX]                ; 0059a91d
    FSTP float ptr [ESP + 0x10]         ; 0059a91f
    FLD float ptr [EAX + 0x8]           ; 0059a923
    FMUL float ptr [EBX]                ; 0059a926
    INC ESI                             ; 0059a928
    ADD EBX,0x4                         ; 0059a929
    INC EDI                             ; 0059a92c
    ADD EBP,0xc                         ; 0059a92d
    FLD float ptr [ESP + 0x24]          ; 0059a930
    FLD float ptr [ESP + 0x28]          ; 0059a934
    FLD float ptr [ESP + 0x2c]          ; 0059a938
    FXCH ST2                            ; 0059a93c
    FADD float ptr [ESP + 0xc]          ; 0059a93e
    FXCH                                ; 0059a942
    FADD float ptr [ESP + 0x10]         ; 0059a944
    FXCH ST3                            ; 0059a948
    FSTP float ptr [ESP + 0x14]         ; 0059a94a
    FSTP float ptr [ESP + 0x24]         ; 0059a94e
    FADD float ptr [ESP + 0x14]         ; 0059a952
    FXCH                                ; 0059a956
    FSTP float ptr [ESP + 0x28]         ; 0059a958
    FSTP float ptr [ESP + 0x2c]         ; 0059a95c
    JMP 0x0059a8eb                      ; 0059a960
        ;   XREF to: 0059a8eb (UNCONDITIONAL_JUMP)  ; LAB_0059a8eb
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0059a962
        ;   Label: LAB_0059a962
    LEA EAX,[ESP + 0x24]                ; 0059a966
    MOV ESI,dword ptr [ESP + 0x34]      ; 0059a96a
    FLD float ptr [EAX]                 ; 0059a96e
    FMUL float ptr [0x00662e98]         ; 0059a970 | FLOAT_00662e98
    FISTP dword ptr [EBX]               ; 0059a976
    FLD float ptr [EAX + 0x4]           ; 0059a978
    FMUL float ptr [0x00662e98]         ; 0059a97b | FLOAT_00662e98
    FISTP dword ptr [EBX + 0x4]         ; 0059a981
    FLD float ptr [EAX + 0x8]           ; 0059a984
    FMUL float ptr [0x00662e98]         ; 0059a987 | FLOAT_00662e98
    FISTP dword ptr [EBX + 0x8]         ; 0059a98d
    LEA ECX,[EBX + 0xc]                 ; 0059a990
    INC ESI                             ; 0059a993
    MOV EBX,dword ptr [ESP + 0x38]      ; 0059a994
    MOV dword ptr [ESP + 0x3c],ECX      ; 0059a998
    ADD EBX,0x34                        ; 0059a99c
    MOV dword ptr [ESP + 0x34],ESI      ; 0059a99f
    MOV dword ptr [ESP + 0x38],EBX      ; 0059a9a3
    JMP 0x0059a8a4                      ; 0059a9a7
        ;   XREF to: 0059a8a4 (UNCONDITIONAL_JUMP)  ; LAB_0059a8a4
    MOV EDX,dword ptr [ESP + 0x40]      ; 0059a9ac
        ;   Label: LAB_0059a9ac
    XOR EAX,EAX                         ; 0059a9b0
    MOV AL,byte ptr [EDX + 0x1]         ; 0059a9b2
    IMUL EAX,EAX,0x30                   ; 0059a9b5
    ADD EAX,dword ptr [ESP + 0x60]      ; 0059a9b8
    PUSH EAX                            ; 0059a9bc
    PUSH EBP                            ; 0059a9bd
    LEA EAX,[ESP + 0x20]                ; 0059a9be
    PUSH EAX                            ; 0059a9c2
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 0059a9c3
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    MOV EBX,EAX                         ; 0059a9c8
    LEA EAX,[ESP + 0x30]                ; 0059a9ca
    ADD ESP,0xc                         ; 0059a9ce
    CMP EAX,EBX                         ; 0059a9d1
    JZ 0x0059a962                       ; 0059a9d3
        ;   XREF to: 0059a962 (CONDITIONAL_JUMP)  ; LAB_0059a962
    MOV EAX,dword ptr [EBX]             ; 0059a9d5
    MOV dword ptr [ESP + 0x24],EAX      ; 0059a9d7
    MOV EAX,dword ptr [EBX + 0x4]       ; 0059a9db
    MOV dword ptr [ESP + 0x28],EAX      ; 0059a9de
    MOV EAX,dword ptr [EBX + 0x8]       ; 0059a9e2
    MOV dword ptr [ESP + 0x2c],EAX      ; 0059a9e5
    JMP 0x0059a962                      ; 0059a9e9
        ;   XREF to: 0059a962 (UNCONDITIONAL_JUMP)  ; LAB_0059a962
    ADD ESP,0x44                        ; 0059a9ee
        ;   Label: LAB_0059a9ee
    POP EBP                             ; 0059a9f1
    POP EDI                             ; 0059a9f2
    POP ESI                             ; 0059a9f3
    POP EBX                             ; 0059a9f4
    RET                                 ; 0059a9f5

