; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041da00(int param_1)
;
;
; XREF[6]:
;   FUN_00418b40 at 00418b7d
;   FUN_00421ca0 at 00421cc2
;   FUN_004b1c10 at 004b1c26
;   FUN_004b77e0 at 004b77e8
;   FUN_005625a0 at 005625c4
;   FUN_005ad4c0 at 005ad4e2
;
; Referenced Globals:
;   undefined4 DAT_005fcdf0
;
; Called Functions:
;   FUN_005c0357
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0041da00
        ;   Label: FUN_0041da00
    PUSH 0x5fcdf0                       ; 0041da04 | DAT_005fcdf0
    PUSH 0x8                            ; 0041da09
    ADD EAX,0xb4                        ; 0041da0b
    PUSH EAX                            ; 0041da10
    CALL FUN_005c0357                   ; 0041da11
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    SUB EAX,0xb4                        ; 0041da16
    MOV dword ptr [EAX + 0x8],0x0       ; 0041da1b
    FLD float ptr [EAX + 0x8]           ; 0041da22
    LEA EDX,[EAX + 0xc]                 ; 0041da25
    FST float ptr [EAX + 0x4]           ; 0041da28
    FSTP float ptr [EAX]                ; 0041da2b
    MOV dword ptr [EDX + 0x8],0x0       ; 0041da2d
    MOV ECX,dword ptr [EDX + 0x8]       ; 0041da34
    MOV dword ptr [EDX + 0x4],ECX       ; 0041da37
    MOV ECX,dword ptr [EDX + 0x4]       ; 0041da3a
    MOV dword ptr [EDX],ECX             ; 0041da3d
    LEA EDX,[EAX + 0xa4]                ; 0041da3f
    MOV dword ptr [EDX + 0x8],0x0       ; 0041da45
    MOV ECX,dword ptr [EDX + 0x8]       ; 0041da4c
    MOV dword ptr [EDX + 0x4],ECX       ; 0041da4f
    MOV ECX,dword ptr [EDX + 0x4]       ; 0041da52
    MOV dword ptr [EDX],ECX             ; 0041da55
    LEA EDX,[EAX + 0x4c]                ; 0041da57
    MOV dword ptr [EAX + 0x94],0x0      ; 0041da5a
    MOV dword ptr [EDX + 0x8],0x0       ; 0041da64
    MOV ECX,dword ptr [EDX + 0x8]       ; 0041da6b
    MOV dword ptr [EDX + 0x4],ECX       ; 0041da6e
    MOV ECX,dword ptr [EDX + 0x4]       ; 0041da71
    MOV dword ptr [EDX],ECX             ; 0041da74
    LEA EDX,[EAX + 0x40]                ; 0041da76
    MOV dword ptr [EDX + 0x8],0x0       ; 0041da79
    MOV ECX,dword ptr [EDX + 0x8]       ; 0041da80
    MOV dword ptr [EDX + 0x4],ECX       ; 0041da83
    MOV ECX,dword ptr [EDX + 0x4]       ; 0041da86
    MOV dword ptr [EDX],ECX             ; 0041da89
    LEA EDX,[EAX + 0x70]                ; 0041da8b
    MOV dword ptr [EDX + 0x8],0x0       ; 0041da8e
    ADD ESP,0xc                         ; 0041da95
    MOV ECX,dword ptr [EDX + 0x8]       ; 0041da98
    MOV dword ptr [EDX + 0x4],ECX       ; 0041da9b
    MOV ECX,dword ptr [EDX + 0x4]       ; 0041da9e
    MOV dword ptr [EDX],ECX             ; 0041daa1
    MOV dword ptr [EAX + 0x254],0x0     ; 0041daa3
    RET                                 ; 0041daad

