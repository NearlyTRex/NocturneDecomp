; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_snddx_cpp_FUN_00555cb0(undefined4 param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e9bf9
;   undefined4 DAT_0264a5d0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0264a5d0]      ; 00555cb0 | DAT_0264a5d0
        ;   Label: sound_snddx.cpp_FUN_00555cb0
    TEST EDX,EDX                        ; 00555cb6
    JNZ 0x00555cbb                      ; 00555cb8
        ;   XREF to: 00555cbb (CONDITIONAL_JUMP)  ; LAB_00555cbb
    RET                                 ; 00555cba
    FLD float ptr [ESP + 0x8]           ; 00555cbb
        ;   Label: LAB_00555cbb
    FMUL float ptr [0x005e9bf9]         ; 00555cbf | DAT_005e9bf9
    PUSH 0x0                            ; 00555cc5
    MOV EAX,EDX                         ; 00555cc7
    SUB ESP,0x4                         ; 00555cc9
    MOV EDX,dword ptr [EDX]             ; 00555ccc
    FSTP float ptr [ESP]                ; 00555cce
    PUSH EAX                            ; 00555cd1
    CALL dword ptr [EDX + 0x2c]         ; 00555cd2
    RET                                 ; 00555cd5

