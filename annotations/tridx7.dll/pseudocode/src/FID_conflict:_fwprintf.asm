; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl FID_conflict__fwprintf(FILE *_File,wchar_t *_Format,...)
;
; Parameters:
; FILE *           Stack[0x4]:4   _File
; wchar_t *        Stack[0x8]:4   _Format
;
; XREF[1]:
;   FUN_10001200 at 10001260
;
; Called Functions:
;   __ftbuf
;   __lock_file
;   __stbuf
;   __unlock_file
;   FUN_10005f40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 100054d0
        ;   Label: FID_conflict:_fwprintf
    PUSH ESI                            ; 100054d1
    MOV ESI,dword ptr [ESP + 0xc]       ; 100054d2
    PUSH EDI                            ; 100054d6
    PUSH ESI                            ; 100054d7
    CALL __lock_file                    ; 100054d8
        ;   XREF to: 10005a30 (UNCONDITIONAL_CALL)  ; void __lock_file(FILE * _File)
    ADD ESP,0x4                         ; 100054dd
    PUSH ESI                            ; 100054e0
    CALL __stbuf                        ; 100054e1
        ;   XREF to: 10005e60 (UNCONDITIONAL_CALL)  ; int __stbuf(FILE * _File)
    MOV ECX,dword ptr [ESP + 0x18]      ; 100054e6
    ADD ESP,0x4                         ; 100054ea
    MOV EDI,EAX                         ; 100054ed
    LEA EAX,[ESP + 0x18]                ; 100054ef
    PUSH EAX                            ; 100054f3
    PUSH ECX                            ; 100054f4
    PUSH ESI                            ; 100054f5
    CALL FUN_10005f40                   ; 100054f6
        ;   XREF to: 10005f40 (UNCONDITIONAL_CALL)  ; undefined FUN_10005f40()
    ADD ESP,0xc                         ; 100054fb
    MOV EBX,EAX                         ; 100054fe
    PUSH ESI                            ; 10005500
    PUSH EDI                            ; 10005501
    CALL __ftbuf                        ; 10005502
        ;   XREF to: 10005f00 (UNCONDITIONAL_CALL)  ; void __ftbuf(int _Flag, FILE * _File)
    ADD ESP,0x8                         ; 10005507
    PUSH ESI                            ; 1000550a
    CALL __unlock_file                  ; 1000550b
        ;   XREF to: 10005aa0 (UNCONDITIONAL_CALL)  ; void __unlock_file(FILE * _File)
    ADD ESP,0x4                         ; 10005510
    MOV EAX,EBX                         ; 10005513
    POP EDI                             ; 10005515
    POP ESI                             ; 10005516
    POP EBX                             ; 10005517
    RET                                 ; 10005518

