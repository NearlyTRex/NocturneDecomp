; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CEditorTools * shape_edittool_cpp_CEditorTools_dtor_FUN_0047b690(CEditorTools *this_ptr,uint flags)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   undefined4 DAT_01c25598
;   undefined4 DAT_01c2559c
;
; Called Functions:
;   crt_unknown.c_FUN_005b86a0
;   shape_edittool.cpp_CEditorTools_popWindowState_FUN_0047e780
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047b690
        ;   Label: shape_edittool.cpp_CEditorTools_dtor_FUN_0047b690
    PUSH ESI                            ; 0047b691
    PUSH EBP                            ; 0047b692
    MOV EDX,dword ptr [0x01c2559c]      ; 0047b693 | DAT_01c2559c
    MOV EBX,dword ptr [ESP + 0x10]      ; 0047b699
    TEST EDX,EDX                        ; 0047b69d
    JLE 0x0047b6c0                      ; 0047b69f
        ;   XREF to: 0047b6c0 (CONDITIONAL_JUMP)  ; LAB_0047b6c0
    PUSH EBX                            ; 0047b6a1
        ;   Label: LAB_0047b6a1
    CALL shape_edittool.cpp_CEditorTools_popWindowState_FUN_0047e780 ; 0047b6a2
        ;   XREF to: 0047e780 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_popWindowState_FUN_0047e780(CEditorTools * this_ptr)
    MOV ECX,dword ptr [0x01c2559c]      ; 0047b6a7 | DAT_01c2559c
    ADD ESP,0x4                         ; 0047b6ad
    TEST ECX,ECX                        ; 0047b6b0
    JG 0x0047b6a1                       ; 0047b6b2
        ;   XREF to: 0047b6a1 (CONDITIONAL_JUMP)  ; LAB_0047b6a1
    LEA EAX,[EAX]                       ; 0047b6b4
    LEA EDX,[EDX]                       ; 0047b6ba
    MOV ESI,dword ptr [0x01c25598]      ; 0047b6c0 | DAT_01c25598
        ;   Label: LAB_0047b6c0
    TEST ESI,ESI                        ; 0047b6c6
    JNZ 0x0047b6d0                      ; 0047b6c8
        ;   XREF to: 0047b6d0 (CONDITIONAL_JUMP)  ; LAB_0047b6d0
    MOV EAX,EBX                         ; 0047b6ca
    POP EBP                             ; 0047b6cc
    POP ESI                             ; 0047b6cd
    POP EBX                             ; 0047b6ce
    RET                                 ; 0047b6cf
    PUSH ESI                            ; 0047b6d0
        ;   Label: LAB_0047b6d0
    CALL crt_unknown.c_FUN_005b86a0     ; 0047b6d1
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    XOR EBP,EBP                         ; 0047b6d6
    ADD ESP,0x4                         ; 0047b6d8
    MOV dword ptr [0x01c25598],EBP      ; 0047b6db | DAT_01c25598
    MOV EAX,EBX                         ; 0047b6e1
    POP EBP                             ; 0047b6e3
    POP ESI                             ; 0047b6e4
    POP EBX                             ; 0047b6e5
    RET                                 ; 0047b6e6

