; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_CScript_clear_FUN_00543740(CScript *this_ptr)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_mission.cpp_FUN_0051ba60 at 0051baa5
;   core_script.cpp_CScript_dtor_FUN_00543710 at 00543716
;   core_script.cpp_FUN_00543e00 at 00543e12
;
; Called Functions:
;   core_script.cpp_CScript_freeParsedLines_FUN_00543790
;   crt_unknown.c_FUN_005c09f0
;   shape_edittool.cpp_CPickList_clear_FUN_0049c370
;   shape_edittool.cpp_CStrList_clear_FUN_00499470
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00543740
        ;   Label: core_script.cpp_CScript_clear_FUN_00543740
    MOV EBX,dword ptr [ESP + 0x8]       ; 00543741
    LEA EAX,[EBX + 0x34]                ; 00543745
    PUSH EAX                            ; 00543748
    CALL shape_edittool.cpp_CStrList_clear_FUN_00499470 ; 00543749
        ;   XREF to: 00499470 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_clear_FUN_00499470(CStrList * this_ptr)
    ADD ESP,0x4                         ; 0054374e
    PUSH EBX                            ; 00543751
    CALL core_script.cpp_CScript_freeParsedLines_FUN_00543790 ; 00543752
        ;   XREF to: 00543790 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_freeParsedLines_FUN_00543790(CScript * this_ptr)
    MOV EDX,dword ptr [EBX + 0x24]      ; 00543757
    ADD ESP,0x4                         ; 0054375a
    TEST EDX,EDX                        ; 0054375d
    JNZ 0x00543777                      ; 0054375f
        ;   XREF to: 00543777 (CONDITIONAL_JUMP)  ; LAB_00543777
    PUSH 0x1e818c0                      ; 00543761
        ;   Label: LAB_00543761
    MOV dword ptr [EBX + 0x20],0x0      ; 00543766
    CALL shape_edittool.cpp_CPickList_clear_FUN_0049c370 ; 0054376d
        ;   XREF to: 0049c370 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_clear_FUN_0049c370(CPickList * this_ptr)
    ADD ESP,0x4                         ; 00543772
    POP EBX                             ; 00543775
    RET                                 ; 00543776
    PUSH EDX                            ; 00543777
        ;   Label: LAB_00543777
    CALL crt_unknown.c_FUN_005c09f0     ; 00543778
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 0054377d
    MOV dword ptr [EBX + 0x24],0x0      ; 00543780
    JMP 0x00543761                      ; 00543787
        ;   XREF to: 00543761 (UNCONDITIONAL_JUMP)  ; LAB_00543761

