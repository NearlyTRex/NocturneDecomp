; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_env_c___env_compare_FUN_10010cf0(char *s1,char *s2,int len)
;
; Parameters:
; char *           Stack[0x4]:4   s1
; char *           Stack[0x8]:4   s2
; int              Stack[0xc]:4   len
;
; XREF[2]:
;   crt_env.c_findenv_FUN_100115b0 at 100115cb
;   crt_env.c_getenv_FUN_10010c50 at 10010cbe
;
; Referenced Globals:
;   undefined4 DAT_10016edc
;   undefined4 DAT_10016ee0
;
; Called Functions:
;   crt_locale.c___crtCompareStringA_FUN_10011040
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0xc]       ; 10010cf0
        ;   Label: crt_env.c___env_compare_FUN_10010cf0
    TEST ECX,ECX                        ; 10010cf4
    JNZ 0x10010cfb                      ; 10010cf6
        ;   XREF to: 10010cfb (CONDITIONAL_JUMP)  ; LAB_10010cfb
    XOR EAX,EAX                         ; 10010cf8
    RET                                 ; 10010cfa
    MOV EAX,[0x10016edc]                ; 10010cfb | DAT_10016edc
        ;   Label: LAB_10010cfb
    MOV EDX,dword ptr [ESP + 0x8]       ; 10010d00
    PUSH EAX                            ; 10010d04
    PUSH ECX                            ; 10010d05
    PUSH EDX                            ; 10010d06
    MOV EAX,[0x10016ee0]                ; 10010d07 | DAT_10016ee0
    PUSH ECX                            ; 10010d0c
    MOV ECX,dword ptr [ESP + 0x14]      ; 10010d0d
    PUSH ECX                            ; 10010d11
    PUSH 0x1                            ; 10010d12
    PUSH EAX                            ; 10010d14
    CALL crt_locale.c___crtCompareStringA_FUN_10011040 ; 10010d15
        ;   XREF to: 10011040 (UNCONDITIONAL_CALL)  ; int crt_locale.c___crtCompareStringA_FUN_10011040(LCID lcid, DWORD flags, LPCSTR str1, int cch1, ...)
    ADD ESP,0x1c                        ; 10010d1a
    TEST EAX,EAX                        ; 10010d1d
    JNZ 0x10010d27                      ; 10010d1f
        ;   XREF to: 10010d27 (CONDITIONAL_JUMP)  ; LAB_10010d27
    MOV EAX,0x7fffffff                  ; 10010d21
    RET                                 ; 10010d26
    SUB EAX,0x2                         ; 10010d27
        ;   Label: LAB_10010d27
    RET                                 ; 10010d2a

