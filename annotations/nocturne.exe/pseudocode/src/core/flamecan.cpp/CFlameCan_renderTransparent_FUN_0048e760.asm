; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_flamecan_cpp_CFlameCan_renderTransparent_FUN_0048e760(int param_1)
;
;
; Called Functions:
;   core_flame.cpp_FUN_0048d5d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048e760
        ;   Label: core_flamecan.cpp_CFlameCan_renderTransparent_FUN_0048e760
    MOV EBX,dword ptr [ESP + 0x8]       ; 0048e761
    CMP dword ptr [EBX + 0x5d4],0x0     ; 0048e765
    JNZ 0x0048e776                      ; 0048e76c
        ;   XREF to: 0048e776 (CONDITIONAL_JUMP)  ; LAB_0048e776
    MOV EAX,dword ptr [EBX + 0x5d4]     ; 0048e76e
    POP EBX                             ; 0048e774
    RET                                 ; 0048e775
    LEA EAX,[EBX + 0x338]               ; 0048e776
        ;   Label: LAB_0048e776
    PUSH EAX                            ; 0048e77c
    CALL core_flame.cpp_FUN_0048d5d0    ; 0048e77d
        ;   XREF to: 0048d5d0 (UNCONDITIONAL_CALL)  ; int core_flame.cpp_FUN_0048d5d0(CFlame * this_ptr)
    ADD ESP,0x4                         ; 0048e782
    MOV EAX,dword ptr [EBX + 0x5d4]     ; 0048e785
    POP EBX                             ; 0048e78b
    RET                                 ; 0048e78c

