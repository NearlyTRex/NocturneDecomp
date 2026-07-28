; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_animateFromPartVertexBuffer_FUN_004df740(CMorphModel *this_ptr,int part_index,CVector3i *vertex_buffer)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   part_index
; CVector3i *      Stack[0xc]:4   vertex_buffer
;
; XREF[1]:
;   core_morph.cpp_FUN_004e0300 at 004e0327
;
; Called Functions:
;   core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_004df660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004df740
        ;   Label: core_morph.cpp_CMorphModel_animateFromPartVertexBuffer_FUN_004df740
    PUSH ESI                            ; 004df741
    MOV EDX,dword ptr [ESP + 0xc]       ; 004df742
    MOV ECX,dword ptr [ESP + 0x10]      ; 004df746
    MOV EAX,ECX                         ; 004df74a
    SHL EAX,0x4                         ; 004df74c
    MOV EBX,dword ptr [EDX + EAX*0x1 + 0x4] ; 004df74f
    PUSH EBX                            ; 004df753
    PUSH 0x0                            ; 004df754
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004df756
    PUSH ESI                            ; 004df75a
    PUSH ECX                            ; 004df75b
    PUSH EDX                            ; 004df75c
    CALL core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_004df660 ; 004df75d
        ;   XREF to: 004df660 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_004df660(CMorphModel * this_ptr, int part_index, CVector3i * vertex_buffer, int start_offset, ...)
    ADD ESP,0x14                        ; 004df762
    POP ESI                             ; 004df765
    POP EBX                             ; 004df766
    RET                                 ; 004df767

