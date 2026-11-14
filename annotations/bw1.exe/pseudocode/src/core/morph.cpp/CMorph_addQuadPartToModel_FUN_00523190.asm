; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorph_addQuadPartToModel_FUN_00523190(CMorph *this_ptr,int param_2,int param_3,CVector3i *param_4,int param_5,SMRGLHeaderPrimitive *param_6,SMRGLTextureModel *param_7,int *param_8)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
; int              Stack[0xc]:4   param_3
; CVector3i *      Stack[0x10]:4   param_4
; int              Stack[0x14]:4   param_5
; SMRGLHeaderPrimitive * Stack[0x18]:4   param_6
; SMRGLTextureModel * Stack[0x1c]:4   param_7
; int *            Stack[0x20]:4   param_8
;
; Called Functions:
;   core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_005221d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00523190
        ;   Label: core_morph.cpp_CMorph_addQuadPartToModel_FUN_00523190
    PUSH ESI                            ; 00523191
    PUSH EDI                            ; 00523192
    PUSH EBP                            ; 00523193
    MOV EDX,dword ptr [ESP + 0x30]      ; 00523194
    PUSH EDX                            ; 00523198
    MOV ECX,dword ptr [ESP + 0x30]      ; 00523199
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0052319d
    PUSH ECX                            ; 005231a1
    MOV ESI,dword ptr [ESP + 0x2c]      ; 005231a2
    MOV EDX,dword ptr [ESP + 0x20]      ; 005231a6
    PUSH 0x48                           ; 005231aa
    MOV EDI,dword ptr [ESP + 0x2c]      ; 005231ac
    LEA EAX,[EDX*0x4 + 0x0]             ; 005231b0
    PUSH EBX                            ; 005231b7
    MOV EBP,dword ptr [ESP + 0x2c]      ; 005231b8
    SUB EAX,EDX                         ; 005231bc
    PUSH ESI                            ; 005231be
    SHL EAX,0x6                         ; 005231bf
    PUSH EDI                            ; 005231c2
    ADD EAX,EDX                         ; 005231c3
    MOV EDX,dword ptr [ESP + 0x2c]      ; 005231c5
    SHL EAX,0x3                         ; 005231c9
    PUSH EBP                            ; 005231cc
    ADD EAX,EDX                         ; 005231cd
    PUSH EAX                            ; 005231cf
    CALL core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_005221d0 ; 005231d0
        ;   XREF to: 005221d0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_005221d0(CMorphModel * this_ptr, int vertex_count, CVector3i * vertex_data, int poly_count, ...)
    ADD ESP,0x20                        ; 005231d5
    POP EBP                             ; 005231d8
    POP EDI                             ; 005231d9
    POP ESI                             ; 005231da
    POP EBX                             ; 005231db
    RET                                 ; 005231dc

