; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_0057dba0(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[2]:
;   FUN_004340f0 at 0043412c
;   FUN_00441f50 at 00442015
;
; Referenced Globals:
;   undefined1* PTR_FUN_005fd484 = 0057dc10
;
; Called Functions:
;   FUN_0057d860
;   FUN_0057dd90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057dba0
        ;   Label: FUN_0057dba0
    PUSH ESI                            ; 0057dba1
    MOV EDX,dword ptr [ESP + 0xc]       ; 0057dba2
    PUSH EDX                            ; 0057dba6
    CALL FUN_0057d860                   ; 0057dba7
        ;   XREF to: 0057d860 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d860()
    ADD ESP,0x4                         ; 0057dbac
    MOV ECX,dword ptr [ESP + 0x14]      ; 0057dbaf
    PUSH ECX                            ; 0057dbb3
    MOV ESI,dword ptr [ESP + 0x14]      ; 0057dbb4
    PUSH ESI                            ; 0057dbb8
    MOV dword ptr [EAX],0x5fd484        ; 0057dbb9 | PTR_FUN_005fd484
    PUSH EAX                            ; 0057dbbf
    MOV EBX,EAX                         ; 0057dbc0
    MOV dword ptr [EAX + 0x4],0x0       ; 0057dbc2
    CALL FUN_0057dd90                   ; 0057dbc9
        ;   XREF to: 0057dd90 (UNCONDITIONAL_CALL)  ; undefined FUN_0057dd90()
    ADD ESP,0xc                         ; 0057dbce
    MOV EAX,EBX                         ; 0057dbd1
    POP ESI                             ; 0057dbd3
    POP EBX                             ; 0057dbd4
    RET                                 ; 0057dbd5

