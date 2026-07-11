; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0048eef0(undefined4 param_1)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   FUN_004b0580 at 004b065b
;
; Referenced Globals:
;   undefined1* PTR_LAB_0059da34 = 0048efb0
;   undefined4 DAT_0059db10
;
; Called Functions:
;   FUN_00409d30
;   FUN_005644a7
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 0048eef0
        ;   Label: FUN_0048eef0
    MOV EDX,dword ptr [ESP + 0x10]      ; 0048eef3
    PUSH EDX                            ; 0048eef7
    CALL FUN_00409d30                   ; 0048eef8
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; undefined FUN_00409d30()
    ADD ESP,0x4                         ; 0048eefd
    PUSH 0x59db10                       ; 0048ef00 | DAT_0059db10
    PUSH 0xc8                           ; 0048ef05
    ADD EAX,0x160                       ; 0048ef0a
    PUSH EAX                            ; 0048ef0f
    CALL FUN_005644a7                   ; 0048ef10
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined FUN_005644a7()
    LEA EDX,[EAX + 0xfffffea0]          ; 0048ef15
    MOV ECX,0x40a00000                  ; 0048ef1b
    MOV dword ptr [EDX + 0x14c],0x59da34 ; 0048ef20 | PTR_LAB_0059da34
    ADD ESP,0xc                         ; 0048ef2a
    MOV dword ptr [EDX + 0x15c],0x14    ; 0048ef2d
    MOV EAX,ESP                         ; 0048ef37
    MOV dword ptr [ESP],ECX             ; 0048ef39
    MOV dword ptr [ESP + 0x4],ECX       ; 0048ef3c
    MOV dword ptr [ESP + 0x8],ECX       ; 0048ef40
    LEA ECX,[EDX + 0x150]               ; 0048ef44
    CMP ECX,EAX                         ; 0048ef4a
    JNZ 0x0048ef90                      ; 0048ef4c
        ;   XREF to: 0048ef90 (CONDITIONAL_JUMP)  ; LAB_0048ef90
    MOV dword ptr [EDX + 0x2a0c],0x0    ; 0048ef4e
        ;   Label: LAB_0048ef4e
    MOV dword ptr [EDX + 0x2a08],0x0    ; 0048ef58
    MOV dword ptr [EDX + 0x2a00],0x0    ; 0048ef62
    MOV dword ptr [EDX + 0x2a10],0x0    ; 0048ef6c
    MOV dword ptr [EDX + 0x2a14],0x1    ; 0048ef76
    MOV EAX,EDX                         ; 0048ef80
    MOV dword ptr [EDX + 0x2a04],0x0    ; 0048ef82
    ADD ESP,0xc                         ; 0048ef8c
    RET                                 ; 0048ef8f
    MOV dword ptr [ECX],0x40a00000      ; 0048ef90
        ;   Label: LAB_0048ef90
    MOV EAX,dword ptr [ESP + 0x4]       ; 0048ef96
    MOV dword ptr [ECX + 0x4],EAX       ; 0048ef9a
    MOV EAX,dword ptr [ESP + 0x8]       ; 0048ef9d
    MOV dword ptr [ECX + 0x8],EAX       ; 0048efa1
    JMP 0x0048ef4e                      ; 0048efa4
        ;   XREF to: 0048ef4e (UNCONDITIONAL_JUMP)  ; LAB_0048ef4e

