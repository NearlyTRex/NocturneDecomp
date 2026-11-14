; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorph_addTriPartToModel_FUN_005b7000(CMorph *this_ptr,int param_2,int param_3,CVector3i *param_4,int param_5,SMRGLHeaderPrimitive *param_6,SMRGLTextureModel *param_7,int *param_8)
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
;   core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_005b6090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b7000
        ;   Label: core_morph.cpp_CMorph_addTriPartToModel_FUN_005b7000
    PUSH ESI                            ; 005b7001
    PUSH EDI                            ; 005b7002
    PUSH EBP                            ; 005b7003
    MOV EDX,dword ptr [ESP + 0x30]      ; 005b7004
    PUSH EDX                            ; 005b7008
    MOV ECX,dword ptr [ESP + 0x30]      ; 005b7009
    MOV EBX,dword ptr [ESP + 0x2c]      ; 005b700d
    PUSH ECX                            ; 005b7011
    MOV ESI,dword ptr [ESP + 0x2c]      ; 005b7012
    MOV EDX,dword ptr [ESP + 0x20]      ; 005b7016
    PUSH 0x3c                           ; 005b701a
    MOV EDI,dword ptr [ESP + 0x2c]      ; 005b701c
    LEA EAX,[EDX*0x4 + 0x0]             ; 005b7020
    PUSH EBX                            ; 005b7027
    MOV EBP,dword ptr [ESP + 0x2c]      ; 005b7028
    SUB EAX,EDX                         ; 005b702c
    PUSH ESI                            ; 005b702e
    SHL EAX,0x6                         ; 005b702f
    PUSH EDI                            ; 005b7032
    ADD EAX,EDX                         ; 005b7033
    MOV EDX,dword ptr [ESP + 0x2c]      ; 005b7035
    SHL EAX,0x3                         ; 005b7039
    PUSH EBP                            ; 005b703c
    ADD EAX,EDX                         ; 005b703d
    PUSH EAX                            ; 005b703f
    CALL core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_005b6090 ; 005b7040
        ;   XREF to: 005b6090 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_005b6090(CMorphModel * this_ptr, int vertex_count, CVector3i * vertex_data, int poly_count, ...)
    ADD ESP,0x20                        ; 005b7045
    POP EBP                             ; 005b7048
    POP EDI                             ; 005b7049
    POP ESI                             ; 005b704a
    POP EBX                             ; 005b704b
    RET                                 ; 005b704c

