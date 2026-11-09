; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkaddr_004b9ab0_cpp_FUN_004b9ff0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0061d2e0
;   undefined4 DAT_0061d310
;   undefined4 DAT_01cc7f1c
;   undefined4 DAT_01cc7f38
;   undefined4 DAT_01cc8000
;
; Called Functions:
;   engine_alphabit.cpp_FUN_0040d1c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b9ff0
        ;   Label: unkaddr_004b9ab0.cpp_FUN_004b9ff0
    PUSH ESI                            ; 004b9ff1
    PUSH 0x1cc7b94                      ; 004b9ff2
    MOV EBX,0x1cc7ba8                   ; 004b9ff7
    CALL engine_alphabit.cpp_FUN_0040d1c0 ; 004b9ffc
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ba001
    LEA ESI,[EBX + 0x78]                ; 004ba004
    PUSH EBX                            ; 004ba007
        ;   Label: LAB_004ba007
    CALL engine_alphabit.cpp_FUN_0040d1c0 ; 004ba008
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD EBX,0x14                        ; 004ba00d
    ADD ESP,0x4                         ; 004ba010
    CMP EBX,ESI                         ; 004ba013
    JNZ 0x004ba007                      ; 004ba015
        ;   XREF to: 004ba007 (CONDITIONAL_JUMP)  ; LAB_004ba007
    PUSH 0x1cc7c20                      ; 004ba017
    CALL engine_alphabit.cpp_FUN_0040d1c0 ; 004ba01c
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ba021
    PUSH 0x1cc7c34                      ; 004ba024
    CALL engine_alphabit.cpp_FUN_0040d1c0 ; 004ba029
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ba02e
    PUSH 0x1cc7c48                      ; 004ba031
    CALL engine_alphabit.cpp_FUN_0040d1c0 ; 004ba036
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ba03b
    PUSH 0x1cc7c5c                      ; 004ba03e
    CALL engine_alphabit.cpp_FUN_0040d1c0 ; 004ba043
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ba048
    PUSH 0x1cc7c84                      ; 004ba04b
    CALL engine_alphabit.cpp_FUN_0040d1c0 ; 004ba050
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ba055
    PUSH 0x1cc7c98                      ; 004ba058
    CALL engine_alphabit.cpp_FUN_0040d1c0 ; 004ba05d
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ba062
    PUSH 0x1cc7cac                      ; 004ba065
    CALL engine_alphabit.cpp_FUN_0040d1c0 ; 004ba06a
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ba06f
    PUSH 0x1cc7cc0                      ; 004ba072
    MOV EBX,0xffffffff                  ; 004ba077
    CALL engine_alphabit.cpp_FUN_0040d1c0 ; 004ba07c
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    MOV EDX,0x1                         ; 004ba081
    ADD ESP,0x4                         ; 004ba086
    MOV dword ptr [0x0061d310],EBX      ; 004ba089 | DAT_0061d310
    XOR ECX,ECX                         ; 004ba08f
    XOR AH,AH                           ; 004ba091
    MOV dword ptr [0x0061d2e0],EDX      ; 004ba093 | DAT_0061d2e0
    MOV dword ptr [0x01cc7f1c],ECX      ; 004ba099 | DAT_01cc7f1c
    MOV byte ptr [0x01cc7f38],AH        ; 004ba09f | DAT_01cc7f38
    MOV dword ptr [0x01cc8000],ECX      ; 004ba0a5 | DAT_01cc8000
    POP ESI                             ; 004ba0ab
    POP EBX                             ; 004ba0ac
    RET                                 ; 004ba0ad

