; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack void __watcallStack crt_string_c_strncpy_safe_FUN_005ff130(char *dest,char *src,int length,int maxlen)
;
; Parameters:
; char *           Stack[0x4]:4   dest
; char *           Stack[0x8]:4   src
; int              Stack[0xc]:4   length
; int              Stack[0x10]:4   maxlen
;
; XREF[1]:
;   crt_string.c_splitpath_FUN_005ff178 at 005ff201
;
; Called Functions:
;   crt_string.c_mbstrnbytes_FUN_00605ec0
;   crt_string.c_mbstrncpy_FUN_00605e90
;   crt_string.c_mbstrnlen_FUN_00605e50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ff130
        ;   Label: crt_string.c_strncpy_safe_FUN_005ff130
    PUSH ESI                            ; 005ff131
    MOV ESI,dword ptr [ESP + 0xc]       ; 005ff132
    MOV EAX,dword ptr [ESP + 0x14]      ; 005ff136
    MOV EBX,dword ptr [ESP + 0x18]      ; 005ff13a
    TEST ESI,ESI                        ; 005ff13e
    JZ 0x005ff175                       ; 005ff140
        ;   XREF to: 005ff175 (CONDITIONAL_JUMP)  ; LAB_005ff175
    CMP EAX,EBX                         ; 005ff142
    JLE 0x005ff148                      ; 005ff144
        ;   XREF to: 005ff148 (CONDITIONAL_JUMP)  ; LAB_005ff148
    MOV EAX,EBX                         ; 005ff146
    PUSH EAX                            ; 005ff148
        ;   Label: LAB_005ff148
    MOV EDX,dword ptr [ESP + 0x14]      ; 005ff149
    PUSH EDX                            ; 005ff14d
    CALL crt_string.c_mbstrnlen_FUN_00605e50 ; 005ff14e
        ;   XREF to: 00605e50 (UNCONDITIONAL_CALL)  ; int crt_string.c_mbstrnlen_FUN_00605e50(char * str, int max_bytes)
    ADD ESP,0x8                         ; 005ff153
    PUSH EAX                            ; 005ff156
    MOV ECX,dword ptr [ESP + 0x14]      ; 005ff157
    PUSH ECX                            ; 005ff15b
    PUSH ESI                            ; 005ff15c
    MOV EBX,EAX                         ; 005ff15d
    CALL crt_string.c_mbstrncpy_FUN_00605e90 ; 005ff15f
        ;   XREF to: 00605e90 (UNCONDITIONAL_CALL)  ; char * crt_string.c_mbstrncpy_FUN_00605e90(char * dest, char * src, int char_count)
    ADD ESP,0xc                         ; 005ff164
    PUSH EBX                            ; 005ff167
    PUSH ESI                            ; 005ff168
    CALL crt_string.c_mbstrnbytes_FUN_00605ec0 ; 005ff169
        ;   XREF to: 00605ec0 (UNCONDITIONAL_CALL)  ; int crt_string.c_mbstrnbytes_FUN_00605ec0(char * str, int char_count)
    ADD ESP,0x8                         ; 005ff16e
    MOV byte ptr [ESI + EAX*0x1],0x0    ; 005ff171
    POP ESI                             ; 005ff175
        ;   Label: LAB_005ff175
    POP EBX                             ; 005ff176
    RET                                 ; 005ff177

