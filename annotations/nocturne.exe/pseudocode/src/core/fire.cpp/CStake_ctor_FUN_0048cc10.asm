; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStake * __cdecl core_fire_cpp_CStake_ctor_FUN_0048cc10(CStake *this_ptr)
;
; Parameters:
; CStake *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_box.cpp_CBox_ctor_FUN_0041a610
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0048cc10
        ;   Label: core_fire.cpp_CStake_ctor_FUN_0048cc10
    ADD EAX,0x4                         ; 0048cc14
    PUSH EAX                            ; 0048cc17
    CALL core_box.cpp_CBox_ctor_FUN_0041a610 ; 0048cc18
        ;   XREF to: 0041a610 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_ctor_FUN_0041a610(CBox * this_ptr)
    ADD ESP,0x4                         ; 0048cc1d
    SUB EAX,0x4                         ; 0048cc20
    RET                                 ; 0048cc23

