; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_io_c__chmod_FUN_005a4bd0(char *path,int mode)
;
; Parameters:
; char *           Stack[0x4]:4   path
; int              Stack[0x8]:4   mode
;
; XREF[2]:
;   core_inivar.cpp_readIniData_FUN_004d8e70 at 004d8e83
;   core_main.c_FUN_004e44e0 at 004e4c04
;
; Referenced Globals:
;   void* PTR_SetFileAttributesA_005b363c = 001b41ae
;
; Called Functions:
;   crt_unknown.c_FUN_005ab350
;   crt_unknown.c_FUN_005ab46c
;   SetFileAttributesA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a4bd0
        ;   Label: crt_io.c__chmod_FUN_005a4bd0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a4bd1
    PUSH EDX                            ; 005a4bd5
    CALL crt_unknown.c_FUN_005ab350     ; 005a4bd6
        ;   XREF to: 005ab350 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ab350()
    ADD ESP,0x4                         ; 005a4bdb
    CMP EAX,-0x1                        ; 005a4bde
    JNZ 0x005a4bea                      ; 005a4be1
        ;   XREF to: 005a4bea (CONDITIONAL_JUMP)  ; LAB_005a4bea
    CALL crt_unknown.c_FUN_005ab46c     ; 005a4be3
        ;   XREF to: 005ab46c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ab46c()
    POP EBX                             ; 005a4be8
    RET                                 ; 005a4be9
    MOV DL,byte ptr [ESP + 0xc]         ; 005a4bea
        ;   Label: LAB_005a4bea
    AND AL,0xfe                         ; 005a4bee
    TEST DL,0x80                        ; 005a4bf0
    JNZ 0x005a4bf7                      ; 005a4bf3
        ;   XREF to: 005a4bf7 (CONDITIONAL_JUMP)  ; LAB_005a4bf7
    OR AL,0x1                           ; 005a4bf5
    PUSH EAX                            ; 005a4bf7
        ;   Label: LAB_005a4bf7
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a4bf8
    PUSH EBX                            ; 005a4bfc
    CALL dword ptr CS:[0x5b363c]        ; 005a4bfd | PTR_SetFileAttributesA_005b363c
    TEST EAX,EAX                        ; 005a4c04
    JNZ 0x005a4c0f                      ; 005a4c06
        ;   XREF to: 005a4c0f (CONDITIONAL_JUMP)  ; LAB_005a4c0f
    CALL crt_unknown.c_FUN_005ab46c     ; 005a4c08
        ;   XREF to: 005ab46c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ab46c()
    POP EBX                             ; 005a4c0d
    RET                                 ; 005a4c0e
    XOR EAX,EAX                         ; 005a4c0f
        ;   Label: LAB_005a4c0f
    POP EBX                             ; 005a4c11
    RET                                 ; 005a4c12

