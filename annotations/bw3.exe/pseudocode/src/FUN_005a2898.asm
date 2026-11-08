; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a2898(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[17]:
;   FUN_00441ff0 at 00442028
;   FUN_0046a450 at 0046a47d
;   FUN_0046a660 at 0046a68a
;   FUN_0047ce80 at 0047ceaa
;   FUN_0047cee0 at 0047cf0a
;   FUN_0047cf40 at 0047cf6a
;   FUN_0047cfa0 at 0047cffd
;   FUN_0047d8c0 at 0047d8ea
;   FUN_0048b7f0 at 0048b807
;   FUN_004b0d30 at 004b0d4f
;   ... and 7 more
;
; Called Functions:
;   FUN_005a6190
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a2898
        ;   Label: FUN_005a2898
    PUSH 0x5a2880                       ; 005a2899 | LAB_005a2880
    MOV EDX,dword ptr [ESP + 0x14]      ; 005a289e
    PUSH EDX                            ; 005a28a2
    MOV EBX,dword ptr [ESP + 0x14]      ; 005a28a3
    PUSH EBX                            ; 005a28a7
    MOV ECX,dword ptr [ESP + 0x14]      ; 005a28a8
    PUSH ECX                            ; 005a28ac
    CALL FUN_005a6190                   ; 005a28ad
        ;   XREF to: 005a6190 (UNCONDITIONAL_CALL)  ; undefined FUN_005a6190()
    ADD ESP,0x10                        ; 005a28b2
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a28b5
    MOV byte ptr [EDX + EAX*0x1],0x0    ; 005a28b9
    POP EBX                             ; 005a28bd
    RET                                 ; 005a28be

