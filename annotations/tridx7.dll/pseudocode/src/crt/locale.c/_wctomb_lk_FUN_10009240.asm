; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_locale_c__wctomb_lk_FUN_10009240(LPSTR mbchar,WCHAR wchar)
;
; Parameters:
; LPSTR            Stack[0x4]:4   mbchar
; WCHAR            Stack[0x8]:2   wchar
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   crt_locale.c__wctomb_FUN_100091e0 at 1000920e
;
; Referenced Globals:
;   undefined4 DAT_10017690
;   undefined4 DAT_10017760
;   undefined4 DAT_10017770
;   void* PTR_WideCharToMultiByte_10242230 = 002425dc
;
; Called Functions:
;   crt_errno.c__errno_FUN_10008a20
;   WideCharToMultiByte
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 10009240
        ;   Label: crt_locale.c__wctomb_lk_FUN_10009240
    SUB ESP,0x4                         ; 10009244
    TEST ECX,ECX                        ; 10009247
    JNZ 0x10009251                      ; 10009249
        ;   XREF to: 10009251 (CONDITIONAL_JUMP)  ; LAB_10009251
    XOR EAX,EAX                         ; 1000924b
    ADD ESP,0x4                         ; 1000924d
    RET                                 ; 10009250
    CMP dword ptr [0x10017760],0x0      ; 10009251 | DAT_10017760
        ;   Label: LAB_10009251
    JNZ 0x10009286                      ; 10009258
        ;   XREF to: 10009286 (CONDITIONAL_JUMP)  ; LAB_10009286
    CMP word ptr [ESP + 0xc],0xff       ; 1000925a
    JBE 0x10009277                      ; 10009261
        ;   XREF to: 10009277 (CONDITIONAL_JUMP)  ; LAB_10009277
    CALL crt_errno.c__errno_FUN_10008a20 ; 10009263
        ;   XREF to: 10008a20 (UNCONDITIONAL_CALL)  ; int * crt_errno.c__errno_FUN_10008a20()
    MOV dword ptr [EAX],0x2a            ; 10009268
    MOV EAX,0xffffffff                  ; 1000926e
    ADD ESP,0x4                         ; 10009273
    RET                                 ; 10009276
    MOV AL,byte ptr [ESP + 0xc]         ; 10009277
        ;   Label: LAB_10009277
    MOV byte ptr [ECX],AL               ; 1000927b
    MOV EAX,0x1                         ; 1000927d
    ADD ESP,0x4                         ; 10009282
    RET                                 ; 10009285
    LEA EAX,[ESP]                       ; 10009286
        ;   Label: LAB_10009286
    MOV EDX,dword ptr [0x10017690]      ; 1000928a | DAT_10017690
    MOV dword ptr [ESP],0x0             ; 10009290
    PUSH EAX                            ; 10009298
    PUSH 0x0                            ; 10009299
    PUSH EDX                            ; 1000929b
    MOV EAX,[0x10017770]                ; 1000929c | DAT_10017770
    PUSH ECX                            ; 100092a1
    PUSH 0x1                            ; 100092a2
    LEA ECX,[ESP + 0x20]                ; 100092a4
    PUSH ECX                            ; 100092a8
    PUSH 0x220                          ; 100092a9
    PUSH EAX                            ; 100092ae
    CALL dword ptr [0x10242230]         ; 100092af | PTR_WideCharToMultiByte_10242230
    TEST EAX,EAX                        ; 100092b5
    JZ 0x100092c0                       ; 100092b7
        ;   XREF to: 100092c0 (CONDITIONAL_JUMP)  ; LAB_100092c0
    CMP dword ptr [ESP],0x0             ; 100092b9
    JZ 0x100092d0                       ; 100092be
        ;   XREF to: 100092d0 (CONDITIONAL_JUMP)  ; LAB_100092d0
    CALL crt_errno.c__errno_FUN_10008a20 ; 100092c0
        ;   XREF to: 10008a20 (UNCONDITIONAL_CALL)  ; int * crt_errno.c__errno_FUN_10008a20()
        ;   Label: LAB_100092c0
    MOV dword ptr [EAX],0x2a            ; 100092c5
    MOV EAX,0xffffffff                  ; 100092cb
    ADD ESP,0x4                         ; 100092d0
        ;   Label: LAB_100092d0
    RET                                 ; 100092d3

