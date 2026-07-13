; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00494dd0(int param_1,float param_2,float param_3)
;
; Local Variables:
; undefined8       Stack[-0x1c]:8  local_1c
; undefined8       Stack[-0x14]:8  local_14
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   FUN_00494950 at 00494a1c
;
; Called Functions:
;   FUN_00563a30
;   FUN_005648c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00494dd0
        ;   Label: FUN_00494dd0
    SUB ESP,0x10                        ; 00494dd1
    MOV EBX,dword ptr [ESP + 0x18]      ; 00494dd4
    FLD float ptr [ESP + 0x1c]          ; 00494dd8
    FMUL float ptr [ESP + 0x20]         ; 00494ddc
    FADD float ptr [EBX + 0x484]        ; 00494de0
    SUB ESP,0x8                         ; 00494de6
    FST float ptr [EBX + 0x484]         ; 00494de9
    FSTP double ptr [ESP]               ; 00494def
    CALL FUN_005648c0                   ; 00494df2
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005648c0()
    MOV dword ptr [ESP + 0x8],EAX       ; 00494df7
    MOV dword ptr [ESP + 0xc],EDX       ; 00494dfb
    FLD double ptr [ESP + 0x8]          ; 00494dff
    ADD ESP,0x8                         ; 00494e03
    CALL FUN_00563a30                   ; 00494e06
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FISTP dword ptr [ESP + 0x8]         ; 00494e0b
    MOV EAX,dword ptr [ESP + 0x8]       ; 00494e0f
    MOV dword ptr [ESP + 0xc],EAX       ; 00494e13
    FILD dword ptr [ESP + 0xc]          ; 00494e17
    FSUBR float ptr [EBX + 0x484]       ; 00494e1b
    FSTP float ptr [EBX + 0x484]        ; 00494e21
    ADD ESP,0x10                        ; 00494e27
    POP EBX                             ; 00494e2a
    RET                                 ; 00494e2b

