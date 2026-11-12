; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_0042b550(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[2]:
;   core_helldog.cpp_CDog_processDeathState_FUN_005ac520 at 005ac58c
;   core_script.cpp_FUN_00522350 at 00527eaf
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 0042b550
        ;   Label: core_charactr.cpp_FUN_0042b550
    MOV ECX,dword ptr [ESP + 0x10]      ; 0042b553
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042b557
    MOV dword ptr [ECX + 0x10a28],EAX   ; 0042b55b
    MOV EAX,dword ptr [ESP + 0x18]      ; 0042b561
    MOV dword ptr [ECX + 0x10a2c],EAX   ; 0042b565
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0042b56b
    MOV dword ptr [ECX + 0x10a30],EAX   ; 0042b56f
    MOV EAX,dword ptr [ESP + 0x20]      ; 0042b575
    MOV dword ptr [ECX + 0x10a34],EAX   ; 0042b579
    MOV EAX,dword ptr [ESP + 0x24]      ; 0042b57f
    MOV dword ptr [ESP],EAX             ; 0042b583
    MOV EAX,dword ptr [ESP + 0x28]      ; 0042b586
    MOV dword ptr [ESP + 0x4],EAX       ; 0042b58a
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0042b58e
    LEA EDX,[ECX + 0x10a3c]             ; 0042b592
    MOV dword ptr [ESP + 0x8],EAX       ; 0042b598
    MOV EAX,ESP                         ; 0042b59c
    CMP EDX,EAX                         ; 0042b59e
    JNZ 0x0042b5b0                      ; 0042b5a0
        ;   XREF to: 0042b5b0 (CONDITIONAL_JUMP)  ; LAB_0042b5b0
    MOV EAX,dword ptr [ESP + 0x20]      ; 0042b5a2
    MOV dword ptr [ECX + 0x10a38],EAX   ; 0042b5a6
    ADD ESP,0xc                         ; 0042b5ac
    RET                                 ; 0042b5af
    MOV EAX,dword ptr [ESP + 0x24]      ; 0042b5b0
        ;   Label: LAB_0042b5b0
    MOV dword ptr [EDX],EAX             ; 0042b5b4
    MOV EAX,dword ptr [ESP + 0x4]       ; 0042b5b6
    MOV dword ptr [EDX + 0x4],EAX       ; 0042b5ba
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042b5bd
    MOV dword ptr [EDX + 0x8],EAX       ; 0042b5c1
    MOV EAX,dword ptr [ESP + 0x20]      ; 0042b5c4
    MOV dword ptr [ECX + 0x10a38],EAX   ; 0042b5c8
    ADD ESP,0xc                         ; 0042b5ce
    RET                                 ; 0042b5d1

