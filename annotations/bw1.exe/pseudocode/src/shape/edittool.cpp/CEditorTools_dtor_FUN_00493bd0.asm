; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CEditorTools * __cdecl shape_edittool_cpp_CEditorTools_dtor_FUN_00493bd0(CEditorTools *this_ptr,uint flags)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   undefined4 DAT_01c3eb58
;   undefined4 DAT_01c3eb5c
;
; Called Functions:
;   crt_unknown.c_FUN_005c09f0
;   shape_edittool.cpp_CEditorTools_popWindowState_FUN_00496df0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00493bd0
        ;   Label: shape_edittool.cpp_CEditorTools_dtor_FUN_00493bd0
    PUSH ESI                            ; 00493bd1
    PUSH EBP                            ; 00493bd2
    MOV EDX,dword ptr [0x01c3eb5c]      ; 00493bd3 | DAT_01c3eb5c
    MOV EBX,dword ptr [ESP + 0x10]      ; 00493bd9
    TEST EDX,EDX                        ; 00493bdd
    JLE 0x00493c00                      ; 00493bdf
        ;   XREF to: 00493c00 (CONDITIONAL_JUMP)  ; LAB_00493c00
    PUSH EBX                            ; 00493be1
        ;   Label: LAB_00493be1
    CALL shape_edittool.cpp_CEditorTools_popWindowState_FUN_00496df0 ; 00493be2
        ;   XREF to: 00496df0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_popWindowState_FUN_00496df0(CEditorTools * this_ptr)
    MOV ECX,dword ptr [0x01c3eb5c]      ; 00493be7 | DAT_01c3eb5c
    ADD ESP,0x4                         ; 00493bed
    TEST ECX,ECX                        ; 00493bf0
    JG 0x00493be1                       ; 00493bf2
        ;   XREF to: 00493be1 (CONDITIONAL_JUMP)  ; LAB_00493be1
    LEA EAX,[EAX]                       ; 00493bf4
    LEA EDX,[EDX]                       ; 00493bfa
    MOV ESI,dword ptr [0x01c3eb58]      ; 00493c00 | DAT_01c3eb58
        ;   Label: LAB_00493c00
    TEST ESI,ESI                        ; 00493c06
    JNZ 0x00493c10                      ; 00493c08
        ;   XREF to: 00493c10 (CONDITIONAL_JUMP)  ; LAB_00493c10
    MOV EAX,EBX                         ; 00493c0a
    POP EBP                             ; 00493c0c
    POP ESI                             ; 00493c0d
    POP EBX                             ; 00493c0e
    RET                                 ; 00493c0f
    PUSH ESI                            ; 00493c10
        ;   Label: LAB_00493c10
    CALL crt_unknown.c_FUN_005c09f0     ; 00493c11
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    XOR EBP,EBP                         ; 00493c16
    ADD ESP,0x4                         ; 00493c18
    MOV dword ptr [0x01c3eb58],EBP      ; 00493c1b | DAT_01c3eb58
    MOV EAX,EBX                         ; 00493c21
    POP EBP                             ; 00493c23
    POP ESI                             ; 00493c24
    POP EBX                             ; 00493c25
    RET                                 ; 00493c26

