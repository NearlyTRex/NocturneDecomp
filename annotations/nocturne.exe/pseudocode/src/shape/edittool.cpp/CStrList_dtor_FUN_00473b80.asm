; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CStrList_dtor_FUN_00473b80(int param_1,byte param_2)
;
;
; XREF[2]:
;   core_script.cpp_FUN_004fe4d0 at 004fe4e4
;   shape_edittool.cpp_CPickList_dtor_FUN_00474cf0 at 00474d26
;
; Referenced Globals:
;   undefined1* PTR_shape_edittool.cpp_CStrList_dtor_FUN_00473b80_0059ca74 = 00473b80
;   WatcomTypeInfo g_CStrListTypeInfo_0059caf0
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_edittool.cpp_CStrList_clear_FUN_00473c50
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00473b80
        ;   Label: shape_edittool.cpp_CStrList_dtor_FUN_00473b80
    MOV EBX,dword ptr [ESP + 0x8]       ; 00473b81
    TEST byte ptr [ESP + 0xc],0x4       ; 00473b85
    JNZ 0x00473ba7                      ; 00473b8a
        ;   XREF to: 00473ba7 (CONDITIONAL_JUMP)  ; LAB_00473ba7
    PUSH EBX                            ; 00473b8c
    MOV dword ptr [EBX + 0xc],0x59ca74  ; 00473b8d | PTR_shape_edittool.cpp_CStrList_dtor_FUN_00473b80_0059ca74
    CALL shape_edittool.cpp_CStrList_clear_FUN_00473c50 ; 00473b94
        ;   XREF to: 00473c50 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_clear_FUN_00473c50()
    ADD ESP,0x4                         ; 00473b99
    TEST byte ptr [ESP + 0xc],0x2       ; 00473b9c
    JNZ 0x00473bc2                      ; 00473ba1
        ;   XREF to: 00473bc2 (CONDITIONAL_JUMP)  ; LAB_00473bc2
    MOV EAX,EBX                         ; 00473ba3
    POP EBX                             ; 00473ba5
    RET                                 ; 00473ba6
    PUSH 0x59caf0                       ; 00473ba7 | g_CStrListTypeInfo_0059caf0
        ;   Label: LAB_00473ba7
    PUSH EBX                            ; 00473bac
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 00473bad
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_0056445f()
    ADD ESP,0x8                         ; 00473bb2
    PUSH EAX                            ; 00473bb5
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00473bb6
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_free_FUN_00564486()
    ADD ESP,0x4                         ; 00473bbb
    MOV EAX,EBX                         ; 00473bbe
    POP EBX                             ; 00473bc0
    RET                                 ; 00473bc1
    PUSH EBX                            ; 00473bc2
        ;   Label: LAB_00473bc2
    CALL crt_unknown.c_FUN_00564494     ; 00473bc3
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 00473bc8
    MOV EAX,EBX                         ; 00473bcb
    POP EBX                             ; 00473bcd
    RET                                 ; 00473bce

