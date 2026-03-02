; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_superopt_cpp_findTriListTextureIndex_FUN_005d7750(char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
;
; Referenced Globals:
;   int g_TriListTextureCount
;   char[50][80] g_TriListTextureNames
;   undefined4 DAT_03f6bc40
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d7750
        ;   Label: shape_superopt.cpp_findTriListTextureIndex_FUN_005d7750
    PUSH ESI                            ; 005d7751
    PUSH EDI                            ; 005d7752
    MOV EDI,dword ptr [ESP + 0x10]      ; 005d7753
    MOV EDX,dword ptr [0x03f6bbe8]      ; 005d7757 | g_TriListTextureCount
    XOR EBX,EBX                         ; 005d775d
    TEST EDX,EDX                        ; 005d775f
    JLE 0x005d7784                      ; 005d7761
        ;   XREF to: 005d7784 (CONDITIONAL_JUMP)  ; LAB_005d7784
    MOV ESI,0x3f6bbf0                   ; 005d7763 | g_TriListTextureNames
    PUSH EDI                            ; 005d7768
        ;   Label: LAB_005d7768
    PUSH ESI                            ; 005d7769 | g_TriListTextureNames | DAT_03f6bc40
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 005d776a
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005d776f
    TEST EAX,EAX                        ; 005d7772
    JZ 0x005d778d                       ; 005d7774
        ;   XREF to: 005d778d (CONDITIONAL_JUMP)  ; LAB_005d778d
    MOV ECX,dword ptr [0x03f6bbe8]      ; 005d7776 | g_TriListTextureCount
    INC EBX                             ; 005d777c
    ADD ESI,0x50                        ; 005d777d
    CMP EBX,ECX                         ; 005d7780
    JL 0x005d7768                       ; 005d7782
        ;   XREF to: 005d7768 (CONDITIONAL_JUMP)  ; LAB_005d7768
    MOV EAX,0xffffffff                  ; 005d7784
        ;   Label: LAB_005d7784
    POP EDI                             ; 005d7789
    POP ESI                             ; 005d778a
    POP EBX                             ; 005d778b
    RET                                 ; 005d778c
    MOV EAX,EBX                         ; 005d778d
        ;   Label: LAB_005d778d
    POP EDI                             ; 005d778f
    POP ESI                             ; 005d7790
    POP EBX                             ; 005d7791
    RET                                 ; 005d7792

