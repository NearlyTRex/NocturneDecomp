; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CStrList_clear_FUN_00482010(CStrList *this_ptr)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_script.cpp_CScript_clear_FUN_00528d50 at 00528d59
;   shape_edittool.cpp_CPickList_clear_FUN_00484f10 at 00484f3f
;   shape_edittool.cpp_CStrList_dtor_FUN_00481f40 at 00481f54
;
; Called Functions:
;   crt_unknown.c_FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00482010
        ;   Label: shape_edittool.cpp_CStrList_clear_FUN_00482010
    PUSH EBP                            ; 00482011
    MOV EDI,dword ptr [ESP + 0xc]       ; 00482012
    CMP dword ptr [EDI + 0x8],0x0       ; 00482016
    JZ 0x00482054                       ; 0048201a
        ;   XREF to: 00482054 (CONDITIONAL_JUMP)  ; LAB_00482054
    PUSH ESI                            ; 0048201c
    PUSH EBX                            ; 0048201d
    MOV ECX,dword ptr [EDI]             ; 0048201e
    XOR EBX,EBX                         ; 00482020
    TEST ECX,ECX                        ; 00482022
    JLE 0x00482046                      ; 00482024
        ;   XREF to: 00482046 (CONDITIONAL_JUMP)  ; LAB_00482046
    XOR ESI,ESI                         ; 00482026
    MOV EAX,dword ptr [EDI + 0x8]       ; 00482028
        ;   Label: LAB_00482028
    ADD EAX,ESI                         ; 0048202b
    MOV EDX,dword ptr [EAX]             ; 0048202d
    TEST EDX,EDX                        ; 0048202f
    JZ 0x0048203c                       ; 00482031
        ;   XREF to: 0048203c (CONDITIONAL_JUMP)  ; LAB_0048203c
    PUSH EDX                            ; 00482033
    CALL crt_unknown.c_FUN_005a3770     ; 00482034
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 00482039
    INC EBX                             ; 0048203c
        ;   Label: LAB_0048203c
    MOV EBP,dword ptr [EDI]             ; 0048203d
    ADD ESI,0x4                         ; 0048203f
    CMP EBX,EBP                         ; 00482042
    JL 0x00482028                       ; 00482044
        ;   XREF to: 00482028 (CONDITIONAL_JUMP)  ; LAB_00482028
    MOV EAX,dword ptr [EDI + 0x8]       ; 00482046
        ;   Label: LAB_00482046
    PUSH EAX                            ; 00482049
    CALL crt_unknown.c_FUN_005a3770     ; 0048204a
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 0048204f
    POP EBX                             ; 00482052
    POP ESI                             ; 00482053
    MOV dword ptr [EDI + 0x8],0x0       ; 00482054
        ;   Label: LAB_00482054
    MOV dword ptr [EDI + 0x4],0x0       ; 0048205b
    MOV dword ptr [EDI],0x0             ; 00482062
    POP EBP                             ; 00482068
    POP EDI                             ; 00482069
    RET                                 ; 0048206a

