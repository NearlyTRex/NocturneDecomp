; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_cloth.cpp_FUN_0043e170()
;
;
; XREF[1]:
;   core_stranger.cpp_CStranger_FUN_005c6220 at 005c6544
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0043e170
        ;   Label: core_cloth.cpp_FUN_0043e170
    LEA EAX,[EDX*0x8 + 0x0]             ; 0043e174
    ADD EAX,EDX                         ; 0043e17b
    SHL EAX,0x3                         ; 0043e17d
    SUB EAX,EDX                         ; 0043e180
    MOV EDX,dword ptr [ESP + 0x4]       ; 0043e182
    SHL EAX,0x2                         ; 0043e186
    ADD EAX,EDX                         ; 0043e189
    MOV dword ptr [EAX + 0x57b0],0xffffffff ; 0043e18b
    MOV dword ptr [EAX + 0x574c],0x0    ; 0043e195
    RET                                 ; 0043e19f

