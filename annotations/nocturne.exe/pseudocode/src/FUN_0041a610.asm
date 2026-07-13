; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041a610(int param_1)
;
;
; XREF[6]:
;   FUN_00415d20 at 00415d5d
;   FUN_0041e300 at 0041e322
;   FUN_00487370 at 00487386
;   FUN_0048cc10 at 0048cc18
;   FUN_00516ba0 at 00516bc4
;   FUN_00553d90 at 00553db2
;
; Referenced Globals:
;   undefined4 DAT_0059aa60
;
; Called Functions:
;   FUN_005644a7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0041a610
        ;   Label: FUN_0041a610
    PUSH 0x59aa60                       ; 0041a614 | DAT_0059aa60
    PUSH 0x8                            ; 0041a619
    ADD EAX,0xb4                        ; 0041a61b
    PUSH EAX                            ; 0041a620
    CALL FUN_005644a7                   ; 0041a621
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined FUN_005644a7()
    SUB EAX,0xb4                        ; 0041a626
    MOV dword ptr [EAX + 0x8],0x0       ; 0041a62b
    FLD float ptr [EAX + 0x8]           ; 0041a632
    LEA EDX,[EAX + 0xc]                 ; 0041a635
    FST float ptr [EAX + 0x4]           ; 0041a638
    FSTP float ptr [EAX]                ; 0041a63b
    MOV dword ptr [EDX + 0x8],0x0       ; 0041a63d
    MOV ECX,dword ptr [EDX + 0x8]       ; 0041a644
    MOV dword ptr [EDX + 0x4],ECX       ; 0041a647
    MOV ECX,dword ptr [EDX + 0x4]       ; 0041a64a
    MOV dword ptr [EDX],ECX             ; 0041a64d
    LEA EDX,[EAX + 0xa4]                ; 0041a64f
    MOV dword ptr [EDX + 0x8],0x0       ; 0041a655
    MOV ECX,dword ptr [EDX + 0x8]       ; 0041a65c
    MOV dword ptr [EDX + 0x4],ECX       ; 0041a65f
    MOV ECX,dword ptr [EDX + 0x4]       ; 0041a662
    MOV dword ptr [EDX],ECX             ; 0041a665
    LEA EDX,[EAX + 0x4c]                ; 0041a667
    MOV dword ptr [EAX + 0x94],0x0      ; 0041a66a
    MOV dword ptr [EDX + 0x8],0x0       ; 0041a674
    MOV ECX,dword ptr [EDX + 0x8]       ; 0041a67b
    MOV dword ptr [EDX + 0x4],ECX       ; 0041a67e
    MOV ECX,dword ptr [EDX + 0x4]       ; 0041a681
    MOV dword ptr [EDX],ECX             ; 0041a684
    LEA EDX,[EAX + 0x40]                ; 0041a686
    MOV dword ptr [EDX + 0x8],0x0       ; 0041a689
    MOV ECX,dword ptr [EDX + 0x8]       ; 0041a690
    MOV dword ptr [EDX + 0x4],ECX       ; 0041a693
    MOV ECX,dword ptr [EDX + 0x4]       ; 0041a696
    MOV dword ptr [EDX],ECX             ; 0041a699
    LEA EDX,[EAX + 0x70]                ; 0041a69b
    MOV dword ptr [EDX + 0x8],0x0       ; 0041a69e
    ADD ESP,0xc                         ; 0041a6a5
    MOV ECX,dword ptr [EDX + 0x8]       ; 0041a6a8
    MOV dword ptr [EDX + 0x4],ECX       ; 0041a6ab
    MOV ECX,dword ptr [EDX + 0x4]       ; 0041a6ae
    MOV dword ptr [EDX],ECX             ; 0041a6b1
    MOV dword ptr [EAX + 0x254],0x0     ; 0041a6b3
    RET                                 ; 0041a6bd

