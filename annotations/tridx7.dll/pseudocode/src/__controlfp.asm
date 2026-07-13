; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl __controlfp(uint _NewValue,uint _Mask)
;
; Parameters:
; uint             Stack[0x4]:4   _NewValue
; uint             Stack[0x8]:4   _Mask
;
; XREF[1]:
;   __setdefaultprecision at 10006d3a
;
; Called Functions:
;   __control87
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 100098d0
        ;   Label: __controlfp
    MOV ECX,dword ptr [ESP + 0x4]       ; 100098d4
    AND EAX,0xfff7ffff                  ; 100098d8
    PUSH EAX                            ; 100098dd
    PUSH ECX                            ; 100098de
    CALL __control87                    ; 100098df
        ;   XREF to: 10009890 (UNCONDITIONAL_CALL)  ; uint __control87(uint _NewValue, uint _Mask)
    ADD ESP,0x8                         ; 100098e4
    RET                                 ; 100098e7

