; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00413250(int param_1,undefined4 *param_2)
;
; Local Variables:
; undefined        Stack[-0x14]:1  local_14
;
; Referenced Globals:
;   undefined4 DAT_0076459c
;
; Called Functions:
;   FUN_0051d380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00413250
        ;   Label: FUN_00413250
    PUSH ESI                            ; 00413251
    SUB ESP,0xc                         ; 00413252
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00413255
    MOV EDX,dword ptr [0x0076459c]      ; 00413259 | DAT_0076459c
    PUSH EDX                            ; 0041325f
    LEA EAX,[ESP + 0x4]                 ; 00413260
    PUSH EAX                            ; 00413264
    MOV EAX,dword ptr [ESP + 0x20]      ; 00413265
    ADD EAX,0x150                       ; 00413269
    PUSH EAX                            ; 0041326e
    MOV EBX,0x1                         ; 0041326f
    CALL FUN_0051d380                   ; 00413274
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; undefined FUN_0051d380()
    ADD ESP,0xc                         ; 00413279
    CMP ESI,EAX                         ; 0041327c
    JNZ 0x00413288                      ; 0041327e
        ;   XREF to: 00413288 (CONDITIONAL_JUMP)  ; LAB_00413288
    MOV EAX,EBX                         ; 00413280
    ADD ESP,0xc                         ; 00413282
    POP ESI                             ; 00413285
    POP EBX                             ; 00413286
    RET                                 ; 00413287
    MOV EDX,dword ptr [EAX]             ; 00413288
        ;   Label: LAB_00413288
    MOV dword ptr [ESI],EDX             ; 0041328a
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041328c
    MOV dword ptr [ESI + 0x4],EDX       ; 0041328f
    MOV EDX,dword ptr [EAX + 0x8]       ; 00413292
    MOV dword ptr [ESI + 0x8],EDX       ; 00413295
    MOV EAX,EBX                         ; 00413298
    ADD ESP,0xc                         ; 0041329a
    POP ESI                             ; 0041329d
    POP EBX                             ; 0041329e
    RET                                 ; 0041329f

