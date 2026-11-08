; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ba890(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_005ba8cc at 005ba8e4
;
; Called Functions:
;   FUN_005bd180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ba890
        ;   Label: FUN_005ba890
    PUSH ESI                            ; 005ba891
    SUB ESP,0x14                        ; 005ba892
    MOV EAX,dword ptr [ESP + 0x20]      ; 005ba895
    MOV ECX,dword ptr [ESP + 0x28]      ; 005ba899
    MOV EDX,0x5ba860                    ; 005ba89d | LAB_005ba860
    PUSH ECX                            ; 005ba8a2
    MOV ESI,dword ptr [ESP + 0x28]      ; 005ba8a3
    MOV dword ptr [ESP + 0xc],EAX       ; 005ba8a7
    PUSH ESI                            ; 005ba8ab
    LEA EAX,[ESP + 0x8]                 ; 005ba8ac
    MOV EBX,0x5ba888                    ; 005ba8b0 | LAB_005ba888
    PUSH EAX                            ; 005ba8b5
    MOV dword ptr [ESP + 0xc],EDX       ; 005ba8b6 | LAB_005ba860
    MOV dword ptr [ESP + 0x10],EBX      ; 005ba8ba | LAB_005ba888
    CALL FUN_005bd180                   ; 005ba8be
        ;   XREF to: 005bd180 (UNCONDITIONAL_CALL)  ; undefined FUN_005bd180()
    ADD ESP,0xc                         ; 005ba8c3
    ADD ESP,0x14                        ; 005ba8c6
    POP ESI                             ; 005ba8c9
    POP EBX                             ; 005ba8ca
    RET                                 ; 005ba8cb

