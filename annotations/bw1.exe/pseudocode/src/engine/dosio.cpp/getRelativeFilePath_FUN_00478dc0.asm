; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_dosio_cpp_getRelativeFilePath_FUN_00478dc0(char *dest_path,char *directory,char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   dest_path
; char *           Stack[0x8]:4   directory
; char *           Stack[0xc]:4   filename
;
; XREF[1]:
;   engine_dosio.cpp_FUN_00478e20 at 00478e30
;
; Referenced Globals:
;   TerminatedCString s_s_s_005daa1e
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00478dc0
        ;   Label: engine_dosio.cpp_getRelativeFilePath_FUN_00478dc0
    PUSH EDI                            ; 00478dc1
    MOV EDI,dword ptr [ESP + 0xc]       ; 00478dc2
    MOV EAX,dword ptr [ESP + 0x10]      ; 00478dc6
    MOV ESI,dword ptr [ESP + 0x14]      ; 00478dca
    TEST EAX,EAX                        ; 00478dce
    JZ 0x00478dea                       ; 00478dd0
        ;   XREF to: 00478dea (CONDITIONAL_JUMP)  ; LAB_00478dea
    CMP byte ptr [EAX],0x0              ; 00478dd2
    JZ 0x00478dea                       ; 00478dd5
        ;   XREF to: 00478dea (CONDITIONAL_JUMP)  ; LAB_00478dea
    PUSH ESI                            ; 00478dd7
    PUSH EAX                            ; 00478dd8
    PUSH 0x5daa1e                       ; 00478dd9 | = "%s\\%s"
    PUSH EDI                            ; 00478dde
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00478ddf
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 00478de4
    POP EDI                             ; 00478de7
    POP ESI                             ; 00478de8
    RET                                 ; 00478de9
    PUSH EDI                            ; 00478dea
        ;   Label: LAB_00478dea
    MOV AL,byte ptr [ESI]               ; 00478deb
        ;   Label: LAB_00478deb
    MOV byte ptr [EDI],AL               ; 00478ded
    CMP AL,0x0                          ; 00478def
    JZ 0x00478e03                       ; 00478df1
        ;   XREF to: 00478e03 (CONDITIONAL_JUMP)  ; LAB_00478e03
    MOV AL,byte ptr [ESI + 0x1]         ; 00478df3
    ADD ESI,0x2                         ; 00478df6
    MOV byte ptr [EDI + 0x1],AL         ; 00478df9
    ADD EDI,0x2                         ; 00478dfc
    CMP AL,0x0                          ; 00478dff
    JNZ 0x00478deb                      ; 00478e01
        ;   XREF to: 00478deb (CONDITIONAL_JUMP)  ; LAB_00478deb
    POP EDI                             ; 00478e03
        ;   Label: LAB_00478e03
    POP EDI                             ; 00478e04
    POP ESI                             ; 00478e05
    RET                                 ; 00478e06

