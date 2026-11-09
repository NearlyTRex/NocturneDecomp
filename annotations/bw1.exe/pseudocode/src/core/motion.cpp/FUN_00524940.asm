; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_motion_cpp_FUN_00524940(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    MOV EDX,0x5eaef3                    ; 00524940
        ;   Label: core_motion.cpp_FUN_00524940
    MOV ECX,0x30e                       ; 00524945
    PUSH 0x5eaf06                       ; 0052494a
    MOV dword ptr [0x01d1d400],EDX      ; 0052494f | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00524955 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0052495b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00524960
    XOR EAX,EAX                         ; 00524963
    RET                                 ; 00524965

