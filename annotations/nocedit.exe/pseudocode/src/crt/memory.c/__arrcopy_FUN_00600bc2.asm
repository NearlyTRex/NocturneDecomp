; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl crt_memory_c___arrcopy_FUN_00600bc2(void *dest,void *source,int count,WatcomTypeInfo *type_info)
;
; Parameters:
; void *           Stack[0x4]:4   dest
; void *           Stack[0x8]:4   source
; int              Stack[0xc]:4   count
; WatcomTypeInfo * Stack[0x10]:4   type_info
;
; XREF[4]:
;   core_dmodel.cpp_CDemonTriangle_copy_FUN_0047ef10 at 0047ef49
;   core_dmodel.cpp_CKeyFramedModel_sortPolygonsByTexture_FUN_0047a820 at 0047a918
;   shape_meshlod.cpp_CLodFace_copy_FUN_0051ef20 at 0051ef8c
;   shape_meshlod.cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30 at 0051beae
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00600bc2
        ;   Label: crt_memory.c___arrcopy_FUN_00600bc2
    PUSH ESI                            ; 00600bc3
    PUSH EDI                            ; 00600bc4
    PUSH EBP                            ; 00600bc5
    SUB ESP,0x10                        ; 00600bc6
    MOV EBX,dword ptr [ESP + 0x24]      ; 00600bc9
    MOV ESI,dword ptr [ESP + 0x28]      ; 00600bcd
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00600bd1
    MOV EBP,dword ptr [ESP + 0x30]      ; 00600bd5
    MOV dword ptr [ESP + 0x4],EBP       ; 00600bd9
    MOV dword ptr [ESP + 0x8],EBX       ; 00600bdd
    XOR EDX,EDX                         ; 00600be1
    MOV EAX,dword ptr [EBP + 0x8]       ; 00600be3
    MOV dword ptr [ESP],EDX             ; 00600be6
    MOV dword ptr [ESP + 0xc],EAX       ; 00600be9
    MOV EBP,dword ptr [EBP + 0x10]      ; 00600bed
    TEST EDI,EDI                        ; 00600bf0
        ;   Label: LAB_00600bf0
    JA 0x00600c00                       ; 00600bf2
        ;   XREF to: 00600c00 (CONDITIONAL_JUMP)  ; LAB_00600c00
    MOV EAX,dword ptr [ESP + 0x8]       ; 00600bf4
    ADD ESP,0x10                        ; 00600bf8
    POP EBP                             ; 00600bfb
    POP EDI                             ; 00600bfc
    POP ESI                             ; 00600bfd
    POP EBX                             ; 00600bfe
    RET                                 ; 00600bff
    PUSH ESI                            ; 00600c00
        ;   Label: LAB_00600c00
    PUSH EBX                            ; 00600c01
    CALL dword ptr [ESP + 0x14]         ; 00600c02
    ADD ESP,0x8                         ; 00600c06
    DEC EDI                             ; 00600c09
    MOV ECX,dword ptr [ESP]             ; 00600c0a
    ADD ESI,EBP                         ; 00600c0d
    INC ECX                             ; 00600c0f
    ADD EBX,EBP                         ; 00600c10
    MOV dword ptr [ESP],ECX             ; 00600c12
    JMP 0x00600bf0                      ; 00600c15
        ;   XREF to: 00600bf0 (UNCONDITIONAL_JUMP)  ; LAB_00600bf0

