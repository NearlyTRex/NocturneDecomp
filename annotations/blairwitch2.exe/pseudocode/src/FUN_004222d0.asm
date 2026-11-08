; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004222d0(undefined4 *param_1)
;
;
; XREF[62]:
;   FUN_0040a050 at 0040a42d
;   FUN_0040eae0 at 0040ebc5
;   FUN_00410170 at 0041029b
;   FUN_00411a10 at 00411d50
;   FUN_00412f40 at 00413746
;   FUN_004162b0 at 0041644f
;   FUN_004186c0 at 00418dd3
;   FUN_0041c090 at 0041c537
;   FUN_0041dbe0 at 0041e0dd
;   FUN_004203a0 at 00420449
;   ... and 52 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004222d0
        ;   Label: FUN_004222d0
    MOV dword ptr [EAX + 0x28],0x0      ; 004222d4
    MOV dword ptr [EAX + 0x2c],0x0      ; 004222db
    MOV dword ptr [EAX],0xffffffff      ; 004222e2
    LEA EDX,[EAX + 0xc]                 ; 004222e8
    MOV dword ptr [EAX + 0x8],0x0       ; 004222eb
    MOV dword ptr [EDX + 0x8],0x0       ; 004222f2
    MOV ECX,dword ptr [EDX + 0x8]       ; 004222f9
    MOV dword ptr [EDX + 0x4],ECX       ; 004222fc
    MOV ECX,dword ptr [EDX + 0x4]       ; 004222ff
    MOV dword ptr [EDX],ECX             ; 00422302
    LEA EDX,[EAX + 0x1c]                ; 00422304
    MOV dword ptr [EAX + 0x18],0x41a00000 ; 00422307
    MOV dword ptr [EDX + 0x8],0x0       ; 0042230e
    MOV ECX,dword ptr [EDX + 0x8]       ; 00422315
    MOV dword ptr [EDX + 0x4],ECX       ; 00422318
    MOV ECX,dword ptr [EDX + 0x4]       ; 0042231b
    MOV dword ptr [EDX],ECX             ; 0042231e
    MOV dword ptr [EAX + 0x30],0x64     ; 00422320
    MOV dword ptr [EAX + 0x34],0x0      ; 00422327
    MOV dword ptr [EAX + 0x38],0x0      ; 0042232e
    RET                                 ; 00422335

