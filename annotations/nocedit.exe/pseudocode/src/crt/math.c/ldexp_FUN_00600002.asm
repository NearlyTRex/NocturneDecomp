; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl crt_math_c_ldexp_FUN_00600002(double x,int exp)
;
; Parameters:
; double           Stack[0x4]:8   x
; int              Stack[0xc]:4   exp
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined2       Stack[-0x20]:2  local_20
; ushort           Stack[-0x1e]:2  uStack_1e
; undefined2       Stack[-0x1c]:2  local_1c
; undefined2       Stack[-0x1a]:2  uStack_1a
; undefined4       Stack[-0x18]:4  uStack_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined1       Stack[-0xc]:1  local_c
;
; XREF[1]:
;   shape_design.c_exportModelToBIN_FUN_0045aa80 at 0045adc4
;
; Referenced Globals:
;   double g_PositiveInfinity = +Infinity
;   undefined4 g_PositiveInfinity+4
;
; Called Functions:
;   crt_math.c_set_range_error_errno_FUN_006027ac
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00600002
        ;   Label: crt_math.c_ldexp_FUN_00600002
    MOV EBP,ESP                         ; 00600003
    PUSH EBX                            ; 00600005
    PUSH ESI                            ; 00600006
    SUB ESP,0x18                        ; 00600007
    MOV EDX,dword ptr [EBP + 0x10]      ; 0060000a
    MOV EAX,dword ptr [EBP + 0x8]       ; 0060000d
    MOV dword ptr [EBP + -0x20],EAX     ; 00600010
    MOV EAX,dword ptr [EBP + 0xc]       ; 00600013
    MOV ECX,dword ptr [EBP + 0x8]       ; 00600016
    MOV dword ptr [EBP + -0x1c],EAX     ; 00600019
    TEST EAX,0x7fffffff                 ; 0060001c
    JNZ 0x0060002b                      ; 00600021
        ;   XREF to: 0060002b (CONDITIONAL_JUMP)  ; LAB_0060002b
    TEST ECX,ECX                        ; 00600023
    JZ 0x006000aa                       ; 00600025
        ;   XREF to: 006000aa (CONDITIONAL_JUMP)  ; LAB_006000aa
    MOV EAX,dword ptr [EBP + -0x1a]     ; 0060002b
        ;   Label: LAB_0060002b
    AND EAX,0x7ff0                      ; 0060002e
    CWDE                                ; 00600033
    SAR EAX,0x4                         ; 00600034
    CMP EDX,0x3e80                      ; 00600037
    JLE 0x00600046                      ; 0060003d
        ;   XREF to: 00600046 (CONDITIONAL_JUMP)  ; LAB_00600046
    MOV EDX,0x3e80                      ; 0060003f
    JMP 0x00600053                      ; 00600044
        ;   XREF to: 00600053 (UNCONDITIONAL_JUMP)  ; LAB_00600053
    CMP EDX,0xffffc180                  ; 00600046
        ;   Label: LAB_00600046
    JGE 0x00600053                      ; 0060004c
        ;   XREF to: 00600053 (CONDITIONAL_JUMP)  ; LAB_00600053
    MOV EDX,0xffffc180                  ; 0060004e
    ADD EAX,EDX                         ; 00600053
        ;   Label: LAB_00600053
    TEST EAX,EAX                        ; 00600055
    JG 0x00600063                       ; 00600057
        ;   XREF to: 00600063 (CONDITIONAL_JUMP)  ; LAB_00600063
    XOR ESI,ESI                         ; 00600059
    MOV dword ptr [EBP + -0x18],ESI     ; 0060005b
    MOV dword ptr [EBP + -0x14],ESI     ; 0060005e
    JMP 0x006000b6                      ; 00600061
        ;   XREF to: 006000b6 (UNCONDITIONAL_JUMP)  ; LAB_006000b6
    CMP EAX,0x7ff                       ; 00600063
        ;   Label: LAB_00600063
    JL 0x00600092                       ; 00600068
        ;   XREF to: 00600092 (CONDITIONAL_JUMP)  ; LAB_00600092
    CALL crt_math.c_set_range_error_errno_FUN_006027ac ; 0060006a
        ;   XREF to: 006027ac (UNCONDITIONAL_CALL)  ; void crt_math.c_set_range_error_errno_FUN_006027ac()
    CMP word ptr [EBP + -0x1a],0x0      ; 0060006f
    JLE 0x00600085                      ; 00600074
        ;   XREF to: 00600085 (CONDITIONAL_JUMP)  ; LAB_00600085
    MOV EAX,[0x00665f30]                ; 00600076 | g_PositiveInfinity
    MOV dword ptr [EBP + -0x18],EAX     ; 0060007b
    MOV EAX,[0x00665f34]                ; 0060007e | g_PositiveInfinity+4
    JMP 0x006000b3                      ; 00600083
        ;   XREF to: 006000b3 (UNCONDITIONAL_JUMP)  ; LAB_006000b3
    FLD double ptr [0x00665f30]         ; 00600085 | g_PositiveInfinity
        ;   Label: LAB_00600085
    FCHS                                ; 0060008b
    FSTP double ptr [EBP + -0x18]       ; 0060008d
    JMP 0x006000b6                      ; 00600090
        ;   XREF to: 006000b6 (UNCONDITIONAL_JUMP)  ; LAB_006000b6
    MOV EDX,dword ptr [EBP + -0x1a]     ; 00600092
        ;   Label: LAB_00600092
    AND EDX,0x800f                      ; 00600095
    SHL EAX,0x4                         ; 0060009b
    MOV EBX,EDX                         ; 0060009e
    MOV word ptr [EBP + -0x1a],DX       ; 006000a0
    OR EBX,EAX                          ; 006000a4
    MOV word ptr [EBP + -0x1a],BX       ; 006000a6
    MOV EAX,dword ptr [EBP + -0x20]     ; 006000aa
        ;   Label: LAB_006000aa
    MOV dword ptr [EBP + -0x18],EAX     ; 006000ad
    MOV EAX,dword ptr [EBP + -0x1c]     ; 006000b0
    MOV dword ptr [EBP + -0x14],EAX     ; 006000b3
        ;   Label: LAB_006000b3
    MOV EAX,dword ptr [EBP + -0x18]     ; 006000b6
        ;   Label: LAB_006000b6
    MOV dword ptr [EBP + -0x10],EAX     ; 006000b9
    MOV EAX,dword ptr [EBP + -0x14]     ; 006000bc
    MOV dword ptr [EBP + -0xc],EAX      ; 006000bf
    MOV EAX,dword ptr [EBP + -0x10]     ; 006000c2
    MOV EDX,dword ptr [EBP + -0xc]      ; 006000c5
    LEA ESP,[EBP + -0x8]                ; 006000c8
    POP ESI                             ; 006000cb
    POP EBX                             ; 006000cc
    POP EBP                             ; 006000cd
    RET                                 ; 006000ce

