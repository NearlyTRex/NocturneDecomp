; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004f5b20(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_004f5c60 at 004f5c69
;
; Called Functions:
;   cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_0042d3f0
;   FUN_004f5b70
;
; *****************************************************************************

section .text

    SUB ESP,0x100                       ; 004f5b20
        ;   Label: FUN_004f5b20
    MOV EAX,ESP                         ; 004f5b26
    PUSH EAX                            ; 004f5b28
    MOV EDX,dword ptr [ESP + 0x10c]     ; 004f5b29
    PUSH EDX                            ; 004f5b30
    CALL cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_0042d3f0 ; 004f5b31
        ;   XREF to: 0042d3f0 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_0042d3f0()
    ADD ESP,0x8                         ; 004f5b36
    MOV EAX,ESP                         ; 004f5b39
    PUSH EAX                            ; 004f5b3b
    MOV ECX,dword ptr [ESP + 0x108]     ; 004f5b3c
    PUSH ECX                            ; 004f5b43
    CALL FUN_004f5b70                   ; 004f5b44
        ;   XREF to: 004f5b70 (UNCONDITIONAL_CALL)  ; undefined FUN_004f5b70()
    ADD ESP,0x8                         ; 004f5b49
    ADD ESP,0x100                       ; 004f5b4c
    LEA EAX,[EAX]                       ; 004f5b52
    LEA EDX,[EDX]                       ; 004f5b58
    MOV EAX,EAX                         ; 004f5b5e
    RET                                 ; 004f5b60

