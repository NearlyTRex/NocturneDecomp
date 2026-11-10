; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_cloth_cpp_FUN_0043c280(CKeyFramedModel *param_1)
;
;
; XREF[4]:
;   core_cloth.cpp_CClothList_load_FUN_0043f920 at 0043f9b0
;   core_cloth.cpp_CClothList_reset_FUN_0043f9d0 at 0043f9ee
;   core_cloth.cpp_FUN_0043fabe at 0043fb10
;   core_styler.cpp_CStyler_dtor_FUN_0059df60 at 0059df85
;
; Called Functions:
;   core_cloth.cpp_FUN_0043c300
;   core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00460530
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0043c280
        ;   Label: core_cloth.cpp_FUN_0043c280
    PUSH EDX                            ; 0043c284
    CALL core_cloth.cpp_FUN_0043c300    ; 0043c285
        ;   XREF to: 0043c300 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_FUN_0043c300()
    ADD ESP,0x4                         ; 0043c28a
    PUSH 0x1                            ; 0043c28d
    MOV ECX,dword ptr [ESP + 0x8]       ; 0043c28f
    PUSH ECX                            ; 0043c293
    CALL core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00460530 ; 0043c294
        ;   XREF to: 00460530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00460530(CKeyFramedModel * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0043c299
    RET                                 ; 0043c29c

