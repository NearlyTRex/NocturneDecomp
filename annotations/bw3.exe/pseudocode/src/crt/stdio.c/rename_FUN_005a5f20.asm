; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __watcallStack crt_stdio_c_rename_FUN_005a5f20(char *old_filename,char *new_filename)
;
; Parameters:
; char *           Stack[0x4]:4   old_filename
; char *           Stack[0x8]:4   new_filename
;
; XREF[1]:
;   engine_ini.cpp_CIni_writeProfileString_FUN_004d8640 at 004d8831
;
; Referenced Globals:
;   void* PTR_MoveFileA_005b3600 = 001b407e
;
; Called Functions:
;   crt_unknown.c_FUN_005ab46c
;   MoveFileA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a5f20
        ;   Label: crt_stdio.c_rename_FUN_005a5f20
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a5f21
    PUSH EDX                            ; 005a5f25
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a5f26
    PUSH EBX                            ; 005a5f2a
    CALL dword ptr CS:[0x5b3600]        ; 005a5f2b | PTR_MoveFileA_005b3600
    TEST EAX,EAX                        ; 005a5f32
    JNZ 0x005a5f3d                      ; 005a5f34
        ;   XREF to: 005a5f3d (CONDITIONAL_JUMP)  ; LAB_005a5f3d
    CALL crt_unknown.c_FUN_005ab46c     ; 005a5f36
        ;   XREF to: 005ab46c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ab46c()
    POP EBX                             ; 005a5f3b
    RET                                 ; 005a5f3c
    XOR EAX,EAX                         ; 005a5f3d
        ;   Label: LAB_005a5f3d
    POP EBX                             ; 005a5f3f
    RET                                 ; 005a5f40

