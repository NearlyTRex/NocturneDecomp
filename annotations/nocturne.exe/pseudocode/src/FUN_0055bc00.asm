; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0055bc00(int param_1,undefined4 *param_2)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[7]:
;   FUN_00429220 at 00429354
;   FUN_00482c80 at 00482dff
;   FUN_004980d0 at 00498264
;   FUN_004d5860 at 004d5a21
;   FUN_004f7700 at 004f77b1
;   FUN_004fdd00 at 004fde0a
;   FUN_0053a660 at 0053a742
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0055bc00
        ;   Label: FUN_0055bc00
    MOV EDX,dword ptr [ESP + 0xc]       ; 0055bc03
    MOV EAX,dword ptr [ESP + 0x10]      ; 0055bc07
    MOV ECX,dword ptr [EDX + 0xc]       ; 0055bc0b
    MOV dword ptr [ESP],ECX             ; 0055bc0e
    MOV ECX,dword ptr [EDX + 0x1c]      ; 0055bc11
    MOV EDX,dword ptr [EDX + 0x2c]      ; 0055bc14
    MOV dword ptr [ESP + 0x4],EDX       ; 0055bc17
    MOV dword ptr [EAX + 0x4],ECX       ; 0055bc1b
    MOV EDX,dword ptr [ESP]             ; 0055bc1e
    MOV dword ptr [EAX],EDX             ; 0055bc21
    MOV EDX,dword ptr [ESP + 0x4]       ; 0055bc23
    MOV dword ptr [EAX + 0x8],EDX       ; 0055bc27
    ADD ESP,0x8                         ; 0055bc2a
    RET                                 ; 0055bc2d

