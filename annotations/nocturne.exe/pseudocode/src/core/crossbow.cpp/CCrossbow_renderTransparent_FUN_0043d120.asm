; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_crossbow_cpp_CCrossbow_renderTransparent_FUN_0043d120(int param_1)
;
;
; Called Functions:
;   core_flame.cpp_CFlame_renderTransparent_FUN_0048d5d0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0043d120
        ;   Label: core_crossbow.cpp_CCrossbow_renderTransparent_FUN_0043d120
    CMP dword ptr [EAX + 0x570],0x0     ; 0043d124
    JNZ 0x0043d130                      ; 0043d12b
        ;   XREF to: 0043d130 (CONDITIONAL_JUMP)  ; LAB_0043d130
    XOR EAX,EAX                         ; 0043d12d
    RET                                 ; 0043d12f
    ADD EAX,0x574                       ; 0043d130
        ;   Label: LAB_0043d130
    PUSH EAX                            ; 0043d135
    CALL core_flame.cpp_CFlame_renderTransparent_FUN_0048d5d0 ; 0043d136
        ;   XREF to: 0048d5d0 (UNCONDITIONAL_CALL)  ; int core_flame.cpp_CFlame_renderTransparent_FUN_0048d5d0(CFlame * this_ptr)
    MOV EAX,0x1                         ; 0043d13b
    ADD ESP,0x4                         ; 0043d140
    RET                                 ; 0043d143

