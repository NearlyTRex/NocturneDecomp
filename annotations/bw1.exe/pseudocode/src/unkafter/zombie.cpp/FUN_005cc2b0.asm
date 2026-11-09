; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_zombie_cpp_FUN_005cc2b0(uint param_1,uint param_2)
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
;   crt_unknown.c_FUN_005c8094 at 005c8266
;
; Called Functions:
;   unkafter_zombie.cpp_FUN_005cc6e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cc2b0
        ;   Label: unkafter_zombie.cpp_FUN_005cc2b0
    SUB ESP,0x24                        ; 005cc2b1
    MOV EBX,dword ptr [ESP + 0x2c]      ; 005cc2b4
    MOV EDX,dword ptr [ESP + 0x30]      ; 005cc2b8
    MOV EAX,EBX                         ; 005cc2bc
    AND EAX,0xfe00                      ; 005cc2be
    SHR EAX,0x9                         ; 005cc2c3
    ADD EAX,0x50                        ; 005cc2c6
    MOV dword ptr [ESP + 0x14],EAX      ; 005cc2c9
    MOV EAX,EBX                         ; 005cc2cd
    AND EAX,0x1e0                       ; 005cc2cf
    SHR EAX,0x5                         ; 005cc2d4
    DEC EAX                             ; 005cc2d7
    MOV dword ptr [ESP + 0x10],EAX      ; 005cc2d8
    MOV EAX,EDX                         ; 005cc2dc
    AND EAX,0xf800                      ; 005cc2de
    SHR EAX,0xb                         ; 005cc2e3
    MOV dword ptr [ESP + 0x8],EAX       ; 005cc2e6
    MOV EAX,EDX                         ; 005cc2ea
    AND EAX,0x7e0                       ; 005cc2ec
    SHR EAX,0x5                         ; 005cc2f1
    MOV dword ptr [ESP + 0x4],EAX       ; 005cc2f4
    MOV EAX,EDX                         ; 005cc2f8
    AND EAX,0x1f                        ; 005cc2fa
    ADD EAX,EAX                         ; 005cc2fd
    AND EBX,0x1f                        ; 005cc2ff
    MOV dword ptr [ESP],EAX             ; 005cc302
    MOV EAX,ESP                         ; 005cc305
    MOV EDX,0xffffffff                  ; 005cc307
    PUSH EAX                            ; 005cc30c
    MOV dword ptr [ESP + 0x10],EBX      ; 005cc30d
    MOV dword ptr [ESP + 0x24],EDX      ; 005cc311
    CALL unkafter_zombie.cpp_FUN_005cc6e0 ; 005cc315
        ;   XREF to: 005cc6e0 (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005cc6e0()
    ADD ESP,0x4                         ; 005cc31a
    ADD ESP,0x24                        ; 005cc31d
    POP EBX                             ; 005cc320
    RET                                 ; 005cc321

