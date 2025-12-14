; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_stranger.cpp_FUN_005c6970()
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005c6970
        ;   Label: core_stranger.cpp_FUN_005c6970
    MOV EAX,dword ptr [ESP + 0x4]       ; 005c6974
    ADD EAX,0x3fe64                     ; 005c6978
    CMP EAX,EDX                         ; 005c697d
    JNZ 0x005c6982                      ; 005c697f
        ;   XREF to: 005c6982 (CONDITIONAL_JUMP)  ; LAB_005c6982
    RET                                 ; 005c6981
    MOV ECX,dword ptr [EDX]             ; 005c6982
        ;   Label: LAB_005c6982
    MOV dword ptr [EAX],ECX             ; 005c6984
    MOV ECX,dword ptr [EDX + 0x4]       ; 005c6986
    MOV dword ptr [EAX + 0x4],ECX       ; 005c6989
    MOV ECX,dword ptr [EDX + 0x8]       ; 005c698c
    MOV dword ptr [EAX + 0x8],ECX       ; 005c698f
    RET                                 ; 005c6992

