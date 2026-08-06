; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_initVertexWRecip_FUN_005184b0(CDeformableModel *this_ptr,int lod_index,CVector3i *lod_vertices)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
; CVector3i *      Stack[0xc]:4   lod_vertices
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_skinAndInitWRecip_FUN_0051db70 at 0051db9a
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01c038f4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005184b0
        ;   Label: core_skeleton.cpp_CDeformableModel_initVertexWRecip_FUN_005184b0
    PUSH ESI                            ; 005184b1
    PUSH EDI                            ; 005184b2
    PUSH EBP                            ; 005184b3
    MOV EDI,dword ptr [0x005ae704]      ; 005184b4 | g_CDemonRenderer_PTR_005ae704
    MOV EBP,dword ptr [0x01c038f4]      ; 005184ba | DAT_01c038f4
    MOV ESI,dword ptr [ESP + 0x18]      ; 005184c0
    MOV ECX,dword ptr [ESP + 0x14]      ; 005184c4
    SHL ESI,0x2                         ; 005184c8
    ADD ESI,ECX                         ; 005184cb
    XOR EAX,EAX                         ; 005184cd
    MOV EBX,dword ptr [ESI + 0x2c]      ; 005184cf
    XOR EDX,EDX                         ; 005184d2
    TEST EBX,EBX                        ; 005184d4
    JLE 0x005184f0                      ; 005184d6
        ;   XREF to: 005184f0 (CONDITIONAL_JUMP)  ; LAB_005184f0
    MOV ECX,dword ptr [EDI]             ; 005184d8 | DAT_01b4d738
        ;   Label: LAB_005184d8
    MOV dword ptr [ECX + EAX*0x1 + 0x2c],EBP ; 005184da
    INC EDX                             ; 005184de
    MOV ECX,dword ptr [ESI + 0x2c]      ; 005184df
    ADD EAX,0x30                        ; 005184e2
    CMP EDX,ECX                         ; 005184e5
    JL 0x005184d8                       ; 005184e7
        ;   XREF to: 005184d8 (CONDITIONAL_JUMP)  ; LAB_005184d8
    LEA EAX,[EAX]                       ; 005184e9
    NOP                                 ; 005184ef
    MOV dword ptr [0x01c038f4],EBP      ; 005184f0 | DAT_01c038f4
        ;   Label: LAB_005184f0
    MOV dword ptr [0x005ae704],EDI      ; 005184f6 | g_CDemonRenderer_PTR_005ae704
    POP EBP                             ; 005184fc
    POP EDI                             ; 005184fd
    POP ESI                             ; 005184fe
    POP EBX                             ; 005184ff
    RET                                 ; 00518500

