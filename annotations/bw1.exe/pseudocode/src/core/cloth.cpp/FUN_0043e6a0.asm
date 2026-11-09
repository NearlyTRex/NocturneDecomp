; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_cloth_cpp_FUN_0043e6a0(int param_1)
;
;
; XREF[2]:
;   core_cloth.cpp_CCloth_allocMemory_FUN_0043e640 at 0043e646
;   core_cloth.cpp_FUN_0043e620 at 0043e625
;
; Called Functions:
;   crt_unknown.c_FUN_005c0336
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043e6a0
        ;   Label: core_cloth.cpp_FUN_0043e6a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043e6a1
    MOV EDX,dword ptr [EBX + 0x3aafc]   ; 0043e6a5
    TEST EDX,EDX                        ; 0043e6ab
    JNZ 0x0043e6b1                      ; 0043e6ad
        ;   XREF to: 0043e6b1 (CONDITIONAL_JUMP)  ; LAB_0043e6b1
    POP EBX                             ; 0043e6af
    RET                                 ; 0043e6b0
    PUSH EDX                            ; 0043e6b1
        ;   Label: LAB_0043e6b1
    CALL crt_unknown.c_FUN_005c0336     ; 0043e6b2
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 0043e6b7
    MOV dword ptr [EBX + 0x3aafc],0x0   ; 0043e6ba
    POP EBX                             ; 0043e6c4
    RET                                 ; 0043e6c5

