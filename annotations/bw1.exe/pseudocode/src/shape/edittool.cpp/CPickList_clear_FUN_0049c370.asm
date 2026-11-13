; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CPickList_clear_FUN_0049c370(CPickList *this_ptr)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   core_game.cpp_CGame_runGameSession_FUN_004cf5e0 at 004cf8f9
;   core_game.cpp_FUN_004d7250 at 004d760b
;   core_script.cpp_CScript_clear_FUN_00543740 at 0054376d
;   core_script.cpp_FUN_00544100 at 0054412c
;   shape_edittool.cpp_CPickList_dtor_FUN_0049a710 at 0049a724
;
; Called Functions:
;   crt_unknown.c_FUN_005c09f0
;   shape_edittool.cpp_CStrList_clear_FUN_00499470
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049c370
        ;   Label: shape_edittool.cpp_CPickList_clear_FUN_0049c370
    PUSH ESI                            ; 0049c371
    MOV EBX,dword ptr [ESP + 0xc]       ; 0049c372
    MOV EDX,dword ptr [EBX + 0x1b0]     ; 0049c376
    TEST EDX,EDX                        ; 0049c37c
    JNZ 0x0049c3aa                      ; 0049c37e
        ;   XREF to: 0049c3aa (CONDITIONAL_JUMP)  ; LAB_0049c3aa
    MOV ESI,dword ptr [EBX + 0x1b8]     ; 0049c380
        ;   Label: LAB_0049c380
    MOV dword ptr [EBX + 0x1ac],0x0     ; 0049c386
    TEST ESI,ESI                        ; 0049c390
    JNZ 0x0049c3bf                      ; 0049c392
        ;   XREF to: 0049c3bf (CONDITIONAL_JUMP)  ; LAB_0049c3bf
    PUSH EBX                            ; 0049c394
        ;   Label: LAB_0049c394
    MOV dword ptr [EBX + 0x1b4],0x0     ; 0049c395
    CALL shape_edittool.cpp_CStrList_clear_FUN_00499470 ; 0049c39f
        ;   XREF to: 00499470 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_clear_FUN_00499470(CStrList * this_ptr)
    ADD ESP,0x4                         ; 0049c3a4
    POP ESI                             ; 0049c3a7
    POP EBX                             ; 0049c3a8
    RET                                 ; 0049c3a9
    PUSH EDX                            ; 0049c3aa
        ;   Label: LAB_0049c3aa
    CALL crt_unknown.c_FUN_005c09f0     ; 0049c3ab
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 0049c3b0
    MOV dword ptr [EBX + 0x1b0],0x0     ; 0049c3b3
    JMP 0x0049c380                      ; 0049c3bd
        ;   XREF to: 0049c380 (UNCONDITIONAL_JUMP)  ; LAB_0049c380
    PUSH ESI                            ; 0049c3bf
        ;   Label: LAB_0049c3bf
    CALL crt_unknown.c_FUN_005c09f0     ; 0049c3c0
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 0049c3c5
    MOV dword ptr [EBX + 0x1b8],0x0     ; 0049c3c8
    JMP 0x0049c394                      ; 0049c3d2
        ;   XREF to: 0049c394 (UNCONDITIONAL_JUMP)  ; LAB_0049c394

