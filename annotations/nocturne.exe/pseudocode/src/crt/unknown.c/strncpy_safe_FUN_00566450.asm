; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __watcallStack crt_unknown_c_strncpy_safe_FUN_00566450(char *dest,char *src,int length,int maxlen)
;
; Parameters:
; char *           Stack[0x4]:4   dest
; char *           Stack[0x8]:4   src
; int              Stack[0xc]:4   length
; int              Stack[0x10]:4   maxlen
;
; XREF[1]:
;   crt_string.c_splitpath_FUN_00566498 at 00566521
;
; Called Functions:
;   crt_string.c_mbstrnbytes_FUN_0056dbb0
;   crt_string.c_mbstrncpy_FUN_0056db80
;   crt_string.c_mbstrnlen_FUN_0056db40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566450
        ;   Label: crt_unknown.c_strncpy_safe_FUN_00566450
    PUSH ESI                            ; 00566451
    MOV ESI,dword ptr [ESP + 0xc]       ; 00566452
    MOV EAX,dword ptr [ESP + 0x14]      ; 00566456
    MOV EBX,dword ptr [ESP + 0x18]      ; 0056645a
    TEST ESI,ESI                        ; 0056645e
    JZ 0x00566495                       ; 00566460
        ;   XREF to: 00566495 (CONDITIONAL_JUMP)  ; LAB_00566495
    CMP EAX,EBX                         ; 00566462
    JLE 0x00566468                      ; 00566464
        ;   XREF to: 00566468 (CONDITIONAL_JUMP)  ; LAB_00566468
    MOV EAX,EBX                         ; 00566466
    PUSH EAX                            ; 00566468
        ;   Label: LAB_00566468
    MOV EDX,dword ptr [ESP + 0x14]      ; 00566469
    PUSH EDX                            ; 0056646d
    CALL crt_string.c_mbstrnlen_FUN_0056db40 ; 0056646e
        ;   XREF to: 0056db40 (UNCONDITIONAL_CALL)  ; int crt_string.c_mbstrnlen_FUN_0056db40(char * str, int max_bytes)
    ADD ESP,0x8                         ; 00566473
    PUSH EAX                            ; 00566476
    MOV ECX,dword ptr [ESP + 0x14]      ; 00566477
    PUSH ECX                            ; 0056647b
    PUSH ESI                            ; 0056647c
    MOV EBX,EAX                         ; 0056647d
    CALL crt_string.c_mbstrncpy_FUN_0056db80 ; 0056647f
        ;   XREF to: 0056db80 (UNCONDITIONAL_CALL)  ; char * crt_string.c_mbstrncpy_FUN_0056db80(char * dest, char * src, int char_count)
    ADD ESP,0xc                         ; 00566484
    PUSH EBX                            ; 00566487
    PUSH ESI                            ; 00566488
    CALL crt_string.c_mbstrnbytes_FUN_0056dbb0 ; 00566489
        ;   XREF to: 0056dbb0 (UNCONDITIONAL_CALL)  ; int crt_string.c_mbstrnbytes_FUN_0056dbb0(char * str, int char_count)
    ADD ESP,0x8                         ; 0056648e
    MOV byte ptr [ESI + EAX*0x1],0x0    ; 00566491
    POP ESI                             ; 00566495
        ;   Label: LAB_00566495
    POP EBX                             ; 00566496
    RET                                 ; 00566497

