; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl _wctomb(char *_MbCh,wchar_t _WCh)
;
; Parameters:
; char *           Stack[0x4]:4   _MbCh
; wchar_t          Stack[0x8]:2   _WCh
;
; XREF[1]:
;   FUN_10005f40 at 10006797
;
; Referenced Globals:
;   undefined4 DAT_10240854
;   undefined4 DAT_10240858
;
; Called Functions:
;   __lock
;   __wctomb_lk
;   FUN_10005a10
;
; *****************************************************************************

section .text

    CMP dword ptr [0x10240854],0x0      ; 100091e0 | DAT_10240854
        ;   Label: _wctomb
    PUSH ESI                            ; 100091e7
    PUSH EDI                            ; 100091e8
    JZ 0x100091fc                       ; 100091e9
        ;   XREF to: 100091fc (CONDITIONAL_JUMP)  ; LAB_100091fc
    PUSH 0x13                           ; 100091eb
    MOV EDI,0x1                         ; 100091ed
    CALL __lock                         ; 100091f2
        ;   XREF to: 100059a0 (UNCONDITIONAL_CALL)  ; void __lock(int _File)
    ADD ESP,0x4                         ; 100091f7
    JMP 0x10009204                      ; 100091fa
        ;   XREF to: 10009204 (UNCONDITIONAL_JUMP)  ; LAB_10009204
    XOR EDI,EDI                         ; 100091fc
        ;   Label: LAB_100091fc
    INC dword ptr [0x10240858]          ; 100091fe | DAT_10240858
    MOV EAX,dword ptr [ESP + 0x10]      ; 10009204
        ;   Label: LAB_10009204
    MOV ECX,dword ptr [ESP + 0xc]       ; 10009208
    PUSH EAX                            ; 1000920c
    PUSH ECX                            ; 1000920d
    CALL __wctomb_lk                    ; 1000920e
        ;   XREF to: 10009240 (UNCONDITIONAL_CALL)  ; undefined __wctomb_lk()
    ADD ESP,0x8                         ; 10009213
    MOV ESI,EAX                         ; 10009216
    TEST EDI,EDI                        ; 10009218
    JZ 0x1000922b                       ; 1000921a
        ;   XREF to: 1000922b (CONDITIONAL_JUMP)  ; LAB_1000922b
    PUSH 0x13                           ; 1000921c
    CALL FUN_10005a10                   ; 1000921e
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; undefined FUN_10005a10()
    ADD ESP,0x4                         ; 10009223
    MOV EAX,ESI                         ; 10009226
    POP EDI                             ; 10009228
    POP ESI                             ; 10009229
    RET                                 ; 1000922a
    MOV EAX,ESI                         ; 1000922b
        ;   Label: LAB_1000922b
    POP EDI                             ; 1000922d
    POP ESI                             ; 1000922e
    DEC dword ptr [0x10240858]          ; 1000922f | DAT_10240858
    RET                                 ; 10009235

