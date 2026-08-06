; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SVert * __cdecl core_skeleton_cpp_SVert_dtor_FUN_0051f860(SVert *this_ptr,uint flags)
;
; Parameters:
; SVert *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_cloth.cpp_CVector3f_arrdtor_FUN_004389e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0051f860
        ;   Label: core_skeleton.cpp_SVert_dtor_FUN_0051f860
    PUSH 0x0                            ; 0051f864
    ADD EAX,0x10                        ; 0051f866
    PUSH EAX                            ; 0051f869
    CALL core_cloth.cpp_CVector3f_arrdtor_FUN_004389e0 ; 0051f86a
        ;   XREF to: 004389e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_cloth.cpp_CVector3f_arrdtor_FUN_004389e0(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0051f86f
    SUB EAX,0x10                        ; 0051f872
    RET                                 ; 0051f875

