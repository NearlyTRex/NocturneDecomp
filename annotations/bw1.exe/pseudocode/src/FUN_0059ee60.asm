; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_0059ee60(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_0059ed90
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0059ee60
        ;   Label: FUN_0059ee60
    MOV EAX,dword ptr [ESP + 0x8]       ; 0059ee61
    MOV ECX,dword ptr [EAX + 0xa14]     ; 0059ee65
    MOV EDX,dword ptr [EAX + 0xa10]     ; 0059ee6b
    CMP EDX,ECX                         ; 0059ee71
    JGE 0x0059ee93                      ; 0059ee73
        ;   XREF to: 0059ee93 (CONDITIONAL_JUMP)  ; LAB_0059ee93
    MOV DL,byte ptr [EDX + EAX*0x1 + 0x610] ; 0059ee75
    MOV ESI,dword ptr [EAX + 0xa10]     ; 0059ee7c
    INC ESI                             ; 0059ee82
    AND EDX,0xff                        ; 0059ee83
    MOV dword ptr [EAX + 0xa10],ESI     ; 0059ee89
    MOV EAX,EDX                         ; 0059ee8f
    POP ESI                             ; 0059ee91
    RET                                 ; 0059ee92
    PUSH EBX                            ; 0059ee93
        ;   Label: LAB_0059ee93
    MOV EBX,dword ptr [ESP + 0x10]      ; 0059ee94
    PUSH EBX                            ; 0059ee98
    PUSH EAX                            ; 0059ee99
    CALL FUN_0059ed90                   ; 0059ee9a
        ;   XREF to: 0059ed90 (UNCONDITIONAL_CALL)  ; undefined FUN_0059ed90()
    ADD ESP,0x8                         ; 0059ee9f
    MOV EDX,EAX                         ; 0059eea2
    POP EBX                             ; 0059eea4
    MOV EAX,EDX                         ; 0059eea5
    POP ESI                             ; 0059eea7
    RET                                 ; 0059eea8

