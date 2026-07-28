; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_snddx_cpp_isValidSfxHandle_FUN_0052b240(void)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0052b240
        ;   Label: sound_snddx.cpp_isValidSfxHandle_FUN_0052b240
    TEST EAX,EAX                        ; 0052b244
    JLE 0x0052b266                      ; 0052b246
        ;   XREF to: 0052b266 (CONDITIONAL_JUMP)  ; LAB_0052b266
    CMP EAX,0x1f                        ; 0052b248
    JGE 0x0052b266                      ; 0052b24b
        ;   XREF to: 0052b266 (CONDITIONAL_JUMP)  ; LAB_0052b266
    SHL EAX,0x2                         ; 0052b24d
    CMP dword ptr [EAX + 0x2dc92a8],0x0 ; 0052b250
    JZ 0x0052b266                       ; 0052b257
        ;   XREF to: 0052b266 (CONDITIONAL_JUMP)  ; LAB_0052b266
    CMP dword ptr [EAX + 0x2dc9324],0x0 ; 0052b259
    JNZ 0x0052ad4a                      ; 0052b260
        ;   XREF to: 0052ad4a (CONDITIONAL_JUMP)  ; LAB_0052ad4a
    XOR EAX,EAX                         ; 0052b266
        ;   Label: LAB_0052b266
    RET                                 ; 0052b268

