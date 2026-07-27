; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_dosio_cpp_FUN_004569a0(void)
;
; Local Variables:
; undefined        Stack[-0x32c]:1  local_32c
; undefined        Stack[-0x118]:1  local_118
; undefined4       Stack[-0x18]:4  local_18
;
; Called Functions:
;   engine_dosio.cpp_CFileFinder_ctor_FUN_00456c00
;   engine_dosio.cpp_CFileFinder_dtor_FUN_00456c20
;   engine_dosio.cpp_CFileFinder_openSearch_FUN_00456c40
;   engine_dosio.cpp_getRelativeFilePath_FUN_00456700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004569a0
        ;   Label: engine_dosio.cpp_FUN_004569a0
    SUB ESP,0x328                       ; 004569a1
    MOV EDX,dword ptr [ESP + 0x334]     ; 004569a7
    PUSH EDX                            ; 004569ae
    MOV ECX,dword ptr [ESP + 0x334]     ; 004569af
    PUSH ECX                            ; 004569b6
    LEA EAX,[ESP + 0x8]                 ; 004569b7
    PUSH EAX                            ; 004569bb
    CALL engine_dosio.cpp_getRelativeFilePath_FUN_00456700 ; 004569bc
        ;   XREF to: 00456700 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getRelativeFilePath_FUN_00456700()
    ADD ESP,0xc                         ; 004569c1
    LEA EAX,[ESP + 0x214]               ; 004569c4
    PUSH EAX                            ; 004569cb
    CALL engine_dosio.cpp_CFileFinder_ctor_FUN_00456c00 ; 004569cc
        ;   XREF to: 00456c00 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_CFileFinder_ctor_FUN_00456c00()
    ADD ESP,0x4                         ; 004569d1
    MOV EAX,ESP                         ; 004569d4
    PUSH EAX                            ; 004569d6
    LEA EAX,[ESP + 0x218]               ; 004569d7
    PUSH EAX                            ; 004569de
    CALL engine_dosio.cpp_CFileFinder_openSearch_FUN_00456c40 ; 004569df
        ;   XREF to: 00456c40 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_CFileFinder_openSearch_FUN_00456c40()
    ADD ESP,0x8                         ; 004569e4
    TEST EAX,EAX                        ; 004569e7
    JZ 0x00456a0e                       ; 004569e9
        ;   XREF to: 00456a0e (CONDITIONAL_JUMP)  ; LAB_00456a0e
    PUSH 0x0                            ; 004569eb
    LEA EAX,[ESP + 0x218]               ; 004569ed
    PUSH EAX                            ; 004569f4
    MOV EBX,dword ptr [ESP + 0x31c]     ; 004569f5
    CALL engine_dosio.cpp_CFileFinder_dtor_FUN_00456c20 ; 004569fc
        ;   XREF to: 00456c20 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_CFileFinder_dtor_FUN_00456c20()
    ADD ESP,0x8                         ; 00456a01
    MOV EAX,EBX                         ; 00456a04
    ADD ESP,0x328                       ; 00456a06
    POP EBX                             ; 00456a0c
    RET                                 ; 00456a0d
    PUSH EAX                            ; 00456a0e
        ;   Label: LAB_00456a0e
    LEA EAX,[ESP + 0x218]               ; 00456a0f
    PUSH EAX                            ; 00456a16
    MOV EBX,0xffffffff                  ; 00456a17
    CALL engine_dosio.cpp_CFileFinder_dtor_FUN_00456c20 ; 00456a1c
        ;   XREF to: 00456c20 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_CFileFinder_dtor_FUN_00456c20()
    ADD ESP,0x8                         ; 00456a21
    MOV EAX,EBX                         ; 00456a24
    ADD ESP,0x328                       ; 00456a26
    POP EBX                             ; 00456a2c
    RET                                 ; 00456a2d

