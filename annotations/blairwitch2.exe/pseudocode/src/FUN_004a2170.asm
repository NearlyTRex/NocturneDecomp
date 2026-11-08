; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004a2170(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
; Local Variables:
; undefined        Stack[-0x108]:1  local_108
;
; XREF[1]:
;   FUN_004a2cc0 at 004a2e37
;
; Referenced Globals:
;   void* PTR_FUN_005f6ee4 = 004a2200
;
; Called Functions:
;   FUN_0040d420
;   FUN_0040d5a0
;   FUN_00461070
;   FUN_004a1e60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a2170
        ;   Label: FUN_004a2170
    PUSH ESI                            ; 004a2171
    SUB ESP,0x100                       ; 004a2172
    MOV EBX,dword ptr [ESP + 0x10c]     ; 004a2178
    PUSH EBX                            ; 004a217f
    CALL FUN_004a1e60                   ; 004a2180
        ;   XREF to: 004a1e60 (UNCONDITIONAL_CALL)  ; undefined FUN_004a1e60()
    ADD ESP,0x4                         ; 004a2185
    ADD EAX,0x18                        ; 004a2188
    PUSH EAX                            ; 004a218b
    CALL FUN_0040d420                   ; 004a218c
        ;   XREF to: 0040d420 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d420()
    ADD ESP,0x4                         ; 004a2191
    LEA EBX,[EAX + -0x18]               ; 004a2194
    PUSH 0x0                            ; 004a2197
    LEA EAX,[ESP + 0x4]                 ; 004a2199
    PUSH EAX                            ; 004a219d
    PUSH 0x0                            ; 004a219e
    PUSH 0x0                            ; 004a21a0
    MOV EDX,dword ptr [ESP + 0x120]     ; 004a21a2
    PUSH EDX                            ; 004a21a9
    MOV dword ptr [EBX + 0x14],0x5f6ee4 ; 004a21aa | PTR_FUN_005f6ee4
    CALL FUN_00461070                   ; 004a21b1
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; undefined FUN_00461070()
    ADD ESP,0x14                        ; 004a21b6
    MOV ECX,dword ptr [ESP + 0x118]     ; 004a21b9
    PUSH ECX                            ; 004a21c0
    MOV ESI,dword ptr [ESP + 0x118]     ; 004a21c1
    PUSH ESI                            ; 004a21c8
    LEA EAX,[ESP + 0x8]                 ; 004a21c9
    PUSH EAX                            ; 004a21cd
    LEA EAX,[EBX + 0x18]                ; 004a21ce
    PUSH EAX                            ; 004a21d1
    CALL FUN_0040d5a0                   ; 004a21d2
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d5a0()
    MOV EAX,dword ptr [EBX + 0x24]      ; 004a21d7
    MOV dword ptr [EBX + 0x8],EAX       ; 004a21da
    MOV EAX,dword ptr [EBX + 0x28]      ; 004a21dd
    ADD ESP,0x10                        ; 004a21e0
    MOV dword ptr [EBX + 0xc],EAX       ; 004a21e3
    MOV EAX,EBX                         ; 004a21e6
    ADD ESP,0x100                       ; 004a21e8
    POP ESI                             ; 004a21ee
    POP EBX                             ; 004a21ef
    RET                                 ; 004a21f0

