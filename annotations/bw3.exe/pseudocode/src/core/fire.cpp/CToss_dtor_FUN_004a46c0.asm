; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CToss * __cdecl core_fire_cpp_CToss_dtor_FUN_004a46c0(CToss *this_ptr,uint flags)
;
; Parameters:
; CToss *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_box.cpp_CBox_dtor_FUN_0041adf0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a46c0
        ;   Label: core_fire.cpp_CToss_dtor_FUN_004a46c0
    PUSH 0x0                            ; 004a46c4
    ADD EAX,0x180                       ; 004a46c6
    PUSH EAX                            ; 004a46cb
    CALL core_box.cpp_CBox_dtor_FUN_0041adf0 ; 004a46cc
        ;   XREF to: 0041adf0 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_dtor_FUN_0041adf0(CBox * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a46d1
    SUB EAX,0x180                       ; 004a46d4
    RET                                 ; 004a46d9

