; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; wint_t __cdecl crt_ctype_c__towupper_FUN_100107d0(wint_t c)
;
; Parameters:
; wint_t           Stack[0x4]:2   c
; Local Variables:
; undefined2       Stack[-0x2]:2  local_2
;
; XREF[1]:
;   crt_ctype.c_towupper_FUN_10010750 at 1001079a
;
; Referenced Globals:
;   undefined4 DAT_10017760
;
; Called Functions:
;   crt_ctype.c_iswctype_FUN_10010870
;   crt_locale.c___crtLCMapStringA_v2_FUN_1000c0f0
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 100107d0
        ;   Label: crt_ctype.c__towupper_FUN_100107d0
    CMP word ptr [ESP + 0x8],0xffff     ; 100107d3
    JNZ 0x100107e5                      ; 100107da
        ;   XREF to: 100107e5 (CONDITIONAL_JUMP)  ; LAB_100107e5
    MOV AX,word ptr [ESP + 0x8]         ; 100107dc
    ADD ESP,0x4                         ; 100107e1
    RET                                 ; 100107e4
    CMP dword ptr [0x10017760],0x0      ; 100107e5 | DAT_10017760
        ;   Label: LAB_100107e5
    JNZ 0x1001080d                      ; 100107ec
        ;   XREF to: 1001080d (CONDITIONAL_JUMP)  ; LAB_1001080d
    CMP word ptr [ESP + 0x8],0x61       ; 100107ee
    JC 0x10010804                       ; 100107f4
        ;   XREF to: 10010804 (CONDITIONAL_JUMP)  ; LAB_10010804
    CMP word ptr [ESP + 0x8],0x7a       ; 100107f6
    JA 0x10010804                       ; 100107fc
        ;   XREF to: 10010804 (CONDITIONAL_JUMP)  ; LAB_10010804
    SUB word ptr [ESP + 0x8],0x20       ; 100107fe
    MOV AX,word ptr [ESP + 0x8]         ; 10010804
        ;   Label: LAB_10010804
    ADD ESP,0x4                         ; 10010809
    RET                                 ; 1001080c
    CMP word ptr [ESP + 0x8],0x100      ; 1001080d
        ;   Label: LAB_1001080d
    JNC 0x10010832                      ; 10010814
        ;   XREF to: 10010832 (CONDITIONAL_JUMP)  ; LAB_10010832
    MOV EAX,dword ptr [ESP + 0x8]       ; 10010816
    PUSH 0x2                            ; 1001081a
    PUSH EAX                            ; 1001081c
    CALL crt_ctype.c_iswctype_FUN_10010870 ; 1001081d
        ;   XREF to: 10010870 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_iswctype_FUN_10010870(wint_t c, wctype_t mask)
    ADD ESP,0x8                         ; 10010822
    TEST EAX,EAX                        ; 10010825
    JNZ 0x10010832                      ; 10010827
        ;   XREF to: 10010832 (CONDITIONAL_JUMP)  ; LAB_10010832
    MOV AX,word ptr [ESP + 0x8]         ; 10010829
    ADD ESP,0x4                         ; 1001082e
    RET                                 ; 10010831
    LEA EAX,[ESP + 0x2]                 ; 10010832
        ;   Label: LAB_10010832
    PUSH 0x0                            ; 10010836
    LEA ECX,[ESP + 0xc]                 ; 10010838
    PUSH 0x1                            ; 1001083c
    PUSH EAX                            ; 1001083e
    MOV EDX,dword ptr [0x10017760]      ; 1001083f | DAT_10017760
    PUSH 0x1                            ; 10010845
    PUSH ECX                            ; 10010847
    PUSH 0x200                          ; 10010848
    PUSH EDX                            ; 1001084d
    CALL crt_locale.c___crtLCMapStringA_v2_FUN_1000c0f0 ; 1001084e
        ;   XREF to: 1000c0f0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___crtLCMapStringA_v2_FUN_1000c0f0(LCID lcid, DWORD map_flags, LPCSTR src, int cch_src, ...)
    ADD ESP,0x1c                        ; 10010853
    TEST EAX,EAX                        ; 10010856
    JNZ 0x10010863                      ; 10010858
        ;   XREF to: 10010863 (CONDITIONAL_JUMP)  ; LAB_10010863
    MOV AX,word ptr [ESP + 0x8]         ; 1001085a
    ADD ESP,0x4                         ; 1001085f
    RET                                 ; 10010862
    MOV AX,word ptr [ESP + 0x2]         ; 10010863
        ;   Label: LAB_10010863
    ADD ESP,0x4                         ; 10010868
    RET                                 ; 1001086b

