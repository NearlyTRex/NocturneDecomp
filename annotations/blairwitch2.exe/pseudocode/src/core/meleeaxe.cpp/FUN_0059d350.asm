; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_meleeaxe_cpp_FUN_0059d350(void)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
;
; *****************************************************************************

section .text

    PUSH 0x26681e0                      ; 0059d350
        ;   Label: core_meleeaxe.cpp_FUN_0059d350
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80 ; 0059d355
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059d35a
    RET                                 ; 0059d35d

