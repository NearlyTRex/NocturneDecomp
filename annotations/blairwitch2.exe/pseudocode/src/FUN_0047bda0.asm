; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0047bda0(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[7]:
;   FUN_004b90d0 at 004b9934
;   FUN_004bbf70 at 004bc3b9
;   FUN_004e45e0 at 004e4692
;   FUN_004fd280 at 004fd3d9
;   FUN_0050b8d0 at 0050ba39
;   FUN_0050cf50 at 0050d27d
;   FUN_00522350 at 00524b5a
;
; Referenced Globals:
;   TerminatedCString s_Message_005d1fb9
;   undefined4 DAT_01c2639c
;
; Called Functions:
;   FUN_0047b800
;   FUN_005b7768
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047bda0
        ;   Label: FUN_0047bda0
    SUB ESP,0x4                         ; 0047bda1
    LEA EAX,[ESP + 0x14]                ; 0047bda4
    MOV dword ptr [ESP],EAX             ; 0047bda8
    MOV EAX,ESP                         ; 0047bdab
    PUSH EAX                            ; 0047bdad
    MOV EDX,dword ptr [ESP + 0x14]      ; 0047bdae
    PUSH EDX                            ; 0047bdb2
    PUSH 0x1c225f0                      ; 0047bdb3
    CALL FUN_005b7768                   ; 0047bdb8
        ;   XREF to: 005b7768 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7768()
    ADD ESP,0xc                         ; 0047bdbd
    MOV EBX,dword ptr [0x01c2639c]      ; 0047bdc0 | DAT_01c2639c
    PUSH EBX                            ; 0047bdc6
    PUSH 0x1c225f0                      ; 0047bdc7
    XOR ECX,ECX                         ; 0047bdcc
    PUSH 0x5d1fb9                       ; 0047bdce | = "Message"
    MOV dword ptr [ESP + 0xc],ECX       ; 0047bdd3
    CALL FUN_0047b800                   ; 0047bdd7
        ;   XREF to: 0047b800 (UNCONDITIONAL_CALL)  ; undefined FUN_0047b800()
    ADD ESP,0xc                         ; 0047bddc
    ADD ESP,0x4                         ; 0047bddf
    POP EBX                             ; 0047bde2
    RET                                 ; 0047bde3

