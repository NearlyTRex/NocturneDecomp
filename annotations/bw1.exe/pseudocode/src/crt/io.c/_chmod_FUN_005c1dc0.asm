; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_io_c__chmod_FUN_005c1dc0(char *path,int mode)
;
; Parameters:
; char *           Stack[0x4]:4   path
; int              Stack[0x8]:4   mode
;
; XREF[2]:
;   core_inivar.cpp_FUN_004f4f50 at 004f4f63
;   core_main.c_FUN_005032a0 at 005039c4
;
; Referenced Globals:
;   void* PTR_SetFileAttributesA_005d063c = 001d11a8
;
; Called Functions:
;   crt_unknown.c_FUN_005c8510
;   crt_unknown.c_FUN_005c862c
;   SetFileAttributesA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c1dc0
        ;   Label: crt_io.c__chmod_FUN_005c1dc0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005c1dc1
    PUSH EDX                            ; 005c1dc5
    CALL crt_unknown.c_FUN_005c8510     ; 005c1dc6
        ;   XREF to: 005c8510 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c8510()
    ADD ESP,0x4                         ; 005c1dcb
    CMP EAX,-0x1                        ; 005c1dce
    JNZ 0x005c1dda                      ; 005c1dd1
        ;   XREF to: 005c1dda (CONDITIONAL_JUMP)  ; LAB_005c1dda
    CALL crt_unknown.c_FUN_005c862c     ; 005c1dd3
        ;   XREF to: 005c862c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c862c()
    POP EBX                             ; 005c1dd8
    RET                                 ; 005c1dd9
    MOV DL,byte ptr [ESP + 0xc]         ; 005c1dda
        ;   Label: LAB_005c1dda
    AND AL,0xfe                         ; 005c1dde
    TEST DL,0x80                        ; 005c1de0
    JNZ 0x005c1de7                      ; 005c1de3
        ;   XREF to: 005c1de7 (CONDITIONAL_JUMP)  ; LAB_005c1de7
    OR AL,0x1                           ; 005c1de5
    PUSH EAX                            ; 005c1de7
        ;   Label: LAB_005c1de7
    MOV EBX,dword ptr [ESP + 0xc]       ; 005c1de8
    PUSH EBX                            ; 005c1dec
    CALL dword ptr CS:[0x5d063c]        ; 005c1ded | PTR_SetFileAttributesA_005d063c
    TEST EAX,EAX                        ; 005c1df4
    JNZ 0x005c1dff                      ; 005c1df6
        ;   XREF to: 005c1dff (CONDITIONAL_JUMP)  ; LAB_005c1dff
    CALL crt_unknown.c_FUN_005c862c     ; 005c1df8
        ;   XREF to: 005c862c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c862c()
    POP EBX                             ; 005c1dfd
    RET                                 ; 005c1dfe
    XOR EAX,EAX                         ; 005c1dff
        ;   Label: LAB_005c1dff
    POP EBX                             ; 005c1e01
    RET                                 ; 005c1e02

