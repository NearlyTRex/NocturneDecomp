; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_loadByFileExtension_FUN_0050fda0(CPackedBitmap *this_ptr,int apply_palette_flag)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   apply_palette_flag
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_loadPBMFile_FUN_00510210
;   cockpit_pkbitmap.cpp_FUN_0050f990
;   crt_string.c__stricmp_FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050fda0
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_0050fda0
    PUSH ESI                            ; 0050fda1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0050fda2
    MOV DL,0x2e                         ; 0050fda6
    MOV ESI,EBX                         ; 0050fda8
    MOV AL,byte ptr [ESI]               ; 0050fdaa
        ;   Label: LAB_0050fdaa
    CMP AL,DL                           ; 0050fdac
    JZ 0x0050fdc2                       ; 0050fdae
        ;   XREF to: 0050fdc2 (CONDITIONAL_JUMP)  ; LAB_0050fdc2
    CMP AL,0x0                          ; 0050fdb0
    JZ 0x0050fdc0                       ; 0050fdb2
        ;   XREF to: 0050fdc0 (CONDITIONAL_JUMP)  ; LAB_0050fdc0
    INC ESI                             ; 0050fdb4
    MOV AL,byte ptr [ESI]               ; 0050fdb5
    CMP AL,DL                           ; 0050fdb7
    JZ 0x0050fdc2                       ; 0050fdb9
        ;   XREF to: 0050fdc2 (CONDITIONAL_JUMP)  ; LAB_0050fdc2
    INC ESI                             ; 0050fdbb
    CMP AL,0x0                          ; 0050fdbc
    JNZ 0x0050fdaa                      ; 0050fdbe
        ;   XREF to: 0050fdaa (CONDITIONAL_JUMP)  ; LAB_0050fdaa
    SUB ESI,ESI                         ; 0050fdc0
        ;   Label: LAB_0050fdc0
    TEST ESI,ESI                        ; 0050fdc2
        ;   Label: LAB_0050fdc2
    JNZ 0x0050fdc9                      ; 0050fdc4
        ;   XREF to: 0050fdc9 (CONDITIONAL_JUMP)  ; LAB_0050fdc9
    POP ESI                             ; 0050fdc6
        ;   Label: LAB_0050fdc6
    POP EBX                             ; 0050fdc7
    RET                                 ; 0050fdc8
    PUSH 0x5cbd04                       ; 0050fdc9
        ;   Label: LAB_0050fdc9
    PUSH ESI                            ; 0050fdce
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0050fdcf
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0050fdd4
    TEST EAX,EAX                        ; 0050fdd7
    JZ 0x0050fdfe                       ; 0050fdd9
        ;   XREF to: 0050fdfe (CONDITIONAL_JUMP)  ; LAB_0050fdfe
    PUSH 0x5cbd09                       ; 0050fddb
    PUSH ESI                            ; 0050fde0
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0050fde1
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0050fde6
    TEST EAX,EAX                        ; 0050fde9
    JNZ 0x0050fdc6                      ; 0050fdeb
        ;   XREF to: 0050fdc6 (CONDITIONAL_JUMP)  ; LAB_0050fdc6
    MOV ECX,dword ptr [ESP + 0x10]      ; 0050fded
    PUSH ECX                            ; 0050fdf1
    PUSH EBX                            ; 0050fdf2
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_loadPBMFile_FUN_00510210 ; 0050fdf3
        ;   XREF to: 00510210 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_loadPBMFile_FUN_00510210(CPackedBitmap * this_ptr, int apply_palette_flag)
    ADD ESP,0x8                         ; 0050fdf8
    POP ESI                             ; 0050fdfb
    POP EBX                             ; 0050fdfc
    RET                                 ; 0050fdfd
    MOV EDX,dword ptr [ESP + 0x10]      ; 0050fdfe
        ;   Label: LAB_0050fdfe
    PUSH EDX                            ; 0050fe02
    PUSH EBX                            ; 0050fe03
    CALL cockpit_pkbitmap.cpp_FUN_0050f990 ; 0050fe04
        ;   XREF to: 0050f990 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_FUN_0050f990(CPackedBitmap * this_ptr, int apply_palette_flag)
    ADD ESP,0x8                         ; 0050fe09
    POP ESI                             ; 0050fe0c
    POP EBX                             ; 0050fe0d
    RET                                 ; 0050fe0e

