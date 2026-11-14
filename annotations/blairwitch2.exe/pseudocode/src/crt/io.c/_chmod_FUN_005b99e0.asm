; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_io_c__chmod_FUN_005b99e0(char *path,int mode)
;
; Parameters:
; char *           Stack[0x4]:4   path
; int              Stack[0x8]:4   mode
;
; XREF[2]:
;   core_inivar.cpp_readIniData_FUN_004d8d60 at 004d8d73
;   core_main.c_initializeGameSystems_FUN_004e46c0 at 004e4db4
;
; Referenced Globals:
;   void* PTR_SetFileAttributesA_005c8628 = 001c916c
;
; Called Functions:
;   crt_unknown.c_FUN_005c0250
;   crt_unknown.c_FUN_005c036c
;   SetFileAttributesA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b99e0
        ;   Label: crt_io.c__chmod_FUN_005b99e0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005b99e1
    PUSH EDX                            ; 005b99e5
    CALL crt_unknown.c_FUN_005c0250     ; 005b99e6
        ;   XREF to: 005c0250 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0250()
    ADD ESP,0x4                         ; 005b99eb
    CMP EAX,-0x1                        ; 005b99ee
    JNZ 0x005b99fa                      ; 005b99f1
        ;   XREF to: 005b99fa (CONDITIONAL_JUMP)  ; LAB_005b99fa
    CALL crt_unknown.c_FUN_005c036c     ; 005b99f3
        ;   XREF to: 005c036c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c036c()
    POP EBX                             ; 005b99f8
    RET                                 ; 005b99f9
    MOV DL,byte ptr [ESP + 0xc]         ; 005b99fa
        ;   Label: LAB_005b99fa
    AND AL,0xfe                         ; 005b99fe
    TEST DL,0x80                        ; 005b9a00
    JNZ 0x005b9a07                      ; 005b9a03
        ;   XREF to: 005b9a07 (CONDITIONAL_JUMP)  ; LAB_005b9a07
    OR AL,0x1                           ; 005b9a05
    PUSH EAX                            ; 005b9a07
        ;   Label: LAB_005b9a07
    MOV EBX,dword ptr [ESP + 0xc]       ; 005b9a08
    PUSH EBX                            ; 005b9a0c
    CALL dword ptr CS:[0x5c8628]        ; 005b9a0d | PTR_SetFileAttributesA_005c8628
    TEST EAX,EAX                        ; 005b9a14
    JNZ 0x005b9a1f                      ; 005b9a16
        ;   XREF to: 005b9a1f (CONDITIONAL_JUMP)  ; LAB_005b9a1f
    CALL crt_unknown.c_FUN_005c036c     ; 005b9a18
        ;   XREF to: 005c036c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c036c()
    POP EBX                             ; 005b9a1d
    RET                                 ; 005b9a1e
    XOR EAX,EAX                         ; 005b9a1f
        ;   Label: LAB_005b9a1f
    POP EBX                             ; 005b9a21
    RET                                 ; 005b9a22

