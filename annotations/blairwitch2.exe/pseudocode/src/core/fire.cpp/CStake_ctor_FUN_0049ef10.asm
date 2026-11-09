; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStake * __cdecl core_fire_cpp_CStake_ctor_FUN_0049ef10(CStake *this_ptr)
;
; Parameters:
; CStake *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_box.cpp_CBox_ctor_FUN_005b1bc0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0049ef10
        ;   Label: core_fire.cpp_CStake_ctor_FUN_0049ef10
    ADD EAX,0x4                         ; 0049ef14
    PUSH EAX                            ; 0049ef17
    CALL core_box.cpp_CBox_ctor_FUN_005b1bc0 ; 0049ef18
        ;   XREF to: 005b1bc0 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_ctor_FUN_005b1bc0(CBox * this_ptr)
    ADD ESP,0x4                         ; 0049ef1d
    SUB EAX,0x4                         ; 0049ef20
    RET                                 ; 0049ef23

