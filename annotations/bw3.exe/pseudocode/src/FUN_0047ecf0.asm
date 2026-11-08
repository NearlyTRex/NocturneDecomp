; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0047ecf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[6]:
;   FUN_0047e940 at 0047e96e
;   FUN_0047ea10 at 0047ea49
;   FUN_0047eb10 at 0047eb58
;   FUN_004bb100 at 004bc14f
;   FUN_004bf2e0 at 004bf30b
;   FUN_00505a30 at 005062f7
;
; Called Functions:
;   FUN_0047c2c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047ecf0
        ;   Label: FUN_0047ecf0
    PUSH ESI                            ; 0047ecf1
    PUSH 0x0                            ; 0047ecf2
    MOV EDX,dword ptr [ESP + 0x20]      ; 0047ecf4
    PUSH EDX                            ; 0047ecf8
    MOV ECX,dword ptr [ESP + 0x20]      ; 0047ecf9
    PUSH ECX                            ; 0047ecfd
    MOV EBX,dword ptr [ESP + 0x20]      ; 0047ecfe
    PUSH EBX                            ; 0047ed02
    MOV ESI,dword ptr [ESP + 0x20]      ; 0047ed03
    PUSH ESI                            ; 0047ed07
    CALL FUN_0047c2c0                   ; 0047ed08
        ;   XREF to: 0047c2c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047c2c0()
    ADD ESP,0x14                        ; 0047ed0d
    POP ESI                             ; 0047ed10
    POP EBX                             ; 0047ed11
    RET                                 ; 0047ed12

