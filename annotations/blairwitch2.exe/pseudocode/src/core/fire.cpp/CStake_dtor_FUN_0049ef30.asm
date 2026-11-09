; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStake * __cdecl core_fire_cpp_CStake_dtor_FUN_0049ef30(CStake *this_ptr,uint flags)
;
; Parameters:
; CStake *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_box.cpp_CBox_dtor_FUN_005b1c70
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0049ef30
        ;   Label: core_fire.cpp_CStake_dtor_FUN_0049ef30
    PUSH 0x0                            ; 0049ef34
    ADD EAX,0x4                         ; 0049ef36
    PUSH EAX                            ; 0049ef39
    CALL core_box.cpp_CBox_dtor_FUN_005b1c70 ; 0049ef3a
        ;   XREF to: 005b1c70 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_dtor_FUN_005b1c70(CBox * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0049ef3f
    SUB EAX,0x4                         ; 0049ef42
    RET                                 ; 0049ef45

