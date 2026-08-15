; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLodFace * __cdecl shape_meshlod_cpp_CLodFace_dtor_FUN_0051efc0(CLodFace *this_ptr,uint flags)
;
; Parameters:
; CLodFace *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_cloth.cpp_CVector3f_arrdtor3_FUN_0043e460
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0051efc0
        ;   Label: shape_meshlod.cpp_CLodFace_dtor_FUN_0051efc0
    PUSH 0x0                            ; 0051efc4
    ADD EAX,0x54                        ; 0051efc6
    PUSH EAX                            ; 0051efc9
    CALL core_cloth.cpp_CVector3f_arrdtor3_FUN_0043e460 ; 0051efca
        ;   XREF to: 0043e460 (UNCONDITIONAL_CALL)  ; CVector3f * core_cloth.cpp_CVector3f_arrdtor3_FUN_0043e460(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0051efcf
    SUB EAX,0x54                        ; 0051efd2
    RET                                 ; 0051efd5

