; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_boxactor_cpp_CLightActor_FUN_00423440(void)
;
; Local Variables:
; undefined        Stack[-0x13c]:1  local_13c
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_boxactor.cpp_CLightActor_FUN_004234e0 at 0042355b
;
; Referenced Globals:
;   TerminatedCString s_Enter_FOV_mm_for_CLightA_006169de
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   undefined4 g_CLightActorClassInfo.name_hash
;   CEditorTools g_CEditorToolsInstance
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00423440
        ;   Label: core_boxactor.cpp_CLightActor_FUN_00423440
    PUSH ESI                            ; 00423441
    PUSH EDI                            ; 00423442
    SUB ESP,0x130                       ; 00423443
    MOV EDX,dword ptr [0x00822c84]      ; 00423449 | g_CLightActorClassInfo.name_hash
    PUSH EDX                            ; 0042344f
    MOV ECX,dword ptr [ESP + 0x144]     ; 00423450
    PUSH ECX                            ; 00423457
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 00423458
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0042345d
    MOV ESI,dword ptr [ESP + 0x140]     ; 00423460
    LEA EBX,[EAX + 0x670]               ; 00423467
    PUSH ESI                            ; 0042346d
    LEA EAX,[ESP + 0x4]                 ; 0042346e
    PUSH 0x6169de                       ; 00423472 | = "Enter FOV (mm) for CLightActor %s"
    FLD float ptr [EBX + 0x38]          ; 00423477
    PUSH EAX                            ; 0042347a
    FSTP float ptr [ESP + 0x138]        ; 0042347b
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00423482
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00423487
    PUSH 0x1                            ; 0042348a
    PUSH 0x461c3c00                     ; 0042348c
    PUSH 0x3f800000                     ; 00423491
    PUSH 0x1                            ; 00423496
    LEA EAX,[ESP + 0x13c]               ; 00423498
    PUSH EAX                            ; 0042349f
    LEA EAX,[ESP + 0x14]                ; 004234a0
    PUSH EAX                            ; 004234a4
    MOV EDI,dword ptr [0x00678a60]      ; 004234a5 | g_CEditorToolsPtr
    PUSH EDI                            ; 004234ab | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0 ; 004234ac
        ;   XREF to: 004a00f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0(CEditorTools * this_ptr, char * prompt_text, float * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 004234b1
    TEST EAX,EAX                        ; 004234b4
    JNZ 0x004234c2                      ; 004234b6
        ;   XREF to: 004234c2 (CONDITIONAL_JUMP)  ; LAB_004234c2
    ADD ESP,0x130                       ; 004234b8
    POP EDI                             ; 004234be
    POP ESI                             ; 004234bf
    POP EBX                             ; 004234c0
    RET                                 ; 004234c1
    MOV EAX,dword ptr [ESP + 0x12c]     ; 004234c2
        ;   Label: LAB_004234c2
    MOV dword ptr [EBX + 0x38],EAX      ; 004234c9
    MOV EAX,0x1                         ; 004234cc
    ADD ESP,0x130                       ; 004234d1
    POP EDI                             ; 004234d7
    POP ESI                             ; 004234d8
    POP EBX                             ; 004234d9
    RET                                 ; 004234da

