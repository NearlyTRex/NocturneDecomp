; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_meshlod_cpp_CLodMesh_gridSave_FUN_0051d420(CLodMesh *this_ptr,FILE *file_handle)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; FILE *           Stack[0x8]:4   file_handle
;
; XREF[1]:
;   shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_00516d50 at 00516db9
;
; Referenced Globals:
;   TerminatedCString s_d_006381fb
;   TerminatedCString s_d_006381ff
;   TerminatedCString s_d_00638203
;
; Called Functions:
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051d420
        ;   Label: shape_meshlod.cpp_CLodMesh_gridSave_FUN_0051d420
    PUSH ESI                            ; 0051d421
    PUSH EDI                            ; 0051d422
    PUSH EBP                            ; 0051d423
    MOV EDI,dword ptr [ESP + 0x14]      ; 0051d424
    MOV EBP,dword ptr [ESP + 0x18]      ; 0051d428
    TEST EBP,EBP                        ; 0051d42c
    JNZ 0x0051d435                      ; 0051d42e
        ;   XREF to: 0051d435 (CONDITIONAL_JUMP)  ; LAB_0051d435
    POP EBP                             ; 0051d430
        ;   Label: LAB_0051d430
    POP EDI                             ; 0051d431
    POP ESI                             ; 0051d432
    POP EBX                             ; 0051d433
    RET                                 ; 0051d434
    PUSH 0x10                           ; 0051d435
        ;   Label: LAB_0051d435
    PUSH 0x6381fb                       ; 0051d437 | = "%d\n"
    PUSH EBP                            ; 0051d43c
    XOR EBX,EBX                         ; 0051d43d
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0051d43f
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0xc                         ; 0051d444
    MOV EAX,dword ptr [EDI + 0x54]      ; 0051d447
        ;   Label: LAB_0051d447
    MOV EDX,dword ptr [EBX + EAX*0x1]   ; 0051d44a
    PUSH EDX                            ; 0051d44d
    PUSH 0x6381ff                       ; 0051d44e | = "%d\n"
    PUSH EBP                            ; 0051d453
    ADD EBX,0x4                         ; 0051d454
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0051d457
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0xc                         ; 0051d45c
    CMP EBX,0x4004                      ; 0051d45f
    JNZ 0x0051d447                      ; 0051d465
        ;   XREF to: 0051d447 (CONDITIONAL_JUMP)  ; LAB_0051d447
    XOR ESI,ESI                         ; 0051d467
    XOR EBX,EBX                         ; 0051d469
    MOV EAX,dword ptr [EDI + 0x54]      ; 0051d46b
        ;   Label: LAB_0051d46b
    CMP EBX,dword ptr [EAX + 0x4000]    ; 0051d46e
    JGE 0x0051d430                      ; 0051d474
        ;   XREF to: 0051d430 (CONDITIONAL_JUMP)  ; LAB_0051d430
    MOV EAX,dword ptr [EDI + 0x58]      ; 0051d476
    MOV EDX,dword ptr [ESI + EAX*0x1]   ; 0051d479
    PUSH EDX                            ; 0051d47c
    PUSH 0x638203                       ; 0051d47d | = "%d\n"
    PUSH EBP                            ; 0051d482
    ADD ESI,0x4                         ; 0051d483
    INC EBX                             ; 0051d486
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0051d487
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0xc                         ; 0051d48c
    JMP 0x0051d46b                      ; 0051d48f
        ;   XREF to: 0051d46b (UNCONDITIONAL_JUMP)  ; LAB_0051d46b

