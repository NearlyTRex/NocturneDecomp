; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_netgame_cpp_FUN_0052c0ee(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d51d9c
;   undefined4 DAT_01d51da0
;
; Called Functions:
;   wincore_winrun.cpp_FUN_005b2420
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 0052c0ee
        ;   Label: core_netgame.cpp_FUN_0052c0ee
    MOV dword ptr [0x01d51da0],0x1      ; 0052c0f0 | DAT_01d51da0
    CALL wincore_winrun.cpp_FUN_005b2420 ; 0052c0fa
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005b2420()
    MOV EDX,EAX                         ; 0052c0ff
    MOV ECX,0x12                        ; 0052c101
    SAR EDX,0x1f                        ; 0052c106
    IDIV ECX                            ; 0052c109
    MOV [0x01d51d9c],EAX                ; 0052c10b | DAT_01d51d9c
    RET                                 ; 0052c110

