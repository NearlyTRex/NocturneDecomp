; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorph_addQuadPartToModel_FUN_005b7050(CMorph *this_ptr,int param_2,int param_3,CVector3i *param_4,int param_5,SMRGLHeaderPrimitive *param_6,SMRGLTextureModel *param_7,int *param_8)
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

    PUSH EBX                            ; 005b7050
        ;   Label: core_morph.cpp_CMorph_addQuadPartToModel_FUN_005b7050
    PUSH ESI                            ; 005b7051
    PUSH EDI                            ; 005b7052
    PUSH EBP                            ; 005b7053
    MOV EDX,dword ptr [ESP + 0x30]      ; 005b7054
    PUSH EDX                            ; 005b7058
    MOV ECX,dword ptr [ESP + 0x30]      ; 005b7059
    MOV EBX,dword ptr [ESP + 0x2c]      ; 005b705d
    PUSH ECX                            ; 005b7061
    MOV ESI,dword ptr [ESP + 0x2c]      ; 005b7062
    MOV EDX,dword ptr [ESP + 0x20]      ; 005b7066
    PUSH 0x48                           ; 005b706a
    MOV EDI,dword ptr [ESP + 0x2c]      ; 005b706c
    LEA EAX,[EDX*0x4 + 0x0]             ; 005b7070
    PUSH EBX                            ; 005b7077
    MOV EBP,dword ptr [ESP + 0x2c]      ; 005b7078
    SUB EAX,EDX                         ; 005b707c
    PUSH ESI                            ; 005b707e
    SHL EAX,0x6                         ; 005b707f
    PUSH EDI                            ; 005b7082
    ADD EAX,EDX                         ; 005b7083
    MOV EDX,dword ptr [ESP + 0x2c]      ; 005b7085
    SHL EAX,0x3                         ; 005b7089
    PUSH EBP                            ; 005b708c
    ADD EAX,EDX                         ; 005b708d
    PUSH EAX                            ; 005b708f
    CALL core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_005b6090 ; 005b7090
        ;   XREF to: 005b6090 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_005b6090(CMorphModel * this_ptr, int vertex_count, CVector3i * vertex_data, int poly_count, ...)
    ADD ESP,0x20                        ; 005b7095
    POP EBP                             ; 005b7098
    POP EDI                             ; 005b7099
    POP ESI                             ; 005b709a
    POP EBX                             ; 005b709b
    RET                                 ; 005b709c

