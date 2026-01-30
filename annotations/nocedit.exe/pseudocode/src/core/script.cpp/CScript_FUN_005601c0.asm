; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_script_cpp_CScript_FUN_005601c0(CScript *this_ptr,int param_2,int param_3)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
; int              Stack[0xc]:4   param_3
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055cb1f
;
; Referenced Globals:
;   TerminatedCString s_if_006431f5
;   TerminatedCString s_else_006431f8
;
; Called Functions:
;   crt_string.c_strnicmp_FUN_005ff070
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005601c0
        ;   Label: core_script.cpp_CScript_FUN_005601c0
    PUSH ESI                            ; 005601c1
    PUSH EDI                            ; 005601c2
    PUSH EBP                            ; 005601c3
    SUB ESP,0x4                         ; 005601c4
    MOV EBP,dword ptr [ESP + 0x18]      ; 005601c7
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005601cb
    MOV EDX,0x1                         ; 005601cf
    MOV ECX,dword ptr [EBP + 0x30]      ; 005601d4
    XOR ESI,ESI                         ; 005601d7
    MOV dword ptr [ESP],EDX             ; 005601d9
    CMP EBX,ECX                         ; 005601dc
    JGE 0x00560200                      ; 005601de
        ;   XREF to: 00560200 (CONDITIONAL_JUMP)  ; LAB_00560200
    MOV EDI,dword ptr [EBP + 0x34]      ; 005601e0
        ;   Label: LAB_005601e0
    MOV EDI,dword ptr [EDI + EBX*0x8 + 0x4] ; 005601e3
    MOV AH,byte ptr [EDI]               ; 005601e7
    CMP AH,0x7b                         ; 005601e9
    JNZ 0x0056020f                      ; 005601ec
        ;   XREF to: 0056020f (CONDITIONAL_JUMP)  ; LAB_0056020f
    INC EBX                             ; 005601ee
    INC ESI                             ; 005601ef
    TEST EBX,EBX                        ; 005601f0
        ;   Label: LAB_005601f0
    JL 0x00560200                       ; 005601f2
        ;   XREF to: 00560200 (CONDITIONAL_JUMP)  ; LAB_00560200
    XOR EDI,EDI                         ; 005601f4
    MOV EAX,dword ptr [EBP + 0x30]      ; 005601f6
    MOV dword ptr [ESP],EDI             ; 005601f9
    CMP EBX,EAX                         ; 005601fc
    JL 0x005601e0                       ; 005601fe
        ;   XREF to: 005601e0 (CONDITIONAL_JUMP)  ; LAB_005601e0
    MOV EBX,0xffffffff                  ; 00560200
        ;   Label: LAB_00560200
    MOV EAX,EBX                         ; 00560205
        ;   Label: LAB_00560205
    ADD ESP,0x4                         ; 00560207
    POP EBP                             ; 0056020a
    POP EDI                             ; 0056020b
    POP ESI                             ; 0056020c
    POP EBX                             ; 0056020d
    RET                                 ; 0056020e
    CMP AH,0x7d                         ; 0056020f
        ;   Label: LAB_0056020f
    JNZ 0x0056022d                      ; 00560212
        ;   XREF to: 0056022d (CONDITIONAL_JUMP)  ; LAB_0056022d
    TEST ESI,ESI                        ; 00560214
    JNZ 0x00560229                      ; 00560216
        ;   XREF to: 00560229 (CONDITIONAL_JUMP)  ; LAB_00560229
    CMP dword ptr [ESP],0x0             ; 00560218
    JZ 0x00560205                       ; 0056021c
        ;   XREF to: 00560205 (CONDITIONAL_JUMP)  ; LAB_00560205
    INC EBX                             ; 0056021e
    MOV EAX,EBX                         ; 0056021f
    ADD ESP,0x4                         ; 00560221
    POP EBP                             ; 00560224
    POP EDI                             ; 00560225
    POP ESI                             ; 00560226
    POP EBX                             ; 00560227
    RET                                 ; 00560228
    INC EBX                             ; 00560229
        ;   Label: LAB_00560229
    DEC ESI                             ; 0056022a
    JMP 0x005601f0                      ; 0056022b
        ;   XREF to: 005601f0 (UNCONDITIONAL_JUMP)  ; LAB_005601f0
    TEST ESI,ESI                        ; 0056022d
        ;   Label: LAB_0056022d
    JG 0x00560237                       ; 0056022f
        ;   XREF to: 00560237 (CONDITIONAL_JUMP)  ; LAB_00560237
    CMP dword ptr [ESP],0x0             ; 00560231
    JZ 0x0056024b                       ; 00560235
        ;   XREF to: 0056024b (CONDITIONAL_JUMP)  ; LAB_0056024b
    PUSH 0x2                            ; 00560237
        ;   Label: LAB_00560237
    PUSH 0x6431f5                       ; 00560239 | = "if"
    PUSH EDI                            ; 0056023e
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0056023f
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00560244
    TEST EAX,EAX                        ; 00560247
    JZ 0x0056027f                       ; 00560249
        ;   XREF to: 0056027f (CONDITIONAL_JUMP)  ; LAB_0056027f
    TEST ESI,ESI                        ; 0056024b
        ;   Label: LAB_0056024b
    JG 0x00560256                       ; 0056024d
        ;   XREF to: 00560256 (CONDITIONAL_JUMP)  ; LAB_00560256
    CMP dword ptr [ESP + 0x20],0x0      ; 0056024f
    JZ 0x0056026a                       ; 00560254
        ;   XREF to: 0056026a (CONDITIONAL_JUMP)  ; LAB_0056026a
    PUSH 0x4                            ; 00560256
        ;   Label: LAB_00560256
    PUSH 0x6431f8                       ; 00560258 | = "else"
    PUSH EDI                            ; 0056025d
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0056025e
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00560263
    TEST EAX,EAX                        ; 00560266
    JZ 0x00560293                       ; 00560268
        ;   XREF to: 00560293 (CONDITIONAL_JUMP)  ; LAB_00560293
    TEST ESI,ESI                        ; 0056026a
        ;   Label: LAB_0056026a
    JNZ 0x005602a7                      ; 0056026c
        ;   XREF to: 005602a7 (CONDITIONAL_JUMP)  ; LAB_005602a7
    CMP dword ptr [ESP],0x0             ; 0056026e
    JZ 0x00560205                       ; 00560272
        ;   XREF to: 00560205 (CONDITIONAL_JUMP)  ; LAB_00560205
    INC EBX                             ; 00560274
    MOV EAX,EBX                         ; 00560275
    ADD ESP,0x4                         ; 00560277
    POP EBP                             ; 0056027a
    POP EDI                             ; 0056027b
    POP ESI                             ; 0056027c
    POP EBX                             ; 0056027d
    RET                                 ; 0056027e
    PUSH 0x1                            ; 0056027f
        ;   Label: LAB_0056027f
    INC EBX                             ; 00560281
    PUSH EBX                            ; 00560282
    PUSH EBP                            ; 00560283
    CALL core_script.cpp_CScript_FUN_005601c0 ; 00560284
        ;   XREF to: 005601c0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_FUN_005601c0(CScript * this_ptr, int param_2, int param_3)
    MOV EBX,EAX                         ; 00560289
    ADD ESP,0xc                         ; 0056028b
    JMP 0x005601f0                      ; 0056028e
        ;   XREF to: 005601f0 (UNCONDITIONAL_JUMP)  ; LAB_005601f0
    PUSH 0x1                            ; 00560293
        ;   Label: LAB_00560293
    INC EBX                             ; 00560295
    PUSH EBX                            ; 00560296
    PUSH EBP                            ; 00560297
    CALL core_script.cpp_CScript_FUN_005601c0 ; 00560298
        ;   XREF to: 005601c0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_FUN_005601c0(CScript * this_ptr, int param_2, int param_3)
    ADD ESP,0xc                         ; 0056029d
    MOV EBX,EAX                         ; 005602a0
    JMP 0x005601f0                      ; 005602a2
        ;   XREF to: 005601f0 (UNCONDITIONAL_JUMP)  ; LAB_005601f0
    INC EBX                             ; 005602a7
        ;   Label: LAB_005602a7
    JMP 0x005601f0                      ; 005602a8
        ;   XREF to: 005601f0 (UNCONDITIONAL_JUMP)  ; LAB_005601f0

