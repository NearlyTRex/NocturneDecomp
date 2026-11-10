; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_FUN_00580f70(void)
;
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
;
; XREF[4]:
;   core_game.cpp_CGame_runGameSession_FUN_004b7f90 at 004b8729
;   unkafter_minecar.cpp_FUN_004ec8ce at 004ec8e3
;   wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0 at 0057a979
;   wincore_winvideo.cpp_playMovie_FUN_00582eb0 at 005831aa
;
; Referenced Globals:
;   void* PTR_DispatchMessageA_005b34b4 = 001b3ac0
;   void* PTR_PeekMessageA_005b34e4 = 001b3b80
;   void* PTR_TranslateMessage_005b350c = 001b3c24
;   void* PTR_Sleep_005b3658 = 001b4236
;   undefined4 DAT_00607288
;   undefined4 DAT_0060728c
;   undefined4 DAT_02d21b80
;
; Called Functions:
;   DispatchMessageA
;   PeekMessageA
;   Sleep
;   TranslateMessage
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00580f70
        ;   Label: wincore_winrun.cpp_FUN_00580f70
    PUSH ESI                            ; 00580f71
    PUSH EDI                            ; 00580f72
    SUB ESP,0x1c                        ; 00580f73
    XOR EDX,EDX                         ; 00580f76
    XOR EAX,EAX                         ; 00580f78
    XOR EBX,EBX                         ; 00580f7a
    CMP dword ptr [EDX + 0x2d21b90],0x1 ; 00580f7c
        ;   Label: LAB_00580f7c
    JZ 0x00580fc3                       ; 00580f83
        ;   XREF to: 00580fc3 (CONDITIONAL_JUMP)  ; LAB_00580fc3
    ADD EDX,0x4                         ; 00580f85
        ;   Label: LAB_00580f85
    INC EAX                             ; 00580f88
    MOV dword ptr [EDX + 0x2d21b8c],EBX ; 00580f89
    CMP EAX,0x258                       ; 00580f8f
    JL 0x00580f7c                       ; 00580f94
        ;   XREF to: 00580f7c (CONDITIONAL_JUMP)  ; LAB_00580f7c
    XOR EBX,EBX                         ; 00580f96
    PUSH 0x1                            ; 00580f98
        ;   Label: LAB_00580f98
    PUSH EBX                            ; 00580f9a
    PUSH EBX                            ; 00580f9b
    PUSH EBX                            ; 00580f9c
    LEA EAX,[ESP + 0x10]                ; 00580f9d
    PUSH EAX                            ; 00580fa1
    CALL dword ptr CS:[0x5b34e4]        ; 00580fa2 | PTR_PeekMessageA_005b34e4
    TEST EAX,EAX                        ; 00580fa9
    JZ 0x00580fcb                       ; 00580fab
        ;   XREF to: 00580fcb (CONDITIONAL_JUMP)  ; LAB_00580fcb
    MOV EAX,ESP                         ; 00580fad
    PUSH EAX                            ; 00580faf
    CALL dword ptr CS:[0x5b350c]        ; 00580fb0 | PTR_TranslateMessage_005b350c
    MOV EAX,ESP                         ; 00580fb7
    PUSH EAX                            ; 00580fb9
    CALL dword ptr CS:[0x5b34b4]        ; 00580fba | PTR_DispatchMessageA_005b34b4
    JMP 0x00580f98                      ; 00580fc1
        ;   XREF to: 00580f98 (UNCONDITIONAL_JUMP)  ; LAB_00580f98
    MOV byte ptr [EAX + 0x1c6cef0],BL   ; 00580fc3
        ;   Label: LAB_00580fc3
    JMP 0x00580f85                      ; 00580fc9
        ;   XREF to: 00580f85 (UNCONDITIONAL_JUMP)  ; LAB_00580f85
    MOV ESI,dword ptr [0x00607288]      ; 00580fcb | DAT_00607288
        ;   Label: LAB_00580fcb
    CMP EBX,ESI                         ; 00580fd1
    JNZ 0x00580fef                      ; 00580fd3
        ;   XREF to: 00580fef (CONDITIONAL_JUMP)  ; LAB_00580fef
    MOV EDI,dword ptr [0x02d21b80]      ; 00580fd5 | DAT_02d21b80
    CMP ESI,EDI                         ; 00580fdb
    JNZ 0x00580fef                      ; 00580fdd
        ;   XREF to: 00580fef (CONDITIONAL_JUMP)  ; LAB_00580fef
    CMP EDI,dword ptr [0x00607288]      ; 00580fdf | DAT_00607288
    JZ 0x00580ff6                       ; 00580fe5
        ;   XREF to: 00580ff6 (CONDITIONAL_JUMP)  ; LAB_00580ff6
    CMP EBX,dword ptr [0x0060728c]      ; 00580fe7 | DAT_0060728c
    JNZ 0x00580f98                      ; 00580fed
        ;   XREF to: 00580f98 (CONDITIONAL_JUMP)  ; LAB_00580f98
    ADD ESP,0x1c                        ; 00580fef
        ;   Label: LAB_00580fef
    POP EDI                             ; 00580ff2
    POP ESI                             ; 00580ff3
    POP EBX                             ; 00580ff4
    RET                                 ; 00580ff5
    PUSH 0x14                           ; 00580ff6
        ;   Label: LAB_00580ff6
    CALL dword ptr CS:[0x5b3658]        ; 00580ff8 | PTR_Sleep_005b3658
    CMP EBX,dword ptr [0x0060728c]      ; 00580fff | DAT_0060728c
    JNZ 0x00580f98                      ; 00581005
        ;   XREF to: 00580f98 (CONDITIONAL_JUMP)  ; LAB_00580f98
    ADD ESP,0x1c                        ; 00581007
    POP EDI                             ; 0058100a
    POP ESI                             ; 0058100b
    POP EBX                             ; 0058100c
    RET                                 ; 0058100d

