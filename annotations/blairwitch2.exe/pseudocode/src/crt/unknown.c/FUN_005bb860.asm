; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bb860(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005bb938 at 005bbbcc
;
; Referenced Globals:
;   void* PTR_unkafter_morph.cpp_FUN_005c21f0_0061f65c = 005c21f0
;
; Called Functions:
;   unkafter_morph.cpp_FUN_005c21f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bb860
        ;   Label: crt_unknown.c_FUN_005bb860
    MOV EDX,dword ptr [ESP + 0x10]      ; 005bb861
    PUSH EDX                            ; 005bb865
    MOV EBX,dword ptr [ESP + 0x10]      ; 005bb866
    PUSH EBX                            ; 005bb86a
    MOV ECX,dword ptr [ESP + 0x10]      ; 005bb86b
    PUSH ECX                            ; 005bb86f
    CALL dword ptr [0x0061f65c]         ; 005bb870 | PTR_unkafter_morph.cpp_FUN_005c21f0_0061f65c
    ADD ESP,0xc                         ; 005bb876
    POP EBX                             ; 005bb879
    RET                                 ; 005bb87a

