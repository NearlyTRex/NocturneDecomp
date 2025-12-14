; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void * crt_memory.c_copyArrayWithFunction_FUN_006020c2(void * dest, void * source, int count, int element_size, void * copy_func)
;
; Parameters:
; void *           Stack[0x4]:4   dest
; void *           Stack[0x8]:4   source
; int              Stack[0xc]:4   count
; int              Stack[0x10]:4   element_size
; void *           Stack[0x14]:4   copy_func
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   shape_meshlod.cpp_CLodFace_copy2_FUN_0051efe0 at 0051f04a
;   shape_meshlod.cpp_CLodMesh_compactFaces_FUN_0051b570 at 0051b6c1
;   shape_meshlod.cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30 at 0051bf63
;   shape_superopt.cpp_TriListSomething_FUN_005d77a0 at 005d7b27
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 006020c2
        ;   Label: crt_memory.c_copyArrayWithFunction_FUN_006020c2
    PUSH ESI                            ; 006020c3
    PUSH EDI                            ; 006020c4
    PUSH EBP                            ; 006020c5
    SUB ESP,0x4                         ; 006020c6
    MOV EBX,dword ptr [ESP + 0x18]      ; 006020c9
    MOV ESI,dword ptr [ESP + 0x1c]      ; 006020cd
    MOV EDI,dword ptr [ESP + 0x20]      ; 006020d1
    MOV EBP,dword ptr [ESP + 0x24]      ; 006020d5
    MOV dword ptr [ESP],EBX             ; 006020d9
    TEST EDI,EDI                        ; 006020dc
        ;   Label: LAB_006020dc
    JA 0x006020eb                       ; 006020de
        ;   XREF to: 006020eb (CONDITIONAL_JUMP)  ; LAB_006020eb
    MOV EAX,dword ptr [ESP]             ; 006020e0
    ADD ESP,0x4                         ; 006020e3
    POP EBP                             ; 006020e6
    POP EDI                             ; 006020e7
    POP ESI                             ; 006020e8
    POP EBX                             ; 006020e9
    RET                                 ; 006020ea
    PUSH ESI                            ; 006020eb
        ;   Label: LAB_006020eb
    PUSH EBX                            ; 006020ec
    DEC EDI                             ; 006020ed
    CALL dword ptr [ESP + 0x30]         ; 006020ee
    ADD ESI,EBP                         ; 006020f2
    ADD ESP,0x8                         ; 006020f4
    ADD EBX,EBP                         ; 006020f7
    JMP 0x006020dc                      ; 006020f9
        ;   XREF to: 006020dc (UNCONDITIONAL_JUMP)  ; LAB_006020dc

