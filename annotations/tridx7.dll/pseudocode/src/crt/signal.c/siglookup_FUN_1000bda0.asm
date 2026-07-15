; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; _XCPT_ACTION * __cdecl crt_signal_c_siglookup_FUN_1000bda0(int signum,_XCPT_ACTION *table)
;
; Parameters:
; int              Stack[0x4]:4   signum
; _XCPT_ACTION *   Stack[0x8]:4   table
;
; XREF[2]:
;   crt_signal.c_raise_FUN_1000bbc0 at 1000bc0d
;   crt_signal.c_signal_FUN_1000b950 at 1000b9fa
;
; Referenced Globals:
;   undefined4 DAT_10017754
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 1000bda0
        ;   Label: crt_signal.c_siglookup_FUN_1000bda0
    PUSH ESI                            ; 1000bda4
    MOV ESI,EAX                         ; 1000bda5
    MOV EDX,dword ptr [ESP + 0x8]       ; 1000bda7
    CMP dword ptr [ESI + 0x4],EDX       ; 1000bdab
        ;   Label: LAB_1000bdab
    JZ 0x1000bdc3                       ; 1000bdae
        ;   XREF to: 1000bdc3 (CONDITIONAL_JUMP)  ; LAB_1000bdc3
    ADD ESI,0xc                         ; 1000bdb0
    MOV ECX,dword ptr [0x10017754]      ; 1000bdb3 | DAT_10017754
    LEA ECX,[ECX + ECX*0x2]             ; 1000bdb9
    LEA ECX,[EAX + ECX*0x4]             ; 1000bdbc
    CMP ECX,ESI                         ; 1000bdbf
    JA 0x1000bdab                       ; 1000bdc1
        ;   XREF to: 1000bdab (CONDITIONAL_JUMP)  ; LAB_1000bdab
    MOV EAX,dword ptr [ESI + 0x4]       ; 1000bdc3
        ;   Label: LAB_1000bdc3
    SUB EAX,EDX                         ; 1000bdc6
    CMP EAX,0x1                         ; 1000bdc8
    SBB EAX,EAX                         ; 1000bdcb
    AND EAX,ESI                         ; 1000bdcd
    POP ESI                             ; 1000bdcf
    RET                                 ; 1000bdd0

