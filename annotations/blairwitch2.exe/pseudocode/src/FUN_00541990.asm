; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00541990(int param_1,int param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_00547280 at 005472aa
;
; Referenced Globals:
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_01e661b8
;
; Called Functions:
;   FUN_00531e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00541990
        ;   Label: FUN_00541990
    PUSH ESI                            ; 00541991
    MOV EAX,dword ptr [ESP + 0x10]      ; 00541992
    MOV ECX,dword ptr [ESP + 0xc]       ; 00541996
    SHL EAX,0x2                         ; 0054199a
    MOV EDX,dword ptr [ESP + 0x14]      ; 0054199d
    ADD EAX,ECX                         ; 005419a1
    PUSH EDX                            ; 005419a3
    MOV EBX,dword ptr [EAX + 0x2c]      ; 005419a4
    PUSH EBX                            ; 005419a7
    MOV ESI,dword ptr [0x0061b5a8]      ; 005419a8 | DAT_0061b5a8
    PUSH ESI                            ; 005419ae | DAT_01e661b8
    CALL FUN_00531e90                   ; 005419af
        ;   XREF to: 00531e90 (UNCONDITIONAL_CALL)  ; undefined FUN_00531e90()
    ADD ESP,0xc                         ; 005419b4
    POP ESI                             ; 005419b7
    POP EBX                             ; 005419b8
    RET                                 ; 005419b9

