; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStake * __cdecl core_fire_cpp_CStake_dtor_FUN_004a48a0(CStake *this_ptr,uint flags)
;
; Parameters:
; CStake *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_box.cpp_CBox_dtor_FUN_0041adf0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a48a0
        ;   Label: core_fire.cpp_CStake_dtor_FUN_004a48a0
    PUSH 0x0                            ; 004a48a4
    ADD EAX,0x4                         ; 004a48a6
    PUSH EAX                            ; 004a48a9
    CALL core_box.cpp_CBox_dtor_FUN_0041adf0 ; 004a48aa
        ;   XREF to: 0041adf0 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_dtor_FUN_0041adf0(CBox * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a48af
    SUB EAX,0x4                         ; 004a48b2
    RET                                 ; 004a48b5

