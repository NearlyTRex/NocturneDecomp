; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStake * __cdecl core_fire_cpp_CStake_ctor_FUN_004a4880(CStake *this_ptr)
;
; Parameters:
; CStake *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_box.cpp_CBox_ctor_FUN_0041ad40
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a4880
        ;   Label: core_fire.cpp_CStake_ctor_FUN_004a4880
    ADD EAX,0x4                         ; 004a4884
    PUSH EAX                            ; 004a4887
    CALL core_box.cpp_CBox_ctor_FUN_0041ad40 ; 004a4888
        ;   XREF to: 0041ad40 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_ctor_FUN_0041ad40(CBox * this_ptr)
    ADD ESP,0x4                         ; 004a488d
    SUB EAX,0x4                         ; 004a4890
    RET                                 ; 004a4893

