; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl double __cdecl crt_string_c_strtod_main_FUN_00605d5d(char *str,char **endptr)
;
; Parameters:
; char *           Stack[0x8]:4   str
; char * *         Stack[0xc]:4   endptr
; Local Variables:
; undefined1[12]   Stack[-0x34]:12  local_34
; undefined8       Stack[-0x28]:8  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   crt_string.c_strtod_FUN_005ff0f3 at 005ff0ff
;   crt_unknown.c_FUN_00603bc9 at 00603bd5
;
; Referenced Globals:
;   double g_PositiveInfinity = +Infinity
;   undefined4 g_PositiveInfinity+4
;
; Called Functions:
;   crt_math.c_set_range_error_errno_FUN_006027ac
;   crt_string.c_parseFloatString_FUN_00605b9b
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00605d5d
        ;   Label: crt_string.c_strtod_main_FUN_00605d5d
    MOV EBP,ESP                         ; 00605d5e
    PUSH EBX                            ; 00605d60
    PUSH ESI                            ; 00605d61
    PUSH EDI                            ; 00605d62
    SUB ESP,0x24                        ; 00605d63
    MOV EDX,dword ptr [EBP + 0xc]       ; 00605d66
    PUSH EDX                            ; 00605d69
    LEA EAX,[EBP + -0x30]               ; 00605d6a
    PUSH EAX                            ; 00605d6d
    MOV EBX,dword ptr [EBP + 0x8]       ; 00605d6e
    PUSH EBX                            ; 00605d71
    CALL crt_string.c_parseFloatString_FUN_00605b9b ; 00605d72
        ;   XREF to: 00605b9b (UNCONDITIONAL_CALL)  ; int crt_string.c_parseFloatString_FUN_00605b9b(char * str, void * result, char * * endptr)
    MOV EBX,EAX                         ; 00605d77
    ADD ESP,0xc                         ; 00605d79
    TEST EAX,EAX                        ; 00605d7c
    JNZ 0x00605d8b                      ; 00605d7e
        ;   XREF to: 00605d8b (CONDITIONAL_JUMP)  ; LAB_00605d8b
    MOV dword ptr [EBP + -0x24],EAX     ; 00605d80
    MOV dword ptr [EBP + -0x20],EAX     ; 00605d83
        ;   Label: LAB_00605d83
    JMP 0x00605e38                      ; 00605d86
        ;   XREF to: 00605e38 (UNCONDITIONAL_JUMP)  ; LAB_00605e38
    MOV EAX,dword ptr [EBP + -0x28]     ; 00605d8b
        ;   Label: LAB_00605d8b
    AND AH,0x7f                         ; 00605d8e
    AND EAX,0xffff                      ; 00605d91
    CMP EAX,0x43ff                      ; 00605d96
    JL 0x00605dc7                       ; 00605d9b
        ;   XREF to: 00605dc7 (CONDITIONAL_JUMP)  ; LAB_00605dc7
    CALL crt_math.c_set_range_error_errno_FUN_006027ac ; 00605d9d
        ;   XREF to: 006027ac (UNCONDITIONAL_CALL)  ; void crt_math.c_set_range_error_errno_FUN_006027ac()
    TEST byte ptr [EBP + -0x27],0x80    ; 00605da2
    JZ 0x00605db8                       ; 00605da6
        ;   XREF to: 00605db8 (CONDITIONAL_JUMP)  ; LAB_00605db8
    FLD double ptr [0x00665f30]         ; 00605da8 | g_PositiveInfinity
    FCHS                                ; 00605dae
    FSTP double ptr [EBP + -0x24]       ; 00605db0
    JMP 0x00605e38                      ; 00605db3
        ;   XREF to: 00605e38 (UNCONDITIONAL_JUMP)  ; LAB_00605e38
    MOV EAX,[0x00665f30]                ; 00605db8 | g_PositiveInfinity
        ;   Label: LAB_00605db8
    MOV dword ptr [EBP + -0x24],EAX     ; 00605dbd
    MOV EAX,[0x00665f34]                ; 00605dc0 | g_PositiveInfinity+4
    JMP 0x00605d83                      ; 00605dc5
        ;   XREF to: 00605d83 (UNCONDITIONAL_JUMP)  ; LAB_00605d83
    CMP EAX,0x3bcd                      ; 00605dc7
        ;   Label: LAB_00605dc7
    JGE 0x00605e10                      ; 00605dcc
        ;   XREF to: 00605e10 (CONDITIONAL_JUMP)  ; LAB_00605e10
    CMP EAX,-0x34                       ; 00605dce
    JGE 0x00605de2                      ; 00605dd1
        ;   XREF to: 00605de2 (CONDITIONAL_JUMP)  ; LAB_00605de2
    XOR EDI,EDI                         ; 00605dd3
    CALL crt_math.c_set_range_error_errno_FUN_006027ac ; 00605dd5
        ;   XREF to: 006027ac (UNCONDITIONAL_CALL)  ; void crt_math.c_set_range_error_errno_FUN_006027ac()
    MOV dword ptr [EBP + -0x24],EDI     ; 00605dda
    MOV dword ptr [EBP + -0x20],EDI     ; 00605ddd
    JMP 0x00605e38                      ; 00605de0
        ;   XREF to: 00605e38 (UNCONDITIONAL_JUMP)  ; LAB_00605e38
    LEA EDX,[EBP + -0x24]               ; 00605de2
        ;   Label: LAB_00605de2
    LEA EAX,[EBP + -0x30]               ; 00605de5
    FLD extended double ptr [EAX]       ; 00605de8
    FSTP double ptr [EDX]               ; 00605dea
    MOV EAX,dword ptr [EBP + -0x24]     ; 00605dec
    MOV dword ptr [EBP + -0x1c],EAX     ; 00605def
    MOV EAX,dword ptr [EBP + -0x20]     ; 00605df2
    MOV ESI,dword ptr [EBP + -0x24]     ; 00605df5
    MOV dword ptr [EBP + -0x18],EAX     ; 00605df8
    TEST EAX,0x7fffffff                 ; 00605dfb
    JNZ 0x00605e06                      ; 00605e00
        ;   XREF to: 00605e06 (CONDITIONAL_JUMP)  ; LAB_00605e06
    TEST ESI,ESI                        ; 00605e02
    JZ 0x00605e33                       ; 00605e04
        ;   XREF to: 00605e33 (CONDITIONAL_JUMP)  ; LAB_00605e33
    TEST word ptr [EBP + -0x16],0x7ff0  ; 00605e06
        ;   Label: LAB_00605e06
    JNZ 0x00605e38                      ; 00605e0c
        ;   XREF to: 00605e38 (CONDITIONAL_JUMP)  ; LAB_00605e38
    JMP 0x00605e33                      ; 00605e0e
        ;   XREF to: 00605e33 (UNCONDITIONAL_JUMP)  ; LAB_00605e33
    LEA EDX,[EBP + -0x24]               ; 00605e10
        ;   Label: LAB_00605e10
    LEA EAX,[EBP + -0x30]               ; 00605e13
    FLD extended double ptr [EAX]       ; 00605e16
    FSTP double ptr [EDX]               ; 00605e18
    CMP EBX,0x3                         ; 00605e1a
    JZ 0x00605e33                       ; 00605e1d
        ;   XREF to: 00605e33 (CONDITIONAL_JUMP)  ; LAB_00605e33
    MOV EAX,dword ptr [EBP + -0x24]     ; 00605e1f
    MOV dword ptr [EBP + -0x14],EAX     ; 00605e22
    MOV EAX,dword ptr [EBP + -0x20]     ; 00605e25
    MOV dword ptr [EBP + -0x10],EAX     ; 00605e28
    TEST word ptr [EBP + -0xe],0x7ff0   ; 00605e2b
    JNZ 0x00605e38                      ; 00605e31
        ;   XREF to: 00605e38 (CONDITIONAL_JUMP)  ; LAB_00605e38
    CALL crt_math.c_set_range_error_errno_FUN_006027ac ; 00605e33
        ;   XREF to: 006027ac (UNCONDITIONAL_CALL)  ; void crt_math.c_set_range_error_errno_FUN_006027ac()
        ;   Label: LAB_00605e33
    MOV EAX,dword ptr [EBP + -0x24]     ; 00605e38
        ;   Label: LAB_00605e38
    MOV EDX,dword ptr [EBP + -0x20]     ; 00605e3b
    JMP 0x00605d55                      ; 00605e3e
        ;   XREF to: 00605d55 (UNCONDITIONAL_JUMP)  ; LAB_00605d55

