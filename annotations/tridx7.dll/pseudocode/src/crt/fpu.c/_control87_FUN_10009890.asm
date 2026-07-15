; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl crt_fpu_c__control87_FUN_10009890(uint new_value,uint mask)
;
; Parameters:
; uint             Stack[0x4]:4   new_value
; uint             Stack[0x8]:4   mask
; Local Variables:
; undefined2       Stack[-0x4]:2  local_4
;
; XREF[1]:
;   crt_fpu.c__controlfp_FUN_100098d0 at 100098df
;
; Called Functions:
;   crt_fpu.c__abstract_cw_FUN_10009930
;   crt_fpu.c__hw_cw_FUN_100099e0
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 10009890
        ;   Label: crt_fpu.c__control87_FUN_10009890
    PUSH ESI                            ; 10009893
    FSTCW word ptr [ESP + 0x6]          ; 10009894
    MOV EAX,dword ptr [ESP + 0x6]       ; 10009899
    PUSH EAX                            ; 1000989d
    CALL crt_fpu.c__abstract_cw_FUN_10009930 ; 1000989e
        ;   XREF to: 10009930 (UNCONDITIONAL_CALL)  ; uint crt_fpu.c__abstract_cw_FUN_10009930(ushort control_word)
    MOV ECX,dword ptr [ESP + 0x14]      ; 100098a3
    ADD ESP,0x4                         ; 100098a7
    MOV ESI,ECX                         ; 100098aa
    AND ECX,dword ptr [ESP + 0xc]       ; 100098ac
    NOT ESI                             ; 100098b0
    AND ESI,EAX                         ; 100098b2
    OR ESI,ECX                          ; 100098b4
    PUSH ESI                            ; 100098b6
    CALL crt_fpu.c__hw_cw_FUN_100099e0  ; 100098b7
        ;   XREF to: 100099e0 (UNCONDITIONAL_CALL)  ; uint crt_fpu.c__hw_cw_FUN_100099e0(uint control_word)
    MOV word ptr [ESP + 0x8],AX         ; 100098bc
    ADD ESP,0x4                         ; 100098c1
    FLDCW word ptr [ESP + 0x4]          ; 100098c4
    MOV EAX,ESI                         ; 100098c8
    POP ESI                             ; 100098ca
    ADD ESP,0x4                         ; 100098cb
    RET                                 ; 100098ce

