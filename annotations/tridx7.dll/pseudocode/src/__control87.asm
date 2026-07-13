; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl __control87(uint _NewValue,uint _Mask)
;
; Parameters:
; uint             Stack[0x4]:4   _NewValue
; uint             Stack[0x8]:4   _Mask
; Local Variables:
; undefined2       Stack[-0x4]:2  local_4
;
; XREF[1]:
;   __controlfp at 100098df
;
; Called Functions:
;   __abstract_cw
;   __hw_cw
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 10009890
        ;   Label: __control87
    PUSH ESI                            ; 10009893
    FSTCW word ptr [ESP + 0x6]          ; 10009894
    MOV EAX,dword ptr [ESP + 0x6]       ; 10009899
    PUSH EAX                            ; 1000989d
    CALL __abstract_cw                  ; 1000989e
        ;   XREF to: 10009930 (UNCONDITIONAL_CALL)  ; undefined __abstract_cw()
    MOV ECX,dword ptr [ESP + 0x14]      ; 100098a3
    ADD ESP,0x4                         ; 100098a7
    MOV ESI,ECX                         ; 100098aa
    AND ECX,dword ptr [ESP + 0xc]       ; 100098ac
    NOT ESI                             ; 100098b0
    AND ESI,EAX                         ; 100098b2
    OR ESI,ECX                          ; 100098b4
    PUSH ESI                            ; 100098b6
    CALL __hw_cw                        ; 100098b7
        ;   XREF to: 100099e0 (UNCONDITIONAL_CALL)  ; undefined __hw_cw()
    MOV word ptr [ESP + 0x8],AX         ; 100098bc
    ADD ESP,0x4                         ; 100098c1
    FLDCW word ptr [ESP + 0x4]          ; 100098c4
    MOV EAX,ESI                         ; 100098c8
    POP ESI                             ; 100098ca
    ADD ESP,0x4                         ; 100098cb
    RET                                 ; 100098ce

