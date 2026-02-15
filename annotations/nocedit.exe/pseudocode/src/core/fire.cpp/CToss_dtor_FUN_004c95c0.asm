; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CToss * __cdecl core_fire_cpp_CToss_dtor_FUN_004c95c0(CToss *this_ptr,uint flags)
;
; Parameters:
; CToss *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_box.cpp_CBox_dtor_FUN_0041dd00
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c95c0
        ;   Label: core_fire.cpp_CToss_dtor_FUN_004c95c0
    PUSH 0x0                            ; 004c95c4
    ADD EAX,0x180                       ; 004c95c6
    PUSH EAX                            ; 004c95cb
    CALL core_box.cpp_CBox_dtor_FUN_0041dd00 ; 004c95cc
        ;   XREF to: 0041dd00 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_dtor_FUN_0041dd00(CBox * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004c95d1
    SUB EAX,0x180                       ; 004c95d4
    RET                                 ; 004c95d9

