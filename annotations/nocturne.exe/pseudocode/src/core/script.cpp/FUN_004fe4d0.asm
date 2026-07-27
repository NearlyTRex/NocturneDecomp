; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_script_cpp_FUN_004fe4d0(int param_1)
;
;
; Called Functions:
;   core_script.cpp_FUN_004fe500
;   shape_edittool.cpp_CStrList_dtor_FUN_00473b80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fe4d0
        ;   Label: core_script.cpp_FUN_004fe4d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004fe4d1
    PUSH EBX                            ; 004fe4d5
    CALL core_script.cpp_FUN_004fe500   ; 004fe4d6
        ;   XREF to: 004fe500 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_004fe500()
    ADD ESP,0x4                         ; 004fe4db
    PUSH 0x0                            ; 004fe4de
    ADD EBX,0x30                        ; 004fe4e0
    PUSH EBX                            ; 004fe4e3
    CALL shape_edittool.cpp_CStrList_dtor_FUN_00473b80 ; 004fe4e4
        ;   XREF to: 00473b80 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_dtor_FUN_00473b80()
    ADD ESP,0x8                         ; 004fe4e9
    SUB EAX,0x30                        ; 004fe4ec
    POP EBX                             ; 004fe4ef
    RET                                 ; 004fe4f0

