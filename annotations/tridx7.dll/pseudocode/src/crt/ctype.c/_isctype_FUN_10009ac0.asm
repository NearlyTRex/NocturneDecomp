; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_ctype_c__isctype_FUN_10009ac0(int c,int type)
;
; Parameters:
; int              Stack[0x4]:4   c
; int              Stack[0x8]:4   type
; Local Variables:
; undefined4       Stack[-0x6]:4  local_6
; undefined1       Stack[-0x2]:1  local_2
;
; XREF[5]:
;   crt_ctype.c__tolower_lk_FUN_10009be0 at 10009c19
;   crt_locale.c___getlocaleinfo_FUN_1000f6e0 at 1000f83c
;   crt_math.c__strgtold12_FUN_1000c7b0 at 1000c94e
;   crt_stdio.c__forcdecpt_FUN_10006ef0 at 10006f1b
;   crt_stdlib.c_atol_FUN_1000fe60 at 1000fe7c
;
; Referenced Globals:
;   void* PTR_DAT_10017480 = 1001748a
;   undefined4 DAT_1001748a
;   undefined4 DAT_1001748b
;
; Called Functions:
;   crt_locale.c__crtGetStringTypeA_FUN_1000bfc0
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 10009ac0
        ;   Label: crt_ctype.c__isctype_FUN_10009ac0
    SUB ESP,0x8                         ; 10009ac4
    PUSH EBX                            ; 10009ac7
    LEA EAX,[ECX + 0x1]                 ; 10009ac8
    CMP EAX,0x100                       ; 10009acb
    JA 0x10009ae7                       ; 10009ad0
        ;   XREF to: 10009ae7 (CONDITIONAL_JUMP)  ; LAB_10009ae7
    MOV EDX,dword ptr [0x10017480]      ; 10009ad2 | PTR_DAT_10017480
    XOR EAX,EAX                         ; 10009ad8
    MOV AX,word ptr [EDX + ECX*0x2]     ; 10009ada | DAT_1001748a
    AND EAX,dword ptr [ESP + 0x14]      ; 10009ade
    POP EBX                             ; 10009ae2
    ADD ESP,0x8                         ; 10009ae3
    RET                                 ; 10009ae6
    MOV DL,CH                           ; 10009ae7
        ;   Label: LAB_10009ae7
    XOR EBX,EBX                         ; 10009ae9
    MOV BL,DL                           ; 10009aeb
    MOV EAX,[0x10017480]                ; 10009aed | PTR_DAT_10017480
    TEST byte ptr [EAX + EBX*0x2 + 0x1],0x80 ; 10009af2 | DAT_1001748b
    JZ 0x10009b0d                       ; 10009af7
        ;   XREF to: 10009b0d (CONDITIONAL_JUMP)  ; LAB_10009b0d
    MOV EAX,0x2                         ; 10009af9
    MOV byte ptr [ESP + 0x8],DL         ; 10009afe
    MOV byte ptr [ESP + 0xa],0x0        ; 10009b02
    MOV byte ptr [ESP + 0x9],CL         ; 10009b07
    JMP 0x10009b1b                      ; 10009b0b
        ;   XREF to: 10009b1b (UNCONDITIONAL_JUMP)  ; LAB_10009b1b
    MOV EAX,0x1                         ; 10009b0d
        ;   Label: LAB_10009b0d
    MOV byte ptr [ESP + 0x8],CL         ; 10009b12
    MOV byte ptr [ESP + 0x9],0x0        ; 10009b16
    LEA ECX,[ESP + 0x6]                 ; 10009b1b
        ;   Label: LAB_10009b1b
    PUSH 0x0                            ; 10009b1f
    PUSH 0x0                            ; 10009b21
    PUSH ECX                            ; 10009b23
    PUSH EAX                            ; 10009b24
    LEA EAX,[ESP + 0x18]                ; 10009b25
    PUSH EAX                            ; 10009b29
    PUSH 0x1                            ; 10009b2a
    CALL crt_locale.c__crtGetStringTypeA_FUN_1000bfc0 ; 10009b2c
        ;   XREF to: 1000bfc0 (UNCONDITIONAL_CALL)  ; BOOL crt_locale.c__crtGetStringTypeA_FUN_1000bfc0(_locale_t plocinfo, DWORD dw_info_type, LPCSTR lp_src_str, int cch_src, ...)
    ADD ESP,0x18                        ; 10009b31
    TEST EAX,EAX                        ; 10009b34
    JNZ 0x10009b3f                      ; 10009b36
        ;   XREF to: 10009b3f (CONDITIONAL_JUMP)  ; LAB_10009b3f
    XOR EAX,EAX                         ; 10009b38
    POP EBX                             ; 10009b3a
    ADD ESP,0x8                         ; 10009b3b
    RET                                 ; 10009b3e
    MOV EAX,dword ptr [ESP + 0x6]       ; 10009b3f
        ;   Label: LAB_10009b3f
    AND EAX,0xffff                      ; 10009b43
    AND EAX,dword ptr [ESP + 0x14]      ; 10009b48
    POP EBX                             ; 10009b4c
    ADD ESP,0x8                         ; 10009b4d
    RET                                 ; 10009b50

