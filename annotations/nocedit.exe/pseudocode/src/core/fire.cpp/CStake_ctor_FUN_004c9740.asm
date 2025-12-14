; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CStake * core_fire.cpp_CStake_ctor_FUN_004c9740(CStake * this_ptr)
;
; Parameters:
; CStake *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_box.cpp_CBox_ctor_FUN_0041dc50
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c9740
        ;   Label: core_fire.cpp_CStake_ctor_FUN_004c9740
    ADD EAX,0x4                         ; 004c9744
    PUSH EAX                            ; 004c9747
    CALL core_box.cpp_CBox_ctor_FUN_0041dc50 ; 004c9748
        ;   XREF to: 0041dc50 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_ctor_FUN_0041dc50(CBox * this_ptr)
    ADD ESP,0x4                         ; 004c974d
    SUB EAX,0x4                         ; 004c9750
    RET                                 ; 004c9753

