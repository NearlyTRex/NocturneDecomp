; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl engine_dosio_cpp_setReadonlyAttribute_FUN_00565dd0(LPCSTR param_1,byte param_2)
;
;
; XREF[3]:
;   core_inivar.cpp_FUN_004bdb80 at 004bdb93
;   core_main.c_FUN_004c85f0 at 004c8665
;   engine_dosio.cpp_FUN_00456a30 at 00456a49
;
; Referenced Globals:
;   void* PTR_SetFileAttributesA_0057559c = 00175fde
;
; Called Functions:
;   crt_errno.c___set_errno_FUN_0056c73c
;   crt_file.c___getfileattr_FUN_0056cce0
;   SetFileAttributesA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00565dd0
        ;   Label: engine_dosio.cpp_setReadonlyAttribute_FUN_00565dd0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00565dd1
    PUSH EDX                            ; 00565dd5
    CALL crt_file.c___getfileattr_FUN_0056cce0 ; 00565dd6
        ;   XREF to: 0056cce0 (UNCONDITIONAL_CALL)  ; undefined crt_file.c___getfileattr_FUN_0056cce0()
    ADD ESP,0x4                         ; 00565ddb
    CMP EAX,-0x1                        ; 00565dde
    JNZ 0x00565dea                      ; 00565de1
        ;   XREF to: 00565dea (CONDITIONAL_JUMP)  ; LAB_00565dea
    CALL crt_errno.c___set_errno_FUN_0056c73c ; 00565de3
        ;   XREF to: 0056c73c (UNCONDITIONAL_CALL)  ; undefined crt_errno.c___set_errno_FUN_0056c73c()
    POP EBX                             ; 00565de8
    RET                                 ; 00565de9
    MOV DL,byte ptr [ESP + 0xc]         ; 00565dea
        ;   Label: LAB_00565dea
    AND AL,0xfe                         ; 00565dee
    TEST DL,0x80                        ; 00565df0
    JNZ 0x00565df7                      ; 00565df3
        ;   XREF to: 00565df7 (CONDITIONAL_JUMP)  ; LAB_00565df7
    OR AL,0x1                           ; 00565df5
    PUSH EAX                            ; 00565df7
        ;   Label: LAB_00565df7
    MOV EBX,dword ptr [ESP + 0xc]       ; 00565df8
    PUSH EBX                            ; 00565dfc
    CALL dword ptr CS:[0x57559c]        ; 00565dfd | PTR_SetFileAttributesA_0057559c
    TEST EAX,EAX                        ; 00565e04
    JNZ 0x00565e0f                      ; 00565e06
        ;   XREF to: 00565e0f (CONDITIONAL_JUMP)  ; LAB_00565e0f
    CALL crt_errno.c___set_errno_FUN_0056c73c ; 00565e08
        ;   XREF to: 0056c73c (UNCONDITIONAL_CALL)  ; undefined crt_errno.c___set_errno_FUN_0056c73c()
    POP EBX                             ; 00565e0d
    RET                                 ; 00565e0e
    XOR EAX,EAX                         ; 00565e0f
        ;   Label: LAB_00565e0f
    POP EBX                             ; 00565e11
    RET                                 ; 00565e12

