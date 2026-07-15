; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_math_c__multtenpow12_FUN_1000eba0(_LDBL12 *ld12,uint pow,int flag)
;
; Parameters:
; _LDBL12 *        Stack[0x4]:4   ld12
; uint             Stack[0x8]:4   pow
; int              Stack[0xc]:4   flag
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[2]:
;   crt_math.c__strgtold12_FUN_1000c7b0 at 1000cd28
;   crt_stdio.c__i10_output_FUN_1000cf50 at 1000d157
;
; Referenced Globals:
;   undefined1* PTR_s_M_d_yy_10012d4c_10018200 = 10012d4c
;   undefined4 DAT_10018254
;   undefined4 DAT_10018360
;   undefined4 DAT_100183b4
;   undefined4 DAT_100183b8
;   undefined4 DAT_100183bc
;   undefined4 DAT_10018408
;   undefined4 DAT_1001840c
;   undefined4 DAT_10018410
;
; Called Functions:
;   crt_math.c___multtwelve_FUN_1000e8f0
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 1000eba0
        ;   Label: crt_math.c__multtenpow12_FUN_1000eba0
    PUSH EBX                            ; 1000eba3
    PUSH ESI                            ; 1000eba4
    PUSH EDI                            ; 1000eba5
    MOV ESI,0x10018200                  ; 1000eba6 | PTR_s_M_d_yy_10012d4c_10018200
    MOV EDI,dword ptr [ESP + 0x20]      ; 1000ebab
    TEST EDI,EDI                        ; 1000ebaf
    JZ 0x1000ec14                       ; 1000ebb1
        ;   XREF to: 1000ec14 (CONDITIONAL_JUMP)  ; LAB_1000ec14
    JGE 0x1000ebbc                      ; 1000ebb3
        ;   XREF to: 1000ebbc (CONDITIONAL_JUMP)  ; LAB_1000ebbc
    NEG EDI                             ; 1000ebb5
    MOV ESI,0x10018360                  ; 1000ebb7 | DAT_10018360
    CMP dword ptr [ESP + 0x24],0x0      ; 1000ebbc
        ;   Label: LAB_1000ebbc
    MOV EBX,dword ptr [ESP + 0x1c]      ; 1000ebc1
    JNZ 0x1000ebcc                      ; 1000ebc5
        ;   XREF to: 1000ebcc (CONDITIONAL_JUMP)  ; LAB_1000ebcc
    MOV word ptr [EBX],0x0              ; 1000ebc7
    TEST EDI,EDI                        ; 1000ebcc
        ;   Label: LAB_1000ebcc
    JZ 0x1000ec14                       ; 1000ebce
        ;   XREF to: 1000ec14 (CONDITIONAL_JUMP)  ; LAB_1000ec14
    ADD ESI,0x54                        ; 1000ebd0
        ;   Label: LAB_1000ebd0
    MOV EAX,EDI                         ; 1000ebd3
    SAR EDI,0x3                         ; 1000ebd5
    AND EAX,0x7                         ; 1000ebd8
    TEST EAX,EAX                        ; 1000ebdb
    JZ 0x1000ec10                       ; 1000ebdd
        ;   XREF to: 1000ec10 (CONDITIONAL_JUMP)  ; LAB_1000ec10
    LEA EAX,[EAX + EAX*0x2]             ; 1000ebdf
    LEA EDX,[ESI + EAX*0x4]             ; 1000ebe2
    CMP word ptr [EDX],0x8000           ; 1000ebe5 | DAT_100183b4 | DAT_10018408 | DAT_10018254
    JC 0x1000ec06                       ; 1000ebea
        ;   XREF to: 1000ec06 (CONDITIONAL_JUMP)  ; LAB_1000ec06
    LEA ECX,[ESP + 0xc]                 ; 1000ebec
    MOV EAX,dword ptr [EDX]             ; 1000ebf0 | DAT_100183b4 | DAT_10018408
    MOV dword ptr [ECX],EAX             ; 1000ebf2
    MOV EAX,dword ptr [EDX + 0x4]       ; 1000ebf4 | DAT_100183b8 | DAT_1001840c
    MOV dword ptr [ECX + 0x4],EAX       ; 1000ebf7
    MOV EDX,dword ptr [EDX + 0x8]       ; 1000ebfa | DAT_100183bc | DAT_10018410
    MOV dword ptr [ECX + 0x8],EDX       ; 1000ebfd
    MOV EDX,ECX                         ; 1000ec00
    DEC dword ptr [ESP + 0xe]           ; 1000ec02
    PUSH EDX                            ; 1000ec06
        ;   Label: LAB_1000ec06
    PUSH EBX                            ; 1000ec07
    CALL crt_math.c___multtwelve_FUN_1000e8f0 ; 1000ec08
        ;   XREF to: 1000e8f0 (UNCONDITIONAL_CALL)  ; void crt_math.c___multtwelve_FUN_1000e8f0(_LDBL12 * a, _LDBL12 * b)
    ADD ESP,0x8                         ; 1000ec0d
    TEST EDI,EDI                        ; 1000ec10
        ;   Label: LAB_1000ec10
    JNZ 0x1000ebd0                      ; 1000ec12
        ;   XREF to: 1000ebd0 (CONDITIONAL_JUMP)  ; LAB_1000ebd0
    POP EDI                             ; 1000ec14
        ;   Label: LAB_1000ec14
    POP ESI                             ; 1000ec15
    POP EBX                             ; 1000ec16
    ADD ESP,0xc                         ; 1000ec17
    RET                                 ; 1000ec1a

