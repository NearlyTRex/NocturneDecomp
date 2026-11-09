; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStake * __cdecl core_fire_cpp_CStake_dtor_FUN_004b7800(CStake *this_ptr,uint flags)
;
; Parameters:
; CStake *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_box.cpp_CBox_dtor_FUN_0041dab0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b7800
        ;   Label: core_fire.cpp_CStake_dtor_FUN_004b7800
    PUSH 0x0                            ; 004b7804
    ADD EAX,0x4                         ; 004b7806
    PUSH EAX                            ; 004b7809
    CALL core_box.cpp_CBox_dtor_FUN_0041dab0 ; 004b780a
        ;   XREF to: 0041dab0 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_dtor_FUN_0041dab0(CBox * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b780f
    SUB EAX,0x4                         ; 004b7812
    RET                                 ; 004b7815

