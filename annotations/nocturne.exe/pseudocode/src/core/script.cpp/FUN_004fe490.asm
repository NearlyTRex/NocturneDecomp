; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CScript * __cdecl core_script_cpp_FUN_004fe490(CScript *this_ptr)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_script.cpp_staticInit_FUN_004fde80 at 004fde9f
;
; Called Functions:
;   shape_edittool.cpp_CStrList_ctor_FUN_00473b60
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004fe490
        ;   Label: core_script.cpp_FUN_004fe490
    ADD EAX,0x30                        ; 004fe494
    PUSH EAX                            ; 004fe497
    CALL shape_edittool.cpp_CStrList_ctor_FUN_00473b60 ; 004fe498
        ;   XREF to: 00473b60 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_ctor_FUN_00473b60(CStrList * this_ptr)
    MOV dword ptr [EAX + -0x8],0x0      ; 004fe49d
    MOV dword ptr [EAX + -0x4],0x0      ; 004fe4a4
    MOV dword ptr [EAX + -0x14],0x0     ; 004fe4ab
    MOV dword ptr [EAX + -0x10],0x0     ; 004fe4b2
    ADD ESP,0x4                         ; 004fe4b9
    MOV dword ptr [EAX + -0xc],0x0      ; 004fe4bc
    SUB EAX,0x30                        ; 004fe4c3
    RET                                 ; 004fe4c6

