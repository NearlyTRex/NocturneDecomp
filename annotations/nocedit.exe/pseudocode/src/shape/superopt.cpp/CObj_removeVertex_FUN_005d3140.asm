; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_superopt_cpp_CObj_removeVertex_FUN_005d3140(CObj *this_ptr,uint index)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   index
;
; Called Functions:
;   crt_memory.c_free_FUN_00601cd0
;   crt_memory.c_realloc_FUN_00601df0
;   crt_string.c_memmove_FUN_005fe5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d3140
        ;   Label: shape_superopt.cpp_CObj_removeVertex_FUN_005d3140
    PUSH ESI                            ; 005d3141
    PUSH EBP                            ; 005d3142
    MOV ESI,dword ptr [ESP + 0x10]      ; 005d3143
    MOV EBX,dword ptr [ESP + 0x14]      ; 005d3147
    MOV EDX,dword ptr [ESI]             ; 005d314b
    CMP EBX,EDX                         ; 005d314d
    JNC 0x005d31d9                      ; 005d314f
        ;   XREF to: 005d31d9 (CONDITIONAL_JUMP)  ; LAB_005d31d9
    LEA ECX,[EDX + -0x1]                ; 005d3155
    MOV dword ptr [ESI],ECX             ; 005d3158
    CMP EBX,ECX                         ; 005d315a
    JC 0x005d31df                       ; 005d315c
        ;   XREF to: 005d31df (CONDITIONAL_JUMP)  ; LAB_005d31df
    MOV EBP,dword ptr [ESI]             ; 005d3162
        ;   Label: LAB_005d3162
    TEST EBP,EBP                        ; 005d3164
    JZ 0x005d321f                       ; 005d3166
        ;   XREF to: 005d321f (CONDITIONAL_JUMP)  ; LAB_005d321f
    LEA EAX,[EBP*0x8 + 0x0]             ; 005d316c
    MOV EDX,EAX                         ; 005d3173
    SHL EAX,0x3                         ; 005d3175
    SUB EAX,EDX                         ; 005d3178
    PUSH EAX                            ; 005d317a
    MOV EDX,dword ptr [ESI + 0x4]       ; 005d317b
    PUSH EDX                            ; 005d317e
    CALL crt_memory.c_realloc_FUN_00601df0 ; 005d317f
        ;   XREF to: 00601df0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_00601df0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 005d3184
    TEST EAX,EAX                        ; 005d3187
    JZ 0x005d31d5                       ; 005d3189
        ;   XREF to: 005d31d5 (CONDITIONAL_JUMP)  ; LAB_005d31d5
    PUSH EDI                            ; 005d318b
    MOV ECX,dword ptr [ESI + 0x8]       ; 005d318c
    XOR EDX,EDX                         ; 005d318f
    MOV dword ptr [ESI + 0x4],EAX       ; 005d3191
    TEST ECX,ECX                        ; 005d3194
    JBE 0x005d31cf                      ; 005d3196
        ;   XREF to: 005d31cf (CONDITIONAL_JUMP)  ; LAB_005d31cf
    XOR ECX,ECX                         ; 005d3198
    MOV EAX,dword ptr [ESI + 0xc]       ; 005d319a
        ;   Label: LAB_005d319a
    ADD EAX,ECX                         ; 005d319d
    MOV EBP,dword ptr [EAX + 0x4]       ; 005d319f
    CMP EBX,EBP                         ; 005d31a2
    JC 0x005d3237                       ; 005d31a4
        ;   XREF to: 005d3237 (CONDITIONAL_JUMP)  ; LAB_005d3237
    MOV EBP,dword ptr [EAX + 0x8]       ; 005d31aa
        ;   Label: LAB_005d31aa
    CMP EBX,EBP                         ; 005d31ad
    JNC 0x005d31b7                      ; 005d31af
        ;   XREF to: 005d31b7 (CONDITIONAL_JUMP)  ; LAB_005d31b7
    LEA EDI,[EBP + -0x1]                ; 005d31b1
    MOV dword ptr [EAX + 0x8],EDI       ; 005d31b4
    MOV EBP,dword ptr [EAX + 0xc]       ; 005d31b7
        ;   Label: LAB_005d31b7
    CMP EBX,EBP                         ; 005d31ba
    JNC 0x005d31c4                      ; 005d31bc
        ;   XREF to: 005d31c4 (CONDITIONAL_JUMP)  ; LAB_005d31c4
    LEA EDI,[EBP + -0x1]                ; 005d31be
    MOV dword ptr [EAX + 0xc],EDI       ; 005d31c1
    INC EDX                             ; 005d31c4
        ;   Label: LAB_005d31c4
    MOV EDI,dword ptr [ESI + 0x8]       ; 005d31c5
    ADD ECX,0x68                        ; 005d31c8
    CMP EDX,EDI                         ; 005d31cb
    JC 0x005d319a                       ; 005d31cd
        ;   XREF to: 005d319a (CONDITIONAL_JUMP)  ; LAB_005d319a
    MOV EAX,0x1                         ; 005d31cf
        ;   Label: LAB_005d31cf
    POP EDI                             ; 005d31d4
    POP EBP                             ; 005d31d5
        ;   Label: LAB_005d31d5
    POP ESI                             ; 005d31d6
    POP EBX                             ; 005d31d7
    RET                                 ; 005d31d8
    XOR EAX,EAX                         ; 005d31d9
        ;   Label: LAB_005d31d9
    POP EBP                             ; 005d31db
    POP ESI                             ; 005d31dc
    POP EBX                             ; 005d31dd
    RET                                 ; 005d31de
    MOV EAX,ECX                         ; 005d31df
        ;   Label: LAB_005d31df
    SUB EAX,EBX                         ; 005d31e1
    SHL EAX,0x3                         ; 005d31e3
    MOV EDX,EAX                         ; 005d31e6
    SHL EAX,0x3                         ; 005d31e8
    SUB EAX,EDX                         ; 005d31eb
    PUSH EAX                            ; 005d31ed
    LEA EAX,[EBX + 0x1]                 ; 005d31ee
    SHL EAX,0x3                         ; 005d31f1
    MOV EDX,EAX                         ; 005d31f4
    SHL EAX,0x3                         ; 005d31f6
    MOV ECX,dword ptr [ESI + 0x4]       ; 005d31f9
    SUB EAX,EDX                         ; 005d31fc
    ADD EAX,ECX                         ; 005d31fe
    PUSH EAX                            ; 005d3200
    LEA EAX,[EBX*0x8 + 0x0]             ; 005d3201
    MOV EDX,EAX                         ; 005d3208
    SHL EAX,0x3                         ; 005d320a
    SUB EAX,EDX                         ; 005d320d
    ADD ECX,EAX                         ; 005d320f
    PUSH ECX                            ; 005d3211
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 005d3212
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 005d3217
    JMP 0x005d3162                      ; 005d321a
        ;   XREF to: 005d3162 (UNCONDITIONAL_JUMP)  ; LAB_005d3162
    MOV EAX,dword ptr [ESI + 0x4]       ; 005d321f
        ;   Label: LAB_005d321f
    PUSH EAX                            ; 005d3222
    CALL crt_memory.c_free_FUN_00601cd0 ; 005d3223
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    MOV EAX,0x1                         ; 005d3228
    ADD ESP,0x4                         ; 005d322d
    MOV dword ptr [ESI + 0x4],EBP       ; 005d3230
    POP EBP                             ; 005d3233
    POP ESI                             ; 005d3234
    POP EBX                             ; 005d3235
    RET                                 ; 005d3236
    LEA EDI,[EBP + -0x1]                ; 005d3237
        ;   Label: LAB_005d3237
    MOV dword ptr [EAX + 0x4],EDI       ; 005d323a
    JMP 0x005d31aa                      ; 005d323d
        ;   XREF to: 005d31aa (UNCONDITIONAL_JUMP)  ; LAB_005d31aa

