; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStake * __cdecl core_fire_cpp_CStake_ctor_FUN_004b77e0(CStake *this_ptr)
;
; Parameters:
; CStake *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_box.cpp_CBox_ctor_FUN_0041da00
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b77e0
        ;   Label: core_fire.cpp_CStake_ctor_FUN_004b77e0
    ADD EAX,0x4                         ; 004b77e4
    PUSH EAX                            ; 004b77e7
    CALL core_box.cpp_CBox_ctor_FUN_0041da00 ; 004b77e8
        ;   XREF to: 0041da00 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_ctor_FUN_0041da00(CBox * this_ptr)
    ADD ESP,0x4                         ; 004b77ed
    SUB EAX,0x4                         ; 004b77f0
    RET                                 ; 004b77f3

