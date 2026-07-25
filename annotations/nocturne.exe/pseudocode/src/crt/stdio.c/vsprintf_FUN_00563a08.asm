; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_stdio_c_vsprintf_FUN_00563a08(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[37]:
;   FUN_0045da90 at 0045dabc
;   FUN_0045db60 at 0045db8c
;   FUN_0045dc30 at 0045dc5c
;   FUN_0045dd00 at 0045dd2c
;   FUN_0045ddd0 at 0045ddfc
;   FUN_0045dea0 at 0045decd
;   FUN_0045df80 at 0045dfad
;   FUN_0045e130 at 0045e15b
;   FUN_0045e1f0 at 0045e21b
;   FUN_0046fb40 at 0046fbac
;   ... and 27 more
;
; Called Functions:
;   FUN_00569040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00563a08
        ;   Label: crt_stdio.c_vsprintf_FUN_00563a08
    PUSH 0x5639f0                       ; 00563a09
    MOV EDX,dword ptr [ESP + 0x14]      ; 00563a0e
    PUSH EDX                            ; 00563a12
    MOV EBX,dword ptr [ESP + 0x14]      ; 00563a13
    PUSH EBX                            ; 00563a17
    MOV ECX,dword ptr [ESP + 0x14]      ; 00563a18
    PUSH ECX                            ; 00563a1c
    CALL FUN_00569040                   ; 00563a1d
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined FUN_00569040()
    ADD ESP,0x10                        ; 00563a22
    MOV EDX,dword ptr [ESP + 0x8]       ; 00563a25
    MOV byte ptr [EDX + EAX*0x1],0x0    ; 00563a29
    POP EBX                             ; 00563a2d
    RET                                 ; 00563a2e

