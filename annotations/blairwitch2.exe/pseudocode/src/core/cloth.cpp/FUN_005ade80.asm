; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_cloth_cpp_FUN_005ade80(int param_1)
;
;
; XREF[2]:
;   core_cloth.cpp_CCloth_allocMemory_FUN_005ade20 at 005ade26
;   core_necklace.cpp_FUN_005ade00 at 005ade05
;
; Called Functions:
;   crt_unknown.c_FUN_005b7fce
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ade80
        ;   Label: core_cloth.cpp_FUN_005ade80
    MOV EBX,dword ptr [ESP + 0x8]       ; 005ade81
    MOV EDX,dword ptr [EBX + 0x3aafc]   ; 005ade85
    TEST EDX,EDX                        ; 005ade8b
    JNZ 0x005ade91                      ; 005ade8d
        ;   XREF to: 005ade91 (CONDITIONAL_JUMP)  ; LAB_005ade91
    POP EBX                             ; 005ade8f
    RET                                 ; 005ade90
    PUSH EDX                            ; 005ade91
        ;   Label: LAB_005ade91
    CALL crt_unknown.c_FUN_005b7fce     ; 005ade92
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 005ade97
    MOV dword ptr [EBX + 0x3aafc],0x0   ; 005ade9a
    POP EBX                             ; 005adea4
    RET                                 ; 005adea5

