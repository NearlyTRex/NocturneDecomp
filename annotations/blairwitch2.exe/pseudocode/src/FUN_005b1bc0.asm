; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b1bc0(int param_1)
;
;
; XREF[6]:
;   FUN_004156e0 at 0041571d
;   FUN_0041bd30 at 0041bd52
;   FUN_00499270 at 00499286
;   FUN_0049ef10 at 0049ef18
;   FUN_0053ffb0 at 0053ffd4
;   FUN_005899d0 at 005899f2
;
; Referenced Globals:
;   undefined4 DAT_00601240
;
; Called Functions:
;   FUN_005b7f5f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005b1bc0
        ;   Label: FUN_005b1bc0
    PUSH 0x601240                       ; 005b1bc4 | DAT_00601240
    PUSH 0x8                            ; 005b1bc9
    ADD EAX,0xb4                        ; 005b1bcb
    PUSH EAX                            ; 005b1bd0
    CALL FUN_005b7f5f                   ; 005b1bd1
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005b7f5f()
    SUB EAX,0xb4                        ; 005b1bd6
    MOV dword ptr [EAX + 0x8],0x0       ; 005b1bdb
    FLD float ptr [EAX + 0x8]           ; 005b1be2
    LEA EDX,[EAX + 0xc]                 ; 005b1be5
    FST float ptr [EAX + 0x4]           ; 005b1be8
    FSTP float ptr [EAX]                ; 005b1beb
    MOV dword ptr [EDX + 0x8],0x0       ; 005b1bed
    MOV ECX,dword ptr [EDX + 0x8]       ; 005b1bf4
    MOV dword ptr [EDX + 0x4],ECX       ; 005b1bf7
    MOV ECX,dword ptr [EDX + 0x4]       ; 005b1bfa
    MOV dword ptr [EDX],ECX             ; 005b1bfd
    LEA EDX,[EAX + 0xa4]                ; 005b1bff
    MOV dword ptr [EDX + 0x8],0x0       ; 005b1c05
    MOV ECX,dword ptr [EDX + 0x8]       ; 005b1c0c
    MOV dword ptr [EDX + 0x4],ECX       ; 005b1c0f
    MOV ECX,dword ptr [EDX + 0x4]       ; 005b1c12
    MOV dword ptr [EDX],ECX             ; 005b1c15
    LEA EDX,[EAX + 0x4c]                ; 005b1c17
    MOV dword ptr [EAX + 0x94],0x0      ; 005b1c1a
    MOV dword ptr [EDX + 0x8],0x0       ; 005b1c24
    MOV ECX,dword ptr [EDX + 0x8]       ; 005b1c2b
    MOV dword ptr [EDX + 0x4],ECX       ; 005b1c2e
    MOV ECX,dword ptr [EDX + 0x4]       ; 005b1c31
    MOV dword ptr [EDX],ECX             ; 005b1c34
    LEA EDX,[EAX + 0x40]                ; 005b1c36
    MOV dword ptr [EDX + 0x8],0x0       ; 005b1c39
    MOV ECX,dword ptr [EDX + 0x8]       ; 005b1c40
    MOV dword ptr [EDX + 0x4],ECX       ; 005b1c43
    MOV ECX,dword ptr [EDX + 0x4]       ; 005b1c46
    MOV dword ptr [EDX],ECX             ; 005b1c49
    LEA EDX,[EAX + 0x70]                ; 005b1c4b
    MOV dword ptr [EDX + 0x8],0x0       ; 005b1c4e
    ADD ESP,0xc                         ; 005b1c55
    MOV ECX,dword ptr [EDX + 0x8]       ; 005b1c58
    MOV dword ptr [EDX + 0x4],ECX       ; 005b1c5b
    MOV ECX,dword ptr [EDX + 0x4]       ; 005b1c5e
    MOV dword ptr [EDX],ECX             ; 005b1c61
    MOV dword ptr [EAX + 0x254],0x0     ; 005b1c63
    RET                                 ; 005b1c6d

