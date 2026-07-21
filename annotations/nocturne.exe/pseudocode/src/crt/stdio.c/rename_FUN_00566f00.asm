; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_stdio_c_rename_FUN_00566f00(LPCSTR param_1,LPCSTR param_2)
;
;
; XREF[1]:
;   engine_ini.cpp_CIni_writeProfileString_FUN_004bd480 at 004bd671
;
; Referenced Globals:
;   void* PTR_MoveFileA_00575568 = 00175ed4
;
; Called Functions:
;   crt_errno.c___set_errno_FUN_0056c73c
;   MoveFileA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566f00
        ;   Label: crt_stdio.c_rename_FUN_00566f00
    MOV EDX,dword ptr [ESP + 0xc]       ; 00566f01
    PUSH EDX                            ; 00566f05
    MOV EBX,dword ptr [ESP + 0xc]       ; 00566f06
    PUSH EBX                            ; 00566f0a
    CALL dword ptr CS:[0x575568]        ; 00566f0b | PTR_MoveFileA_00575568
    TEST EAX,EAX                        ; 00566f12
    JNZ 0x00566f1d                      ; 00566f14
        ;   XREF to: 00566f1d (CONDITIONAL_JUMP)  ; LAB_00566f1d
    CALL crt_errno.c___set_errno_FUN_0056c73c ; 00566f16
        ;   XREF to: 0056c73c (UNCONDITIONAL_CALL)  ; undefined crt_errno.c___set_errno_FUN_0056c73c()
    POP EBX                             ; 00566f1b
    RET                                 ; 00566f1c
    XOR EAX,EAX                         ; 00566f1d
        ;   Label: LAB_00566f1d
    POP EBX                             ; 00566f1f
    RET                                 ; 00566f20

