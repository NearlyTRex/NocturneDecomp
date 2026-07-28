; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_skeleton_cpp_CDeformableModel_skinSingleVertex_FUN_00518320(CDeformableModel *this_ptr,CVector3f *output_pos,int lod_index,int vertex_index,CMatrix3x4f *bone_matrices)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   output_pos
; int              Stack[0xc]:4   lod_index
; int              Stack[0x10]:4   vertex_index
; CMatrix3x4f *    Stack[0x14]:4   bone_matrices
; Local Variables:
; undefined        Stack[-0x38]:1  local_38
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_skinSingleVertex_FUN_0051da90 at 0051dab6
;
; Called Functions:
;   core_xform.cpp_transformVector3x4_FUN_0055a8b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00518320
        ;   Label: core_skeleton.cpp_CDeformableModel_skinSingleVertex_FUN_00518320
    PUSH ESI                            ; 00518321
    PUSH EDI                            ; 00518322
    PUSH EBP                            ; 00518323
    SUB ESP,0x28                        ; 00518324
    MOV EAX,dword ptr [ESP + 0x44]      ; 00518327
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0051832b
    SHL EAX,0x2                         ; 0051832f
    MOV EBX,dword ptr [ESP + 0x48]      ; 00518332
    ADD ESI,EAX                         ; 00518336
    LEA EAX,[EBX*0x4 + 0x0]             ; 00518338
    SUB EAX,EBX                         ; 0051833f
    SHL EAX,0x2                         ; 00518341
    ADD EBX,EAX                         ; 00518344
    SHL EBX,0x2                         ; 00518346
    MOV EAX,dword ptr [ESI + 0x40]      ; 00518349
    ADD EAX,EBX                         ; 0051834c
    MOV dword ptr [ESP + 0x24],EAX      ; 0051834e
    MOV DL,byte ptr [EAX]               ; 00518352
    LEA EBP,[EAX + 0x10]                ; 00518354
    CMP DL,0x1                          ; 00518357
    JZ 0x005183a1                       ; 0051835a
        ;   XREF to: 005183a1 (CONDITIONAL_JUMP)  ; LAB_005183a1
    LEA EBX,[EAX + 0x4]                 ; 0051835c
    XOR EDX,EDX                         ; 0051835f
    XOR EDI,EDI                         ; 00518361
    MOV dword ptr [ESP + 0x10],EDX      ; 00518363
    MOV dword ptr [ESP + 0x14],EDX      ; 00518367
    MOV ESI,EAX                         ; 0051836b
    MOV dword ptr [ESP + 0xc],EDX       ; 0051836d
    MOV EDX,dword ptr [ESP + 0x24]      ; 00518371
        ;   Label: LAB_00518371
    XOR EAX,EAX                         ; 00518375
    MOV AL,byte ptr [EDX]               ; 00518377
    CMP EDI,EAX                         ; 00518379
    JL 0x005183c9                       ; 0051837b
        ;   XREF to: 005183c9 (CONDITIONAL_JUMP)  ; LAB_005183c9
    MOV EDX,dword ptr [ESP + 0x40]      ; 0051837d
    MOV EAX,dword ptr [ESP + 0xc]       ; 00518381
    MOV dword ptr [EDX],EAX             ; 00518385
    MOV EAX,dword ptr [ESP + 0x10]      ; 00518387
    MOV dword ptr [EDX + 0x4],EAX       ; 0051838b
    MOV EAX,dword ptr [ESP + 0x14]      ; 0051838e
    MOV dword ptr [EDX + 0x8],EAX       ; 00518392
    MOV EAX,dword ptr [ESP + 0x40]      ; 00518395
        ;   Label: LAB_00518395
    ADD ESP,0x28                        ; 00518399
    POP EBP                             ; 0051839c
    POP EDI                             ; 0051839d
    POP ESI                             ; 0051839e
    POP EBX                             ; 0051839f
    RET                                 ; 005183a0
    XOR EBX,EBX                         ; 005183a1
        ;   Label: LAB_005183a1
    MOV BL,byte ptr [EAX + 0x1]         ; 005183a3
    LEA EAX,[EBX*0x4 + 0x0]             ; 005183a6
    SUB EAX,EBX                         ; 005183ad
    MOV ESI,dword ptr [ESP + 0x4c]      ; 005183af
    SHL EAX,0x4                         ; 005183b3
    ADD EAX,ESI                         ; 005183b6
    PUSH EAX                            ; 005183b8
    PUSH EBP                            ; 005183b9
    MOV EDI,dword ptr [ESP + 0x48]      ; 005183ba
    PUSH EDI                            ; 005183be
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 005183bf
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_0055a8b0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 005183c4
    JMP 0x00518395                      ; 005183c7
        ;   XREF to: 00518395 (UNCONDITIONAL_JUMP)  ; LAB_00518395
    XOR EAX,EAX                         ; 005183c9
        ;   Label: LAB_005183c9
    MOV AL,byte ptr [ESI + 0x1]         ; 005183cb
    IMUL EAX,EAX,0x30                   ; 005183ce
    ADD EAX,dword ptr [ESP + 0x4c]      ; 005183d1
    PUSH EAX                            ; 005183d5
    PUSH EBP                            ; 005183d6
    LEA EAX,[ESP + 0x8]                 ; 005183d7
    PUSH EAX                            ; 005183db
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 005183dc
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_0055a8b0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    FLD float ptr [EAX]                 ; 005183e1
    FMUL float ptr [EBX]                ; 005183e3
    ADD ESP,0xc                         ; 005183e5
    FSTP float ptr [ESP + 0x18]         ; 005183e8
    FLD float ptr [EAX + 0x4]           ; 005183ec
    FMUL float ptr [EBX]                ; 005183ef
    FSTP float ptr [ESP + 0x1c]         ; 005183f1
    FLD float ptr [EAX + 0x8]           ; 005183f5
    FMUL float ptr [EBX]                ; 005183f8
    INC ESI                             ; 005183fa
    ADD EBX,0x4                         ; 005183fb
    INC EDI                             ; 005183fe
    ADD EBP,0xc                         ; 005183ff
    FLD float ptr [ESP + 0xc]           ; 00518402
    FLD float ptr [ESP + 0x10]          ; 00518406
    FLD float ptr [ESP + 0x14]          ; 0051840a
    FXCH ST2                            ; 0051840e
    FADD float ptr [ESP + 0x18]         ; 00518410
    FXCH                                ; 00518414
    FADD float ptr [ESP + 0x1c]         ; 00518416
    FXCH ST3                            ; 0051841a
    FSTP float ptr [ESP + 0x20]         ; 0051841c
    FSTP float ptr [ESP + 0xc]          ; 00518420
    FADD float ptr [ESP + 0x20]         ; 00518424
    FXCH                                ; 00518428
    FSTP float ptr [ESP + 0x10]         ; 0051842a
    FSTP float ptr [ESP + 0x14]         ; 0051842e
    JMP 0x00518371                      ; 00518432
        ;   XREF to: 00518371 (UNCONDITIONAL_JUMP)  ; LAB_00518371

