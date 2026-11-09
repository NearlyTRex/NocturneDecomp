; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CToss * __cdecl core_fire_cpp_CToss_dtor_FUN_0049ed50(CToss *this_ptr,uint flags)
;
; Parameters:
; CToss *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_box.cpp_CBox_dtor_FUN_005b1c70
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0049ed50
        ;   Label: core_fire.cpp_CToss_dtor_FUN_0049ed50
    PUSH 0x0                            ; 0049ed54
    ADD EAX,0x180                       ; 0049ed56
    PUSH EAX                            ; 0049ed5b
    CALL core_box.cpp_CBox_dtor_FUN_005b1c70 ; 0049ed5c
        ;   XREF to: 005b1c70 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_dtor_FUN_005b1c70(CBox * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0049ed61
    SUB EAX,0x180                       ; 0049ed64
    RET                                 ; 0049ed69

