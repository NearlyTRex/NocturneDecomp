; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_flamecan_cpp_CFlameCan_renderTransparent_FUN_004b9340(CFlameCan *this_ptr)
;
; Parameters:
; CFlameCan *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_flame.cpp_CFlame_renderTransparent_FUN_004b8100
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b9340
        ;   Label: core_flamecan.cpp_CFlameCan_renderTransparent_FUN_004b9340
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b9341
    CMP dword ptr [EBX + 0x5e4],0x0     ; 004b9345
    JNZ 0x004b9356                      ; 004b934c
        ;   XREF to: 004b9356 (CONDITIONAL_JUMP)  ; LAB_004b9356
    MOV EAX,dword ptr [EBX + 0x5e4]     ; 004b934e
    POP EBX                             ; 004b9354
    RET                                 ; 004b9355
    LEA EAX,[EBX + 0x340]               ; 004b9356
        ;   Label: LAB_004b9356
    PUSH EAX                            ; 004b935c
    CALL core_flame.cpp_CFlame_renderTransparent_FUN_004b8100 ; 004b935d
        ;   XREF to: 004b8100 (UNCONDITIONAL_CALL)  ; int core_flame.cpp_CFlame_renderTransparent_FUN_004b8100(CFlame * this_ptr)
    ADD ESP,0x4                         ; 004b9362
    MOV EAX,dword ptr [EBX + 0x5e4]     ; 004b9365
    POP EBX                             ; 004b936b
    RET                                 ; 004b936c

