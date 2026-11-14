; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorph_addTriPartToModel_FUN_00523140(CMorph *this_ptr,int param_2,int param_3,CVector3i *param_4,int param_5,SMRGLHeaderPrimitive *param_6,SMRGLTextureModel *param_7,int *param_8)
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

    PUSH EBX                            ; 00523140
        ;   Label: core_morph.cpp_CMorph_addTriPartToModel_FUN_00523140
    PUSH ESI                            ; 00523141
    PUSH EDI                            ; 00523142
    PUSH EBP                            ; 00523143
    MOV EDX,dword ptr [ESP + 0x30]      ; 00523144
    PUSH EDX                            ; 00523148
    MOV ECX,dword ptr [ESP + 0x30]      ; 00523149
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0052314d
    PUSH ECX                            ; 00523151
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00523152
    MOV EDX,dword ptr [ESP + 0x20]      ; 00523156
    PUSH 0x3c                           ; 0052315a
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0052315c
    LEA EAX,[EDX*0x4 + 0x0]             ; 00523160
    PUSH EBX                            ; 00523167
    MOV EBP,dword ptr [ESP + 0x2c]      ; 00523168
    SUB EAX,EDX                         ; 0052316c
    PUSH ESI                            ; 0052316e
    SHL EAX,0x6                         ; 0052316f
    PUSH EDI                            ; 00523172
    ADD EAX,EDX                         ; 00523173
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00523175
    SHL EAX,0x3                         ; 00523179
    PUSH EBP                            ; 0052317c
    ADD EAX,EDX                         ; 0052317d
    PUSH EAX                            ; 0052317f
    CALL core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_005221d0 ; 00523180
        ;   XREF to: 005221d0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_005221d0(CMorphModel * this_ptr, int vertex_count, CVector3i * vertex_data, int poly_count, ...)
    ADD ESP,0x20                        ; 00523185
    POP EBP                             ; 00523188
    POP EDI                             ; 00523189
    POP ESI                             ; 0052318a
    POP EBX                             ; 0052318b
    RET                                 ; 0052318c

