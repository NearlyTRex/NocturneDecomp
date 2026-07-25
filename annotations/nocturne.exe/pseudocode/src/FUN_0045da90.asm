; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045da90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
; Local Variables:
; undefined        Stack[-0x1010]:1  local_1010
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_0045e370 at 0045e7f0
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_0045da30
;   crt_stdio.c_vsprintf_FUN_00563a08
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045da90
        ;   Label: FUN_0045da90
    PUSH ESI                            ; 0045da91
    PUSH EDI                            ; 0045da92
    SUB ESP,0x1004                      ; 0045da93
    LEA EAX,[ESP + 0x1024]              ; 0045da99
    MOV dword ptr [ESP + 0x1000],EAX    ; 0045daa0
    LEA EAX,[ESP + 0x1000]              ; 0045daa7
    PUSH EAX                            ; 0045daae
    MOV EDX,dword ptr [ESP + 0x1024]    ; 0045daaf
    PUSH EDX                            ; 0045dab6
    LEA EAX,[ESP + 0x8]                 ; 0045dab7
    PUSH EAX                            ; 0045dabb
    CALL crt_stdio.c_vsprintf_FUN_00563a08 ; 0045dabc
        ;   XREF to: 00563a08 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_00563a08()
    ADD ESP,0xc                         ; 0045dac1
    MOV EBX,dword ptr [ESP + 0x101c]    ; 0045dac4
    PUSH EBX                            ; 0045dacb
    MOV ESI,dword ptr [ESP + 0x101c]    ; 0045dacc
    PUSH ESI                            ; 0045dad3
    LEA EAX,[ESP + 0x8]                 ; 0045dad4
    PUSH EAX                            ; 0045dad8
    MOV EDI,dword ptr [ESP + 0x1020]    ; 0045dad9
    XOR ECX,ECX                         ; 0045dae0
    PUSH EDI                            ; 0045dae2
    MOV dword ptr [ESP + 0x1010],ECX    ; 0045dae3
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_0045da30 ; 0045daea
        ;   XREF to: 0045da30 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_0045da30()
    ADD ESP,0x10                        ; 0045daef
    ADD ESP,0x1004                      ; 0045daf2
    POP EDI                             ; 0045daf8
    POP ESI                             ; 0045daf9
    POP EBX                             ; 0045dafa
    RET                                 ; 0045dafb

