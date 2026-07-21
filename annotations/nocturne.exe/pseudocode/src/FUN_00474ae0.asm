; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00474ae0(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; Called Functions:
;   crt_file.c_makepath_FUN_0056626c
;   crt_stdlib.c__fullpath_FUN_00565d00
;   crt_string.c_splitpath_FUN_00566498
;   engine_dosio.cpp_CFileFinder_closeSearch_FUN_00456d40
;   engine_dosio.cpp_CFileFinder_ctor_FUN_00456c00
;   engine_dosio.cpp_CFileFinder_dtor_FUN_00456c20
;   engine_dosio.cpp_CFileFinder_findNext_FUN_00456cc0
;   engine_dosio.cpp_CFileFinder_openSearch_FUN_00456c40
;   shape_edittool.cpp_CStrList_add_FUN_00473cb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00474ae0
        ;   Label: FUN_00474ae0
    SUB ESP,0x824                       ; 00474ae1
    MOV EBX,dword ptr [ESP + 0x82c]     ; 00474ae7
    LEA EAX,[ESP + 0x420]               ; 00474aee
    PUSH EAX                            ; 00474af5
    LEA EAX,[ESP + 0x524]               ; 00474af6
    PUSH EAX                            ; 00474afd
    LEA EAX,[ESP + 0x728]               ; 00474afe
    PUSH EAX                            ; 00474b05
    LEA EAX,[ESP + 0x82c]               ; 00474b06
    PUSH EAX                            ; 00474b0d
    MOV EDX,dword ptr [ESP + 0x840]     ; 00474b0e
    PUSH EDX                            ; 00474b15
    CALL crt_string.c_splitpath_FUN_00566498 ; 00474b16
        ;   XREF to: 00566498 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_splitpath_FUN_00566498()
    ADD ESP,0x14                        ; 00474b1b
    LEA EAX,[ESP + 0x420]               ; 00474b1e
    PUSH EAX                            ; 00474b25
    LEA EAX,[ESP + 0x524]               ; 00474b26
    PUSH EAX                            ; 00474b2d
    LEA EAX,[ESP + 0x728]               ; 00474b2e
    PUSH EAX                            ; 00474b35
    PUSH 0x0                            ; 00474b36
    LEA EAX,[ESP + 0x630]               ; 00474b38
    PUSH EAX                            ; 00474b3f
    CALL crt_file.c_makepath_FUN_0056626c ; 00474b40
        ;   XREF to: 0056626c (UNCONDITIONAL_CALL)  ; undefined crt_file.c_makepath_FUN_0056626c()
    ADD ESP,0x14                        ; 00474b45
    LEA EAX,[ESP + 0x420]               ; 00474b48
    PUSH EAX                            ; 00474b4f
    LEA EAX,[ESP + 0x524]               ; 00474b50
    PUSH EAX                            ; 00474b57
    PUSH 0x0                            ; 00474b58
    PUSH 0x0                            ; 00474b5a
    MOV ECX,dword ptr [ESP + 0x844]     ; 00474b5c
    PUSH ECX                            ; 00474b63
    CALL crt_string.c_splitpath_FUN_00566498 ; 00474b64
        ;   XREF to: 00566498 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_splitpath_FUN_00566498()
    ADD ESP,0x14                        ; 00474b69
    LEA EAX,[ESP + 0x420]               ; 00474b6c
    PUSH EAX                            ; 00474b73
    LEA EAX,[ESP + 0x524]               ; 00474b74
    PUSH EAX                            ; 00474b7b
    LEA EAX,[ESP + 0x628]               ; 00474b7c
    PUSH EAX                            ; 00474b83
    LEA EAX,[ESP + 0x82c]               ; 00474b84
    PUSH EAX                            ; 00474b8b
    LEA EAX,[ESP + 0x32c]               ; 00474b8c
    PUSH EAX                            ; 00474b93
    CALL crt_file.c_makepath_FUN_0056626c ; 00474b94
        ;   XREF to: 0056626c (UNCONDITIONAL_CALL)  ; undefined crt_file.c_makepath_FUN_0056626c()
    ADD ESP,0x14                        ; 00474b99
    MOV EAX,ESP                         ; 00474b9c
    PUSH EAX                            ; 00474b9e
    CALL engine_dosio.cpp_CFileFinder_ctor_FUN_00456c00 ; 00474b9f
        ;   XREF to: 00456c00 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_CFileFinder_ctor_FUN_00456c00()
    ADD ESP,0x4                         ; 00474ba4
    LEA EAX,[ESP + 0x31c]               ; 00474ba7
    PUSH EAX                            ; 00474bae
    LEA EAX,[ESP + 0x4]                 ; 00474baf
    PUSH EAX                            ; 00474bb3
    CALL engine_dosio.cpp_CFileFinder_openSearch_FUN_00456c40 ; 00474bb4
        ;   XREF to: 00456c40 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_CFileFinder_openSearch_FUN_00456c40()
    ADD ESP,0x8                         ; 00474bb9
    CMP byte ptr [ESP],0x0              ; 00474bbc
    JZ 0x00474c60                       ; 00474bc0
        ;   XREF to: 00474c60 (CONDITIONAL_JUMP)  ; LAB_00474c60
    LEA EAX,[ESP + 0x420]               ; 00474bc6
        ;   Label: LAB_00474bc6
    PUSH EAX                            ; 00474bcd
    LEA EAX,[ESP + 0x524]               ; 00474bce
    PUSH EAX                            ; 00474bd5
    PUSH 0x0                            ; 00474bd6
    PUSH 0x0                            ; 00474bd8
    LEA EAX,[ESP + 0x10]                ; 00474bda
    PUSH EAX                            ; 00474bde
    CALL crt_string.c_splitpath_FUN_00566498 ; 00474bdf
        ;   XREF to: 00566498 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_splitpath_FUN_00566498()
    ADD ESP,0x14                        ; 00474be4
    LEA EAX,[ESP + 0x420]               ; 00474be7
    PUSH EAX                            ; 00474bee
    LEA EAX,[ESP + 0x524]               ; 00474bef
    PUSH EAX                            ; 00474bf6
    LEA EAX,[ESP + 0x628]               ; 00474bf7
    PUSH EAX                            ; 00474bfe
    LEA EAX,[ESP + 0x82c]               ; 00474bff
    PUSH EAX                            ; 00474c06
    LEA EAX,[ESP + 0x124]               ; 00474c07
    PUSH EAX                            ; 00474c0e
    CALL crt_file.c_makepath_FUN_0056626c ; 00474c0f
        ;   XREF to: 0056626c (UNCONDITIONAL_CALL)  ; undefined crt_file.c_makepath_FUN_0056626c()
    ADD ESP,0x14                        ; 00474c14
    PUSH 0x104                          ; 00474c17
    LEA EAX,[ESP + 0x118]               ; 00474c1c
    PUSH EAX                            ; 00474c23
    LEA EAX,[ESP + 0x220]               ; 00474c24
    PUSH EAX                            ; 00474c2b
    CALL crt_stdlib.c__fullpath_FUN_00565d00 ; 00474c2c
        ;   XREF to: 00565d00 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__fullpath_FUN_00565d00()
    ADD ESP,0xc                         ; 00474c31
    LEA EAX,[ESP + 0x218]               ; 00474c34
    PUSH EAX                            ; 00474c3b
    PUSH EBX                            ; 00474c3c
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 00474c3d
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_add_FUN_00473cb0()
    ADD ESP,0x8                         ; 00474c42
    MOV EAX,ESP                         ; 00474c45
    PUSH EAX                            ; 00474c47
    CALL engine_dosio.cpp_CFileFinder_findNext_FUN_00456cc0 ; 00474c48
        ;   XREF to: 00456cc0 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_CFileFinder_findNext_FUN_00456cc0()
    ADD ESP,0x4                         ; 00474c4d
    CMP byte ptr [ESP],0x0              ; 00474c50
    JNZ 0x00474bc6                      ; 00474c54
        ;   XREF to: 00474bc6 (CONDITIONAL_JUMP)  ; LAB_00474bc6
    LEA EAX,[EAX]                       ; 00474c5a
    MOV EAX,ESP                         ; 00474c60
        ;   Label: LAB_00474c60
    PUSH EAX                            ; 00474c62
    CALL engine_dosio.cpp_CFileFinder_closeSearch_FUN_00456d40 ; 00474c63
        ;   XREF to: 00456d40 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_CFileFinder_closeSearch_FUN_00456d40()
    ADD ESP,0x4                         ; 00474c68
    PUSH 0x0                            ; 00474c6b
    LEA EAX,[ESP + 0x4]                 ; 00474c6d
    PUSH EAX                            ; 00474c71
    CALL engine_dosio.cpp_CFileFinder_dtor_FUN_00456c20 ; 00474c72
        ;   XREF to: 00456c20 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_CFileFinder_dtor_FUN_00456c20()
    ADD ESP,0x8                         ; 00474c77
    ADD ESP,0x824                       ; 00474c7a
    POP EBX                             ; 00474c80
    RET                                 ; 00474c81

