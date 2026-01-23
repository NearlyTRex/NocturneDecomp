; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_setdir.cpp_CDemonSet_FUN_005762a0(CDemonSet * this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   core_setdir.cpp_CDemonSet_FUN_00576340 at 00576389
;   core_setdir.cpp_CDemonSet_FUN_00576870 at 0057688a
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005762a0
        ;   Label: core_setdir.cpp_CDemonSet_FUN_005762a0
    PUSH EBP                            ; 005762a1
    MOV EBP,ESP                         ; 005762a2
    SUB ESP,0x18                        ; 005762a4
    AND ESP,0xfffffff8                  ; 005762a7
    MOV EDX,dword ptr [EBP + 0x14]      ; 005762aa
    MOV EBX,dword ptr [EBP + 0x10]      ; 005762ad
    MOV EAX,EBX                         ; 005762b0
    SHL EAX,0x4                         ; 005762b2
    ADD EAX,EBX                         ; 005762b5
    MOV EBX,dword ptr [EBP + 0xc]       ; 005762b7
    SHL EAX,0x2                         ; 005762ba
    ADD EBX,0x15b414                    ; 005762bd
    ADD EBX,EAX                         ; 005762c3
    FLD float ptr [EDX]                 ; 005762c5
    FSUB float ptr [EBX]                ; 005762c7
    LEA EAX,[ESP + 0xc]                 ; 005762c9
    FSTP float ptr [ESP + 0xc]          ; 005762cd
    PUSH EAX                            ; 005762d1
    FLD float ptr [EDX + 0x4]           ; 005762d2
    LEA EAX,[ESP + 0x4]                 ; 005762d5
    FSUB float ptr [EBX + 0x4]          ; 005762d9
    PUSH EAX                            ; 005762dc
    FSTP float ptr [ESP + 0x18]         ; 005762dd
    LEA EAX,[EBX + 0x18]                ; 005762e1
    FLD float ptr [EDX + 0x8]           ; 005762e4
    FSUB float ptr [EBX + 0x8]          ; 005762e7
    PUSH EAX                            ; 005762ea
    FSTP float ptr [ESP + 0x20]         ; 005762eb
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030 ; 005762ef
        ;   XREF to: 00472030 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 005762f4
    FLD float ptr [EBX + 0xc]           ; 005762f7
    FLD float ptr [ESP]                 ; 005762fa
    FABS                                ; 005762fd
    FCOMPP                              ; 005762ff
    FNSTSW AX                           ; 00576301
    SAHF                                ; 00576303
    JA 0x00576326                       ; 00576304
        ;   XREF to: 00576326 (CONDITIONAL_JUMP)  ; LAB_00576326
    FLD float ptr [ESP + 0x4]           ; 00576306
    FABS                                ; 0057630a
    FLD float ptr [EBX + 0x10]          ; 0057630c
    FCOMPP                              ; 0057630f
    FNSTSW AX                           ; 00576311
    SAHF                                ; 00576313
    JC 0x00576326                       ; 00576314
        ;   XREF to: 00576326 (CONDITIONAL_JUMP)  ; LAB_00576326
    FLD float ptr [ESP + 0x8]           ; 00576316
    FABS                                ; 0057631a
    FLD float ptr [EBX + 0x14]          ; 0057631c
    FCOMPP                              ; 0057631f
    FNSTSW AX                           ; 00576321
    SAHF                                ; 00576323
    JNC 0x0057632d                      ; 00576324
        ;   XREF to: 0057632d (CONDITIONAL_JUMP)  ; LAB_0057632d
    XOR EAX,EAX                         ; 00576326
        ;   Label: LAB_00576326
    MOV ESP,EBP                         ; 00576328
    POP EBP                             ; 0057632a
    POP EBX                             ; 0057632b
    RET                                 ; 0057632c
    MOV EAX,0x1                         ; 0057632d
        ;   Label: LAB_0057632d
    MOV ESP,EBP                         ; 00576332
    POP EBP                             ; 00576334
    POP EBX                             ; 00576335
    RET                                 ; 00576336

