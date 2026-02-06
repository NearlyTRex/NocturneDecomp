; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_flamecan_cpp_CFlameCan_renderTransparent_FUN_004cb550(CFlameCan *this_ptr)
;
; Parameters:
; CFlameCan *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_flame.cpp_CFlame_FUN_004ca110
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cb550
        ;   Label: core_flamecan.cpp_CFlameCan_renderTransparent_FUN_004cb550
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cb551
    CMP dword ptr [EBX + 0x5e4],0x0     ; 004cb555
    JNZ 0x004cb566                      ; 004cb55c
        ;   XREF to: 004cb566 (CONDITIONAL_JUMP)  ; LAB_004cb566
    MOV EAX,dword ptr [EBX + 0x5e4]     ; 004cb55e
    POP EBX                             ; 004cb564
    RET                                 ; 004cb565
    LEA EAX,[EBX + 0x340]               ; 004cb566
        ;   Label: LAB_004cb566
    PUSH EAX                            ; 004cb56c
    CALL core_flame.cpp_CFlame_FUN_004ca110 ; 004cb56d
        ;   XREF to: 004ca110 (UNCONDITIONAL_CALL)  ; float core_flame.cpp_CFlame_FUN_004ca110(CFlame * this_ptr)
    ADD ESP,0x4                         ; 004cb572
    MOV EAX,dword ptr [EBX + 0x5e4]     ; 004cb575
    POP EBX                             ; 004cb57b
    RET                                 ; 004cb57c

