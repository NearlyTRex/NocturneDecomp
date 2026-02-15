; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __watcallStack crt_string_c_mbtowc_next_FUN_00605a70(char *str)
;
; Parameters:
; char *           Stack[0x4]:4   str
;
; XREF[11]:
;   crt_file.c_makepath_FUN_005febfc at 005fed88
;   crt_file.c_splitpath_s_FUN_00610460 at 006104a6
;   crt_io.c_stat_FUN_00607e64 at 00607fb2
;   crt_string.c_char_in_set_FUN_0060e340 at 0060e386
;   crt_string.c_mbstrnbytes_FUN_00605ec0 at 00605f0d
;   crt_string.c_mbstrnicmp_FUN_00608e50 at 00608e91
;   crt_string.c_splitpath_FUN_005ff178 at 005ff1d1
;   crt_string.c_strpbrk_FUN_0060c190 at 0060c1c4
;   crt_unknown.c_FUN_0060fa90 at 0060faa6
;   crt_unknown.c_FUN_0060fac0 at 0060fb26
;   ... and 1 more
;
; Referenced Globals:
;   int g_MultibyteLocaleActive
;   char[256] g_LeadByteTable
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00605a70
        ;   Label: crt_string.c_mbtowc_next_FUN_00605a70
    CMP dword ptr [0x03f9c020],0x0      ; 00605a74 | g_MultibyteLocaleActive
    JZ 0x00605a9c                       ; 00605a7b
        ;   XREF to: 00605a9c (CONDITIONAL_JUMP)  ; LAB_00605a9c
    XOR EDX,EDX                         ; 00605a7d
    MOV DL,byte ptr [EAX]               ; 00605a7f
    MOV DL,byte ptr [EDX + 0x3f9c031]   ; 00605a81 | g_LeadByteTable
    AND DL,0x1                          ; 00605a87
    AND EDX,0xff                        ; 00605a8a
    JZ 0x00605a9c                       ; 00605a90
        ;   XREF to: 00605a9c (CONDITIONAL_JUMP)  ; LAB_00605a9c
    CMP byte ptr [EAX + 0x1],0x0        ; 00605a92
    JZ 0x00605a9c                       ; 00605a96
        ;   XREF to: 00605a9c (CONDITIONAL_JUMP)  ; LAB_00605a9c
    ADD EAX,0x2                         ; 00605a98
    RET                                 ; 00605a9b
    INC EAX                             ; 00605a9c
        ;   Label: LAB_00605a9c
    RET                                 ; 00605a9d

