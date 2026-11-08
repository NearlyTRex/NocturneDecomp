; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057b800(undefined4 *param_1)
;
;
; XREF[1]:
;   FUN_0052c0e0 at 0052c547
;
; Referenced Globals:
;   TerminatedCString s_junk_jnk_005ed539
;   undefined4 DAT_00617a08
;   undefined4 DAT_02653650
;
; Called Functions:
;   FUN_004ca9c0
;   FUN_004caac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057b800
        ;   Label: FUN_0057b800
    MOV EDX,dword ptr [0x00617a08]      ; 0057b801 | DAT_00617a08
    MOV EAX,dword ptr [ESP + 0x8]       ; 0057b807
    PUSH EDX                            ; 0057b80b
    MOV dword ptr [EAX],0x0             ; 0057b80c
    CALL FUN_004ca9c0                   ; 0057b812
        ;   XREF to: 004ca9c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ca9c0()
    ADD ESP,0x4                         ; 0057b817
    PUSH 0x5ed539                       ; 0057b81a | = "junk.jnk"
    MOV ECX,dword ptr [0x00617a08]      ; 0057b81f | DAT_00617a08
    PUSH ECX                            ; 0057b825
    MOV EBX,0x1                         ; 0057b826
    CALL FUN_004caac0                   ; 0057b82b
        ;   XREF to: 004caac0 (UNCONDITIONAL_CALL)  ; undefined FUN_004caac0()
    ADD ESP,0x8                         ; 0057b830
    MOV dword ptr [0x02653650],EBX      ; 0057b833 | DAT_02653650
    POP EBX                             ; 0057b839
    RET                                 ; 0057b83a

