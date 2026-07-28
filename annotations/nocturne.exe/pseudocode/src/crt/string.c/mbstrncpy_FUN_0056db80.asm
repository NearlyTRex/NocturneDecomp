; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __watcallStack crt_string_c_mbstrncpy_FUN_0056db80(char *dest,char *src,int char_count)
;
; Parameters:
; char *           Stack[0x4]:4   dest
; char *           Stack[0x8]:4   src
; int              Stack[0xc]:4   char_count
;
; XREF[1]:
;   crt_unknown.c_strncpy_safe_FUN_00566450 at 0056647f
;
; Called Functions:
;   crt_string.c_mbstrnbytes_FUN_0056dbb0
;   FUN_00570ce0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056db80
        ;   Label: crt_string.c_mbstrncpy_FUN_0056db80
    PUSH ESI                            ; 0056db81
    MOV EBX,dword ptr [ESP + 0xc]       ; 0056db82
    MOV EDX,dword ptr [ESP + 0x14]      ; 0056db86
    PUSH EDX                            ; 0056db8a
    MOV ECX,dword ptr [ESP + 0x14]      ; 0056db8b
    PUSH ECX                            ; 0056db8f
    CALL crt_string.c_mbstrnbytes_FUN_0056dbb0 ; 0056db90
        ;   XREF to: 0056dbb0 (UNCONDITIONAL_CALL)  ; int crt_string.c_mbstrnbytes_FUN_0056dbb0(char * str, int char_count)
    ADD ESP,0x8                         ; 0056db95
    INC EAX                             ; 0056db98
    PUSH EAX                            ; 0056db99
    MOV ESI,dword ptr [ESP + 0x14]      ; 0056db9a
    PUSH ESI                            ; 0056db9e
    PUSH EBX                            ; 0056db9f
    CALL FUN_00570ce0                   ; 0056dba0
        ;   XREF to: 00570ce0 (UNCONDITIONAL_CALL)  ; undefined FUN_00570ce0()
    ADD ESP,0xc                         ; 0056dba5
    MOV EAX,EBX                         ; 0056dba8
    POP ESI                             ; 0056dbaa
    POP EBX                             ; 0056dbab
    RET                                 ; 0056dbac

