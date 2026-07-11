; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00482780(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4,undefined4 param_5)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   FUN_0048ab60 at 0048ac94
;   FUN_0048afe0 at 0048b02c
;
; Called Functions:
;   FUN_0040dda0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00482780
        ;   Label: FUN_00482780
    SUB ESP,0x4                         ; 00482781
    MOV EBX,dword ptr [ESP + 0xc]       ; 00482784
    MOV ECX,dword ptr [ESP + 0x10]      ; 00482788
    MOV EDX,dword ptr [ESP + 0x18]      ; 0048278c
    LEA EAX,[EBX + 0x4]                 ; 00482790
    CMP EAX,ECX                         ; 00482793
    JNZ 0x004827ef                      ; 00482795
        ;   XREF to: 004827ef (CONDITIONAL_JUMP)  ; LAB_004827ef
    LEA EAX,[EBX + 0x1c]                ; 00482797
        ;   Label: LAB_00482797
    TEST EDX,EDX                        ; 0048279a
    JZ 0x00482803                       ; 0048279c
        ;   XREF to: 00482803 (CONDITIONAL_JUMP)  ; LAB_00482803
    CMP EAX,EDX                         ; 0048279e
    JZ 0x004827b2                       ; 004827a0
        ;   XREF to: 004827b2 (CONDITIONAL_JUMP)  ; LAB_004827b2
    MOV ECX,dword ptr [EDX]             ; 004827a2
    MOV dword ptr [EAX],ECX             ; 004827a4
    MOV ECX,dword ptr [EDX + 0x4]       ; 004827a6
    MOV dword ptr [EAX + 0x4],ECX       ; 004827a9
    MOV ECX,dword ptr [EDX + 0x8]       ; 004827ac
    MOV dword ptr [EAX + 0x8],ECX       ; 004827af
    PUSH 0x3f866666                     ; 004827b2
        ;   Label: LAB_004827b2
    MOV EAX,dword ptr [ESP + 0x18]      ; 004827b7
    MOV dword ptr [EBX + 0x18],0x0      ; 004827bb
    PUSH 0x3f733333                     ; 004827c2
    MOV dword ptr [EBX + 0x14],EAX      ; 004827c7
    CALL FUN_0040dda0                   ; 004827ca
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dda0()
    MOV dword ptr [ESP + 0x8],EAX       ; 004827cf
    FLD float ptr [ESP + 0x8]           ; 004827d3
    ADD ESP,0x8                         ; 004827d7
    MOV dword ptr [EBX],0x1             ; 004827da
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004827e0
    FSTP float ptr [EBX + 0x10]         ; 004827e4
    MOV dword ptr [EBX + 0x28],EAX      ; 004827e7
    ADD ESP,0x4                         ; 004827ea
    POP EBX                             ; 004827ed
    RET                                 ; 004827ee
    PUSH ESI                            ; 004827ef
        ;   Label: LAB_004827ef
    MOV ESI,dword ptr [ECX]             ; 004827f0
    MOV dword ptr [EAX],ESI             ; 004827f2
    MOV ESI,dword ptr [ECX + 0x4]       ; 004827f4
    MOV dword ptr [EAX + 0x4],ESI       ; 004827f7
    MOV ESI,dword ptr [ECX + 0x8]       ; 004827fa
    MOV dword ptr [EAX + 0x8],ESI       ; 004827fd
    POP ESI                             ; 00482800
    JMP 0x00482797                      ; 00482801
        ;   XREF to: 00482797 (UNCONDITIONAL_JUMP)  ; LAB_00482797
    MOV dword ptr [EAX + 0x8],EDX       ; 00482803
        ;   Label: LAB_00482803
    MOV EDX,dword ptr [EAX + 0x8]       ; 00482806
    MOV dword ptr [EAX + 0x4],EDX       ; 00482809
    MOV EDX,dword ptr [EAX + 0x4]       ; 0048280c
    MOV dword ptr [EAX],EDX             ; 0048280f
    JMP 0x004827b2                      ; 00482811
        ;   XREF to: 004827b2 (UNCONDITIONAL_JUMP)  ; LAB_004827b2

