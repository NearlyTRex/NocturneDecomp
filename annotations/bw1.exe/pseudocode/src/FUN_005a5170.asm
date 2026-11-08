; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005a5170(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0043e5c0
;   FUN_004a0410
;   FUN_00522fa0
;   FUN_00567370
;   FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a5170
        ;   Label: FUN_005a5170
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a5171
    PUSH EBX                            ; 005a5175
    CALL FUN_004a0410                   ; 005a5176
        ;   XREF to: 004a0410 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0410()
    ADD ESP,0x4                         ; 005a517b
    ADD EAX,0xc268                      ; 005a517e
    PUSH EAX                            ; 005a5183
    CALL FUN_00567370                   ; 005a5184
        ;   XREF to: 00567370 (UNCONDITIONAL_CALL)  ; undefined FUN_00567370()
    ADD ESP,0x4                         ; 005a5189
    ADD EAX,0x23a4                      ; 005a518c
    PUSH EAX                            ; 005a5191
    CALL FUN_0043e5c0                   ; 005a5192
        ;   XREF to: 0043e5c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043e5c0()
    ADD ESP,0x4                         ; 005a5197
    ADD EAX,0x3ab30                     ; 005a519a
    PUSH EAX                            ; 005a519f
    CALL FUN_0043e5c0                   ; 005a51a0
        ;   XREF to: 0043e5c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043e5c0()
    ADD ESP,0x4                         ; 005a51a5
    ADD EAX,0x3ab30                     ; 005a51a8
    PUSH EAX                            ; 005a51ad
    CALL FUN_0043e5c0                   ; 005a51ae
        ;   XREF to: 0043e5c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043e5c0()
    ADD ESP,0x4                         ; 005a51b3
    ADD EAX,0x3ab34                     ; 005a51b6
    PUSH EAX                            ; 005a51bb
    CALL FUN_00522fa0                   ; 005a51bc
        ;   XREF to: 00522fa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00522fa0()
    ADD ESP,0x4                         ; 005a51c1
    LEA EBX,[EAX + 0xfff41860]          ; 005a51c4
    PUSH 0x5f8ced                       ; 005a51ca
    LEA EAX,[EBX + 0x158]               ; 005a51cf
    PUSH EAX                            ; 005a51d5
    MOV dword ptr [EBX + 0x154],0x6077c4 ; 005a51d6
    CALL FUN_00569f50                   ; 005a51e0
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f50()
    ADD ESP,0x8                         ; 005a51e5
    PUSH 0x5f8cf8                       ; 005a51e8
    LEA EAX,[EBX + 0xc268]              ; 005a51ed
    PUSH EAX                            ; 005a51f3
    CALL FUN_00569f50                   ; 005a51f4
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f50()
    MOV dword ptr [EBX + 0x2fec],0x40000000 ; 005a51f9
    MOV dword ptr [EBX + 0x2ff0],0x40400000 ; 005a5203
    MOV dword ptr [EBX + 0x2ff4],0x42480000 ; 005a520d
    MOV dword ptr [EBX + 0x2ff8],0x42c80000 ; 005a5217
    MOV dword ptr [EBX + 0xbf3d0],0x0   ; 005a5221
    MOV dword ptr [EBX + 0xbe79c],0x0   ; 005a522b
    MOV dword ptr [EBX + 0xbf3cc],0x0   ; 005a5235
    MOV dword ptr [EBX + 0xbf3e8],0x0   ; 005a523f
    MOV dword ptr [EBX + 0xbf3ec],0x0   ; 005a5249
    MOV dword ptr [EBX + 0xbf3f0],0x0   ; 005a5253
    MOV dword ptr [EBX + 0xbf3f4],0x0   ; 005a525d
    MOV dword ptr [EBX + 0xbf3e4],0x0   ; 005a5267
    MOV dword ptr [EBX + 0xbf3f8],0x0   ; 005a5271
    MOV dword ptr [EBX + 0xbf3d4],0x41200000 ; 005a527b
    ADD ESP,0x8                         ; 005a5285
    MOV dword ptr [EBX + 0xbf3e0],0x1   ; 005a5288
    MOV EAX,EBX                         ; 005a5292
    MOV dword ptr [EBX + 0x27c0],0x0    ; 005a5294
    POP EBX                             ; 005a529e
    RET                                 ; 005a529f

