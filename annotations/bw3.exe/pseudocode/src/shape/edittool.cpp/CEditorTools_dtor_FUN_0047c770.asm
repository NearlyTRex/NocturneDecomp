; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CEditorTools * __cdecl shape_edittool_cpp_CEditorTools_dtor_FUN_0047c770(CEditorTools *this_ptr,uint flags)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   undefined4 DAT_01c5b0e8
;   undefined4 DAT_01c5b104
;
; Called Functions:
;   crt_unknown.c_FUN_005a3770
;   shape_edittool.cpp_CEditorTools_popWindowState_FUN_0047f990
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047c770
        ;   Label: shape_edittool.cpp_CEditorTools_dtor_FUN_0047c770
    PUSH ESI                            ; 0047c771
    PUSH EBP                            ; 0047c772
    MOV EDX,dword ptr [0x01c5b104]      ; 0047c773 | DAT_01c5b104
    MOV EBX,dword ptr [ESP + 0x10]      ; 0047c779
    TEST EDX,EDX                        ; 0047c77d
    JLE 0x0047c7a0                      ; 0047c77f
        ;   XREF to: 0047c7a0 (CONDITIONAL_JUMP)  ; LAB_0047c7a0
    PUSH EBX                            ; 0047c781
        ;   Label: LAB_0047c781
    CALL shape_edittool.cpp_CEditorTools_popWindowState_FUN_0047f990 ; 0047c782
        ;   XREF to: 0047f990 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_popWindowState_FUN_0047f990(CEditorTools * this_ptr)
    MOV ECX,dword ptr [0x01c5b104]      ; 0047c787 | DAT_01c5b104
    ADD ESP,0x4                         ; 0047c78d
    TEST ECX,ECX                        ; 0047c790
    JG 0x0047c781                       ; 0047c792
        ;   XREF to: 0047c781 (CONDITIONAL_JUMP)  ; LAB_0047c781
    LEA EAX,[EAX]                       ; 0047c794
    LEA EDX,[EDX]                       ; 0047c79a
    MOV ESI,dword ptr [0x01c5b0e8]      ; 0047c7a0 | DAT_01c5b0e8
        ;   Label: LAB_0047c7a0
    TEST ESI,ESI                        ; 0047c7a6
    JNZ 0x0047c7b0                      ; 0047c7a8
        ;   XREF to: 0047c7b0 (CONDITIONAL_JUMP)  ; LAB_0047c7b0
    MOV EAX,EBX                         ; 0047c7aa
    POP EBP                             ; 0047c7ac
    POP ESI                             ; 0047c7ad
    POP EBX                             ; 0047c7ae
    RET                                 ; 0047c7af
    PUSH ESI                            ; 0047c7b0
        ;   Label: LAB_0047c7b0
    CALL crt_unknown.c_FUN_005a3770     ; 0047c7b1
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    XOR EBP,EBP                         ; 0047c7b6
    ADD ESP,0x4                         ; 0047c7b8
    MOV dword ptr [0x01c5b0e8],EBP      ; 0047c7bb | DAT_01c5b0e8
    MOV EAX,EBX                         ; 0047c7c1
    POP EBP                             ; 0047c7c3
    POP ESI                             ; 0047c7c4
    POP EBX                             ; 0047c7c5
    RET                                 ; 0047c7c6

