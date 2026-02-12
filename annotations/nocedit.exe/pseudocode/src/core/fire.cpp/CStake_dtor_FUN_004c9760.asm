; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CStake * __cdecl core_fire_cpp_CStake_dtor_FUN_004c9760(CStake *this_ptr,uint flags)
;
; Parameters:
; CStake *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_box.cpp_CBox_dtor_FUN_0041dd00
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c9760
        ;   Label: core_fire.cpp_CStake_dtor_FUN_004c9760
    PUSH 0x0                            ; 004c9764
    ADD EAX,0x4                         ; 004c9766
    PUSH EAX                            ; 004c9769
    CALL core_box.cpp_CBox_dtor_FUN_0041dd00 ; 004c976a
        ;   XREF to: 0041dd00 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_dtor_FUN_0041dd00(CBox * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004c976f
    SUB EAX,0x4                         ; 004c9772
    RET                                 ; 004c9775

