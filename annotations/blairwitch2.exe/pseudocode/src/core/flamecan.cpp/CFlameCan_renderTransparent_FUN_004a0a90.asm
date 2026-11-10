; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_flamecan_cpp_CFlameCan_renderTransparent_FUN_004a0a90(CFlameCan *this_ptr)
;
; Parameters:
; CFlameCan *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_flame.cpp_CFlame_renderTransparent_FUN_0049f850
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a0a90
        ;   Label: core_flamecan.cpp_CFlameCan_renderTransparent_FUN_004a0a90
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a0a91
    CMP dword ptr [EBX + 0x89c],0x0     ; 004a0a95
    JNZ 0x004a0aa6                      ; 004a0a9c
        ;   XREF to: 004a0aa6 (CONDITIONAL_JUMP)  ; LAB_004a0aa6
    MOV EAX,dword ptr [EBX + 0x89c]     ; 004a0a9e
    POP EBX                             ; 004a0aa4
    RET                                 ; 004a0aa5
    LEA EAX,[EBX + 0x49c]               ; 004a0aa6
        ;   Label: LAB_004a0aa6
    PUSH EAX                            ; 004a0aac
    CALL core_flame.cpp_CFlame_renderTransparent_FUN_0049f850 ; 004a0aad
        ;   XREF to: 0049f850 (UNCONDITIONAL_CALL)  ; int core_flame.cpp_CFlame_renderTransparent_FUN_0049f850(CFlame * this_ptr)
    ADD ESP,0x4                         ; 004a0ab2
    MOV EAX,dword ptr [EBX + 0x89c]     ; 004a0ab5
    POP EBX                             ; 004a0abb
    RET                                 ; 004a0abc

