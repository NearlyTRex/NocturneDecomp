; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_skinVertices_FUN_005181a0(CDeformableModel *this_ptr,int lod_index,CMatrix3x4f *bone_matrices,int *output_buffer,SPartInstanceData *part_data)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
; CMatrix3x4f *    Stack[0xc]:4   bone_matrices
; int *            Stack[0x10]:4   output_buffer
; SPartInstanceData * Stack[0x14]:4   part_data
; Local Variables:
; undefined        Stack[-0x54]:1  local_54
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined        Stack[-0x3c]:1  local_3c
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
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50 at 0051da79
;
; Referenced Globals:
;   undefined4 DAT_005a1ea8
;
; Called Functions:
;   core_xform.cpp_transformVector3x4_FUN_0055a8b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005181a0
        ;   Label: core_skeleton.cpp_CDeformableModel_skinVertices_FUN_005181a0
    PUSH ESI                            ; 005181a1
    PUSH EDI                            ; 005181a2
    PUSH EBP                            ; 005181a3
    SUB ESP,0x44                        ; 005181a4
    MOV EAX,dword ptr [ESP + 0x64]      ; 005181a7
    XOR EDX,EDX                         ; 005181ab
    MOV dword ptr [ESP + 0x3c],EAX      ; 005181ad
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005181b1
    MOV dword ptr [ESP + 0x34],EDX      ; 005181b5
    SHL EAX,0x2                         ; 005181b9
    MOV dword ptr [ESP + 0x38],EDX      ; 005181bc
    MOV dword ptr [ESP + 0x30],EAX      ; 005181c0
    MOV EAX,dword ptr [ESP + 0x58]      ; 005181c4
        ;   Label: LAB_005181c4
    ADD EAX,dword ptr [ESP + 0x30]      ; 005181c8
    MOV EBX,dword ptr [ESP + 0x34]      ; 005181cc
    CMP EBX,dword ptr [EAX + 0x2c]      ; 005181d0
    JGE 0x0051830e                      ; 005181d3
        ;   XREF to: 0051830e (CONDITIONAL_JUMP)  ; LAB_0051830e
    MOV EDX,dword ptr [ESP + 0x38]      ; 005181d9
    MOV EAX,dword ptr [EAX + 0x40]      ; 005181dd
    ADD EDX,EAX                         ; 005181e0
    MOV dword ptr [ESP + 0x40],EDX      ; 005181e2
    LEA EBP,[EDX + 0x10]                ; 005181e6
    CMP byte ptr [EDX],0x1              ; 005181e9
    JZ 0x005182cc                       ; 005181ec
        ;   XREF to: 005182cc (CONDITIONAL_JUMP)  ; LAB_005182cc
    MOV EBX,dword ptr [ESP + 0x40]      ; 005181f2
    XOR EDI,EDI                         ; 005181f6
    MOV ESI,dword ptr [ESP + 0x40]      ; 005181f8
    MOV dword ptr [ESP + 0x28],EDI      ; 005181fc
    MOV dword ptr [ESP + 0x24],EDI      ; 00518200
    ADD EBX,0x4                         ; 00518204
    MOV dword ptr [ESP + 0x2c],EDI      ; 00518207
    MOV EDX,dword ptr [ESP + 0x40]      ; 0051820b
        ;   Label: LAB_0051820b
    XOR EAX,EAX                         ; 0051820f
    MOV AL,byte ptr [EDX]               ; 00518211
    CMP EDI,EAX                         ; 00518213
    JGE 0x00518282                      ; 00518215
        ;   XREF to: 00518282 (CONDITIONAL_JUMP)  ; LAB_00518282
    XOR EAX,EAX                         ; 00518217
    MOV AL,byte ptr [ESI + 0x1]         ; 00518219
    IMUL EAX,EAX,0x30                   ; 0051821c
    ADD EAX,dword ptr [ESP + 0x60]      ; 0051821f
    PUSH EAX                            ; 00518223
    PUSH EBP                            ; 00518224
    LEA EAX,[ESP + 0x8]                 ; 00518225
    PUSH EAX                            ; 00518229
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 0051822a
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_0055a8b0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    FLD float ptr [EAX]                 ; 0051822f
    FMUL float ptr [EBX]                ; 00518231
    ADD ESP,0xc                         ; 00518233
    FSTP float ptr [ESP + 0xc]          ; 00518236
    FLD float ptr [EAX + 0x4]           ; 0051823a
    FMUL float ptr [EBX]                ; 0051823d
    FSTP float ptr [ESP + 0x10]         ; 0051823f
    FLD float ptr [EAX + 0x8]           ; 00518243
    FMUL float ptr [EBX]                ; 00518246
    INC ESI                             ; 00518248
    ADD EBX,0x4                         ; 00518249
    INC EDI                             ; 0051824c
    ADD EBP,0xc                         ; 0051824d
    FLD float ptr [ESP + 0x24]          ; 00518250
    FLD float ptr [ESP + 0x28]          ; 00518254
    FLD float ptr [ESP + 0x2c]          ; 00518258
    FXCH ST2                            ; 0051825c
    FADD float ptr [ESP + 0xc]          ; 0051825e
    FXCH                                ; 00518262
    FADD float ptr [ESP + 0x10]         ; 00518264
    FXCH ST3                            ; 00518268
    FSTP float ptr [ESP + 0x14]         ; 0051826a
    FSTP float ptr [ESP + 0x24]         ; 0051826e
    FADD float ptr [ESP + 0x14]         ; 00518272
    FXCH                                ; 00518276
    FSTP float ptr [ESP + 0x28]         ; 00518278
    FSTP float ptr [ESP + 0x2c]         ; 0051827c
    JMP 0x0051820b                      ; 00518280
        ;   XREF to: 0051820b (UNCONDITIONAL_JUMP)  ; LAB_0051820b
    MOV EBX,dword ptr [ESP + 0x3c]      ; 00518282
        ;   Label: LAB_00518282
    LEA EAX,[ESP + 0x24]                ; 00518286
    MOV ESI,dword ptr [ESP + 0x34]      ; 0051828a
    FLD float ptr [EAX]                 ; 0051828e
    FMUL float ptr [0x005a1ea8]         ; 00518290 | DAT_005a1ea8
    FISTP dword ptr [EBX]               ; 00518296
    FLD float ptr [EAX + 0x4]           ; 00518298
    FMUL float ptr [0x005a1ea8]         ; 0051829b | DAT_005a1ea8
    FISTP dword ptr [EBX + 0x4]         ; 005182a1
    FLD float ptr [EAX + 0x8]           ; 005182a4
    FMUL float ptr [0x005a1ea8]         ; 005182a7 | DAT_005a1ea8
    FISTP dword ptr [EBX + 0x8]         ; 005182ad
    LEA ECX,[EBX + 0xc]                 ; 005182b0
    INC ESI                             ; 005182b3
    MOV EBX,dword ptr [ESP + 0x38]      ; 005182b4
    MOV dword ptr [ESP + 0x3c],ECX      ; 005182b8
    ADD EBX,0x34                        ; 005182bc
    MOV dword ptr [ESP + 0x34],ESI      ; 005182bf
    MOV dword ptr [ESP + 0x38],EBX      ; 005182c3
    JMP 0x005181c4                      ; 005182c7
        ;   XREF to: 005181c4 (UNCONDITIONAL_JUMP)  ; LAB_005181c4
    MOV EDX,dword ptr [ESP + 0x40]      ; 005182cc
        ;   Label: LAB_005182cc
    XOR EAX,EAX                         ; 005182d0
    MOV AL,byte ptr [EDX + 0x1]         ; 005182d2
    IMUL EAX,EAX,0x30                   ; 005182d5
    ADD EAX,dword ptr [ESP + 0x60]      ; 005182d8
    PUSH EAX                            ; 005182dc
    PUSH EBP                            ; 005182dd
    LEA EAX,[ESP + 0x20]                ; 005182de
    PUSH EAX                            ; 005182e2
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 005182e3
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_0055a8b0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    MOV EBX,EAX                         ; 005182e8
    LEA EAX,[ESP + 0x30]                ; 005182ea
    ADD ESP,0xc                         ; 005182ee
    CMP EAX,EBX                         ; 005182f1
    JZ 0x00518282                       ; 005182f3
        ;   XREF to: 00518282 (CONDITIONAL_JUMP)  ; LAB_00518282
    MOV EAX,dword ptr [EBX]             ; 005182f5
    MOV dword ptr [ESP + 0x24],EAX      ; 005182f7
    MOV EAX,dword ptr [EBX + 0x4]       ; 005182fb
    MOV dword ptr [ESP + 0x28],EAX      ; 005182fe
    MOV EAX,dword ptr [EBX + 0x8]       ; 00518302
    MOV dword ptr [ESP + 0x2c],EAX      ; 00518305
    JMP 0x00518282                      ; 00518309
        ;   XREF to: 00518282 (UNCONDITIONAL_JUMP)  ; LAB_00518282
    ADD ESP,0x44                        ; 0051830e
        ;   Label: LAB_0051830e
    POP EBP                             ; 00518311
    POP EDI                             ; 00518312
    POP ESI                             ; 00518313
    POP EBX                             ; 00518314
    RET                                 ; 00518315

