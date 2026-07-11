; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005709b0(uint param_1,uint param_2)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   FUN_0056c864 at 0056ca36
;
; Called Functions:
;   FUN_00565fb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005709b0
        ;   Label: FUN_005709b0
    SUB ESP,0x24                        ; 005709b1
    MOV EBX,dword ptr [ESP + 0x2c]      ; 005709b4
    MOV EDX,dword ptr [ESP + 0x30]      ; 005709b8
    MOV EAX,EBX                         ; 005709bc
    AND EAX,0xfe00                      ; 005709be
    SHR EAX,0x9                         ; 005709c3
    ADD EAX,0x50                        ; 005709c6
    MOV dword ptr [ESP + 0x14],EAX      ; 005709c9
    MOV EAX,EBX                         ; 005709cd
    AND EAX,0x1e0                       ; 005709cf
    SHR EAX,0x5                         ; 005709d4
    DEC EAX                             ; 005709d7
    MOV dword ptr [ESP + 0x10],EAX      ; 005709d8
    MOV EAX,EDX                         ; 005709dc
    AND EAX,0xf800                      ; 005709de
    SHR EAX,0xb                         ; 005709e3
    MOV dword ptr [ESP + 0x8],EAX       ; 005709e6
    MOV EAX,EDX                         ; 005709ea
    AND EAX,0x7e0                       ; 005709ec
    SHR EAX,0x5                         ; 005709f1
    MOV dword ptr [ESP + 0x4],EAX       ; 005709f4
    MOV EAX,EDX                         ; 005709f8
    AND EAX,0x1f                        ; 005709fa
    ADD EAX,EAX                         ; 005709fd
    AND EBX,0x1f                        ; 005709ff
    MOV dword ptr [ESP],EAX             ; 00570a02
    MOV EAX,ESP                         ; 00570a05
    MOV EDX,0xffffffff                  ; 00570a07
    PUSH EAX                            ; 00570a0c
    MOV dword ptr [ESP + 0x10],EBX      ; 00570a0d
    MOV dword ptr [ESP + 0x24],EDX      ; 00570a11
    CALL FUN_00565fb0                   ; 00570a15
        ;   XREF to: 00565fb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00565fb0()
    ADD ESP,0x4                         ; 00570a1a
    ADD ESP,0x24                        ; 00570a1d
    POP EBX                             ; 00570a20
    RET                                 ; 00570a21

